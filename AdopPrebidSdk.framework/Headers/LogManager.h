//
//  LogManager.h
//  AdopPrebidSdk
//
//  Created by Kenneth on 2022/08/03.
//

@import Foundation;
@import UIKit;
@import PrebidMobile;

@interface LogManager : NSObject
+ (void)sendLog:(NSString *)type configId:(NSString *)configId bannerAdUnit:(BannerView *)banner;
+ (void)sendLog:(NSString *)type configId:(NSString *)configId interstitialAdUnit:(InterstitialRenderingAdUnit *)interstitial;
+ (void)sendLog:(NSString *)type configId:(NSString *)configId rewardAdUnit:(RewardedAdUnit *)reward;

@end
