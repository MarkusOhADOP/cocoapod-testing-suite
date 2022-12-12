//
//  BidmadVungleBridge.h
//  BidmadAdapterFC
//
//  Created by Seungsub Oh on 2022/02/21.
//

#pragma clang diagnostic ignored "-Wobjc-property-no-attribute"

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface BidmadVungleBridge : NSObject

+ (void)setPrivacyIsGDPRConsent:(NSNumber * _Nullable)isGDPRConsent
                  isCCPAConsent:(NSNumber * _Nullable)isCCPAConsent;

@end

NS_ASSUME_NONNULL_END
