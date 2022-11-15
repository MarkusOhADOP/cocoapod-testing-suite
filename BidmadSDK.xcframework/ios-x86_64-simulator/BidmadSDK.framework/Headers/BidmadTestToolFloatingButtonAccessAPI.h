//
//  BidmadTestToolFloatingButtonAccessAPI.h
//  OpenBiddingHelper
//
//  Created by Seungsub Oh on 2022/09/27.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface BidmadTestToolFloatingButtonAccessAPI : NSObject

/**
 * Return a tuple (array) of booleans, each representing the user's access status of ARPM (BOOL) and TestTool (BOOL)
 * @return Promise of ARPM, TestBool, and Preload status in Boolean format (wrapped in NSNumber class)
 */
+ (id)shouldAccessInternalSettingsWithSID:(NSString *)sid withUID:(NSString *)uid;

@end

NS_ASSUME_NONNULL_END
