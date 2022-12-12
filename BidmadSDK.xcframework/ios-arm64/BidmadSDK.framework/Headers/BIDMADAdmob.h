//
//  BIDMADAdx.h
//  BidmadSDK
//
//  Created by 김선정 on 2017. 6. 19..
//  Copyright © 2017년 ADOP Co., Ltd. All rights reserved.
//

#pragma clang diagnostic ignored "-Wobjc-property-no-attribute"

#import <Foundation/Foundation.h>

#import "BIDMADBanner.h"
#import "BIDMADInterstitial.h"
#import "BIDMADRewardVideo.h"
#import <GoogleMobileAds/GoogleMobileAds.h>
#import "BIDMADSetting.h"
#import "BIDMADUtil.h"

@class BIDMADBanner;
@class BIDMADInterstitial;
@class BIDMADRewardVideo;
@class BIDMADAppOpenAd;

@interface BIDMADAdmob : NSObject<GADBannerViewDelegate, GADFullScreenContentDelegate>

NS_ASSUME_NONNULL_BEGIN

@property (weak,nonatomic) BIDMADBanner* banner;
@property (weak,nonatomic) BIDMADInterstitial* interstitial;
@property (weak,nonatomic) BIDMADRewardVideo* rewardVideo;

- (id)initWithAdBanner:(NSDictionary *)dic bidmadbanner:(BIDMADBanner *)banner isChildDirectedAds:(NSNumber* __nullable)isChild;
- (id)initWithRewardVideo:(NSDictionary *)dic bidmadReward:(BIDMADRewardVideo *)rewardVideo isChildDirectedAds:(NSNumber* __nullable)isChild;
- (id)initWithInterstitial:(NSDictionary *)dic bidmadInterstitial:(BIDMADInterstitial *)interstitial isChildDirectedAds:(NSNumber* __nullable)isChild;
- (void)showAdmobBanner:(UIViewController *)pvc bannerContainer:(UIView *)bannerContainer;
- (void)loadAdmobInterstitial;
- (void)showAdmobInterstitial:(UIViewController *)parentViewController;
- (void)removeAll;
- (void)removeInterstitialAds;
- (void)loadAdmobRewardVideo;
- (void)showAdmobRewardVideo:(UIViewController *)parentViewController;

@end

NS_ASSUME_NONNULL_END
