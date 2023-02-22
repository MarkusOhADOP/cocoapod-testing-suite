//
//  BidmadUnityAdsConsentSetting.h
//  BidmadAdapterFC
//
//  Created by ADOP_Mac on 2022/07/05.
//

#pragma clang diagnostic ignored "-Wobjc-property-no-attribute"

#import <Foundation/Foundation.h>
#import <UnityAds/UnityAds.h>

NS_ASSUME_NONNULL_BEGIN

@interface BidmadUnityAdsConsentSetting : NSObject

+ (void)setConsentStatus:(UADSMetaData *)metaData :(NSNumber * _Nullable)isGDPRConsent :(NSNumber * _Nullable)isCCPAConsent;

@end

NS_ASSUME_NONNULL_END
