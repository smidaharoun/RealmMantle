//
//  SessionManager.h
//  Mantle Realm
//
//  Created by odc on 21/11/2016.
//  Copyright © 2016 Haroun SMIDA. All rights reserved.
//

#import <AFNetworking/AFNetworking.h>

@interface SessionManager : AFHTTPSessionManager

+ (id)sharedManager;

@end
