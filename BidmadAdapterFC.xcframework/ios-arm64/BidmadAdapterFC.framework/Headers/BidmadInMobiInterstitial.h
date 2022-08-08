//
//  BidmadInMobiInterstitial.h
//  BidmadAdapterFC
//
//  Created by ADOP_Mac on 2022/07/05.
//

#pragma clang diagnostic ignored "-Wobjc-property-no-attribute"

#import <UIKit/UIKit.h>
#import <ADOPUtility/BidmadAdapterAdEssential.h>
#import "BidmadInMobiInterface.h"

NS_ASSUME_NONNULL_BEGIN

@interface BidmadInMobiInterstitial : BidmadAdapterAdEssential <BidmadIMInterstitialDelegate>

@property (nonatomic, strong) NSNumber * _Nonnull isInMobiInitialized;

- (nonnull instancetype)initWithAppID:(NSString * _Nonnull)appID
                                pubID:(NSString * _Nullable)pubID
                               rootVC:(UIViewController * _Nonnull)rootVC
                           parentView:(UIView * _Nullable)parentView
                              isChild:(NSNumber * _Nullable)isChild
                        isGDPRConsent:(NSNumber * _Nullable)isGDPRConsent
                        isCCPAConsent:(NSNumber * _Nullable)isCCPAConsent;
- (void)load;
- (void)show;
- (void)setIsDebug:(BOOL)isDebug;
- (void)setIsRewardedAd:(BOOL)isRewardedAd;
- (void)interstitialDidFinishLoading:(id _Nonnull)interstitial;
- (void)interstitial:(id _Nonnull)interstitial didFailToLoadWithError:(id _Nonnull)error;
- (void)interstitialDidPresent:(id _Nonnull)interstitial;
- (void)interstitial:(id _Nonnull)interstitial didFailToPresentWithError:(id _Nonnull)error;
- (void)interstitialDidDismiss:(id _Nonnull)interstitial;
- (void)remove;
- (void)interstitial:(id _Nonnull)interstitial didInteractWithParams:(id _Nonnull)params;
- (void)interstitial:(id _Nonnull)interstitial rewardActionCompletedWithRewards:(id _Nonnull)rewards;

@end

NS_ASSUME_NONNULL_END
