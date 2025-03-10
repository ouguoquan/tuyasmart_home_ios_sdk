//
//  TuyaSmartSceneModel.h
//  TuyaSmartKit
//
//  Created by xuyongbo on 2017/9/4.
//  Copyright © 2017年 Tuya. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "TuyaSmartSceneActionModel.h"
#import "TuyaSmartSceneConditionModel.h"
#import "TuyaSmartScenePreConditionModel.h"


typedef enum : NSUInteger {
    TuyaSmartConditionMatchAny = 1,        //满足任一条件
    TuyaSmartConditionMatchAll      //满足所有条件
} TuyaSmartConditionMatchType;

/**
 * 场景Model, 有conditons的场景称为自动化。
 * scene model, we call a scene with conditions "automation".
 */
@interface TuyaSmartSceneModel : NSObject<NSCoding>

/**
 * 场景id （只有自定义场景有该字段）
 * scene's Id, only custom scene has this property.
 */
@property (nonatomic, strong) NSString *sceneId;

/**
 * 场景code (只有默认场景有该字段)
 * scene's code, only default scene has this property.
 */
@property (nonatomic, strong) NSString *code;

/**
 * 场景名称
 * scene name
 */
@property (nonatomic, strong) NSString *name;

/**
 * 自动化场景是否开启
 * automation enable status
 */
@property (nonatomic, assign) BOOL enabled;

/**
 * 是否显示在首页
 * show or not to show in first page.
 */
@property (nonatomic, assign) BOOL stickyOnTop;


/**
 * 场景前置条件,如自动化生效时间
 * preconditions, eg: valid time period of automation.
 */
@property (nonatomic, strong) NSArray <TuyaSmartScenePreConditionModel *> *preConditions;

/**
 * 场景条件
 * conditions of automation.
 */
@property (nonatomic, strong) NSArray <TuyaSmartSceneConditionModel *> *conditions;

/**
 * 场景动作
 * scene actions.
 */
@property (nonatomic, strong) NSArray <TuyaSmartSceneActionModel *> *actions;

/**
 * 设备列表
 * device list
 */
@property (nonatomic, strong) NSArray *devList;

/**
 * 场景子标题
 * scene subTitle
 */
@property (nonatomic, strong) NSString *subTitle __deprecated;

/**
 * 编辑icon url
 * edit icon url
 */
@property (nonatomic, strong) NSString *editIcon __deprecated;

/**
 * 显示图标
 * display icon
 */
@property (nonatomic, strong) NSString *displayIcon __deprecated;

/**
 * 背景图片url, 目前仅可使用涂鸦提供的图片url。查看TuyaSmartSceneManager中的API。
 * scene background url, when created a new scene, use the url provided by tuya. API in TuyaSmartSceneManager.
 */
@property (nonatomic, strong) NSString *background;

/**
 * matchType == 1  满足任一条件时，执行
 * matchType == 2  满足所有条件时，执行
 *
 * matchType == 1  automation will execute when any conditon is matched.
 * matchType == 2  automation will execute when all conditons are matched.
 */
@property (nonatomic, assign) TuyaSmartConditionMatchType matchType;

/**
 * 是否有场景面板绑定
 * scene is or isn't bound by a panel.
 */
@property (nonatomic, assign) BOOL boundForPanel;

/**
 * 是否支持本地联动,即自动化场景是否可以在zigbee网关不联网的情况下执行。
 * Support to execute in local network, YES meas this automation can be executed when zigbee gateway is offline.
 */
@property (nonatomic, assign) BOOL localLinkage;

@end
