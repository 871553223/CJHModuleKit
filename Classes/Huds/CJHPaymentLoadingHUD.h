//
//  CJHPaymentLoadingHUD.h
//  CJHModuleKit
//
//  Created by NewCode on 2020/4/14.
//  Copyright © 2020 NewCode. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CJHPaymentLoadingHUD : UIView

-(void)start;

-(void)hide;

+(CJHPaymentLoadingHUD*)showIn:(UIView*)view;

+(CJHPaymentLoadingHUD*)hideIn:(UIView*)view;

@end
