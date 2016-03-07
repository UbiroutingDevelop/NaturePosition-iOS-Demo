//
//  SHTBeacon.h
//  naturelib.framework
//
//  Created by shitupublic on 15/10/14.
//  Copyright © 2015年 ubirouting. All rights reserved.
//

//
//  STIbeacon.h
//  iBeacon
//
//  Created by 刘涛 on 15/8/4.
//  Copyright (c) 2015年 ST. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreBluetooth/CoreBluetooth.h>

@protocol reloadData <NSObject>
@required
/**
 *  蓝牙信号刷新（每次收到信号都会执行一次）
 */
- (void)reloadDataPerArraydidDiscoverPeripheral:(CBPeripheral *)peripheral advertisementData:(NSDictionary *)advertisementData RSSI:(NSNumber *)RSSI;

@end

@interface SHTBeacon : NSObject<CBCentralManagerDelegate,CBPeripheralDelegate>

@property(strong,nonatomic)CBCentralManager *central;

// not thread-safe, when get object, you should implememnt synchronized block
@property(strong,nonatomic)NSMutableArray *ibeaconData;

@property(weak,nonatomic)id<reloadData> delegata;

@property(strong,nonatomic)NSMutableArray *name;

@property(strong,nonatomic)NSMutableArray *rssi;

@property(strong,nonatomic)NSMutableArray *uuid;

@property(strong,nonatomic)NSMutableArray *customName;

@property(strong,nonatomic)NSMutableArray *whiteList;

@property(strong,nonatomic)NSMutableArray *blackList;


/**
 *  持续搜索蓝牙信号
 */
- (void)searchBlueDeviceWithDelegate:(id<reloadData>)delegate;
/**
 *  停止搜索
 *
 *  @return 当前搜到设备数据
 */
- (void)stopSearch;

@end
