//
//  BidmadAdmobNativeAd.h
//  BidmadSDK
//
//  Created by Seungsub Oh on 2022/07/27.
//

#import <UIKit/UIKit.h>
#import <ADOPUtility/BIDMADNativeAdCommonInterface.h>

NS_ASSUME_NONNULL_BEGIN

@interface BidmadAdmobNativeAd : NSObject <BIDMADNativeAdCommonInterface>

@property (nonatomic) BOOL isAdMob;

+ (FBLPromise<id<BidmadNativeAdDataInterface>> * _Nonnull)requestFor:(NSString * _Nonnull)appid
                                                               pubID:(NSString * _Nullable)pubID
                                                             isDebug:(BOOL)isDebug
                                                  isChildDirectedAds:(NSNumber * _Nullable)isChild;

@end

NS_ASSUME_NONNULL_END