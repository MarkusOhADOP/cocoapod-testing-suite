//
//  BidmadNativeAd.h
//  OpenBiddingHelper
//
//  Created by Seungsub Oh on 2023/01/03.
//

#import <UIKit/UIKit.h>
#import "BidmadAdStandardNativeAd.h"
#import <BidmadSDK/BidmadSDK.h>

NS_ASSUME_NONNULL_BEGIN

@class BidmadNativeAd;

@protocol BidmadNativeAdDelegate;

@interface BidmadNativeAd : NSObject <BidmadAdStandardNativeAd>

@property (nonatomic, weak) id<BidmadNativeAdDelegate> delegate;
@property (readonly) BOOL isLoaded;
@property (nonatomic, strong) NSString *zoneID;
@property (nonatomic, strong) NSString * _Nullable testHost;
@property (nonatomic, strong) NSString * _Nullable testPath;

@property(nonatomic, copy) void (^_Nullable onLoadAd)
    (BidmadNativeAd *, BidmadInfo *);
@property(nonatomic, copy) void (^_Nullable onLoadFailAd)
    (BidmadNativeAd *, NSError *);
@property(nonatomic, copy) void (^_Nullable onClickAd)
    (BidmadNativeAd *, BidmadInfo *);

+ (BIDMADNativeAdView * _Nullable)findAdViewFromSuperview:(UIView *)superview;
- (instancetype)initWithZoneID:(NSString *)zoneID;

@end

@protocol BidmadNativeAdDelegate <NSObject>

@optional
- (void)onLoadNativeAd:(BidmadNativeAd * _Nonnull)nativeAd info:(BidmadInfo *)info NS_SWIFT_NAME(onLoad(nativeAd:info:));
- (void)onLoadFailNativeAd:(BidmadNativeAd * _Nonnull)nativeAd error:(NSError * _Nonnull)error NS_SWIFT_NAME(onLoadFail(nativeAd:error:));
- (void)onClickNativeAd:(BidmadNativeAd * _Nonnull)nativeAd info:(BidmadInfo *)info NS_SWIFT_NAME(onClick(nativeAd:info:));

@end

NS_ASSUME_NONNULL_END
