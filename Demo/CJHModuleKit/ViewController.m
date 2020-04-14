//
//  ViewController.m
//  CJHModuleKit
//
//  Created by NewCode on 2020/4/14.
//  Copyright © 2020 NewCode. All rights reserved.
//

#import "ViewController.h"

#import "CJHPaymentLoadingHUD.h"
#import "CJHPaymentSuccessHUD.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    [CJHPaymentSuccessHUD showIn:self.view];
}


@end
