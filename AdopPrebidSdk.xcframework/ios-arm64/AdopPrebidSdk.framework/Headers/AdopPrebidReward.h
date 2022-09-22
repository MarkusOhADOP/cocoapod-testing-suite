//
//  AdopPrebidReward.h
//  AdopPrebidSdk
//
//  Created by Seungsub Oh on 2022/08/02.
//

@import Foundation;
@import UIKit;
@import PrebidMobile;
#import "AdopPrebid.h"

@protocol AdopPrebidRewardDelegate

@optional
- (void)onRewardLoad;
- (void)onRewardShow;
- (void)onRewardClick;
- (void)onRewardClose;
- (void)onRewardComplete;
- (void)onRewardSkip;
- (void)onRewardFail:(NSError * _Nonnull)error;

@end

@interface AdopPrebidReward : NSObject<RewardedAdUnitDelegate>

@property (nonatomic, strong) id<AdopPrebidRewardDelegate> _Nullable delegate;
@property (nonatomic) NSString * _Nonnull configId;

- (id _Nullable)initWithParentViewController:(UIViewController * _Nonnull)parentVC;

- (void)requestAd;
- (BOOL)isLoaded;
- (void)showAd;

@end
