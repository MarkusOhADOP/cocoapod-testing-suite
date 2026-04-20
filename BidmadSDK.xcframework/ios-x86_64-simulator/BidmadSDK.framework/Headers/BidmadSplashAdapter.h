//
//  BidmadSplashAdapter.h
//  BidmadSDK
//

#import <Foundation/Foundation.h>
#import "BidmadAdapterInterfaceAccess.h"

@class BidmadAdUnit;

NS_ASSUME_NONNULL_BEGIN

@interface BidmadSplashAdContent : NSObject

@property (nonatomic, copy, readonly) NSString *imageUrl;
@property (nonatomic, copy, readonly) NSString *impressionUrl;
@property (nonatomic, copy, readonly) NSString *splashType;
@property (nonatomic, copy, readonly) NSString *endDate;

- (instancetype)initWithImageUrl:(NSString *)imageUrl
                   impressionUrl:(NSString *)impressionUrl
                      splashType:(NSString *)splashType
                         endDate:(NSString *)endDate;

@end

@class BidmadSplashAdapter;

@protocol BidmadSplashAdapterDelegate <NSObject>
@end

NS_SWIFT_SENDABLE
@interface BidmadSplashAdapter : NSObject <BidmadAdapterInterfaceAccess>

@property (nonatomic, strong) BidmadAdUnit *adUnit;

- (void)loadAdWithCompletionHandler:(void (^)(BidmadSplashAdapter * _Nullable,
                                              BidmadSplashAdContent * _Nullable,
                                              NSError * _Nullable))completionHandler;
- (void)destroyed;
- (instancetype)initWithAdUnit:(BidmadAdUnit *)adUnit;

@end

NS_ASSUME_NONNULL_END
