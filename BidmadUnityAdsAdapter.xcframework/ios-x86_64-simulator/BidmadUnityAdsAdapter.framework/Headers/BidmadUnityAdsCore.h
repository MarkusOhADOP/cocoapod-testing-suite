//
//  BidmadUnityAdsCore.h
//  BidmadUnityAdsAdapter
//
//  Created by 플랫폼-오승섭-맥북 on 2023/08/29.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface BidmadUnityAdsCore : NSObject

+ (BidmadUnityAdsCore *)shared;
- (void)initializeWithAppId:(NSString *)appId
          completionHandler:(void (^)(BOOL, NSString *))handler;

@end

NS_ASSUME_NONNULL_END
