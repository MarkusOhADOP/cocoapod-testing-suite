//
//  OpenBiddingBanner.h
//  OpenBiddingMobileAds
//
//  Created by 김선정 on 2015. 7. 13..
//  Copyright (c) 2015년 ADOP Co., Ltd. All rights reserved.
//

#pragma clang diagnostic ignored "-Wobjc-property-no-attribute"

#import <UIKit/UIKit.h>
#import <ADOPUtility/BidmadLoadStatus.h>

NS_ASSUME_NONNULL_BEGIN

@class OpenBiddingBanner;
@protocol BIDMADOpenBiddingBannerDelegate;

@interface OpenBiddingBanner : NSObject

@property (nonatomic, weak) id<BIDMADOpenBiddingBannerDelegate> _Nullable delegate;
@property (nonatomic) NSString * _Nullable zoneID;
@property (nonatomic) BidmadLoadStatus loadStatus;
@property (nonatomic, weak) UIView *parentUIView;
@property (nonatomic) NSUInteger refreshInterval;
@property (nonatomic) NSUInteger bannerViewCase;
@property (nonatomic) CGFloat xpoint;
@property (nonatomic) CGFloat ypoint;
@property (nonatomic) NSUInteger position;
@property (readonly) BOOL isLoaded;

/**
 * A Boolean value that determines whether ad refresh feature is enabled.
 * If YES, ad refresh feature is enabled and will refresh the ad every refresh interval seconds.
 * If NO, ad refresh feature is disabled and will not refresh the ad.
 */
@property (nonatomic) BOOL adRefreshEnabled;

- (id _Nonnull)initWithParentViewController:(UIViewController * _Nonnull)parentVC
                                adsPosition:(CGPoint)point;
- (id _Nonnull)initWithParentViewController:(UIViewController * _Nonnull)parentVC
                                   rootView:(UIView * _Nonnull)view;
- (id _Nonnull)initWithParentViewController:(UIViewController * _Nonnull)parentVC
                                     yPoint:(int)yPoint;
- (id _Nonnull)initWithZoneID:(NSString * _Nonnull)zoneID
         parentViewController:(UIViewController * _Nonnull)rootVC
                   adPosition:(NSUInteger)position;
- (void)requestBannerView;
- (void)hideView;
- (void)showView;
- (void)updateViewPosition;
- (void)removeAds;

@end

@protocol BIDMADOpenBiddingBannerDelegate <NSObject>
@optional

- (void)onLoadFailAd:(OpenBiddingBanner * _Nonnull)bidmadAd error:(NSError * _Nonnull)error;
- (void)onLoadAd:(OpenBiddingBanner * _Nonnull)bidmadAd;
- (void)onClickAd:(OpenBiddingBanner* _Nonnull) bidmadAd;

@end

NS_ASSUME_NONNULL_END
