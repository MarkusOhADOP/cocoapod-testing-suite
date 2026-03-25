//
//  BidmadVungleCore.h
//  BidmadVungleAdapter
//
//  Created by 플랫폼-오승섭-맥북 on 2023/08/30.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface BidmadVungleCore : NSObject

+ (BidmadVungleCore *)shared;
- (void)initializeWithAppId:(NSString *)appId
          completionHandler:(void (^)(NSError * _Nullable))handler;

@end

NS_ASSUME_NONNULL_END
