//
//  BidmadSplashAd.h
//  OpenBiddingHelper
//

#pragma clang diagnostic ignored "-Wobjc-property-no-attribute"

#import <UIKit/UIKit.h>
#import <BidmadSDK/BidmadSDK.h>
#import <BidmadSDK/BidmadSDK-Swift.h>

NS_ASSUME_NONNULL_BEGIN

@class BidmadSplashAd;

@protocol BidmadSplashAdDelegate <NSObject>
@optional
- (void)onLoadSplashAd:(BidmadSplashAd * _Nonnull)splashAd info:(BidmadInfo *)info NS_SWIFT_NAME(onLoad(splashAd:info:));
- (void)onLoadFailSplashAd:(BidmadSplashAd * _Nonnull)splashAd error:(NSError * _Nonnull)error NS_SWIFT_NAME(onLoadFail(splashAd:error:));
- (void)onClickSplashAd:(BidmadSplashAd * _Nonnull)splashAd info:(BidmadInfo * _Nonnull)info NS_SWIFT_NAME(onClick(splashAd:info:));
@end

@interface BidmadSplashAd : NSObject <BMSplashAdDelegate>

@property (nonatomic, weak) id<BidmadSplashAdDelegate> _Nullable delegate;
@property (nonatomic, readonly) BidmadLoadStatus loadStatus;
@property (readonly) BOOL isLoaded;

@property (nonatomic, strong) NSString * _Nullable testHost;
@property (nonatomic, strong) NSString * _Nullable testPath;

@property (nonatomic, strong, readonly) BMSplashAd * _Nonnull bmSplashAd;

- (nonnull instancetype)initWithContainerView:(UIView * _Nonnull)containerView zoneID:(NSString * _Nonnull)zoneID;
- (void)load;
- (void)remove;

@end

NS_ASSUME_NONNULL_END
