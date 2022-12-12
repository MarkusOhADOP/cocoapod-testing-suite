//
//  OpenBiddingBanner.h
//  OpenBiddingMobileAds
//
//  Created by 김선정 on 2015. 7. 13..
//  Copyright (c) 2015년 ADOP Co., Ltd. All rights reserved.
//

#pragma clang diagnostic ignored "-Wobjc-property-no-attribute"

#import <UIKit/UIKit.h>
#import "OpenBiddingAdmob.h"
#import <BidmadSDK/BidmadSDK.h>

@class OpenBiddingBanner;
@protocol BIDMADOpenBiddingBannerDelegate;

@interface OpenBiddingBanner : NSObject

@property (strong, nonatomic) NSDictionary *ads_dic;
@property (nonatomic)         bannerSizeType bannerType;
@property (strong, nonatomic) id<BIDMADOpenBiddingBannerDelegate> delegate;
@property (nonatomic)         NSString *realZoneId;
@property (nonatomic)         NSString *zoneID;
@property (nonatomic, assign) int refreshInterval;
@property (nonatomic, strong) NSString *currentAdNetwork;
@property (nonatomic, strong) NSDictionary * _Nullable currentAdData;
@property (nonatomic, weak) UIViewController * _Nullable parentViewController;
@property (nonatomic, weak) UIView * _Nullable parentUIView;
@property (nonatomic, strong) UIView * _Nullable bannerContainerForGame;

- (id)initWithParentViewController:(UIViewController *)parentVC adsPosition:(CGPoint)point;
- (id)initWithParentViewController:(UIViewController *)parentVC rootView:(UIView *)view;
- (id)initWithParentViewController:(UIViewController *)parentVC yPoint:(int)yPoint;
- (void)requestBannerView;
- (void)removeAds;
- (void)selectAds:(NSDictionary * _Nonnull)lv_dic;
- (void)runAds;
- (void)setParentController:(UIViewController * _Nonnull)parentVC;
- (void)hideView;
- (void)showView;

- (void)onBannerAllFail;
- (void)onBannerError:(NSError * _Nonnull)error
             failType:(NSString * _Nonnull)failType;
- (void)onBannerError:(NSError * _Nonnull)error
             failType:(NSString * _Nonnull)failType
        failLogEnable:(BOOL)failLogEnable;
- (void)onBannerClosed;
- (void)onBannerLoad;
- (void)onBannerClick;

@end

@protocol BIDMADOpenBiddingBannerDelegate <NSObject>

@optional

- (void)onLoadFailAd:(OpenBiddingBanner * _Nonnull)bidmadAd error:(NSError * _Nullable)error;
- (void)onCloseAd:(OpenBiddingBanner * _Nonnull)bidmadAd;
- (void)onLoadAd:(OpenBiddingBanner * _Nonnull)bidmadAd;
- (void)onClickAd:(OpenBiddingBanner* _Nonnull) bidmadAd;

@end
