//
//  SHTLocationViewController.m
//  FraTEst
//
//  Created by publicshitu on 16/1/15.
//  Copyright © 2016年 ubirouting. All rights reserved.
//

#import "SHTLocationViewController.h"

#import "SHTLocationParameters.h"
#import "SHTPosition.h"
#import "SHTLocationManager.h"
#import "DemoKey.h"

@interface SHTLocationViewController ()<SHTLocationDelegate>
@property(nonatomic,strong)SHTLocationManager *locationManager;
@end

@implementation SHTLocationViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    [self startLocate];
    self.view.backgroundColor = [UIColor whiteColor];
    // Do any additional setup after loading the view.
}
//启动定位
- (void)startLocate
{
    //定义初始位置。若使用ibeacon混合定位，或纯iBeacon定位，不需要指定初始位置，即x,y均传入-1即可
    struct IndoorPosition initPosition;
    initPosition.x = -1;
    initPosition.y = -1;
    initPosition.floor = 1;
    NSLog(@"store is %@", _store);
    
    //初始化定位参数， storeTest为2.2节中获取的任意store
   SHTLocationParameters * parameters = [[SHTLocationParameters alloc]initWithStore:_store AndInitPosition:initPosition AndKey:KEY WithLocType:LOCTYPE_MAG_ONLY];

    //实例化一个locationManager对象
    _locationManager = [SHTLocationManager buildLocationManagerBy:parameters];

    //设置代理
    _locationManager.delegate = self;
    
    //开启定位，定位结果将以代理的形式返回
    [self.locationManager start];
}
// 实现代理方法

// 在此更新坐标
- (void)getLocation:(SHTPosition *)position
{
    // 在这里更新坐标
    // position.x和position.y
    NSLog(@"position is %@", position);
}

- (void)getAngle:(int)angle
{
    //在这里更新角度（指南针）
}

- (void)onSwitchFloor:(int)area{
    
}

- (void)getStatus:(int)status Message:(NSString *)message
{
    //再这里获取状态信息。
    
    if (status == STATUS_FIRST_RELIABLE_POSITION) {

    }
    //识途地磁定位的特点是需要用户行走一段距离，供服务器计算特征，只有当获取到的status==STATUS_FIRST_RELIABLE_POSITION时，该位置才具有较高的可靠性，之前的位置坐标均可丢弃。在获得上述状态时，需提示用户继续行走；
    
    NSLog(@"getStatus %d, %@", status, message);
}
-(void)onNetProblem:(NSException *)exception
{
    NSLog(@"netproblem");
}
-(void)onError:(NSError *)error
{
    NSLog(@"error is %@", error);
}
-(void)onReconnectOK
{
    
}
- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

/*
#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
}
*/

@end
