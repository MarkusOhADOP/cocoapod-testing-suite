//
//  BidmadAppLovinFailCase.h
//  BidmadSDK-DevSuite
//
//  Created by ADOP_Mac on 2022/07/04.
//

#pragma clang diagnostic ignored "-Wobjc-property-no-attribute"

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, BidmadAppLovinFailCase) {
    BidmadAppLovinFailCaseFetchAdTimeout = -102,
    BidmadAppLovinFailCaseNoNetwork = -103,
    BidmadAppLovinFailCaseNoFill = 204,
    BidmadAppLovinFailCaseUnableToRenderAd = -6,
    BidmadAppLovinFailCaseUnspecifiedError = -1,
    BidmadAppLovinFailCaseUnableToPrepareNativeAd = -700,
    BidmadAppLovinFailCaseUnableToPrecacheResources = -200,
    BidmadAppLovinFailCaseUnableToPrecacheImageResources = 201,
    BidmadAppLovinFailCaseUnableToPrecacheVideoResources = 202,
    BidmadAppLovinFailCaseIncentivizedNoAdPreloaded = -300,
    BidmadAppLovinFailCaseIncentivizedUnknownServerError = 400,
    BidmadAppLovinFailCaseIncentivizedServerTimeout = -500,
    BidmadAppLovinFailCaseIncentivizedUserClosedVideo = -600,
    BidmadAppLovinFailCaseInvalidUrl = -900,
    BidmadAppLovinFailCaseUnknown = 0
};

NS_ASSUME_NONNULL_BEGIN

@interface BidmadAppLovinFailCaseEnumParser : NSObject

+ (NSString *)convertToString:(BidmadAppLovinFailCase)type;

@end

NS_ASSUME_NONNULL_END
