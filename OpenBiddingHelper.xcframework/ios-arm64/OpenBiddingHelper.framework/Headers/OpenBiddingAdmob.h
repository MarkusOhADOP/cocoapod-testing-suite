//
//  BIDMADAdx.h
//  BidmadSDK
//
//  Created by 김선정 on 2017. 6. 19..
//  Copyright © 2017년 ADOP Co., Ltd. All rights reserved.
//

#pragma clang diagnostic ignored "-Wobjc-property-no-attribute"

#import <Foundation/Foundation.h>

#import "OpenBiddingBanner.h"
#import "OpenBiddingInterstitial.h"
#import "OpenBiddingRewardVideo.h"
#import <BidmadSDK/BIDMADUtil.h>
#import <GoogleMobileAds/GoogleMobileAds.h>
#import <BidmadSDK/BidmadSDK.h>

@class OpenBiddingBanner;
@class OpenBiddingInterstitial;
@class OpenBiddingRewardVideo;

@interface OpenBiddingAdmob : NSObject<GADBannerViewDelegate, GADFullScreenContentDelegate>

@property (weak,nonatomic) OpenBiddingBanner* banner;
@property (strong,nonatomic) OpenBiddingRewardVideo* rewardVideo;

- (id)initWithAdBanner:(NSDictionary *)dic OpenBiddingBanner:(OpenBiddingBanner *)banner;
- (id)initWithAdBanner:(NSDictionary *)dict BidmadBanner:(BIDMADBanner *)banner;

- (id)initWithInterstitial:(NSDictionary *)dic OpenBiddingInterstitial:(OpenBiddingInterstitial *)interstitial;
- (id)initWithInterstitial:(NSDictionary *)dict BidmadInterstitial:(BIDMADInterstitial *)interstitial;

- (id)initWithRewardVideo:(NSDictionary *)dic OpenBiddingReward:(OpenBiddingRewardVideo *)rewardVideo;
- (id)initWithRewardVideo:(NSDictionary *)dict BidmadReward:(BIDMADRewardVideo *)rewardVideo;

- (void)showAdmobBanner:(UIViewController *)pvc bannerContainer:(UIView*)bannerContainer;
- (void)loadAdmobInterstitial;
- (void)loadAdmobRewardVideo;

- (void)removeInterstitialAds;
- (void)showInterstitialOnViewController:(UIViewController *)viewController;
- (void)showRewardVideoOnViewController:(UIViewController *)viewController;

@end
