//
//  UnrealReward.h
//  BidmadSDK
//
//  Created by 전혜연 on 2020/12/08.
//  Copyright © 2020 ADOP Co., Ltd. All rights reserved.
//

#pragma clang diagnostic ignored "-Wobjc-property-no-attribute"

#import <Foundation/Foundation.h>
#import "BIDMADSetting.h"
#import "BIDMADInterstitial.h"
static NSMutableDictionary* BidmadUnrealInterstitialDic;

@interface UnrealInterstitial : NSObject <BIDMADInterstitialDelegate>{
    NSString* mZoneId;
    id<BIDMADInterstitialDelegate> delegate;
    @public BIDMADInterstitial* bidmadInterstitial;
}

- (id)initWithZoneId:(NSString *)zoneId;
+ (id)getInstance:(NSString *)zoneId;
- (void)setZoneID:(NSString *)zoneId;
- (void)setDelegate:(id) param;
- (void)load;
- (void)show;
- (bool)isLoaded;

@end