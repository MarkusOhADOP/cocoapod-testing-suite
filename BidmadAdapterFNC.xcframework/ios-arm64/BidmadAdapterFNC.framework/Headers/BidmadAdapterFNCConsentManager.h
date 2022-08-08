//
//  BidmadAdapterFNCConsentManager.h
//  BidmadAdapterFNC
//
//  Created by ADOP_Mac on 2022/06/15.
//

#import <Foundation/Foundation.h>
#import <ADOPUtility/BidmadConsentProtocol.h>

NS_ASSUME_NONNULL_BEGIN

@interface BidmadAdapterFNCConsentManager : NSObject <BidmadConsentProtocol>

+ (void)setGDPR:(NSNumber * _Nullable)gdprConsent;
+ (void)setGDPRForPangleSDK:(NSNumber * _Nonnull)gdprConsent;

@end

NS_ASSUME_NONNULL_END
