//
//  BidmadPublisherZoneIDListAPI.h
//  BidmadSDK
//
//  Created by Seungsub Oh on 2022/11/08.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface BidmadPublisherZoneIDPriorityListAPI : NSObject

/**
 * Return a tuple (array) of arrays, each represeting the interstitial ads that should be loaded
 * @return Promise of Array of InterstitialAds and RewardAds
 */
+ (void)getPriorityAdAreasWithAppKey:(NSString *)appKey handler:(void (^)(NSError *error, NSArray *interstitialAds, NSArray *rewardAds))handler;

@end

NS_ASSUME_NONNULL_END
