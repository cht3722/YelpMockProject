//
//  YelpTableViewCell.h
//  SummerYelpMock
//
//  Created by Haotian Chen on 2017/8/29.
//  Copyright © 2017年 Haotian Chen. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "YelpDataModel.h"

@interface YelpTableViewCell : UITableViewCell

- (void)updateBasedOnDataModel:(YelpDataModel *)dataModel;


@end
