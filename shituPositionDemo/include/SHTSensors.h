//
//  SHTSensors.h
//  naturelib
//
//  Created by YangTao on on 15/5/12.
//  Copyright (c) 2015年 UbiRouting Inc. All rights reserved.
//

#import "SHTSensorDelegate.h"


@interface SHTSensors : NSObject<CLLocationManagerDelegate>

@property (nonatomic) NSTimeInterval interval;
@property (nonatomic, weak) id<SHTSensorDelegate> delegate;

- (instancetype) initWithInterval: (NSTimeInterval) interval;

- (BOOL)registerMagnetometersSensor;

- (BOOL)registerCompass;

- (BOOL)registerDeviceMotionSensor;

- (BOOL)registerGyro;

- (BOOL)registerAccelerator;

- (BOOL)registerPedometer;

- (BOOL)supportFloorCounting;

- (BOOL)supportDistanceCounting;

- (void)start;

- (void)unregisterSensors;

- (void)stop;

@end