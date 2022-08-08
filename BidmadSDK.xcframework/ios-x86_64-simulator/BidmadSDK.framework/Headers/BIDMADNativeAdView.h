//
//  BIDMADNativeAdView.h
//  BidmadSDK
//
//  Created by Seungsub Oh on 2021/08/17.
//  Copyright © 2021 ADOP Co., Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <GoogleMobileAds/GADNativeAd.h>

NS_ASSUME_NONNULL_BEGIN

#define BIDMAD_NATIVEAD_GOOGLE_MEDIA_VIEW 314159001
#define BIDMAD_NATIVEAD_PANGLE_IMAGE_VIEW 314159003
#define BIDMAD_NATIVEAD_PANGLE_MEDIA_VIEW 314159004

@interface BIDMADNativeAdView : GADNativeAdView

@property(nonatomic, weak, nullable) IBOutlet UIImageView* iconViewCustom;
@property(nonatomic, weak, nullable) IBOutlet UILabel* headlineViewCustom;
@property(nonatomic, weak, nullable) IBOutlet UILabel* advertiserViewCustom;
@property(nonatomic, weak, nullable) IBOutlet UIView* starRatingViewCustom;
@property(nonatomic, weak, nullable) IBOutlet UILabel* bodyViewCustom;
@property(nonatomic, weak, nullable) IBOutlet UIView* mediaViewCustom;
@property(nonatomic, weak, nullable) IBOutlet UILabel* priceViewCustom;
@property(nonatomic, weak, nullable) IBOutlet UILabel* storeViewCustom;
@property(nonatomic, weak, nullable) IBOutlet UIButton* callToActionViewCustom;

@property (nonatomic, strong) GADMediaView * _Nullable mediaViewForGoogle;
@property (nonatomic, strong) UIImageView * _Nullable mediaViewForPangle;
@property (nonatomic, strong) UIView * _Nullable innerMediaViewForPangle;

@property (nonatomic, strong) id _Nullable nativeRelatedViewForPangle;

- (void)setup;

@end

NS_ASSUME_NONNULL_END
