//
//  BidmadAdmobAdapterPangleReward.h
//  BidmadAdapterFNC
//
//  Created by Kenneth on 2022/07/08.
//

#pragma clang diagnostic ignored "-Wobjc-property-no-attribute"

#import <UIKit/UIKit.h>
#import <GoogleMobileAds/GoogleMobileAds.h>
#import <BUAdSDK/BUAdSDK.h>

NS_ASSUME_NONNULL_BEGIN

@interface BidmadAdmobAdapterPangleReward : NSObject<GADMediationAdapter, GADMediationRewardedAd, BURewardedVideoAdDelegate>

@property(nonatomic, weak, nullable) id<GADMediationRewardedAdEventDelegate> delegate;

- (void)loadRewardedAdForAdConfiguration:(nonnull GADMediationRewardedAdConfiguration *)adConfiguration completionHandler:(nonnull GADMediationRewardedLoadCompletionHandler)completionHandler;
- (void)presentFromViewController:(nonnull UIViewController *)viewController;

+ (GADVersionNumber)adapterVersion;
+ (GADVersionNumber)adSDKVersion;
+ (nullable Class<GADAdNetworkExtras>)networkExtrasClass;
//- (nonnull instancetype)init;

/**
 This method is called when video ad material loaded successfully.
 */
- (void)rewardedVideoAdDidLoad:(BURewardedVideoAd *)rewardedVideoAd;


/**
 This method is called when cached successfully.
 */
- (void)rewardedVideoAdVideoDidLoad:(BURewardedVideoAd *)rewardedVideoAd;

- (void)rewardedVideoAdDidLoad:(BURewardedVideoAd *)rewardedVideoAd;
- (void)rewardedVideoAd:(BURewardedVideoAd *)rewardedVideoAd didFailWithError:(NSError *_Nullable)error;
- (void)rewardedVideoAdVideoDidLoad:(BURewardedVideoAd *)rewardedVideoAd;
- (void)rewardedVideoAdWillVisible:(BURewardedVideoAd *)rewardedVideoAd;
- (void)rewardedVideoAdDidVisible:(BURewardedVideoAd *)rewardedVideoAd;
- (void)rewardedVideoAdWillClose:(BURewardedVideoAd *)rewardedVideoAd;
- (void)rewardedVideoAdDidClose:(BURewardedVideoAd *)rewardedVideoAd;
- (void)rewardedVideoAdDidClick:(BURewardedVideoAd *)rewardedVideoAd;
- (void)rewardedVideoAdDidPlayFinish:(BURewardedVideoAd *)rewardedVideoAd didFailWithError:(NSError *_Nullable)error;
- (void)rewardedVideoAdServerRewardDidSucceed:(BURewardedVideoAd *)rewardedVideoAd verify:(BOOL)verify;

@end

NS_ASSUME_NONNULL_END
