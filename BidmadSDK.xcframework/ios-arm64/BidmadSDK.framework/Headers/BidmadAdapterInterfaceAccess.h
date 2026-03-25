#import <UIKit/UIKit.h>

@class BidmadAdUnit;

NS_ASSUME_NONNULL_BEGIN

@protocol BidmadAdapterInterfaceAccess <NSObject>

@required
- (NSObject<BidmadAdapterInterfaceAccess> *)initWithAdUnit:
    (BidmadAdUnit *)adUnit;
@property(nonatomic, strong) BidmadAdUnit *adUnit;

@optional
- (void)destroyed;

@end

NS_ASSUME_NONNULL_END
