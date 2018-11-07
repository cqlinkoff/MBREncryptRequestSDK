//
//  MBREncrytRequestManager.h
//  MBREncrytRequestSDK
//
//  Created by zhanbin on 2018/11/6.
//  Copyright © 2018年 linkoff. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MBREncrytRequestConfig.h"

@interface MBREncrytRequestManager : NSObject

@property (nonatomic, strong) MBREncrytRequestConfig* config;

/*
 *  返回单例对象
 *
 *  @return 返回单例对象
 */
+ (instancetype)shareManager;

@end
