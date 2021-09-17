//
//  BIDMADTapjoy.h
//  BidmadSDK
//
//  Created by Kenneth on 2021/02/05.
//  Copyright © 2021 ADOP Co., Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface BIDMADTapjoy : NSObject

- (id)initWithAppID:(NSString *)appID pubID:(NSString *)pubID rootVC:(UIViewController *)rootVC parentView:(UIView *)parentView; //
- (void)load; //
- (void)show; //
- (void)setExtra:(NSDictionary<NSString *,id> *)extra; //
- (void)setBidmadController:(id)bidmadController; //
- (void)hide;
- (void)remove;

- (void)getCurrency; //
- (void)spendCurrency:(NSNumber *)amount; //
- (void)setGDPRData; //

@end
