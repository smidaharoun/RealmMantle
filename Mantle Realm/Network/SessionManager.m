//
//  SessionManager.m
//  Mantle Realm
//
//  Created by odc on 21/11/2016.
//  Copyright © 2016 Haroun SMIDA. All rights reserved.
//

#import "SessionManager.h"

static NSString *const kBaseURL = @"https://api.nytimes.com";

@implementation SessionManager

- (id)init {
    self = [super initWithBaseURL:[NSURL URLWithString:kBaseURL]];
    if(!self) return nil;
    
    self.responseSerializer = [AFJSONResponseSerializer serializer];
    self.requestSerializer = [AFJSONRequestSerializer serializer];
    
    return self;
}

+ (id)sharedManager {
    static SessionManager *_sessionManager = nil;
    
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        _sessionManager = [[self alloc] init];
    });
    
    return _sessionManager;
}

@end
