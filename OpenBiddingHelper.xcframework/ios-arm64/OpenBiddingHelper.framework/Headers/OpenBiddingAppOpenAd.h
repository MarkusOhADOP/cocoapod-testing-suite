//
//  OpenBiddingAppOpenAd.h
//  OpenBiddingHelper
//
//  Created by 김선정 on 2018. 10. 29..
//  Copyright © 2018년 ADOP Co., Ltd. All rights reserved.
//

#pragma clang diagnostic ignored "-Wobjc-property-no-attribute"

#import <Foundation/Foundation.h>
#import <BidmadSDK/BIDMADUtil.h>
#import <BidmadSDK/BIDMADSetting.h>
#import <BidmadSDK/BIDMADAppOpenAd.h>
#import "OpenBiddingAdmobAppOpenAd.h"

@protocol OpenBiddingAppOpenAdDelegate;

@interface OpenBiddingAppOpenAd : NSObject

@property (nonatomic, strong) id<OpenBiddingAppOpenAdDelegate> _Nullable delegate;
@property (nonatomic, strong) NSDictionary *_Nullable ads_dic;
@property (nonatomic, strong) NSString *_Nullable zoneID;
@property (nonatomic, strong) NSString *_Nullable CUID;
@property (nonatomic, strong) NSDictionary * _Nullable currentAdData;
@property (nonatomic) BidmadLoadStatus loadStatus;
@property (readonly) BOOL isLoaded;

- (nonnull instancetype)init;
- (void)showAppOpenAd;
- (void)requestAppOpenAd;
- (void)selectAds:(NSDictionary * _Nullable)lv_dic;
- (void)registerForAppOpenAdForZoneID:(NSString * _Nonnull)zoneId;
- (void)deregisterForAppOpenAd;
- (void)onAppOpenAdLoad;
- (void)onAppOpenAdError:(NSError * _Nonnull)error
                failType:(NSString * _Nonnull)failType;
- (void)onAppOpenAdError:(NSError * _Nonnull)error
                failType:(NSString * _Nonnull)failType
           failLogEnable:(BOOL)failLogEnable;
- (void)onAppOpenAdShow;
- (void)onAppOpenAdClick;
- (void)onAppOpenAdClose;

@end

@protocol OpenBiddingAppOpenAdDelegate <NSObject>
@optional

- (void)onLoadFailAd:(OpenBiddingAppOpenAd * _Nonnull)bidmadAd error:(NSError * _Nonnull)error;
- (void)onLoadAd:(OpenBiddingAppOpenAd * _Nonnull)bidmadAd;
- (void)onCloseAd:(OpenBiddingAppOpenAd * _Nonnull)bidmadAd;
- (void)onShowAd:(OpenBiddingAppOpenAd * _Nonnull)bidmadAd;
- (void)onClickAd:(OpenBiddingAppOpenAd * _Nonnull)bidmadAd;

@end
