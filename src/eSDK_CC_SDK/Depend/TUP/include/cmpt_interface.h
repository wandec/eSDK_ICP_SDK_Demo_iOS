
/*******************************************************************************
 *               Copyright (C) 2011, Huawei Tech. Co., Ltd.
 *                      ALL RIGHTS RESERVED
 *******************************************************************************/


#ifndef __CMPT_INTERFACE_H__
#define __CMPT_INTERFACE_H__

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif /*  __cpluscplus */
#endif /*  __cpluscplus */

#include "cmpt_def.h"

/**
 * @brief ������־
 *
 * @param [in] TUP_INT32       log_level     <b>:</b> ��־����E_LOG_LEVEL
 * @param [in] TUP_INT32       max_size_KB   <b>:</b> ������־�ļ���С����λKB
 * @param [in] TUP_INT32       file_count    <b>:</b> ֧����־�ļ��ܸ���
 * @param [in] const TUP_CHAR* log_path      <b>:</b> ��־�ļ�·��
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 *
 * @attention NA
 * @see tup_cmpt_log_stop
 **/
TUP_API TUP_RESULT tup_cmpt_log_start(TUP_INT32       log_level, 
                                       TUP_INT32       max_size_KB,
                                       TUP_INT32       file_count,
                                       const TUP_CHAR* log_path);

/**
 * @brief ֹͣ��־
 *
 * @param [in] ��
 * @retval TUP_API TUP_VOID <b>:</b> ��
 *
 * @attention NA
 * @see tup_cmpt_log_start
 **/
TUP_API TUP_VOID   tup_cmpt_log_stop(TUP_VOID);


/**
 * @brief ������ͼ���
 * 
 * @param [in] const TUP_INT32 type       <b>:</b> ��ͼ���ͣ�0 ����ƥ����ͼ������1 �滻ƥ����ͼ����
 * @param [in] const TUP_CHAR *digit_map  <b>:</b> ��ͼ
 * @param [out] TUP_INT32 *handle         <b>:</b> ��������ͼ���
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see tup_digitmap_match
 * @see tup_digitmap_destroy_handle
 **/
TUP_API TUP_RESULT tup_digitmap_create_handle(const TUP_INT32 type, const TUP_CHAR *digit_map, TUP_INT32 *handle);


/**
 * @brief ������ͼ���
 * 
 * @param [in] const TUP_INT32 handle  <b>:</b> �����ٵ���ͼ���
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see tup_digitmap_create_handle
 * @see tup_digitmap_match
 **/
TUP_API TUP_RESULT tup_digitmap_destroy_handle(const TUP_INT32 handle);


/**
 * @brief ��ͼƥ�䴦��
 * 
 * @param [in] const TUP_INT32 handle  <b>:</b> ��ͼ���
 * @param [in] const char *input_num   <b>:</b> ԭʼ����ͼ�������
 * @param [out] DMRESULT *dm_result     <b>:</b> ��ͼ������
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see tup_digitmap_create_handle
 * @see tup_digitmap_destroy_handle
 **/
TUP_API TUP_RESULT tup_digitmap_match(const TUP_INT32 handle, const char *input_num, DMRESULT *dm_result);

/**
 * @brief ֤����Ч�ڼ��
 * 
 * @param [in] TUP_CHAR *pcCertFilePath  <b>:</b> ֤��·��
 * @param [out] CMPT_S_DATETIME *expire_time <b>:</b> ֤�����ʱ��
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see 
 **/
TUP_API TUP_RESULT tup_cmpt_check_certificate_overdue(IN TUP_CHAR *certfile_path, OUT CMPT_S_DATETIME *expire_time);


/**
 * @brief ֤����Ч��У��(��ʽ, ǩ�� ,��Ч�� ,�䷢���� ,CRL, ����������Ϣ)
 * 
 * @param [in] TUP_CHAR *pcCertFilePath  <b>:</b> ֤��·��
 * @retval TUP_API TUP_VOID <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see 
 **/
TUP_API TUP_RESULT tup_cmpt_verify_certificate(IN TUP_CHAR *certfile_path, IN CMPT_S_CERTVERIFY_INFO *verify_info);


#ifdef __cplusplus
#if __cplusplus
}
#endif /*  __cpluscplus */
#endif /*  __cpluscplus */

#endif  /* __CMPT_INTERFACE_H__ */

