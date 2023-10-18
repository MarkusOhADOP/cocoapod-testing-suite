//
//  OpenBiddingFlutterBannerRefined.h
//  OpenBiddingHelper
//
//  Created by Seungsub Oh on 2023/05/24.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface OpenBiddingFlutterBannerRefined : NSObject

- (instancetype _Nonnull)initBannerWithRegistrar:(id)registrar channelName:(NSString *)chanNm;

@property (strong, nonatomic) id flutterChannel;

@end

// Flutter view manager class for Banner Ad ↓

@interface OpenBiddingFlutterBannerRefinedPlatformView : NSObject

- (instancetype _Nonnull)initWithKey:(NSString * _Nonnull)key;
@property (nonatomic, strong) NSString *key;

@end

@interface OpenBiddingFlutterBannerRefinedFactory : NSObject

@end

NS_ASSUME_NONNULL_END
