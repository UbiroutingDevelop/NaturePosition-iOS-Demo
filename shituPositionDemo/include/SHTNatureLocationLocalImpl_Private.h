//
//  SHTLocation_Private.h
//  naturelib.framework
//
//  Created by YangTao on on 15/7/27.
//  Copyright (c) 2015年 ubirouting. All rights reserved.
//
#import "SHTOrientation.h"
#import "SHTQueueList.h"
#import "SHTSteper.h"
#import "SHTSensors.h"
#import "SHTKey_Private.h"
#import "SHTSensorDelegate.h"
#import "SHTStepDelegate.h"
#import "SHTNatureLocationLocalImpl.h"
#import "SHTTimerBeacon.h"

@interface SHTNatureLocationLocalImpl()<SHTSensorDelegate, SHTStepDelegate, SHTTImerBeaconDelegate>
{
    @protected
    
    /**
     * 控制网络错误提示，是否仅显示一次
     */
    BOOL _networkErrorHaveShown;
    
    /**
     * 用来控制是否使用LocationManager的传感器，如果置为true，则不启用locationManager
     */
    BOOL _useMagThanHeading;
    
    /**
     * 如下三个变量是用来存储全局的LocationManager得到的mx，my，mz
     */
    volatile float _headingMx;
    volatile float _headingMy;
    volatile float _headingMz;
    volatile double _pressure;
    
    /**
     * Indicate the
     */
    volatile NSTimeInterval _lastOKMatchTime;
    
    /**
     *variables to set support the pedomator
     */
    BOOL _supprtPedomator;
    /**
     * variables to store the last match status of position
     */
    volatile int _matchStatus;
    
    volatile BOOL _startCollectData;
    
    /**
     * position got from server
     */
    volatile SHTPosition * _position;
    
    /**
     * thread to run
     */
    NSThread * _runningThread;
    
    /**
     * average pressure
     */
    volatile float _averagePressure;
    
    /**
     * average pitch
     */
    volatile float _averagePitch;
    
    /**
     * step count since the relocate invocation.
     */
    int _step;
    
    /*
     * record the numOfSteps in the first step callbacks
     */
    int _firstStep;
    
    /*
     * record the numOfSteps in the last step callbacks
     */
    int _lastStep;
    
    /**
     * step start time
     */
    volatile NSTimeInterval _stepStartTime;
    
    // used for controlling the start of WALKING Detection.
    volatile NSTimeInterval _stepFirstDetectTime;
    
    /*
     * variable to count the times of walk stop status
     */
    volatile int _stopWalkingCount;
    
    /*
     * variable to count the times of walk
     */
    volatile int _walkintCount;
    
    /*
     * variable to store the walk status
     */
    volatile short _walkStatus;
    
    /**
     * store the step position x
     */
    volatile float _stepX;
    
    /**
     * store the step position y
     */
    volatile float _stepY;
    
    NSTimeInterval _lastStepTime;
    
    /*
     * the step position will be caculated based on the value of _stepBasePoint.
     * _stepBasePoint will be updated when OK_MATCH in Handler, or the step() function.
     */
    volatile SHTPosition * _stepBasePoint;
    
    /*
     * parameter that count the times of OK_MATCH of each positioning.
     * NOTE:
     * 1. The _okMatchTimes will not add to itself until the _startToLocate becoming YES, and current positioning status is OK_MATCH or WALK_MATCH;
     * 2. _okMatchTimes will be reset to 0 after invocation of relocate().
     */
    volatile int _okMatchTimes;
    
    /*
     * Similar to _okMatchTimes.
     * The difference is: _okMatchTimesNoMatter will increment only if the current positioning status is OK_MATCH, while _okMatchTimes will consider
     * the status of _startToLocate variable. Also this value will be reset to 0 after invocation of relocate().
     */
    volatile int _okMatchTimesNoMatter;
    
    volatile int _noMatchTimes;
    
    int _sensorTimes;
    
    /**
     * store the orientation of the phone
     */
    volatile SHTOrientation _orientation;
    
    /**
     * the first time rule has been set to positive
     */
    BOOL _knowInitPos;
    
    volatile int _rollStatus;
    
    volatile int _rollCount;
    
    volatile int _rollStableCount;
    
    volatile int _rollUnstableCount;
    
    int _handlerStatus;
    
    volatile BOOL _useOtherAdjust;
    
    int _angleTimes;
    
    int _magSensorTimes;
    
    volatile int _findTimes;
    
    NSTimeInterval _lastTimeMagSensorTimes ;
    
    BOOL _firstDataEnough;
    
    volatile int _currentFloor;
    
    /**
     * variable to indicate whether the sensor data is enough, so the running loop will start to send the data to socket
     */
    volatile int _readIndex;
    
    volatile SHTQueueList * _magQueue;
    
    BOOL _run;
    
    // for notify the status and message to main thread
    int _statusInt;
    NSString * _statusString;
    
    // for ibeacon use
    unsigned char * _beacon;
    unsigned int _beaconNum;
    NSLock * _beaconDataLock;
    SHTTimerBeacon * _beaconManager;
    
    
}

@property (nonatomic) SHTSensors * sensors;
@property (nonatomic) SHTSteper * steper;
@property (nonatomic) SHTKey * key;

-(SHTPosition *)caculateWithX: (short *)xPt Y: (short *)yPt Z: (short *)zPt Azimuth: (float *)azimuthPt Pressure: (float)avgPressure Pitch: (float)avgPitch Roll: (float)roll Useonewaymatch: (BOOL) useOnewayMatch WithSize: (int) sz AndStepX: (float)stepX StepY: (float)stepY;

- (void) heartbeat;

- (void) connect;

- (void) reconnect;



@end
