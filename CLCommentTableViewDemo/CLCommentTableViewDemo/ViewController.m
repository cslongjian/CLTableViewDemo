//
//  ViewController.m
//  CLCommentTableViewDemo
//
//  Created by Supwin_mbp002 on 16/1/18.
//  Copyright © 2016年 chenlongjian. All rights reserved.
//

#import "ViewController.h"
#import "CommentCellTableViewCell.h"
#import "UILabel+StringFrame.h"

@interface ViewController ()<UITableViewDelegate,UITableViewDataSource>
@property(nonatomic, strong) UITableView *mytalbeview;
@property(nonatomic, strong) NSMutableArray *array;

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    
    self.mytalbeview = [[UITableView alloc] initWithFrame:CGRectMake(0, 0, CGRectGetWidth(self.view.frame), CGRectGetHeight(self.view.frame))];
    self.mytalbeview.delegate = self;
    self.mytalbeview.dataSource = self;
    

//    [self.mytalbeview registerNib:[UINib nibWithNibName:@"CommentCellTableViewCell" bundle:nil] forCellReuseIdentifier:@"cell"];
    
    [self.mytalbeview registerClass:[CommentCellTableViewCell class] forCellReuseIdentifier:@"cell"];
    
    self.array = [NSMutableArray array];
    
    [self.array addObject:@"111111沙鲁  克了就开始的减肥啦据了解"];
    [self.array addObject:@"2222222沙鲁akjkalskd克了就开始的减肥啦据了解"];
    [self.array addObject:@"3333333333沙加拉加斯垃圾分类刷卡减肥可垃圾是考虑到放假啊；卡了就说立刻；地方接收打了卡；积分；卡上金额我我够妓女啊都 鲁克了就开始的减肥啦据了解"];
    [self.array addObject:@"4kjflkjj沙解"];
    [self.array addObject:@"555555555555沙鲁克了就开始的减肥阿卡搜到了；发生考虑到放假了凯撒减肥的脸孔啦据了解"];
    
    [self.view addSubview:self.mytalbeview];
    
    
    UILabel *label = [UILabel new];
    label.backgroundColor = [UIColor whiteColor];
    
    // label获取字符串
    label.text = self.array[2];
    
    // label获取字体
    label.font = [UIFont fontWithName:nil size:14];
    
    label.numberOfLines = 0;
    
    // 根据获取到的字符串以及字体计算label需要的size
    CGSize size = [label boundingRectWithSize:CGSizeMake(320, MAXFLOAT)];
    
    NSLog(@"宽度：%f,高度：%f",size.width,size.height);
    
    UIButton *test = [[UIButton alloc]init];
    test.frame = CGRectMake(0, 50, size.width, size.height+20);
    test.backgroundColor = [UIColor blueColor];
    test.titleLabel.numberOfLines = 0;
    [test setFont: [UIFont systemFontOfSize: 14.0]];
    [test setTitle:self.array[2] forState: UIControlStateNormal];
    
//    [self.view addSubview:test];
    
    
    
    
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


-(CGFloat)tableView:(UITableView *)tableView heightForRowAtIndexPath:(NSIndexPath *)indexPath{
    
    UILabel *label = [UILabel new];
    label.backgroundColor = [UIColor whiteColor];
    
    // label获取字符串
    label.text = self.array[indexPath.row];
    
    // label获取字体
    label.font = [UIFont fontWithName:nil size:14];
    
    label.numberOfLines = 0;
    
    // 根据获取到的字符串以及字体计算label需要的size
    CGSize size = [label boundingRectWithSize:CGSizeMake(320, MAXFLOAT)];
    

    return size.height+100;
}



- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section
{
    return self.array.count;
}

- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath
{
    CommentCellTableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:@"cell"];
    
    tableView dequ
    
//    cell.backgroundColor = [UIColor blueColor];
    
    UILabel *label = [UILabel new];
    label.backgroundColor = [UIColor whiteColor];
    // label获取字符串
    label.text = self.array[indexPath.row];
    // label获取字体
    label.font = [UIFont fontWithName:nil size:14];
    label.numberOfLines = 0;
    
    // 根据获取到的字符串以及字体计算label需要的size
    CGSize size = [label boundingRectWithSize:CGSizeMake(320, MAXFLOAT)];
    NSLog(@"1宽度：%f,1高度：%f",size.width,size.height);
    
    cell.commentBtn.frame = CGRectMake(0, 0, size.width, size.height+20);
    cell.commentBtn.backgroundColor = [UIColor blackColor];
    cell.tintColor = [UIColor redColor];
    cell.commentBtn.titleLabel.numberOfLines = 0;
    cell.commentBtn.titleLabel.font =  [UIFont systemFontOfSize: 14.0];
    [cell.commentBtn setTitle:self.array[indexPath.row] forState: UIControlStateNormal];
    
    [UITableViewCell alloc]initWithStyle:<#(UITableViewCellStyle)#> reuseIdentifier:<#(nullable NSString *)#>]
    
    return cell;
}



@end
