//
//  BidmadNativeAd.h
//  OpenBiddingHelper
//
//  Created by Seungsub Oh on 2023/01/03.
//

#import <Foundation/Foundation.h>
#import "BidmadAdStandardNativeAd.h"

NS_ASSUME_NONNULL_BEGIN

@protocol BidmadNativeAdDelegate;

@interface BidmadNativeAd : NSObject <BidmadAdStandardNativeAd>

@property (nonatomic, weak) id<BidmadNativeAdDelegate> delegate;
@property (readonly) BOOL isLoaded;
@property (nonatomic, strong) NSString *zoneID;

+ (BIDMADNativeAdView * _Nullable)findAdViewFromSuperview:(UIView *)superview;

@end

@protocol BidmadNativeAdDelegate <NSObject>

@optional
- (void)onLoadAd:(BidmadNativeAd * _Nonnull)bidmadAd;
- (void)onLoadFailAd:(BidmadNativeAd * _Nonnull)bidmadAd error:(NSError * _Nonnull)error;
- (void)onClickAd:(BidmadNativeAd * _Nonnull)bidmadAd;

@end

NS_ASSUME_NONNULL_END
