//
//  SHTTimerBeacon.h
//  naturelib.framework
//
//  Created by shitupublic on 15/10/15.
//  Copyright © 2015年 ubirouting. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SHTBeacon.h"

@protocol SHTTImerBeaconDelegate <NSObject>

@required
- (void) onGetBeaconsData:(NSMutableArray *)beacon;

@end

@interface SHTTimerBeacon : SHTBeacon
@property (nonatomic, weak) id<SHTTImerBeaconDelegate> delegate;
- (void) startScan;
@end
