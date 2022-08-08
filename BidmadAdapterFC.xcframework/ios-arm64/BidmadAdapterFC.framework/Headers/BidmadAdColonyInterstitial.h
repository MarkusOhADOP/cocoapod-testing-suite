//
//  BidmadAdColonyInterstitial.h
//  BidmadAdapterFC
//
//  Created by ADOP_Mac on 2022/07/04.
//

#pragma clang diagnostic ignored "-Wobjc-property-no-attribute"

#import <UIKit/UIKit.h>
#import <ADOPUtility/BidmadAdapterAdEssential.h>
#import "BidmadAdColonyInterface.h"

NS_ASSUME_NONNULL_BEGIN

@interface BidmadAdColonyInterstitial : BidmadAdapterAdEssential <BidmadADCInterstitialDelegate>

@property (nonatomic, strong) NSNumber * _Nonnull isAdColonyInitialized;
@property (nonatomic) BOOL isRewardedAd;

- (nonnull instancetype)initWithAppID:(NSString * _Nonnull)appID
                                pubID:(NSString * _Nullable)pubID
                               rootVC:(UIViewController * _Nonnull)rootVC
                           parentView:(UIView * _Nullable)parentView
                              isChild:(NSNumber * _Nullable)isChild
                        isGDPRConsent:(NSNumber * _Nullable)isGDPRConsent
                        isCCPAConsent:(NSNumber * _Nullable)isCCPAConsent;
- (void)load;
- (void)setIsDebug:(BOOL)isDebug;
- (void)setIsRewardedAd:(BOOL)isRewardedAd;
- (void)show;
- (void)remove;
- (void)adColonyInterstitialDidLoad:(id <BidmadADCInterstitial> _Nonnull)interstitial;
- (void)adColonyInterstitialDidFailToLoad:(id _Nonnull)error;
- (void)adColonyInterstitialExpired:(id <BidmadADCInterstitial> _Nonnull)interstitial;
- (void)adColonyInterstitialDidReceiveClick:(id <BidmadADCInterstitial> _Nonnull)interstitial;
- (void)adColonyInterstitialWillOpen:(id <BidmadADCInterstitial> _Nonnull)interstitial;
- (void)adColonyInterstitialDidClose:(id <BidmadADCInterstitial> _Nonnull)interstitial;

@end

NS_ASSUME_NONNULL_END
