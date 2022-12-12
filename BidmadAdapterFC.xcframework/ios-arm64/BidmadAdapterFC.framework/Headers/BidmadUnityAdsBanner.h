//
//  BidmadUnityAdsBanner.h
//  BidmadAdapterFC
//
//  Created by ADOP_Mac on 2022/07/05.
//

#pragma clang diagnostic ignored "-Wobjc-property-no-attribute"

#import <UIKit/UIKit.h>
#import <UnityAds/UnityAds.h>
#import <ADOPUtility/BidmadAdapterAdEssential.h>
#import <ADOPUtility/BidmadAdapterEssential.h>
#import <ADOPUtility/BidmadAdapterBannerAdditional.h>

NS_ASSUME_NONNULL_BEGIN

@interface BidmadUnityAdsBanner : BidmadAdapterAdEssential <UADSBannerViewDelegate, UnityAdsInitializationDelegate, BidmadAdapterEssential, BidmadAdapterBannerAdditional>

@property (nonatomic, strong) NSNumber * _Nonnull isUnityAdsInitialized;

- (nonnull instancetype)initWithAppID:(NSString * _Nonnull)appID
                                pubID:(NSString * _Nullable)pubID
                               rootVC:(UIViewController * _Nullable)rootVC
                           parentView:(UIView * _Nullable)parentView
                              isChild:(NSNumber * _Nullable)isChild
                        isGDPRConsent:(NSNumber * _Nullable)isGDPRConsent
                        isCCPAConsent:(NSNumber * _Nullable)isCCPAConsent
                     bidmadController:(id _Nonnull)bidmadController;
- (void)initializationComplete;
- (void)initializationFailed:(UnityAdsInitializationError)error withMessage:(NSString * _Nonnull)message;
- (void)load;
- (void)setIsDebug:(BOOL)isDebug;
- (void)setBannerSize:(NSString * _Nonnull)sizeString;
- (void)show;
- (void)hide;
- (void)remove;
- (void)bannerViewDidLoad:(UADSBannerView * _Null_unspecified)bannerView;
- (void)bannerViewDidClick:(UADSBannerView * _Null_unspecified)bannerView;
- (void)bannerViewDidLeaveApplication:(UADSBannerView * _Null_unspecified)bannerView;
- (void)bannerViewDidError:(UADSBannerView * _Null_unspecified)bannerView error:(UADSBannerError * _Null_unspecified)error;

@end

NS_ASSUME_NONNULL_END
