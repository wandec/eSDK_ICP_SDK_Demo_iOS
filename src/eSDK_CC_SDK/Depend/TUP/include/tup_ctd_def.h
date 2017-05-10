/** 
* @file ctd_def.h
* 
* Copyright(C), 2012-2015, Huawei Tech. Co., Ltd. ALL RIGHTS RESERVED. \n
* 
* ������TUP CTD��ع��ܶ���ͷ�ļ��� \n
*/


#ifndef __CTD_DEF_H__
#define __CTD_DEF_H__

#include "tup_def.h"

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif /*  __cpluscplus */
#endif /*  __cpluscplus */

#define CTD_D_MAX_NUMBER_LEN 128
#define CTD_D_MAX_TOKEN_LEN  256
#define CTD_D_MAX_SERVER_ADDR_LEN 256
#define CTD_USER_NAME_LENGTH      64
#define CTD_USER_PASSWORD_LENGTH  32

typedef struct tagCTD_S_CALL_PARAM
{
    TUP_CHAR caller_number[CTD_D_MAX_NUMBER_LEN]; /**< ���к��� */
    TUP_CHAR callee_number[CTD_D_MAX_NUMBER_LEN]; /**< ���к��� */
    TUP_CHAR token[CTD_D_MAX_TOKEN_LEN];          /**< ��Ȩtoken */
} CTD_S_CALL_PARAM;

typedef struct tagCTD_S_SERVER_PARA
{
    TUP_CHAR   server_addr[CTD_D_MAX_SERVER_ADDR_LEN]; /**< [en]Indicates server address. [cn]��������ַ */
    TUP_UINT16 port;                                   /**< [en]Indicates port. [cn]�˿ں� */
} CTD_S_SERVER_PARA;

/** 
 * [en]This struct is used to describe the http proxy information.
 * [cn]������Ϣ
 */
typedef struct tagCTD_S_PROXY_PARAM
{  
    TUP_CHAR uri[CTD_D_MAX_SERVER_ADDR_LEN];          /**< [en]Indicates the server address. [cn]���������url*/
    TUP_UINT32 port;                                  /**< [en]Indicates the server port. [cn]����������˿�*/
    TUP_CHAR user_name[CTD_USER_NAME_LENGTH];         /**< [en]Indicates the account user name. [cn]�����������Ȩ�û���*/
    TUP_CHAR password[CTD_USER_PASSWORD_LENGTH];      /**< [en]Indicates the account password. [cn]�����������Ȩ����*/
} CTD_S_PROXY_PARAM;

/**
 * [en]Log level
 * [cn]��־����
 */
typedef enum tagCTD_E_LOG_LEVEL
{
    CTD_E_LOG_ERROR = 0,       /**< [en]Error level
                                    <br>[cn]���󼶱� */
    CTD_E_LOG_WARNING,         /**< [en]Warning level
                                    <br>[cn]���漶�� */     
    CTD_E_LOG_INFO,            /**< [en]Log level
                                    <br>[cn]��־���� */      
    CTD_E_LOG_DEBUG            /**< [en]Debug level
                                    <br>[cn]���Լ��� */      
} CTD_E_LOG_LEVEL;


/** 
 * [en]xxxx.
 * [cn]�ϱ���Ϣ
 */
typedef enum tagCTD_E_EVENT
{
    CTD_E_EVT_BEGIN = 0,

    CTD_E_EVT_START_CALL_RESULT,   /**< [en]xxxx
                                        <br>[cn]����ctd���н��
                                        <br>param1��callid
                                        <br>param2��result
                                        <br>data��  ��  */       
    CTD_E_EVT_END_CALL_RESULT,     /**< [en]xxxx
                                        <br>[cn]����ctd���н��
                                        <br>param1��callid
                                        <br>param2��result
                                        <br>data��  ��  */    
    CTD_E_EVT_CALL_STATUS_NOTIFY,  /**< [en]xxxx
                                        <br>[cn]ctd����״̬�ϱ�
                                        <br>param1��callid
                                        <br>param2��CTD_E_CALL_STATE
                                        <br>data��  ��  */    
    CTD_E_EVT_END
} CTD_E_EVENT;

/** 
 * [en]xxxx.
 * [cn]CTD ģ�������
 */
typedef enum tagCTD_E_ERR_ID
{
    CTD_E_ERR_BEGIN = 0,                         /**< [en]xxxx
                                                      <br>[cn]��ʼ */
    CTD_E_ERR_GENERAL,                           /**< [en]xxxx
                                                      <br>[cn]һ����� */
    CTD_E_ERR_PARAM_ERROR,                       /**< [en]xxxx
                                                      <br>[cn]�������� */
    CTD_E_ERR_TIMEOUT,                           /**< [en]xxxx
                                                      <br>[cn]��ʱ */
    CTD_E_ERR_MEM_ERROR,                         /**< [en]xxxx
                                                      <br>[cn]�����ڴ���� */
    CTD_E_ERR_DNS_ERROR,                         /**< [en]xxxx
                                                      <br>[cn]DNS�����쳣 */
    CTD_E_ERR_REQUEST_FAILED,                    /**< [en]xxxx
                                                      <br>[cn]������Ϣ�쳣 */
    CTD_E_ERR_AUTH_FAILED,                       /**< [en]xxxx
                                                      <br>[cn]��Ȩʧ�� */
    CTD_E_ERR_SERVICE_ERROR,                     /**< [en]xxxx
                                                      <br>[cn]�������쳣 */
    CTD_E_ERR_ACCOUNT_LOCKED,                    /**< [en]xxxx
                                                      <br>[cn]�˺ű����� */
} CTD_E_ERR_ID;

/** 
 * [en]xxxx.
 * [cn]CTD ����״̬
 */
typedef enum tagCTD_E_CALL_STATE
{
    CTD_E_CALL_STATE_IDLE = 0,                      /**< [en]xxxx
                                                        <br>[cn]����̬*/
    CTD_E_CALL_STATE_CALLING,                       /**< [en]xxxx
                                                        <br>[cn]������ */
    CTD_E_CALL_STATE_TALKING,                       /**< [en]xxxx
                                                        <br>[cn]ͨ���� */
    CTD_E_CALL_STATE_END,                           /**< [en]xxxx
                                                        <br>[cn]���� */
    CTD_E_CALL_STATE_HOLD,                          /**< [en]xxxx
                                                        <br>[cn]���� */
    CTD_E_CALL_STATE_BUTT                           /**< [en]xxxx
                                                        <br>[cn]��Ч״̬ */
} CTD_E_CALL_STATE;

/**
 * @brief [en]xxxx.
 *        <br>[cn][TODO]
 * 
 * @param [in] TUP_UINT32 msgid           <b>:</b><br>[en]xxxx.
 *                                                <br>[cn]��ϢID
 * @param [in] TUP_UINT32 param1          <b>:</b><br>[en]xxxx.
 *                                                <br>[cn]����1
 * @param [in] TUP_UINT32 param2          <b>:</b><br>[en]xxxx.
 *                                                <br>[cn]����2
 * @param [in] TUP_VOID *data             <b>:</b><br>[en]xxxx.
 *                                                <br>[cn]
 * @retval TUP_VOID
 * 
 * @attention [en]xxxx.
 *            <br>[cn]
 * @see NA
 **/
typedef TUP_VOID (*CTD_FN_CALLBACK_PTR)(TUP_UINT32 msgid, TUP_UINT32 param1, TUP_UINT32 param2, TUP_VOID *data);



#ifdef __cplusplus
#if __cplusplus
}
#endif /*  __cpluscplus */
#endif /*  __cpluscplus */


#endif  /* __CTD_DEF_H__ */

