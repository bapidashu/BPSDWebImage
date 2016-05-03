//
//  UIImageView+WebCache.h
//  01-仿SDWebImage
//
//  Created by 黄伟 on 15/11/12.
//  Copyright © 2015年 itheima. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImageView (WebCache)

/**
 *  通过URLString来实现图片下载
 *
 *  @param URLString URLString
 */
- (void)setImageWithURLString:(NSString *)URLString;

/**
 *  当前的urlString
 */
//@property(nonatomic,copy)NSString *currentURLString;

@end
