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
#import "BIDMADSetting.h"
#import "BIDMADUtil.h"
#import "GoogleMobileAds/GoogleMobileAds.h"

@class BIDMADBanner;
@class BIDMADInterstitial;
@class BIDMADRewardVideo;

@interface BIDMADAdmanager : NSObject<GADBannerViewDelegate, GADFullScreenContentDelegate>

@property (weak,nonatomic) BIDMADBanner* banner;
@property (weak,nonatomic) BIDMADInterstitial* interstitial;
@property (weak,nonatomic) BIDMADRewardVideo* rewardVideo;

- (id)initWithAdBanner:(NSDictionary *)dic bidmadbanner:(BIDMADBanner *)banner;
- (id)initWithInterstitial:(NSDictionary *)dic bidmadInterstitial:(BIDMADInterstitial *)interstitial;
- (id)initWithRewardVideo:(NSDictionary *)dic bidmadReward:(BIDMADRewardVideo *)rewardVideo;
- (void)showAdmanagerBanner:(UIViewController *)pvc bannerContainer:(UIView *)bannerContainer;
- (void)loadAdmanagerInterstitial;
- (void)loadAdmanagerRewardVideo;
- (void)showInterstitialOnViewController:(UIViewController *)viewController;
- (void)showRewardVideoOnViewController:(UIViewController *)viewController;

@end
