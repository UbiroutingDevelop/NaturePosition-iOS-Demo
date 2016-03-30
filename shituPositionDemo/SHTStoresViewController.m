//
//  SHTStoresViewController.m
//  FraTEst
//
//  Created by publicshitu on 16/1/15.
//  Copyright © 2016年 ubirouting. All rights reserved.
//

#import "SHTStoresViewController.h"
#import "SHTLocationParameters.h"
#import "SHTStore.h"
#import "SHTStoreDatas.h"
#import "DemoKey.h"


#import "SHTLocationViewController.h"
@interface SHTStoresViewController ()<SHTStoreDatasDelegate,UITableViewDelegate,UITableViewDataSource>
@property(nonatomic,strong)NSMutableArray *stores;

@end

@implementation SHTStoresViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    self.view.backgroundColor = [UIColor whiteColor];
    
    //key:需要在识途云申请
    SHTStoreDatas * datas = [[SHTStoreDatas alloc]initWithKey:KEY];
    datas.delegate = self;
    [datas fetchData];
}
- (void)onGetDatas:(NSArray *)datas
{
    //获取数据，每一个均为一个SHTStore对象
    _stores = [NSMutableArray arrayWithArray:datas];
    NSLog(@"%@", datas);
    [self showStores];
}

- (void)onFailed:(NSException *)exception
{
    //handle the error
}

-(void )showStores
{
    UITableView *tableView = [[UITableView alloc]initWithFrame:CGRectMake(0, 64, self.view.frame.size.width, self.view.frame.size.height) style:UITableViewStylePlain];
    tableView.delegate = self;
    tableView.dataSource = self;
    [self.view addSubview:tableView];
    
}
-(NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section
{
    return _stores.count;
}
-(CGFloat)tableView:(UITableView *)tableView heightForRowAtIndexPath:(NSIndexPath *)indexPath{
    return 100.0f;
}
-(UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath
{
    
    static NSString *identifier = @"cellIdentifier";
    UITableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:identifier];
    if (!cell) {
        
        cell = [[UITableViewCell alloc]initWithStyle:UITableViewCellStyleDefault reuseIdentifier:identifier];
    }
    
    SHTStore * store = (SHTStore *)_stores[indexPath.row];
    cell.textLabel.text = [NSString stringWithFormat:@"name:%@ id:%ld",store.name, store.idd];
    return cell;
}
-(void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath{
    
    SHTLocationViewController *locationVc = [[SHTLocationViewController alloc]init];
    SHTStore *store = _stores[indexPath.row];
    locationVc.store = store;
    [self.navigationController pushViewController:locationVc animated:YES];
    
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
