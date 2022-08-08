//
//  BidmadAdmobAdapterPangleBanner.h
//  BidmadAdapterFNC
//
//  Created by Kenneth on 2022/07/08.
//

#pragma clang diagnostic ignored "-Wobjc-property-no-attribute"

#import <UIKit/UIKit.h>
#import <GoogleMobileAds/GoogleMobileAds.h>
#import <BUAdSDK/BUAdSDK.h>

NS_ASSUME_NONNULL_BEGIN

@interface BidmadAdmobAdapterPangleBanner : NSObject<GADCustomEventBanner, BUNativeExpressBannerViewDelegate>

@property(nonatomic, weak, nullable) id<GADCustomEventBannerDelegate> delegate;

- (void)requestBannerAd:(GADAdSize)adSize
              parameter:(nullable NSString *)serverParameter
                  label:(nullable NSString *)serverLabel
                request:(nonnull GADCustomEventRequest *)request;

- (void)nativeExpressBannerAdView:(BUNativeExpressBannerView *)bannerAdView didLoadFailWithError:(NSError *_Nullable)error;
- (void)nativeExpressBannerAdViewRenderSuccess:(BUNativeExpressBannerView *)bannerAdView;
- (void)nativeExpressBannerAdViewRenderFail:(BUNativeExpressBannerView *)bannerAdView error:(NSError * __nullable)error;
- (void)nativeExpressBannerAdViewDidClick:(BUNativeExpressBannerView *)bannerAdView;
- (void)nativeExpressBannerAdView:(BUNativeExpressBannerView *)bannerAdView dislikeWithReason:(NSArray<BUDislikeWords *> *_Nullable)filterwords;

@end

NS_ASSUME_NONNULL_END
