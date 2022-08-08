//
//  BidmadCommon.h
//  OpenBiddingHelper
//
//  Created by ADOP_Mac on 2022/07/01.
//

#pragma clang diagnostic ignored "-Wobjc-property-no-attribute"

#import <Foundation/Foundation.h>
#import <BidmadSDK/BIDMADGDPR.h>

NS_ASSUME_NONNULL_BEGIN

@interface BidmadCommon : NSObject

+ (void)setAdvertiserTrackingEnabled:(BOOL)enable;
+ (BOOL)getAdvertiserTrackingEnabled;
+ (void)reqAdTrackingAuthorizationWith:(void (^ _Nonnull)(BidmadTrackingAuthorizationStatus))completionHandler;
/// If your app is directed to kids under the age of 13, please set YES or true.
+ (void)setIsChildDirectedAds:(BOOL)isChildDirectedAdsNeeded;
/// If your app should be compliant to CCPA, please set the user consent status with this method.
+ (void)setUserConsentStatusForCCPACompliance:(BOOL)isUserConsent;
+ (void)setIsDebug:(BOOL)isDebug;
+ (BOOL)isDebug;
+ (NSString * _Nonnull)bidmadVersion;
+ (void)setTestDeviceId:(NSString * _Nonnull)testDeviceId;
+ (NSString * _Nonnull)testDeviceId;
/// Setting for Child-Directed Treament for COPPA-Compliance.
+ (NSNumber * _Nullable)isChildDirectedTreatment;
/// Setting for CCPA User Consent Status. If nil, the app does not have to be compliant to CCPA.
+ (NSNumber * _Nullable)isUserConsentCCPA;
+ (void)initializeSdk;

@end

NS_ASSUME_NONNULL_END
