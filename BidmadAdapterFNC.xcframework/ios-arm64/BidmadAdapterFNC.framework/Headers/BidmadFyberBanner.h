//
//  BidmadFyberBanner.h
//  BidmadAdapterFNC
//
//  Created by Kenneth on 2022/07/07.
//

#pragma clang diagnostic ignored "-Wobjc-property-no-attribute"

#import <UIKit/UIKit.h>
#import <ADOPUtility/BidmadAdapterAdEssential.h>
#import <IASDKCore/IASDKCore.h>
#import <ADOPUtility/BidmadAdapterEssential.h>
#import <ADOPUtility/BidmadAdapterBannerAdditional.h>

NS_ASSUME_NONNULL_BEGIN

@interface BidmadFyberBanner : BidmadAdapterAdEssential <IAMRAIDContentDelegate, IAUnitDelegate, BidmadAdapterEssential, BidmadAdapterBannerAdditional>

@property (nonatomic) BOOL isFyberInitialized;

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
- (void)setBannerSize:(NSString * _Nonnull)sizeString;
- (void)show;
- (void)hide;
- (void)remove;

- (UIViewController * _Nonnull)IAParentViewControllerForUnitController:(IAUnitController * _Nullable)unitController;
- (void)IAAdDidReceiveClick:(IAUnitController * _Nullable)unitController;
- (void)IAUnitControllerDidDismissFullscreen:(IAUnitController * _Nullable)unitController;

@end

NS_ASSUME_NONNULL_END
