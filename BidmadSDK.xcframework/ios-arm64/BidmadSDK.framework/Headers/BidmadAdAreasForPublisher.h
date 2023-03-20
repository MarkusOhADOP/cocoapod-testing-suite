//
//  BidmadAdAreasForPublisherAPI.h
//  OpenBiddingHelper
//
//  Created by Seungsub Oh on 2022/09/29.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface BidmadAdAreaInfo : NSObject

@property (nonatomic, strong) NSString *areaIdx;
@property (nonatomic, strong) NSString *areaName;
@property (nonatomic, strong) NSString *adType;
@property (nonatomic, strong) NSNumber *width;
@property (nonatomic, strong) NSNumber *height;

@end

@interface BidmadAdAreasForPublisher : NSObject

+ (id)getAdAreasSettingForAppKey:(NSString *)appKey;

@end

NS_ASSUME_NONNULL_END
