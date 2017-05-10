/** 
 * @file ctd_interface.h
 * 
 * Copyright(C), 2012-2016, Huawei Tech. Co., Ltd. ALL RIGHTS RESERVED. \n
 * 
 * @brief [en]Description: TUP ctd component interface header files
 * [cn]������TUP CTD���ܽӿ�ͷ�ļ��� \n
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
 *        <br>[cn]������־������������־
 * 
 * @param [in] TUP_INT32 log_level        <b>:</b><br>[en]Log level, Range of values:CTD_E_LOG_LEVEL.
 *                                                <br>[cn]��־����ȡֵ:ö����CTD_E_LOG_LEVEL
 * @param [in] TUP_INT32 max_size_kb      <b>:</b><br>[en]Maximum size(KB) of a log file, which is the maximum value that can be obtained using TUP_INT32 suggest 1*1024.
 *                                                <br>[cn]ÿ����־�ļ������ֵ����λ: KB�����ֵΪTUP_INT32����ȡ�������ֵ������Ϊ1*1024
 * @param [in] TUP_INT32 file_count       <b>:</b><br>[en]Number of log files. The maximum value is the one that can be obtained using TUP_INT32 suggest 1.
 *                                                <br>[cn]��־�ļ����������ֵΪTUP_INT32����ȡ�������ֵ������Ϊ1 
 * @param [in] const TUP_CHAR* log_path   <b>:</b><br>[en]Directory for storing log files.
 *                                                <br>[cn]��־���·�� 
 * @retval TUP_VOID
 * 
 * @attention [en]This function must be invoked before initialization.
 *            <br>[cn]�����������ʼ��֮ǰ����
 * @see tup_ctd_log_stop
 **/
TUP_API TUP_RESULT tup_ctd_log_start(TUP_INT32       log_level, 
                                     TUP_INT32       max_size_KB,
                                     TUP_INT32       file_count,
                                     const TUP_CHAR* log_path);

/**
 * @ingroup OpenAPI
 * @brief [en]xxxx.
 *        <br>[cn]ֹͣ��־
 * 
 * @param [in] TUP_VOID
 * @retval TUP_VOID
 * 
 * @attention [en]xxxx.
 *            <br>[cn]һ��������ã�ȥ��ʼ�����Զ�ֹͣ��־
 * @see tup_ctd_log_start
 **/
TUP_API TUP_VOID   tup_ctd_log_stop(TUP_VOID);


/**
 * @ingroup OpenAPI
 * @brief [en]xxxx.
 *        <br>[cn]ע����Ϣ�����������ڽ���CTDģ�鷢������Ϣ��
 * 
 * @param [in] CTD_FN_CALLBACK_PTR call_back        <b>:</b><br>[en]xxxx.
 *                                                            <br>[cn]��Ϣ������ָ��
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]xxxx.
 *            <br>[cn]NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_ctd_register_process_notifiy(CTD_FN_CALLBACK_PTR call_back);


/**
 * @ingroup OpenAPI
 * @brief [en]xxxx.
 *        <br>[cn]ctdģ���ʼ��
 * 
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]xxxx.
 *            <br>[cn]NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_ctd_init(TUP_BOOL enable_status_report);


/**
 * @ingroup OpenAPI
 * @brief [en]xxxx.
 *        <br>[cn]ctdģ��ȥ��ʼ��
 * 
 * @param NA
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
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
