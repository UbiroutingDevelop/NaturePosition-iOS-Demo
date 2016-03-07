//
//  SHTKey.h
//  naturelib
//
//  Created by YangTao on on 15/5/26.
//  Copyright (c) 2015年 UbiRouting Inc. All rights reserved.
//
#define VALID_OK 0x01
#define VALID_FAIL 0x02
#define VALID_PENDING 0x03

@interface SHTKey : NSObject<NSURLConnectionDataDelegate>

@property (nonatomic) NSString * key;


- (instancetype)initWithKey: (NSString *)key;

- (void) validate;

- (int) valid;

@end
