//
//  BidmadTapjoyInterstitial.h
//  BidmadAdapterFNC
//
//  Created by Kenneth on 2022/07/06.
//

#pragma clang diagnostic ignored "-Wobjc-property-no-attribute"

#import <UIKit/UIKit.h>
#import <ADOPUtility/BidmadAdapterAdEssential.h>
#import <Tapjoy/Tapjoy.h>
#import <ADOPUtility/BidmadAdapterEssential.h>

NS_ASSUME_NONNULL_BEGIN

@interface BidmadTapjoyInterstitial : BidmadAdapterAdEssential <TJPlacementDelegate, TJPlacementVideoDelegate, BidmadAdapterEssential>

@property (nonatomic, strong) NSString * _Nullable initializerFailCases;
@property (nonatomic) BOOL isTapjoyInitialized;
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

- (void)requestDidSucceed:(TJPlacement *)placement;
- (void)requestDidFail:(TJPlacement *)placement error:(nullable NSError *)error;
- (void)contentIsReady:(TJPlacement *)placement;
- (void)contentDidAppear:(TJPlacement *)placement;
- (void)contentDidDisappear:(TJPlacement *)placement;
- (void)didClick:(TJPlacement *)placement;
- (void)videoDidStart:(TJPlacement *)placement;
- (void)videoDidComplete:(TJPlacement *)placement;
- (void)videoDidFail:(TJPlacement *)placement error:(nullable NSString *)errorMsg;

@end

NS_ASSUME_NONNULL_END
