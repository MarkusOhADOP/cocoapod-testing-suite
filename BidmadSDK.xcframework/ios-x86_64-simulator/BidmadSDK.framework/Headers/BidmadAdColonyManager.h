//
//  BidmadAdColonyManager.h
//  BidmadAdapterFC
//
//  Created by Seungsub Oh on 2022/12/05.
//

#import <Foundation/Foundation.h>
#import <AdColony/AdColony.h>

NS_ASSUME_NONNULL_BEGIN

@protocol BidmadAdColonyRewardDelegate <NSObject>
- (void)adColonyRewardedForZone:(AdColonyZone *)zoneID;
@end

@interface BidmadAdColonyManager : NSObject
@property (nonatomic) BOOL isAdColonyInitializedStatic;
@property (nonatomic, weak) id<BidmadAdColonyRewardDelegate> rewardDelegate;
+ (BidmadAdColonyManager *)shared;
+ (void)adColonyInitializeWithAppID:(NSString *)appID
                            options:(AdColonyAppOptions *)options
                     rewardDelegate:(id<BidmadAdColonyRewardDelegate> _Nullable)rewardDelegate
                  completionHandler:(void (^)(void))completionHandler;
- (void)manageRewardWithZones:(NSArray<AdColonyZone *> *)zones;
@end

NS_ASSUME_NONNULL_END
