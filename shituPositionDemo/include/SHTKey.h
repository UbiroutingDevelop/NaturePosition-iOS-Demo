//
//  SHTKey.h
//  naturelib
//
//  Created by shitupublic on 15/5/26.
//  Copyright (c) 2015年 shitupublic. All rights reserved.
//
const int VALID_OK = 0x01;
const int VALID_FAIL = 0x02;
const int VALID_PENDING = 0x03;

@interface SHTKey : NSObject<NSURLConnectionDataDelegate>

@property (nonatomic) NSString * key;
@property (nonatomic) NSString * bundleIdentifier;

- (instancetype)initWithKey: (NSString *)key;

- (void) validate;

- (int) valid;

@end
