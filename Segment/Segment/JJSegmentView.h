//
//  JJSegmentView.h
//  Tools
//
//  Created by itclimb on 19/05/2017.
//  Copyright © 2017 itclimb.yuancheng.com. All rights reserved.
//

#import <UIKit/UIKit.h>
@class JJSegmentView;

@protocol JJSegmentViewDelegate <NSObject>

@required
//  指明父控制器
- (UIViewController *)superViewController;
//  子控制器
- (UIViewController *)JJSegmentView:(JJSegmentView *)segmentView subViewControllerWithIndex:(NSInteger)index;

@optional
//  选择标签栏标签
- (void)JJSegmentView:(JJSegmentView *)segmentView itemSelectWithIndex:(NSInteger)index;

@end

@interface JJSegmentView : UIView
//  代理
@property(nonatomic, weak) id<JJSegmentViewDelegate> delegate;

/**
 初始化方法

 @param frame 视图尺寸
 @param delegate 代理
 @param titleDatas 标签数据
 @param headHeight 标签栏高度
 @param size 标签栏字体大小
 @param selectColor 选中标签颜色
 @return self
 */
- (instancetype)initWithFrame:(CGRect)frame
                  andDelegate:(id)delegate
               withTitleDatas:(NSArray *)titleDatas
                   headHeight:(CGFloat)headHeight
                   FontOfSize:(CGFloat)size
                  SelectColor:(UIColor *)selectColor;

@end
