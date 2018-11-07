//
//  MBRAPIEncryptor.h
//  MBRWalletNetworking
//
//  Created by sean on 2018/6/6.
//  Copyright © 2018 sean. All rights reserved.
//

#import <Foundation/Foundation.h>

@class MBRAPIEncryptedResponse;

@interface MBRAPIEncryptResult : NSObject

/**
 签名结果，BASE64
 **/
@property (nonatomic,copy)  NSString*   signature;

/**
 加密结果,BASE64
 **/
@property (nonatomic,copy)  NSString*   cipher;

/**
 加密向量,BASE64
 **/
@property (nonatomic,copy)  NSString* iv;

/**
 密钥密文数据,BASE64
 **/
@property(nonatomic,copy)   NSString*   key;

@end

@protocol MBRAPIEncryptor <NSObject>

-(MBRAPIEncryptResult*)encrypt:(NSData*)plainData;
-(NSData*)decrypt:(MBRAPIEncryptedResponse*)encryptedResponse;

@end


@interface MBRAPIDefaultEncryptor : NSObject<MBRAPIEncryptor>

-(id)initWithPrivateKey:(NSString*)privateKeyPemForSign andServerPublicKey:(NSString*)publicKeyPemForEncrypt;

@end
