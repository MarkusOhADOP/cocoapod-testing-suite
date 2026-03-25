//
//  BidmadFullscreenAdapter.h
//  BidmadSDK
//
//  Created by 플랫폼-오승섭-맥북 on 2023/08/24.
//

#import <UIKit/UIKit.h>
#import <BidmadSDK/BidmadSDK.h>

NS_ASSUME_NONNULL_BEGIN

@protocol BidmadInterstitialSC <NSObject>

+ (BOOL)isSupported;

@end

@protocol BidmadRewardSC <NSObject>

+ (BOOL)isSupported;

@end

@interface BidmadRewardAdapterSupportChecker : NSObject <BidmadRewardSC>
@end

@class BidmadFullscreenAdapter;

@protocol BidmadFullscreenAdapterDelegate <NSObject>

- (void)dismissedWith:(__kindof BidmadFullscreenAdapter *)ad;
- (void)presentedWith:(__kindof BidmadFullscreenAdapter *)ad;
- (void)failedToPresentWith:(__kindof BidmadFullscreenAdapter *)ad error:(NSError *)error;
- (void)clickedWith:(__kindof BidmadFullscreenAdapter *)ad;
- (void)rewardedWith:(__kindof BidmadFullscreenAdapter *)ad;
- (void)skippedWith:(__kindof BidmadFullscreenAdapter *)ad;

@end

NS_SWIFT_SENDABLE
@interface BidmadFullscreenAdapter : NSObject

@property (nonatomic, strong) BidmadAdUnit *adUnit;
@property (nonatomic, weak) id<BidmadFullscreenAdapterDelegate> delegate;

- (void)loadAdWith:(void (^)(BidmadFullscreenAdapter * _Nullable, NSError * _Nullable))completionHandler;
- (void)showAdFrom:(UIViewController *)viewController;
- (instancetype)initWithAdUnit:(BidmadAdUnit *)adUnit;

@end

NS_ASSUME_NONNULL_END
