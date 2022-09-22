//
//  AdopPrebidInterstitial.h
//  AdopPrebidSdk
//
//  Created by Seungsub Oh on 2022/08/02.
//

@import Foundation;
@import UIKit;
@import PrebidMobile;
#import "AdopPrebid.h"

@protocol AdopPrebidInterstitialDelegate

@optional
- (void)onInterstitialLoad;
- (void)onInterstitialShow;
- (void)onInterstitialClick;
- (void)onInterstitialClose;
- (void)onInterstitialFail:(NSError * _Nonnull)error;
@end

@interface AdopPrebidInterstitial : NSObject<InterstitialAdUnitDelegate>

@property (nonatomic, strong) id<AdopPrebidInterstitialDelegate> _Nullable delegate;
@property (nonatomic) NSString * _Nonnull configId;

- (id _Nonnull)initWithParentViewController:(UIViewController * _Nonnull)parentVC;

- (void)requestAd;
- (BOOL)isLoaded;
- (void)showAd;

@end
