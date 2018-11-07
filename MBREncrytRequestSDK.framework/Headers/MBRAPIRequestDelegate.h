//
//  MBRAPIRequestDelegate.h
//  KAAReward
//
//  Created by zhanbin on 2018/8/19.
//  Copyright © 2018年 mbr. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AFNetworking.h"

@protocol MBRAPIRequestDelegate <NSObject>

- (void)willRequest:(AFHTTPSessionManager *)sessionManager;

@end
