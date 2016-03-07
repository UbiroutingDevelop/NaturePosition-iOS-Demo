//
//  SHTLocation.h
//  naturelib
//
//  Created by YangTao on on 15/5/13.
//  Copyright (c) 2015年 UbiRouting Inc. All rights reserved.
//


#define ERROR_FAILED_TO_GET_LOCATION_MANYTIMES 1003
#define ERROR_NO_DATA 1114
#define STATUS_FIRST_RELIABLE_POSITION 200
#define STATUS_START_LOCATE 400

@class SHTLocationParameters, SHTPosition;

@protocol SHTLocationRespondeDelegate <NSObject>

@required
//更新坐标
- (void) getLocation: (SHTPosition *) position;

/**
 * 更新状态
 */
- (void) getStatus: (int)status Message: (NSString *)message;

/**
 * 更新状态
 */
- (void) getAngle: (int) angle;

/**
 * 更新状态
 */
- (void) onError: (NSError *) error;
@end

@interface SHTLocation : NSObject

@property (nonatomic, weak) id<SHTLocationRespondeDelegate> delegate;

- (instancetype) initWithLocationParameters: (SHTLocationParameters *) parameters;

- (void)start;

- (void)stop;

+ (NSString *)sdkVersion;
@end
