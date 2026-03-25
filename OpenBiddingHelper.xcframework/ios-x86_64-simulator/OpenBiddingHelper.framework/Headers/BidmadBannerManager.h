//
//  BidmadBannerManager.h
//  OpenBiddingHelper
//
//  Created by Seungsub Oh on 2022/11/11.
//

#import <Foundation/Foundation.h>
#import <BidmadSDK/BidmadSDK.h>
#import <BidmadSDK/BidmadSDK-Swift.h>

NS_ASSUME_NONNULL_BEGIN

@interface BidmadBannerManager : NSObject

+ (void)pushAd:(BMBanner * _Nonnull)ad;
+ (void)pushAds:(NSArray<BMBanner *> * _Nonnull)ads;
+ (BMBanner * _Nonnull)getAdForZoneID:(NSString * _Nonnull)zoneID viewController:(UIViewController *)viewController xCoordinate:(CGFloat)x yCoordinate:(CGFloat)y;
+ (BMBanner * _Nonnull)getAdForZoneID:(NSString * _Nonnull)zoneID viewController:(UIViewController *)viewController yCoordinate:(CGFloat)y;
+ (BMBanner * _Nonnull)getAdForZoneID:(NSString * _Nonnull)zoneID viewController:(UIViewController *)viewController adPosition:(BIDMADAdPosition)position;
+ (BMBanner * _Nullable)getNullableAdForZoneID:(NSString * _Nonnull)zoneID;
+ (BMBanner * _Nullable)takeOutAdForZoneID:(NSString * _Nonnull)zoneID;
+ (NSArray<BMBanner *> * _Nonnull)getAllAds;

@end

NS_ASSUME_NONNULL_END
