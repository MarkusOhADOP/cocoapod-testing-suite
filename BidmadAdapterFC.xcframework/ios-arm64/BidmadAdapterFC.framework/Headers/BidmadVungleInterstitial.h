//
//  BidmadVungleInterstitial.h
//  BidmadAdapterFC
//
//  Created by Kenneth on 2022/07/05.
//

#pragma clang diagnostic ignored "-Wobjc-property-no-attribute"

#import <UIKit/UIKit.h>
#import <ADOPUtility/BidmadAdapterAdEssential.h>

NS_ASSUME_NONNULL_BEGIN

@interface BidmadVungleInterstitial : BidmadAdapterAdEssential

@property (nonatomic, strong) NSUUID * _Nonnull adIdentifier;
@property (nonatomic, strong) NSDictionary<NSString *, NSNumber *> * _Nonnull loadableConditions;
@property (nonatomic, strong) NSString * _Nullable initializerFailCases;
@property (nonatomic) BOOL isInitialized;
@property (nonatomic) BOOL loadableConditionsPassed;
@property (nonatomic) BOOL isRewardedAd;

- (nonnull instancetype)initWithAppID:(NSString * _Nonnull)appID
                                pubID:(NSString * _Nullable)pubID
                               rootVC:(UIViewController * _Nonnull)rootVC
                           parentView:(UIView * _Nullable)parentView
                              isChild:(NSNumber * _Nullable)isChild
                        isGDPRConsent:(NSNumber * _Nullable)isGDPRConsent
                        isCCPAConsent:(NSNumber * _Nullable)isCCPAConsent;
- (void)setIsDebug:(BOOL)isDebug;
- (void)load;
- (void)show;
- (void)remove;

@end

NS_ASSUME_NONNULL_END
