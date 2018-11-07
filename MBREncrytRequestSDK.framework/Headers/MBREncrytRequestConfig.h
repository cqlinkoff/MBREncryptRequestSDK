//
//  MBREncrytRequestConfig.h
//  MBREncrytRequestSDK
//
//  Created by zhanbin on 2018/11/6.
//  Copyright © 2018年 linkoff. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MBREncrytRequestConfig : NSObject

/**
 * @abstract 语言码
 * @discussion 可选 默认值：zh_CN
 */
@property (nonatomic, copy, nullable) NSString* languageCode;

/**
 * @abstract 渠道号
 * @discussion 必填
 */
@property (nonatomic, copy, nonnull) NSString* channel;

/**
 * @abstract 私钥(平台分配)
 * @discussion 必填
 */
@property (nonatomic, copy, nonnull) NSString* privateKey;

/**
 * @abstract 公钥(平台分配)
 * @discussion 非必填（不填使用默认值）
 */
@property (nonatomic, copy, nonnull) NSString* publicKey;

/**
 * @abstract 商户id(平台分配)
 * @discussion 必填
 */
@property (nonatomic, copy, nonnull) NSString* merchantId;


/**
 * @abstract 推送Id
 * @discussion 可选
 */
@property (nonatomic, copy, nullable) NSString* jPushId;

@end
