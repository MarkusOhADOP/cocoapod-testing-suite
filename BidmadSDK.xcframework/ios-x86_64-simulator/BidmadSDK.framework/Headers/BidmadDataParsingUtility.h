//
//  DataParsingUtility.h
//  BidmadSDK
//
//  Created by Kenneth on 2022/11/07.
//

#import "BidmadAdType.h"
#import "BidmadAdUnit.h"

NS_ASSUME_NONNULL_BEGIN

typedef void (^BidmadFetchBlock)(BidmadAdUnit * _Nullable, NSError * _Nullable);

@interface BidmadDataParsingUtility : NSObject

/**
 * Fetch ad response for given parameters.
 *
 * @param zoneId - The zone ID for the ad.
 * @param adType - Ad Type includes banner, interstitial, reward, app open, and native
 * @param completion - Completion block to execute after fetching.
 */
+ (void)fetchAdUnitWithZoneId:(NSString *)zoneId
                       adType:(BidmadAdType)adType
                   completion:(BidmadFetchBlock)completion;

+ (BidmadAdUnit * _Nullable)getAdUnitFrom:(NSDictionary *)dictionary
                                 adsCount:(NSUInteger)adsCount
                                   adType:(BidmadAdType)adType;

@end

NS_ASSUME_NONNULL_END
