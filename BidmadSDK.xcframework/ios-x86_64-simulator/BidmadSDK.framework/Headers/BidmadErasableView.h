//
//  BidmadErasableView.h
//  BidmadSDK
//
//  Created by 플랫폼-오승섭-맥북 on 6/7/24.
//

#import <UIKit/UIKit.h>

FOUNDATION_EXPORT NSInteger const BidmadErasableViewTag;

NS_ASSUME_NONNULL_BEGIN

@interface BidmadErasableView : UIView

- (void)matchToSuperview:(UIView *)superview;
- (void)centerSubview:(UIView *)subview
         subviewWidth:(CGFloat)width
        subviewHeight:(CGFloat)height;

@end

NS_ASSUME_NONNULL_END

