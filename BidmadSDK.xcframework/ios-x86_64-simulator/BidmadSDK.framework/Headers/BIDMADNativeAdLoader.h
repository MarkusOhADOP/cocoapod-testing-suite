//
//  BIDMADNativeAdLoader.h
//  BidmadSDK
//
//  Created by Seungsub Oh on 2022/07/26.
//

#import <UIKit/UIKit.h>
#import "BIDMADNativeAd.h"
#import "BIDMADNativeAdView.h"
#import "BidmadAdData.h"

@protocol BIDMADNativeAdDelegate
- (void)bidmadNativeAdWithLoadedAd:(BIDMADNativeAd * _Nonnull)loadedAd;
- (void)bidmadNativeAdAllFail:(NSError * _Nonnull)error;
@end

@interface BIDMADNativeAdLoader : NSObject
@property (nonatomic, weak) id <BIDMADNativeAdDelegate> _Nullable delegate;
- (nonnull instancetype)init;
- (void)requestFor:(NSString * _Nonnull)zoneID;
+ (void)setupFor:(BIDMADNativeAd * _Nonnull)nativeAd viewController:(UIViewController * _Nonnull)viewController adView:(BIDMADNativeAdView * _Nonnull)adView;
+ (void)cleanUpFor:(BIDMADNativeAd * _Nonnull)nativeAd adView:(BIDMADNativeAdView * _Nonnull)adView;

+ (void)sendLogForClick:(NSInteger)hash;
@end
