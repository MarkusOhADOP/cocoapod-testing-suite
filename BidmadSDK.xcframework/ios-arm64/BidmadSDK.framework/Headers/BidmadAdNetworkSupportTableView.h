//
//  BidmadAdNetworkSupportTableView.h
//  OpenBiddingHelper
//
//  Created by Seungsub Oh on 2022/08/31.
//

#import <UIKit/UIKit.h>
#import "BidmadTestTool.h"

NS_ASSUME_NONNULL_BEGIN

@protocol BidmadAdNetworkSupportTableViewSelection

- (void)didSelectOnRowIndex:(NSInteger)rowIndex networkName:(NSString *)networkName;

@end

@interface BidmadAdNetworkSupportTableView : UITableView <UITableViewDelegate, UITableViewDataSource>

@property (nonatomic, weak) id<BidmadAdNetworkSupportTableViewSelection> selectionDelegate;
- (instancetype)initWithNetworkNames:(NSArray<NSString *> *)networkNames networkVersions:(NSArray<NSString *> *)networkVersions;

@end

NS_ASSUME_NONNULL_END
