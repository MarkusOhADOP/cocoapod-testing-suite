//
//  AdopPrebidBanner.h
//  AdopPrebidSdk
//
//  Created by Kenneth on 2022/08/01.
//

@import Foundation;
@import UIKit;
@import PrebidMobile;
#import "AdopPrebid.h"

@protocol AdopPrebidBannerDelegate <NSObject>

@optional
- (void)onBannerLoad;
- (void)onBannerError:(NSError *)error;
- (void)onBannerClick;
- (void)onBannerClose;

@end

@interface AdopPrebidBanner : UIViewController<BannerViewDelegate>

@property (strong, nonatomic) id<AdopPrebidBannerDelegate> delegate;
@property (nonatomic) int refreshInterval;
@property (nonatomic) NSString *configId;
@property (nonatomic) NSString *storedAuctionResponse;

- (id)initWithParentViewController:(UIViewController *)parentVC rootView:(UIView *)view;
- (id)initWithParentViewController:(UIViewController *)parentVC adsPosition:(CGPoint)point;

- (void)setBannerSize:(CGSize)bannerSize;
- (void)requestBanner;
- (void)removeBanner;
- (void)hideView;
- (void)showView;

@end
