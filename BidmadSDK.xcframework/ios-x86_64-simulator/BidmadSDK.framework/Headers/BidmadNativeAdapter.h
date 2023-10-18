//
//  BidmadNativeAdapter.h
//  BidmadSDK
//
//  Created by 플랫폼-오승섭-맥북 on 2023/08/24.
//

#import <UIKit/UIKit.h>
#import "BIDMADNativeAdView.h"
#import "BidmadAdUnit.h"

NS_ASSUME_NONNULL_BEGIN

@class BidmadNativeAdapter;

@protocol BidmadNativeAdapterDelegate <NSObject>

- (void)clickedWith:(__kindof BidmadNativeAdapter *)ad;
- (void)videoEndedWith:(__kindof BidmadNativeAdapter *)ad;

@end

@interface BidmadNativeAdapter : NSObject

@property (nonatomic, strong) BidmadAdUnit *adUnit;
@property (nonatomic, weak) id<BidmadNativeAdapterDelegate> delegate;

- (void)loadAdWith:(void (^)(BidmadNativeAdapter * _Nullable, NSError * _Nullable))completionHandler;
- (void)showAdTo:(BIDMADNativeAdView *)adView;
- (void)removeAdFrom:(BIDMADNativeAdView *)adView;
- (instancetype)initWithAdUnit:(BidmadAdUnit *)adUnit;

@end

NS_ASSUME_NONNULL_END
