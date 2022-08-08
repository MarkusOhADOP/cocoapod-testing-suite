//
//  BidmadPrebid.h
//  BidmadAdapterFNC
//
//  Created by Kenneth on 2022/08/02.
//

#import <Foundation/Foundation.h>
@import UIKit;
@import AdopPrebidSdk;


@interface BidmadPrebidBanner : NSObject<AdopPrebidBannerDelegate>

@property (weak,nonatomic) id __nullable bidmadControllerForCallbacks;

- (id __nonnull)initWithAppID:(NSString * _Nonnull)appID
                                pubID:(NSString * _Nullable)pubID
                               rootVC:(UIViewController * _Nonnull)rootVC
                           parentView:(UIView * _Nullable)parentView
                              isChild:(NSNumber * _Nullable)isChild
                        isGDPRConsent:(NSNumber * _Nullable)isGDPRConsent
                        isCCPAConsent:(NSNumber * _Nullable)isCCPAConsent;
- (void)load;
- (void)setIsDebug:(BOOL)isDebug;
- (void)setBannerSize:(NSString * _Nonnull)sizeString;
- (void)setBidmadController:(id __nonnull)bidmadController;
- (void)show;
- (void)hide;
- (void)remove;

@end
