//
//  GlobalDefine.h
//  VPMTFrame
//
//  Created by Nhan Nguyen on 6/18/14.
//  Copyright (c) 2014 Nhan Nguyen. All rights reserved.
//

#define UIColorFromRGB(rgbValue) [UIColor \
colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 \
green:((float)((rgbValue & 0xFF00) >> 8))/255.0 \
blue:((float)(rgbValue & 0xFF))/255.0 alpha:1.0]
#define SCREEN_WIDTH [[UIScreen mainScreen] bounds].size.width
#define SCREEN_HEIGHT [[UIScreen mainScreen] bounds].size.height
#define JP_DATE_TIME_FORMAT         @"yyyy年M月dd日"


