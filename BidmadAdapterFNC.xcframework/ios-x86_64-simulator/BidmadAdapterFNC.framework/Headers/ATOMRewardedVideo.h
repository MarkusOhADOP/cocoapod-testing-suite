//
//  ATOMRewardedVideo.h
//  BidmadAdapterFNC
//
//  Created by ADOP_Mac on 2022/07/08.
//

#pragma clang diagnostic ignored "-Wobjc-property-no-attribute"

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>
#import <MediaPlayer/MediaPlayer.h>
#import <Network/Network.h>
#import <ADOPUtility/ADOPUtility.h>
#import "ATOMURLAssociatedFileTypes.h"
#import "ATOMRewardedVideoVC.h"

NS_ASSUME_NONNULL_BEGIN

@interface ATOMRewardedVideoData : NSObject
@property (nonatomic, strong) NSURL * _Nullable appIconUrl;
@property (nonatomic, strong) NSString * _Nullable appName;
@property (nonatomic, strong) NSString * _Nullable appDescription;
@property (nonatomic, strong) NSString * _Nullable buttonText;
@property (nonatomic, strong) NSString * _Nullable landingUrl;
@property (nonatomic, strong) NSURL * _Nullable adVideoUrl;
@property (nonatomic) UIInterfaceOrientationMask adOrientation;
@property (nonatomic, strong) NSNumber * _Nullable skippableTime;
- (instancetype)init:(NSURL *)appIconUrl
                    :(NSString *)appName
                    :(NSString *)appDescription
                    :(NSString *)buttonText
                    :(NSString *)landingUrl
                    :(NSURL *)adVideoUrl
                    :(UIInterfaceOrientationMask)adOrientation
                    :(NSNumber *)skippableTime;
@end
@interface ATOMRewardedVideoLogData : NSObject

@property (nonatomic, strong) NSString * _Nullable ui;
@property (nonatomic, strong) NSString * _Nullable gi;
@property (nonatomic, strong) NSString * _Nullable ci;
@property (nonatomic, strong) NSString * _Nullable cmi;
@property (nonatomic, strong) NSString * _Nullable ti;
@property (nonatomic, strong) NSString * _Nullable ii;
@property (nonatomic, strong) NSString * _Nullable igi;
@property (nonatomic, strong) NSString * _Nullable areaIdx;
@property (nonatomic, strong) NSString * _Nullable tp;
@property (nonatomic, strong) NSNumber * _Nullable tarPriceAgency;
@property (nonatomic, strong) NSNumber * _Nullable tarPriceFee;
@property (nonatomic, strong) NSNumber * _Nullable tarPriceAdop;
@property (nonatomic, strong) NSString * _Nullable tr;
@property (nonatomic, strong) NSString * _Nullable clk;

@end
@interface CallbackTypes : NSObject

+ (NSString * _Nonnull)canPlayVideo;
+ (NSString * _Nonnull)clickAd;
+ (NSString * _Nonnull)completeAd;
+ (NSString * _Nonnull)closeAd;
+ (NSString * _Nonnull)soundOff;
+ (NSString * _Nonnull)soundOn;

@end
@interface SupportedLanguages : NSObject

+ (NSString * _Nonnull)english;
+ (NSString * _Nonnull)korean;
+ (NSArray<NSString *> *)allCases;

@end

@interface ATOMRewardedVideo : BidmadAdapterAdEssential <ATOMRewardedVideoUIDelegate, ATOMPlaybackDelegate, BidmadAdapterEssential, BidmadAdapterRewardAdditional>

/// preferredLanguage : the first choice user's languages
@property (nonatomic, strong) NSString * _Nonnull preferredLanguage;

/// rewardSkipWarningMessage : used by ATOMRewardedVideoVC ex) Close Video? / You will lose your reward or 동영상을 닫을까요 / 리워드를 잃게 됩니다
@property (nonatomic, strong) NSArray<NSString *> * _Nonnull rewardSkipWarningMessage;

/// rewardSkipButtonTitle : used by ATOMRewardedVideoVC  ex) CLOSE / RESUME or 동영상 닫기 / 동영상 재시작
@property (nonatomic, strong) NSArray<NSString *> * _Nonnull rewardSkipButtonTitle;

/// remainingTimeMessage : used by ATOMRewardedVideoVC  ex) <Seconds> seconds remaining / <초> 초 남았습니다
@property (nonatomic, strong) NSString * _Nonnull remainingTimeMessage;

/// adData : used for sending ad data to ATOMRewardedVideoVC class
@property (nonatomic, strong) ATOMRewardedVideoData * _Nonnull adData;

/// logData : used only for sending logs for ATOM ads
@property (nonatomic, strong) ATOMRewardedVideoLogData * _Nonnull logData;

/// atomRewardURLs : This property has urls that contain the video and image to download
@property (nonatomic, strong) ATOMURLAssociatedFileTypes * _Nonnull atomRewardURLs;

/// atomRewardedVideoVC : The UI part of the ATOMRewardedVideo
@property (nonatomic, strong) ATOMRewardedVideoVC * _Nullable atomRewardedVideoVC;

/// wasUserRewarded : this property checks if the user should be rewarded
@property (nonatomic) BOOL wasUserRewarded;

/// didEmergencyStopRun : If the avplayer sends back the "playbackBufferEmpty," an emergency stop for the ad video will be triggered. This property tracks if it already ran
@property (nonatomic) BOOL didEmergencyStopRun;

/// adHiddenToggle : (Landscape Only) if true, the presented banner on the bottom is hidden. if false, the presented banner on the bottom is shown. Used for animating the banner moving up and down
@property (nonatomic) BOOL adHiddenToggle;

/// isAnimating : (Landscape Only) the ad presents a banner on the bottom that can be animated up and down. If isAnimating is true, there is currently an animation already being drawn.
@property (nonatomic) BOOL isAnimating;

/// savedTopViewController : this property is used for checking the size and orientation of the device
@property (nonatomic, strong) UIViewController * _Nullable savedTopViewController;

- (nonnull instancetype)initWithAppID:(NSString * _Nonnull)appID
                                pubID:(NSString * _Nullable)pubID
                               rootVC:(UIViewController * _Nullable)rootVC
                           parentView:(UIView * _Nullable)parentView
                              isChild:(NSNumber * _Nullable)isChild
                        isGDPRConsent:(NSNumber * _Nullable)isGDPRConsent
                        isCCPAConsent:(NSNumber * _Nullable)isCCPAConsent
                     bidmadController:(id _Nonnull)bidmadController;

@end

NS_ASSUME_NONNULL_END
