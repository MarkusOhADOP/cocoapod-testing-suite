//
//  BIDMADBanner.h
//  BIDMADMobileAds
//
//  Created by 김선정 on 2015. 7. 13..
//  Copyright (c) 2015년 ADOP Co., Ltd. All rights reserved.
//

#pragma clang diagnostic ignored "-Wobjc-property-no-attribute"

#import <UIKit/UIKit.h>
#import "BIDMADUtil.h"
#import "BIDMADSetting.h"
#import "BIDMADAtom.h"
#import "BIDMADAdmob.h"
#import "BIDMADAdmanager.h"

typedef NS_ENUM(NSUInteger, BIDMADBannerViewCase) {
    BIDMADBannerViewCaseXYCoordinateGiven = 0,
    BIDMADBannerViewCaseContainerViewGiven = 1,
    BIDMADBannerViewCaseOnlyYCoordinateGiven = 2,
    BIDMADBannerViewCaseAdPositionAnchorGiven = 3,
};

typedef NS_ENUM(NSUInteger, BIDMADAdPosition) {
    BIDMADAdPositionCenter = 0,
    BIDMADAdPositionTop = 1,
    BIDMADAdPositionBottom = 2,
    BIDMADAdPositionLeft = 3,
    BIDMADAdPositionRight = 4,
    BIDMADAdPositionTopLeft = 5,
    BIDMADAdPositionTopRight = 6,
    BIDMADAdPositionBottomLeft = 7,
    BIDMADAdPositionBottomRight = 8,
    BIDMADAdPositionNone = 9,
};

@interface BIDMADBanner : NSObject
@property (nonatomic) int mediationNumber;

- (instancetype _Nonnull)initWithInstanceOBH:(id _Nullable)instanceOBH;
- (void)removeAds;
/// This method sorts the dictionary of compass ads data from the least floor price to the highest.
/// It returns the NSError if necessary properties are not available nor nil.
/// If success, it lastly calls selectAds with the first ad with the highest floor price.
- (NSError * _Nullable)sortBasedOnFloorPriceAndSelectFirstAd;
- (void)hideView;
- (void)showView;
- (void)onBannerError:(NSError * _Nonnull)error
             failType:(NSString * _Nonnull)failType;
- (void)onBannerError:(NSError * _Nonnull)error
             failType:(NSString * _Nonnull)failType
        failLogEnable:(BOOL)failLogEnable;
- (void)onBannerLoad;
- (void)onBannerClick;

@end
