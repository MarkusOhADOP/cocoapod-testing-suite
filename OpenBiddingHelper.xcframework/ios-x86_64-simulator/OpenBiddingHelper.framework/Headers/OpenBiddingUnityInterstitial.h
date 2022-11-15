//
//  UnityInterstitial.h
//  BidmadSDK
//
//  Created by Kenneth on 2021/01/15.
//  Copyright © 2021 ADOP Co., Ltd. All rights reserved.
//

#pragma clang diagnostic ignored "-Wobjc-property-no-attribute"

#ifndef OpenBiddingUnityInterstitial_h
#define OpenBiddingUnityInterstitial_h

#import <Foundation/Foundation.h>
#import "OpenBiddingInterstitial.h"

@interface OpenBiddingUnityInterstitial : NSObject

+ (void)initialSetupForZoneID:(NSString *)zoneID;
+ (void)loadWithZoneID:(NSString *)zoneID;
+ (void)showWithZoneID:(NSString *)zoneID viewController:(UIViewController *)viewController;
+ (BOOL)isLoadedWithZoneID:(NSString *)zoneID;
+ (void)setDelegate:(id)instance;
+ (void)setCUID:(NSString *)cuid forZoneID:(NSString *)zoneID;
+ (void)setAutoReload:(BOOL)isAutoReload;

@end

#endif /* OpenBiddingUnityInterstitial_h */
