//
//  BidmadCustomRenderedAdapter.h
//  BidmadSDK
//

#import <Foundation/Foundation.h>
#import "BidmadAdapterInterfaceAccess.h"

@class BidmadAdUnit;

NS_ASSUME_NONNULL_BEGIN

@interface BidmadCustomRenderedAdContent : NSObject

@property (nonatomic, copy, readonly) NSString *imageUrl;
@property (nonatomic, copy, readonly) NSString *impressionUrl;
@property (nonatomic, copy, readonly) NSString *clickUrl;

- (instancetype)initWithImageUrl:(NSString *)imageUrl
                   impressionUrl:(NSString *)impressionUrl
                        clickUrl:(NSString *)clickUrl;

@end

@class BidmadCustomRenderedAdapter;

@protocol BidmadCustomRenderedAdapterDelegate <NSObject>
@end

NS_SWIFT_SENDABLE
@interface BidmadCustomRenderedAdapter : NSObject <BidmadAdapterInterfaceAccess>

@property (nonatomic, strong) BidmadAdUnit *adUnit;

- (void)loadAdWithCompletionHandler:(void (^)(BidmadCustomRenderedAdapter * _Nullable,
                                              BidmadCustomRenderedAdContent * _Nullable,
                                              NSError * _Nullable))completionHandler;
- (void)destroyed;
- (instancetype)initWithAdUnit:(BidmadAdUnit *)adUnit;

@end

NS_ASSUME_NONNULL_END
