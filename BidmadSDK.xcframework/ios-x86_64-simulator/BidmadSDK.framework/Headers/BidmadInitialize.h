//
//  BidmadInitialize.h
//  OpenBiddingHelper
//
//  Created by Seungsub Oh on 2022/09/27.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface BidmadInitialize : NSObject

/**
 * Return booleans, each representing the user's access status of ARPM (BOOL), TestTool (BOOL), and Preload Status (BOOL)
 */
+ (void)requestAppDataWithAppKey:(NSString *)sid withUID:(NSString *)uid handler:(void (^)(NSError *error, BOOL isARPM, BOOL isTestTool, BOOL isPreload))handler;

@end

NS_ASSUME_NONNULL_END
