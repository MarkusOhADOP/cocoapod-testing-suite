//
//  BidmadOfferwallAd.h
//  OpenBiddingHelper
//
//  Created by ADOP_Mac on 2022/06/30.
//

#pragma clang diagnostic ignored "-Wobjc-property-no-attribute"

#import <Foundation/Foundation.h>
#import <BidmadSDK/BIDMADOfferwall.h>
#import <UIKit/UIKit.h>
#import "BidmadAdStandardFullScreenAd.h"

NS_ASSUME_NONNULL_BEGIN

@interface BidmadOfferwallAd : NSObject <BidmadAdStandardFullScreenAd, BIDMADOfferwallCurrencyDelegate, BIDMADOfferwallDelegate>
@property (nonatomic, strong) id <BIDMADOfferwallDelegate> _Nullable delegate;
- (nonnull instancetype)initWith:(UIViewController * _Nonnull)parentViewController zoneID:(NSString * _Nonnull)zoneID;
- (void)load;
- (void)show;
- (void)setCUID:(NSString * _Nonnull)cuid;
- (BOOL)isLoaded;
/// Currency info will be provided through completion handler, with the true if success, false if failed.
/// If success (true), currency amount (Double) is available.
- (void)getCurrencyWithCurrencyReceivalCompletion:(void (^ _Nonnull)(BOOL, NSInteger))currencyReceivalCompletion;
/// Whether Currency Spenditure was successful or not is provided through completion handler.
/// If success, true and if failure, false
- (void)spendCurrency:(NSInteger)amount currencySpenditureCompletion:(void (^ _Nonnull)(BOOL, NSInteger))currencySpenditureCompletion;

#pragma mark Currency Spenditure & Receival Callbacks

- (void)BIDMADOfferwallSpendCurrencyFail:(BIDMADOfferwall * _Null_unspecified)core error:(NSString * _Null_unspecified)error;
- (void)BIDMADOfferwallGetCurrencyBalanceFail:(BIDMADOfferwall * _Null_unspecified)core error:(NSString * _Null_unspecified)error;
- (void)BIDMADOfferwallSpendCurrencySuccess:(BIDMADOfferwall * _Null_unspecified)core currencyName:(NSString * _Null_unspecified)currencyName balance:(int32_t)balance;
- (void)BIDMADOfferwallGetCurrencyBalanceSuccess:(BIDMADOfferwall * _Null_unspecified)core currencyName:(NSString * _Null_unspecified)currencyName balance:(int32_t)balance;

#pragma mark Offerwall Ad Callbacks

- (void)BIDMADOfferwallLoadAd:(BIDMADOfferwall * _Null_unspecified)core;
- (void)BIDMADOfferwallShowAd:(BIDMADOfferwall * _Null_unspecified)core;
- (void)BIDMADOfferwallCloseAd:(BIDMADOfferwall * _Null_unspecified)core;
- (void)BIDMADOfferwallFailedAd:(BIDMADOfferwall * _Null_unspecified)core;
- (void)BIDMADOfferwallInitSuccess:(BIDMADOfferwall * _Null_unspecified)core;
- (void)BIDMADOfferwallInitFail:(BIDMADOfferwall * _Null_unspecified)core error:(NSString * _Null_unspecified)error;

@end

NS_ASSUME_NONNULL_END
