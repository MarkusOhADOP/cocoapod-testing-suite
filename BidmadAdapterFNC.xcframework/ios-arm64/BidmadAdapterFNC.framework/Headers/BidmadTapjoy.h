//
//  BidmadTapjoy.h
//  BidmadAdapterFNC
//
//  Created by Kenneth on 2022/07/06.
//

#pragma clang diagnostic ignored "-Wobjc-property-no-attribute"

#import <UIKit/UIKit.h>
#import <ADOPUtility/BidmadAdapterAdEssential.h>
#import <ADOPUtility/BidmadAdapterOfferwallAdditional.h>
#import <Tapjoy/Tapjoy.h>

NS_ASSUME_NONNULL_BEGIN

@interface BidmadTapjoy : BidmadAdapterAdEssential <BidmadAdapterOfferwallAdditional, TJPlacementDelegate, TJPlacementVideoDelegate>

@property (nonatomic) BOOL isTapjoyInitialized;

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

//- (void)getCurrency:(void (^)(NSError *error, NSDictionary<NSString*, NSObject*> *dic))completionHandler;
//- (void)spendCurrency:(int)amount completionHandler:(void (^)(NSError *error, NSDictionary<NSString*, NSObject*> *dic))completionHandler;
- (void)requestDidSucceed:(TJPlacement *)placement;
- (void)requestDidFail:(TJPlacement *)placement error:(nullable NSError *)error;
- (void)contentIsReady:(TJPlacement *)placement;
- (void)contentDidAppear:(TJPlacement *)placement;
- (void)contentDidDisappear:(TJPlacement *)placement;
- (void)didClick:(TJPlacement *)placement;
- (void)placement:(TJPlacement *)placement didRequestPurchase:(nullable TJActionRequest *)request productId:(nullable NSString *)productId;
- (void)placement:(TJPlacement *)placement didRequestReward:(nullable TJActionRequest *)request itemId:(nullable NSString *)itemId quantity:(int)quantity;
- (void)videoDidStart:(TJPlacement *)placement;
- (void)videoDidComplete:(TJPlacement *)placement;
- (void)videoDidFail:(TJPlacement *)placement error:(nullable NSString *)errorMsg;

@end

NS_ASSUME_NONNULL_END

