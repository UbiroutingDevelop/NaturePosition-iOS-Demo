//
//  SHTNatureBundle.h
//  naturelib
//
//  Created by shitupublic on 15/5/12.
//  Copyright (c) 2015年 shitupublic. All rights reserved.
//
#import "SHTByteable.h"

@interface SHTNatureBundle : NSObject<SHTByteable>
{
@private
    short * _mxArrayPt;
    short * _myArrayPt;
    short * _mzArrayPt;
    float * _azmuthArrayPt;
    int _magDataLength;
    float _pressure;
    float _pitch;
    float _roll;
    float _stepX;
    float _stepY;
}

- (instancetype) initWithMx: (short *)mxArray My: (short *)myArray Mz: (short *)mzArray Azimuth: (float *)azimuthArray WithLength: (int)dataLength AndPressure: (float)pressure Pitch: (float)pitch Roll: (float)roll StepX: (float)stepX StepY: (float)stepY;

@end
