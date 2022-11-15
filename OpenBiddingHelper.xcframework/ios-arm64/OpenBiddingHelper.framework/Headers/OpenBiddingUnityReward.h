//
//  UnityReward.h
//  BidmadSDK
//
//  Created by Kenneth on 2021/01/15.
//  Copyright © 2021 ADOP Co., Ltd. All rights reserved.
//

#pragma clang diagnostic ignored "-Wobjc-property-no-attribute"

#ifndef OpenBiddingUnityReward_h
#define OpenBiddingUnityReward_h

#import <Foundation/Foundation.h>
#import "OpenBiddingRewardVideo.h"

@interface OpenBiddingUnityReward : NSObject

+ (void)initialSetupForZoneID:(NSString *)zoneID;
+ (void)loadWithZoneID:(NSString *)zoneID;
+ (void)showWithZoneID:(NSString *)zoneID viewController:(UIViewController *)viewController;
+ (BOOL)isLoadedWithZoneID:(NSString *)zoneID;
+ (void)setDelegate:(id)instance;
+ (void)setCUID:(NSString *)cuid forZoneID:(NSString *)zoneID;
+ (void)setAutoReload:(BOOL)isAutoReload;

@end

#endif /* OpenBiddingUnityReward_h */
