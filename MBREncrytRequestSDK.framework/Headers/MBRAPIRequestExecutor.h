//
//  MBRAPIRequestExecutor.h
//  MBRWalletNetworking
//
//  Created by sean on 2018/6/6.
//  Copyright © 2018 sean. All rights reserved.
//

#import <Foundation/Foundation.h>
@class MBRAPIRequest;

@protocol MBRAPIRequestExecutor <NSObject>

-(void) post:(MBRAPIRequest* _Nonnull)request success:(void (^_Nonnull)(NSURLSessionDataTask * _Nonnull, id _Nullable))success
     failure:(void (^_Nonnull)(NSURLSessionDataTask * _Nullable, NSError * _Nonnull))failure;

@end

@interface MBRAPIRequestAFExecutor<MBRAPIRequestExecutor> : NSObject

@end
