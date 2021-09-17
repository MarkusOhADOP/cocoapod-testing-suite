//
//  BIDMADInterstitial.h
//  BIDMADSDK
//
//  Created by 김선정 on 2015. 7. 15..
//  Copyright (c) 2015년 ADOP Co., Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BIDMADUtil.h"
#import "BIDMADSetting.h"
#import "BIDMADFacebook.h"
#import "BIDMADAdmanager.h"
#import "BIDMADAdmob.h"
#import "BIDMADAtomInterstitial.h"

#if __has_include(<BidmadAdapterFC/BidmadAdapterFC.h>) || __has_include("BidmadAdapterFC.h")
#import <BidmadAdapterFC/BidmadAdapterFC.h>
#endif

#if __has_include(<BidmadAdapterFNC/BidmadAdapterFNC.h>) || __has_include("BidmadAdapterFNC.h")
#import <BidmadAdapterFNC/BidmadAdapterFNC.h>
#endif

@protocol BIDMADInterstitialDelegate <NSObject>

@optional

- (void)BIDMADInterstitialAllFail:(BIDMADInterstitial *)core;

/// PREPARED INTERSTITIAL VIEW
- (void)BIDMADInterstitialLoad:(BIDMADInterstitial *)core;

/// ERROR
- (void)BIDMADInterstitialError:(BIDMADInterstitial *)core code:(NSString *)error;

/// CLOSE INTERSTITIAL VIEW
- (void)BIDMADInterstitialClose:(BIDMADInterstitial *)core;

/// SHOW INTERSTITIAL VIEW
- (void)BIDMADInterstitialShow:(BIDMADInterstitial *)core;

@end

@protocol BIDMADInterstitialInnerDelegate <NSObject>
@required

- (void)onInterstitialLoad;
- (void)onInterstitialError:(NSString *)error failType:(NSString *)failType;
- (void)onInterstitialShow;
- (void)onInterstitialClick;
- (void)onInterstitialClose;

@end


@interface BIDMADInterstitial : NSObject <BIDMADInterstitialInnerDelegate>

@property (nonatomic, strong) id<BIDMADInterstitialDelegate> delegate;

@property (nonatomic, strong) id<BIDMADInterstitialInnerDelegate> innerDelegate;

@property (nonatomic, strong) UIViewController* parentViewController;

@property (strong, nonatomic) NSDictionary*             ads_dic;
@property (nonatomic) BOOL                     isDirectLoad;

@property (strong, nonatomic) NSDictionary*                      ecmp_rev_info;
@property (strong, nonatomic) NSDictionary*                      area_info;

@property (strong, nonatomic) NSDictionary*                    change_info;
@property (strong, nonatomic) NSDictionary*                    date;

@property (nonatomic) NSString * zoneID;

@property (nonatomic) bool justLoading;

@property (nonatomic) int mediationNumber;

@property (nonatomic) BOOL                       isLabelService;
@property (nonatomic) BOOL                       isLabelServiceAdmin;

@property (nonatomic) NSString *                 realZoneId;

@property (nonatomic) BOOL                       isLoaded;

///inititalize
- (id)init;

///InterstitialView Load
- (void)loadInterstitialView;

///InterstitialView Show
- (void)showInterstitialView;

///InterstitialView Direct Show
- (void)directShowInterstitialView;

/// 삭제할것
- (void)selectAds:(NSDictionary *)lv_dic;

- (void)removeInterstitialADS;

- (void)sendLog :(NSDictionary *) info :(NSString *) advertisementType :(NSString *) logType;

- (void) sendLog :(NSDictionary *) info :(NSString *) advertisementType :(NSString *) logType :(NSString *)recvSessionId;

@end




