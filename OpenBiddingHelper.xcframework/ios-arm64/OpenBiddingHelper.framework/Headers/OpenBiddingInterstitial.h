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
#import "OpenBiddingAdmob.h"

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
@property (strong, nonatomic) NSDictionary * _Nullable ads_dic;
@property (nonatomic) NSString * _Nullable zoneID;
@property (nonatomic) NSString * _Nullable realZoneId;
@property (readonly) BOOL isLoaded;
@property (nonatomic, strong) NSString* _Nullable currentAdNetwork;
@property (nonatomic) BidmadLoadStatus loadStatus;
@property (nonatomic, strong) NSDictionary * _Nullable currentAdData;

- (nonnull instancetype)initWithZoneID:(NSString * _Nonnull)zoneID;
- (id _Nonnull)init;
- (void)loadInterstitialView;
- (void)showInterstitialViewOnViewController:(UIViewController * _Nonnull)viewController;
- (void)selectAds:(NSDictionary * _Nullable)lv_dic;
- (void)removeInterstitialADS;

// MARK: INNER-DELEGATE
- (void)onInterstitialClick;
- (void)onInterstitialError:(NSError * _Nonnull)error failType:(NSString * _Nonnull)failType;
- (void)onInterstitialError:(NSError * _Nonnull)error
                   failType:(NSString * _Nonnull)failType
              failLogEnable:(BOOL)failLogEnable;
- (void)onInterstitialLoad;
- (void)onInterstitialShow;
- (void)onInterstitialClose;

@end




