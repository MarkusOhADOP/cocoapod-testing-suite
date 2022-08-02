//
//  BidmadRewardAd.h
//  OpenBiddingHelper
//
//  Created by ADOP_Mac on 2022/06/30.
//

#pragma clang diagnostic ignored "-Wobjc-property-no-attribute"

#import <UIKit/UIKit.h>
#import "OpenBiddingRewardVideo.h"
#import "BidmadAdStandardFullScreenAd.h"

NS_ASSUME_NONNULL_BEGIN

@interface BidmadRewardAd : NSObject <BidmadAdStandardFullScreenAd, BIDMADOpenBiddingRewardVideoDelegate>
@property (nonatomic, strong) id <BIDMADOpenBiddingRewardVideoDelegate> _Nullable delegate;
@property (nonatomic) BOOL isAutoReload;
- (nonnull instancetype)initWith:(UIViewController * _Nonnull)parentViewController zoneID:(NSString * _Nonnull)zoneID;
- (void)load;
- (void)show;
- (void)setCUID:(NSString * _Nonnull)cuid;
- (BOOL)isLoaded;
- (void)BIDMADOpenBiddingRewardSkipped:(OpenBiddingRewardVideo * _Null_unspecified)core;
- (void)BIDMADOpenBiddingRewardVideoLoad:(OpenBiddingRewardVideo * _Null_unspecified)core;
- (void)BIDMADOpenBiddingRewardVideoShow:(OpenBiddingRewardVideo * _Null_unspecified)core;
- (void)BIDMADOpenBiddingRewardVideoClick:(OpenBiddingRewardVideo * _Null_unspecified)core;
- (void)BIDMADOpenBiddingRewardVideoClose:(OpenBiddingRewardVideo * _Null_unspecified)core;
- (void)BIDMADOpenBiddingRewardVideoSucceed:(OpenBiddingRewardVideo * _Null_unspecified)core;
- (void)BIDMADOpenBiddingRewardVideoAllFail:(OpenBiddingRewardVideo * _Null_unspecified)core;
- (void)bidmadOpenBiddingRewardVideoErrorLoadLog:(NSDictionary * _Null_unspecified)currentDic;
- (void)bidmadOpenBiddingRewardVideoSuccessLoadLog:(NSDictionary * _Null_unspecified)currentDic;
@end

NS_ASSUME_NONNULL_END
