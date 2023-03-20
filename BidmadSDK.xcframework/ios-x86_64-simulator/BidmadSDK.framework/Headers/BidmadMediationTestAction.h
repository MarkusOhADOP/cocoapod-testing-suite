//
//  BidmadMediationTestAction.h
//  BidmadSDK-DevSuite
//
//  Created by Seungsub Oh on 2023/03/02.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSUInteger, BidmadMediationTestAction) {
    BidmadMediationTestActionReq = 0,
    BidmadMediationTestActionLoad = 1,
    BidmadMediationTestActionNoFill = 2,
    BidmadMediationTestActionFail = 3,
    BidmadMediationTestActionShow = 4,
    BidmadMediationTestActionClick = 5,
    BidmadMediationTestActionCompleted = 6,
    BidmadMediationTestActionClose = 7,
    BidmadMediationTestActionNoShow = 8,
    BidmadMediationTestActionUnknown = 9,
};

@interface BidmadMediationTestActionManager : NSObject

+ (NSString *)stringFromAction:(BidmadMediationTestAction)action;
+ (BidmadMediationTestAction)actionFromString:(NSString *)string;

@end
