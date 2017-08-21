//
//  BDGMAppStore.h
//  BDGMAppSotre
//
//  Created by 朱信磊 on 2017/7/3.
//  Copyright © 2017年 com.bandou.app. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef void(^BDGMScanResult)(NSString *scanResult);

typedef void(^SkipBlock)();


@interface BDGMAppStore : NSObject


/**
 单列初始化

 @return    BDGMAppStore对象
 */
+ (id) shareManager;


/**
 扫描店员信息激活应用
 跳转到扫描二维界面，


 @param key  注册ID
 @param block 通信回调
 @param skipBlock 跳过回调
 */
- (void)BDGMRegistKey:(NSString *)key andScanViewWithResultBlock:(void(^)(BOOL result,NSString *errorStr))block andSkipBlock:(SkipBlock)skipBlock;


/**
 移除扫描
 */
- (void)dismiss;
@end
