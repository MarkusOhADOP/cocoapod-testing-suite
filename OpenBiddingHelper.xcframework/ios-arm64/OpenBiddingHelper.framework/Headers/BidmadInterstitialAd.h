//
//  BidmadInterstitialAd.h
//  OpenBiddingHelper
//
//  Created by ADOP_Mac on 2022/06/30.
//

#pragma clang diagnostic ignored "-Wobjc-property-no-attribute"

#import <UIKit/UIKit.h>
#import "OpenBiddingInterstitial.h"
#import "BidmadAdStandardFullScreenAd.h"

NS_ASSUME_NONNULL_BEGIN

@interface BidmadInterstitialAd : NSObject <BidmadAdStandardFullScreenAd, BIDMADOpenBiddingInterstitialDelegate>
@property (nonatomic, strong) id <BIDMADOpenBiddingInterstitialDelegate> _Nullable delegate;
@property (nonatomic) BOOL isAutoReload;
- (nonnull instancetype)initWith:(UIViewController * _Nonnull)parentViewController zoneID:(NSString * _Nonnull)zoneID;
- (void)load;
- (void)show;
- (void)setCUID:(NSString * _Nonnull)cuid;
- (BOOL)isLoaded;
- (void)BIDMADOpenBiddingInterstitialLoad:(OpenBiddingInterstitial * _Null_unspecified)core;
- (void)BIDMADOpenBiddingInterstitialShow:(OpenBiddingInterstitial * _Null_unspecified)core;
- (void)BIDMADOpenBiddingInterstitialClose:(OpenBiddingInterstitial * _Null_unspecified)core;
- (void)BIDMADOpenBiddingInterstitialAllFail:(OpenBiddingInterstitial * _Null_unspecified)core;
@end

NS_ASSUME_NONNULL_END
