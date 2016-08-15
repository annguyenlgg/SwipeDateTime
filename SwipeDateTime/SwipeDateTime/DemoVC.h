//
//  ViewController.h
//  SwipeDateTime
//
//  Created by AnN on 8/15/16.
//  Copyright © 2016 AnN. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SourceCode/SwipeTimeView/SwipeTimeView.h"
#import "SourceCode/SwipeMonthView/SwipeMonthView.h"
#import "SourceCode/SwipeYearAndMonth/SwipeYearAndMonth.h"
//#import "SwipeTimeView.h"
//#import "SwipeMonthView.h"
//#import "SwipeYearAndMonth.h"

@interface DemoVC : UIViewController

@property (weak, nonatomic) IBOutlet SwipeTimeView *swipeTimeView;
@property (weak, nonatomic) IBOutlet SwipeMonthView *swipeMonthView;
@property (weak, nonatomic) IBOutlet SwipeYearAndMonth *swipeYearAndMonth;

@end

