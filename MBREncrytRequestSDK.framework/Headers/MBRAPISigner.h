//
//  MBRAPISigner.h
//  MBRWalletNetworking
//
//  Created by sean on 2018/6/6.
//  Copyright © 2018 sean. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MBRAPISigner : NSObject


-(id)initWithPrivateKey:(NSString*)privateKeyPem;

-(NSData*)sign:(NSData*)content;
@end
