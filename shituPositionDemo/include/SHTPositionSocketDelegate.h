//
//  SHTPositionSocketDelegate.h
//  naturelib
//
//  Created by YangTao on on 15/6/8.
//  Copyright (c) 2015年 UbiRouting Inc. All rights reserved.
//
#import "SHTSocketDataType.h"

@protocol SHTPositionSocketDelegate <NSObject>

@optional

- (void)onGetHeaderReply:(dataonly)getData WithLength: (long)dataLength;

- (void)onGetHeartBeatReply: (unsigned char *)getData WithLength: (long)dataLength;

- (void)onGetCalcReply: (unsigned char *)getData WithLength: (long)dataLength;

- (void)onGetError: (NSException *)exception;

@end