//
//  BidmadAdapterFCConsentManager.h
//  BidmadAdapterFC
//
//  Created by ADOP_Mac on 2022/06/15.
//

#import <Foundation/Foundation.h>
#import <ADOPUtility/BidmadConsentProtocol.h>

NS_ASSUME_NONNULL_BEGIN

@interface BidmadAdapterFCConsentManager : NSObject <BidmadConsentProtocol>

+ (void)setGDPR:(NSNumber * _Nullable)gdprConsent;
+ (void)setGDPRForAppLovin:(NSNumber * _Nonnull)gdprConsent;
+ (void)setGDPRForIronSource:(NSNumber * _Nonnull)gdprConsent;
+ (void)setGDPRForUnityAds:(NSNumber * _Nonnull)gdprConsent;
+ (void)setGDPRForVungle:(NSNumber * _Nonnull)gdprConsent;

@end

NS_ASSUME_NONNULL_END
