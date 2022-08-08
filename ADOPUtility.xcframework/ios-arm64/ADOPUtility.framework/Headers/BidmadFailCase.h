//
//  BidmadFailCase.h
//  ADOPUtility
//
//  Created by ADOP_Mac on 2022/06/30.
//

#pragma clang diagnostic ignored "-Wobjc-property-no-attribute"

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSUInteger, BidmadFailCase) {
    BidmadFailCaseNoFail,
    BidmadFailCaseUnsupportedBannerSize,
    BidmadFailCaseUnavailableAppid,
    BidmadFailCaseUnavailablePubid,
    BidmadFailCaseUnavailableViewcontroller,
    BidmadFailCaseUnavailableView,
    BidmadFailCaseUnavailableBannersize,
    BidmadFailCaseNotLoaded,
    BidmadFailCaseNotInit,
    BidmadFailCaseAdcolonyExpired,
    BidmadFailCaseTimeout,
    BidmadFailCaseNoResponse,
    BidmadFailCaseCannotLoadWhilePlaying
};

NS_ASSUME_NONNULL_BEGIN

@interface BidmadFailCaseEnumParser : NSObject

+ (NSString *)convertToString:(BidmadFailCase)type;

@end

NS_ASSUME_NONNULL_END
