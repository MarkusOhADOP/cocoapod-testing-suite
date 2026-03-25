#import <Foundation/Foundation.h>

typedef NS_CLOSED_ENUM(NSInteger, BidmadAdType) {
    BidmadAdTypeBanner,
    BidmadAdTypeInterstitial,
    BidmadAdTypeReward,
    BidmadAdTypeNative,
    BidmadAdTypeAppOpen,
    BidmadAdTypeSplash = 5,
    BidmadAdTypeCustomRendered = 6,
};
