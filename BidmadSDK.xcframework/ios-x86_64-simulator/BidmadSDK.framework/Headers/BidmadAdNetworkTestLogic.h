//
//  BidmadAdNetworkTestViewController.h
//  OpenBiddingHelper
//
//  Created by Seungsub Oh on 2022/09/05.
//

#import <UIKit/UIKit.h>
#import "BidmadTestAdType.h"

NS_ASSUME_NONNULL_BEGIN

@protocol BidmadAdNetworkTestCallbacks <NSObject>

- (void)cAllFail;
- (void)cLoad;
- (void)cShow;
- (void)cFailOrNoFill;
- (void)cClose;
- (void)cClick;
- (void)cSkip;
- (void)cCompleteWatchingVideo;

@end

@interface BidmadAdNetworkTestLogic : NSObject

- (void)callAdNetworkFromNetworkName:(NSString *)networkName adType:(BidmadTestAdType)type  vc:(UIViewController *)vc bannerContainer:(UIView *)bannerContainer zoneID:(NSString *)zoneID error:(NSError **)error;

@property (nonatomic, weak) BidmadAdNetworkTestLogic *innerDelegate;
@property (nonatomic) BOOL isLabelService;
@property (nonatomic) BOOL isLoaded;
@property (nonatomic, strong) id instanceOBH;
@property (nonatomic, strong) NSDictionary *ads_dic;

@property (nonatomic) BidmadTestAdType adType;
@property (nonatomic, weak) id<BidmadAdNetworkTestCallbacks> testCallbacksDelegate;

- (void)showAd;
- (void)removeAd;

// Inner Delegate Support

- (void)onBannerAllFail;
- (void)onBannerError:(NSString *)error failType:(NSString *)failType;
- (void)onBannerClosed;
- (void)onBannerLoad;
- (void)onBannerClick;

@end

NS_ASSUME_NONNULL_END
