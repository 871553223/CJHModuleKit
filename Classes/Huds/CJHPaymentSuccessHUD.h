//
//  CJHPaymentSuccessHUD.h
//  CJHModuleKit
//
//  Created by NewCode on 2020/4/14.
//  Copyright © 2020 NewCode. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CJHPaymentSuccessHUD : UIView<CAAnimationDelegate>

-(void)start;

-(void)hide;

+(CJHPaymentSuccessHUD*)showIn:(UIView*)view;

+(CJHPaymentSuccessHUD*)hideIn:(UIView*)view;

@end
