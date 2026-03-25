//
//  BidmadAppOpenAd.h
//  OpenBiddingHelper
//
//  Created by ADOP_Mac on 2022/07/01.
//

#pragma clang diagnostic ignored "-Wobjc-property-no-attribute"

#import <Foundation/Foundation.h>
#import "BidmadAdStandardFullScreenAd.h"
#import "OpenBiddingAppOpenAd.h"

NS_ASSUME_NONNULL_BEGIN

@interface BidmadAppOpenAd : NSObject <BidmadAdStandardFullScreenAd, OpenBiddingAppOpenAdDelegate>

@property (nonatomic, strong) id <OpenBiddingAppOpenAdDelegate> _Nullable delegate;
@property (nonatomic) BOOL isAutoReload;

@property(nonatomic, copy) void (^_Nullable onLoadAd)
    (OpenBiddingAppOpenAd *, BidmadInfo *);
@property(nonatomic, copy) void (^_Nullable onLoadFailAd)
    (OpenBiddingAppOpenAd *, NSError *);
@property(nonatomic, copy) void (^_Nullable onShowAd)
    (OpenBiddingAppOpenAd *, BidmadInfo *);
@property(nonatomic, copy) void (^_Nullable onShowFailAd)
    (OpenBiddingAppOpenAd *, BidmadInfo *_Nullable, NSError *);
@property(nonatomic, copy) void (^_Nullable onClickAd)
    (OpenBiddingAppOpenAd *, BidmadInfo *);
@property(nonatomic, copy) void (^_Nullable onCloseAd)
    (OpenBiddingAppOpenAd *, BidmadInfo *);

- (nonnull instancetype)initWithZoneID:(NSString * _Nonnull)zoneID;
- (void)load;
- (void)showOnViewController:(UIViewController *)viewController;
- (void)deregisterForAppOpenAd;
- (BOOL)isLoaded;

@end

NS_ASSUME_NONNULL_END
