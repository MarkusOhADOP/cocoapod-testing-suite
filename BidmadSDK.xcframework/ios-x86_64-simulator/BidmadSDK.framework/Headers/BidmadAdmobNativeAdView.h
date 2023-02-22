//
//  BidmadAdmobNativeAdView.h
//  BidmadSDK
//
//  Created by Seungsub Oh on 2023/02/16.
//

#import <GoogleMobileAds/GoogleMobileAds.h>
#import <ADOPUtility/ADOPUtility.h>

NS_ASSUME_NONNULL_BEGIN

@class BIDMADNativeAdView;

@interface BidmadAdmobNativeAdView : GADNativeAdView <BidmadNativeAdViewContainerProtocol>

@property (nonatomic, weak) BIDMADNativeAdView *adView;

@end

NS_ASSUME_NONNULL_END
