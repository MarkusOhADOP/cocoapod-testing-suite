//
//  BidmadFyberInterstitial.h
//  BidmadAdapterFNC
//
//  Created by Kenneth on 2022/07/07.
//

#pragma clang diagnostic ignored "-Wobjc-property-no-attribute"

#import <UIKit/UIKit.h>
#import <ADOPUtility/BidmadAdapterAdEssential.h>
#import <ADOPUtility/BidmadAdapterEssential.h>
#import <ADOPUtility/BidmadAdapterRewardAdditional.h>
#import <IASDKCore/IASDKCore.h>

NS_ASSUME_NONNULL_BEGIN

@interface BidmadFyberInterstitial : BidmadAdapterAdEssential <BidmadAdapterEssential, BidmadAdapterRewardAdditional, IAVideoContentDelegate, IAMRAIDContentDelegate, IAUnitDelegate>

@property (nonatomic, strong) NSUUID * _Nonnull adIdentifier;
@property (nonatomic, strong) NSDictionary<NSString *, NSNumber *> * _Nonnull loadableConditions;
@property (nonatomic, strong) NSString * _Nullable initializerFailCases;
@property (nonatomic) BOOL isFyberInitialized;
@property (nonatomic) BOOL loadableConditionsPassed;
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

- (UIViewController * _Nonnull)IAParentViewControllerForUnitController:(IAUnitController * _Nullable)unitController;
- (void)IAAdDidReward:(IAUnitController * _Nullable)unitController;
- (void)IAAdDidReceiveClick:(IAUnitController * _Nullable)unitController;
- (void)IAUnitControllerDidDismissFullscreen:(IAUnitController * _Nullable)unitController;

@end

NS_ASSUME_NONNULL_END
