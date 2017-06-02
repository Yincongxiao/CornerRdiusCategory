//
//  UIImageView+CornerRadius.h
//  MyPractise
//
//  Created by asnail on 16/8/1.
//  Copyright © 2016年 Personal All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface UIImageView (CornerRadius)


- (instancetype)initWithCornerRadiusAdvance:(CGFloat)cornerRadius rectCornerType:(UIRectCorner)rectCornerType;

- (void)cx_cornerRadiusAdvance:(CGFloat)cornerRadius rectCornerType:(UIRectCorner)rectCornerType;

- (instancetype)initWithRoundingRectImageView;

- (void)cx_cornerRadiusRoundingRect;

- (void)cx_attachBorderWidth:(CGFloat)width color:(UIColor *)color;

@end
