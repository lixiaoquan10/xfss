<<<<<<< HEAD
#ifndef STRUCT_H
#define STRUCT_H

#include <QDateTime>

enum NCommandType{
    NCT_None = 0,                       // ?????
    NCT_GetProcessTypeName = 1,         // ????????????
    NCT_SetInterfaceBoardInfo = 2,      // ???????,Dll??Server
    NCT_SetRouteConfig = 3,             // ??????,Server??Dll
    NCT_ObjectStatus = 4,               // ??????
    NCT_AddLog = 5,                     // ????
    NCT_GetLog = 6,                     // ????
    NCT_Reset = 7,                      // ??
    NCT_Mute = 8,                       // ??
    NCT_EmergencyStart = 9,             // ??????
    NCT_EmergencyStop = 10,              // ??????
    NCT_AutomaticEvacuation = 11,        // ??????
    NCT_ManualEvacuation = 12,           // ??????
    NCT_SystemSelfCheck = 13,            // ????
    NCT_SystemMonthCheck = 14,           // ????
    NCT_SystemYearCheck = 15,            // ????
    NCT_Relogin = 16,                    // ????

    NCT_SimulateFire = 18,               // 模拟火警点应急
    NCT_PrintSet = 19,                   // ????
    NCT_CheckSet = 20,                   // ????
    NCT_DirectionTest = 21,              // ????
    NCT_FactoryReset = 22,               // ??????
    NCT_AutoFire = 23,                  // ???????
    NCT_CheckTimeSync = 24,
    NCT_SelfCheckStart = 25,             // ??????
    NCT_SelfCheckStop = 26,              // ??????
    NCT_UndefinedObject = 27,            // ?????Object
    NCT_ClientReset = 28,
    NCT_ForceEmergency = 29,             // ????????
    NCT_Log = 30,                        // ????
    NCT_LedStatus = 31,           // ??????
    NCT_ControllerInfo = 32,             // ?????
    NCT_GetControllerInfo = 33,          // ???????
    NCT_StopCommunication = 34,                 // ?????
    NCT_StartCommunication = 35,                // ?????
//    NCT_GetCurrentValue = 36,            // ????????
//    NCT_GetVoltageValue = 37,            // ????????
    NCT_DuplicateCheck = 36,
    NCT_ChangeDeviceAddress = 37,
    NCT_ClearUndefinedObject = 38,       // ?????????
    NCT_AddUndefinedObject = 39,         // ?????????
    NCT_DelUndefinedObject = 40,         // ?????????
    NCT_MonthCheckBegin = 41,            // ????
    NCT_MonthCheckEnd = 42,              // ????
    NCT_YearCheckBegin = 43,             // ????
    NCT_YearCheckEnd = 44,               // ????
    NCT_ProjectInitComplete = 45,  // ??????????
    NCT_CancelMute = 46,                 // ????
    NCT_PowerInfo = 47,                  // ??????
    NCT_StartEvacuationGroup = 48,       // ??????
    NCT_StartFlowEvacuationGroup = 49,   // ???????????
    NCT_StopEvacuationGroup = 50,        // ??????
    NCT_DeviceEmergencyStart = 51,       // ??????
    NCT_DeviceEmergencyStop = 52,        // ??????
    NCT_GetLayerEvacuationFlow = 53,     // ??????
    NCT_LayerEvacuationFlow = 54,        // ????
    NCT_ClearEvacuationFlow = 55,        // ?????
    NCT_HasFASSystem = 56,               // ??????
    NCT_StartSpeedUp = 57,               // ??????
    NCT_StopSpeedUp = 58,                // ??????
    NCT_StartCharge = 59,               // ????
    NCT_StopCharge = 60,                // ????
    NCT_ExitProgram = 61,               // ????
    NCT_EnergyMode = 62,                // ????
    NCT_SystemSet = 63,                 // ????
    NCT_LoginInfo = 64,                 //????
    NCT_Unlogin = 65,                   //??????
    NCT_LoginInfoLoop = 17,             //????
    NCT_UnLoginLoop = 66,               //??????
    NCT_DeviceTestStart = 67,           //??????
    NCT_DeviceReset = 68,               //????
    NCT_DeviceAdd = 69,                 //??????
    NCT_DeviceType = 70,                //??????
    NCT_ReadProtectInfor = 71,          //??????
    NCT_WriteProtectInfor = 72,         //?????
    NCT_DeviceDefaultOn = 73,           //??????
    NCT_DeviceDirection = 74,           //???????
    NCT_InputEmergency = 75,            //???????????
    NCT_ReadDeviceInfo = 76,            //?????
    NCT_FlashControl = 77,              //????
    NCT_ChangeControl = 78,             //??????
    NCT_CloseBatteryOut = 79,           //????????????
    NCT_SetLoopOutStatus = 80,          //???????????
    NCT_ReadLoopOutStatus = 81,         //?????????????
    NCT_RecordPage = 82,                //??????
    NCT_DeviceDefaultOff = 83,          //??????
    NCT_DeviceDefaultDrection = 84,     //??????
    NCT_Emergency = 85,                 //??????
    NCT_FlashConfig = 86,               //????

    NCT_ActiveInputEmergency = 87,      //????????
    NCT_PassiveInputEmergency = 88,     //????????
    NCT_ControllerParam = 89,           //控制器电参量
    NCT_RemoveFaultLamp = 90,           //清除故障灯具注册状态
    NCT_TestLinkageCom = 91,            //测试火报通讯口
    NCT_LinkageComBaudRate = 92,        //火报通讯口波特率
    NCT_NologinSendToDistribution = 93, //未注册灯具下发到集中电源指定回路


    NCT_XmlNone = 100,                          // ?????
    NCT_XmlHeartbeat  = 101,                    // ??
    NCT_XmlApplyForProjectID = 102,             // ???????
    NCT_XmlUploadDeviceInfo = 103,              // ????????????
    NCT_XmlCanDeviceInfo = 104,                 // CAN????
    NCT_XmlChannelInfo = 105,                   // ????
    NCT_XmlLampInfo = 106,                      // ????
    NCT_XmlLayoutPage = 107,                    // ??????
    NCT_XmlPicture = 108,                       // ????
    NCT_XmlLampCoordinate = 109,                // ????
    NCT_XmlFirePoint = 110,                    // ?????
    NCT_XmlFirePointCoordinate = 111,          // ?????
    NCT_XmlLampToFirePoint = 112,              // ????????
    NCT_XmlLampDefaultDirection = 113,         // ??????
    NCT_XmlHostElectricParameter = 114,        // ?????
    NCT_XmlCanDeviceElectricParameter = 115,   // CAN?????
    NCT_XmlEnableUpload = 116,                 // ????
    NCT_XmlHostStateUpload = 117,              // ??????
    NCT_XmlCanDeviceStateUpload = 118,         // CAN??????
    NCT_XmlChannelStateUpload = 119,           // ??????
    NCT_XmlLampStateUpload  = 120,             // ????
    NCT_XmlEmergencyInputUpload = 121,         // ???????
    NCT_XmlManualLaunchUpload = 122,           // ????
    NCT_XmlUploadFirePointWarning = 123,       // ?????
    NCT_XmlUploadLampDirection = 124,          // ????
    NCT_XmlResetDeclare = 125,                 // ????
    NCT_XmlHostControl = 126,                  // ??????
    NCT_XmlLampControl = 127,                  // ??????
    NCT_XmlQueryAllState = 128,                // ???????
    NCT_XmlStatus = 129,                       // ????
    NCT_XmlLampConnection = 130,               // ??????
    NCT_XmlLampSoftwareInfo = 131,             // ??????
    NCT_XmlDeviceSoftwareInfo = 132,           // ????????
    NCT_XmlDeviceRealtimeData = 133,           // ????????
    NCT_XmlEventList = 134                     // ??????
};

enum TcpType{
    TCP_None = 0,                       // ?????
    TCP_Socket = 1,                     // ???
    TCP_Server = 2,                     // ???
    TCP_All = 3                         // ???
};

#endif // STRUCT_H
=======
#ifndef STRUCT_H
#define STRUCT_H

#include <QDateTime>

enum NCommandType{
    NCT_None = 0,                       // 空命令类型
    NCT_GetProcessTypeName = 1,         // 获取处理器类型名称对应表
    NCT_SetInterfaceBoardInfo = 2,      // 设置接口板信息,Dll调用Server
    NCT_SetRouteConfig = 3,             // 设置路由配置,Server调用Dll
    NCT_ObjectStatus = 4,               // 发送对象状态
    NCT_AddLog = 5,                     // 添加日志
    NCT_GetLog = 6,                     // 获取日志
    NCT_Reset = 7,                      // 复位
    NCT_Mute = 8,                       // 消音
    NCT_EmergencyStart = 9,             // 系统应急启动
    NCT_EmergencyStop = 10,              // 系统应急停止
    NCT_AutomaticEvacuation = 11,        // 自动疏散模式
    NCT_ManualEvacuation = 12,           // 手动疏散模式
    NCT_SystemSelfCheck = 13,            // 系统自检
    NCT_SystemMonthCheck = 14,           // 系统月检
    NCT_SystemYearCheck = 15,            // 系统年检
    NCT_Relogin = 16,                    // 重新登录

    NCT_SimulateFire = 18,               // 模拟火警点应急
    NCT_PrintSet = 19,                   // 打印设置
    NCT_CheckSet = 20,                   // 检测设置
    NCT_DirectionTest = 21,              // 方向测试
    NCT_FactoryReset = 22,               // 恢复出厂设置
    NCT_AutoFire = 23,                  // 管理员用户信息
    NCT_CheckTimeSync = 24,
    NCT_SelfCheckStart = 25,             // 系统自检开始
    NCT_SelfCheckStop = 26,              // 系统自检结束
    NCT_UndefinedObject = 27,            // 工程未定义Object
    NCT_ClientReset = 28,
    NCT_ForceEmergency = 29,             // 强制应急（按键）
    NCT_Log = 30,                        // 日志数据
    NCT_LedStatus = 31,           // 对象状态同步
    NCT_CanportInfo = 32,             // 控制器信息
    NCT_GetCanportInfo = 33,          // 获取控制器信息
    NCT_StopCommunication = 34,                 // 服务器停止
    NCT_StartCommunication = 35,                // 服务器启动
    NCT_GetCurrentValue = 36,            // 获取回路电流信息
    NCT_GetVoltageValue = 37,            // 获取回路电压信息
    NCT_ClearUndefinedObject = 38,       // 清空未定义数据对象
    NCT_AddUndefinedObject = 39,         // 添加未定义数据对象
    NCT_DelUndefinedObject = 40,         // 删除未定义数据对象
    NCT_MonthCheckBegin = 41,            // 月检开始
    NCT_MonthCheckEnd = 42,              // 月检结束
    NCT_YearCheckBegin = 43,             // 年检开始
    NCT_YearCheckEnd = 44,               // 年检结束
    NCT_ProjectInitComplete = 45,  // 客户端工程初始化完成
    NCT_CancelMute = 46,                 // 取消消音
    NCT_PowerInfo = 47,                  // 集中电源信息
    NCT_StartEvacuationGroup = 48,       // 启动疏散预案
    NCT_StartFlowEvacuationGroup = 49,   // 启动疏散预案（导光流）
    NCT_StopEvacuationGroup = 50,        // 停止疏散预案
    NCT_DeviceEmergencyStart = 51,       // 设备应急启动
    NCT_DeviceEmergencyStop = 52,        // 设备应急停止
    NCT_GetLayerEvacuationFlow = 53,     // 获取图层光流
    NCT_LayerEvacuationFlow = 54,        // 图层光流
    NCT_ClearEvacuationFlow = 55,        // 清除导光流
    NCT_HasFASSystem = 56,               // 存在报警系统
    NCT_StartSpeedUp = 57,               // 开始模拟加速
    NCT_StopSpeedUp = 58,                // 结束模拟加速
    NCT_StartCharge = 59,               // 允许充电
    NCT_StopCharge = 60,                // 禁止充电
    NCT_ExitProgram = 61,               // 退出程序

    NCT_EnergyMode = 62,                // 节能模式
    NCT_SystemSet = 63,                 // 系统设置
    NCT_LoginInfo = 64,                 //全部注册
    NCT_Unlogin = 65,                   //全部清除注册
    NCT_LoginInfoLoop = 17,             //单个注册
    NCT_UnLoginLoop = 66,               //单个清除注册
    NCT_DeviceTestStart = 67,           //设备测试开始
    NCT_DeviceReset = 68,               //设备复位
    NCT_DeviceAdd = 69,                 //修改设备地址
    NCT_DeviceType = 70,                //修改设备类型
    NCT_ReadProtectInfor = 71,          //读取保护参数
    NCT_WriteProtectInfor = 72,         //写保护参数
    NCT_DeviceDefaultOn = 73,            //灯具默认点亮
    NCT_DeviceDirection = 74,           //标志灯方向控制
    NCT_InputEmergency = 75,            //开关量联动应急（输入）
    NCT_ReadDeviceInfo = 76,            //读设备信息
    NCT_FlashControl = 77,              //闪灯控制
    NCT_ChangeControl = 78,             //可变状态控制
    NCT_CloseBatteryOut = 79,           //自带电池灯具关闭备电输出
    NCT_SetLoopOutStatus = 80,          //配电箱应急回路输出控制
    NCT_ReadLoopOutStatus = 81,         //读取配电箱应急回路输出状态
    NCT_RecordPage = 82,                //信息记录页码
    NCT_DeviceDefaultOff = 83,          //灯具默认熄灭
    NCT_DeviceDefaultDirection = 84,     //灯具默认方向
    NCT_Emergency = 85,                 //发送应急指令
    NCT_FlashConfig = 86,               //闪灯配置
    NCT_ActiveInputEmergency = 87,      //有源输入联动应急
    NCT_PassiveInputEmergency = 88,     //无源输入联动应急
    NCT_ControllerParam = 89,           //控制器电参量
    NCT_RemoveFaultLamp = 90,           //清除故障灯具注册状态
    NCT_TestLinkageCom = 91,            //测试火报通讯口
    NCT_LinkageComBaudRate = 92,        //火报通讯口波特率
    NCT_NologinSendToDistribution = 93, //未注册灯具下发到集中电源指定回路
    NCT_LinkageComStatus = 94,          //火报通讯状态
    NCT_ClearCanSendData = 95,          //清空CAN发送数据
    NCT_ClearCanReceiveData = 96,       //清空CAN接收数据
    NCT_ARTUSendData = 97               //ARTU发送数据
};


#endif // STRUCT_H
>>>>>>> 341c9929318cff5b207944113ce95e985e86616c
