//
//  BidmadARPMViewController.h
//  OpenBiddingHelper
//
//  Created by Seungsub Oh on 2022/09/28.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface BidmadARPMViewController : UIViewController

- (instancetype)initWithinventoryName:(NSString *)inventoryName
                           anchorDate:(NSDate *)anchorDate
                             impValue:(NSNumber *)impValue
                          impSubValue:(NSNumber *)impSubValue
                            eCPMValue:(NSNumber *)eCPMValue
                         eCPMSubValue:(NSNumber *)eCPMSubValue
                         revenueValue:(NSNumber *)revenueValue
                      revenueSubValue:(NSNumber *)revenueSubValue
                       weeklyECPMVaue:(NSString *)weeklyECPMVaue
                  monthlyRevenueValue:(NSString *)monthlyRevenueValue
                      inventoryZoneID:(NSString *)inventoryZoneID
                        inventoryType:(NSString *)inventoryType
                        mediationType:(NSString *)mediationType
                        publisherType:(NSString *)publisherType
                       networksInArea:(NSArray<NSString *> * _Nullable)networksInArea;

@end

NS_ASSUME_NONNULL_END
