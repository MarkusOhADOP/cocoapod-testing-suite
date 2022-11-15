//
//  BIDMADInterstitial.h
//  BIDMADSDK
//
//  Created by 김선정 on 2015. 7. 15..
//  Copyright (c) 2015년 ADOP Co., Ltd. All rights reserved.
//

#pragma clang diagnostic ignored "-Wobjc-property-no-attribute"

#import <Foundation/Foundation.h>
#import "BIDMADUtil.h"
#import "BIDMADSetting.h"
#import "BIDMADAdmanager.h"
#import "BIDMADAdmob.h"
#import "BIDMADAtomInterstitial.h"

@interface BIDMADInterstitial : NSObject

@property (strong, nonatomic) NSDictionary*             ads_dic;

@property (strong, nonatomic) NSDictionary*                      ecpm_rev_info;
@property (strong, nonatomic) NSDictionary*                      area_info;

@property (strong, nonatomic) NSDictionary*                    change_info;
@property (strong, nonatomic) NSDictionary*                    date;

@property (nonatomic) NSString * zoneID;

@property (nonatomic) int mediationNumber;

@property (nonatomic) BOOL                       isLabelService;
@property (nonatomic) BOOL                       isLabelServiceAdmin;

@property (nonatomic) NSString *                 realZoneId;

@property (nonatomic, strong) NSString * _Nullable CUID;

@property (nonatomic, strong) NSString * _Nullable currentAdNetwork;

///inititalize
- (id)init;

/// Init Method for OBH
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
                    realZoneID:(NSString * _Nonnull)realZoneID;

/// This method sorts the dictionary of compass ads data from the highest floor price to the least.
/// It returns the NSError if necessary properties are not available nor nil.
/// If success, it lastly calls selectAds with the first ad with the highest floor price.
- (NSError * _Nullable)sortBasedOnFloorPriceAndSelectFirstAd;

- (NSError * _Nullable)withoutSortingJustSelectFirstAd;

///InterstitialView Load
- (void)loadInterstitialView;

///InterstitialView Show
- (void)showInterstitialView;

///InterstitialView Direct Show
- (void)directShowInterstitialView;

- (void)selectAds:(NSDictionary *)lv_dic;

- (void)removeInterstitialADS;

- (void)sendLog:(NSDictionary *)info :(NSString *)advertisementType :(NSString *)logType :(NSString *)recvSessionId :(NSString * _Nullable)cuid;

- (void)onInterstitialClick;
- (void)onInterstitialError:(NSString *)error failType:(NSString *)failType;
- (void)onInterstitialLoad;
- (void)onInterstitialShow;
- (void)onInterstitialClose;

@end




