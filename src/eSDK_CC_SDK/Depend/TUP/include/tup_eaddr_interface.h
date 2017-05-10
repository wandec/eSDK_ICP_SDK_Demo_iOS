 /** 
 * @file tup_eaddr_interface.h
 * 
 * Copyright(C), 2012-2016, Huawei Tech. Co., Ltd. ALL RIGHTS RESERVED. 
 * 
 * @brief [en]Description: TUP eaddr search component interface header files
 * [cn]������TUP ��ҵͨѶ¼��ѯ������ܽӿ�ͷ�ļ�.
 **/
 
#ifndef __TUP_EADDR_INTERFACE_H__
#define __TUP_EADDR_INTERFACE_H__   

#include "tup_eaddr_def.h"


#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif /* __cpluscplus */
#endif /* __cpluscplus */


/**
 * @brief [en]callback to handle the result msg of searching.
 *        <br>[cn]�����첽������Ϣ�Ļص�
 * 
 * @param [in] TUP_UINT32 id        <b>:</b><br>[en]the id for identifying the different type of result msg.
 *                                          <br>[en]id should be chose in the enum TUP_EADDR_E_RESULT_OPER_ID.
 *                                          <br>[en]If id equals TUP_EADDR_E_HANDLE_PERSONINFO ,etc id==0,it should handle the result msg from
 *                                          <br>[en]the API searching contactors,so the value type should be  TUP_EADDR_S_SEARCH_CONTACTOR_RESULT. 
 *                                          <br>[en]else if id equals TUP_EADDR_E_HANDLE_ICON,etc id ==1,it should handle the result msg from the API searching contactor's icon,
 *                                          <br>[en]so the value type should be TUP_EADDR_S_GETICON_RESULT.
 *                                          <br>[en]else if id equals TUP_EADDR_E_HANDLE_DEPTINFO,etc id ==3,it should handle the result msg from the API searching contactor's department,
 *                                          <br>[en]so the value type should be TUP_EADDR_S_SEARCH_DEPT_RESULT.
 *                                          <br>[en]the caller should specify the operation for different result msg above.
 *                                          <br>[cn]��ʾ��ͬ����Ϣ����ص�id
 *                                          <br>[cn]id ��ֵ����ö��ֵTUP_EADDR_E_RESULT_OPER_ID�б仯����id����TUP_EADDR_E_HANDLE_PERSONINFO,��id==0ʱ,
 *                                          <br>[cn]�ص�Ӧ�����봦����ϵ�˲�ѯ���ؽ����Ϣ��֧��valueֵӦΪTUP_EADDR_SEARCH_CONTACTOR_RESULT���͡�
 *                                          <br>[cn]��id����TUP_EADDR_E_HANDLE_ICON,��id==1ʱ�ص�Ӧ�����봦����ϵ��ͷ���ѯ���ؽ����Ϣ��֧, 
 *                                          <br>[cn]valueֵӦΪTUP_EADDR_S_GETICON_RESULT���͡� 
 *                                          <br>[cn]��id ����TUP_EADDR_E_HANDLE_DEPTINFO,��id == 3ʱ�ص�Ӧ�����봦����ϵ�˲��Ų�ѯ���ؽ����Ϣ��֧�� 
 *                                          <br>[cn]valueֵӦΪTUP_EADDR_SEARCH_DEPT_RESULT���͡� 
 * @param [in] (TUP_VOID*)Value     <b>:</b><br>[en]msg content
 *                                          <br>[cn]��Ϣ����
 * @retval TUP_VOID 
 * 
 * @attention NA
 * @see  tup_eaddr_init
 **/
typedef void (*TUP_EADDR_FN_CALLBACK_PTR)(unsigned int ,void*);

/**
 * @ingroup OpenAPI
 * @brief [en]Interface for setting logfile path.
 *        <br>[cn]������־·�� 
 * 
 * @param [in] const TUP_EADDR_S_LOG_PARA *log_para        <b>:</b><br>[en]log parameters.
 *                                                                 <br>[cn]��־������Ϣ
 * @retval TUP_RESULT  <b>:</b><br>[en]The operation is successful if VOS_OK is returned; otherwise, the operation fails.
 *                                              <br>[cn]�ɹ�����VOS_OK��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_eaddr_set_log(const TUP_EADDR_S_LOG_PARA *log_para);

/**
 * @ingroup OpenAPI
 * @brief [en]Interface for init: create a thread and msg quene,register a callback
 *        <br>[cn]��ʼ��:���̣߳�����Ϣ���У�ע��ص� 
 * 
 * @param [in] TUP_EADDR_FN_CALLBACK_PTR tup_eaddr_callback        <b>:</b><br>[en]callback function.
 *                                                                         <br>[cn]�ص�����
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if VOS_OK is returned; otherwise, the operation fails.
 *                            <br>[cn]�ɹ�����VOS_OK��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see TUP_EADDR_FN_CALLBACK_PTR
 * @see tup_eaddr_uninit
 **/
TUP_API TUP_RESULT tup_eaddr_init(TUP_EADDR_FN_CALLBACK_PTR tup_eaddr_callback);

/**
 * @ingroup OpenAPI
 * @brief [en]Interface for setting uportal parameters and token.
 *        <br>[cn]����uportal������token 
 * 
 * @param [in] TUP_EADDR_S_UPORTAL_CONFIG * uportal_config        <b>:</b><br>[en]structure of the uportal configuration.
 *                                                                        <br>[cn]uportal ����
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if VOS_OK is returned; otherwise, the operation fails.
 *                            <br>[cn]�ɹ�����VOS_OK��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]This function should be invoked before set Icon.
 *            <br>[cn]����ÿ���ϴ�ͷ��ǰ����
 * @see NA
 **/
TUP_API TUP_RESULT tup_eaddr_config(TUP_EADDR_S_UPORTAL_CONFIG * uportal_config);

/**
 * @ingroup OpenAPI
 * @brief [en]Interface for setting system icon.
 *        <br>[cn]����ϵͳͷ�� 
 * 
 * @param [in] TUP_UINT32 icon_id        <b>:</b><br>[en]id for system icon.
 *                                               <br>[cn]ϵͳͷ�����
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if VOS_OK is returned; otherwise, the operation fails.
 *                            <br>[cn]�ɹ�����VOS_OK��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_eaddr_set_sysicon(TUP_UINT32 icon_id);

/**
 * @ingroup OpenAPI
 * @brief [en]Interface for setting self_defined icon.
 *        <br>[cn]�����Զ���ͷ�� 
 * 
 * @param [in] const TUP_EADDR_S_ICON* icon_info <b>:</b><br>[en]self-defined icon info.
 *                                                       <br>[cn]�Զ���ͷ����Ϣ
 * @param [in] TUP_CHAR* modify_time             <b>:</b><br>[en]icon-modified time.
 *                                                       <br>[cn]ͷ�����ʱ��
 * @param [in] TUP_UINT32 len                    <b>:</b><br>[en]icon-modified time string length.
 *                                                       <br>[cn]ͷ�����ʱ����ַ�������
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if VOS_OK is returned; otherwise, the operation fails.
 *                            <br>[cn]�ɹ�����VOS_OK��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_eaddr_set_deficon( const TUP_EADDR_S_ICON* icon_info,  TUP_CHAR *modify_time, TUP_UINT32 len);

/**
 * @ingroup OpenAPI
 * @brief [en]Interface for searching contactor info.
 *        <br>[cn]������ϵ�� 
 * 
 * @param [in] const TUP_EADDR_S_SEARCH_PARAM* search_param        <b>:</b><br>[en]searching configuration parameters.
 *                                                                         <br>[cn]��ѯ���������ò���
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if VOS_OK is returned; otherwise, the operation fails.
 *                            <br>[cn]�ɹ�����VOS_OK��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_eaddr_search_contactor( const TUP_EADDR_S_SEARCH_PARAM* search_param);

/**
 * @ingroup OpenAPI
 * @brief [en]Interface for get contactor icon.
 *        <br>[cn]������ϵ��ͷ�� 
 * 
 * @param [in] const TUP_EADDR_S_ICON_PARAM* icon_param        <b>:</b><br>[en]getting contactor icon configuration parameters.
 *                                                                     <br>[cn]��ѯͷ����������ò���
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if VOS_OK is returned; otherwise, the operation fails.
 *                            <br>[cn]�ɹ�����VOS_OK��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_eaddr_get_usericon(const TUP_EADDR_S_ICON_PARAM* icon_param);

/**
 * @ingroup OpenAPI
 * @brief [en]Interface for searching contactor department.
 *        <br>[cn]������ϵ�˲���
 * 
 * @param [in] const TUP_EADDR_S_DEP_PARAM *pstDep        <b>:</b><br>[en]searching department configuration parameters.
 *                                                                <br>[cn]��ѯ���ŷ��������ò���
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if VOS_OK is returned; otherwise, the operation fails.
 *                            <br>[cn]�ɹ�����VOS_OK��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_eaddr_search_department(const TUP_EADDR_S_DEP_PARAM *pstDep);



/**
 * @ingroup OpenAPI
 * @brief [en]Interface for uninit
 *        <br>[cn]ȥ��ʼ��
 * 
 * @param NA
 * @retval VOS_VOID 
 * 
 * @attention NA
 * @see tup_eaddr_init
 **/
TUP_API TUP_VOID tup_eaddr_uninit();

#ifdef __cplusplus
#if __cplusplus
}
#endif /* __cpluscplus */
#endif /* __cpluscplus */


#endif /* __TUP_EADDR_INTERFACE_H__ */
