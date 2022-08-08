//
//  BidmadUtility.h
//  BidmadSDK
//
//  Created by ADOP_Mac on 2022/06/30.
//

#pragma clang diagnostic ignored "-Wobjc-property-no-attribute"

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface BidmadAdInfo : NSObject

- (instancetype)initWithAdInfoDict:(NSDictionary<NSString *, id> *)adInfoDict adInfoKey:(NSString *)adInfoKey adNetworkType:(NSString *)adNetworkType floorPrice:(NSNumber *)floorPrice appID:(NSString *)appID pubID:(NSString *)pubID isOBH:(NSNumber *)isOBH originalOrder:(NSNumber *)originalOrder;

@property (strong, nonatomic) NSDictionary<NSString *, id> *adInfoDict;
@property (strong, nonatomic) NSString * _Nonnull adInfoKey;
@property (strong, nonatomic) NSString *_Nonnull adNetworkType;
@property (strong, nonatomic) NSNumber *_Nonnull floorPrice;
@property (strong, nonatomic) NSString *_Nonnull appID;
@property (strong, nonatomic) NSString *_Nonnull pubID;
@property (strong, nonatomic) NSNumber *_Nonnull isOBH;
@property (strong, nonatomic) NSNumber *_Nonnull originalOrder;

@end

@interface BidmadUtility : NSObject

+ (NSNumber * _Nullable)gdprSettingToOptionalBool;
+ (NSArray<BidmadAdInfo *> *)arraySortedWithOrder:(NSArray<BidmadAdInfo *> *)adInfoArray;
+ (NSArray<BidmadAdInfo *> *)bidmadSwiftSort:(NSArray<BidmadAdInfo *> *)adInfoArray;
+ (NSString*)deviceName;

@end

NS_ASSUME_NONNULL_END
