//
//  THBookRackViewController.m
//  THFiction
//
//  Created by liuyunpeng on 2019/8/9.
//  Copyright © 2019 liuyunpeng. All rights reserved.
//

#import "THBookRackViewController.h"

@interface THBookRackViewController ()<THBookRackHeadViewDelegate>{
    
}

@property (nonatomic,strong)THBookRackViewModel *viewModel;
@property (nonatomic,strong) NSArray *actionArray;

@end

@implementation THBookRackViewController

- (BOOL)shouldShowNavigationBar{
    return  NO;
}

- (void)viewDidLoad {
    [super viewDidLoad];
    
}


@end
