//
//  BIDMADPangleInterstitial.h
//  BidmadSDK
//
//  Created by ADOP_Mac on 2021/06/25.
//  Copyright © 2021 ADOP Co., Ltd. All rights reserved.
//

#pragma clang diagnostic ignored "-Wobjc-property-no-attribute"

#import <Foundation/Foundation.h>
#import <BUAdSDK/BUAdSDK.h>
#import <ADOPUtility/BidmadAdapterAdEssential.h>
#import <ADOPUtility/BidmadAdapterEssential.h>

@interface BIDMADPangleInterstitial : BidmadAdapterAdEssential<BUFullscreenVideoAdDelegate, BidmadAdapterEssential>

- (id __nonnull)initWithAppID:(NSString * _Nonnull)appID
                        pubID:(NSString * _Nullable)pubID
                       rootVC:(UIViewController * _Nullable)rootVC
                   parentView:(UIView * _Nullable)parentView
                      isChild:(NSNumber * _Nullable)isChild
                isGDPRConsent:(NSNumber * _Nullable)isGDPRConsent
                isCCPAConsent:(NSNumber * _Nullable)isCCPAConsent
             bidmadController:(id _Nonnull)bidmadController;
- (void)load;
- (void)setIsDebug:(BOOL)isDebug;
- (void)hide;
- (void)remove;

@end
