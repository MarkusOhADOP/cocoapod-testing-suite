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

@property (nonatomic, weak) id <BIDMADOpenBiddingBannerDelegate> _Nullable delegate;
- (nonnull instancetype)initWith:(UIViewController * _Nonnull)parentViewController containerView:(UIView * _Nonnull)containerView zoneID:(NSString * _Nonnull)zoneID;
- (void)load;
- (void)setRefreshInterval:(NSInteger)refreshIntervalTime;
- (void)hide;
- (void)show;
- (void)remove;

#pragma mark BIDMADOpenBiddingBannerDelegate Methods

- (void)onLoadAd:(OpenBiddingBanner * _Nonnull)bidmadAd;
- (void)onClickAd:(OpenBiddingBanner * _Nonnull)bidmadAd;
- (void)onLoadFailAd:(OpenBiddingBanner * _Nonnull)bidmadAd error:(NSError * _Nonnull)error;

@end

NS_ASSUME_NONNULL_END
