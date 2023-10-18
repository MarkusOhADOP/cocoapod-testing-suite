//
//  BIDMADInterstitial.h
//  BIDMADSDK
//
//  Created by 김선정 on 2015. 7. 15..
//  Copyright (c) 2015년 ADOP Co., Ltd. All rights reserved.
//

#pragma clang diagnostic ignored "-Wobjc-property-no-attribute"

#import <Foundation/Foundation.h>
#import "BIDMADUtil.h"
#import "BIDMADSetting.h"
#import "BidmadAdUnit.h"
#import "OBHCommunicationDelegate.h"

NS_ASSUME_NONNULL_BEGIN

@interface BIDMADInterstitial : NSObject

- (instancetype)initWithInstanceOBH:(id<OBHCommunicationDelegate>)instanceOBH;
- (void)showInterstitialViewOnViewController:(UIViewController * _Nonnull)viewController;
- (void)selectAdUnit:(BidmadAdUnit *)adUnit;

@end

NS_ASSUME_NONNULL_END
