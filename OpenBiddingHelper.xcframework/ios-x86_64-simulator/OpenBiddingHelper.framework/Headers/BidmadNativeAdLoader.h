//
//  BidmadNativeAdLoader.h
//  OpenBiddingHelper
//
//  Created by Kenneth on 2022/11/15.
//

#import <UIKit/UIKit.h>
#import <BidmadSDK/BIDMADNativeAd.h>

static NSMutableDictionary<NSString *, BIDMADNativeAd *> * _Nullable BidmadNativeAdDic;

@interface BidmadNativeAdLoader : NSObject
@property (nonatomic, weak) id<BIDMADNativeAdDelegate> _Nullable delegate;
@property (nonatomic) NSString * _Nullable zoneID;
@property (nonatomic) int numberOfAds;
- (nonnull instancetype)init;
- (void)requestAd:(NSString * _Nonnull)zoneID;
- (void)setAdView:(UIViewController * _Nonnull)viewController adView:(BIDMADNativeAdView * _Nonnull)adView;
- (void)removeAdView:(BIDMADNativeAdView * _Nonnull)adView;
@end
