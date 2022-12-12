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
#import <ADOPUtility/BidmadLoadStatus.h>

@interface BIDMADRewardVideo : NSObject
@property (strong, nonatomic) NSDictionary *ads_dic;
@property (nonatomic) int mediationNumber;
@property (nonatomic) NSString *zoneID;
@property (nonatomic) NSString *realZoneId;
@property (nonatomic, strong) NSString * _Nullable CUID;
@property (nonatomic, strong) NSString * _Nullable currentAdNetwork;

///inititalize
- (nonnull instancetype)init;
/// Init Method specifically for OBH Framework
- (instancetype)initWithZoneID:(NSString * _Nonnull)zoneID
                   instanceOBH:(id _Nullable)instanceOBH
                     sessionID:(NSString * _Nonnull)sessionID
                       adsDict:(NSDictionary * _Nullable)adsDict
                    realZoneID:(NSString * _Nonnull)realZoneID;

- (NSError * _Nullable)sortBasedOnFloorPriceAndSelectFirstAd;
- (void)showRewardVideoOnViewController:(UIViewController * _Nonnull)viewController;
- (void)removeRewardAd;

// MARK: INNER DELEGATE
- (void)onVideoLoad;
/// Convenience Function for onVideoError:failType:failLogEnable:
- (void)onVideoError:(NSError * _Nonnull)error
            failType:(NSString * _Nonnull)failType;
- (void)onVideoError:(NSError * _Nonnull)error
            failType:(NSString * _Nonnull)failType
       failLogEnable:(BOOL)failLogEnable;
- (void)onVideoShow;
- (void)onVideoClick;
- (void)onVideoSuccess;
- (void)onVideoSkipped;
- (void)onVideoClose;

@end
