//
//  BidmadNativeAdOriginalUIState.h
//  BidmadSDK
//
//  Created by 플랫폼-오승섭-맥북 on 2023/08/25.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface BidmadNativeAdOriginalUIState : NSObject

@property (nonatomic, strong) NSNumber * _Nullable callToActionButtonUserInteractionEnabled;
@property (nonatomic, strong) UIImage * _Nullable iconImage;
@property (nonatomic, strong) NSString * _Nullable title;
@property (nonatomic, strong) NSString * _Nullable body;
@property (nonatomic, strong) NSString * _Nullable callToActionTitle;

+ (BidmadNativeAdOriginalUIState * (^)(void))newState;

@end

NS_ASSUME_NONNULL_END
