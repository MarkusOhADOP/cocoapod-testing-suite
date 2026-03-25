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

@property (nonatomic, weak) id <BIDMADOpenBiddingInterstitialDelegate> _Nullable delegate;
@property (nonatomic) BOOL isAutoReload;

@property(nonatomic, copy) void (^_Nullable onLoadAd)
    (OpenBiddingInterstitial *, BidmadInfo *);
@property(nonatomic, copy) void (^_Nullable onLoadFailAd)
    (OpenBiddingInterstitial *, NSError *);
@property(nonatomic, copy) void (^_Nullable onShowAd)
    (OpenBiddingInterstitial *, BidmadInfo *);
@property(nonatomic, copy) void (^_Nullable onShowFailAd)
    (OpenBiddingInterstitial *, BidmadInfo *_Nullable, NSError *);
@property(nonatomic, copy) void (^_Nullable onClickAd)
    (OpenBiddingInterstitial *, BidmadInfo *);
@property(nonatomic, copy) void (^_Nullable onCloseAd)
    (OpenBiddingInterstitial *, BidmadInfo *);

- (nonnull instancetype)initWithZoneID:(NSString * _Nonnull)zoneID;
- (void)load;
- (void)showOnViewController:(UIViewController * _Nonnull)viewController;
- (BOOL)isLoaded;

@end

NS_ASSUME_NONNULL_END
