//
//  BidmadRewardInterstitialAd.m
//  OpenBiddingHelper
//
//  Created by ADOP_Mac on 2022/06/30.
//

#import "BidmadRewardInterstitialAd.h"

@implementation BidmadRewardInterstitialAd {
    NSString *zoneID;
    NSString *cuid;
    UIViewController *parentViewController;
    OpenBiddingRewardInterstitial *rewardInterstitial;
}

- (nonnull instancetype)initWith:(UIViewController * _Nonnull)parentViewController zoneID:(NSString * _Nonnull)zoneID {
    self = [super init];
    
    if (self) {
        self->zoneID = zoneID;
        self->parentViewController = parentViewController;
        self->rewardInterstitial = [OpenBiddingRewardInterstitial new];
        self->rewardInterstitial.parentViewController = self->parentViewController;
        self->rewardInterstitial.zoneID = self->zoneID;
        self->rewardInterstitial.delegate = self;
        self.isAutoReload = YES;
    }
    
    return self;
}

- (void)load {
    [self->rewardInterstitial requestRewardInterstitial];
}

- (void)show {
    [self->rewardInterstitial showRewardInterstitialView];
}

- (void)setCUID:(NSString * _Nonnull)cuid {
    [self->rewardInterstitial setCUID:cuid];
    self->cuid = cuid;
}

- (BOOL)isLoaded {
    return self->rewardInterstitial.isLoaded;
}

#pragma mark Delegate Methods

- (void)OpenBiddingRewardInterstitialLoad:(OpenBiddingRewardInterstitial * _Null_unspecified)core {
    if (self.delegate == nil) { return; }
    
    __weak __typeof(self) weakSelf = self;
    dispatch_async(dispatch_get_main_queue(), ^{
        if (weakSelf == nil) { return; }
        __strong __typeof(weakSelf) self = weakSelf;
        
        if ([self.delegate respondsToSelector:@selector(OpenBiddingRewardInterstitialLoad:)]) {
            [self.delegate OpenBiddingRewardInterstitialLoad:core];
        }
    });
}

- (void)OpenBiddingRewardInterstitialShow:(OpenBiddingRewardInterstitial * _Null_unspecified)core {
    if (self.delegate == nil) { return; }
    
    __weak __typeof(self) weakSelf = self;
    dispatch_async(dispatch_get_main_queue(), ^{
        if (weakSelf == nil) { return; }
        __strong __typeof(weakSelf) self = weakSelf;
        
        if ([self.delegate respondsToSelector:@selector(OpenBiddingRewardInterstitialShow:)]) {
            [self.delegate OpenBiddingRewardInterstitialShow:core];
        }
    });
    
    if (self.isAutoReload == YES) {
        rewardInterstitial = [OpenBiddingRewardInterstitial new];
        rewardInterstitial.parentViewController = parentViewController;
        rewardInterstitial.zoneID = zoneID;
        rewardInterstitial.delegate = self;
        rewardInterstitial.CUID = cuid;
        [rewardInterstitial requestRewardInterstitial];
    }
}

- (void)OpenBiddingRewardInterstitialClick:(OpenBiddingRewardInterstitial * _Null_unspecified)core {
    if (self.delegate == nil) { return; }
    
    __weak __typeof(self) weakSelf = self;
    dispatch_async(dispatch_get_main_queue(), ^{
        if (weakSelf == nil) { return; }
        __strong __typeof(weakSelf) self = weakSelf;
        
        if ([self.delegate respondsToSelector:@selector(OpenBiddingRewardInterstitialClick:)]) {
            [self.delegate OpenBiddingRewardInterstitialClick:core];
        }
    });
}

- (void)OpenBiddingRewardInterstitialClose:(OpenBiddingRewardInterstitial * _Null_unspecified)core {
    if (self.delegate == nil) { return; }
    
    __weak __typeof(self) weakSelf = self;
    dispatch_async(dispatch_get_main_queue(), ^{
        if (weakSelf == nil) { return; }
        __strong __typeof(weakSelf) self = weakSelf;
        
        if ([self.delegate respondsToSelector:@selector(OpenBiddingRewardInterstitialClose:)]) {
            [self.delegate OpenBiddingRewardInterstitialClose:core];
        }
    });
}

- (void)OpenBiddingRewardInterstitialSkipped:(OpenBiddingRewardInterstitial * _Null_unspecified)core {
    if (self.delegate == nil) { return; }
    
    __weak __typeof(self) weakSelf = self;
    dispatch_async(dispatch_get_main_queue(), ^{
        if (weakSelf == nil) { return; }
        __strong __typeof(weakSelf) self = weakSelf;
        
        if ([self.delegate respondsToSelector:@selector(OpenBiddingRewardInterstitialSkipped:)]) {
            [self.delegate OpenBiddingRewardInterstitialSkipped:core];
        }
    });
}

- (void)OpenBiddingRewardInterstitialSuccess:(OpenBiddingRewardInterstitial * _Null_unspecified)core {
    if (self.delegate == nil) { return; }
    
    __weak __typeof(self) weakSelf = self;
    dispatch_async(dispatch_get_main_queue(), ^{
        if (weakSelf == nil) { return; }
        __strong __typeof(weakSelf) self = weakSelf;
        
        if ([self.delegate respondsToSelector:@selector(OpenBiddingRewardInterstitialSuccess:)]) {
            [self.delegate OpenBiddingRewardInterstitialSuccess:core];
        }
    });
}

- (void)OpenBiddingRewardInterstitialAllFail:(OpenBiddingRewardInterstitial * _Null_unspecified)core {
    if (self.delegate == nil) { return; }
    
    __weak __typeof(self) weakSelf = self;
    dispatch_async(dispatch_get_main_queue(), ^{
        if (weakSelf == nil) { return; }
        __strong __typeof(weakSelf) self = weakSelf;
        
        if ([self.delegate respondsToSelector:@selector(OpenBiddingRewardInterstitialAllFail:)]) {
            [self.delegate OpenBiddingRewardInterstitialAllFail:core];
        }
    });
}

@end
