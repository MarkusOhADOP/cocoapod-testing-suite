//
//  BidmadAdData.h
//  BidmadSDK
//
//  Created by Seungsub Oh on 2022/07/26.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface BidmadAdmin : NSObject

@property (nonatomic, strong) NSString * _Nonnull ni;

- (instancetype _Nonnull)initWithNi:(NSString * _Nonnull)ni;

@end

@interface BidmadLabelService : NSObject

@property (nonatomic, strong) BidmadAdmin * _Nonnull admin;
@property (nonatomic, strong) NSString * _Nonnull isL;
@property (nonatomic, strong) NSString * _Nonnull isA;

- (instancetype _Nonnull)initWithAdmin:(BidmadAdmin * _Nonnull)admin isL:(NSString * _Nonnull)isL isA:(NSString * _Nonnull)isA;

@end

@interface BidmadAd : NSObject

@property (nonatomic, strong) NSString * _Nonnull adcode;
@property (nonatomic, strong) NSString * _Nonnull pubid;
@property (nonatomic, strong) NSString * _Nonnull passback;
@property (nonatomic, strong) NSString * _Nonnull adtype;
@property (nonatomic, strong) NSString * _Nonnull advidx;
@property (nonatomic, strong) NSString * _Nonnull areaidx;
@property (nonatomic, strong) NSString * _Nonnull order;
@property (nonatomic) int width;
@property (nonatomic) int height;
@property (nonatomic) float adweight;
@property (nonatomic) float advPrice;

+ (BidmadAd * _Nonnull)empty;

- (instancetype _Nonnull)initWithAdcode:(NSString * _Nonnull)adcode pubid:(NSString * _Nonnull)pubid passback:(NSString * _Nonnull)passback adtype:(NSString * _Nonnull)adtype advidx:(NSString * _Nonnull)advidx areaidx:(NSString * _Nonnull)areaidx order:(NSString *_Nonnull)order width:(int)width height:(int)height adweight:(float)adweight advPrice:(float)advPrice;

@end

@interface BidmadAdData : NSObject

@property (nonatomic, copy) NSDictionary<NSString *, BidmadAd *> * _Nonnull ads;
@property (nonatomic, copy) BidmadLabelService * _Nullable labelService;

+ (BidmadAdData * _Nonnull)empty;

- (instancetype _Nonnull)initWithAds:(NSDictionary<NSString *, BidmadAd *> * _Nonnull)ads labelService:(BidmadLabelService * _Nullable)labelService;

@end

NS_ASSUME_NONNULL_END
