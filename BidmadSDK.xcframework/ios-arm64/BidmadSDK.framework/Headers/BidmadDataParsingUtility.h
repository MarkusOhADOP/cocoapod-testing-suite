//
//  DataParsingUtility.h
//  BidmadSDK
//
//  Created by Kenneth on 2022/11/07.
//

@interface BidmadDataParsingUtility : NSObject

+ (void)fetchAdServingDataWithZoneId:(NSString * _Nonnull)zoneId completionBlock:(void (^ _Nullable)(NSDictionary * _Nullable, NSError * _Nullable))completionBlock;
+ (NSDictionary * _Nullable)floorPriceBasedSortAdsDictionary:(NSDictionary *)allAds firstAd:(NSDictionary **)firstAd passback:(NSString **)passback;

@end
