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
@property (strong, nonatomic) NSDictionary *ads_dic;
@property (nonatomic) NSString *zoneID;
@property (nonatomic) int mediationNumber;
@property (nonatomic) NSString *realZoneId;
@property (nonatomic) BOOL isLoaded;
@property (nonatomic, strong) NSString * _Nullable CUID;
@property (nonatomic, strong) NSString * _Nullable currentAdNetwork;

- (id)init;
- (instancetype)initWithZoneID:(NSString * _Nonnull)zoneID
                   instanceOBH:(id _Nullable)instanceOBH
                     sessionID:(NSString * _Nonnull)sessionID
                       adsDict:(NSDictionary * _Nullable)adsDict
                    realZoneID:(NSString * _Nonnull)realZoneID;

/// This method sorts the dictionary of compass ads data from the highest floor price to the least.
/// It returns the NSError if necessary properties are not available nor nil.
/// If success, it lastly calls selectAds with the first ad with the highest floor price.
- (NSError * _Nullable)sortBasedOnFloorPriceAndSelectFirstAd;
///InterstitialView Show
- (void)showInterstitialViewOnViewController:(UIViewController * _Nonnull)viewController;
- (void)selectAds:(NSDictionary *)lv_dic;
- (void)removeInterstitialADS;
- (void)onInterstitialClick;
- (void)onInterstitialError:(NSError *)error failType:(NSString *)failType;
- (void)onInterstitialLoad;
- (void)onInterstitialShow;
- (void)onInterstitialClose;

@end




