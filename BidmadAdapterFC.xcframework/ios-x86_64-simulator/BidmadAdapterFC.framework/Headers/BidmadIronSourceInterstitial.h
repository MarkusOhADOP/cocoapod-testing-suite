//
//  BidmadIronSourceInterstitial.h
//  BidmadAdapterFC
//
//  Created by ADOP_Mac on 2022/07/05.
//

#pragma clang diagnostic ignored "-Wobjc-property-no-attribute"

#import <UIKit/UIKit.h>
#import "BidmadIronSourceInterstitial.h"
#import <ADOPUtility/BidmadAdapterAdEssential.h>
#import "BidmadIronSourceBridge.h"

NS_ASSUME_NONNULL_BEGIN

@interface BidmadIronSourceInterstitial : BidmadAdapterAdEssential <BidmadBridgeISInterstitialDelegate, BidmadISLogDelegate>

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
- (void)interstitialDidLoad;
- (void)interstitialDidFailToLoadWithError:(NSError * _Nonnull)error;
- (void)interstitialDidOpen;
- (void)interstitialDidClose;
- (void)interstitialDidShow;
- (void)interstitialDidFailToShowWithError:(NSError * _Nonnull)error;
- (void)didClickInterstitial;
- (void)sendLog:(NSString * _Nonnull)log level:(BidmadISLogLevel)level tag:(BidmadLogTag)tag;

@end


NS_ASSUME_NONNULL_END
