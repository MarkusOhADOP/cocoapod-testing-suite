//
//  ATOMRewardedVideoVC.h
//  BidmadAdapterFNC
//
//  Created by ADOP_Mac on 2022/07/06.
//

#pragma clang diagnostic ignored "-Wobjc-property-no-attribute"

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol ATOMRewardedVideoUIDelegate <NSObject>
- (void)atomRewardClicked;
- (void)atomRewardVideoClicked;
- (void)atomRewardCompleted;
- (void)atomRewardClosed;
@end

@protocol ATOMPlaybackDelegate <NSObject>
- (void)playbackBufferEmpty;
- (void)playbackLikelyToKeepUp;
- (void)playbackBufferFull;
@end

@interface ATOMRewardedVideoVC : UIViewController

- (nonnull instancetype)initWith:(AVPlayerItem * _Nonnull)avPlayerItem
                       iconImage:(UIImage * _Nonnull)iconImage
                 linkButtonTitle:(NSString * _Nonnull)linkButtonTitle
                       mainTitle:(NSString * _Nonnull)mainTitle
      descriptionForPortraitMode:(NSString * _Nullable)descriptionForPortraitMode
                         urlLink:(NSString * _Nonnull)urlLink
                   skippableTime:(double)skippableTime
                   adOrientation:(UIInterfaceOrientationMask)adOrientation
        rewardSkipWarningMessage:(NSArray<NSString *> * _Nonnull)rewardSkipWarningMessage
           rewardSkipButtonTitle:(NSArray<NSString *> * _Nonnull)rewardSkipButtonTitle
            remainingTimeMessage:(NSString * _Nonnull)remainingTimeMessage
                  parentViewSize:(CGSize)parentViewSize
                rewardUIDelegate:(id <ATOMRewardedVideoUIDelegate> _Nonnull)rewardUIDelegate
                playbackDelegate:(id <ATOMPlaybackDelegate> _Nonnull)playbackDelegate;

- (void)adMoveTo:(BOOL)hidden with:(float)duration didAnimationFinish:(void (^ _Nullable)(void))didAnimationFinish;
- (void)emergencyStop;
- (void)removeTouchDetectionFromVideo;
- (void)unpause;

/// avPlayerItem
@property (nonatomic, strong) AVPlayerItem * _Nonnull avPlayerItem;

@end

NS_ASSUME_NONNULL_END
