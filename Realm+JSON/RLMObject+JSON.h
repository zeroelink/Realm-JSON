//
//  RLMObject+JSON.h
//  RealmJSONDemo
//
//  Created by Matthew Cheok on 27/7/14.
//  Copyright (c) 2014 Matthew Cheok. All rights reserved.
//

#import <Realm/Realm.h>
#import "MCJSONDateTransformer.h"
#import "MCJSONValueTransformer.h"

@interface RLMObject (JSON)

+ (NSArray *)createInRealm:(RLMRealm *)realm withJSONArray:(NSArray *)array;
+ (instancetype)createInRealm:(RLMRealm *)realm withJSONDictionary:(NSDictionary *)dictionary;
+ (instancetype)objectInRealm:(RLMRealm *)realm withPrimaryKeyValue:(id)primaryKeyValue;

- (instancetype)initWithJSONDictionary:(NSDictionary *)dictionary;
- (NSDictionary *)JSONDictionary;

- (id)primaryKeyValue;
+ (id)primaryKeyValueFromJSONDictionary:(NSDictionary *)dictionary;

- (void)performInTransaction:(void (^)())transaction;
- (void)removeFromRealm;

@end

@interface RLMArray (SWAdditions)

- (NSArray *)NSArray;
- (NSArray *)JSONArray;

@end