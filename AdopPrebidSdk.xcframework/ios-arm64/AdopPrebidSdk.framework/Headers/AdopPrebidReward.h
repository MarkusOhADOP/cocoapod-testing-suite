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

@protocol AdopPrebidRewardDelegate <NSObject>

@optional
- (void)onRewardLoad;
- (void)onRewardShow;
- (void)onRewardClick;
- (void)onRewardClose;
- (void)onRewardComplete;
- (void)onRewardFail:(NSError * _Nonnull)error;

@end

@interface AdopPrebidReward : NSObject<RewardedAdUnitDelegate>

@property (nonatomic, weak) id<AdopPrebidRewardDelegate> _Nullable delegate;
@property (nonatomic) NSString * _Nonnull configId;

- (id _Nonnull)initWithConfigId:(NSString * _Nonnull)configId;
- (void)requestAd;
- (BOOL)isLoaded;
- (void)showAdOnViewController:(UIViewController * _Nonnull)viewController;

@end
