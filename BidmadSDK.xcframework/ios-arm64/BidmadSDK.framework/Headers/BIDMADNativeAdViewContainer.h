//
//  BIDMADNativeAdViewContainer.h
//  BidmadSDK
//
//  Created by Seungsub Oh on 2023/02/16.
//

#import <UIKit/UIKit.h>
#import <ADOPUtility/ADOPUtility.h>

NS_ASSUME_NONNULL_BEGIN

@class BIDMADNativeAdView;

@interface BIDMADNativeAdViewContainer : UIView <BidmadNativeAdViewContainerProtocol>

@property (nonatomic, weak) BIDMADNativeAdView *adView;

@end

NS_ASSUME_NONNULL_END
