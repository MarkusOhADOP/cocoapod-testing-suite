//
//  BidmadIronSourceBanner.h
//  BidmadAdapterFC
//
//  Created by ADOP_Mac on 2022/07/05.
//

#pragma clang diagnostic ignored "-Wobjc-property-no-attribute"

#import <UIKit/UIKit.h>
#import <ADOPUtility/BidmadAdapterAdEssential.h>
#import "BidmadIronSourceBridge.h"

NS_ASSUME_NONNULL_BEGIN

@interface BidmadIronSourceBanner : BidmadAdapterAdEssential <BidmadBridgeISBannerDelegate, BidmadISLogDelegate>

@property (nonatomic, strong) NSUUID * _Nonnull adIdentifier;
@property (nonatomic, strong) NSDictionary<NSString *, NSNumber *> * _Nonnull loadableConditions;
@property (nonatomic) BOOL loadableConditionsPassed;

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
- (void)bannerDidLoad:(id _Nonnull)bannerView;
- (void)bannerDidFailToLoadWithError:(NSError * _Nonnull)error;
- (void)didClickBanner;
- (void)bannerWillPresentScreen;
- (void)bannerDidDismissScreen;
- (void)bannerWillLeaveApplication;
- (void)sendLog:(NSString * _Nonnull)log level:(BidmadISLogLevel)level tag:(BidmadLogTag)tag;

@end

NS_ASSUME_NONNULL_END
