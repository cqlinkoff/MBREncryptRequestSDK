//
//  MBRAPIRequest.h
//  MBRWalletNetworking
//
//  Created by sean on 2018/6/6.
//  Copyright © 2018 sean. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MBRAPIEncryptor.h"
#import "MBRAPIRequestExecutor.h"
#import "MBRAPIRequestDelegate.h"

extern NSString* _Nonnull const MBRAPIRequestHeaderFiledName;

@interface MBRAPIRequestHeader : NSObject

@property (nonatomic,copy)  NSString* _Nonnull  merchantId;
//默认RSA
@property (nonatomic,copy)  NSString* _Nonnull  signType;
//默认UTF-8
@property (nonatomic,copy)  NSString* _Nonnull  charset;

@property (nonatomic,copy)  NSString* _Nonnull  timestamp;
@property (nonatomic,copy)  NSString* _Nonnull  signature;

@property(nonatomic,copy,readonly)   NSString* _Nonnull  serializition;

@property(nonatomic,copy)   NSString* _Nonnull  apiVersion;
@property(nonatomic,copy)   NSString* _Nonnull  method;
@property(nonatomic,copy)   NSDictionary* _Nonnull  device;

-(void)serialize;

-(void)updateTimestamp;

@end


@interface MBRAPIRequestBody : NSObject

@property(nonatomic,copy)   NSDictionary* _Nonnull  parameters;

@property(nonatomic,copy,readonly)   NSString* _Nonnull  serializition;

-(void)serialize;

@end

@interface MBRAPIRequest : NSObject

-(instancetype _Nonnull)initWithUrl:(NSString* _Nonnull)url withHeader:(MBRAPIRequestHeader* _Nonnull)header withBody:(MBRAPIRequestBody* _Nonnull)body withExecutor:(id<MBRAPIRequestExecutor> _Nonnull) executor withEncryptor:(id<MBRAPIEncryptor> _Nonnull) encryptor;

@property(nonatomic,strong,readonly) MBRAPIRequestHeader* _Nonnull   header;
@property(nonatomic,strong,readonly) MBRAPIRequestBody* _Nonnull     body;

@property(nonatomic,strong,readonly) MBRAPIEncryptResult* _Nonnull encryptedResult;
@property(nonatomic,strong,readonly) NSMutableDictionary* _Nonnull postBody;

@property(nonatomic,assign,readonly) id<MBRAPIRequestExecutor> _Nonnull   executor;
@property(nonatomic,assign,readonly) id<MBRAPIEncryptor> _Nonnull encryptor;

@property (nonatomic, strong) id<MBRAPIRequestDelegate> delegate;

@property(nonatomic,copy)   NSString* _Nonnull  url;

-(void)serialize;

-(void)post:(void (^_Nonnull)(NSString* _Nullable message,id _Nonnull data))success
    failure:(void (^_Nonnull)(NSString* _Nullable message,NSString *code))failure;

@end
