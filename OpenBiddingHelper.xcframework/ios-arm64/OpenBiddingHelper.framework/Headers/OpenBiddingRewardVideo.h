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
@property (nonatomic, strong) id<BIDMADOpenBiddingRewardVideoDelegate> _Nullable preloadDelegate;
@property (strong, nonatomic) NSDictionary *ads_dic;
@property (nonatomic) NSString *zoneID;
@property (nonatomic) NSString *realZoneId;
@property (nonatomic, strong) NSString * _Nullable currentAdNetwork;
@property (readonly) BOOL isLoaded;
@property (nonatomic) BidmadLoadStatus loadStatus;
@property (nonatomic, strong) NSDictionary * _Nullable currentAdData;

- (nonnull instancetype)initWithZoneID:(NSString * _Nonnull)zoneID;
- (nonnull instancetype)init;
- (void)loadRewardVideo;
- (void)showRewardVideoOnViewController:(UIViewController * _Nonnull)viewController;

- (void)onVideoClick;
/// Convenience Function for onVideoError:failType:failLogEnable:
- (void)onVideoError:(NSError * _Nonnull)error failType:(NSString * _Nonnull)failType;
- (void)onVideoError:(NSError * _Nonnull)error
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

- (void)onLoadFailAd:(OpenBiddingRewardVideo * _Nonnull)bidmadAd error:(NSError * _Nonnull)error;
- (void)onLoadAd:(OpenBiddingRewardVideo * _Nonnull)bidmadAd;
- (void)onCloseAd:(OpenBiddingRewardVideo * _Nonnull)bidmadAd;
- (void)onShowAd:(OpenBiddingRewardVideo * _Nonnull)bidmadAd;
- (void)onClickAd:(OpenBiddingRewardVideo * _Nonnull)bidmadAd;
- (void)onCompleteAd:(OpenBiddingRewardVideo * _Nonnull)bidmadAd;
- (void)onSkipAd:(OpenBiddingRewardVideo * _Nonnull)bidmadAd;

@end



