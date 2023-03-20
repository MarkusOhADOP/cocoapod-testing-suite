//
//  BidmadMediationTestViewModel.h
//  BidmadSDK
//
//  Created by Seungsub Oh on 2023/03/02.
//

#import <UIKit/UIKit.h>
#import "BidmadTestAdType.h"
#import "BidmadMediationTestData.h"

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSUInteger, BidmadMediationTestViewModelDataChangeSignal) {
    BidmadMediationTestViewModelDataChangeSignalMediationInfo,
    BidmadMediationTestViewModelDataChangeSignalCurrentlySelectedAdType,
    BidmadMediationTestViewModelDataChangeSignalAdSize,
    BidmadMediationTestViewModelDataChangeSignalNativeAdLoaded,
};

@interface BidmadMediationTestViewModel : NSObject

@property (nonatomic, strong) NSDictionary<NSString *, NSString *> *zoneIDsForTest;
@property (nonatomic) BidmadTestAdType currentlySelectedAdType;
@property (nonatomic, readonly) NSString *currentlySelectedAdTypeString;
@property (nonatomic, readonly) NSArray<NSString *> *currentButtonStates;
@property (nonatomic, strong) NSMutableArray<BidmadMediationTestData *> *mediationInfo;
@property (nonatomic, strong) NSString *adSize;
@property (nonatomic, readonly) CGFloat adHeight;
@property (nonatomic, weak) void (^nativeAdRemovalAction)(void);

- (instancetype)initWithViewController:(UIViewController *)viewController exposureView:(UIView *)exposureView dataChangeNotification:(void (^)(BidmadMediationTestViewModelDataChangeSignal))dataChangeNotification;
- (NSArray<NSString *> *)allAvailableAdTypes;
- (void)updateAdTypeFromString:(NSString *)string;
- (id)retrieveNativeAdInstance;
- (void)changeAdSize;
- (void)loadAd;
- (void)showAd;
- (void)reset;
- (void)remove;
- (void)bidmadSendLogWithAdNetworkName:(NSString *)adNetworkName type:(NSString *)logType sessionId:(NSString *)sessionId;

@end

NS_ASSUME_NONNULL_END
