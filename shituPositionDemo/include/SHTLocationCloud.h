//
//  SHTLocationCloud.h
//  naturelib
//
//  Created by YangTao on on 15/6/15.
//  Copyright (c) 2015年 UbiRouting Inc. All rights reserved.
//
#import "SHTPositionSocketDelegate.h"
#import "SHTLocation.h"

#define ERROR_NETWORK_CONNECTED_FAILED 0x01;
#define ERROR_NETWORK_RECONNECT_FAILED 0x02;

@protocol SHTLocationCloudDelegate <NSObject>
/**
 * 当网络错误时，会触发
 */
- (void)onNetProblem:(NSException *) exception;

/**
 * 当网络重新链接成功触发
 */
- (void)onReconnectOK;
@end

@interface SHTLocationCloud : SHTLocation
/**
 * 定位时，若发生网络错误，则回调该代理中的onNetProblem方法；若网络重新恢复，则会回调onReconnectOK.
 */
@property (nonatomic, weak) id<SHTLocationCloudDelegate> netDelegate;
@end
