//
//  BIDMADUtil.h
//  BidmadSDK
//
//  Created by 김선정 on 2015. 7. 20..
//  Copyright (c) 2015년 ADOP Co., Ltd. All rights reserved.

#pragma clang diagnostic ignored "-Wobjc-property-no-attribute"

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import <CoreGraphics/CoreGraphics.h>
#import "BIDMADSetting.h"
#import "BIDMADBanner.h"
#import "BIDMADInterstitial.h"
#import "BIDMADRewardVideo.h"
#import <SystemConfiguration/CaptiveNetwork.h>
#import <CoreLocation/CoreLocation.h>
#define MB (1024*1024)
#define GB (MB*1024)

@interface BIDMADUtil : NSObject

+ (NSURLSessionDataTask * _Nonnull)dataTaskFromHost:(NSString * _Nonnull)host path:(NSString * _Nonnull)path queryItems:(NSArray<NSURLQueryItem *> * _Nonnull)queryItems handler:(void (^_Nonnull)(NSData * _Nullable data, NSURLResponse * _Nullable response, NSError * _Nullable error))handler;

+ (BOOL) isEmpty:(NSString * _Nonnull)str;

+ (NSString * _Nonnull)identifierForAdvertising;

+ (id _Nonnull) nullCheck:(id _Nullable)checkData;

+ (BOOL)isNull:(NSString* _Nullable)str;

+ (NSArray * _Nonnull) keywordReturnArr:(NSString * _Nonnull)keywords;

+ (NSString * _Nonnull) getNetworkName:(NSString * _Nonnull)networkKey;

+ (NSString* _Nonnull) deviceName;

+ (NSString * _Nonnull)getBundle:(NSString * _Nullable)file type:(NSString * _Nullable)type;

+ (UIWindow* _Nullable)fetchKeyWindow;

+ (BOOL) isIphoneX;

+ (BOOL) isOverIOS11;

+ (NSString * _Nonnull)getCurrentRegionInfo;

+ (UIViewController* _Nullable)topMostController;

+ (NSData* _Nullable)bidmadResourceDataFetcherWithAssetName: (NSString* _Nonnull)assetName extension: (NSString* _Nonnull)extension;

+ (NSURL* _Nullable)bidmadResourceURLFetcherWithAssetName: (NSString* _Nonnull)assetName extension: (NSString* _Nonnull)extension;

+ (NSBundle * _Nullable)bundleLocationCheck;

+ (void) sendLog :(NSDictionary *)info :(NSString *)advertisementType :(NSString *)logType :(NSString*)sessionId :(NSString*)realZoneId;

@end
