//
//  FilterTableViewCell.h
//  SummerYelpMock
//
//  Created by Haotian Chen on 2017/9/12.
//  Copyright © 2017年 Haotian Chen. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "YelpFilterDataModel.h"
@interface FilterTableViewCell : UITableViewCell
- (void)updateDataModel:(YelpFilterDataModel *)dataModel;

@end
