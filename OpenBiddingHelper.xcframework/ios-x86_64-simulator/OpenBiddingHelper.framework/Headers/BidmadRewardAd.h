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
@property (nonatomic, weak) id <BIDMADOpenBiddingRewardVideoDelegate> _Nullable delegate;
@property (nonatomic) BOOL isAutoReload;

@property(nonatomic, copy) void (^_Nullable onLoadAd)
    (OpenBiddingRewardVideo *, BidmadInfo *);
@property(nonatomic, copy) void (^_Nullable onLoadFailAd)
    (OpenBiddingRewardVideo *, NSError *);
@property(nonatomic, copy) void (^_Nullable onShowAd)
    (OpenBiddingRewardVideo *, BidmadInfo *);
@property(nonatomic, copy) void (^_Nullable onShowFailAd)
    (OpenBiddingRewardVideo *, BidmadInfo *_Nullable, NSError *);
@property(nonatomic, copy) void (^_Nullable onClickAd)
    (OpenBiddingRewardVideo *, BidmadInfo *);
@property(nonatomic, copy) void (^_Nullable onSkipAd)
    (OpenBiddingRewardVideo *, BidmadInfo *);
@property(nonatomic, copy) void (^_Nullable onCompleteAd)
    (OpenBiddingRewardVideo *, BidmadInfo *);
@property(nonatomic, copy) void (^_Nullable onCloseAd)
    (OpenBiddingRewardVideo *, BidmadInfo *);

- (nonnull instancetype)initWithZoneID:(NSString * _Nonnull)zoneID;
- (void)load;
- (void)showOnViewController:(UIViewController *)viewController;
- (BOOL)isLoaded;

@end

NS_ASSUME_NONNULL_END
