//
//  BidmadAppLovinReward.h
//  BidmadAdapterFC
//
//  Created by ADOP_Mac on 2022/07/04.
//

#pragma clang diagnostic ignored "-Wobjc-property-no-attribute"

#import <UIKit/UIKit.h>
#import <ADOPUtility/BidmadAdapterAdEssential.h>
#import <ADOPUtility/BidmadLoadabilityManager.h>
#import <AppLovinSDK/AppLovinSDK.h>

NS_ASSUME_NONNULL_BEGIN

@interface BidmadAppLovinReward : BidmadAdapterAdEssential <ALAdDisplayDelegate, ALAdLoadDelegate, ALAdRewardDelegate, ALAdVideoPlaybackDelegate>

@property (nonatomic, strong) NSNumber * _Nonnull isAppLovinInitialized; //BOOLEAN
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
- (void)setIsDebug:(BOOL)isDebug;
- (void)show;
- (void)remove;
- (void)setIsRewardedAd:(BOOL)isRewardedAd;

- (void)ad:(ALAd * _Nonnull)ad wasDisplayedIn:(UIView * _Nonnull)view;
- (void)ad:(ALAd * _Nonnull)ad wasHiddenIn:(UIView * _Nonnull)view;
- (void)ad:(ALAd * _Nonnull)ad wasClickedIn:(UIView * _Nonnull)view;
- (void)adService:(ALAdService * _Nonnull)adService didLoadAd:(ALAd * _Nonnull)ad;
- (void)adService:(ALAdService * _Nonnull)adService didFailToLoadAdWithError:(int32_t)code;
- (void)rewardValidationRequestForAd:(ALAd * _Nonnull)ad didSucceedWithResponse:(NSDictionary * _Nonnull)response;
- (void)rewardValidationRequestForAd:(ALAd * _Nonnull)ad didExceedQuotaWithResponse:(NSDictionary * _Nonnull)response;
- (void)rewardValidationRequestForAd:(ALAd * _Nonnull)ad wasRejectedWithResponse:(NSDictionary * _Nonnull)response;
- (void)rewardValidationRequestForAd:(ALAd * _Nonnull)ad didFailWithError:(NSInteger)responseCode;
- (void)videoPlaybackBeganInAd:(ALAd * _Nonnull)ad;
- (void)videoPlaybackEndedInAd:(ALAd * _Nonnull)ad atPlaybackPercent:(NSNumber * _Nonnull)percentPlayed fullyWatched:(BOOL)wasFullyWatched;

@end

NS_ASSUME_NONNULL_END
