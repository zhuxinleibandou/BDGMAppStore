//
//  BDMethod.h
//  BDGMAppStore
//
//  Created by 朱信磊 on 2017/7/3.
//  Copyright © 2017年 com.bandou.app. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BDBaseClass.h"

@interface BDMethod : NSObject

+ (BDMethod *)bd_shareBDMethod;

/**
 获取app版本号

 @return 版本号
 */
- (NSString *)bd_getAPPVersion;

/**
 获取当前设备名称
 
 @return 当前设备名称
 */
- (NSString *)bd_getDeviceName;

/**
 获取当前设备系统版本
 
 @return 当前设备系统版本
 */
- (NSString *)bd_getDeviceVersion;

/**
 获取当前应用名称
 
 @return 当前应用名称
 */
- (NSString *)bd_getAppName;

/**
 获取当前设备序列号
 
 @param key 存储到钥匙串中的key
 @return 钥匙串中key对应的值
 */
- (NSString *)bd_getDeviceUUIDWithChainKey:(NSString *)key;



/**
 数据MD5加密
 
 @param value 明文
 @return 密文
 */
- (NSString *)bd_safeEncrypeMd5:(NSString *)value;

#pragma mark - 3DES加密dict
/**
 *  3Des加密
 *
 *  @param des
 *
 *  @return
 */
- (NSDictionary *)DES3StringFromDict:(NSDictionary *)dict;

@end
