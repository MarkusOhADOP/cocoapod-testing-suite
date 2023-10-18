//
//  BIDMADRewardVideo.h
//  BidmadSDK
//
//  Created by 김선정 on 2018. 10. 29..
//  Copyright © 2018년 ADOP Co., Ltd. All rights reserved.
//

#pragma clang diagnostic ignored "-Wobjc-property-no-attribute"

#import <Foundation/Foundation.h>
#import "BIDMADUtil.h"
#import "BIDMADSetting.h"
#import "BidmadAdUnit.h"

NS_ASSUME_NONNULL_BEGIN

@interface BIDMADAppOpenAd : NSObject

- (instancetype _Nonnull)initWithInstanceOBH:(id _Nullable)instanceOBH;
- (void)showAppOpenAdOnViewController:(UIViewController * _Nonnull)viewController;
- (void)selectAdUnit:(BidmadAdUnit *)adUnit;

@end

NS_ASSUME_NONNULL_END
