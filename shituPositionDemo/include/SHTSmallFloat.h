//
//  FloatEncode.h
//  naturelib
//
//  Created by YangTao on on 15/4/29.
//  Copyright (c) 2015年 UbiRouting Inc. All rights reserved.
//

@interface SHTSmallFloat : NSObject

@property (nonatomic) float floatValue;
@property (nonatomic) short shortValue;

- (instancetype)initWithFloat:(float)floatValue;
- (instancetype)initWithShort:(short)shortValue;

// only use for float between -127 ~ 127
+ (short) toShortWithSmallFloat: (float) floatValue;

// only use for nagative float between 0 ~ -255
+ (short) toShortWithSmallNagativeFloat: (float)floatValue;

@end