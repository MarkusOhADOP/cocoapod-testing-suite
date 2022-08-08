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
- (nonnull instancetype)initWith:(UIViewController * _Nonnull)parentViewController zoneID:(NSString * _Nonnull)zoneID;
- (void)load;
- (void)show;
- (void)setCUID:(NSString * _Nonnull)cuid;
- (void)deregisterForAppOpenAd;
- (BOOL)isLoaded;

#pragma mark OpenBiddingAppOpenAdDelegate Methods

- (void)OpenBiddingAppOpenAdLoad:(OpenBiddingAppOpenAd * _Nonnull)core;
- (void)OpenBiddingAppOpenAdShow:(OpenBiddingAppOpenAd * _Nonnull)core;
- (void)OpenBiddingAppOpenAdClick:(OpenBiddingAppOpenAd * _Nonnull)core;
- (void)OpenBiddingAppOpenAdClose:(OpenBiddingAppOpenAd * _Nonnull)core;
- (void)OpenBiddingAppOpenAdAllFail:(OpenBiddingAppOpenAd * _Nonnull)core;

@end

NS_ASSUME_NONNULL_END
