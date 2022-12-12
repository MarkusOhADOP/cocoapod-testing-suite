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

@protocol AdopPrebidInterstitialDelegate <NSObject>

@optional
- (void)onInterstitialLoad;
- (void)onInterstitialShow;
- (void)onInterstitialClick;
- (void)onInterstitialClose;
- (void)onInterstitialFail:(NSError * _Nonnull)error;
@end

@interface AdopPrebidInterstitial : NSObject<InterstitialAdUnitDelegate>

@property (nonatomic, weak) id<AdopPrebidInterstitialDelegate> _Nullable delegate;
@property (nonatomic) NSString * _Nonnull configId;

- (id _Nonnull)initWithConfigId:(NSString * _Nonnull)configId;
- (void)requestAd;
- (BOOL)isLoaded;
- (void)showAdOnViewController:(UIViewController * _Nonnull)viewController;

@end
