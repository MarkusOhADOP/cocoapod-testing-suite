//
//  BidmadCustomRenderedAd.h
//  OpenBiddingHelper
//

#pragma clang diagnostic ignored "-Wobjc-property-no-attribute"

#import <Foundation/Foundation.h>
#import <BidmadSDK/BidmadSDK.h>
#import <BidmadSDK/BidmadSDK-Swift.h>

NS_ASSUME_NONNULL_BEGIN

@class BidmadCustomRenderedAd;

@protocol BidmadCustomRenderedAdDelegate <NSObject>
@optional
- (void)onLoadCustomRenderedAd:(BidmadCustomRenderedAd * _Nonnull)ad content:(BidmadCustomRenderedAdContent * _Nonnull)content info:(BidmadInfo *)info NS_SWIFT_NAME(onLoad(customRenderedAd:content:info:));
- (void)onLoadFailCustomRenderedAd:(BidmadCustomRenderedAd * _Nonnull)ad error:(NSError * _Nonnull)error NS_SWIFT_NAME(onLoadFail(customRenderedAd:error:));
@end

@interface BidmadCustomRenderedAd : NSObject <BMCustomRenderedAdDelegate>

@property (nonatomic, weak) id<BidmadCustomRenderedAdDelegate> _Nullable delegate;
@property (nonatomic, readonly) BidmadLoadStatus loadStatus;
@property (readonly) BOOL isLoaded;
@property (nonatomic, strong, readonly) BidmadCustomRenderedAdContent * _Nullable adContent;

@property (nonatomic, strong) NSString * _Nullable testHost;
@property (nonatomic, strong) NSString * _Nullable testPath;

@property (nonatomic, strong, readonly) BMCustomRenderedAd * _Nonnull bmCustomRenderedAd;

- (nonnull instancetype)initWithZoneID:(NSString * _Nonnull)zoneID;
- (void)load;
- (void)reportImpression;
- (void)reportClick;

@end

NS_ASSUME_NONNULL_END
