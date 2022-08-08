//
//  BidmadVungleBanner.h
//  BidmadAdapterFC
//
//  Created by Kenneth on 2022/07/05.
//

#pragma clang diagnostic ignored "-Wobjc-property-no-attribute"

#import <UIKit/UIKit.h>
#import <ADOPUtility/BidmadAdapterAdEssential.h>

NS_ASSUME_NONNULL_BEGIN

@interface BidmadVungleBanner : BidmadAdapterAdEssential

@property (nonatomic, strong) NSUUID * _Nonnull adIdentifier;
@property (nonatomic, strong) NSDictionary<NSString *, NSNumber *> * _Nonnull loadableConditions;
@property (nonatomic) BOOL isInitialized;
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

@end

NS_ASSUME_NONNULL_END
