/** 
 * @file login_interface.h
 * 
 * Copyright(C), 2012-2016, Huawei Tech. Co., Ltd. ALL RIGHTS RESERVED. \n
 * 
 * @brief [en]Description: The header file of the TUP authorize and login component interface.
 * [cn]������TUP ͳһ��Ȩ���¼������ܽӿ�ͷ�ļ��� \n
 **/


#ifndef __LOGIN_INTERFACE_ADVANCED_H__
#define __LOGIN_INTERFACE_ADVANCED_H__

#include "login_advanced_def.h"
#include "login_interface.h"


#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif


/**
 * @defgroup AdvancedAPI
 * @brief [en]This module is about authentication and login advanced interface. For internal use only, do not support open.
 *        <br>[cn]��Ȩ���¼�߼��ӿڣ��ڲ�ʹ�ýӿڣ���֧�ֿ���
 **/



/**
 * @ingroup AdvancedAPI
 * @brief [en]This interface is used to get the personal Portal login authentication nonce.
 *        <br>[cn]��ȡ����Portal��¼��Ȩƾ֤
 * 
 * @param [in] const TUP_CHAR* auth_token  <b>:</b><br>[en]Indicates the token returned by the authentication login.
 *                                                 <br>[cn]��Ȩ��¼���ص�Token
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * @retval LOGIN_E_EVT_GET_NONCE_RESULT    <b>:</b><br>[en]Indicates the event message returned asynchronously.
 *                                                 <br>[cn]�첽���ص��¼���Ϣ
 * 
 * @attention [en]Hosted EC & PBX solution for the application to access the individual portal (PC link to the individual Portal page), the corresponding callback notification message: LOGIN_E_EVT_GET_NONCE_RESULT.
 *            <br>[cn]Hosted EC&PBX��������£�����Ӧ�ó�����ʸ���portal(PC������ת������Portalҳ��)����Ӧ�Ļص�֪ͨ��Ϣ��LOGIN_E_EVT_GET_NONCE_RESULT
 * @see LOGIN_E_EVT_GET_NONCE_RESULT
 **/
TUP_API TUP_RESULT tup_login_get_nonce(IN const TUP_CHAR* auth_token);


/**
 * @ingroup AdvancedAPI
 * @brief [en]This interface is used to set init parameters.
 *        <br>[cn]���ó�ʼ������
 * 
 * @param [in] const LOGIN_S_INIT_PARAM* param         <b>:</b><br>[en]Indicates the initialization parameter.
 *                                                             <br>[cn]��ʼ������
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]This interface is an internal interface that is set before initialization.
 *            <br>[cn]�ڲ�ʹ�ýӿڣ��ڳ�ʼ��ǰ����
 * @see NA
 **/
TUP_API TUP_RESULT tup_login_set_init_param(IN const LOGIN_S_INIT_PARAM* param);


/**
 * @ingroup AdvancedAPI
 * @brief [en]This interface is used to search server.
 *        <br>[cn]������̽��
 * 
 * @param [in] const LOGIN_S_AUTH_SERVER_INFO* server_info  <b>:</b><br>[en]Indicates the server information by searched.
 *                                                                  <br>[cn]̽��ķ�������Ϣ
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]This interface is used to set up own clients to be compatible with different solution networking. Corresponding callback notification message: LOGIN_E_EVT_SEARCH_SERVER_RESULT.
 *            <br>[cn]�˽ӿ��������пͻ��ˣ��Լ��ݲ�ͬ�����������������Ӧ�Ļص�֪ͨ��Ϣ��LOGIN_E_EVT_SEARCH_SERVER_RESULT
 * @see NA
 **/
TUP_API TUP_RESULT tup_login_search_server(IN const LOGIN_S_AUTH_SERVER_INFO* server_info);


/**
 * @ingroup AdvancedAPI
 * @brief [en]This interface is used to set license management parameters.
 *        <br>[cn]����license�������
 * 
 * @param [in] LOGIN_S_LICENSE_MANAGE_PARAM* param          <b>:</b><br>[en]Indicates the license management parameter.
 *                                                                  <br>[cn]license�������
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see tup_login_apply_license
 * @see tup_login_release_license
 **/
TUP_API TUP_RESULT tup_login_set_license_manage_param(IN LOGIN_S_LICENSE_MANAGE_PARAM* param);


/**
 * @ingroup AdvancedAPI
 * @brief [en]This interface is used to initiate request for license type.
 *        <br>[cn]�����ȡLicense��������
 * 
 * @param NA
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]This interface is used to return through the CALL_E_EVT_GET_LICENSE_TYPE_RESULT event.Asynchronous call.
 *            <br>[cn]�첽���ã�ͨ��CALL_E_EVT_GET_LICENSE_TYPE_RESULT�¼�����
 * @see NA
 **/
TUP_API TUP_RESULT tup_login_get_license_type();


/**
 * @ingroup AdvancedAPI
 * @brief [en]This interface is used to request license.
 *        <br>[cn]����license
 * 
 * @param NA
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see tup_login_set_license_manage_param
 * @see tup_login_release_license
 **/
TUP_API TUP_RESULT tup_login_apply_license();


/**
 * @ingroup AdvancedAPI
 * @brief [en]This interface is used to release the license.
 *        <br>[cn]�ͷ�license
 * 
 * @param NA
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see tup_login_set_license_manage_param
 * @see tup_login_apply_license
 **/
TUP_API TUP_RESULT tup_login_release_license();


/**
 * @ingroup AdvancedAPI
 * @brief [en]This interface is used to download configuration.
 *        <br>[cn]���ظ�������
 * 
 * @param [in] const TUP_CHAR* file_path  <b>:</b><br>[en]Indicates the path to the downloaded file (including the file name).
 *                                                <br>[cn]�����ļ����·��(�����ļ���)
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * @retval LOGIN_E_EVT_DOWNLOAD_CONFIG_RESULT <b>:</b><br>[en]Indicates the event message returned asynchronously.
 *                                                    <br>[cn]�첽���ص��¼���Ϣ
 * 
 * @attention [en]This interface is for phone use only.
 *            <br>[cn]�˽ӿڽ�������ʹ��
 * @see NA
 **/
TUP_API TUP_RESULT tup_login_download_config(IN const TUP_CHAR* file_path);


/**
 * @ingroup AdvancedAPI
 * @brief [en]This interface is used to subscribe configuration.
 *        <br>[cn]��������
 * 
 * @param [in] TUP_VOID* val              <b>:</b><br>[en]Indicates the information carried when subscribing.
 *                                                <br>[cn]����ʱЯ������Ϣ��
 * @param [in] TUP_UINT32 size            <b>:</b><br>[en]Indicates the number of bytes passed in by val.
 *                                                <br>[cn]val������ֽ�����
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]This interface is used for docking third-party platforms.
 *            <br>[cn]�˽ӿ����ڶԽӵ�����ƽ̨
 * @see NA
 **/
TUP_API TUP_RESULT tup_login_subscribe_config(IN TUP_VOID* val, IN TUP_UINT32 size);


/**
 * @ingroup AdvancedAPI
 * @brief [en]This interface is used to set login module parameters.
 *        <br>[cn]���õ�¼ģ�����
 * 
 * @param [in] TUP_UINT32 cfgid           <b>:</b><br>[en]Indicates the configuration ID.
 *                                                <br>[cn]������ID
 * @param [in] TUP_VOID* val              <b>:</b><br>[en]Indicates configuration parameters.
 *                                                <br>[cn]���ò���
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]This interface is used for docking third-party platforms.
 *            <br>[cn]�˽ӿ����ڶԽӵ�����ƽ̨
 * @see NA
 **/
TUP_API TUP_RESULT tup_login_set_cfg(IN TUP_UINT32 cfgid, IN TUP_VOID* val);


/**
 * @ingroup AdvancedAPI
 * @brief [en]This interface is used to get the configuration ID parameter.
 *        <br>[cn]��ȡָ��cfgid�����������
 * 
 * @param [in] TUP_UINT32 cfgid           <b>:</b><br>[en]Indicates the parameter ID, defined by login_def.h with the prefix LOGIN_D_CFG_.
 *                                                <br>[cn]����ID,��login_def.h���壬ǰ׺ΪLOGIN_D_CFG_
 * @param [in] TUP_VOID* val              <b>:</b><br>[en]Indicates the parameter value, which determines the data type according to the configured parameter ID.
 *                                                <br>[cn]����ֵ���������õĲ���IDȷ����������
 * @param [in] TUP_UINT32 size            <b>:</b><br>[en]Indicates the size of the pointer to point to memory, in bytes.
 *                                                <br>[cn]ָ��valָ���ڴ�Ĵ�С����λ�ֽ�
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]This interface is used for docking third-party platforms.
 *            <br>[cn]�˽ӿ����ڶԽӵ�����ƽ̨
 * @see NA
 **/
TUP_API TUP_RESULT tup_login_get_cfg(IN TUP_UINT32 cfgid, IN TUP_VOID *val, IN TUP_UINT32 size);


/**
 * @ingroup AdvancedAPI
 * @brief [en]This interface is used to active.
 *        <br>[cn]����
 * 
 * @param [in] TUP_VOID* val              <b>:</b><br>[en]Indicates that different parameters are passed according to the platform type. If it is a VidexIO platform, pass in LOGIN_S_SERVER_INFO *.
 *                                                <br>[cn]����ƽ̨���͵Ĳ�ͬ�����벻ͬ�Ĳ����������VidexIOƽ̨������LOGIN_S_SERVER_INFO*��
 * @param [in] TUP_UINT32 size            <b>:</b><br>[en]Indicates the number of bytes passed in by val.
 *                                                <br>[cn]val������ֽ�����
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]This interface is used for docking third-party platforms.
 *            <br>[cn]�˽ӿ����ڶԽӵ�����ƽ̨
 * @see NA
 **/
TUP_API TUP_RESULT tup_login_active(IN TUP_VOID* val, IN TUP_UINT32 size);


/**
 * @ingroup AdvancedAPI
 * @brief [en]set cipher list before init stage. The default sipher is LOGIN_E_TLS11_CK_RSA_WITH_AES_256_SHA, LOGIN_E_TLS12_CK_RSA_AES_128_CBC_SHA256, LOGIN_E_TLS12_CK_RSA_AES_256_CBC_SHA256 if this function not called.
 *        <br>[cn]���ü������б���������øýӿڣ�ϵͳĬ�ϼ�����ΪLOGIN_E_TLS11_CK_RSA_WITH_AES_256_SHA, LOGIN_E_TLS12_CK_RSA_AES_128_CBC_SHA256, LOGIN_E_TLS12_CK_RSA_AES_256_CBC_SHA256.
 * 
 * @param [in] const AIR_S_CIPHERLIST *sCipherList <b>:</b><br>[en]cipher list structure specifies add or set method, number of ciphers and cipher list
 *                                                         <br>[cn]���ü������б���������øýӿڣ�ϵͳ��ȡĬ�ϵļ�����, ��ȷ��ӻ���ȫ�����ǣ������׸������������б�
 * @retval TUP_RESULT                              <b>:</b><br>[en]operation successful, TUP_SUCCESS returned
 *                                                         <br>[cn]�ɹ�����TUP_SUCCESS
 * @attention [en]only calls before init stage
 *            <br>[cn]ֻ�ڳ�ʼ���׶�֮ǰ����
 * @see NA
 **/
TUP_API TUP_RESULT tup_login_set_cipher(IN const LOGIN_S_CIPHERLIST *cipherlist);




#ifdef __cplusplus
#if __cplusplus
}
#endif
#endif

#endif /* __LOGIN_INTERFACE_ADVANCED_H__ */
