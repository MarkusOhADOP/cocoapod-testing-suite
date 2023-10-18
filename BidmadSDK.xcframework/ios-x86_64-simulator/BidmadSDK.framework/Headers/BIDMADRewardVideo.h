//
//  BIDMADRewardVideo.h
//  BidmadSDK
//
//  Created by 김선정 on 2018. 10. 29..
//  Copyright © 2018년 ADOP Co., Ltd. All rights reserved.
//

#pragma clang diagnostic ignored "-Wobjc-property-no-attribute"

#import <UIKit/UIKit.h>
#import "BidmadAdUnit.h"
#import "OBHCommunicationDelegate.h"

NS_ASSUME_NONNULL_BEGIN

@interface BIDMADRewardVideo : NSObject

- (instancetype)initWithInstanceOBH:(id<OBHCommunicationDelegate>)instanceOBH;
- (void)selectAdUnit:(BidmadAdUnit *)adUnit;
- (void)showRewardVideoOnViewController:(UIViewController * _Nonnull)viewController;

@end

NS_ASSUME_NONNULL_END
