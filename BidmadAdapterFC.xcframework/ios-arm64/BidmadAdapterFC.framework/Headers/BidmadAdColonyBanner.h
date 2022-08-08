//
//  BidmadAdColonyBanner.h
//  BidmadAdapterFC
//
//  Created by Kenneth on 2022/06/30.
//

#pragma clang diagnostic ignored "-Wobjc-property-no-attribute"

#import <Foundation/Foundation.h>
#import "BidmadAdColonyInterface.h"
#import <ADOPUtility/BidmadAdapterAdEssential.h>

@interface BidmadAdColonyBanner : BidmadAdapterAdEssential <BidmadADCAdViewDelegate>

@property (nonatomic, strong) NSNumber * _Nonnull isAdColonyInitialized;

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
- (void)adColonyAdViewDidLoad:(UIView * _Nonnull)adView;
- (void)adColonyAdViewDidFailToLoad:(id _Nonnull)error;
- (void)adColonyAdViewDidReceiveClick:(UIView * _Nonnull)adView;

@end
