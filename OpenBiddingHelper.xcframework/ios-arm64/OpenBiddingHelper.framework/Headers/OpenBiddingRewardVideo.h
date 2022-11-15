//
//  BIDMADRewardVideo.h
//  BidmadSDK
//
//  Created by 김선정 on 2018. 10. 29..
//  Copyright © 2018년 ADOP Co., Ltd. All rights reserved.
//

#pragma clang diagnostic ignored "-Wobjc-property-no-attribute"

@class OpenBiddingRewardVideo;

#import <Foundation/Foundation.h>
#import <BidmadSDK/BIDMADUtil.h>
#import <BidmadSDK/BIDMADSetting.h>
#import "OpenBiddingAdmob.h"
#import "OpenBiddingInterstitial.h"
#import <BidmadSDK/BIDMADRewardVideo.h>
#import <ADOPUtility/BidmadLoadStatus.h>

@protocol BIDMADOpenBiddingRewardVideoDelegate;

@interface OpenBiddingRewardVideo : NSObject

@property (nonatomic, strong) id<BIDMADOpenBiddingRewardVideoDelegate> _Nullable delegate;
@property (nonatomic, strong) UIViewController*             parentViewController;
@property (strong, nonatomic) NSDictionary*                 ads_dic;
@property (strong, nonatomic) NSDictionary*                      ecmp_rev_info;
@property (strong, nonatomic) NSDictionary*                      area_info;
@property (strong, nonatomic) NSDictionary*                    change_info;
@property (strong, nonatomic) NSDictionary*                    date;
@property (nonatomic) NSString * zoneID;
@property (nonatomic) BOOL                       testMode;
@property (nonatomic) NSString *                 realZoneId;
@property (nonatomic, strong) NSString * _Nullable CUID;
@property (nonatomic, strong) NSString * _Nullable currentAdNetwork;
@property (readonly) BOOL isLoaded;
@property (nonatomic) BidmadLoadStatus loadStatus;
@property (nonatomic, strong) NSDictionary * _Nullable currentAdData;

- (nonnull instancetype)initWith:(UIViewController * _Nullable)parentViewController zoneID:(NSString * _Nonnull)zoneID;

///inititalize
- (id)init;

- (void)loadRewardVideo;

- (void)showRewardVideo;

- (void)selectAds:(NSDictionary *)lv_dic;

// MARK: INNER DELEGATE

- (void)onVideoClick;
/// Convenience Function for onVideoError:failType:failLogEnable:
- (void)onVideoError:(NSString *)error failType:(NSString *)failType;
- (void)onVideoError:(NSString * _Nonnull)error
            failType:(NSString * _Nonnull)failType
       failLogEnable:(BOOL)failLogEnable;
- (void)onVideoLoad;
- (void)onVideoShow;
- (void)onVideoSkipped;
- (void)onVideoSuccess;
- (void)onVideoClose;

@end

@protocol BIDMADOpenBiddingRewardVideoDelegate <NSObject>

@optional

- (void)BIDMADOpenBiddingRewardVideoAllFail:(OpenBiddingRewardVideo *)core;

- (void)BIDMADOpenBiddingRewardVideoLoad:(OpenBiddingRewardVideo *)core;

- (void)BIDMADOpenBiddingRewardVideoClose:(OpenBiddingRewardVideo *)core;

- (void)BIDMADOpenBiddingRewardVideoShow:(OpenBiddingRewardVideo *)core;

- (void)BIDMADOpenBiddingRewardVideoClick:(OpenBiddingRewardVideo *)core;

- (void)BIDMADOpenBiddingRewardVideoSucceed:(OpenBiddingRewardVideo *)core;

- (void)BIDMADOpenBiddingRewardSkipped:(OpenBiddingRewardVideo *) core;

@end



