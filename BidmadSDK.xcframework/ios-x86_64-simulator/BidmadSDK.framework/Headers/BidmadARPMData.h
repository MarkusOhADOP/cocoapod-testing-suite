//
//  BidmadARPMData.h
//  BidmadSDK
//
//  Created by Seungsub Oh on 2022/09/26.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface BidmadECPMRevInfo : NSObject

@property (nonatomic, strong) NSString *ecpm;
@property (nonatomic, strong) NSString *rev;

- (instancetype)initEcpm:(NSString *)ecpm
                     rev:(NSString *)rev;

@end

@interface BidmadChangeInfo : NSObject

@property (nonatomic, strong) NSNumber *imp;
@property (nonatomic, strong) NSNumber *impValue;
@property (nonatomic, strong) NSNumber *ecpm;
@property (nonatomic, strong) NSNumber *ecpmValue;
@property (nonatomic, strong) NSNumber *rev;
@property (nonatomic, strong) NSNumber *revValue;
@property (nonatomic, strong) NSString *region;

- (instancetype)initImp:(NSNumber *)imp
               impValue:(NSNumber *)impValue
                   ecpm:(NSNumber *)ecpm
              ecpmValue:(NSNumber *)ecpmValue
                    rev:(NSNumber *)rev
               revValue:(NSNumber *)revValue
                 region:(NSString *)region;

@end

@interface BidmadAreaInfo : NSObject

@property (nonatomic, strong) NSString *areaIdx;
@property (nonatomic, strong) NSString *areaNm;
@property (nonatomic, strong) NSString *cfsSite;
@property (nonatomic, strong) NSString *type;
@property (nonatomic, strong) NSString *ciTier;
@property (nonatomic, strong) NSString *ciSiteNm;
@property (nonatomic, strong) NSString *siteNm;
@property (nonatomic, strong) NSString *opType;
@property (nonatomic, strong) NSArray<NSString *> *adOrder;
@property (nonatomic, strong) NSArray<NSString *> *adEcpm;
@property (nonatomic, strong) NSArray<NSString *> *adFill;

- (instancetype)initWithArea_idx:(NSString *)areaIdx
                         area_nm:(NSString *)areaNm
                        cfs_site:(NSString *)cfsSite
                            type:(NSString *)type
                         ci_tier:(NSString *)ciTier
                      ci_site_nm:(NSString *)ciSiteNm
                         site_nm:(NSString *)siteNm
                         op_type:(NSString *)opType
                        ad_order:(NSArray<NSString *> *)adOrder
                         ad_ecpm:(NSArray<NSString *> *)adEcpm
                         ad_fill:(NSArray<NSString *> *)adFill;

@end

@interface BidmadARPMData : NSObject

@property (nonatomic, strong) NSString *status;
@property (nonatomic, strong) BidmadECPMRevInfo *ecpmRevInfo;
@property (nonatomic, strong) BidmadChangeInfo *changeInfo;
@property (nonatomic, strong) BidmadAreaInfo *areaInfo;

- (instancetype)initWithStatus:(NSString *)status
                   ecpmRevInfo:(BidmadECPMRevInfo *)ecpmRevInfo
                    changeInfo:(BidmadChangeInfo *)changeInfo
                      areaInfo:(BidmadAreaInfo *)areaInfo;

@end

NS_ASSUME_NONNULL_END
