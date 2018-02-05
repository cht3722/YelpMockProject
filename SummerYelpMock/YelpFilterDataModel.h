//
//  YelpFilterDataModel.h
//  SummerYelpMock
//
//  Created by Haotian Chen on 2017/9/12.
//  Copyright © 2017年 Haotian Chen. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface YelpFilterDataModel : NSObject
@property (nonatomic, copy) NSString *categoryName;
@property (nonatomic, copy) NSString *categoryCode;



+ (NSArray <YelpFilterDataModel *>*)buildDataModelArrayFromDictionaryArray:(NSArray<NSDictionary *> *)dictArray;
@end
