//
//  LogManager.h
//  AdopPrebidSdk
//
//  Created by Kenneth on 2022/08/03.
//

@import Foundation;
@import UIKit;
//@import PrebidMobile;
//#import "AdopPrebid.h"

@interface LogManager : NSObject
+ (void)sendLog:(NSDictionary *)data type:(NSString *)type configId:(NSString *)configId;

@end
