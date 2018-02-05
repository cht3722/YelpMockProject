//
//  DetailViewHeaderTableViewCell.h
//  SummerYelpMock
//
//  Created by Haotian Chen on 2017/9/5.
//  Copyright © 2017年 Haotian Chen. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "YelpDataModel.h"
@interface DetailViewHeaderTableViewCell : UITableViewCell
- (void)updateBasedOnDataModel:(YelpDataModel *)dataModel;

@end
