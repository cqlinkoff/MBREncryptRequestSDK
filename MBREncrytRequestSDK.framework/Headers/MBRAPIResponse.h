//
//  MBRAPIResponse.h
//  MBRWalletNetworking
//
//  Created by sean on 2018/6/6.
//  Copyright © 2018 sean. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MBRAPIEncryptor.h"
@interface MBRAPIResponse : NSObject

@property(nonatomic,copy)      NSString* _Nonnull method;
@property(nonatomic,copy)      NSString* _Nonnull message;
@property(nonatomic,assign)    NSString* _Nonnull code;;
@property(nonatomic,strong)    id _Nonnull data;

@end


@interface MBRAPIEncryptedResponse : NSObject

@property(nonatomic,copy)   NSString* _Nonnull iv;
@property(nonatomic,copy)   NSString* _Nonnull key;
@property(nonatomic,copy)   NSString* _Nonnull cipher;
@property(nonatomic,copy)   NSString* _Nonnull signature;

-(id _Nonnull )initWithJSON:(NSDictionary *_Nonnull)json;

-(MBRAPIResponse*_Nullable)decrypt:(id<MBRAPIEncryptor>)encryptor;

@end

