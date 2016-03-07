//
//  SHTPositionSocket.h
//  naturelib
//
//  Created by shitupublic on 15/5/11.
//  Copyright (c) 2015年 UbiRouting Inc. All rights reserved.
//


#import "SHTSocket.h"
#import "SHTPositionSocketDelegate.h"

@class SHTPositionHeader, SHTSocketDataBundle;


@interface SHTPositionSocket : SHTSocket

@property (nonatomic, assign) SHTPositionHeader * header;

@property (nonatomic, weak) id<SHTPositionSocketDelegate> delegate;

- (instancetype) initWithAddress:(NSString *)address Port:(int)port Header: (SHTPositionHeader *) header;

- (long) sendHeaderAndRead;

- (long) sendHeartBeatAndRead;

- (long) sendAndReadWithCalcData:(SHTSocketDataBundle *)natureBundle;

- (unsigned char * )getReadCacheAndGetReadLength: (long *)readLength;

@end

