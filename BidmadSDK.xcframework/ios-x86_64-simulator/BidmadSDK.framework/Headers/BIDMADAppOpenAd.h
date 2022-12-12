//
//  BIDMADRewardVideo.h
//  BidmadSDK
//
//  Created by 김선정 on 2018. 10. 29..
//  Copyright © 2018년 ADOP Co., Ltd. All rights reserved.
//

#pragma clang diagnostic ignored "-Wobjc-property-no-attribute"

#import <Foundation/Foundation.h>
#import "BIDMADUtil.h"
#import "BIDMADSetting.h"
#import "BIDMADAdmanager.h"
#import "BIDMADInterstitial.h"
#import "BIDMADAdmobAppOpenAd.h"

@protocol OpenBiddingAppOpenAdDelegateProtocol;
@protocol OpenBiddingAppOpenAdProtocol;

@interface BIDMADAppOpenAd : NSObject

@property (nonatomic, strong) id _Nullable delegate;
@property (strong, nonatomic) NSDictionary * _Nullable ads_dic;
@property (nonatomic)         NSString * _Nullable zoneID;
@property (nonatomic) BOOL testMode;
@property (nonatomic) BOOL isComplete;
@property (nonatomic) int mediationNumber;

- (id _Nonnull)init;
- (instancetype _Nonnull)initWithZoneID:(NSString * _Nonnull)zoneID
                   instanceOBH:(id _Nullable)instanceOBH
                     sessionID:(NSString * _Nonnull)sessionID
                       adsDict:(NSDictionary * _Nullable)adsDict
                    realZoneID:(NSString * _Nonnull)realZoneID;
- (void)showAppOpenAd;
- (void)selectAds:(NSDictionary * _Nullable)lv_dic;
- (NSError * _Nullable)sortBasedOnFloorPriceAndSelectFirstAd;
- (void)onAppOpenAdLoad;
- (void)onAppOpenAdError:(NSError * _Nonnull)error failType:(NSString * _Nonnull)failType;
- (void)onAppOpenAdError:(NSError * _Nonnull)error failType:(NSString * _Nonnull)failType failLogEnable:(BOOL)failLogEnable;
- (void)onAppOpenAdShow;
- (void)onAppOpenAdClick;
- (void)onAppOpenAdClose;

@end

@protocol OpenBiddingAppOpenAdDelegateProtocol <NSObject>

- (void)OpenBiddingAppOpenAdAllFail:(id _Nonnull)bidmadAd;
- (void)OpenBiddingAppOpenAdLoad:(id _Nonnull)bidmadAd;
- (void)OpenBiddingAppOpenAdClose:(id _Nonnull)bidmadAd;
- (void)OpenBiddingAppOpenAdShow:(id _Nonnull)bidmadAd;
- (void)OpenBiddingAppOpenAdClick:(id _Nonnull)bidmadAd;

@end

@protocol OpenBiddingAppOpenAdProtocol <NSObject>

@property (nonatomic, strong) NSDictionary *_Nullable ads_dic;
@property (nonatomic, strong) NSDictionary * _Nullable currentAdData;
@property (nonatomic) BidmadLoadStatus loadStatus;
@property (readonly) BOOL isLoaded;

- (id _Nonnull) init;
- (void) showAppOpenAd;
- (void) requestAppOpenAd;
- (void) selectAds:(NSDictionary * _Nullable)lv_dic;
- (void) sendLog :(NSDictionary * _Nonnull)info : (NSString * _Nonnull)advertisementType : (NSString * _Nonnull)logType :(NSString * _Nonnull)sessionIdArg;
- (void) registerForAppOpenAdForZoneID:(NSString * _Nonnull)zoneId;
- (void) deregisterForAppOpenAd;

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
