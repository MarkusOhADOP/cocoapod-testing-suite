//
//  BidmadAdAreasForPublisherViewController.h
//  OpenBiddingHelper
//
//  Created by Seungsub Oh on 2022/09/28.
//

#import <UIKit/UIKit.h>
#import "BidmadAdAreasForPublisher.h"

NS_ASSUME_NONNULL_BEGIN

@interface BidmadAdAreasForPublisherViewController : UIViewController

- (instancetype)initWithAdCollection:(NSArray<BidmadAdAreaInfo *> *)adCollection;

@end

NS_ASSUME_NONNULL_END
