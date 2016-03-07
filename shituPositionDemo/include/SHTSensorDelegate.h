//
//  SHTSensorDelegate.h
//  naturelib.framework
//
//  Created by shitupublic on 15/8/21.
//  Copyright (c) 2015年 ubirouting. All rights reserved.
//
#import <CoreLocation/CoreLocation.h>
#import <CoreMotion/CoreMotion.h>

@class CMDeviceMotion;

@protocol SHTSensorDelegate <NSObject>

@optional
- (void)didGotDeviceMotionData: (CMDeviceMotion *)motion OrError: (NSError *)error;
- (void)didGotHeadingData: (CLHeading *)heading;
- (void)didGotMagnetometerData: (CMMagnetometerData *)magneticData OrError: (NSError *)error;
- (void)didGotPedometerData:(CMPedometerData *)pedometerData OrError: (NSError *)error;
- (void)magnetometerFromDeviceMotionUnsupported;
- (void)magnetometerFromDeviceMotionUnreliable;
- (void)headingInfoUnreliable;
- (void)didGotAccelerometer:(CMAccelerometerData *)accData OrError: (NSError *)error;
- (void)didGotGyro: (CMGyroData *)gyroData OrError: (NSError *)error;

@end
