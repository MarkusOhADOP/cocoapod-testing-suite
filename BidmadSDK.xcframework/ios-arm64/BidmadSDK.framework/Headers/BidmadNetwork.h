//
//  BidmadNetwork.h
//  BidmadSDK
//
//  Created by Seungsub Oh on 2022/07/26.
//

#import <Foundation/Foundation.h>
#import <FBLPromises/FBLPromises.h>
#import "BidmadAdData.h"

@interface BidmadNetwork : NSObject

+ (FBLPromise<BidmadAdData *> * _Nonnull)requestForZoneID:(NSString * _Nonnull)zoneID;

@end
