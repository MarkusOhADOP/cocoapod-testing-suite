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
#import "OpenBiddingInterstitial.h"
#import <BidmadSDK/BIDMADRewardVideo.h>
#import <ADOPUtility/BidmadLoadStatus.h>

@protocol BIDMADOpenBiddingRewardVideoDelegate;

@interface OpenBiddingRewardVideo : NSObject

@property (nonatomic, strong) id<BIDMADOpenBiddingRewardVideoDelegate> _Nullable delegate;
@property (nonatomic, strong) id<BIDMADOpenBiddingRewardVideoDelegate> _Nullable preloadDelegate;
@property (nonatomic) BidmadLoadStatus loadStatus;
@property (readonly) BOOL isLoaded;
@property (nonatomic, strong) NSString * _Nonnull zoneID;

- (nonnull instancetype)initWithZoneID:(NSString * _Nonnull)zoneID;
- (void)requestRewardVideo;
- (void)showRewardVideoOnViewController:(UIViewController * _Nonnull)viewController;

@end

@protocol BIDMADOpenBiddingRewardVideoDelegate <NSObject>
@optional

- (void)onLoadFailAd:(OpenBiddingRewardVideo * _Nonnull)bidmadAd error:(NSError * _Nonnull)error;
- (void)onLoadAd:(OpenBiddingRewardVideo * _Nonnull)bidmadAd;
- (void)onCloseAd:(OpenBiddingRewardVideo * _Nonnull)bidmadAd;
- (void)onShowAd:(OpenBiddingRewardVideo * _Nonnull)bidmadAd;
- (void)onShowFailAd:(OpenBiddingRewardVideo * _Nonnull)bidmadAd error:(NSError * _Nonnull)error;
- (void)onClickAd:(OpenBiddingRewardVideo * _Nonnull)bidmadAd;
- (void)onCompleteAd:(OpenBiddingRewardVideo * _Nonnull)bidmadAd;
- (void)onSkipAd:(OpenBiddingRewardVideo * _Nonnull)bidmadAd;

@end



