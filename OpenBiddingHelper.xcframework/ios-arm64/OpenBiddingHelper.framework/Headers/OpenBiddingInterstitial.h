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

- (void)BIDMADOpenBiddingInterstitialAllFail:(OpenBiddingInterstitial *)core;

/// PREPARED INTERSTITIAL VIEW
- (void)BIDMADOpenBiddingInterstitialLoad:(OpenBiddingInterstitial *)core;

/// CLOSE INTERSTITIAL VIEW
- (void)BIDMADOpenBiddingInterstitialClose:(OpenBiddingInterstitial *)core;

/// SHOW INTERSTITIAL VIEW
- (void)BIDMADOpenBiddingInterstitialShow:(OpenBiddingInterstitial *)core;

/// USER CLICKED THE INTERSTITIAL AD
- (void)BIDMADOpenBiddingInterstitialClick:(OpenBiddingInterstitial *)core;

@end

@interface OpenBiddingInterstitial : NSObject

@property (nonatomic, strong) id<BIDMADOpenBiddingInterstitialDelegate>      delegate;
@property (nonatomic, strong) UIViewController*                              parentViewController;
@property (strong, nonatomic) NSDictionary*                                  ads_dic;
@property (strong, nonatomic) NSDictionary*                                  ecmp_rev_info;
@property (strong, nonatomic) NSDictionary*                                  area_info;
@property (strong, nonatomic) NSDictionary*                                  change_info;
@property (strong, nonatomic) NSDictionary*                                  date;
@property (nonatomic)         NSString*                                      zoneID;
@property (nonatomic)         NSString*                                      realZoneId;
@property (readonly)         BOOL                                           isLoaded;
@property (nonatomic, strong) NSString* _Nullable                            CUID;
@property (nonatomic, strong) NSString* _Nullable                            currentAdNetwork;
@property (nonatomic) BidmadLoadStatus loadStatus;
@property (nonatomic, strong) NSDictionary * _Nullable currentAdData;

- (nonnull instancetype)initWith:(UIViewController * _Nullable)parentViewController zoneID:(NSString * _Nonnull)zoneID;

///inititalize
- (id)init;

///InterstitialView Load
- (void)loadInterstitialView;

///InterstitialView Show
- (void)showInterstitialView;

/// 삭제할것
- (void)selectAds:(NSDictionary *)lv_dic;

- (void)removeInterstitialADS;

// MARK: INNER-DELEGATE

- (void)onInterstitialClick;
- (void)onInterstitialError:(NSString * _Nonnull)error failType:(NSString * _Nonnull)failType;
- (void)onInterstitialError:(NSString * _Nonnull)error
                   failType:(NSString * _Nonnull)failType
              failLogEnable:(BOOL)failLogEnable;
- (void)onInterstitialLoad;
- (void)onInterstitialShow;
- (void)onInterstitialClose;

@end




