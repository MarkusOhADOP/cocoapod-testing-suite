//
//  BidmadMediationTestMediationInfoTableView.h
//  BidmadSDK
//
//  Created by Seungsub Oh on 2023/03/03.
//

#import <UIKit/UIKit.h>
#import "BidmadMediationTestData.h"

NS_ASSUME_NONNULL_BEGIN

@interface BidmadMediationTestMediationInfoTableView : UIView

- (void)updateMediationInfo:(NSArray<BidmadMediationTestData *> *)mediationInfo;

@end

NS_ASSUME_NONNULL_END
