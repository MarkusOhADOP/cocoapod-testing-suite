//
//  BidmadError.h
//  BidmadSDK
//
//  Created by Seungsub Oh on 2022/11/16.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSUInteger, BidmadError) {
    BidmadErrorNoError,
    BidmadErrorInternalError,
    BidmadErrorUninitializedAdRequest,
    BidmadErrorParsingFailed,
    BidmadErrorUnregisteredSiteIdx,
    BidmadErrorInitializationError,
    BidmadErrorServerCommunication,
    BidmadErrorNoResponse,
    BidmadErrorAdWeightNoHit,
    BidmadErrorKeyWindowNotFound,
    BidmadErrorParentViewNotFound,
    BidmadErrorRootViewControllerNotFound,
    BidmadErrorBannerSizeNotFound,
    BidmadErrorBannerSizeUnsupported,
    BidmadErrorNetworkSDKNotFound,
    BidmadErrorNetworkAdapterNotFound,
    BidmadErrorNetworkAdRequestTimeout,
    BidmadErrorNetworkLoadabilityCheckFail,
    BidmadErrorAdDataUnavailable,
    BidmadErrorNetworkLoadError,
    BidmadErrorNetworkInsufficientParameter,
    BidmadErrorNetworkInitError,
    BidmadErrorNetworkUninitializedRequestError,
    BidmadErrorMethodCallFail,
    BidmadErrorNoAdsInZone
};

@interface BidmadAdError : NSObject

+ (NSError *)generateErrorWithReason:(NSString *)reason code:(NSInteger)code;
+ (NSUInteger)codeFromBidmadError:(BidmadError)error;
+ (NSString *)reasonFromBidmadError:(BidmadError)error;
+ (NSError *)errorFromBidmadError:(BidmadError)error;
+ (NSError *)errorFromBidmadError:(BidmadError)error detail:(NSString *)detail;

@end

NS_ASSUME_NONNULL_END
