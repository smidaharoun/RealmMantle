//
//  ArticleListRequestModel.h
//  Mantle Realm
//
//  Created by odc on 21/11/2016.
//  Copyright © 2016 Haroun SMIDA. All rights reserved.
//

#import <Mantle/Mantle.h>

@interface ArticleListRequestModel : MTLModel <MTLJSONSerializing>

@property (nonatomic, copy) NSString *query;
@property (nonatomic, copy) NSDate *articlesFromDate;
@property (nonatomic, copy) NSDate *articlesToDate;

+ (NSDateFormatter *)dateFormatter;
+ (NSDictionary *)JSONKeyPathsByPropertyKey;

@end
