//
//  BIDMADBanner.h
//  BIDMADMobileAds
//
//  Created by 김선정 on 2015. 7. 13..
//  Copyright (c) 2015년 ADOP Co., Ltd. All rights reserved.
//

#pragma clang diagnostic ignored "-Wobjc-property-no-attribute"

#import <UIKit/UIKit.h>
#import "BIDMADUtil.h"
#import "BIDMADSetting.h"
#import "BIDMADAtom.h"
#import "BIDMADAdmob.h"
#import "BIDMADAdmanager.h"

@interface BIDMADBanner : UIView
@property (strong, nonatomic) NSDictionary* ads_dic;
@property (nonatomic) bannerSizeType bannerType;
@property (nonatomic) int mediationNumber;
@property (nonatomic) NSString* realZoneId;
@property (nonatomic) NSString* zoneID;
@property (nonatomic, assign) int refreshInterval;
@property (nonatomic, strong) NSString* houseBannerImgPath;
@property (nonatomic, strong) NSString* currentAdNetwork;

- (instancetype)initWithZoneID:(NSString * _Nonnull)zoneID
          parentViewController:(UIViewController * _Nullable)parentVC
                    parentView:(UIView * _Nullable)parentView
                   instanceOBH:(id _Nullable)instanceOBH
                     sessionID:(NSString * _Nonnull)sessionID
                     xPosition:(NSNumber * _Nullable)xPosition
                     yPosition:(NSNumber * _Nullable)yPosition
                       adsDict:(NSDictionary * _Nullable)adsDict
                    realZoneID:(NSString * _Nonnull)realZoneID;
- (void)removeAds;
/// This method sorts the dictionary of compass ads data from the least floor price to the highest.
/// It returns the NSError if necessary properties are not available nor nil.
/// If success, it lastly calls selectAds with the first ad with the highest floor price.
- (NSError * _Nullable)sortBasedOnFloorPriceAndSelectFirstAd;
- (void)hideView;
- (void)showView;
- (void)onBannerError:(NSError * _Nonnull)error
             failType:(NSString * _Nonnull)failType;
- (void)onBannerError:(NSError * _Nonnull)error
             failType:(NSString * _Nonnull)failType
        failLogEnable:(BOOL)failLogEnable;
- (void)onBannerClosed;
- (void)onBannerLoad;
- (void)onBannerClick;

@end
