//
//  BIDMADNativeAd.h
//  BidmadSDK
//
//  Created by Seungsub Oh on 2022/07/26.
//

#import <GoogleMobileAds/GoogleMobileAds.h>
#import <UIKit/UIKit.h>
#import <ADOPUtility/BidmadNativeAdDataInterface.h>

@interface BIDMADNativeAdViewData : NSObject <BidmadNativeAdDataInterface>

#pragma mark COMMON

@property (nonatomic) NSInteger id;
@property (nonatomic, copy) NSString * _Nullable headline;
@property (nonatomic, copy) NSString * _Nullable body;
@property (nonatomic, copy) NSString * _Nullable callToAction;
@property (nonatomic, strong) UIImage * _Nullable icon;
@property (nonatomic, strong) NSDecimalNumber * _Nullable starRating;
@property (nonatomic, copy) NSString * _Nullable store;
@property (nonatomic, copy) NSString * _Nullable price;
@property (nonatomic, copy) NSString * _Nullable advertiser;
@property (nonatomic, strong) id _Nullable nativeAdAdMob;
@property (nonatomic, strong) id _Nullable nativeAdPangle;

#pragma mark FOR GOOGLE

@property (nonatomic, strong) GADMediaContent * _Nullable mediaContent;

#pragma mark FOR PANGLE

@property (nonatomic, readonly, copy) NSString * _Nonnull description;

- (nonnull instancetype)initWithIdentifier:(NSInteger)identifier;
- (void)remove;
- (NSString *_Nonnull)description;

@end
