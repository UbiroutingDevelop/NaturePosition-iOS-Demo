//
//  SHTPoistion_Private.h
//  naturelib.framework
//
//  Created by shitupublic on 15/8/21.
//  Copyright (c) 2015年 ubirouting. All rights reserved.
//
#import "SHTPosition.h"
#import "SHTByteable.h"

#define LOC_SOURCE_STEP 0x01
#define LOC_SOURCE_SERVER_MAG 0x02


@interface SHTPosition()
@property (nonatomic) int rule;
@property (nonatomic) int status;
@property (nonatomic) float distance;
@property (nonatomic) int serverAngle;
@property (nonatomic) short source;

- (instancetype) initWithPositionBytes:(unsigned char[]) byteArray Size:(long)arraySize;
- (instancetype) initWithX:(float)x Y:(float)y Rule:(int)rule Area:(short)area Distance:(float)distance Status:(int)status;
- (BOOL)isOK;
- (BOOL)isDiscard;
- (BOOL)isStep;
- (BOOL)isNoMatch;
- (BOOL)noData;
- (BOOL)isServerBusy;
- (NSString *)debugInfo;

@end