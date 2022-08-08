//
//  BidmadAdapterOfferwallAdditional.h
//  BidmadSDK-DevSuite
//
//  Created by ADOP_Mac on 2022/07/01.
//

#pragma clang diagnostic ignored "-Wobjc-property-no-attribute"

@protocol BidmadAdapterOfferwallAdditional <NSObject>

- (void)getCurrencyWithCompletionHandler:(void (^ _Nullable)(NSError * _Nullable, NSDictionary<NSString *, id> * _Nullable))completionHandler;
- (void)spendCurrency:(NSInteger)amount completionHandler:(void (^ _Nullable)(NSError * _Nullable, NSDictionary<NSString *, id> * _Nullable))completionHandler;

@end
