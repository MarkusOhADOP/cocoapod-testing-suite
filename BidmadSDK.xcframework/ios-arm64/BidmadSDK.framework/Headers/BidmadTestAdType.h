//
//  BidmadAdNetworkTestAdType.h
//  BidmadSDK-DevSuite
//
//  Created by Seungsub Oh on 2023/03/02.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSUInteger, BidmadTestAdType) {
    BidmadTestAdTypeBanner,
    BidmadTestAdTypeInterstitial,
    BidmadTestAdTypeReward,
    BidmadTestAdTypeAppOpenAd,
    BidmadTestAdTypeNativeAd
};

@interface BidmadTestAdTypeManager : NSObject

+ (NSString *)stringFromAdType:(BidmadTestAdType)adType;
+ (BidmadTestAdType)adTypeFromString:(NSString *)string;

@end
