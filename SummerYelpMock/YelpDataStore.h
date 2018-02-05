//
//  YelpDataStore.h
//  SummerYelpMock
//
//  Created by Haotian Chen on 2017/9/2.
//  Copyright © 2017年 Haotian Chen. All rights reserved.

#import <Foundation/Foundation.h>
#import "YelpDataModel.h"

@import CoreLocation;
@interface YelpDataStore : NSObject
@property (nonatomic, copy) NSArray <YelpDataModel *> *dataModels;
@property (nonatomic) CLLocation *userLocation;

@property (nonatomic) NSString *priceParameter;
@property (nonatomic) NSMutableSet *selectedCategories;
+ (YelpDataStore *)sharedInstance;
@end
