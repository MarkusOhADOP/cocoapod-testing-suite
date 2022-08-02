//
//  BIDMADPangleReward.h
//  BidmadSDK
//
//  Created by ADOP_Mac on 2021/06/25.
//  Copyright © 2021 ADOP Co., Ltd. All rights reserved.
//

#pragma clang diagnostic ignored "-Wobjc-property-no-attribute"

#import <Foundation/Foundation.h>
#import <BUAdSDK/BUAdSDK.h>

@interface BIDMADPangleReward : NSObject<BURewardedVideoAdDelegate>

@property (weak,nonatomic) id __nullable bidmadControllerForCallbacks;

- (id __nonnull)initWithAppID:(NSString * _Nonnull)appID
                                pubID:(NSString * _Nullable)pubID
                               rootVC:(UIViewController * _Nonnull)rootVC
                           parentView:(UIView * _Nullable)parentView
                              isChild:(NSNumber * _Nullable)isChild
                        isGDPRConsent:(NSNumber * _Nullable)isGDPRConsent
                        isCCPAConsent:(NSNumber * _Nullable)isCCPAConsent;
- (void)load;
- (void)setIsRewardedAd:(BOOL)isRewardedAd;
- (void)setIsDebug:(BOOL)isDebug;
- (void)setBidmadController:(id __nonnull)bidmadController;
- (void)show;
- (void)hide;
- (void)remove;

@end
