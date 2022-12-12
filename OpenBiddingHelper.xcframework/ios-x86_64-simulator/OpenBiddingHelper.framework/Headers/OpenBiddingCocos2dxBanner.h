//
//  Cocos2dxBanner.h
//  BidmadSDK
//
//  Created by ADOP_Mac on 2021/06/29.
//  Copyright © 2021 ADOP Co., Ltd. All rights reserved.
//

#pragma clang diagnostic ignored "-Wobjc-property-no-attribute"

#import <Foundation/Foundation.h>
#import "OpenBiddingBanner.h"

@interface OpenBiddingCocos2dxBanner : NSObject<BIDMADOpenBiddingBannerDelegate>

@property (nonatomic, strong) id<BIDMADOpenBiddingBannerDelegate> delegate;
@property (nonatomic, strong) NSNumber *refreshInterval;

- (id)initWithZoneID:(NSString*)zoneId;
- (void)load:(int)y;
- (void)load:(int)x :(int)y;
- (void)setInterval:(int)interval;
- (void)removeBanner;
- (void)hideBannerView;
- (void)showBannerView;

- (void)onLoadFailAd:(OpenBiddingBanner *)bidmadAd error:(NSError * _Nullable)error;
- (void)onCloseAd:(OpenBiddingBanner *)bidmadAd;
- (void)onLoadAd:(OpenBiddingBanner *)bidmadAd;
- (void)onClickAd:(OpenBiddingBanner*)bidmadAd;

@end
