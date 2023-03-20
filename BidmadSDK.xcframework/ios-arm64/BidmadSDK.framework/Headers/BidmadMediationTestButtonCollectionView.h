//
//  BidmadCollectionView.h
//  BidmadSDK
//
//  Created by Seungsub Oh on 2023/03/03.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface BidmadMediationTestButtonCollectionView : UIView

- (instancetype)initWithButtonAction:(void (^)(NSString *cellTitle))buttonAction;
- (void)updateCellTitles:(NSArray<NSString *> *)newCellTitles;

@end

NS_ASSUME_NONNULL_END
