//
//  MBRAPIRequestBuilder.h
//  MBRWalletNetworking
//
//  Created by sean on 2018/6/6.
//  Copyright © 2018 sean. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MBRAPIRequest.h"
#import "MBRAPIRequestExecutor.h"
#import "MBRAPIEncryptor.h"
@interface MBRAPIRequestBuilder : NSObject

+(instancetype _Nonnull)appBuilder;

+(instancetype )appUpdateBuilder;

- (id<MBRAPIEncryptor>)encryptor;

-(instancetype _Nonnull)initWithMerchantId:(NSString* _Nonnull)merchantId WithApiVerison:(NSString* _Nonnull)apiVersion withEncryptor:(id<MBRAPIEncryptor> _Nonnull)encryptor;

-(MBRAPIRequest*)requestWithUrl:(NSString* _Nonnull)url withMethod:(NSString* _Nonnull)method withParameters:(NSDictionary* _Nonnull)parameters;

@end
