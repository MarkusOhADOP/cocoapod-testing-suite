//
//  BidmadInMobiBanner.h
//  BidmadAdapterFC
//
//  Created by ADOP_Mac on 2022/07/04.
//

#pragma clang diagnostic ignored "-Wobjc-property-no-attribute"

#import <Foundation/Foundation.h>
#import <ADOPUtility/BidmadAdapterAdEssential.h>
#import "BidmadInMobiInterface.h"

NS_ASSUME_NONNULL_BEGIN

@interface BidmadInMobiBanner : BidmadAdapterAdEssential <BidmadIMBannerDelegate>

@property (nonatomic, strong) NSNumber * _Nonnull isInMobiInitialized;

- (nonnull instancetype)initWithAppID:(NSString * _Nonnull)appID
                                pubID:(NSString * _Nullable)pubID
                               rootVC:(UIViewController * _Nonnull)rootVC
                           parentView:(UIView * _Nullable)parentView
                              isChild:(NSNumber * _Nullable)isChild
                        isGDPRConsent:(NSNumber * _Nullable)isGDPRConsent
                        isCCPAConsent:(NSNumber * _Nullable)isCCPAConsent;
- (void)load;
- (void)setBannerSize:(NSString * _Nonnull)sizeString;
- (void)show;
- (void)hide;
- (void)remove;
- (void)setIsDebug:(BOOL)isDebug;
- (void)bannerDidFinishLoading:(id _Nonnull)banner;
- (void)banner:(id _Nonnull)banner didFailToLoadWithError:(id _Nonnull)error;
- (void)banner:(id _Nonnull)banner didInteractWithParams:(id _Nonnull)params;

@end

NS_ASSUME_NONNULL_END
