//
//  ATOMImageManager.h
//  BidmadAdapterFNC
//
//  Created by ADOP_Mac on 2022/07/06.
//

#pragma clang diagnostic ignored "-Wobjc-property-no-attribute"

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface ATOMImageManager : NSObject

+ (NSString * _Nonnull)xMarkImage;
+ (NSString * _Nonnull)speakerSlashImage;
+ (NSString * _Nonnull)speakerWaveImage;
+ (NSString * _Nonnull)redeemIconImage;
+ (NSString * _Nonnull)whiteHalfTransparentImage;
+ (NSString * _Nonnull)adopLogo;

+ (NSString * _Nonnull)fixedBase64FormatWith:(NSString * _Nonnull)string;

+ (UIImage * _Nonnull)getXMarkImage;
+ (UIImage * _Nonnull)getSpeakerSlashImage;
+ (UIImage * _Nonnull)getSpeakerWaveImage;
+ (UIImage * _Nonnull)getRedeemIconImage;
+ (UIImage * _Nonnull)getWhiteHalfTransparentImage;
+ (UIImage * _Nonnull)getAdopLogoImage;

@end

NS_ASSUME_NONNULL_END
