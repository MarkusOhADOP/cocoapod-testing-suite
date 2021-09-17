//
//  BIDMADPangleInterstitial.h
//  BidmadSDK
//
//  Created by ADOP_Mac on 2021/06/25.
//  Copyright © 2021 ADOP Co., Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <BUFoundation/BUFoundation.h>
#import <BUAdSDK/BUAdSDK.h>
#import <BUVAAuxiliary/BUVAAuxiliary.h>

#define PANGLE_INTERSTITIAL_TEST_ID_VERTICAL @"946273141"
#define PANGLE_INTERSTITIAL_TEST_ID_HORIZONTAL @"946273143"
#define PANGLE_INTERSTITIAL_TEST_APPID @"5185174"

@interface BIDMADPangleInterstitial : NSObject<BUFullscreenVideoAdDelegate>

@property (weak,nonatomic) id bidmadControllerForCallbacks;

- (id)initWithAppID:(NSString *)appID pubID:(NSString *)pubID rootVC:(UIViewController *)rootVC parentView:(UIView *)parentView;
- (void)load;
- (void)setExtra:(NSDictionary<NSString *,id> *)extra;
- (void)setBidmadController:(id)bidmadController;
- (void)show;
- (void)hide;
- (void)remove;

@end
