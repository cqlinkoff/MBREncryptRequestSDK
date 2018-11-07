//
//  MBRRSAKey.h
//  MBRWalletNetworking
//
//  Created by sean on 2018/6/6.
//  Copyright © 2018 sean. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MBRRSAKey : NSObject


#pragma mark - PEM格式
+ (SecKeyRef)privateKeyFromPem:(NSString *)privateKey ifError:(NSError **)error;
+ (SecKeyRef)publicKeyFromPem:(NSString *)publicKey ifError:(NSError **)error;

+ (SecKeyRef)privateKeyFromPemWithNoHeaderAndFooter:(NSString *)privateKey ifError:(NSError **)error;
+ (SecKeyRef)publicKeyFromPemWithNoHeaderAndFooter:(NSString *)publicKey ifError:(NSError **)error;

#pragma makr - DER格式
+ (SecKeyRef)publickeyFromDer:(NSData*)data ifError:(NSError **)error;

@end
