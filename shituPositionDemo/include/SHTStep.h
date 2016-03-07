//
//  SHTStep.h
//  naturelib
//
//  Created by shitupublic on 15/5/8.
//  Copyright (c) 2015年 UbiRouting Inc. All rights reserved.
//

@interface SHTStep : NSObject

@property (nonatomic) NSTimeInterval duration;
@property (nonatomic) NSTimeInterval peakTime;
@property (nonatomic) float valley;
@property (nonatomic) float peak;
@property (nonatomic) BOOL step;

- (void) setDuration: (NSTimeInterval)duration PeakTime: (NSTimeInterval)peakTime Valley: (float)valley Peak: (float)peak;

@end

