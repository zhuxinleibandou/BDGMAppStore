//
//  BDBaseClass.h
//  BDGMAppStore
//
//  Created by 朱信磊 on 2017/7/4.
//  Copyright © 2017年 com.bandou.app. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString(NJBD_IsValue)
/**
 验证NSString是否为空
 
 @return YES or NO
 */
- (BOOL)bd_isValue;

@end

@interface NSData(NJBD_IsValue)

/**
 验证NSData是否为空
 
 @return YES or NO
 */
- (BOOL)bd_isValue;

@end

@interface NSObject(NJBD_IsValue)

/**
 验证NSString是否为空
 
 @return YES or NO
 */
- (BOOL)bd_isValue;

@end

@interface NSArray(NJBD_IsValue)

/**
 验证NSArray是否为空
 
 @return YES or NO
 */
- (BOOL)bd_isValue;

/**
 获取数组中指定索引对应的对象
 @param index 索引值
 @return    对象
 */
- (id)bd_getObjectAtIndex:(NSUInteger)index;
@end


@interface NSMutableArray (NJBD_IsValue)
/**
 验证NSMutableArray是否为空
 
 @return YES or NO
 */
- (BOOL)bd_isValue;

/**
 添加对象
 @param anObject
 */
- (void)bd_safeAddObject:(id)anObject;

/**
 添加一个对象到指定位置
 @param anObject 对象
 @param index 索引位置
 */
- (void)bd_safeInsertObject:(id)anObject atIndex:(NSUInteger)index;
@end


@interface NSDictionary(NJBD_IsValue)
/**
 验证NSDictionary是否为空
 
 @return YES or NO
 */
- (BOOL)bd_isValue;

/**
 根据key获取字典对象
 @param key key值
 @return NSDictionary对象
 */
- (NSDictionary*)bd_safeDictionaryForKey:(NSString *)key;

/**
 根据key获取字典中的字符串对象
 
 @param key key值
 @return 字符串对象
 */
- (NSString*)bd_safeStringForKey:(NSString *)key;


/**
 根据key获取字典中的整型数据
 
 @param key key值
 @return int类型值
 */
- (int)bd_safeIntForKey:(NSString *)key;


/**
 根据key获取字典中的bool值
 
 @param key key值
 @return bool类型值
 */
- (BOOL)bd_safeBoolForKey:(NSString *)key;


/**
 根据key获取字典中的float值
 
 @param key key值
 @return float类型值
 */
- (float)bd_safeFloatForKey:(NSString *)key;


/**
 根据key获取字典中的double类型的值
 
 @param key key值
 @return double类型值
 */
- (double)bd_safeDoubleForKey:(NSString *)key;


/**
 根据key值获取字典中的long long类型的值
 
 @param key key值
 @return long long 类型值
 */
- (long long)bd_safeLongLongForKey:(NSString *)key;


/**
 根据key值，获取字典中的Object对象
 
 @param key key值
 @return Object对象
 */
- (id)bd_getObjectForKey:(NSString *)key;


/**
 将data数据解析成dict字典类型
 
 @param value data数据
 @param options options
 @return dict
 */
+ (id)bd_safeObjectFromJsonData:(NSData *)value Options:(NSJSONReadingOptions)options;

@end


@interface NSNumber(NJBD_IsValue)
/**
 验证NSNumber是否为空
 
 @return YES or NO
 */
- (BOOL)bd_isValue;



@end
