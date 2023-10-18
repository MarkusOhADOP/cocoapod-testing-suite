//
//  BIDMADInterstitial.h
//  BIDMADSDK
//
//  Created by 김선정 on 2015. 7. 15..
//  Copyright (c) 2015년 ADOP Co., Ltd. All rights reserved.
//

#pragma clang diagnostic ignored "-Wobjc-property-no-attribute"

@class OpenBiddingInterstitial;

#import <Foundation/Foundation.h>
#import <BidmadSDK/BIDMADUtil.h>
#import <BidmadSDK/BIDMADSetting.h>
#import <ADOPUtility/BidmadLoadStatus.h>

NS_ASSUME_NONNULL_BEGIN

@protocol BIDMADOpenBiddingInterstitialDelegate <NSObject>
@optional

- (void)onLoadFailAd:(OpenBiddingInterstitial * _Nonnull)bidmadAd error:(NSError * _Nonnull)error;
- (void)onLoadAd:(OpenBiddingInterstitial * _Nonnull)bidmadAd;
- (void)onCloseAd:(OpenBiddingInterstitial * _Nonnull)bidmadAd;
- (void)onShowAd:(OpenBiddingInterstitial * _Nonnull)bidmadAd;
- (void)onClickAd:(OpenBiddingInterstitial * _Nonnull)bidmadAd;

@end

@interface OpenBiddingInterstitial : NSObject

@property (nonatomic, weak) id<BIDMADOpenBiddingInterstitialDelegate> _Nullable delegate;
@property (nonatomic, weak) id<BIDMADOpenBiddingInterstitialDelegate> _Nullable preloadDelegate;
@property (readonly) BOOL isLoaded;
@property (nonatomic) BidmadLoadStatus loadStatus;
@property (nonatomic, strong) NSString *zoneID;

- (nonnull instancetype)initWithZoneID:(NSString * _Nonnull)zoneID;
- (void)requestInterstitialView;
- (void)showInterstitialViewOnViewController:(UIViewController * _Nonnull)viewController;

@end

NS_ASSUME_NONNULL_END
