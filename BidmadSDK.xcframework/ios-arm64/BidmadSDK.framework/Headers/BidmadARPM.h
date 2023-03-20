//
//  BidmadARPMAPI.h
//  OpenBiddingHelper
//
//  Created by Seungsub Oh on 2022/10/05.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface BidmadARPM : NSObject

+ (id)requestARPMDataFromAreaID:(NSString *)areaID;

@end

NS_ASSUME_NONNULL_END
