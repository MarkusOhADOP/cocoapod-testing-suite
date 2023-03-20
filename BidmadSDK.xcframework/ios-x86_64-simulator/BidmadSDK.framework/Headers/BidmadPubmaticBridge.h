//
//  BidmadPubmaticBridge.h
//  BidmadAdapterFNC
//
//  Created by Seungsub Oh on 2023/02/02.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol BidmadPOBRewardedAd <NSObject>

- (NSObject<BidmadPOBRewardedAd> *)rewardedAdWithPublisherId:(NSString *)publisherId
                                           profileId:(NSNumber *)profileId
                                            adUnitId:(NSString *)adUnitId;
- (void)setDelegate:(id)delegate;
- (void)loadAd;
- (void)showFromViewController:(UIViewController *)viewController;

@end

@protocol BidmadPOBRewardedAdDelegate <NSObject>

- (void)rewardedAdDidReceiveAd:(NSObject<BidmadPOBRewardedAd> *)rewardedAd;
- (void)rewardedAd:(NSObject<BidmadPOBRewardedAd> *)rewardedAd didFailToReceiveAdWithError:(NSError *)error;
- (void)rewardedAdWillPresentAd:(NSObject<BidmadPOBRewardedAd> *)rewardedAd;
- (void)rewardedAdDidDismissAd:(NSObject<BidmadPOBRewardedAd> *)rewardedAd;
- (void)rewardedAdDidClickAd:(NSObject<BidmadPOBRewardedAd> *)rewardedAd;
- (void)rewardedAd:(NSObject<BidmadPOBRewardedAd> *)rewardedAd shouldReward:(id)reward;

@end

@protocol BidmadPOBApplicationInfo <NSObject>

- (void)setStoreURL:(NSURL *)storeURL;

@end

@protocol BidmadOpenWrapSDK <NSObject>

- (void)setApplicationInfo:(NSObject<BidmadPOBApplicationInfo> *)applicationInfo;
- (void)setCoppaEnabled:(BOOL)coppaEnabled;

@end

@protocol BidmadPOBInterstitial <NSObject>

- (NSObject<BidmadPOBInterstitial> *)initWithPublisherId:publisherId profileId:profileId adUnitId:adUnitId;
- (void)setDelegate:(id)delegate;
- (void)showFromViewController:(UIViewController *)viewController;
- (void)loadAd;

@end

@protocol BidmadPOBInterstitialDelegate <NSObject>

- (void)interstitialDidReceiveAd:(NSObject<BidmadPOBInterstitial> *)interstitial;
- (void)interstitial:(NSObject<BidmadPOBInterstitial> *)interstitial didFailToReceiveAdWithError:(NSError *)error;
- (void)interstitialWillPresentAd:(NSObject<BidmadPOBInterstitial> *)interstitial;
- (void)interstitialDidDismissAd:(NSObject<BidmadPOBInterstitial> *)interstitial;
- (void)interstitialDidClickAd:(NSObject<BidmadPOBInterstitial> *)interstitial;

@end

@protocol BidmadPOBAdSize <NSObject>

- (NSObject<BidmadPOBAdSize> *)initWithCGSize:(CGSize)size;

@end

@protocol BidmadPOBBannerView <NSObject>

- (UIView<BidmadPOBBannerView> *)initWithPublisherId:(NSString *)publisherId
                                           profileId:(NSNumber *)profileId
                                            adUnitId:(NSString *)adUnitId
                                             adSizes:(NSArray<NSObject<BidmadPOBAdSize> *> *)adSizes;
- (void)setDelegate:(id)delegate;
- (void)loadAd;
- (void)pauseAutoRefresh;

@end

@protocol BidmadPOBBannerViewDelegate <NSObject>

- (void)bannerViewDidReceiveAd:(NSObject<BidmadPOBBannerView> *)bannerView;
- (void)bannerView:(NSObject<BidmadPOBBannerView> *)bannerView didFailToReceiveAdWithError:(NSError *)error;
- (void)bannerViewDidClickAd:(NSObject<BidmadPOBBannerView> *)bannerView;

@end

NS_ASSUME_NONNULL_END
