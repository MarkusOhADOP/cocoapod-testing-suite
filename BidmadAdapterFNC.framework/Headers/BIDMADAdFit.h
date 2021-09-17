//
//  BIDMADAdFit.h
//  BidmadSDK
//
//  Created by ADOP_Mac on 2021/05/27.
//  Copyright © 2021 ADOP Co., Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>

#if __has_include(<AdFitSDK/AdFitSDK.h>) || __has_include("AdFitSDK.h")
#import <AdFitSDK/AdFitSDK.h>
#endif

@interface BIDMADAdFit : NSObject

@property (weak,nonatomic) id bidmadControllerForCallbacks;

-(id)initWithAppID:(NSString *)appID pubID:(NSString *)pubID rootVC:(UIViewController *)rootVC parentView:(UIView *)parentView;
-(void)load;
-(void)setExtra:(NSDictionary<NSString *,id> *)extra;
-(void)setBidmadController:(id)bidmadController;
-(void)show;
-(void)hide;
-(void)remove;

@end
