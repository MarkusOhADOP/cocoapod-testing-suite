//
//  BIDMADAdx.h
//  BidmadSDK
//
//  Created by 김선정 on 2017. 6. 19..
//  Copyright © 2017년 ADOP Co., Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "OpenBiddingBanner.h"
#import "OpenBiddingInterstitial.h"
#import "OpenBiddingRewardVideo.h"

#import <BidmadSDK/BIDMADUtil.h>
#if __has_include(<GoogleMobileAds/GoogleMobileAds.h>)
#import <GoogleMobileAds/GoogleMobileAds.h>
#import <BidmadSDK/BidmadSDK.h>
#define GOOGLESDK_EXIST
#endif

@class OpenBiddingBanner;
@class OpenBiddingInterstitial;
@class OpenBiddingRewardVideo;

#ifdef GOOGLESDK_EXIST
@interface OpenBiddingAdmob : NSObject<GADBannerViewDelegate, GADFullScreenContentDelegate>

#else
@interface OpenBiddingAdmob : NSObject
#endif

@property (strong,nonatomic) OpenBiddingBanner* banner;
@property (strong,nonatomic) OpenBiddingInterstitial* interstitial;
@property (strong,nonatomic) OpenBiddingRewardVideo* rewardVideo;

- (id)initWithAdBanner:(NSDictionary *)dic OpenBiddingBanner:(OpenBiddingBanner *)banner;
- (id)initWithInterstitial:(NSDictionary *)dic OpenBiddingInterstitial:(OpenBiddingInterstitial *)interstitial;
- (id)initWithRewardVideo:(NSDictionary *)dic OpenBiddingReward:(OpenBiddingRewardVideo *)rewardVideo userId:(NSString *) userId;

- (void)showAdmobBanner:(UIViewController *)pvc bannerContainer:(UIView*)bannerContainer;
- (void)showAdmobInterstitial:(UIViewController *)pvc;
- (void)showAdmobRewardVideo: (UIViewController *)pvc;

- (void)removeBannerAds;
- (void)removeInterstitialAds;
- (void)gogoInterstitial;
- (void)gogoRewardVideo;

- (void)setTestDevice:(NSString *) deviceId;

@end
