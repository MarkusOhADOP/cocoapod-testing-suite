//
//  BidmadSplashAd.h
//  OpenBiddingHelper
//

#pragma clang diagnostic ignored "-Wobjc-property-no-attribute"

#import <Foundation/Foundation.h>
#import <BidmadSDK/BidmadSDK.h>
#import <BidmadSDK/BidmadSDK-Swift.h>

NS_ASSUME_NONNULL_BEGIN

@class BidmadSplashAd;

@protocol BidmadSplashAdDelegate <NSObject>
@optional
- (void)onLoadSplashAd:(BidmadSplashAd * _Nonnull)ad content:(BidmadSplashAdContent * _Nonnull)content info:(BidmadInfo *)info NS_SWIFT_NAME(onLoad(splashAd:content:info:));
- (void)onLoadFailSplashAd:(BidmadSplashAd * _Nonnull)ad error:(NSError * _Nonnull)error NS_SWIFT_NAME(onLoadFail(splashAd:error:));
@end

@interface BidmadSplashAd : NSObject <BMSplashAdDelegate>

@property (nonatomic, weak) id<BidmadSplashAdDelegate> _Nullable delegate;
@property (nonatomic, readonly) BidmadLoadStatus loadStatus;
@property (readonly) BOOL isLoaded;
@property (nonatomic, strong, readonly) BidmadSplashAdContent * _Nullable adContent;

@property (nonatomic, strong) NSString * _Nullable testHost;
@property (nonatomic, strong) NSString * _Nullable testPath;

@property (nonatomic, strong, readonly) BMSplashAd * _Nonnull bmSplashAd;

- (nonnull instancetype)initWithZoneID:(NSString * _Nonnull)zoneID;
- (void)load;

@end

NS_ASSUME_NONNULL_END
