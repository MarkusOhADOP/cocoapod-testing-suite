//
//  BIDMADPangleBanner.h
//  BidmadSDK
//
//  Created by ADOP_Mac on 2021/06/25.
//  Copyright © 2021 ADOP Co., Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <BUFoundation/BUFoundation.h>
#import <BUAdSDK/BUAdSDK.h>
#import <BUVAAuxiliary/BUVAAuxiliary.h>

#define PANGLE_BANNER_TEST_APPID @"5185174"
#define PANGLE_BANNER_TEST_ID_320_50 @"946272949"
#define PANGLE_BANNER_TEST_ID_320_100 @"946272952"

/**
 Pangle only supports 300x250(point) and 320x50(point).
 When the 320x100 ad requests come in, pass onBannerError with reason being "Unsupported Ad Banner Size"
 */

@interface BIDMADPangleBanner : NSObject<BUNativeExpressBannerViewDelegate>

@property (weak,nonatomic) id bidmadControllerForCallbacks;
- (id)initWithAppID:(NSString *)appID pubID:(NSString *)pubID rootVC:(UIViewController *)rootVC parentView:(UIView *)parentView;
- (void)load;
- (void)setExtra:(NSDictionary<NSString *,id> *)extra;
- (void)setBidmadController:(id)bidmadController;
- (void)show;
- (void)hide;
- (void)remove;

#pragma mark Pangle Delegate Methods
- (void)nativeExpressBannerAdViewDidLoad:(BUNativeExpressBannerView *)bannerAdView;
- (void)nativeExpressBannerAdView:(BUNativeExpressBannerView *)bannerAdView didLoadFailWithError:(NSError *)error;
- (void)nativeExpressBannerAdViewRenderSuccess:(BUNativeExpressBannerView *)bannerAdView;
- (void)nativeExpressBannerAdViewRenderFail:(BUNativeExpressBannerView *)bannerAdView error:(NSError *)error;
- (void)nativeExpressBannerAdViewWillBecomVisible:(BUNativeExpressBannerView *)bannerAdView;
- (void)nativeExpressBannerAdViewDidClick:(BUNativeExpressBannerView *)bannerAdView;
- (void)nativeExpressBannerAdView:(BUNativeExpressBannerView *)bannerAdView dislikeWithReason:(NSArray<BUDislikeWords *> *)filterwords;
- (void)nativeExpressBannerAdViewDidCloseOtherController:(BUNativeExpressBannerView *)bannerAdView interactionType:(BUInteractionType)interactionType;

@end
