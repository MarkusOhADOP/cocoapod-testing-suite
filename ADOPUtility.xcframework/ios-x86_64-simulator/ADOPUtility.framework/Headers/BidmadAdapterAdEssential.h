//
//  BidmadAdapterAdEssential.h
//  ADOPUtility
//
//  Created by ADOP_Mac on 2022/07/01.
//

#pragma clang diagnostic ignored "-Wobjc-property-no-attribute"

#import <UIKit/UIKit.h>
#import "BidmadInnerCallback.h"
#import "BidmadFailCase.h"

NS_ASSUME_NONNULL_BEGIN

@interface BidmadAdapterAdEssential : NSObject

@property (nonatomic, strong) id _Nullable bidmadController;
@property (nonatomic, copy) NSString * _Nullable appID;
@property (nonatomic, copy) NSString * _Nullable pubID;
@property (nonatomic, strong) UIViewController * _Nonnull rootVC;
@property (nonatomic, strong) UIView * _Nullable parentView;
@property (nonatomic) BOOL debugMode;
@property (nonatomic, readonly, strong) NSNumber * _Nullable childDirectedTreatment;
@property (nonatomic, readonly, strong) NSNumber * _Nullable isGDPRConsent;
@property (nonatomic, readonly, strong) NSNumber * _Nullable isCCPAConsent;

- (nonnull instancetype)initWithAppID:(NSString * _Nonnull)appID
                                pubID:(NSString * _Nullable)pubID
                               rootVC:(UIViewController * _Nonnull)rootVC
                           parentView:(UIView * _Nullable)parentView
                              isChild:(NSNumber * _Nullable)isChild
                        isGDPRConsent:(NSNumber * _Nullable)isGDPRConsent
                        isCCPAConsent:(NSNumber * _Nullable)isCCPAConsent;

- (void)bidmadInnerCallback:(BidmadInnerCallback)innerCallbackCase;

- (void)bidmadInnerCallback:(BidmadInnerCallback)innerCallbackCase
                      error:(BidmadFailCase)error;

- (void)bidmadInnerCallback:(BidmadInnerCallback)innerCallbackCase
                      error:(BidmadFailCase)error
                    message:(nullable NSString *)message;

+ (void)ifRespondsPerform:(id _Nonnull)callbackController
             methodToCall:(NSString * _Nonnull)methodToCall;

+ (void)ifRespondsPerform:(id _Nonnull)callbackController
             methodToCall:(NSString * _Nonnull)methodToCall
                     with:(id _Nullable)object1;

+ (void)ifRespondsPerform:(id _Nonnull)callbackController
             methodToCall:(NSString * _Nonnull)methodToCall
                     with:(id _Nullable)object1
                     with:(id _Nullable)object2;

@end

NS_ASSUME_NONNULL_END
