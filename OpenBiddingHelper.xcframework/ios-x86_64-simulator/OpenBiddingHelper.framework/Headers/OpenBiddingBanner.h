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

@property (strong, nonatomic) NSDictionary * _Nullable ads_dic;
@property (strong, nonatomic) id<BIDMADOpenBiddingBannerDelegate> _Nullable delegate;
@property (nonatomic)         NSString * _Nullable realZoneId;
@property (nonatomic)         NSString * _Nullable zoneID;
@property (nonatomic, assign) int refreshInterval;
@property (nonatomic, strong) NSString * _Nullable currentAdNetwork;
@property (nonatomic, strong) NSDictionary * _Nullable currentAdData;
@property (nonatomic, weak) UIViewController * _Nullable parentViewController;
@property (nonatomic, weak) UIView * _Nullable parentUIView;
@property (nonatomic, strong) UIView * _Nullable bannerContainerForGame;
@property (nonatomic) BIDMADBannerViewCase bannerViewCase;
@property (nonatomic) CGFloat xpoint;
@property (nonatomic) CGFloat ypoint;
@property (nonatomic) BIDMADAdPosition position;
@property (nonatomic, strong) NSString * _Nullable sessionId;

- (id _Nonnull)initWithParentViewController:(UIViewController * _Nonnull)parentVC
                                adsPosition:(CGPoint)point;
- (id _Nonnull)initWithParentViewController:(UIViewController * _Nonnull)parentVC
                                   rootView:(UIView * _Nonnull)view;
- (id _Nonnull)initWithParentViewController:(UIViewController * _Nonnull)parentVC
                                     yPoint:(int)yPoint;
- (id _Nonnull)initWithZoneID:(NSString * _Nonnull)zoneID
         parentViewController:(UIViewController * _Nonnull)rootVC
                   adPosition:(BIDMADAdPosition)position;
- (UIView * _Nonnull)setBannerFrame;
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
- (void)onBannerLoad;
- (void)onBannerClick;

@end

@protocol BIDMADOpenBiddingBannerDelegate <NSObject>

@optional

- (void)onLoadFailAd:(OpenBiddingBanner * _Nonnull)bidmadAd error:(NSError * _Nonnull)error;
- (void)onLoadAd:(OpenBiddingBanner * _Nonnull)bidmadAd;
- (void)onClickAd:(OpenBiddingBanner* _Nonnull) bidmadAd;

@end
