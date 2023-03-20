//
//  BidmadTestNativeAdView.h
//  BidmadSDK
//
//  Created by Seungsub Oh on 2023/03/06.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface BidmadTestNativeAdView : UIView

@property (nonatomic, strong) void (^adRemovalSignal)(void);

- (instancetype)initWithRootVC:(UIViewController *)rootVC nativeAd:(id)nativeAd;
- (void)associateNativeAdToUI;

@end

NS_ASSUME_NONNULL_END
