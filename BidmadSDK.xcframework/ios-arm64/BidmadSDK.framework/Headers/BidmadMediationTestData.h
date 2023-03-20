//
//  BidmadMediationTestModel.h
//  BidmadSDK
//
//  Created by Seungsub Oh on 2023/03/02.
//

#import <Foundation/Foundation.h>
#import "BidmadMediationTestAction.h"

NS_ASSUME_NONNULL_BEGIN

@interface BidmadMediationTestData : NSObject

@property (nonatomic, strong) NSString *adNetworkName;
@property (nonatomic) BidmadMediationTestAction action;
@property (nonatomic, strong) NSString *sessionId;

+ (instancetype)dataWithAdNetworkName:(NSString *)adNetworkName action:(BidmadMediationTestAction)action sessionId:(NSString *)sessionId;
- (BOOL)isEqualTo:(BidmadMediationTestData *)mediationTestData;
- (NSString *)description;

@end

NS_ASSUME_NONNULL_END
