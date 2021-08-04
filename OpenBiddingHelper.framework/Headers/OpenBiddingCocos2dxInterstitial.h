//
//  Cocos2dxInterstitial.h
//  BidmadSDK
//
//  Created by Kenneth on 2021/04/27.
//  Copyright © 2021 ADOP Co., Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <BidmadSDK/BIDMADSetting.h>
#import "OpenBiddingInterstitial.h"

@interface OpenBiddingCocos2dxInterstitial : NSObject <BIDMADOpenBiddingInterstitialDelegate>{
    NSString* mZoneId;
    id<BIDMADOpenBiddingInterstitialDelegate> delegate;
    @public OpenBiddingInterstitial* bidmadInterstitial;
}

- (id)initWithZoneId:(NSString *)zoneId;
- (void)setZoneID:(NSString *)zoneId;
- (void)setDelegate:(id) param;
- (void)load;
- (void)show;
- (bool)isLoaded;

@end
