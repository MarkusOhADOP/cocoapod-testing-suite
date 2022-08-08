//
//  BidmadVungleInterstitialLoadabilityManager.h
//  BidmadAdapterFC
//
//  Created by ADOP_Mac on 2022/07/01.
//

#pragma clang diagnostic ignored "-Wobjc-property-no-attribute"

#import <Foundation/Foundation.h>
#import <ADOPUtility/BidmadLoadabilityManager.h>

NS_ASSUME_NONNULL_BEGIN

@interface BidmadVungleInterstitialLoadabilityManager : BidmadLoadabilityManager

+ (BidmadVungleInterstitialLoadabilityManager *)shared;

@end

NS_ASSUME_NONNULL_END
