//
//  BidmadTestToolFloatingButton.h
//  OpenBiddingHelper
//
//  Created by Seungsub Oh on 2022/09/26.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@protocol FloatingButtonClickProtocol <NSObject>
- (void)floatingButtonClickWithButtonString:(NSString *)clickedButtonString;
@end

@interface BidmadTestToolFloatingButton : UIView;

@property (nonatomic, weak) id<FloatingButtonClickProtocol> _Nullable clickDelegate;
@property (nonatomic, strong) NSNumber *shouldShowARPMButton;
@property (nonatomic, strong) NSNumber *shouldShowTestToolButton;

@end

NS_ASSUME_NONNULL_END
