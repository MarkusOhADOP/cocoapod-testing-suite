//
//  BidmadIronSourceReward.h
//  BidmadAdapterFC
//
//  Created by ADOP_Mac on 2022/07/05.
//

#pragma clang diagnostic ignored "-Wobjc-property-no-attribute"

#import <UIKit/UIKit.h>
#import <ADOPUtility/BidmadAdapterAdEssential.h>
#import "BidmadIronSourceBridge.h"

NS_ASSUME_NONNULL_BEGIN

@interface BidmadIronSourceReward : BidmadAdapterAdEssential <BidmadBridgeISRewardedVideoDelegate, BidmadISLogDelegate>
@property (nonatomic, strong) NSUUID * _Nonnull adIdentifier;
@property (nonatomic, strong) NSDictionary<NSString *, NSNumber *> * _Nonnull loadableConditions;
@property (nonatomic) BOOL loadableConditionsPassed;

- (nonnull instancetype)initWithAppID:(NSString * _Nonnull)appID
                                pubID:(NSString * _Nullable)pubID
                               rootVC:(UIViewController * _Nonnull)rootVC
                           parentView:(UIView * _Nullable)parentView
                              isChild:(NSNumber * _Nullable)isChild
                        isGDPRConsent:(NSNumber * _Nullable)isGDPRConsent
                        isCCPAConsent:(NSNumber * _Nullable)isCCPAConsent;
- (void)load;
- (void)show;
- (void)remove;
- (void)setIsDebug:(BOOL)isDebug;
- (void)setIsRewardedAd:(BOOL)isRewardedAd;
- (void)rewardedVideoHasChangedAvailability:(BOOL)available;
- (void)didReceiveRewardForPlacement:(id _Nonnull)placementInfo;
- (void)rewardedVideoDidFailToShowWithError:(NSError * _Nonnull)error;
- (void)rewardedVideoDidOpen;
- (void)rewardedVideoDidClose;
- (void)rewardedVideoDidStart;
- (void)rewardedVideoDidEnd;
- (void)didClickRewardedVideo:(id _Nonnull)placementInfo;
- (void)sendLog:(NSString * _Nonnull)log level:(BidmadISLogLevel)level tag:(BidmadLogTag)tag;

@end

NS_ASSUME_NONNULL_END
