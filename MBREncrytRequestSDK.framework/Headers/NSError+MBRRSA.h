//
//  NSError+MBRRSA.h
//  MBRWalletNetworking
//
//  Created by sean on 2018/6/6.
//  Copyright © 2018 sean. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSError (MBRRSA)


+(NSError*)rsaErrorWithDescription:(NSString*)description;

+(NSError*)rsaErrorWithOSStatus:(OSStatus)status;

@end
