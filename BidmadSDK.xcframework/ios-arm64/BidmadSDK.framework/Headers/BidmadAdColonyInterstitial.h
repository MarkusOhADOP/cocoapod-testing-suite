//
//  BidmadAdColonyInterstitial.h
//  BidmadAdapterFC
//
//  Created by ADOP_Mac on 2022/07/04.
//

#pragma clang diagnostic ignored "-Wobjc-property-no-attribute"

#import <UIKit/UIKit.h>
#import <ADOPUtility/BidmadAdapterAdEssential.h>
#import <ADOPUtility/BidmadAdapterEssential.h>

NS_ASSUME_NONNULL_BEGIN

@interface BidmadAdColonyInterstitial : BidmadAdapterAdEssential <BidmadAdapterEssential>

@property (nonatomic, strong) NSNumber * _Nonnull isAdColonyInitialized;
@property (nonatomic) BOOL isRewardedAd;

- (nonnull instancetype)initWithAppID:(NSString * _Nonnull)appID
                                pubID:(NSString * _Nullable)pubID
                               rootVC:(UIViewController * _Nullable)rootVC
                           parentView:(UIView * _Nullable)parentView
                              isChild:(NSNumber * _Nullable)isChild
                        isGDPRConsent:(NSNumber * _Nullable)isGDPRConsent
                        isCCPAConsent:(NSNumber * _Nullable)isCCPAConsent
                     bidmadController:(id _Nonnull)bidmadController;
- (void)load;
- (void)setIsDebug:(BOOL)isDebug;
- (void)setIsRewardedAd:(BOOL)isRewardedAd;
- (void)showOnViewController:(UIViewController *)viewController;
- (void)remove;

@end

NS_ASSUME_NONNULL_END
