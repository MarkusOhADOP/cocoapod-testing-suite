//
//  OpenBiddingFlutterNativeAdWidgetView.h
//  OpenBiddingHelper
//
//  Created by Seungsub Oh on 2023/01/11.
//

#import <UIKit/UIKit.h>

#import <Flutter/Flutter.h>

NS_ASSUME_NONNULL_BEGIN

@interface OpenBiddingFlutterNativeAdViewFactory : NSObject

- (instancetype)initWithRegistrar:(id<FlutterPluginRegistrar>)registrar layoutName:(NSString *)layoutName;

@property (nonatomic, strong) NSString *layoutName;

@end

NS_ASSUME_NONNULL_END
