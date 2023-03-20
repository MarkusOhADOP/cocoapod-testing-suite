//
//  AdopMobileAds.h
//  BIDMADSDK
//
//  Created by 김선정 on 2015. 7. 13..
//  Copyright (c) 2015년 ADOP Co., Ltd. All rights reserved.
//

//@import GoogleMobileAds;

#pragma clang diagnostic ignored "-Wobjc-property-no-attribute"

#import <Foundation/Foundation.h>
#import <ADOPUtility/BidmadSendLogDelegate.h>
#import <ADOPUtility/BidmadSettingInterface.h>

#define GOOGLE_ADMANAGER        @"41350b05-4415-44b2-8e17-b5fe52d1bd6e"
#define GOOGLE_ADMOB            @"ce56da00-1a18-11e9-9ed2-02c31b446301"
#define FACEBOOK                @"9868ea6b-5afd-11e7-8214-02c31b446301"
#define ADOPAPP                 @"2d4833cf-330b-11e8-bbc3-02c31b446301"
#define FACEBOOKBIDDING         @"dc93051a-a4e6-11e8-bbc3-02c31b446301"
#define MINTEGRAL               @"1b7d485c-de41-11e8-9ed2-02c31b446301"
#define ADOPREWARD              @"143e7311-4538-11e9-9e1d-02c31b446301"
#define ADOUNITY                @"2e88609b-d916-11e9-9e1d-02c31b446301"
#define APPLOVIN                @"b45c4d16-fa13-11e9-9e1d-02c31b446301"
#define ADOCOLONY               @"e0d7c94e-d391-11e9-9e1d-02c31b446301"
#define MOPUB                   @"3419a3a1-4bc1-11ea-a87c-02c31b446301"
#define IRONSOURCE              @"defa83bc-d2e0-11ea-8e02-021baddf8c08"
#define ADFIT                   @"5e0ce4ec-57ec-4dbd-9703-dc330d027c40"
#define TAPJOY                  @"6c470ac8-6069-11eb-8e02-021baddf8c08"
#define PANGLE                  @"640ab9f2-d8b8-11eb-8e02-021baddf8c08"
#define ADMOB_OB                @"e2678be7-2fbf-11ec-8e02-021baddf8c08"
#define NEW_ATOM                @"ee5efa3b-6dd9-11ec-8e02-021baddf8c08"
#define FYBER                   @"b0745bea-6069-11eb-8e02-021baddf8c08"
#define APPLOVIN_MAX            @"31534d43-944a-11ec-8e02-021baddf8c08"
#define INMOBI                  @"f32a2be4-476b-4ddb-85dc-27e98e81e111"
#define VUNGLE                  @"1e1947d2-eff2-11e9-9e1d-02c31b446301"
#define PREBID                  @"f797ee95-1172-11ed-a117-026864a21938"
#define PUBMATIC                @"ec4a2c71-58c8-11ed-a117-026864a21938"
#define MOBON                   @"259737b6-b23d-11e7-8214-02c31b446301"
#define TEADS                   @"TEADSTEA-DSTE-ADST-EADS-TEADSTEADSTE"

#define COMPASS_SERVING         @"https://bidmad.adop.cc/serving/ms3.php"
#define BIDMAD_APPINFO_URL      @"https://appinfo.adop.cc/app_collect.php"

//Bidmad AppTrackingTransparency 관련 내용 정의
typedef enum
{
    BidmadAuthorizationStatusNotDetermined = 0,
    BidmadAuthorizationStatusRestricted,
    BidmadAuthorizationStatusDenied,
    BidmadAuthorizationStatusAuthorized,
    BidmadAuthorizationStatusLessThaniOS14
}BidmadTrackingAuthorizationStatus;
typedef void (^CompleteHandler)(BidmadTrackingAuthorizationStatus status);
//Bidmad AppTrackingTransparency 관련 내용 정의

extern NSString* _Nonnull const BIDMAD_GDPR_CONSENT;
extern NSString* _Nonnull const BIDMAD_CCPA_CONSENT;

@interface BIDMADSetting : NSObject <BidmadSettingInterface>

+ (BIDMADSetting * _Nonnull)sharedInstance;
- (void)setAdvertiserTrackingEnabled:(BOOL)enable;
- (BOOL)getAdvertiserTrackingEnabled;
- (void)reqAdTrackingAuthorizationWithCompletionHandler:(void (^_Nonnull)(BidmadTrackingAuthorizationStatus))completeHandler;
- (void)initializeSdk;
- (void)initializeSdkWithKey:(NSString * _Nonnull)appKey;

/// If your app is directed to kids under the age of 13, please set YES or true.
- (void)setIsChildDirectedAds: (BOOL)isChildDirectedAdsNeeded;

/// If your app should be compliant to CCPA, please set the user consent status with this method.
- (void)setUserConsentStatusForCCPACompliance: (BOOL)isUserConsent;

///  Auto Loading Interval.
@property (nonatomic, assign) int                   refreshInterval;

/// user's age. ex) 27
@property (nonatomic, assign) int                   age;

@property (nonatomic)bool                           isDebug;

@property (nonatomic)bool                           isSendLog;

/// BIDMAD INTERSTITIAL ADS ZONE ID
@property (nonatomic, strong) NSString*             interstitialZoneID;

/// BIDMAD REWARD ADS ZONE ID
@property (nonatomic, strong) NSString*             rewardZoneID;

/// BIDMAD BANNER ADS ZONE ID
@property (nonatomic, strong) NSString*             bannerZoneID;


/// BIDMAD BANNER ADS ZONE ID
@property (nonatomic, strong) NSString*             appOpenAdZoneID;

/// user's gender. ex) male = m / female = f
@property (nonatomic, strong) NSString*             gender;

/// keywords. ex) sports, cars, finance, football
@property (nonatomic, strong) NSString*             keyword;

/// HouseBannerURL
@property (nonatomic, strong) NSString*             houseBannerURL;

/// 경도
@property (nonatomic, assign) float                 longitude;

/// 위도
@property (nonatomic, assign) float                 latitude;

//광고 노출 전 하우스 배너 노출 여부
@property (nonatomic) BOOL                       isPreviewHouse;

//customHouseBanner
@property (nonatomic, strong) NSString*          houseBannerPath;

@property (nonatomic)  bool unityState;

@property (nonatomic) bool isIronInit;

@property (nonatomic, strong) NSNumber* isGADMobileAdsInitilized;

@property (nonatomic)  bool isBannerArpmVisible;

@property (nonatomic) bool isRewardCompleteInSetting;

@property (nonatomic, strong) NSString* version;

@property (nonatomic, strong) NSString* testDeviceId;

/// Setting for Child-Directed Treament for COPPA-Compliance.
@property (nonatomic, strong) NSNumber* __nullable isChildDirectedTreatment;

/// Setting for CCPA User Consent Status. If nil, the app does not have to be compliant to CCPA.
@property (nonatomic, strong) NSNumber* __nullable isUserConsentCCPA;

@property (nonatomic, weak) id<BidmadSendLogDelegate> __nullable bidmadLogDelegate;

/// Setting this property allows CUID to be sent to ADOP.
@property (nonatomic, strong) NSString * __nullable cuid;

/// Setting this property to @YES enables a server-side callbacks from rewarded ads from various ad networks
@property (nonatomic) NSNumber * _Nonnull useServerSideCallback;

@property (readonly) BOOL isInitialized;

@end
