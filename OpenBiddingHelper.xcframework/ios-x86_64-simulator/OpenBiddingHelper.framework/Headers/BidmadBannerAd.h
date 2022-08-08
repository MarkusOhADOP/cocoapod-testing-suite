//
//  BidmadBannerAd.h
//  OpenBiddingHelper
//
//  Created by ADOP_Mac on 2022/06/30.
//

#pragma clang diagnostic ignored "-Wobjc-property-no-attribute"

#import <UIKit/UIKit.h>
#import "OpenBiddingBanner.h"
#import "BidmadAdStandardBanner.h"

NS_ASSUME_NONNULL_BEGIN

@interface BidmadBannerAd : NSObject <BidmadAdStandardBanner, BIDMADOpenBiddingBannerDelegate>

@property (nonatomic, strong) id <BIDMADOpenBiddingBannerDelegate> _Nullable delegate;
- (nonnull instancetype)initWith:(UIViewController * _Nonnull)parentViewController containerView:(UIView * _Nonnull)containerView zoneID:(NSString * _Nonnull)zoneID;
- (void)load;
- (void)setRefreshInterval:(NSInteger)refreshIntervalTime;
- (void)setCUID:(NSString * _Nonnull)cuid;
- (void)hide;
- (void)show;
- (void)remove;

#pragma mark BIDMADOpenBiddingBannerDelegate Methods

- (void)BIDMADOpenBiddingBannerLoad:(OpenBiddingBanner * _Null_unspecified)core;
- (void)BIDMADOpenBiddingBannerClick:(OpenBiddingBanner * _Null_unspecified)core;
- (void)BIDMADOpenBiddingBannerAllFail:(OpenBiddingBanner * _Null_unspecified)core;
- (void)BIDMADOpenBiddingBannerClosed:(OpenBiddingBanner * _Null_unspecified)core;

@end

NS_ASSUME_NONNULL_END
