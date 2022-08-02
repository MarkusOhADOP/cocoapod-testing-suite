//
//  ATOMURLAssociatedFileTypes.h
//  BidmadAdapterFNC
//
//  Created by ADOP_Mac on 2022/07/08.
//

#pragma clang diagnostic ignored "-Wobjc-property-no-attribute"

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface ATOMURLAssociatedFileTypes : NSObject

@property (nonatomic, strong) NSArray<NSURL *> * _Nonnull mainRewardVideo;
@property (nonatomic, strong) NSArray<NSURL *> * _Nonnull mainInterstitialImage;
@property (nonatomic, strong) NSArray<NSURL *> * _Nonnull iconImage;

+ (ATOMURLAssociatedFileTypes * _Nonnull)initWithMainRewardVideoUrls:(NSArray<NSURL *> *)mainRewardVideoUrls
                                           mainInterstitialImageUrls:(NSArray<NSURL *> *)mainInterstitialImageUrls
                                                       iconImageUrls:(NSArray<NSURL *> *)iconImageUrls;

@end

NS_ASSUME_NONNULL_END
