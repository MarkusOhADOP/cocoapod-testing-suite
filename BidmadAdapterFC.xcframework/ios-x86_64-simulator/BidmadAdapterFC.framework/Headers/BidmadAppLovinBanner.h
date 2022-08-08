//
//  BidmadAppLovinBanner.h
//  BidmadAdapterFC
//
//  Created by ADOP_Mac on 2022/07/04.
//

#pragma clang diagnostic ignored "-Wobjc-property-no-attribute"

#import <UIKit/UIKit.h>
#import <ADOPUtility/BidmadAdapterAdEssential.h>
#import <AppLovinSDK/AppLovinSDK.h>

NS_ASSUME_NONNULL_BEGIN

@interface BidmadAppLovinBanner : BidmadAdapterAdEssential <ALAdDisplayDelegate, ALAdLoadDelegate, ALAdViewEventDelegate>

@property (nonatomic, strong) NSUUID * _Nonnull adIdentifier;
@property (nonatomic, strong) NSDictionary<NSString *, NSNumber *> * _Nonnull loadableConditions;
@property (nonatomic, strong) NSNumber * _Nonnull isAppLovinInitialized;
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
- (void)setBannerSize:(NSString * _Nonnull)sizeString;
- (void)show;
- (void)hide;
- (void)remove;
- (void)adService:(ALAdService * _Nonnull)adService didLoadAd:(ALAd * _Nonnull)ad;
- (void)adService:(ALAdService * _Nonnull)adService didFailToLoadAdWithError:(int32_t)code;
- (void)ad:(ALAd * _Nonnull)ad wasDisplayedIn:(UIView * _Nonnull)view;
- (void)ad:(ALAd * _Nonnull)ad wasHiddenIn:(UIView * _Nonnull)view;
- (void)ad:(ALAd * _Nonnull)ad wasClickedIn:(UIView * _Nonnull)view;
- (void)ad:(ALAd * _Nonnull)ad didPresentFullscreenForAdView:(ALAdView * _Nonnull)adView;
- (void)ad:(ALAd * _Nonnull)ad willDismissFullscreenForAdView:(ALAdView * _Nonnull)adView;
- (void)ad:(ALAd * _Nonnull)ad didDismissFullscreenForAdView:(ALAdView * _Nonnull)adView;
- (void)ad:(ALAd * _Nonnull)ad willLeaveApplicationForAdView:(ALAdView * _Nonnull)adView;
- (void)ad:(ALAd * _Nonnull)ad didReturnToApplicationForAdView:(ALAdView * _Nonnull)adView;
- (void)ad:(ALAd * _Nonnull)ad didFailToDisplayInAdView:(ALAdView * _Nonnull)adView withError:(ALAdViewDisplayErrorCode)code;

@end

NS_ASSUME_NONNULL_END
