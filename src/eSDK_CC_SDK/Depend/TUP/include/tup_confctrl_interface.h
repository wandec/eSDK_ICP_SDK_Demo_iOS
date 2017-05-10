/** 
 * @file tup_confctrl_interface.h
 * 
 * Copyright(C), 2012-2016, Huawei Tech. Co., Ltd. ALL RIGHTS RESERVED. \n
 * 
 * @brief [en]Description: The header files of TUP conference control subsystem basic service function interface
 * [cn]������TUP ���������ϵͳ����ҵ���ܽӿ�ͷ�ļ��� \n
 **/


#ifndef __CONFCTRL_INTERFACE_H__
#define __CONFCTRL_INTERFACE_H__

#include "tup_confctrl_def.h"

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif /*  __cpluscplus */
#endif /*  __cpluscplus */

/**
 * @defgroup AdvancedAPI
 * @brief [en]This module is about conference management and control advanced interface.
 *        <br>[cn]�������Ϳ��Ƹ߼��ӿ�.
 **/


/**
 * @defgroup OpenAPI
 * @brief [en]This module is about conference management and control interface.
 *        <br>[cn]�������Ϳ��ƽӿ�.
 **/

/**
 * @defgroup InitAndLoading
 * @ingroup OpenAPI
 * @brief [en]This module is about initialization and loading conference management and control components
 *        <br>[cn]��ʼ������ػ������Ϳ������
 **/

 
/**
 * @defgroup ConfConfiguration
 * @ingroup OpenAPI
 * @brief [en]This module is about conference environment and authentication information configuration
 *        <br>[cn]���黷���ͼ�Ȩ��Ϣ����
 **/
 

/**
 * @defgroup ConfCtrl
 * @ingroup OpenAPI
 * @brief [en]This module is about conference control
 *        <br>[cn]�������
 **/ 


/**
 * @defgroup ConfMng
 * @ingroup OpenAPI
 * @brief [en]This module is about conference management
 *        <br>[cn]�������
 **/ 


/**
 * @ingroup InitAndLoading.
 * @brief [en]This interface is used to set init param of conf control service
 *        <br>[cn]���û��ҵ���ʼ������
 * 
 * @param [in] const CONFCTRL_S_INIT_PARAM* param    <b>:</b><br>[en]Indicates init param of conf control service
 *                                                           <br>[cn]��������ʼ������
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCESS, otherwise return corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]It has to be set before init.
 *            <br>[cn]��ʼ��ǰ��������.
 * @see NA
 **/
TUP_API TUP_RESULT tup_confctrl_set_init_param(const CONFCTRL_S_INIT_PARAM* param);


/**
 * @ingroup InitAndLoading
 * @brief [en]This interface is used to set log parameters and start log.
 *        <br>[cn]���û����־������������־
 * 
 * @param [in] TUP_INT32 log_level        <b>:</b><br>[en]Indicates log level, refer to enum CONFCTRL_E_LOG_LEVEL.
 *                                                <br>[cn]��־����ȡֵ:ö����CONFCTRL_E_LOG_LEVEL
 * @param [in] TUP_INT32 max_size_kb      <b>:</b><br>[en]Indicates the maximum size(KB) of a log file, which is the maximum value that can be obtained using TUP_INT32 suggest 10*1024.
 *                                                <br>[cn]ÿ����־�ļ������ֵ����λ: KB�����ֵΪTUP_INT32����ȡ�������ֵ������Ϊ10*1024
 * @param [in] TUP_INT32 file_count       <b>:</b><br>[en]Indicates number of log files. The maximum value is the one that can be obtained using TUP_INT32 suggest 4.
 *                                                <br>[cn]��־�ļ����������ֵΪTUP_INT32����ȡ�������ֵ������Ϊ4 
 * @param [in] const TUP_CHAR* log_path   <b>:</b><br>[en]Indicates directory for storing log files,log path maximum value is 288 byte.
 *                                                <br>[cn]��־���·������־·�����ֵΪ288�ֽڡ� 
 * @retval TUP_VOID
 * 
 * @attention [en]This method must be invoked before initialization.
 *            <br>[cn]�����������ʼ��֮ǰ����
 * @see NA
 **/
TUP_API TUP_VOID tup_confctrl_log_config(IN TUP_INT32 log_level, IN TUP_INT32 max_size_kb, IN TUP_INT32 file_count, IN const TUP_CHAR* log_path);


/**
 * @ingroup InitAndLoading
 * @brief [en]This interface is used to init conf control service components
 *        <br>[cn]��ʼ�����ҵ�����
 * 
 * @param [in] TUP_VOID
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCESS, otherwise return corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]In this interface, create conf control main thread and init inner info queue
 *            <br>[cn]�˽ӿ��д���������̣߳��Լ���ʼ���ڲ���Ϣ����
 * @see tup_confctrl_set_init_param
   @see tup_confctrl_uninit
 **/
TUP_API TUP_RESULT tup_confctrl_init(TUP_VOID);


/**
 * @ingroup InitAndLoading
 * @brief [en]This interface is used to uninit conf control service components
 *        <br>[cn]ȥ��ʼ�����ҵ�����
 * 
 * @param [in] TUP_VOID
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCESS, otherwise return corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * @see tup_confctrl_init
 **/
TUP_API TUP_RESULT tup_confctrl_uninit(TUP_VOID);


/**
 * @ingroup InitAndLoading
 * @brief [en]This interface is used to register conference control service process notification callback function.
 *        <br>[cn]ע����ҵ����֪ͨ�ص�����
 * 
 * @param [in] CONFCTRL_FN_CALLBACK_PTR callback_process_notify    <b>:</b><br>[en]Indicates callback function address of conference control service event notification.
 *                                                                         <br>[cn]���ҵ���¼�֪ͨ�ص�������ַ
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCESS, otherwise return corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]NA
 *            <br>[cn]NA
 * @see CONFCTRL_FN_LOG_CALLBACK_PTR
 **/
TUP_API TUP_RESULT tup_confctrl_register_process_notifiy(IN CONFCTRL_FN_CALLBACK_PTR callback_process_notify);


/**
 * @ingroup ConfConfiguration
 * @brief [en]This interface is used to set conference environment type.
 *        <br>[cn]���û��黷������
 * 
 * @param [in] CONFCTRL_E_CONF_ENV_TYPE type    <b>:</b><br>[en]Indicates conference type, you can see detail in enum member explanation 
 *                                                  <br>[cn]�������ͣ������ö�ٳ�Ա˵��
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCESS, otherwise return corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]It has to be set before using conf service.
 *            <br>[cn]ʹ�û���ҵ��ǰ��Ҫ����
 * @see NA
 **/
TUP_API TUP_RESULT tup_confctrl_set_conf_env_type(IN CONFCTRL_E_CONF_ENV_TYPE type);


/**
 * @ingroup ConfConfiguration
 * @brief [en]This interface is used to set conf server address.
 *        <br>[cn]���û����������ַ
 * 
 * @param [in] const CONFCTRL_S_SERVER_PARA* param    <b>:</b><br>[en]Indicates conf server address.
 *                                                            <br>[cn]�����������ַ
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCESS, otherwise return corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]It has to be set before using conf service.
 *            <br>[cn]ʹ�û���ҵ��ǰ��Ҫ����
 * @see NA
 **/
TUP_API TUP_RESULT tup_confctrl_set_server_params(IN const CONFCTRL_S_SERVER_PARA* param);


/**
 * @ingroup ConfConfiguration
 * @brief [en]This interface is used to set authentication token.
 *        <br>[cn]���ü�Ȩƾ֤(Token)(mediax���� uportal����)
 * 
 * @param [in] const TUP_CHAR* token    <b>:</b><br>[en]Indicates authentication token.
 *                                              <br>[cn]��Ȩƾ֤(Token)
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCESS, otherwise return corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]This interface is used to IMS Hosted&SP Hosted network in VC solution plan, IMS Hosted&SP Hosted network in EC solution plan and all internal conference network in PBX solution plan.
 *            <br>[cn]�˽ӿ�Ӧ����VC�������IMS Hosted&SP Hosted������EC�������IMS Hosted&SP Hosted������PBX��������µ����û�����������
 * @see NA
 **/
TUP_API TUP_RESULT tup_confctrl_set_token(IN const TUP_CHAR* token);


/**
 * @ingroup ConfConfiguration
 * @brief [en]This interface is used to set authentication account password.
 *        <br>[cn]���ü�Ȩ�˺�����
 * 
 * @param [in] TUP_CHAR* account     <b>:</b><br>[en]Indicates account, the length of character should less than 256.
 *                                           <br>[cn]�˺�,�ַ�������С��256��
 * @param [in] TUP_CHAR* password    <b>:</b><br>[en]Indicates sip login password, the length of character should less than 256.
 *                                           <br>[cn]sip����Ϊsip��¼����,�ַ�������С��256��
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCESS, otherwise return corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]This interface is used to no-premise network in VC solution plan, account and password are user's sip account and password
 *            <br>[cn]�˽ӿ���VC���������פʽ(on-premise)������ʹ�ã��˺�����Ϊ�û���SIP�˺ź����룻
 *            <br>[en]Indicates due to SDK can't store account password, it has to be invoked before using interface of tup_confctrl_book_conf to order a conf.
 *            <br>[cn]��SDK���洢�˺����룬������ÿ��ʹ�ýӿ�tup_confctrl_book_confԤԼ����ǰ��Ҫ����
 * @see tup_confctrl_book_conf
 **/
TUP_API TUP_RESULT tup_confctrl_set_auth_code(IN TUP_CHAR* account, IN TUP_CHAR* password);

/**
 * @ingroup ConfConfiguration
 * @brief [en]This interface is used to set authorize account and password.
 *        <br>[cn]���ü�Ȩ�˺�����
 * 
 * @param [in] TUP_CHAR* account     <b>:</b><br>[en]Indicates account, the length of string need short than 256.
 *                                           <br>[cn]�˺�,�ַ�������С��256��
 * @param [in] TUP_CHAR* password    <b>:</b><br>[en]Indicates sip login password, the length of string need short than 256.
 *                                           <br>[cn]sip����Ϊsip��¼����,�ַ�������С��256��
  * @param [in] CONFCTRLC_E_CALL_TYPE type    <b>:</b><br>[en]Indicate conference type H323 or SIP.
 *                                           <br>[cn]��������H323 or SIP��
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]This interface is used in VC resolution plan on-premise network, account password is user's SIP account and password.
 *            <br>[cn]�˽ӿ���VC���������פʽ(on-premise)������ʹ�ã��˺�����Ϊ�û���SIP�˺ź����룻
 *            <br>[en]Because SDK don't store account and password, it need invoke before book conference by using interface tup_confctrl_book_conf.
 *            <br>[cn]��SDK���洢�˺����룬������ÿ��ʹ�ýӿ�tup_confctrl_book_confԤԼ����ǰ��Ҫ����
 * @see tup_confctrl_book_conf
 **/
TUP_API TUP_RESULT tup_confctrl_set_auth_code_Ex(IN TUP_CHAR *account, IN TUP_CHAR *password, IN CONFCTRLC_E_CALL_TYPE type);

/**
 * @ingroup ConfCtrl.
 * @brief [en]This interface is used to get user VMR list.
 *        <br>[cn]��ȡ����VMR�б�
 * 
 * @param [in] const TUP_VOID* get_vmr_list  <b>:</b><br>[en]Indicates to get user VMR list request info struct, refer to struct of CONFCTRL_S_GET_VMR_LIST
 *                                                   <br>[cn]��ȡ����VMR�б�������Ϣ�ṹ����Ӧ�����ݽṹΪCONFCTRL_S_GET_VMR_LIST
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCESS, otherwise return corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]NA
 *            <br>[cn]NA
 * @see CONFCTRL_E_EVT_GET_VMR_LIST_RESULT
 **/
TUP_API TUP_RESULT tup_confctrl_get_vmr_list(IN const TUP_VOID* get_vmr_list);


/**
 * @ingroup ConfMng
 * @brief [en]This interface is used to book conf(delay convene or at once)(MCU network mediax network uportal network).
 *        <br>[cn]ԤԼ����(��ʱ�ٿ��������ٿ�)(MCU���� mediax���� uportal����)
 * 
 * @param [in] TUP_VOID* book_conf_info  <b>:</b><br>[en]Indicates info of book conference.
 *                                               <br>[en]In On-premise VC meeting, corresponding structure is CONFCTRL_BOOKCONF_INFO_S.
 *                                               <br>[en]In Host VC meeting, corresponding structure is CONFCTRL_S_BOOK_CONF_INFO_MEDIAX.
 *                                               <br>[en]In convergent meeting(include PBX internal conference), corresponding structure is CONFCTRL_S_BOOK_CONF_INFO_UPORTAL.
 *                                               <br>[cn]ԤԼ������Ϣ
 *                                               <br>[cn]��On-premise VC�����£���Ӧ�����ݽṹΪCONFCTRL_BOOKCONF_INFO_S��
 *                                               <br>[cn]Hosted VC���飬��Ӧ�����ݽṹΪCONFCTRL_S_BOOK_CONF_INFO_MEDIAX��
 *                                               <br>[cn]Convergent meeting �ںϻ���(����PBX���û���)����Ӧ�����ݽṹΪCONFCTRL_S_BOOK_CONF_INFO_UPORTAL��
 *
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCESS, otherwise return corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]In on-premise VC meeting and Hosted VC meeting, corresponding callback event is CONFCTRL_E_EVT_BOOK_CONF_RESULT
 *            <br>[en]In convergent meeting(include PBX internal conference), corresponding callback event is CONFCTRL_E_EVT_UPORTAL_BOOK_CONF_RESULT
 *            <br>[en]In On-premise VC meeting, after invoking interface, until the CONFCTRL_E_EVT_BOOK_CONF_RESULT notice then can the next invoke, 
 *            <br>[en]otherwise it will returns SITECALL_EXIST_SITECALL results, interface need to do corresponding design to avoid it is used in this way.
 *            <br>[cn]On-premise VC�����Hosted VC���飬��Ӧ�Ļص��¼�ΪCONFCTRL_E_EVT_BOOK_CONF_RESULT
 *            <br>[cn]Convergent meeting �ںϻ���(����PBX���û���)����Ӧ�Ļص��¼�ΪCONFCTRL_E_EVT_UPORTAL_BOOK_CONF_RESULT
 *            <br>[cn]On-premise VC�����£��ӿڵ��ú���ȵ�CONFCTRL_E_EVT_BOOK_CONF_RESULT֪ͨ����ܿ�ʼ��һ�ε���, ���򽫷���SITECALL_EXIST_SITECALL�����������Ҫ����Ӧ��Ʊ����û�����ʹ��
 * @see CONFCTRL_E_EVT_BOOK_CONF_RESULT
 * @see CONFCTRL_E_EVT_UPORTAL_BOOK_CONF_RESULT
 **/
TUP_API TUP_RESULT tup_confctrl_book_conf(IN TUP_VOID* book_conf_info);


/**
 * @ingroup ConfMng
 * @brief [en]This interface is used to create conference(uportal network).
 *        <br>[cn]������ʱ����(uportal����)
 * 
 * @param [in] const TUP_VOID* conf_info    <b>:</b><br>[en]Indicates conference info.
 *                                                  <br>[en]In Convergent meeting(include PBX internal conference), corresponding structure is CONFCTRL_S_CREATE_CONF_INFO.
 *                                                  <br>[cn]������Ϣ
 *                                                  <br>[cn]��Convergent meeting �ںϻ���(����PBX���û���)�У���Ӧ�����ݽṹΪCONFCTRL_S_CREATE_CONF_INFO��
 * @param [out] TUP_UINT32* handle          <b>:</b><br>[en]Indicates conference handle.
 *                                                  <br>[cn]��ؾ��
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCESS, otherwise return corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see CONFCTRL_E_EVT_CREATE_CONF_RESULT 
 **/
TUP_API TUP_RESULT tup_confctrl_create_conf(IN const TUP_VOID* conf_info, OUT TUP_UINT32* handle);



/**
 * @ingroup ConfMng
 * @brief [en]This interface is used to get conference list.
 *        <br>[cn]��ȡ�����б�
 * 
 * @param [in] const TUP_VOID* get_conf_list  <b>:</b><br>[en]Indicates to get conference list info request structure.
 *                                                    <br>[en]On-premise VC meeting and Hosted VC meeting, not support at present.
 *                                                    <br>[en]In Convergent meeting(include PBX internal conference), corresponding structure is CONFCTRL_S_GET_CONF_LIST.
 *                                                    <br>[cn]��ȡ�����б���Ϣ����ṹ 
 *                                                    <br>[cn]On-premise VC�����Hosted VC���飬�ݲ�֧�֣� 
 *                                                    <br>[cn]Convergent meeting �ںϻ���(����PBX���û���)����Ӧ�����ݽṹΪCONFCTRL_S_GET_CONF_LIST��
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCESS, otherwise return corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]In Convergent meeting(include PBX internal conference), corresponding structure is CONFCTRL_E_EVT_GET_CONF_LIST_RESULT.
 *            <br>[cn]Convergent meeting �ںϻ���(����PBX���û���)����Ӧ�Ļص��¼�ΪCONFCTRL_E_EVT_GET_CONF_LIST_RESULT
 * @see CONFCTRL_E_EVT_GET_CONF_LIST_RESULT 
 **/
TUP_API TUP_RESULT tup_confctrl_get_conf_list(IN const TUP_VOID* get_conf_list);


/**
 * @ingroup ConfMng
 * @brief [en]This interface is used to get detail info of conference.
 *        <br>[cn]��ȡ������ϸ��Ϣ
 * 
 * @param [in] const TUP_VOID* get_conf_list  <b>:</b><br>[en]Indicates get detail info of conference request structure.
 *                                                    <br>[en]On-premise VC meeting and Hosted VC meeting, not support at present.
 *                                                    <br>[en]In Convergent meeting(include PBX internal conference), corresponding structure is CONFCTRL_S_CONF_LIST_INFO.
 *                                                    <br>[cn]��ȡ��ȡ������ϸ��Ϣ����ṹ 
 *                                                    <br>[cn]On-premise VC�����Hosted VC���飬�ݲ�֧�֣�
 *                                                    <br>[cn]Convergent meeting �ںϻ���(����PBX���û���)����Ӧ�����ݽṹΪCONFCTRL_S_GET_CONF_INFO��
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCESS, otherwise return corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]In Convergent meeting(include PBX internal conference), corresponding callback event is CONFCTRL_E_EVT_GET_CONF_INFO_RESULT.
 *            <br>[cn]Convergent meeting �ںϻ���(����PBX���û���)����Ӧ�Ļص��¼�ΪCONFCTRL_E_EVT_GET_CONF_INFO_RESULT
 * @see CONFCTRL_E_EVT_GET_CONF_INFO_RESULT 
 **/
TUP_API TUP_RESULT tup_confctrl_get_conf_info(IN const TUP_VOID* get_conf_info);


/**
 * @ingroup ConfCtrl
 * @brief [en]This interface is used to input conference control password of chairman.
 *        <br>[cn]������ϯ�������
 * 
 * @param [in] TUP_UINT32 conf_handle  <b>:</b><br>[en]Indicates conference control handle.
 *                                             <br>[cn]��ؾ��
 * @param [in] TUP_CHAR* password      <b>:</b><br>[en]Indicates chairman password.
 *                                             <br>[cn]��ϯ����
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCESS, otherwise return corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]This interface is used in VC solution settled (on-premise) network, when received CONFCTRL_E_EVT_ENTER_PASSWORD_TO_BE_CHAIRMAN, call the interface to enter the user's chairman password to continue to apply for the chairman process.
 *            <br>[cn]�˽ӿ���VC���������פʽ(on-premise)������ʹ�ã����յ�CONFCTRL_E_EVT_ENTER_PASSWORD_TO_BE_CHAIRMAN�����øýӿ������û�����ϯ���룬�Լ���������ϯ����
 * @see NA
 **/
TUP_API TUP_RESULT tup_confctrl_enter_chairman_password(IN TUP_UINT32 conf_handle, IN TUP_CHAR* password);


/**
 * @ingroup ConfCtrl.
 * @brief [en]This interface is used to get param info of joining data conference .
 *        <br>[cn]��ȡ���ݻ�����������Ϣ
 * 
 * @param [in] const CONFCTRL_S_GET_DATACONF_PARAMS* get_params  <b>:</b><br>[en]Indicates acquire conference param inputting param.
 *                                                                       <br>[cn]��ȡ�����������
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCESS, otherwise return corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]The data conference membership information is generally known as the "big data conference param", this interface 
 *            [en]is used in On-premise VC meeting, Hosted VC meeting and Convergent meeting(including PBX built-in Conference).
 *            <br>[cn]���ݻ��������Ϣһ�㱻��Ϊ"���ݻ�������"���˽ӿ�������On-premise VC���顢Hosted VC�����Convergent meeting �ںϻ���(����PBX���û���)
 * @see CONFCTRL_E_EVT_CONF_PARAMS_RESULT
 **/
TUP_API TUP_RESULT tup_confctrl_get_dataconf_params(IN const CONFCTRL_S_GET_DATACONF_PARAMS* get_params);


/**
 * @ingroup ConfCtrl.
 * @brief [en]This interface is used to create a conference control handle(MCU network uportal network).
 *        <br>[cn]����һ����ؾ��(MCU���� uportal����)
 * 
 * @param [in] TUP_VOID* conf_info        <b>:</b><br>[en]Indicates conference info.
 *                                                <br>[en]In On-premise VC meeting and Hosted VC meeting, corresponding data structure is CONFCTRL_MCUConfInfo.
 *                                                <br>[en]In Convergent meeting(include PBX built-in Conference), corresponding data structure is TUP_CHAR*.
 *                                                <br>[cn]������Ϣ
 *                                                <br>[cn]On-premise VC�����Hosted VC���飬��Ӧ�����ݽṹΪCONFCTRL_MCUConfInfo�� 
 *                                                <br>[cn]Convergent meeting �ںϻ���(����PBX���û���)����Ӧ�����ݽṹΪTUP_CHAR*��
 * @param [io] TUP_UINT32* conf_handle    <b>:</b><br>[en]Indicates conference handle.
 *                                                <br>[cn]��ؾ��
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCESS, otherwise return corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]In on-premise VC meeting and Hosted VC meeting: during MCU meeting, when receive call module callbak: CALL_E_EVT_IDO_OVER_BFCP, invokes this interface to create conf handle.
 *            [en]Start establishing a connection between MCU and control. When the control connection is established successfully, up CONFCTRL_E_EVT_CONFCTRL_CONNECTED
 *            [en]only received CONFCTRL_E_EVT_CONFCTRL_CONNECTED, can call other control interface will be controlled
 *            <br>[cn]On-premise VC�����Hosted VC����:MCU�����У����յ�����ģ��Ļص���Ϣ��CALL_E_EVT_IDO_OVER_BFCPʱ�����ô˽ӿڴ�����������
 *            <br>[cn]��ʼ������MCU֮��Ļ�����ӡ���������ӽ����ɹ�������CONFCTRL_E_EVT_CONFCTRL_CONNECTED��
 *            <br>[cn]ֻ���յ�CONFCTRL_E_EVT_CONFCTRL_CONNECTED���ſ��Ե���������ؽӿڽ��л�ء�
 **/
TUP_API TUP_RESULT tup_confctrl_create_conf_handle(IN TUP_VOID* conf_info, IO TUP_UINT32* conf_handle);


/**
 * @ingroup ConfCtrl.
 * @brief [en]This interface is used to destroy conference control handle.
 *        <br>[cn]���ٻ�ؾ��
 * 
 * @param [in] TUP_UINT32 conf_handle  <b>:</b><br>[en]Indicates conference control handle.
 *                                             <br>[cn]��ؾ��
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCESS, otherwise return corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]In on-premise VC meeting and Hosted VC meeting: when receive call module callback:CALL_E_EVT_CALL_DESTROY, invokes this interface to destroy conf handle
 *            <br>[cn]On-premise VC�����Hosted VC�����У����յ�����ģ��Ļص���Ϣ��CALL_E_EVT_CALL_DESTROYʱ�����ô˽ӿ����ٻ�ؾ��
 * @see NA
 **/
TUP_API TUP_RESULT tup_confctrl_destroy_conf_handle(IN TUP_UINT32 conf_handle);


/**
 * @ingroup ConfCtrl
 * @brief [en]This interface is used to add attendee.
 *        <br>[cn]��������
 * 
 * @param [in] TUP_UINT32 conf_handle       <b>:</b><br>[en]Indicates conference control handle.
 *                                                  <br>[cn]��ؾ��
 * @param [in] TUP_VOID*  attendee_info     <b>:</b><br>[en]Indicates attendee info.
 *                                                  <br>[en]In On-premise VC meeting and Hosted VC meeting, corresponding data struct is CC_AddTerminalInfo.
 *                                                  <br>[en]In Convergent meeting(include PBX internal conference), corresponding data struct is CONFCTRL_S_ADD_ATTENDEES_INFO.
 *                                                  <br>[cn]�������Ϣ 
 *                                                  <br>[cn]On-premise VC�����Hosted VC���飬��Ӧ�����ݽṹΪCC_AddTerminalInfo�� 
 *                                                  <br>[cn]Convergent meeting �ںϻ���(����PBX���û���)����Ӧ�����ݽṹΪCONFCTRL_S_ADD_ATTENDEES_INFO��
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCESS, otherwise return corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]NA
 *            <br>[cn]NA
 * @see CONFCTRL_E_EVT_ADD_ATTENDEE_RESULT
 **/
TUP_API TUP_RESULT tup_confctrl_add_attendee(IN TUP_UINT32 conf_handle, IN TUP_VOID* attendee_info);


/**
 * @ingroup ConfCtrl
 * @brief [en]This interface is used to remove attendee.
 *        <br>[cn]ɾ�������
 * 
 * @param [in] TUP_UINT32 conf_handle       <b>:</b><br>[en]Indicates conference handle.
 *                                                  <br>[cn]��ؾ��
 * @param [in] TUP_VOID* attendee           <b>:</b><br>[en]Indicates attendee info.
 *                                                  <br>[en]In on-premise VC meeting and Hosted VC meeting, corresponding data structure is CONFCTRL_S_ATTENDEE_VC.
 *                                                  <br>[en]In Convergent meeting(include PBX internal conference), corresponding data structure is TUP_CHAR*.
 *                                                  <br>[cn]�������Ϣ
 *                                                  <br>[cn]On-premise VC�����Hosted VC���飬��Ӧ�����ݽṹΪCONFCTRL_S_ATTENDEE_VC�� 
 *                                                  <br>[cn]Convergent meeting �ںϻ���(����PBX���û���)����Ӧ�����ݽṹΪTUP_CHAR*��
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCESS, otherwise return corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see CONFCTRL_E_EVT_DEL_ATTENDEE_RESULT 
 **/
TUP_API TUP_RESULT tup_confctrl_remove_attendee(IN TUP_UINT32 conf_handle, IN TUP_VOID* attendee);


/**
 * @ingroup ConfCtrl
 * @brief [en]This interface is used to set whether mute conference(uportal network).
 *        <br>[cn]���û�ȡ�������᳡
 * 
 * @param [in] TUP_UINT32 conf_handle       <b>:</b><br>[en]Indicates conference handle.
 *                                                  <br>[cn]��ؾ��
 * @param [in] TUP_BOOL is_mute             <b>:</b><br>[en]Indicates whether mute.
 *                                                  <br>[cn]�Ƿ����
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCESS, otherwise return corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]Under chairman conference control, when mute conference attendee can only listen not speak except chairman. Only Convergent meeting support at present
 *            <br>[cn]��ϯ��أ������᳡ʱ������ϯ�⣬��������߾���������˵����ǰ��Convergent meeting �ںϻ���(����PBX���û���)֧��
 *            <br>[en]In Convergent meeting, corresponding result event notification is CONFCTRL_E_EVT_MUTE_CONF_RESULT. 
 *            <br>[cn]��Convergent meeting �ںϻ���(����PBX���û���)�£���Ӧ�Ľ���¼�֪ͨΪCONFCTRL_E_EVT_MUTE_CONF_RESULT�� 
 * @see CONFCTRL_E_EVT_MUTE_CONF_RESULT
 **/
TUP_API TUP_RESULT tup_confctrl_mute_conf(IN TUP_UINT32 conf_handle, IN TUP_BOOL is_mute);


/**
 * @ingroup ConfCtrl
 * @brief [en]This interface is used to mute attendee.
 *        <br>[cn]���������
 * 
 * @param [in] TUP_UINT32 conf_handle       <b>:</b><br>[en]Indicates conference handle.
 *                                                  <br>[cn]��ؾ��
 * @param [in] TUP_VOID* attendee           <b>:</b><br>[en]Indicates attendee info.
 *                                                  <br>[en]Indicates on-premise VC meeting and Hosted VC meeting, corresponding data structure is CONFCTRL_S_ATTENDEE_VC
 *                                                  <br>[en]Indicates Convergent meeting(include PBX internal conference), corresponding data structure is TUP_CHAR*.
 *                                                  <br>[cn]�������Ϣ 
 *                                                  <br>[cn]On-premise VC�����Hosted VC���飬��Ӧ�����ݽṹΪCONFCTRL_S_ATTENDEE_VC�� 
 *                                                  <br>[cn]Convergent meeting �ںϻ���(����PBX���û���)����Ӧ�����ݽṹΪTUP_CHAR*;
 * @param [in] TUP_BOOL is_mute             <b>:</b><br>[en]Indicates whether mute.
 *                                                  <br>[cn]�Ƿ����
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCESS, otherwise return corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]Chairman can mute all attendee, normal attendee can only mute themselves, attendee can only listen not speak when they are muted.
 *            <br>[en]In on-premise VC meeting and Hosted VC meeting, if no corresponding result returned, present results by updating the attendee list
 *            <br>[en]In Convergent meeting(include PBX internal conference), corresponding result event notification is CONFCTRL_E_EVT_MUTE_ATTENDEE_RESULT
 *            <br>[cn]��ϯ�ɶ�������������û�ȡ����������ͨ�����ֻ�ɶ��Լ����û�ȡ���ռ䣬�����ñ���ʱ������߿�������˵�� 
 *            <br>[cn]On-premise VC�����Hosted VC�����£�����Ӧ�Ľ��֪ͨ���أ�ͨ��������б���������ֽ��; 
 *            <br>[cn]��Convergent meeting �ںϻ���(����PBX���û���)�£���Ӧ�Ľ���¼�֪ͨΪCONFCTRL_E_EVT_MUTE_ATTENDEE_RESULT��
 * @see CONFCTRL_E_EVT_MUTE_ATTENDEE_RESULT  
 **/
TUP_API TUP_RESULT tup_confctrl_mute_attendee(IN TUP_UINT32 conf_handle, IN TUP_VOID* attendee, IN TUP_BOOL is_mute);



/**
 * @ingroup ConfCtrl
 * @brief [en]This interface is used to hang up attendee(MCU network uportal network).
 *        <br>[cn]�Ҷ������(MCU���� uportal����)
 * 
 * @param [in] TUP_UINT32 conf_handle       <b>:</b><br>[en]Indicates conference handle.
 *                                                  <br>[cn]��ؾ��
 * @param [in] TUP_VOID* attendee           <b>:</b><br>[en]Indicates attendee info.
 *                                                  <br>[en]In on-premise VC meeting and Hosted VC meeting, corresponding data struct is CONFCTRL_S_ATTENDEE_VC.
 *                                                  <br>[en]In convergent meeting(including PBX internal conf), corresponding data struct is TUP_CHAR*.
 *                                                  <br>[cn]�������Ϣ 
 *                                                  <br>[cn]On-premise VC�����Hosted VC���飬��Ӧ�����ݽṹΪCONFCTRL_S_ATTENDEE_VC�� 
 *                                                  <br>[cn]Convergent meeting �ںϻ���(����PBX���û���)����Ӧ�����ݽṹΪTUP_CHAR*��
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCESS, otherwise return corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]Corresponding result event notify is CONFCTRL_E_EVT_HANGUP_ATTENDEE_RESULT.
 *            <br>[cn]��Ӧ�Ľ���¼�֪ͨΪCONFCTRL_E_EVT_HANGUP_ATTENDEE_RESULT
 * @see CONFCTRL_E_EVT_HANGUP_ATTENDEE_RESULT  
 **/
TUP_API TUP_RESULT tup_confctrl_hang_up_attendee(IN TUP_UINT32 conf_handle, IN TUP_VOID* attendee);


/**
 * @ingroup ConfCtrl
 * @brief [en]This interface is used to recall attendee.
 *        <br>[cn]�ز������
 * 
 * @param [in] TUP_UINT32 conf_handle       <b>:</b><br>[en]Indicates conference handle.
 *                                                  <br>[cn]��ؾ��
 * @param [in] TUP_VOID* attendee           <b>:</b><br>[en]Indicates attendee info.
 *                                                  <br>[en]Indicates on-premise VC meeting and Hosted VC meeting, corresponding data structure is CONFCTRL_S_ATTENDEE_VC.
 *                                                  <br>[en]Indicates convergent meeting(include PBX internal conference), corresponding data structure is TUP_CHAR*.
 *                                                  <br>[cn]�������Ϣ 
 *                                                  <br>[cn]On-premise VC�����Hosted VC�����У���Ӧ�����ݽṹΪCONFCTRL_S_ATTENDEE_VC�� 
 *                                                  <br>[cn]Convergent meeting �ںϻ���(����PBX���û���)����Ӧ�����ݽṹΪTUP_CHAR*;
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCESS, otherwise return corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]Under chairman conference control, recall off line attendee.
 *            <br>[en]In on-premise VC meeting and Hosted VC meeting, no corresponding result returned, update CONFCTRL_E_EVT_ATTENDEE_UPDATE_IND by attendee list to present result
 *            <br>[en]In convergent meeting(include PBX internal conference), corresponding result event notification CONFCTRL_E_EVT_CALL_ATTENDEE_RESULT
 *            <br>[cn]��ϯ��أ����º�������������д������״̬������� 
 *            <br>[cn]On-premise VC�����Hosted VC�����£�����Ӧ�Ľ��֪ͨ���أ�ͨ��������б����CONFCTRL_E_EVT_ATTENDEE_UPDATE_IND�����ֽ��; 
 *            <br>[cn]��Convergent meeting �ںϻ���(����PBX���û���)�£���Ӧ�Ľ���¼�֪ͨΪCONFCTRL_E_EVT_CALL_ATTENDEE_RESULT��
 * @see CONFCTRL_E_EVT_ATTENDEE_UPDATE_IND 
 * @see CONFCTRL_E_EVT_CALL_ATTENDEE_RESULT  
 **/
TUP_API TUP_RESULT tup_confctrl_call_attendee(IN TUP_UINT32 conf_handle, IN TUP_VOID* attendee);


/**
 * @ingroup ConfCtrl
 * @brief [en]This interface is used to apply for chairman.
 *        <br>[cn]������ϯȨ��
 * 
 * @param [in] TUP_UINT32 conf_handle       <b>:</b><br>[en]Indicates conference handle.
 *                                                  <br>[cn]��ؾ��
 * @param [in] TUP_CHAR* password           <b>:</b><br>[en]Indicates chairman password, on-premise VC meeting and Hosted VC meeting need to write.
 *                                                  <br>[cn]��ϯ���룬On-premise VC�����Hosted VC������Ҫ��д
 * @param [in] const TUP_CHAR* number       <b>:</b><br>[en]Indicates applicant number, convergent meeting(not including pbx internal conference) write.
 *                                                  <br>[cn]�����ߵĺ��룬Convergent meeting �ںϻ���(������PBX���û���)��д
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCESS, otherwise return corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]In on-premise VC meeting and Hosted VC meeting, default no chairman at conference begin, chairman need to use this interface to apply for chairman, refer to result event notify is CONFCTRL_E_EVT_REQ_CHAIRMAN_RESULT
 *            <br>[en]In convergent meeting(not include PBX internal conference), normal attendee can apply for chairman when there is no chairman in conference, refer to result event notify CONFCTRL_E_EVT_REQ_CHAIRMAN_RESULT
 *            <br>[cn]On-premise VC�����Hosted VC�����£����ʱĬ��û����ϯ����ϯ����Ӧͨ���˽ӿ������Ϊ��ϯ����Ӧ�Ľ���¼�֪ͨΪCONFCTRL_E_EVT_REQ_CHAIRMAN_RESULT; 
 *            <br>[cn]��Convergent meeting �ںϻ���(������PBX���û���)�£��ڻ�����û����ϯʱ����ͨ�û�����ͨ���˽ӿ������Ϊ��ϯ����Ӧ�Ľ���¼�֪ͨΪCONFCTRL_E_EVT_REQ_CHAIRMAN_RESULT��
 * @see CONFCTRL_E_EVT_REQ_CHAIRMAN_RESULT  
 **/
TUP_API TUP_RESULT tup_confctrl_request_chairman(IN TUP_UINT32 conf_handle, IN TUP_CHAR* password, IN const TUP_CHAR* number);


/**
 * @ingroup ConfCtrl
 * @brief [en]This interface is used to release chairman's right(MCU network uportal network).
 *        <br>[cn]�ͷ���ϯȨ��(MCU���� uportal����)
 * 
 * @param [in] TUP_UINT32 conf_handle       <b>:</b><br>[en]Indicates conference handle.
 *                                                  <br>[cn]��ؾ��
 * @param [in] const TUP_CHAR* number       <b>:</b><br>[en]Indicates release chairman's number, convergent meeting(not including pbx internal conference) write.
 *                                                  <br>[cn]�ͷ���ϯ�ߵĺ��룬Convergent meeting �ںϻ���(������PBX���û���)��д
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCESS, otherwise return corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]Corresponding result event notify is CONFCTRL_E_EVT_REALSE_CHAIRMAN_RESULT.
 *            <br>[cn]��Ӧ�Ľ���¼�֪ͨΪCONFCTRL_E_EVT_REALSE_CHAIRMAN_RESULT
 * @see CONFCTRL_E_EVT_REALSE_CHAIRMAN_RESULT 
 **/
TUP_API TUP_RESULT tup_confctrl_release_chairman(IN TUP_UINT32 conf_handle, IN const TUP_CHAR* number);


/**
 * @ingroup ConfCtrl
 * @brief [en]This interface is used to postpone conference(MCU network uportal network).
 *        <br>[cn]�ӳ�����(MCU���� uportal����)
 * 
 * @param [in] TUP_UINT32 conf_handle       <b>:</b><br>[en]Indicates conference handle.
 *                                                  <br>[cn]��ؾ��
 * @param [in] TUP_UINT16 time              <b>:</b><br>[en]Indicates postpone time, the unit is minute.
 *                                                  <br>[cn]�ӳ�ʱ�䣬��λ������
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCESS, otherwise return corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]It's supported in on-premise VC meeting, Hosted VC meeting and convergent meeting(not including PBX internal conference), corresponding result event notify is CONFCTRL_E_EVT_CONF_POSTPONE_RESULT.
 *            <br>[cn]On-premise VC���顢Hosted VC�����Convergent meeting �ںϻ���(������PBX���û���)�¾�֧�֣���Ӧ�Ľ���¼�֪ͨΪCONFCTRL_E_EVT_CONF_POSTPONE_RESULT
 * @see CONFCTRL_E_EVT_CONF_POSTPONE_RESULT 
 **/
TUP_API TUP_RESULT tup_confctrl_postpone_conf(IN TUP_UINT32 conf_handle, IN TUP_UINT16 time);


/**
 * @ingroup ConfCtrl
 * @brief [en]This interface is used to set whether lock conference.
 *        <br>[cn]���û�ȡ����������
 * 
 * @param [in] TUP_UINT32 conf_handle       <b>:</b><br>[en]Indicates conference handle.
 *                                                  <br>[cn]��ؾ��
 * @param [in] TUP_BOOL is_lock             <b>:</b><br>[en]Indicates whether lock conference.
 *                                                  <br>[cn]�Ƿ���������
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCESS, otherwise return corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]Under chairman conference control, when conference is locked attendees can not join conference by any way except invited by chairman.
 *            <br>[en]At present it's only supported in convergent meeting(include PBX internal conference), corresponding result event notify is CONFCTRL_E_EVT_LOCK_CONF_RESULT
 *            <br>[cn]��ϯ��أ����������󣬳���ϯ�����⣬�����˲���ͨ���κ�;���������; 
 *            <br>[cn]��ǰ����Convergent meeting �ںϻ���(����PBX���û���)��֧�֣���Ӧ�Ľ���¼�֪ͨΪCONFCTRL_E_EVT_LOCK_CONF_RESULT
 * @see CONFCTRL_E_EVT_LOCK_CONF_RESULT 
 **/
TUP_API TUP_RESULT tup_confctrl_lockconf(IN TUP_UINT32 conf_handle, IN TUP_BOOL is_lock);


/**
 * @ingroup ConfCtrl
 * @brief [en]This interface is used to set whether hand up.
 *        <br>[cn]���û�ȡ������
 * 
 * @param [in] TUP_UINT32 conf_handle       <b>:</b><br>[en]Indicates conference handle.
 *                                                  <br>[cn]��ؾ��
 * @param [in] TUP_BOOL is_handup           <b>:</b><br>[en]Indicates whether hand up.
 *                                                  <br>[cn]�Ƿ����
 * @param [in] TUP_VOID* attendee           <b>:</b><br>[en]Indicates attendee info.
 *                                                  <br>[en]In on-premise VC meeting and Hosted VC meeting, not support at present.
 *                                                  <br>[en]In convergent meeting(not including PBX internal conference), only need to write when chairman cancel attendee hand up, corresponding struct is TUP_CHAR*.
 *                                                  <br>[cn]�������Ϣ 
 *                                                  <br>[cn]On-premise VC�����Hosted VC���飬�ݲ�֧�֣� 
 *                                                  <br>[cn]Convergent meeting �ںϻ���(����PBX���û���)��������ϯȡ������߾���ʱ��Ҫ��д����Ӧ�����ݽṹΪTUP_CHAR*��
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCESS, otherwise return corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]At present it's only supported in convergent meeting(include PBX internal conference), corresponding result event notify is CONFCTRL_E_EVT_HANDUP_RESULT or CONFCTRL_E_EVT_HANDDOWN_ATTENDEE_RESULT.
 *            <br>[cn]��ǰ����Convergent meeting �ںϻ���(����PBX���û���)��֧�֣���Ӧ�Ľ���¼�֪ͨΪCONFCTRL_E_EVT_HANDUP_RESULT��CONFCTRL_E_EVT_HANDDOWN_ATTENDEE_RESULT
 * @see CONFCTRL_E_EVT_HANDUP_RESULT 
 * @see CONFCTRL_E_EVT_HANDDOWN_ATTENDEE_RESULT  
 **/
TUP_API TUP_RESULT tup_confctrl_handup(IN TUP_UINT32 conf_handle, IN TUP_BOOL is_handup, IN const TUP_VOID* attendee);


/**
 * @ingroup ConfCtrl
 * @brief [en]This interface is used to start p2p to conference(uportal network).
 *        <br>[cn]��������ת�������� (uportal����)
 * 
 * @param [in] TUP_UINT32 callid                  <b>:</b><br>[en]Indicates p2p call id.
 *                                                        <br>[cn]��Ե�ͨ������id
 * @param [in] const TUP_VOID* create_conf_info   <b>:</b><br>[en]Indicates conference create info.
 *                                                        <br>[en]In on-premise VC meeting and Hosted VC meeting, not support at present.
 *                                                        <br>[en]In convergent meeting(including PBX internal conference), only need to write when chairman cancel attendee hand up, corresponding struct is CONFCTRL_S_CREATE_CONF_INFO.
 *                                                        <br>[cn]���鴴����Ϣ
 *                                                        <br>[cn]On-premise VC�����Hosted VC���飬�ݲ�֧�֣� 
 *                                                        <br>[cn]Convergent meeting �ںϻ���(����PBX���û���)��������ϯȡ������߾���ʱ��Ҫ��д����Ӧ�����ݽṹΪCONFCTRL_S_CREATE_CONF_INFO��
 * @param [out] TUP_UINT32* handle                <b>:</b><br>[en]Indicates conference handle.
 *                                                        <br>[cn]��ؾ�� 
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCESS, otherwise return corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]At present it's only supported in convergent meeting(include PBX internal conference), corresponding result event notify is CONFCTRL_E_EVT_TRANS_TO_CONF_RESULT.
 *            <br>[cn]��ǰ����Convergent meeting �ںϻ���(����PBX���û���)��֧�֣���Ӧ�����ս���¼�֪ͨΪCONFCTRL_E_EVT_TRANS_TO_CONF_RESULT��
 * @see CONFCTRL_E_EVT_TRANS_TO_CONF_RESULT 
 **/
TUP_API TUP_RESULT tup_confctrl_p2p_transfer_to_conf(IN TUP_UINT32 callid, IN const TUP_VOID* create_conf_info, OUT TUP_UINT32* handle);

/**
 * @ingroup ConfCtrl
 * @brief [en]This interface is used to start p2p transform to conference(uportal network). If UI has been created success, TUP send REFER to SIP server, pull the call to the conference.
 *        <br>[cn]��������ת�������� (uportal����)��UI�Ѵ�������ɹ���TUP��REFER��SIP server���Ѻ��жԶ�������顣
 * 
 * @param [in] TUP_UINT32 confid                  <b>:</b><br>[en]Indicates conference id.
 *                                                        <br>[cn]����id
 * @param [in] TUP_UINT32 callid                  <b>:</b><br>[en]Indicates p2p call id.
 *                                                        <br>[cn]��Ե�ͨ������id
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCESS, otherwise return corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]At present only 89xx phone will use this interface to transform two to three.
 *            <br>[cn]��ǰ��89������ʹ�øýӿڽ�����ת��
 * @see CONFCTRL_E_EVT_TRANS_TO_CONF_RESULT 
 **/
TUP_API TUP_RESULT tup_confctrl_transferto_conf(TUP_UINT32 confid, TUP_UINT32 callid);

/**
 * @ingroup ConfCtrl
 * @brief [en]This interface is used to upgrade conference(video or data conference)(uportal network).
 *        <br>[cn]�������飨��Ƶ�����ݻ��飩 (uportal����)
 * 
 * @param [in] TUP_UINT32 conf_handle             <b>:</b><br>[en]Indicates conference handle.
 *                                                        <br>[cn]��ؾ��
 * @param [in] const CONFCTRL_S_ADD_MEDIA* upgrade_param  <b>:</b><br>[en]Indicates upgrade params
 *                                                        <br>[cn]������������ 
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCESS, otherwise return corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]Corresponding result event notify is CONFCTRL_E_EVT_UPGRADE_CONF_RESULT.
 *            <br>[cn]��Ӧ�Ľ���¼�֪ͨΪCONFCTRL_E_EVT_UPGRADE_CONF_RESULT
 * @see CONFCTRL_E_EVT_UPGRADE_CONF_RESULT 
 **/
TUP_API TUP_RESULT tup_confctrl_upgrade_conf(IN TUP_UINT32 conf_handle, IN const CONFCTRL_S_ADD_MEDIA* upgrade_param);


/**
 * @ingroup ConfCtrl
 * @brief [en]This interface is used to set conference mode.
 *        <br>[cn]���û���ģʽ
 * 
 * @param [in] TUP_UINT32 conf_handle             <b>:</b><br>[en]Indicates conference handle.
 *                                                        <br>[cn]��ؾ��
 * @param [in] CONFCTRL_E_CONF_MODE mode          <b>:</b><br>[en]Indicates conference mode.
 *                                                        <br>[cn]����ģʽ
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCESS, otherwise return corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]At present it's only supported in convergent meeting(not include PBX internal conference), corresponding result event notify is CONFCTRL_E_EVT_SET_CONF_MODE_RESULT.
 *            <br>[cn]��ǰ����Convergent meeting �ںϻ���(������PBX���û���)��֧�֣���Ӧ�����ս���¼�֪ͨΪCONFCTRL_E_EVT_SET_CONF_MODE_RESULT��
 * @see CONFCTRL_E_EVT_SET_CONF_MODE_RESULT 
 **/
TUP_API TUP_RESULT tup_confctrl_set_conf_mode(IN TUP_UINT32 conf_handle, CONFCTRL_E_CONF_MODE mode);


/**
 * @ingroup ConfCtrl
 * @brief [en]This interface is used to subscribe conference info(uportal network).
 *        <br>[cn]���Ļ�����Ϣ (uportal����)
 * 
 * @param [in] TUP_UINT32 conf_handle             <b>:</b><br>[en]Indicates conference handle.
 *                                                        <br>[cn]��ؾ��
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCESS, otherwise return corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]At present it's only supported in convergent meeting(include PBX internal conf), use in ctc conf, corresponding result event notify is CONFCTRL_E_EVT_SUBSCRIBE_CONF_RESULT.
 *            <br>[cn]��ǰ����Convergent meeting �ںϻ���(����PBX���û���)��֧�֣���CTC����ʹ�ã���Ӧ�����ս���¼�֪ͨΪCONFCTRL_E_EVT_SUBSCRIBE_CONF_RESULT��
 * @see CONFCTRL_E_EVT_SUBSCRIBE_CONF_RESULT 
 **/
TUP_API TUP_RESULT tup_confctrl_subscribe_conf(IN TUP_UINT32 conf_handle);


/**
 * @ingroup ConfCtrl
 * @brief [en]This interface is used to accept conference call.
 *        <br>[cn]������������
 * 
 * @param [in] TUP_UINT32 conf_handle      <b>:</b><br>[en]Indicates conference handle.
 *                                                 <br>[cn]��ؾ��
 * @param [in] TUP_BOOL join_video_conf   <b>:</b><br>[en]Indicates whether join video conference, used in convergent meeting(not including pbx internal conference).
                                                       [cn]�Ƿ������Ƶ���飬��Convergent meeting �ںϻ���(������PBX���û���)��Ч
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCESS, otherwise return corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]At present only convergent meeting(including pbx internal conference) support, corresponding result event notify is CONFCTRL_E_EVT_CONF_CONNECTED_IND.
 *            <br>[cn]��ǰ����Convergent meeting �ںϻ���(����PBX���û���)��֧�֣���Ӧ�����ս���¼�֪ͨΪCONFCTRL_E_EVT_CONF_CONNECTED_IND��
 * @see CONFCTRL_E_EVT_CONF_CONNECTED_IND 
 **/
TUP_API TUP_RESULT tup_confctrl_accept_conf(IN TUP_UINT32 conf_handle, IN TUP_BOOL join_video_conf);


/**
 * @ingroup ConfCtrl
 * @brief [en]This interface is used to reject conference call.
 *        <br>[cn]�ܽ�����
 * 
 * @param [in] TUP_UINT32 conf_handle      <b>:</b><br>[en]Indicates conf handle.
 *                                                 <br>[cn]��ؾ��
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCESS, otherwise return corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]At present it's only supported in convergent meeting(include PBX internal conference).
 *            <br>[cn]��ǰ����Convergent meeting �ںϻ���(����PBX���û���)��֧��
 * @see NA 
 **/
TUP_API TUP_RESULT tup_confctrl_reject_conf(IN TUP_UINT32 conf_handle);


/**
 * @ingroup ConfCtrl
 * @brief [en]This interface is used to leave conference.
 *        <br>[cn]�뿪����(uportal����)
 * 
 * @param [in] TUP_UINT32 conf_handle      <b>:</b><br>[en]Indicates conference handle.
 *                                                 <br>[cn]��ؾ��
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCESS, otherwise return corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]Used in CTC, at present it's only supported in convergent meeting(include PBX internal conference), corresponding result event notify is CONFCTRL_E_EVT_END_CONF_IND.
 *            <br>[cn]CTC��ʹ�ã���ǰ����Convergent meeting �ںϻ���(����PBX���û���)��֧�֣���Ӧ�����ս���¼�֪ͨΪCONFCTRL_E_EVT_END_CONF_IND
 * @see CONFCTRL_E_EVT_END_CONF_IND 
 **/
TUP_API TUP_RESULT tup_confctrl_leave_conf(IN TUP_UINT32 conf_handle);


/**
 * @ingroup ConfCtrl
 * @brief [en]This interface is used to end conference(uportal network).
 *        <br>[cn]��������
 * 
 * @param [in] TUP_UINT32 conf_handle      <b>:</b><br>[en]Indicates conference handle.
 *                                                 <br>[cn]��ؾ��
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCESS, otherwise return corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]In convergent meeting(include PBX internal conference), chairman side receive end conference result: CONFCTRL_E_EVT_END_CONF_RESULT, other attendee receive corresponding conference end notification: CONFCTRL_E_EVT_END_CONF_IND.
 *            [en]In On-premise VC meeting��Hosted VC meeting, chairman side and other attendee sides will receive call end notification: CALL_E_EVT_CALL_ENDED and delete call id notification:CALL_E_EVT_CALL_DESTROY.
 *            <br>[cn]��Convergent meeting �ںϻ���(����PBX���û���)�£���ϯ���յ�����������:CONFCTRL_E_EVT_END_CONF_RESULT������������յ���Ӧ�Ļ������֪ͨCONFCTRL_E_EVT_END_CONF_IND
 *            <br>[cn]��On-premise VC���顢Hosted VC�����£���ϯ�����������߲඼���յ����н���֪ͨ:CALL_E_EVT_CALL_ENDED��ɾ������ID֪ͨ:CALL_E_EVT_CALL_DESTROY
 * @see CONFCTRL_E_EVT_END_CONF_IND 
 **/
TUP_API TUP_RESULT tup_confctrl_end_conf(IN TUP_UINT32 conf_handle);


/**
 * @ingroup ConfCtrl
 * @brief [en]This interface is used to hold conference.
 *        <br>[cn]���ֻ���(uportal����)
 * 
 * @param [in] TUP_UINT32 conf_handle      <b>:</b><br>[en]Indicates conf handle.
 *                                                 <br>[cn]��ؾ��
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCESS, otherwise return corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]At present it's only supported in convergent meeting(include PBX internal conf), corresponding result event notify is CONFCTRL_E_EVT_HOLD_CONF_RESULT.
 *            <br>[cn]��ǰ����Convergent meeting �ںϻ���(����PBX���û���)��֧�֣���Ӧ�����ս���¼�֪ͨΪCONFCTRL_E_EVT_HOLD_CONF_RESULT
 * @see CONFCTRL_E_EVT_HOLD_CONF_RESULT 
 **/
TUP_API TUP_RESULT tup_confctrl_hold_conf(IN TUP_UINT32 conf_handle);


/**
 * @ingroup ConfCtrl
 * @brief [en]This interface is used to unhold conference.
 *        <br>[cn]ȡ�����ֻ���(uportal����)
 * 
 * @param [in] TUP_UINT32 conf_handle      <b>:</b><br>[en]Indicates conference handle.
 *                                                 <br>[cn]��ؾ��
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCESS, otherwise return corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]At present it's only supported in convergent meeting(include PBX internal conf), corresponding result event notify is CONFCTRL_E_EVT_UNHOLD_CONF_RESULT.
 *            <br>[cn]��ǰ����Convergent meeting �ںϻ���(����PBX���û���)��֧�֣���Ӧ�����ս���¼�֪ͨΪCONFCTRL_E_EVT_UNHOLD_CONF_RESULT
 * @see CONFCTRL_E_EVT_UNHOLD_CONF_RESULT 
 **/
TUP_API TUP_RESULT tup_confctrl_unhold_conf(IN TUP_UINT32 conf_handle);


/**
 * @ingroup ConfCtrl.
 * @brief [en]This interface is used to request watch attendee.
 *        <br>[cn]����ۿ�ָ������߻���
 * 
 * @param [in] TUP_UINT32 conf_handle     <b>:</b><br>[en]Indicates conference handle.
 *                                                <br>[cn]��ؾ��
 * @param [in] TUP_VOID* attendee         <b>:</b><br>[en]Indicates attendee info.
 *                                                <br>[en]In on-premise VC meeting and Hosted VC meeting, corresponding structure is CONFCTRL_S_ATTENDEE_VC.
 *                                                <br>[en]In convergent meeting(include PBX internal conference), corresponding structure is TUP_CHAR*.
 *                                                <br>[cn]�������Ϣ 
 *                                                <br>[cn]On-premise VC�����Hosted VC���飬��Ӧ�����ݽṹΪCONFCTRL_S_ATTENDEE_VC�� 
 *                                                <br>[cn]Convergent meeting �ںϻ���(����PBX���û���)����Ӧ�����ݽṹΪTUP_CHAR*��
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCESS, otherwise return corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]In on-premise VC meeting and Hosted VC meeting, when you want to choose to see MCU multi screen, the home where the M MCU number, set the T number of 0 can be.
 *            <br>[cn]��On-premise VC�����Hosted VC�����У���Ҫѡ��MCU�໭�棬������MCU��M�ţ���T��Ϊ0����
 * @see CONFCTRL_E_EVT_WATCH_ATTENDEE_RESULT
 **/
TUP_API TUP_RESULT tup_confctrl_watch_attendee(IN TUP_UINT32 conf_handle, IN TUP_VOID* attendee);


/**
 * @ingroup ConfCtrl.
 * @brief [en]This interface is used to set broadcast attendee.
 *        <br>[cn]�㲥��ȡ���㲥ָ������ߣ��᳡��
 * 
 * @param [in] TUP_UINT32 conf_handle     <b>:</b><br>[en]Indicates conference handle.
 *                                                <br>[cn]��ؾ��
 * @param [in] TUP_VOID* attendee         <b>:</b><br>[en]Indicates attendee info.
 *                                                <br>[en]In on-premise VC meeting and Hosted VC meeting, corresponding structure is CONFCTRL_S_ATTENDEE_VC.
 *                                                <br>[en]In convergent meeting(including pbx internal conference), corresponding structure is TUP_CHAR*.
 *                                                <br>[cn]�������Ϣ 
 *                                                <br>[cn]On-premise VC�����Hosted VC���飬��Ӧ�����ݽṹΪCONFCTRL_S_ATTENDEE_VC�� 
 *                                                <br>[cn]Convergent meeting �ںϻ���(����PBX���û���)����Ӧ�����ݽṹΪTUP_CHAR*;
 * @param [in] TUP_BOOL toBroadcast       <b>:</b><br>[en]Indicates broadcast or cancel broadcast.
 *                                                <br>[cn]�㲥����ȡ���㲥
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCESS, otherwise return corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]Only support invoked by chairman,in on-premise VC meeting and Hosted VC meeting, when you want to choose to see MCU multi screen, the home where the M MCU number, set the T number of 0 can be.
 *            <br>[cn]��֧����ϯ���ã���On-premise VC�����Hosted VC�����У���Ҫѡ��MCU�໭�棬������MCU��M�ţ���T��Ϊ0����
 * @see CONFCTRL_E_EVT_BROADCAST_ATTENDEE_RESULT
 * @see CONFCTRL_E_EVT_CANCEL_BROADCAST_ATTENDEE_RESULT
 **/
TUP_API TUP_RESULT tup_confctrl_broadcast_attendee(IN TUP_UINT32 conf_handle, IN TUP_VOID* attendee, IN TUP_BOOL toBroadcast);


/**
 * @ingroup AdvancedAPI.
 * @brief [en]This interface is used to register log callback of TUP conference control.
 *        <br>[cn]ע��TUP�����־�ص�
 * 
 * @param [in] CONFCTRL_FN_LOG_CALLBACK_PTR callback_log    <b>:</b><br>[en]Indicates the log callback function.
 *                                                                  <br>[cn]��־�ص�����
 * @retval TUP_VOID
 * 
 * @attention [en]If application layer want to use its own log print function, use this interface and implement callback function.
 *            <br>[cn]���Ӧ�ò�Ҫʹ���Լ�����־��ӡ���ܣ�ʹ�øýӿڣ���ʵ�ֻص�����
 * @see tup_confctrl_log_config
 * @see CONFCTRL_FN_LOG_CALLBACK_PTR
 **/
TUP_API TUP_VOID tup_confctrl_register_logfun(CONFCTRL_FN_LOG_CALLBACK_PTR callback_log);


/**
 * @ingroup AdvancedAPI
 * @brief [en]This interface is used to get attendee list.
 *        <br>[cn]��ȡ����ߣ��᳡���б�
 * 
 * @param [in] TUP_UINT32 conf_handle                   <b>:</b><br>[en]Indicates conference handle.
 *                                                              <br>[cn]��ؾ��
 * @param [io] TE_ATTENDEE_DATA_IN_LIST* rem_sit_list   <b>:</b><br>[en]Indicates conference list(an array of structures assigned to the upper memory).
 *                                                              <br>[cn]�����б�(���Ϊ�ϲ������ڴ�Ľṹ������)
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCESS, otherwise return corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]At present available only for TE20 use (MCU Networking).
 *            <br>[cn]��ǰ���ṩ��TE20ʹ��(MCU����)
 * @see NA
 **/
TUP_API TUP_RESULT tup_confctrl_get_attendee_list(IN TUP_UINT32 conf_handle, IO TE_ATTENDEE_DATA_IN_LIST* rem_sit_list);



/**
 * @ingroup AdvancedAPI
 * @brief [en]This interface is used to get conference control info.
 *        <br>[cn]��ȡ�����Ϣ
 * 
 * @param [in] TUP_UINT32 conf_handle                   <b>:</b><br>[en]Indicates conference handle.
 *                                                              <br>[cn]��ؾ��
 * @retval TUP_RESULT <b>:</b><br>[en]Indicates specific content returned refer to structure TE_CONF_CTRL_INFO[MODIFY].
 *                            <br>[cn]���巵�����ݲο��ṹ��TE_CONF_CTRL_INFO
 * 
 * @attention [en]At present available only for TE20 use (MCU Network).
 *            <br>[cn]��ǰ���ṩ��TE20ʹ��(MCU����)
 * @see NA
 **/
TUP_API TE_CONF_CTRL_INFO* tup_confctrl_get_conf_state(IN TUP_UINT32 conf_handle);

/**
 * @ingroup AdvancedAPI
 * @brief [en]This interface is used to batch request terminal number.
 *        <br>[cn]���������ն˵ĺ���
 * 
 * @param [in] TUP_UINT32 conf_handle                   <b>:</b><br>[en]Indicates conference handle.
 *                                                              <br>[cn]��ؾ��
 * @param [in] CONFCTRL_E_GET_TERMNUM_REQ_TYPE reqtype  <b>:</b><br>[en]Indicates request type.
 *                                                              <br>[cn]��������
 * @param [in] TUP_UINT32 param                         <b>:</b><br>[en]If request type is CONFCTRL_E_GET_TERMNUM_REQ_TYPE_ALLMCU, send null.
 *                                                              <br>[en]If request type is CONFCTRL_E_GET_TERMNUM_REQ_TYPE_ONEMCU, send MCU number, M, type is TUP_UINT8
 *                                                              <br>[en]If request type is CONFCTRL_E_GET_TERMNUM_REQ_TYPE_MT, send conference list, MT list, type is CONFCTRL_S_GET_NUMBER_PARA*
 *                                                              <br>[cn]��������ΪCONFCTRL_E_GET_TERMNUM_REQ_TYPE_ALLMCU ʱ����
 *                                                              <br>[cn]��������ΪCONFCTRL_E_GET_TERMNUM_REQ_TYPE_ONEMCU ��MCU���룬M�� ����:TUP_UINT8 *
 *                                                              <br>[cn]��������ΪCONFCTRL_E_GET_TERMNUM_REQ_TYPE_MT     ���᳡�б�,MT���б�, ����:CONFCTRL_S_GET_NUMBER_PARA*
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCESS, otherwise return corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]At present only support VC6.0 settled Conference.
 *            <br>[cn]��ǰ��֧��VC6.0 ��פʽ����
 * @see NA
 **/

TUP_API TUP_RESULT tup_confctrl_request_attendees_number(IN TUP_UINT32 conf_handle, IN CONFCTRL_E_GET_TERMNUM_REQ_TYPE reqtype, IN const TUP_VOID *param);

/**
 * @ingroup AdvancedAPI
 * @brief [en]This interface is used to set proxy server.
 *        <br>[cn]���ô��������
 * 
 * @param [in] CONFCTRL_S_PROXY_PARAM* proxy_param <b>:</b><br>[en]Indicates IP, port, user name, password of proxy server.
 *                                                             <br>[cn]�����������ַ���˿ڣ��û�����������Ϣ
 *
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @see NA
 **/
TUP_API TUP_RESULT tup_confctrl_set_proxy(const CONFCTRL_S_PROXY_PARAM* proxy_param);

/**
 * @ingroup OpenAPI
 * @brief [en]This interface is used to set TLS cipher, if not called default value CONFCTRL_E_TLS11_CK_RSA_WITH_AES_128_SHA, CONFCTRL_E_TLS11_CK_RSA_WITH_AES_256_SHA, CONFCTRL_E_TLS12_CK_RSA_AES_128_CBC_SHA256, CONFCTRL_E_TLS12_CK_RSA_AES_256_CBC_SHA256  will be used.
 *        <br>[cn]����TLS�����ס����δ���ñ��ӿڣ���ϵͳĬ��Ϊ��ȫ�����ף�CONFCTRL_E_TLS11_CK_RSA_WITH_AES_128_SHA�� CONFCTRL_E_TLS11_CK_RSA_WITH_AES_256_SHA�� CONFCTRL_E_TLS12_CK_RSA_AES_128_CBC_SHA256�� CONFCTRL_E_TLS12_CK_RSA_AES_256_CBC_SHA256��
 * 
 * @param [in]const CONFCTRL_S_CIPHERLIST *sCipherList <b>:</b><br>[en]Indicates cipher list, specifies add or all cover, number of ciphers and cipher list
 *                                                             <br>[cn]���ü������б���������øýӿڣ�ϵͳ��ȡĬ�ϵļ�����, ��ȷ��ӻ���ȫ�����ǣ������׸������������б�
 * @retval TUP_API TUP_RESULT                          <b>:</b><br>[en]If success return TUP_SUCCESS
 *                                                             <br>[cn]�ɹ�����TUP_SUCCESS
 * @attention [en]It only invoke before stage of init conference control module.
 *            <br>[cn]ֻ�ڻ��ģ���ʼ���׶�֮ǰ����
 * @see NA
 **/
TUP_API TUP_RESULT tup_confctrl_set_cipher(IN const CONFCTRL_S_CIPHERLIST *cipherList);

/**
 * @ingroup OpenAPI
 * @brief [en]This interface is used to set certificate authentication mode, if not called default value CONFCTRL_E_HTTPS_VERIFY_PEER will be used.
 *        <br>[cn]����֤����֤��ʽ,��������øýӿڣ�֤����֤��ʽĬ��CONFCTRL_E_HTTPS_VERIFY_PEER��
 * 
 * @param [in] CONFCTRL_E_HTTPS_VERIFY_MODE eVerifyMode       <b>:</b><br>[en]Indicates verify mode. Default is CONFCTRL_E_HTTPS_VERIFY_PEER.
 *                                                                    <br>[cn]������֤��ʽ�� ȱʡCONFCTRL_E_HTTPS_VERIFY_PEER��
 * @retval TUP_API TUP_RESULT                                 <b>:</b><br>[en]If success return TUP_SUCCESS
 *                                                                    <br>[cn]�ɹ�����TUP_SUCCESS
 * @attention [en]It only invoke before stage of init conference control module.
 *            <br>[cn]ֻ�ڻ��ģ���ʼ���׶�֮ǰ����
 * @see NA
 **/
TUP_API TUP_VOID tup_confctrl_set_verify_mode(IN CONFCTRL_E_HTTPS_VERIFY_MODE verifyMode);


/**
 * @ingroup AdvancedAPI
 * @brief [en]This interface is used to request watch svc attendees.
 *        <br>[cn]����ۿ���������߻���
 * 
 * @param [in] TUP_UINT32 conf_handle                   <b>:</b><br>[en]Indicates conference handle.
 *                                                      <br>[cn]��ؾ��
 * @param [in] TUP_VOID* watch_svc_attendees_info       <b>:</b><br>[en]Indicates info of svc attendees.
 *                                                      <br>[en]In On-premise VC meeting, corresponding structure is CONFCTRL_S_WATCH_SVC_ATTENDEES.
 *                                                      <br>[en]In convergent meeting, corresponding structure is CONFCTRL_S_WATCH_SVC_ATTENDEES_UPORTAL.
 *                                                      <br>[cn]�ۿ���������߻�����Ϣ
 *                                                      <br>[cn]��On-premise VC�����£���Ӧ�����ݽṹΪCONFCTRL_S_WATCH_SVC_ATTENDEES��
 *                                                      <br>[cn]Convergent meeting �ںϻ��飬��Ӧ�����ݽṹΪCONFCTRL_S_WATCH_SVC_ATTENDEES_UPORTAL��
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCESS, otherwise return corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @see NA
 **/
TUP_API TUP_RESULT tup_confctrl_watch_svc_attendees(IN TUP_UINT32 conf_handle, IN TUP_VOID* watch_svc_attendees_info);

/**
 * @ingroup AdvancedAPI
 * @brief [en]This interface is used to request conference control token.
 *        <br>[cn]������token
 * 
 * @param [in] TUP_UINT32 conf_handle                   <b>:</b><br>[en]Indicates conference handle.
 *                                                      <br>[cn]��ؾ��
 * @param [in] TUP_CHAR* number                         <b>:</b><br>[en]Indicates number.
 *                                                      <br>[cn]����
 * @param [in] TUP_CHAR* password                       <b>:</b><br>[en]Indicates conference password.
 *                                                      <br>[cn]��������
 * @param [in] TUP_CHAR* tmp_token                      <b>:</b><br>[en]Indicates conference temp token.
 *                                                      <br>[cn]������ʱtoken
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en] "password" and "tmp_token" can not both be empty
 *            <br>[cn] "password" �� "tmp_token" �������ֶΣ����ܶ�Ϊ��
 * @see CONFCTRL_E_EVT_REQUEST_CONF_RIGHT_RESULT
 **/
TUP_API TUP_RESULT tup_confctrl_request_confctrl_right(IN TUP_UINT32 conf_handle, IN const TUP_CHAR* number, IN const TUP_CHAR* password, IN const TUP_CHAR* tmp_token);

#ifdef __cplusplus
#if __cplusplus
}
#endif /*  __cpluscplus */
#endif /*  __cpluscplus */

#endif  /* __CONFCTRL_INTERFACE_H__ */
