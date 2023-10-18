//
//  BIDMADNativeAdLoader.h
//  BidmadSDK
//
//  Created by Seungsub Oh on 2022/07/26.
//

#import <UIKit/UIKit.h>
#import "BIDMADNativeAdView.h"

@protocol BIDMADNativeAdDelegate;
@interface BIDMADNativeAd : NSObject
@property (nonatomic, weak) id<BIDMADNativeAdDelegate> _Nullable delegate;
@property (nonatomic) NSString * _Nullable zoneID;
- (nonnull instancetype)init;
- (void)requestNativeAd;
- (void)setAdView:(UIViewController * _Nonnull)viewController adView:(BIDMADNativeAdView * _Nonnull)adView;
- (void)removeAdView:(BIDMADNativeAdView * _Nonnull)adView;
- (Boolean)isLoaded;

@end

@protocol BIDMADNativeAdDelegate <NSObject>
@required
- (void)onLoadAd:(BIDMADNativeAd * _Nonnull)bidmadAd;
- (void)onLoadFailAd:(BIDMADNativeAd * _Nonnull)bidmadAd error:(NSError * _Nonnull)error;
- (void)onClickAd:(BIDMADNativeAd * _Nonnull)bidmadAd;
@end
