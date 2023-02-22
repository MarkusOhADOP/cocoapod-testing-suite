//
//  BidmadVungleInterstitial.h
//  BidmadAdapterFC
//
//  Created by Kenneth on 2022/07/05.
//

#pragma clang diagnostic ignored "-Wobjc-property-no-attribute"

#import <UIKit/UIKit.h>
#import <ADOPUtility/BidmadAdapterAdEssential.h>
#import <ADOPUtility/BidmadAdapterEssential.h>

NS_ASSUME_NONNULL_BEGIN

@interface BidmadVungleInterstitial : BidmadAdapterAdEssential <BidmadAdapterEssential>

@property (nonatomic, strong) NSString * _Nullable initializerFailCases;
@property (nonatomic) BOOL isInitialized;
@property (nonatomic) BOOL isRewardedAd;

- (nonnull instancetype)initWithAppID:(NSString * _Nonnull)appID
                                pubID:(NSString * _Nullable)pubID
                               rootVC:(UIViewController * _Nullable)rootVC
                           parentView:(UIView * _Nullable)parentView
                              isChild:(NSNumber * _Nullable)isChild
                        isGDPRConsent:(NSNumber * _Nullable)isGDPRConsent
                        isCCPAConsent:(NSNumber * _Nullable)isCCPAConsent
                     bidmadController:(id _Nonnull)bidmadController;
- (void)setIsDebug:(BOOL)isDebug;
- (void)load;
- (void)showOnViewController:(UIViewController *)viewController;
- (void)remove;

@end

NS_ASSUME_NONNULL_END
