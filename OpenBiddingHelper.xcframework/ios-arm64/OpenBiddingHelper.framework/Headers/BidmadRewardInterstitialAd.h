//
//  BidmadRewardInterstitialAd.h
//  OpenBiddingHelper
//
//  Created by ADOP_Mac on 2022/06/30.
//

#pragma clang diagnostic ignored "-Wobjc-property-no-attribute"

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "OpenBiddingRewardInterstitial.h"
#import "BidmadAdStandardFullScreenAd.h"

NS_ASSUME_NONNULL_BEGIN

@interface BidmadRewardInterstitialAd : NSObject <BidmadAdStandardFullScreenAd, OpenBiddingRewardInterstitialDelegate>
@property (nonatomic, strong) id <OpenBiddingRewardInterstitialDelegate> _Nullable delegate;
@property (nonatomic) BOOL isAutoReload;
- (nonnull instancetype)initWith:(UIViewController * _Nonnull)parentViewController zoneID:(NSString * _Nonnull)zoneID;
- (void)load;
- (void)show;
- (void)setCUID:(NSString * _Nonnull)cuid;
- (BOOL)isLoaded;
- (void)OpenBiddingRewardInterstitialLoad:(OpenBiddingRewardInterstitial * _Null_unspecified)core;
- (void)OpenBiddingRewardInterstitialShow:(OpenBiddingRewardInterstitial * _Null_unspecified)core;
- (void)OpenBiddingRewardInterstitialClick:(OpenBiddingRewardInterstitial * _Null_unspecified)core;
- (void)OpenBiddingRewardInterstitialClose:(OpenBiddingRewardInterstitial * _Null_unspecified)core;
- (void)OpenBiddingRewardInterstitialSkipped:(OpenBiddingRewardInterstitial * _Null_unspecified)core;
- (void)OpenBiddingRewardInterstitialSuccess:(OpenBiddingRewardInterstitial * _Null_unspecified)core;
- (void)OpenBiddingRewardInterstitialAllFail:(OpenBiddingRewardInterstitial * _Null_unspecified)core;
@end


NS_ASSUME_NONNULL_END
