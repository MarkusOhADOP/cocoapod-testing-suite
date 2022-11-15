//
//  BIDMADRewardVideo.h
//  BidmadSDK
//
//  Created by 김선정 on 2018. 10. 29..
//  Copyright © 2018년 ADOP Co., Ltd. All rights reserved.
//

#pragma clang diagnostic ignored "-Wobjc-property-no-attribute"

#import <Foundation/Foundation.h>
#import "BIDMADSetting.h"
#import "BIDMADAdmob.h"
#import "BIDMADAdmanager.h"
#import "BIDMADInterstitial.h"
#import <ADOPUtility/BidmadLoadStatus.h>

@class BIDMADInterstitial;

@interface BIDMADRewardVideo : NSObject

@property (strong, nonatomic) NSDictionary*                 ads_dic;

@property (strong, nonatomic) NSDictionary*                      ecpm_rev_info;
@property (strong, nonatomic) NSDictionary*                      area_info;

@property (strong, nonatomic) NSDictionary*                    change_info;
@property (strong, nonatomic) NSDictionary*                    date;
@property (strong, nonatomic) NSString*                        mediationType;

@property (nonatomic) int mediationNumber;
@property (nonatomic) NSString * zoneID;

@property (nonatomic) BOOL                       isLabelService;
@property (nonatomic) BOOL                       isLabelServiceAdmin;

@property (nonatomic) NSString *                 realZoneId;

@property (nonatomic, strong) NSString * _Nullable CUID;

///inititalize
- (id)init;

/// Init Method specifically for OBH Framework
- (instancetype)initWithZoneID:(NSString * _Nonnull)zoneID
          parentViewController:(UIViewController * _Nonnull)parentVC
                   instanceOBH:(id _Nullable)instanceOBH
                     sessionID:(NSString * _Nonnull)sessionID
                       adsDict:(NSDictionary * _Nullable)adsDict
                   revInfoECPM:(NSDictionary * _Nullable)revInfoECPM
                      areaInfo:(NSDictionary * _Nullable)areaInfo
                    changeInfo:(NSDictionary * _Nullable)changeInfo
                          date:(NSDictionary * _Nullable)date
                isLabelService:(NSNumber * _Nullable)isLabelService
           isLabelServiceAdmin:(NSNumber * _Nullable)isLabelServiceAdmin
                      mediType:(NSString * _Nullable)mediationType
                    realZoneID:(NSString * _Nonnull)realZoneID;

- (NSError * _Nullable)sortBasedOnFloorPriceAndSelectFirstAd;

- (NSError * _Nullable)withoutSortingJustSelectFirstAd;

///InterstitialView Load
- (void)loadRewardVideo;

///InterstitialView Show
- (void)showRewardVideo;

- (void)selectAds:(NSDictionary *)lv_dic;

- (void)sendLog :(NSDictionary *) info :(NSString *) advertisementType :(NSString *) logType;

- (void)sendLog :(NSDictionary *) info :(NSString *) advertisementType :(NSString *) logType :(NSString *)recvSessionId;

- (void)releaseBidmadResource;
- (void)removeRewardAd;

// MARK: INNER DELEGATE

- (void)onVideoLoad;
/// Convenience Function for onVideoError:failType:failLogEnable:
- (void)onVideoError:(NSString *)error failType:(NSString *)failType;
- (void)onVideoError:(NSString *)error failType:(NSString *)failType failLogEnable:(BOOL)failLogEnable;
- (void)onVideoShow;
- (void)onVideoClick;
- (void)onVideoSuccess;
- (void)onVideoSkipped;
- (void)onVideoClose;

@end
