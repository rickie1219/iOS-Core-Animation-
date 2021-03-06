//
//  LNOperateBtn.h
//  iOS常用动画
//
//  Created by LN on 16/6/15.
//  Copyright © 2017年 Learning point. All rights reserved.
//  自定义操作Btn

#import <UIKit/UIKit.h>

@interface LNOperateBtn : UIButton

/**
 初始化按钮
 frame,
 btnTitle 标题
 */
- (instancetype)initWithFrame:(CGRect)frame withBtnTitle:(NSString *)btnTitle;

/**
 根据传入下标返回操作按钮的frame
 btnAtIndex 下标
 */
+ (CGRect)rectForBtnAtIndex:(NSUInteger)btnAtIndex;
@end
