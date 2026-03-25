//
//  BidmadBannerAd.h
//  OpenBiddingHelper
//
//  Created by ADOP_Mac on 2022/06/30.
//

#pragma clang diagnostic ignored "-Wobjc-property-no-attribute"

#import <UIKit/UIKit.h>
#import "BidmadAdStandardBanner.h"
#import <BidmadSDK/BidmadSDK.h>
#import <BidmadSDK/BidmadSDK-Swift.h>

NS_ASSUME_NONNULL_BEGIN

@class BidmadBannerAd;

@protocol BidmadBannerAdDelegate <NSObject>
@optional
- (void)onLoadFailBannerAd:(BidmadBannerAd * _Nonnull)bannerAd error:(NSError * _Nonnull)error NS_SWIFT_NAME(onLoadFail(bannerAd:error:));
- (void)onLoadBannerAd:(BidmadBannerAd * _Nonnull)bannerAd info:(BidmadInfo *)info NS_SWIFT_NAME(onLoad(bannerAd:info:));
- (void)onClickBannerAd:(BidmadBannerAd * _Nonnull)bannerAd info:(BidmadInfo * _Nonnull)info NS_SWIFT_NAME(onClick(bannerAd:info:));
@end

@interface BidmadBannerAd : NSObject <BidmadAdStandardBanner, BMBannerDelegate>

@property (nonatomic, weak) id<BidmadBannerAdDelegate> _Nullable delegate;
@property (nonatomic, readonly) BidmadLoadStatus loadStatus;
@property (readonly) BOOL isLoaded;

/**
 * A Boolean value that determines whether ad refresh feature is enabled.
 * If YES, ad refresh feature is enabled and will refresh the ad every refresh interval seconds.
 * If NO, ad refresh feature is disabled and will not refresh the ad.
 * The default value for adRefreshEnabled is YES (true for Swift)
 */
@property (nonatomic) BOOL adRefreshEnabled;

@property (nonatomic, copy) void (^_Nullable onLoadAd)(BidmadBannerAd *, BidmadInfo *);
@property (nonatomic, copy) void (^_Nullable onClickAd)(BidmadBannerAd *, BidmadInfo *);
@property (nonatomic, copy) void (^_Nullable onLoadFailAd)(BidmadBannerAd *, NSError *);

@property (nonatomic, strong) NSString * _Nullable testHost;
@property (nonatomic, strong) NSString * _Nullable testPath;

@property (nonatomic, strong, readonly) BMBanner * _Nonnull bmBanner;

- (nonnull instancetype)initWith:(UIViewController * _Nonnull)parentViewController containerView:(UIView * _Nonnull)containerView zoneID:(NSString * _Nonnull)zoneID;
- (void)load;
- (void)setRefreshInterval:(NSInteger)refreshIntervalTime;
- (void)resetRefreshInterval;
- (void)hide;
- (void)show;
- (void)remove;

@end

NS_ASSUME_NONNULL_END
