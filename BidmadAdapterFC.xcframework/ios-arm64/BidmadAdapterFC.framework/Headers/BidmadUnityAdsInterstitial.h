//
//  BidmadUnityAdsInterstitial.h
//  BidmadAdapterFC
//
//  Created by ADOP_Mac on 2022/07/05.
//

#pragma clang diagnostic ignored "-Wobjc-property-no-attribute"

#import <UIKit/UIKit.h>
#import <ADOPUtility/BidmadAdapterAdEssential.h>
#import <ADOPUtility/BidmadAdapterRewardAdditional.h>
#import <ADOPUtility/BidmadAdapterEssential.h>
#import <UnityAds/UnityAds.h>

NS_ASSUME_NONNULL_BEGIN

@interface BidmadUnityAdsInterstitial : BidmadAdapterAdEssential <UnityAdsInitializationDelegate, UnityAdsLoadDelegate, UnityAdsShowDelegate, BidmadAdapterRewardAdditional, BidmadAdapterEssential>

@property (nonatomic, strong) NSNumber * _Nonnull isUnityAdsInitialized;

- (nonnull instancetype)initWithAppID:(NSString * _Nonnull)appID
                                pubID:(NSString * _Nullable)pubID
                               rootVC:(UIViewController * _Nullable)rootVC
                           parentView:(UIView * _Nullable)parentView
                              isChild:(NSNumber * _Nullable)isChild
                        isGDPRConsent:(NSNumber * _Nullable)isGDPRConsent
                        isCCPAConsent:(NSNumber * _Nullable)isCCPAConsent
                     bidmadController:(id _Nonnull)bidmadController;
- (void)initializationComplete;
- (void)initializationFailed:(UnityAdsInitializationError)error withMessage:(NSString * _Nonnull)message;
- (void)load;
- (void)setIsDebug:(BOOL)isDebug;
- (void)setIsRewardedAd:(BOOL)isRewardedAd;
- (void)showOnViewController:(UIViewController *)viewController;
- (void)remove;
- (void)unityAdsAdLoaded:(NSString * _Nonnull)placementId;
- (void)unityAdsAdFailedToLoad:(NSString * _Nonnull)placementId withError:(UnityAdsLoadError)error withMessage:(NSString * _Nonnull)message;
- (void)unityAdsShowComplete:(NSString * _Nonnull)placementId withFinishState:(UnityAdsShowCompletionState)state;
- (void)unityAdsShowFailed:(NSString * _Nonnull)placementId withError:(UnityAdsShowError)error withMessage:(NSString * _Nonnull)message;
- (void)unityAdsShowStart:(NSString * _Nonnull)placementId;
- (void)unityAdsShowClick:(NSString * _Nonnull)placementId;

@end

NS_ASSUME_NONNULL_END
