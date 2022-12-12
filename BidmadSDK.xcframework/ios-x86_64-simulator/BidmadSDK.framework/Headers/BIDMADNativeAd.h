//
//  BIDMADNativeAdLoader.h
//  BidmadSDK
//
//  Created by Seungsub Oh on 2022/07/26.
//

#import <UIKit/UIKit.h>
#import "BIDMADNativeAdViewData.h"
#import "BIDMADNativeAdView.h"

@protocol BIDMADNativeAdDelegate;
@interface BIDMADNativeAd : NSObject
@property (nonatomic, weak) id<BIDMADNativeAdDelegate> _Nullable delegate;
@property (nonatomic, strong) BIDMADNativeAdViewData * _Nullable adData;
@property (nonatomic) NSString * _Nullable zoneID;
@property (nonatomic) BIDMADNativeAdView * _Nullable attachView;
- (nonnull instancetype)init;
- (void)requestAd;
- (void)setAdView:(UIViewController * _Nonnull)viewController adView:(BIDMADNativeAdView * _Nonnull)adView;
- (void)removeAdView:(BIDMADNativeAdView * _Nonnull)adView;
- (Boolean)isLoaded;
- (void)adLoaded:(NSDictionary * _Nonnull)lv_dic adData:(BIDMADNativeAdViewData * _Nullable)adData;
- (void)adLoadFail:(NSDictionary * _Nullable)lv_dic error:(NSError * _Nonnull)error;
- (void)adClick:(NSDictionary * _Nullable)lv_dic;
@end

@protocol BIDMADNativeAdDelegate <NSObject>
@optional
- (void)bidmadNativeAdWithLoadedAd:(BIDMADNativeAd * _Nonnull)loadedAd;
- (void)bidmadNativeAdFail:(BIDMADNativeAd * _Nonnull)loadedAd error:(NSError * _Nonnull)error;
- (void)bidmadNativeAdClick:(BIDMADNativeAd * _Nonnull)loadedAd;
@end
