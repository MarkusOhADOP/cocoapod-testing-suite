//
//  BidmadSplashAdapter.h
//  BidmadSDK
//

#import <UIKit/UIKit.h>
#import "BidmadAdapterInterfaceAccess.h"

@class BidmadAdUnit;

NS_ASSUME_NONNULL_BEGIN

@class BidmadSplashAdapter;

@protocol BidmadSplashAdapterDelegate <NSObject>

- (void)clickedWith:(__kindof BidmadSplashAdapter *)ad;

@end

NS_SWIFT_SENDABLE
@interface BidmadSplashAdapter : NSObject <BidmadAdapterInterfaceAccess>

@property (nonatomic, weak) id<BidmadSplashAdapterDelegate> delegate;
@property (nonatomic, strong) BidmadAdUnit *adUnit;

- (void)loadAdFrom:(UIViewController *)viewController
              with:(void (^)(BidmadSplashAdapter * _Nullable,
                             UIView * _Nullable,
                             CGSize,
                             NSError * _Nullable))completionHandler;
- (void)destroyed;
- (instancetype)initWithAdUnit:(BidmadAdUnit *)adUnit;

@end

NS_ASSUME_NONNULL_END
