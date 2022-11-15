//
//  BidmadAdNetworkSupportViewController.h
//  OpenBiddingHelper
//
//  Created by Seungsub Oh on 2022/09/01.
//

#import <UIKit/UIKit.h>
#import "BidmadTestTool.h"

NS_ASSUME_NONNULL_BEGIN

@interface BidmadAdNetworkSupportViewController : UINavigationController

- (instancetype)initWithAdNetworkStatus:(BidmadAdNetworkStatus)status;
- (void)showAdNetworkSetupViewWithViewController:(UIViewController *)vc error:(NSError ** _Nullable)error;
+ (UIView *)createBlurView;

@end

NS_ASSUME_NONNULL_END
