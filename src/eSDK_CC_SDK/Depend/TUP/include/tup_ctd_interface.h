/** 
 * @file ctd_interface.h
 * 
 * Copyright(C), 2012-2016, Huawei Tech. Co., Ltd. ALL RIGHTS RESERVED. \n
 * 
 * @brief [en]Description: TUP ctd component interface header files
 * [cn]描述：TUP CTD功能接口头文件。 \n
 **/


#ifndef __CTD_INTERFACE_H__
#define __CTD_INTERFACE_H__

#include "tup_def.h"
#include "tup_ctd_def.h"

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif


/**
 * @ingroup OpenAPI
 * @brief [en]Interface for setting log parameters and start log.
 *        <br>[cn]设置日志参数，启动日志
 * 
 * @param [in] TUP_INT32 log_level        <b>:</b><br>[en]Log level, Range of values:CTD_E_LOG_LEVEL.
 *                                                <br>[cn]日志级别，取值:枚举类CTD_E_LOG_LEVEL
 * @param [in] TUP_INT32 max_size_kb      <b>:</b><br>[en]Maximum size(KB) of a log file, which is the maximum value that can be obtained using TUP_INT32 suggest 1*1024.
 *                                                <br>[cn]每个日志文件的最大值，单位: KB，最大值为TUP_INT32所能取到的最大值，建议为1*1024
 * @param [in] TUP_INT32 file_count       <b>:</b><br>[en]Number of log files. The maximum value is the one that can be obtained using TUP_INT32 suggest 1.
 *                                                <br>[cn]日志文件个数，最大值为TUP_INT32所能取到的最大值，建议为1 
 * @param [in] const TUP_CHAR* log_path   <b>:</b><br>[en]Directory for storing log files.
 *                                                <br>[cn]日志存放路径 
 * @retval TUP_VOID
 * 
 * @attention [en]This function must be invoked before initialization.
 *            <br>[cn]必须在组件初始化之前调用
 * @see tup_ctd_log_stop
 **/
TUP_API TUP_RESULT tup_ctd_log_start(TUP_INT32       log_level, 
                                     TUP_INT32       max_size_KB,
                                     TUP_INT32       file_count,
                                     const TUP_CHAR* log_path);

/**
 * @ingroup OpenAPI
 * @brief [en]xxxx.
 *        <br>[cn]停止日志
 * 
 * @param [in] TUP_VOID
 * @retval TUP_VOID
 * 
 * @attention [en]xxxx.
 *            <br>[cn]一般无需调用，去初始化后自动停止日志
 * @see tup_ctd_log_start
 **/
TUP_API TUP_VOID   tup_ctd_log_stop(TUP_VOID);


/**
 * @ingroup OpenAPI
 * @brief [en]xxxx.
 *        <br>[cn]注册消息处理函数，用于接收CTD模块发来的消息。
 * 
 * @param [in] CTD_FN_CALLBACK_PTR call_back        <b>:</b><br>[en]xxxx.
 *                                                            <br>[cn]消息处理函数指针
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]xxxx.
 *            <br>[cn]NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_ctd_register_process_notifiy(CTD_FN_CALLBACK_PTR call_back);


/**
 * @ingroup OpenAPI
 * @brief [en]xxxx.
 *        <br>[cn]ctd模块初始化
 * 
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]xxxx.
 *            <br>[cn]NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_ctd_init(TUP_BOOL enable_status_report);


/**
 * @ingroup OpenAPI
 * @brief [en]xxxx.
 *        <br>[cn]ctd模块去初始化
 * 
 * @param NA
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]xxxx.
 *            <br>[cn]NA
 * @see tup_ctd_init
 **/
TUP_API TUP_RESULT tup_ctd_uninit(TUP_VOID);

TUP_API TUP_RESULT tup_ctd_set_server_param(const CTD_S_SERVER_PARA* param);

TUP_API TUP_RESULT tup_ctd_start_call(const CTD_S_CALL_PARAM* ctd_param, TUP_UINT32* call_id);

TUP_API TUP_RESULT tup_ctd_end_call(TUP_UINT32 call_id);

TUP_API TUP_RESULT tup_ctd_set_proxy(const CTD_S_PROXY_PARAM* proxy_param);

#ifdef __cplusplus
#if __cplusplus
}
#endif
#endif

#endif /* __CTD_INTERFACE_H__ */
