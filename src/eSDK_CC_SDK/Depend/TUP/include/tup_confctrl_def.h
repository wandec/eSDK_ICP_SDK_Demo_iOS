/** 
 * @file tup_confctrl_def.h
 * 
 * Copyright(C), 2012-2017, Huawei Tech. Co., Ltd. ALL RIGHTS RESERVED. \n
 * 
 * @brief [en]Description: The header file of conference control subsystem basic service function structure definition.
 * ������TUP ���������ϵͳ����ҵ���ܽṹ�嶨��ͷ�ļ��� \n
 **/

#ifndef __CONFCTRL_DEF_H__
#define __CONFCTRL_DEF_H__

#include "tup_def.h"

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif /*  __cpluscplus */
#endif /*  __cpluscplus */

#ifndef IN
#define IN
#endif

#ifndef OUT
#define OUT
#endif

#ifndef IO
#define IO
#endif

#define INVALID_CONFCTRL_HANDLE             0           /**< [en]Indicates invalid conf control handle
                                                             <br>[cn]��Ч�Ļ�ؾ�� */
#define CONFCTRL_DOMAIN_ADDR_LENGTH         128         /**< [en]Indicates the maximum length of domain address
                                                             <br>[cn]������ַ��󳤶� */
#define CONFCTRL_CONF_NAME_LENGTH           128         /**< [en]Indicates the maximum length of name length
                                                             <br>[cn]�������Ƴ���  */
#define CONFCTRL_MAX_CONFPARAMS_LENGTH      4096        /**< [en]Indicates the maximum length of conf param
                                                             <br>[cn]��ز�����󳤶�  */
#define CONFCTRL_MAX_CONFRESOURCE_LENGTH    2048        /**< [en]Indicates the maximum length of conf control resource
                                                             <br>[cn]����豸��󳤶�  */
#define CONFCTRL_MAX_HTTPBODY_LENGTH        2047        /**< [en]Indicates the maximum length of http body
                                                             <br>[cn]http����  */


#define CONFCTRL_D_MAX_SERVER_ADDR_LEN      256         /**< [en]Indicates the maximum length of server address
                                                             <br>[cn]��������ַ��󳤶�  */
#define CONFCTRL_D_MAX_GROUP_URI_LEN        128         /**< [en]Indicates the maximum length of uri
                                                             <br>[cn]Ⱥ��URI��󳤶�  */
#define CONFCTRL_D_MAX_NUMBER_LEN           128         /**< [en]Indicates the most number
                                                             <br>[cn]������  */
#define CONFCTRL_D_MAX_EMAIL_LEN            96          /**< [en]Indicates the maximum length of email
                                                             <br>[cn]email��󳤶�  */
#define CONFCTRL_D_MAX_NAME_LEN             256         /**< [en]Indicates the maximum length of name
                                                             <br>[cn]������󳤶�  */
#define CONFCTRL_D_MAX_PARTICIPANTID_LEN    128         /**< [en]Indicates the maximum length of participant id
                                                             <br>[cn]��Ա��ʶ��󳤶�  */
#define CONFCTRL_D_MAX_PHONE_LEN            128         /**< [en]Indicates the maximum length of phone
                                                             <br>[cn]�绰��󳤶�  */
#define CONFCTRL_D_MAX_SUBJECT_LEN          256         /**< [en]Indicates the maximum length of conf subject
                                                             <br>[cn]����������󳤶�  */
#define CONFCTRL_D_MAX_CONF_ID_LEN          16          /**< [en]Indicates the maximum length of conf control id
                                                             <br>[cn]���ID��󳤶�  */
#define CONFCTRL_D_MAX_URL_LEN              256         /**< [en]Indicates the maximum length of url
                                                             <br>[cn]URL��󳤶�  */
#define CONFCTRL_D_MAX_ACCESS_NUM_LEN       128         /**< [en]Indicates the maximum length of access number
                                                             <br>[cn]�洢����  */
#define CONFCTRL_D_MAX_PASSWORD_LEN         192         /**< [en]Indicates the maximum length of password
                                                             <br>[cn]������󳤶�  */
#define CONFCTRL_D_MAX_TIME_FORMATE_LEN     32          /**< [en]Indicates the maximum length of format time
                                                             <br>[cn]ʱ���ʽ��󳤶�  */
#define CONFCTRL_D_MAX_TOKEN_LEN            128         /**< [en]Indicates the maximum length of token
                                                             <br>[cn]token��󳤶�  */
#define CONFCTRL_D_MAX_FLOOR_NUM            5           /**< [en]Indicates the maximum length of floor
                                                             <br>[cn]������󳤶�  */
#define CONFCTRL_D_MAX_DESCRIPTION_LEN      256         /**< [en]Indicates the maximum length of description
                                                             <br>[cn]��������󳤶�  */
#define CONFCTRL_D_MAX_VMR_NUM              5           /**< [en]Indicates the maximum length of vmr number
                                                             <br>[cn]һ�η��ص�vmr������ */
#define CONFCTRL_D_MAX_RANDOM_LEN           128         /**< [en]Indicates the maximum length of random 
                                                             <br>[cn]���������󳤶� */

#define CONFCTRL_D_MAX_CMADDR_LEN           256         /**< [en]Indicates the maximum length of cm address and port
                                                             <br>[cn]sip���ص�ַ���˿���󳤶� */
#define CONFCTRL_D_MAX_CALLID_LEN           32          /**< [en]Indicates the maximum length of conf call id
                                                             <br>[cn]����CALL-ID��󳤶� */
#define CONFCTRL_D_MAX_HOSTKEY_LEN          32          /**< [en]Indicates the maximum length of host key
                                                             <br>[cn]���������������󳤶� */
#define CONFCTRL_D_MAX_AUTHKEY_LEN          64          /**< [en]Indicates the maximum length of authentication password
                                                             <br>[cn]�����Ȩ������󳤶� */
#define CONFCTRL_D_MAX_ATTENDEE_ID_LEN      256         /**< [en]Indicates the maximum length of attendee id
                                                             <br>[cn]����߱�ʶ��󳤶� */
#define CONFCTRL_D_MAX_SVC_NUM              7           /**< [en]Indicates the maximum number of svc stream
                                                             <br>[cn]����ʱ������������ */      
#define CONFCTRL_D_MAX_CALL_ID_LEN         128          /**< [en][en]Indicates the maximum number of conf attendee callid
                                                             <br>[cn]�����callid��󳤶� */
#define CONFCTRL_D_MAX_USER_ID_LEN         128          /**< [en][en]Indicates the maximum number of user id
                                                             <br>[cn]�����user id��󳤶� */
#define CONFCTRL_D_MAX_SECURE_CONF_NUM_LEN 128          /**< [en][en]Indicates the maximum number of secure conference num
                                                             <br>[cn]����߰�ȫ�������󳤶� */
#define CONFCTRL_D_MAX_ACCOUNT_ID_LEN      128          /**< [en]Indicates the maximum number of account id
                                                             <br>[cn]�����account id��󳤶� */

/**
 * [en]This enum is used to describe log level
 * [cn]��־����
 */
typedef enum tagCONFCTRL_E_LOG_LEVEL
{
    CONFCTRL_E_LOG_ERROR = 0,       /**< [en]Indicates error level
                                         <br>[cn]���󼶱� */
    CONFCTRL_E_LOG_WARNING,         /**< [en]Indicates warning level
                                         <br>[cn]���漶�� */     
    CONFCTRL_E_LOG_INFO,            /**< [en]Indicates log level
                                         <br>[cn]��־���� */      
    CONFCTRL_E_LOG_DEBUG            /**< [en]Indicates debug level
                                         <br>[cn]���Լ��� */      
}CONFCTRL_E_LOG_LEVEL;




/** 
 * [en]This enum is used to describe error code of conference control module<br>
 * [cn]���ģ�������
 */
typedef enum tagCONFCTRL_E_ERR_ID
{
    CONFCTRL_E_ERR_BEGIN = 0,
    CONFCTRL_E_ERR_GENERAL,                         /**< [en]Indicates general error
                                                         <br>[cn]һ����� */
    CONFCTRL_E_ERR_PARAM_ERROR,                     /**< [en]Indicates param error
                                                         <br>[cn]�������� */
    CONFCTRL_E_ERR_TIMEOUT,                         /**< [en]Indicates timeout 
                                                         <br>[cn]��ʱ */
    CONFCTRL_E_ERR_MEM_ERROR,                       /**< [en]Indicates MEM error
                                                         <br>[cn]�����ڴ���� */
    CONFCTRL_E_ERR_DNS_ERROR,                       /**< [en]Indicates DNS parser error
                                                         <br>[cn]DNS�����쳣 */
    CONFCTRL_E_ERR_REQUEST_FAILED,                  /**< [en]Indicates request failed
                                                         <br>[cn]������Ϣ�쳣 */
    CONFCTRL_E_ERR_AUTH_FAILED,                     /**< [en]Indicates authentication failed
                                                         <br>[cn]��Ȩʧ�� */
    CONFCTRL_E_ERR_SERVICE_ERROR,                   /**< [en]Indicates service error
                                                         <br>[cn]�������쳣 */
    CONFCTRL_E_ERR_TIMER_ERROR,                     /**< [en]Indicates time error
                                                         <br>[cn]������ʱ������ */
    CONFCTRL_E_ERR_WRONG_SERVERTYPE,                /**< [en]Indicates server type which is error
                                                         <br>[cn]����ķ��������� */
    CONFCTRL_E_ERR_WRONG_SERVERVERSION,             /**< [en]Indicates server version which is error
                                                         <br>[cn]����ķ������汾 */
    CONFCTRL_E_ERR_INVALID_URL                      /**< [en]Indicates invalid URL
                                                         <br>[cn]��Ч��URL */
} CONFCTRL_E_ERR_ID;

/** 
 * [en]This enum is used to describe event which is reported to interface<br>
 * [cn]�ϱ���������¼�
 */
typedef enum tagCONFCTRL_E_EVENT
{
    CONFCTRL_E_EVT_BEGIN = 1000,                    /**< [en]Indicates for call and conference control in the same callback application, distinguish between two modules of the message
                                                         <br>[cn]��call��confctrl��ͬһ���ص������Ӧ�ã���������ģ�����Ϣ 
                                                         <br>param1��None
                                                         <br>param2��None   
                                                         <br>data��  None */
                                                         
    CONFCTRL_E_EVT_BOOK_CONF_RESULT,                /**< [en]Indicates reserve conference result
                                                         <br>[cn]ԤԼ������
                                                         <br>param1��TUP_UINT32 result [en]Indicates reserve conference result, if success return TUP_SUCCESS, otherwise return corresponding reason code, value refer to CC_SITECALL_REASON_E.[cn]ԤԼ���������ɹ�ΪTUP_SUCCESS, ʧ��Ϊԭ��ֵ��ȡֵCC_SITECALL_REASON_E
                                                         <br>param2��None   
                                                         <br>data��  TUP_CHAR* reason_describe [en]Indicates error reason description, the maximum length is 256, it's content which is transferred in iDo text channel of SMC.[cn]����ԭ���������256��ΪSMC��iDo�ı�ͨ���д�������� */
                                                         
    CONFCTRL_E_EVT_BOOK_CONF_AUTH_FAILED,           /**< [en]Indicates call set authentication failed, discarded.
                                                         <br>[cn]������֤ʧ�ܣ�����
                                                         <br>param1��None
                                                         <br>param2��None   
                                                         <br>data��  None */
                                                         
    CONFCTRL_E_EVT_BOOK_CONF_TIME_OUT,              /**< [en]Indicates calling set authentication failed, discarded.
                                                         <br>[cn]���к�����ʱ������
                                                         <br>param1��None
                                                         <br>param2��None   
                                                         <br>data��  None */
                                                         
    CONFCTRL_E_EVT_CONF_LIST_IND,                   /**< [en]Indicates the meeting list notice, temporarily does not support
                                                         <br>[cn]�����б�֪ͨ,��ʱ��֧��
                                                         <br>param1��None
                                                         <br>param2��None   
                                                         <br>data��  TUP_CHAR* list [en]Indicates conference list.[cn]�����б� */
                                                    
    //��������Ϣ��p1��Ϊconf_handle��
    CONFCTRL_E_EVT_CONFCTRL_CONNECTED,              /**< [en]Indicates control link has been established notice
                                                         <br>[cn]��������ѽ���֪ͨ
                                                         <br>param1��TUP_UINT32 handle [en]Indicates conference control handle.[cn]��ؾ��
                                                         <br>param2��None   
                                                         <br>data��  CONFCTRL_S_ATTENDEE_VC* attendees [en]Indicates identify number of TE attendee, it means can start conference control operate.[cn]TE�����ʶ��ţ���ʱ��ʾ���Կ�ʼ��ز��� */
                                                         
    CONFCTRL_E_EVT_CONF_TIME_REMNANT,               /**< [en]Indicates meeting remaining time notice, only the chairman can receive the notice
                                                         <br>[cn]����ʣ��ʱ��֪ͨ������ϯ���յ���֪ͨ
                                                         <br>param1��TUP_UINT32 handle [en]Indicates conference control handle.[cn]��ؾ��
                                                         <br>param2��TUP_UINT32 conf_time [en]Indicates remain time, unit is minute.[cn]ʣ��ʱ�䣬��λ����   
                                                         <br>data��  None */
                                                         
    CONFCTRL_E_EVT_ATTENDEE_UPDATE_IND,             /**< [en]Indicates participant information update notification
                                                         <br>[cn]�������Ϣ����֪ͨ
                                                         <br>param1��TUP_UINT32 handle [en]Indicates conference control handle.[cn]��ؾ��
                                                         <br>param2��CC_ATTENDEE_UPDATE_E attendee_update [en]Indicates attendee information update type.[cn]�������Ϣ�������   
                                                         <br>data��  TE_ATTENDEE_DATA_IN_LIST* attendee_data [en]Indicates attendee carried related data from attendee list.[cn]������б��е��������Я����������� */
                                                         
    CONFCTRL_E_EVT_CHAIRMAN_IND,                    /**< [en]Indicates conference chairman indicate.
                                                         <br>[cn]������ϯָʾ 
                                                         <br>param1��TUP_UINT32 handle [en]Indicates conference control handle.[cn]��ؾ��
                                                         <br>param2��TUP_BOOL chairman [en]Indicates whether have chairman.[cn]�Ƿ�����ϯ 
                                                         <br>data��  CONFCTRL_S_ATTENDEE_VC* mt [en]Indicates identify number of TE attendee.[cn]TE�����ʶ��� */
                                                         
    CONFCTRL_E_EVT_ENTER_PASSWORD_TO_BE_CHAIRMAN,   /**< [en]Indicates enter the chairman password instructions, currently only TE20 use, to be called after the user interface tup_confctrl_enter_chairman_password
                                                         <br>[cn]������ϯ����ָʾ��Ŀǰ��TE20ʹ�ã����û��������ýӿ�tup_confctrl_enter_chairman_password
                                                         <br>param1��TUP_UINT32 handle [en]Indicates conference control handle.[cn]��ؾ��
                                                         <br>param2��None   
                                                         <br>data��  None */
                                                         
    CONFCTRL_E_EVT_CHAIRMAN_RELEASED_IND,           /**< [en]Indicates chairman release indicate
                                                         <br>[cn]��ϯ�ͷ�֪ͨ
                                                         <br>param1��TUP_UINT32 handle       [en]Indicates conference control handle.[cn]��ؾ��
                                                         <br>param2��TUP_UINT32 release_type [en]Indicates release type: 0: local force release; 1: remote force release.[cn]�ͷ����ͣ�0-����ǿ���ͷţ�1-Զ��ǿ���ͷ�
                                                         <br>data��  None */
                                                         
    CONFCTRL_E_EVT_BROADCAST_ATTENDEE_RESULT,       /**< [en]Indicates broadcast participant results indicate
                                                         <br>[cn]�㲥����߽��֪ͨ
                                                         <br>param1��TUP_UINT32 handle [en]Indicates conference control handle.[cn]��ؾ��
                                                         <br>param2��CC_OPERATION_RSP_REASON_E operation_result [en]Indicates broadcast attendee result.[cn]�㲥����߽��   
                                                         <br>data��  None */
                                                         
    CONFCTRL_E_EVT_CANCEL_BROADCAST_ATTENDEE_RESULT,/**< [en]Indicates cancel broadcast attendees indicate, original TE not reported
                                                         <br>[cn]ȡ���㲥����߽��֪ͨ��ԭTE���ϱ�
                                                         <br>param1��TUP_UINT32 handle [en]Indicates conference control handle.[cn]��ؾ��
                                                         <br>param2��CC_OPERATION_RSP_REASON_E operation_result [en]Indicates cancel broadcast attendee result.[cn]ȡ���㲥����߽��  
                                                         <br>data��  None */
                                                         
    CONFCTRL_E_EVT_BROADCAST_ATTENDEE_IND,          /**< [en]Indicates broadcast attendees indicate
                                                         <br>[cn]�㲥�����֪ͨ
                                                         <br>param1��TUP_UINT32 handle [en]Indicates conference control handle.[cn]��ؾ��
                                                         <br>param2��TUP_UINT32 result [en]Indicates operation result.[cn]�������   
                                                         <br>data��  CONFCTRL_S_ATTENDEE_VC* mt [en]Indicates identify number of TE attendee.[cn]TE�����ʶ��� */
                                                         
    CONFCTRL_E_EVT_CANCEL_BROADCAST_ATTENDEE_IND,   /**< [en]Indicates cancel broadcast attendees indicate
                                                         <br>[cn]ȡ���㲥�����֪ͨ
                                                         <br>param1��TUP_UINT32 handle [en]Indicates conference control handle.[cn]��ؾ��
                                                         <br>param2��TUP_UINT32 result [en]Indicates operation result.[cn]�������   
                                                         <br>data��  CONFCTRL_S_ATTENDEE_VC* mt [en]Indicates identify number of TE attendee.[cn]TE�����ʶ��� */
                                                         
    CONFCTRL_E_EVT_WATCH_ATTENDEE_RESULT,           /**< [en]Indicates watch participant results indicate
                                                         <br>[cn]�ۿ�����߽��֪ͨ
                                                         <br>param1��TUP_UINT32 handle [en]Indicates conference control handle.[cn]��ؾ��
                                                         <br>param2��CC_OPERATION_RSP_REASON_E operation_result [en]Indicates watch attendee result.[cn]�ۿ�����߽��   
                                                         <br>data��  None */
                                                         
    CONFCTRL_E_EVT_MULTI_PIC_RESULT,                /**< [en]Indicates broadcast multi - screen result indicate, temporary no this function - current invalid, p2- is successful
                                                         <br>[cn]�㲥�໭����֪ͨ, ��ʱ�޴˹��� - ��ǰ��Ч
                                                         <br>param1��TUP_UINT32 handle [en]Indicates conference control handle.[cn]��ؾ��
                                                         <br>param2��TUP_UINT32 result [en]Indicates operation result, whether it's successful.[cn]�������,�Ƿ�ɹ�     
                                                         <br>data��  None */
                                                         
    CONFCTRL_E_EVT_ATTENDEE_BROADCASTED_IND,        /**< [en]Indicates participants are currently viewing (Venue) instructions, names obtained unreasonable
                                                         <br>[cn]��ǰ���ڹۿ�������ߣ��᳡��ָʾ������ȡ�ò�����
                                                         <br>param1��TUP_UINT32 handle [en]Indicates conference control handle.[cn]��ؾ��
                                                         <br>param2��None   
                                                         <br>data��  CONFCTRL_S_ATTENDEE_VC* attendee [en]Indicates identify number of TE attendee.[cn]TE�����ʶ��� */
                                                         
    CONFCTRL_E_EVT_LOCAL_BROADCAST_STATUS_IND,      /**< [en]Indicates local broadcast status change indicate
                                                         <br>[cn]���ر��㲥״̬���֪ͨ 
                                                         <br>param1��TUP_UINT32 handle [en]Indicates conference control handle.[cn]��ؾ��
                                                         <br>param2��TUP_BOOL broadcast [en]Indicates whether it's broadcast.[cn]�Ƿ񱻹㲥   
                                                         <br>data��  None */

    CONFCTRL_E_EVT_CONF_INCOMING_IND,               /**< [en]Indicates conference call indicate
                                                         <br>[cn]��������֪ͨ
                                                         <br>param1��TUP_UINT32 handle [en]Indicates conference control handle.[cn]��ؾ��
                                                         <br>param2��TUP_UINT32 call id [en]Indicates call id.[cn]����ID  
                                                         <br>data��  CONFCTRL_S_CONF_INCOMING_INFO* incoming_info [en]Indicates conference incoming call info.[cn]����������Ϣ */                                              
                                               
    CONFCTRL_E_EVT_CONF_CONNECTED_IND,              /**< [en]Indicates meeting established successful results notice
                                                         <br>[cn]���齨���ɹ����֪ͨ
                                                         <br>param1��TUP_UINT32 handle [en]Indicates conference control handle.[cn]��ؾ��
                                                         <br>param2��TUP_UINT32 call id [en]Indicates call id.[cn]����ID  
                                                         <br>data��  CONFCTRL_S_CONF_CONNECTINFO* connect_info [en]Indicates conference connect call info.[cn]�����ͨ��Ϣ */                                                  
                                               
    CONFCTRL_E_EVT_CONF_INFO_IND,                   /**< [en]Indicates conference information indicate
                                                         <br>[cn]������Ϣ֪ͨ
                                                         <br>param1��TUP_UINT32 handle [en]Indicates conference control handle.[cn]��ؾ��
                                                         <br>param2��TUP_UINT32 call id [en]Indicates call id.[cn]����ID  
                                                         <br>data��  CONFCTRL_S_CONF_INFO* conf_info [en]Indicates conf info.[cn]������Ϣ */ 
                                               
    CONFCTRL_E_EVT_END_CONF_IND,                    /**< [en]Indicates conference end indicate
                                                         <br>[cn]�������֪ͨ
                                                         <br>param1��TUP_UINT32 handle [en]Indicates conference control handle.[cn]��ؾ��
                                                         <br>param2��None 
                                                         <br>data��  None */
                                               
    CONFCTRL_E_EVT_BE_TRANS_TO_CONF_IND,            /**< [en]Indicates be transferred to the meeting indicate
                                                         <br>[cn]��ת�����֪ͨ
                                                         <br>param1��TUP_UINT32 handle [en]Indicates conference control handle.[cn]��ؾ��
                                                         <br>param2��TUP_UINT32 call id [en]Indicates p2p call id.[cn]ԭ��Ե�ͨ��id 
                                                         <br>data��  CONFCTRL_S_CONF_INFO* conf_info [en]Indicates conference info.[cn]������Ϣ */
                                               
    CONFCTRL_E_EVT_FLOOR_ATTENDEE_IND,              /**< [en]Indicates notice of the speaker
                                                         <br>[cn]���Է�֪ͨ
                                                         <br>param1��TUP_UINT32 handle [en]Indicates conference control handle.[cn]��ؾ��
                                                         <br>param2��None
                                                         <br>data��  TE_FLOOR_ATTENDEE* floor_attendee[en]Indicates speaker info in On-premise VC conference and Hosted VC conference.[cn]On-premise VC�����Hosted VC�����µķ��Է���Ϣ
                                                                     CONFCTRL_S_FLOOR_ATTENDEE_INFO* floor_attendee[en]Indicates speaker info in convergent meeting(include PBX internal meeting).[cn]Convergent meeting �ںϻ���(����PBX���û���)�µķ��Է���Ϣ */
                                               
    CONFCTRL_E_EVT_ATTENDEE_LIST_UPDATE_IND,        /**< [en]Indicates conference status update notify(convergent meeting(include PBX internal meeting))
                                                         <br>[cn]����״̬����֪ͨ(Convergent meeting �ںϻ���(����PBX���û���))
                                                         <br>param1��TUP_UINT32 handle [en]Indicates conference control handle.[cn]��ؾ��
                                                         <br>param2��None
                                                         <br>data��CONFCTRL_S_CONF_STATUS* conf_status [en]Indicates conference status.[cn]����״̬*/

    CONFCTRL_E_EVT_CREATE_CONF_RESULT,               /**< [en]Indicates conference create result
                                                          <br>[cn]������
                                                          <br>param1��TUP_UINT32 handle [en]Indicates conference control handle.[cn]��ؾ��
                                                          <br>param2��TUP_UINT32 result [en]Indicates operation result.[cn]�������
                                                          <br>data��  CCONFCTRL_S_CREATE_CONF_RESULT* creatconf_info [en]Indicates conference create result.[cn]��������Ϣ */ 
                                                    
    CONFCTRL_E_EVT_END_CONF_RESULT,                  /**< [en]Indicates conference end result
                                                          <br>[cn]�˳�������
                                                          <br>param1��TUP_UINT32 handle [en]Indicates conference control handle.[cn]��ؾ��
                                                          <br>param2��TUP_UINT32 result [en]Indicates operation result.[cn]�������
                                                          <br>data��  None */
                                                    
    CONFCTRL_E_EVT_ADD_ATTENDEE_RESULT,              /**< [en]Indicates add attendee result
                                                          <br>[cn]�������߽��
                                                          <br>param1��TUP_UINT32 handle [en]Indicates conference control handle.[cn]��ؾ��
                                                          <br>param2��TUP_UINT32 result [en]Indicates operation result.[cn]�������
                                                          <br>data��  None */
                                                    
    CONFCTRL_E_EVT_DEL_ATTENDEE_RESULT,              /**< [en]Indicates delete attendee result
                                                          <br>[cn]ɾ������߽��
                                                          <br>param1��TUP_UINT32 handle [en]Indicates conference control handle.[cn]��ؾ��
                                                          <br>param2��TUP_UINT32 result [en]Indicates operation result.[cn]�������
                                                          <br>data��  None */
                                                    
    CONFCTRL_E_EVT_CALL_ATTENDEE_RESULT,             /**< [en]Indicates call attendee result
                                                          <br>[cn]��������߽��
                                                          <br>param1��TUP_UINT32 handle [en]Indicates conference control handle.[cn]��ؾ��
                                                          <br>param2��TUP_UINT32 result [en]Indicates operation result.[cn]�������
                                                          <br>data��  CONFCTRL_S_ADD_ATTENDEE_RESULT *result [en]Indicates operation result.[cn]���������Ϣ */
                                                    
    CONFCTRL_E_EVT_HANGUP_ATTENDEE_RESULT,           /**< [en]Indicates hang up attendee result
                                                          <br>[cn]�Ҷ�����߽��
                                                          <br>param1��TUP_UINT32 handle [en]Indicates conference control handle.[cn]��ؾ��
                                                          <br>param2��TUP_UINT32 result [en]Indicates operation result.[cn]�������
                                                          <br>data��  None */
                                                    
    CONFCTRL_E_EVT_REQ_CHAIRMAN_RESULT,              /**< [en]Indicates request chairman result
                                                          <br>[cn]������ϯ���
                                                          <br>param1��TUP_UINT32 handle [en]Indicates conference control handle.[cn]��ؾ��
                                                          <br>param2��TUP_UINT32 result [en]Indicates operation result.[cn]�������(SMC���� -> CC_OPERATION_RSP_REASON_E)
                                                          <br>data��  None */
                                                    
    CONFCTRL_E_EVT_REALSE_CHAIRMAN_RESULT,           /**< [en]Indicates release chairman result
                                                          <br>[cn]�ͷ���ϯ���
                                                          <br>param1��TUP_UINT32 handle [en]Indicates conference control handle.[cn]��ؾ��
                                                          <br>param2��TUP_UINT32 result [en]Indicates operation result.[cn]�������
                                                          <br>data��  None */
                                                    
    CONFCTRL_E_EVT_CONF_POSTPONE_RESULT,             /**< [en]Indicates postpone conference result
                                                          <br>[cn]�ӳ�������
                                                          <br>param1��TUP_UINT32 handle [en]Indicates conference control handle.[cn]��ؾ��
                                                          <br>param2��TUP_UINT32 result [en]Indicates operation result.[cn]�������
                                                          <br>data��  None */
                                                    
    CONFCTRL_E_EVT_MUTE_CONF_RESULT,                 /**< [en]Indicates mute conference result 
                                                          <br>[cn]����\ȡ�������᳡���
                                                          <br>param1��TUP_UINT32 handle [en]Indicates conference control handle.[cn]��ؾ��
                                                          <br>param2��TUP_UINT32 result [en]Indicates operation result.[cn]�������
                                                          <br>data��  TUP_BOOL* b_mute [en]Indicates whether it's muted.[cn]�Ƿ���� */
                                                    
    CONFCTRL_E_EVT_MUTE_ATTENDEE_RESULT,             /**< [en]Indicates mute attendee result
                                                          <br>[cn]����\ȡ����������߽��
                                                          <br>param1��TUP_UINT32 handle [en]Indicates conference control handle.[cn]��ؾ��
                                                          <br>param2��TUP_UINT32 result [en]Indicates operation result.[cn]�������
                                                          <br>data��  TUP_BOOL* b_mute [en]Indicates whether it's muted.[cn]�Ƿ���� */
                                                    
    CONFCTRL_E_EVT_HANDUP_RESULT,                    /**< [en]Indicates hand up result
                                                          <br>[cn]����\ȡ�����ֽ��
                                                          <br>param1��TUP_UINT32 handle [en]Indicates conference control handle.[cn]��ؾ��
                                                          <br>param2��TUP_UINT32 result [en]Indicates operation result.[cn]�������
                                                          <br>data��  TUP_BOOL* b_hangup [en]Indicates whether hang up.[cn]�Ƿ���� */
                                                    
    CONFCTRL_E_EVT_HANDDOWN_ATTENDEE_RESULT,         /**< [en]Indicates hand down attendee result
                                                          <br>[cn]��ϯȡ������߾��ֽ��
                                                          <br>param1��TUP_UINT32 handle [en]Indicates conference control handle.[cn]��ؾ��
                                                          <br>param2��TUP_UINT32 result [en]Indicates operation result.[cn]�������
                                                          <br>data��  None */
                                                    
    CONFCTRL_E_EVT_TRANS_TO_CONF_RESULT,             /**< [en]Indicates transport conference result
                                                          <br>[cn]ת������
                                                          <br>param1��TUP_UINT32 handle [en]Indicates conference control handle.[cn]��ؾ��
                                                          <br>param2��TUP_UINT32 result [en]Indicates operation result.[cn]�������
                                                          <br>data��  TUP_UINT32* call id  [en]Indicates p2p call id.[cn]ԭ��Ե�ͨ��id */
                                                    
    CONFCTRL_E_EVT_SET_CONF_MODE_RESULT,             /**< [en]Indicates set conference mode result
                                                          <br>[cn]���û���ģʽ���
                                                          <br>param1��TUP_UINT32 handle [en]Indicates conference control handle.[cn]��ؾ��
                                                          <br>param2��TUP_UINT32 result [en]Indicates operation result.[cn]�������
                                                          <br>data��  None */
                                                    
    CONFCTRL_E_EVT_SUBSCRIBE_CONF_RESULT,            /**< [en]Indicates subscribe conference info result
                                                          <br>[cn]���Ļ�����Ϣ���
                                                          <br>param1��TUP_UINT32 handle [en]Indicates conference control handle.[cn]��ؾ��
                                                          <br>param2��TUP_UINT32 result [en]Indicates operation result.[cn]�������
                                                          <br>data��  None */
                                                    
    CONFCTRL_E_EVT_LOCK_CONF_RESULT,                 /**< [en]Indicates lock conference result
                                                          <br>[cn]����������
                                                          <br>param1��TUP_UINT32 handle [en]Indicates conference control handle.[cn]��ؾ��
                                                          <br>param2��TUP_UINT32 result [en]Indicates operation result.[cn]�������
                                                          <br>data��  CONFCTRL_CONF_LOCK_INFO_S *result [en]Indicates operation result.[cn]���������Ϣ */
                                                    
    CONFCTRL_E_EVT_GET_CONF_LIST_RESULT,             /**< [en]Indicates get conference list result
                                                          <br>[cn]��ȡ�����б���
                                                          <br>param1��TUP_UINT32 handle [en]Indicates conference control handle.[cn]��ؾ��
                                                          <br>param2��TUP_UINT32 conf_count [en]Indicates conference count.[cn]�������
                                                          <br>data��  CONFCTRL_S_CONF_LIST_INFO* conf_list_info [en]Indicates conference list info.[cn]�����б���Ϣ */
                                                    
    CONFCTRL_E_EVT_GET_CONF_INFO_RESULT,             /**< [en]Indicates get conference info result
                                                          <br>[cn]��ȡ������Ϣ���	                                  
                                                          <br>param1��TUP_UINT32 result [en]Indicates operation result.[cn]�������
                                                          <br>param2��None
                                                          <br>data��  CONFCTRL_S_GET_CONF_INFO_RESULT* conf_info [en]Indicates get conference result info.[cn]��ѯ��������Ϣ */
                                                    
    CONFCTRL_E_EVT_UPGRADE_CONF_RESULT,              /**< [en]Indicates update conference result
                                                          <br>[cn]����������
                                                          <br>param1��TUP_UINT32 handle [en]Indicates conference control handle.[cn]��ؾ��
                                                          <br>param2��TUP_UINT32 result [en]Indicates operation result.[cn]�������
                                                          <br>data��  None */
                                                    
    CONFCTRL_E_EVT_GET_VMR_LIST_RESULT,              /**< [en]Indicates to get VMR result
                                                          <br>[cn]��ȡvmr���	                                              
                                                          <br>param1��TUP_UINT32 result [en]Indicates operation result.[cn]�������
                                                          <br>param2��None
                                                          <br>data��  CONFCTRL_S_VMR_LIST* vrm_list [en]Indicates VMR list.[cn]VMR�б� */
                                                                                                  
    CONFCTRL_E_EVT_UPORTAL_BOOK_CONF_RESULT,         /**< [en]Indicates book conference result
                                                          <br>[cn]ԤԼ������
                                                          <br>param1��TUP_UINT32 result [en]Indicates operation result.[cn]�������
                                                          <br>param2��None
                                                          <br>data��  CONFCTRL_S_CONF_LIST_INFO* conf_list_info [en]Indicates conference list info.[cn]�����б���Ϣ */ 

    CONFCTRL_E_EVT_AUXTOKEN_OWNER_IND,               /**< [en]Indicates aux token indicate 
                                                          <br>[cn]��������ָʾ
                                                          <br>param1��TUP_UINT32 handle [en]Indicates conference control handle.[cn]��ؾ��
                                                          <br>param2��None   
                                                          <br>data��  CONFCTRL_S_ATTENDEE_VC* attendee [en]Indicates identify of TE attendee.[cn]TE�����ʶ��� */
                                                          
    CONFCTRL_E_EVT_AUXSEND_CMD,                      /**< [en]Indicates aux data indicate
                                                          <br>[cn]����ָʾ
                                                          <br>param1��TUP_UINT32 handle [en]Indicates conference control handle.[cn]��ؾ��
                                                          <br>param2��TUP_UINT32 is_send [en]Indicates whether it's sent, 1: yes; 0: no.[cn]�Ƿ��ͣ�ȡֵ��1Ϊ���ͣ�0Ϊδ����   
                                                          <br>data��  None */
                                                          
    CONFCTRL_E_EVT_CONFSTATE_RECOED_IND,             /**< [en]Indicates conference record indicate 
                                                          <br>[cn]����¼��ָʾ
                                                          <br>param1��TUP_UINT32 handle [en]Indicates conference control handle.[cn]��ؾ��
                                                          <br>param2��TUP_UINT32 is_record [en]Indicates whether it's record, 1: yes; 0: no.[cn]�Ƿ�����¼����ȡֵ��1Ϊ��ʼ¼����0Ϊֹͣ¼��   
                                                          <br>data��  None */ 
                                                          
    CONFCTRL_E_EVT_CONFSTATE_LOCK_IND,               /**< [en]Indicates conference state lock indicate
                                                          <br>[cn]������������ָʾ
                                                          <br>param1��TUP_UINT32 handle [en]Indicates conference control handle.[cn]��ؾ��
                                                          <br>param2��TUP_UINT32 is_lock [en]Indicates whether it's locked, 1: yes; 0: no.[cn]�Ƿ�������ȡֵ��1Ϊ������0Ϊ����  
                                                          <br>data��  None */  
                                                          
    CONFCTRL_E_EVT_CONFHALL_LIST_IND,                /**< [en]Indicates conference hall information indicate
                                                          <br>[cn]���������Ϣָʾ
                                                          <br>param1��TUP_UINT32 result [en]Indicates result.[cn]���
                                                          <br>param2��CONFCTRL_HALL_INFO_S* hall_info [en]Indicates conference hall information.[cn]���������Ϣ   
                                                          <br>data��  None */ 
                                                          
    CONFCTRL_E_EVT_DATACONF_PARAMS_RESULT,           /**< [en]Indicates conf params
                                                          <br>[cn]����������ȡ���
                                                          <br>param1��TUP_UINT32 result [en]Indicates result.[cn]���
                                                          <br>param2��none
                                                          <br>data��  CONFCTRL_S_DATACONF_PARAMS* [en]Indicates dataconf param. [cn]���ݻ������ */

    CONFCTRL_E_EVT_ADD_DATA_CONF_IND,               /**< [en]Indicates add data conference indicate
                                                         <br>[cn]�������ݻ���֪ͨ
                                                         <br>param1��TUP_UINT32 handle [en]Indicates conference control handle.[cn]��ؾ��
                                                         <br>param2��TUP_UINT32 call id [en]Indicates call id.[cn]����ID
                                                         <br>data��  CONFCTRL_S_CONF_INFO* conf_info [en]Indicates conference info.[cn]������Ϣ */
                                                    
    CONFCTRL_E_EVT_HOLD_CONF_RESULT,                /**< [en]Indicates hold conference result
                                                         <br>[cn]���ֽ��
                                                         <br>param1��TUP_UINT32 handle [en]Indicates conference control handle.[cn]��ؾ��
                                                         <br>param2��TUP_UINT32 result [en]Indicates operation result.[cn]�������
                                                         <br>data��  None */
                                                    
    CONFCTRL_E_EVT_UNHOLD_CONF_RESULT,              /**< [en]Indicates cancel hold result
                                                         <br>[cn]ȡ�����ֽ��
                                                         <br>param1��TUP_UINT32 handle [en]Indicates conference control handle.[cn]��ؾ��
                                                         <br>param2��TUP_UINT32 result [en]Indicates operation result.[cn]�������
                                                         <br>data��  None */
                                                         
    CONFCTRL_E_EVT_REQUEST_CONF_RIGHT_RESULT,       /**< [en]Indicates request right of conference result
                                                         <br>[cn]������Ȩ�޽��
                                                         <br>param1��TUP_UINT32 handle  [en]Indicates handle of conference [cn]��ؾ��
                                                         <br>param2��TUP_UINT32 result  [en]Indicates operate result [cn]�������
                                                         <br>data�� NA */
                                                    
    CONFCTRL_E_EVT_SVC_WATCH_RESULT,                /**< [en]Indicates svc watch result
                                                         <br>[cn]SVC��Ƶ�ۿ����
                                                         <br>param1��TUP_UINT32 handle  [en]handle of conference [cn]��ؾ��
                                                         <br>param2��TUP_UINT32 result  [en]operate result [cn]�������
                                                         <br>data�� None */
                                                         
    CONFCTRL_E_EVT_SVC_WATCH_IND,                   /**< [en]Indicates svc video watch indicate
                                                         <br>[cn]SVC��Ƶ�ۿ�ָʾ
                                                         <br>param1��TUP_UINT32 handle  [en]handle of conference [cn]��ؾ��
                                                         <br>param2��TUP_UINT32 conf_count [en]number of conference [cn]�������
                                                         <br>data��CONFCTRL_S_SVC_REPORT* svc_report [en]Indicates svc report info.[cn]������svc�б���Ϣ */
    CONFCTRL_E_EVT_BUTT
} CONFCTRL_E_EVENT;

/**
 * [en]This enum is used to describe site call result value.
 * [cn]���к������ֵ
 */
typedef enum tagCC_SITECALL_REASON_E
{
    SITECALL_SUCCESS = 0,                    /**< [en]Indicates success
                                                  <br>[cn] �ɹ� */
    SITECALL_INVALID_USER,                   /**< [en]Indicates user info invalid
                                                  <br>[cn] �û���Ϣ���Ϸ� */
    SITECALL_NO_EXIST_USER,                  /**< [en]Indicates user is not exist
                                                  <br>[cn] �û������� */
    SITECALL_PWD_ERROR,                      /**< [en]Indicates password error
                                                  <br>[cn] ������� */
    SITECALL_SYSTEM_ERROR,                   /**< [en]Indicates system error
                                                  <br>[cn] ϵͳ���ϻ�ϵͳ��Դ���� */
    SITECALL_CONFERENCE_COLLIDE = 5,         /**< [en]Indicates conference collide
                                                  <br>[cn] �����ͻ */
    SITECALL_CARD_ALREADY_ON_LINE,           /**< [en]Indicates card user already on line
                                                  <br>[cn] �����û������� */
    SITECALL_USER_FORBIDDENED,               /**< [en]Indicates calling user is forbidden
                                                  <br>[cn] �����û��ѱ���ͣ */
    SITECALL_PWD_CHG_INVALID,                /**< [en]Indicates password can't be changed
                                                  <br>[cn] ���벻���޸� */
    SITECALL_OUT_OF_MONEY,                   /**< [en]Indicates out of money
                                                  <br>[cn] ���� */
    SITECALL_NETWORK_ERROR = 10,             /**< [en]Indicates network error
                                                  <br>[cn] ������� */
    SITECALL_UNKNOWN_REASON,                 /**< [en]Indicates unknown reason
                                                  <br>[cn] ԭ���� */
    SITECALL_EXIST_SITECALL,                 /**< [en]Indicates it's exist in site call
                                                  <br>[cn] �Ѿ������к��������� */
    SITECALL_FAIL_PEER_NOCAPS,               /**< [en]Indicates no calling ability or ability change fail
                                                  <br>[cn] û�к�����������������ʧ��(E1ר��) */
    SITECALL_FAIL_SENDDATA_TOMCU,            /**< [en]Indicates send calling set to MCU failed
                                                  <br>[cn] ��MCU�������к�������ʧ��(E1ר��) */
    SITECALL_FAIL_CANNOT_SETUPCHANNEL = 15,  /**< [en]Indicates calling set data channel set up failed
                                                  <br>[cn] �������ݴ���ͨ������ʧ��(E1ר��) */
    SITECALL_FAIL_E1_LINEBUSY,               /**< [en]Indicates E1 line is busy, please try again later
                                                  <br>[cn] E1��·æ,���Ժ����� */
    SITECALL_FAIL_PEER_REJECT,               /**< [en]Indicates calling set is reject by MCU
                                                  <br>[cn] MCU�ܾ����к���(E1ר��) */
    SITECALL_TIME_OUT,                       /**< [en]Indicates calling set is time out
                                                  <br>[cn] ���к�����ʱ */
    SITECALL_GK_AUTHOR_FAILED                /**< [en]Indicates GK author failed
                                                  <br>[cn] gk������֤ʧ�� */
} CC_SITECALL_REASON_E;                      //ԭ������prot_callctrl_public.h��

/** 
 * [en]This enum is used to describe attendee info update<br>
 * [cn]�������Ϣ�������
 */
typedef enum tagCC_ATTENDEE_UPDATE_E
{
    CC_ATTENDEE_UPDATE_JOIN = 0,        /**< [en]Indicates attendee join state update
                                             <br>[cn]��������״̬���� */
    CC_ATTENDEE_UPDATE_LEAVE,           /**< [en]Indicates attendee leave state update
                                             <br>[cn]��������״̬���� */
    CC_ATTENDEE_UPDATE_ADD,             /**< [en]Indicates attendee add state update, if receive this message, refresh all related state
                                             <br>[cn]��������״̬����,�յ��ø�����Ϣ�����������״̬��ˢ��һ�� */
    CC_ATTENDEE_UPDATE_DEL,             /**< [en]Indicates attendee delete state update
                                             <br>[cn]�����ɾ��״̬���� */
    CC_ATTENDEE_UPDATE_MUTE,            /**< [en]Indicates attendee mute state update
                                             <br>[cn]����߱���״̬���� */
    CC_ATTENDEE_UPDATE_MUTE_ALL = 5,    /**< [en]Indicates mute all attendee, not support at present
                                             <br>[cn]��������߱��� - �ݲ�ʹ�� */
    CC_ATTENDEE_UPDATE_UNMUTE_ALL,      /**< [en]Indicates all attendee cancel mute, not support at present
                                             <br>[cn]���������ȡ������ - �ݲ�ʹ�� */
    CC_ATTENDEE_UPDATE_NAME,            /**< [en]Indicates attendee name update
                                             <br>[cn]����������� */
    CC_ATTENDEE_UPDATE_PSTN,            /**< [en]Indicates attendee audio conf hall type update
                                             <br>[cn]��Ƶ�᳡���͸��� */
    CC_ATTENDEE_UPDATE_LOCAL_MUTE,      /**< [en]Indicates attendee initiative mute state update
                                             <br>[cn]�������������״̬���� */
    CC_ATTENDEE_UPDATE_NUMBER,          /**< [en]Indicates update terminal number
                                             <br>[cn]�����ն˺��� */
    CC_ATTENDEE_UPDATE_BUTT
} CC_ATTENDEE_UPDATE_E;

/** 
 * [en]This enum is used to describe conference control or call type<br>
 * [cn]���/��������
 */
typedef enum tagCONFCTRLC_E_CALL_TYPE
{
    CONFCTRLC_E_CALLTYPE_ISDN = 0x00,                                         /**< [en]Indicates ISDN call
                                                                                   <br>[cn]ISDN���� */
    CONFCTRLC_E_CALLTYPE_V35,                                                 /**< [en]Indicates V35 call
                                                                                   <br>[cn]V35���� */
    CONFCTRLC_E_CALLTYPE_E1,                                                  /**< [en]Indicates E1 call
                                                                                   <br>[cn]E1���� */
    CONFCTRLC_E_CALLTYPE_H323,                                                /**< [en]Indicates H323 call
                                                                                   <br>[cn]H323���� */
    CONFCTRLC_E_CALLTYPE_PHONE,                                               /**< [en]Indicates phone(pure audio)
                                                                                   <br>[cn]�绰(����Ƶ) */
    CONFCTRLC_E_CALLTYPE_PSTN = 0x05,                                         /**< [en]Indicates PSTN call
                                                                                   <br>[cn]PSTN(խ��) */
    CONFCTRLC_E_CALLTYPE_T1,                                                  /**< [en]Indicates T1 call
                                                                                   <br>[cn]T1���� */
    CONFCTRLC_E_CALLTYPE_4E1,                                                 /**< [en]Indicates 4E1 call
                                                                                   <br>[cn]4E1���� */
    CONFCTRLC_E_CALLTYPE_SIP,                                                 /**< [en]Indicates SIP(IP) call
                                                                                   <br>[cn] SIP(IP)����      */
    CONFCTRLC_E_CALLTYPE_SIPPHONE,                                            /**< [en]Indicates SIP(PHONE) call
                                                                                   <br>[cn]SIP(PHONE)���� */
    CONFCTRLC_E_CALLTYPE_AUTO,                                                /**< [en]Indicates auto switch call type
                                                                                   <br>[cn]�Զ��л��������� */
    CONFCTRLC_E_CALLTYPE_BUTT
} CONFCTRLC_E_CALL_TYPE;

/** 
 * [en]This enum is used to describe conference control operation result value<br>
 * [cn]��ز������ֵ
 */
typedef enum tagCC_OPERATION_RSP_REASON_E
{
    CC_OPERATION_SUCCESS = 0,           /**< [en]Indicates conference control operation is success
                                             <br>[cn]��ز����ɹ� */

    CC_OPERATION_NO_EXIST_USER,         /**< [en]Indicates terminal user is not exist��remove��broadcast��
                                             <br>[cn]�������ն˲����ڣ�remove��broadcast�� */
    CC_OPERATION_NO_PRIVILEGE,          /**< [en]Indicates no privilege to operate(isn't chairman)
                                             <br>[cn]û�в���Ȩ�ޣ�������ϯ�� */

    CC_OPERATION_NO_CHAIR_FUNC,         /**< [en]Indicates no chairman function in conference
                                             <br>[cn]����û����ϯ���� */
    CC_OPERATION_NO_CAP_TO_BE_CHAIR,    /**< [en]Indicates no chairman function in operated conference
                                             <br>[cn]�����ݵ��ն�û����ϯ���� */
    CC_OPERATION_CHAIR_EXIST,           /**< [en]Indicates chairman is exist in conference
                                             <br>[cn]������������ϯ */
    CC_OPERATION_CHAIR_PWD_ERR,         /**< [en]Indicates chairman's password is error
                                             <br>[cn]��ϯ������� */
    CC_OPERATION_AS_SERVER_ERR,         /**< [en]Indicates AS server return error
                                             <br>[cn]AS����������ʧ�� */
    CC_OPERATION_DATA_RESOURCE_NOT_ENOUGH,  /**< [en]Indicates data conference resource is not enough
                                             <br>[cn]���ݻ�����Դ���� */
    CC_OPERATION_SERVER_IS_PROCEEDING,  /**< [en]Indicates server is proceeding,please wait
                                             <br>[cn]���ڴ����У���ȴ� */
    CC_OPERATION_FAIL_UNKNOW = 0xFF     /**< [en]Indicates unknow failed reason
                                             <br>[cn]����ʧ��ԭ�� */
} CC_OPERATION_RSP_REASON_E;

/** 
 * [en]This enum is used to describe video protocol, IDO protocol specification <br>
 * [cn]��ƵЭ�飬IDOЭ��ָ��
 */
typedef enum tagCC_VIDEO_PROTOCOL_E
{
    CC_VIDEO_PROTO_H261 = 0,         /**< [en]Indicates H261 protocol
                                          <br>[cn]H261Э�� */
    CC_VIDEO_PROTO_H263,             /**< [en]Indicates H263 protocol
                                          <br>[cn]H263Э�� */
    CC_VIDEO_PROTO_H264,             /**< [en]Indicates H264 protocol
                                          <br>[cn]H264Э�� */
    CC_VIDEO_PROTO_H263PLUS,         /**< [en]Indicates H263+ protocol
                                          <br>[cn]H263+Э��  */
    CC_VIDEO_PROTO_BUTT
} CC_VIDEO_PROTOCOL_E;

/** 
 * [en]This enum is used to describe video resolution format, IDO protocol specification<br>
 * [cn]��Ƶ�ֱ��ʸ�ʽ��IDOЭ��ָ��
 */
typedef enum tagCC_VIDEO_FORMAT_E
{
    CC_VIDEO_FORMAT_SQCIF = 0,          /**< [en]Indicates SQCIF
                                             <br>[cn]SQCIF */
    CC_VIDEO_FORMAT_QCIF,               /**< [en]Indicates QCIF
                                             <br>[cn]QCIF */
    CC_VIDEO_FORMAT_CIF,                /**< [en]Indicates CIF
                                             <br>[cn]CIF */
    CC_VIDEO_FORMAT_SIF,                /**< [en]Indicates SIF
                                             <br>[cn]SIF */
    CC_VIDEO_FORMAT_288P,               /**< [en]Indicates 512*288 (16:9)
                                             <br>[cn] 512*288 (16:9)*/
    CC_VIDEO_FORMAT_2CIF = 5,           /**< [en]Indicates 2CIF (50/60��)
                                             <br>[cn]2CIF (50/60��)*/
    CC_VIDEO_FORMAT_2SIF,               /**< [en]Indicates 2SIF (50/60��)
                                             <br>[cn]2SIF (50/60��)*/
    CC_VIDEO_FORMAT_4CIF,               /**< [en]Indicates 4CIF
                                             <br>[cn] 4CIF */
    CC_VIDEO_FORMAT_4SIF,               /**< [en]Indicates 4SIF
                                             <br>[cn] 4SIF */
    CC_VIDEO_FORMAT_16CIF,              /**< [en]Indicates 16CIF
                                             <br>[cn] 16CIF */
    CC_VIDEO_FORMAT_384P = 10,          /**< [en]Indicates 672*384 (16:9)
                                             <br>[cn] 672*384 (16:9)*/
    CC_VIDEO_FORMAT_448P,               /**< [en]Indicates 768*448 (16:9)
                                             <br>[cn] 768*448 (16:9)*/
    CC_VIDEO_FORMAT_480P,               /**< [en]Indicates 704*480 (4:3)
                                             <br>[cn] 704*480 (4:3)*/
    CC_VIDEO_FORMAT_576P,               /**< [en]Indicates 704*576 (4:3)
                                             <br>[cn] 704*576 (4:3)*/
    CC_VIDEO_FORMAT_720P,               /**< [en]Indicates 1280*720 (16:9)
                                             <br>[cn] 1280*720 (16:9)*/
    CC_VIDEO_FORMAT_1080P = 15,         /**< [en]Indicates 1920*1080 (16:9)
                                             <br>[cn] 1920*1080 (16:9)*/
    CC_VIDEO_FORMAT_640_480,            /**< [en]Indicates 640*480 
                                             <br>[cn] 640*480 (����)*/
    CC_VIDEO_FORMAT_800_600,            /**< [en]Indicates 800*600
                                             <br>[cn] 800*600 (����)*/
    CC_VIDEO_FORMAT_1024_768,           /**< [en]Indicates 1024*768
                                             <br>[cn] 1024*768 (����)*/
    CC_VIDEO_FORMAT_1280_1024,          /**< [en]Indicates 1280*1024
                                             <br>[cn] 1280*1024 (����)*/
    CC_VIDEO_FORMAT_CUSTOM_FMT = 20,    /**< [en]Indicates custom fmt
                                             <br>[cn] [TODO] */
    CC_VIDEO_FORMAT_RESOLFOR_BUTT
} CC_VIDEO_FORMAT_E;

/** 
 * [en]This enum is used to describe IDO call set protocol packet video frame rate value is defined; according to telecom enterprise standard 2 specifications - table 9-54: video frame rate information (0x5D) data encoding<br>
 * [cn]IDO����Э����е���Ƶ֡��ֵ����;���ݵ������2.0�淶---��� 9-54����Ƶ֡������Ϣ��0x5D�����ݱ���
 */
typedef enum tagCC_VIDEO_FRAMERATE_E
{
    CC_VIDEO_FRAMERATE_30 = 0x01,     /**< [en]Indicates 30 frame, this definition is exist 
                                           <br>[cn]30֡, ��ǰ�����������*/
    CC_VIDEO_FRAMERATE_15,            /**< [en]Indicates 15 frame, this definition is exist
                                           <br>[cn]15֡, ��ǰ�����������*/
    CC_VIDEO_FRAMERATE_10,            /**< [en]Indicates 10 frame, this definition is exist
                                           <br>[cn]10֡, ��ǰ�����������*/
    CC_VIDEO_FRAMERATE_7,             /**< [en]Indicates 7.5 frame, this definition is exist
                                           <br>[cn]7.5֡, ��ǰ�����������*/
    CC_VIDEO_FRAMERATE_60 = 0x05,     /**< [en]Indicates 60 frame, this definition is exist
                                           <br>[cn]60֡, �˴ν�������;*/
    CC_VIDEO_FRAMERATE_BUTT
} CC_VIDEO_FRAMERATE_E;

/** 
 * [en]This enum is used to describe audio protocol and IDO protocol set<br>
 * [cn]��ƵЭ��ö�٣� IDOЭ��ָ��
 */
typedef enum tagCC_AUDIO_PROTOCOL_E
{
    CC_AUDIO_PROTOCOL_G711U  = 0,     /**< [en]Indicates G711u
                                           <br>[cn]G711u*/
    CC_AUDIO_PROTOCOL_G711A,          /**< [en]Indicates G711a
                                           <br>[cn]G711a*/
    CC_AUDIO_PROTOCOL_G722_48K,       /**< [en]Indicates G722_48K
                                           <br>[cn]G722_48K*/
    CC_AUDIO_PROTOCOL_G722_56K,       /**< [en]Indicates G722_48K
                                           <br>[cn]G722_48K*/
    CC_AUDIO_PROTOCOL_G722_64K,       /**< [en]Indicates G722_48K
                                           <br>[cn]G722_48K*/
    CC_AUDIO_PROTOCOL_G7231,          /**< [en]Indicates G723.1
                                           <br>[cn]G723.1*/
    CC_AUDIO_PROTOCOL_G728,           /**< [en]Indicates G728
                                           <br>[cn]G728*/
    CC_AUDIO_PROTOCOL_G729,           /**< [en]Indicates G.729
                                           <br>[cn]G.729*/
    CC_AUDIO_PROTOCOL_AAC_LD,         /**< [en]Indicates low delay bandwidth audio, single channel
                                           <br>[cn]���ӳٿ����Ƶ��������*/
    CC_AUDIO_PROTOCOL_AAC_LC,         /**< [en]Indicates low complicate bandwidth audio, preserver
                                           <br>[cn]�͸��Ӷȿ����Ƶ,Ԥ��*/
    CC_AUDIO_PROTOCOL_HW_WB,          /**< [en]Indicates HuaWei bandwidth audio, preserve
                                           <br>[cn]��Ϊ�����Ƶ��Ԥ��*/
    CC_AUDIO_PROTOCOL_AMR,            /**< [en]Indicates AMR
                                           <br>[cn]AMR*/
    CC_AUDIO_PROTOCOL_AAC_LD_D,       /**< [en]Indicates low delay bandwidth audio, double channel
                                           <br>[cn]���ӳٿ����Ƶ��˫����*/
    CC_AUDIO_PPOTOCOL_AACLD_TRIPLE,   /**< [en]Indicates low delay bandwidth audio, treble channel
                                           <br>[cn]���ӳٿ����Ƶ��������*/
    CC_AUDIO_PROTOCOL_HWALD,          /**< [en]Indicates hwald single channel
                                           <br>[cn]hwald ������ */
    CC_AUDIO_PROTOCOL_HWALD_D,        /**< [en]Indicates hwald double channel
                                           <br>[cn]hwald ˫���� */
    CC_AUDIO_PROTOCOL_BUTT
} CC_AUDIO_PROTOCOL_E;

/** 
 * [en]This enum is used to describe specify the h. 235 strategy identified by the application layer<br>
 * [cn]������ʶӦ�ò�ָ����H.235����
 */
typedef enum tagCC_H235_POLICY_E
{
    CC_H235_NOTUSED  = 0,      /**< [en]Indicates not use H.235
                                    <br>[cn]��ʹ��H.235 */
    CC_H235_USED_MUST,         /**< [en]Indicates use H.235, and it won't get through if GK or the other side not support in order for keeping the maximum safety
                                    <br>[cn]ʹ��H.235,����GK��Զ˲�֧�־Ͳ�ͨ����֤���İ�ȫ��*/
    CC_H235_USED_AUTO          /**< [en]Indicates use H.235, terminals can join conference even if they are not support encryption function, to keep the maximum interoperability  
                                    <br>[cn]ʹ��H.235,��֧�ּ��ܹ��ܵ��ն�Ҳ������ᣬ�������ͨ��*/
} CC_H235_POLICY_E;

/** 
 * [en]This enum is used to describe SRTP policy<br>
 * [cn]SRTP����
 */
typedef enum tagCC_SRTP_POLICY_E
{
    CC_SRTP_NOTUSED  = 0,      /**< [en]Indicates not use SRTP
                                    <br>[cn]��ʹ��SRTP */
    CC_SRTP_USED_MUST,         /**< [en]Indicates use SRTP, and force to use, if the other side not support, this call will create failed
                                    <br>[cn]ʹ��SRTP,��ǿ��ʹ�ã�����Զ˲�֧�֣����н���ʧ�� */
    CC_SRTP_USED_AUTO          /**< [en]Indicates use SRTP, terminals can join conference even if they are not support encryption function, to keep the maximum interoperability  
                                    <br>[cn]ʹ��SRTP,��֧�ּ��ܹ��ܵ��ն�Ҳ������ᣬ�������ͨ��*/
} CC_SRTP_POLICY_E;

/** 
 * [en]This enum is used to describe conference mode<br>
 * [cn]����ģʽ
 */
typedef enum tagCC_SITE_CALL_MODE_E
{
    CC_SITE_CALL_MODE_NORMAL = 0,         /**< [en]Indicates normal mode
                                               <br>[cn]��ͨģʽ */
    CC_SITE_CALL_MODE_REPORT = 1,         /**< [en]Indicates report mode
                                               <br>[cn]�㱨ģʽ */
    CC_SITE_CALL_MODE_BUTT
} CC_SITE_CALL_MODE_E;

/** 
 * [en]This enum is used to describe terminal type<br>
 * [cn]�ն�����
 */
typedef enum tagCCSiteCallTerminalType
{
    CC_isdnVideo,                 /**< [en]Indicates ISDN video terminal
                                       <br>[cn]ISDN��Ѷ�ն�*/
    CC_v35,                       /**< [en]Indicates V.35 terminal
                                       <br>[cn]V.35�ն�*/
    CC_e1,                        /**< [en]Indicates E1 terminal
                                       <br>[cn]E1�ն�*/
    CC_h323,                      /**< [en]Indicates IP terminal
                                       <br>[cn]IP�ն�*/
    CC_phone,                     /**< [en]Indicates phone terminal
                                       <br>[cn]Phone�ն�*/
    CC_4e1,                       /**< [en]Indicates 4E1 terminal
                                       <br>[cn]4E1�ն�*/
    CC_sip,                       /**< [en]Indicates SIP terminal
                                       <br>[cn]SIP�ն�*/

    CC_invalidTerminalType = 0xFF /**< [en]Indicates represent invalid value
                                       <br>[cn]������Ч��ֵ*/
} CCSiteCallTerminalType;//ԭCC_h323mmGBSiteCallTerminalType

/** 
 * [en]This enum is used to describe terminal language type<br>
 * [cn]�ն���������
 */
typedef enum tagCCSiteCallLanguageType
{
    CC_sitecall_simpleChineseGB2312,  /**< [en]Indicates simple ChineseGB2312
                                           <br>[cn]��������GB2312 */
    CC_sitecall_simpleChineseHZ,      /**< [en]Indicates simple ChineseHZ
                                           <br>[cn]��������HZ */
    CC_sitecall_english,              /**< [en]Indicates English
                                           <br>[cn]Ӣ�� */
    CC_sitecall_complexChinese,       /**< [en]Indicates complex Chinese
                                           <br>[cn]�������� */

    CC_invalidLanguageType = 0xFF     /**< [en]Indicates represent invalid value
                                           <br>[cn]������Ч��ֵ */
} CCSiteCallLanguageType; //ԭCC_h323LanguageType

/** 
 * [en]This enum is used to describe IP version definition<br>
 * [cn]��ַ���Ͷ���
 */
typedef enum _enumIpVer
{
    CC_IP_V4 = 1,   /**< [en]Indicates IPV4 address
                         <br>[cn]IPV4��ַ */
    CC_IP_V6,       /**< [en]Indicates IPV6 address
                         <br>[cn]IPV6��ַ */

    CC_IP_BUTT
} CC_IP_VERSION_E;

/** 
 * [en]This enum is used to describe ITU-T H.221 transfer rate command(has been abandoned)<br>
 * [cn]ITU-T H.221�Ĵ�����������(�ѷ���) 
 */
typedef enum tagCC_TRANSFER_RATE_CMD_E
{
    CC_TRANSFER_COMMAND_64K   = 0x20,        /**< [en]Indicates transfer rate, 64kbps
                                                  <br>[cn]�����������ʣ�64Kbps */
    CC_TRANSFER_COMMAND_2_64K,               /**< [en]Indicates twice times transfer rate, 64kbps
                                                  <br>[cn]˫���������ʣ�64Kbps */
    CC_TRANSFER_COMMAND_3_64K,               /**< [en]Indicates third times transfer rate, 64kbps
                                                  <br>[cn]�����������ʣ�64Kbps */
    CC_TRANSFER_COMMAND_4_64K,               /**< [en]Indicates fourth times transfer rate, 64kbps
                                                  <br>[cn]�ı��������ʣ�64Kbps */
    CC_TRANSFER_COMMAND_5_64K,               /**< [en]Indicates fifth times transfer rate, 64kbps
                                                  <br>[cn]�屶�������ʣ�64Kbps */
    CC_TRANSFER_COMMAND_6_64K,               /**< [en]Indicates sixth times transfer rate, 64kbps
                                                  <br>[cn]�����������ʣ�64Kbps */
    CC_TRANSFER_COMMAND_384K,                /**< [en]Indicates transfer rate, 384kbps
                                                  <br>[cn]�����������ʣ�384Kbps */
    CC_TRANSFER_COMMAND_2_384K,              /**< [en]Indicates twice times transfer rate, 384kbps
                                                  <br>[cn]˫���������ʣ�384Kbps */
    CC_TRANSFER_COMMAND_3_384K,              /**< [en]Indicates third times transfer rate, 384kbps
                                                  <br>[cn]�����������ʣ�384Kbps */
    CC_TRANSFER_COMMAND_4_384K,              /**< [en]Indicates fourth times transfer rate, 384kbps
                                                  <br>[cn]�ı��������ʣ�384Kbps */
    CC_TRANSFER_COMMAND_5_384K,              /**< [en]Indicates fifth times transfer rate, 384kbps
                                                  <br>[cn]�屶�������ʣ�384Kbps */
    CC_TRANSFER_COMMAND_1536K,               /**< [en]Indicates 1536Kbps
                                                  <br>[cn]1536Kbps */
    CC_TRANSFER_COMMAND_1920K,               /**< [en]Indicates 1920Kbps
                                                  <br>[cn]1920Kbps */
    CC_TRANSFER_COMMAND_128K,                /**< [en]Indicates 128Kbps
                                                  <br>[cn]128Kbps */
    CC_TRANSFER_COMMAND_192K,                /**< [en]Indicates 192Kbps
                                                  <br>[cn]192Kbps */
    CC_TRANSFER_COMMAND_256K,                /**< [en]Indicates 256Kbps
                                                  <br>[cn]256Kbps */
    CC_TRANSFER_COMMAND_320K,                /**< [en]Indicates 320Kbps
                                                  <br>[cn]320Kbps */
    CC_TRANSFER_COMMAND_LOSSIC,              /**< [en]Indicates lossic
                                                  <br>[cn] */
    CC_TRANSFER_COMMAND_512K  = 0x20 + 23,   /**< [en]Indicates 512Kbps
                                                  <br>[cn]512Kbps */
    CC_TRANSFER_COMMAND_768K,                /**< [en]Indicates 768Kbps
                                                  <br>[cn]768Kbps */
    CC_TRANSFER_COMMAND_1152K = 0x20 + 26,   /**< [en]Indicates 1152Kbps
                                                  <br>[cn]1152Kbps */
    CC_TRANSFER_COMMAND_1472K = 0x20 + 29,   /**< [en]Indicates 1472Kbps
                                                  <br>[cn]1472Kbps */
    CC_TRANSFER_COMMAND_BUTT
} CC_TRANSFER_RATE_CMD_E;


#define CC_MAX_IPADDR_HEX_LEN 16                 /**< [en]Indicates the maximum length of IP address
                                                      <br>[cn]IP��ַ��󳤶� */

/** 
 * [en]This struct is used to describe IP protocol address structure definition<br>
 * [cn]IPЭ���ַ�ṹ����
 */
typedef struct tagCC_IP_ADDR_S
{
    CC_IP_VERSION_E enIpVer;                    /**< [en]Indicates Ip version. [cn]�����ַЭ������ */
    union
    {
        TUP_UINT32 ulIpv4;                      /**< [en]Indicates IPV4 address. [cn]IPV4��ַ */
        TUP_UINT8  ipv6[CC_MAX_IPADDR_HEX_LEN]; /**< [en]Indicates IPV6 address. [cn]IPV6��ַ */
    } u;
} CC_IP_ADDR_S;

/** 
 * [en]This struct is used to describe E164 number structure definition<br>
 * [cn]E164����
 */
typedef struct tagCC_E164NUM
{
    TUP_UINT8  ucNumberLen;          /**< [en]Indicates the terminal number length. [cn]����ĳ��� */
    TUP_UINT8 *pucNumber;            /**< [en]Indicates terminal number string pointer. [cn]�ն˺����ַ���ָ�� */
} CC_E164NUM;

/** 
 * [en]This struct is used to describe chairman add conference hall structure, only can call by number at present but need to provide interface settings of the venue name<br>
 * [cn]��ϯ��ӻ᳡�Ľṹ,Ŀǰֻ���ú�����к���,������Ҫ�ṩ�������õĻ᳡��
 */
typedef struct tagCC_AddTerminalInfo
{
    TUP_UINT8                nTerminalIDLength;     /**< [en]Indicates terminal byname length. [cn]�������ȣ�1-128 */
    TUP_UINT8           *    pTerminalID;           /**< [en]Indicates terminal byname. [cn]�ն˱��� */
    TUP_UINT8                ucNumberLen;           /**< [en]Indicates terminal number length. [cn]�ն˺���ĳ��� */
    TUP_UINT8           *    pucNumber;             /**< [en]Indicates terminal number string pointer. [cn]�ն˺����ַ���ָ�� */
    TUP_UINT8                ucURILen;              /**< [en]Indicates terminal number length. [cn]�ն˺���ĳ��� */
    TUP_UINT8           *    pucURI;                /**< [en]Indicates URI number. [cn]URI ���� */
    CCSiteCallTerminalType   TerminalType;          /**< [en]Indicates terminal type, required and should be correct, initialize default type ISDN. [cn]�ն�����,������Ҫ��ȷ����ʼ��Ĭ��ΪISDN���� */
    TUP_UINT32               udwSiteBandwidth;      /**< [en]Indicates conference hall bandwidth. [cn]�᳡������λ:kbps */
    CCSiteCallLanguageType   LanguageType;          /**< [en]Indicates language type, value refer to enum tagCCSiteCallLanguageType. [cn]�������ͣ��ɲ����ʼֵ���� */
    CC_IP_ADDR_S             stTerminalIPAddr;      /**< [en]Indicates terminal network type. [cn]�ն˵������ַ */

    /*����Ϊisdn�᳡��Ϣ��û�оͱ��ֳ�ʼ��ֵ*/
    TUP_UINT8                ucInternationCodeLen;  /**< [en]Indicates international code length. [cn]���Ҵ���ĳ��� */
    TUP_UINT8           *    pucInternationCode;    /**< [en]Indicates international code string pointer. [cn]���Ҵ����ַ���ָ�� */
    TUP_UINT8                ucNationCodeLen;       /**< [en]Indicates nation code length. [cn]��������ĳ��� */
    TUP_UINT8           *    pucNationCode;         /**< [en]Indicates nation code string pointer. [cn]���������ַ���ָ�� */
    TUP_UINT8                ucTelcount;            /**< [en]Indicates telephone number count. [cn]�绰������� */
    CC_E164NUM              *pucTel;                /**< [en]Indicates n count telephone number pointer. [cn]n���绰�����ָ�� */
} CC_AddTerminalInfo;                               //ԭCC_H323AddTerminalInfo

/** 
 * [en]This struct is used to describe data structure of pay mode<br>
 * [cn]���ѷ�ʽ���ݽṹ
 */
typedef struct tagCC_SITECALL_PAYMODE
{
    TUP_UINT8            ucPayMode;          /**< [en]Indicates pay mode, distinguish pay side, if it's 1 means local side pay, if it's 0 means other account pay. [cn]���ѷ�ʽ�����ָ��ѷ�,������ѷ�Ϊ1,���ʾ���˸���;������ѷ�Ϊ0,���ʾ��������(�ʺŸ���) */
    TUP_UINT16           CardNumberLen;      /**< [en]Indicates card number length. [cn]���ų��� */
    TUP_UINT8           *pucCardNumber;      /**< [en]Indicates card number. [cn]���� */
    TUP_UINT16           CardPwdLen;         /**< [en]Indicates card password length. [cn]�����볤�� */
    TUP_UINT8           *pucCardPwd;         /**< [en]Indicates card password. [cn]������ */
} CC_SITECALL_PAYMODE; //ԭH323C_SITECALL_PAYMODE

/** 
 * [en]This struct is used to describe voice control param<br>
 * [cn]���ز���
 */
typedef struct tagCONFCTRLC_S_VOICECTRL_PARAM
{
    TUP_UINT8  ucIsUseVoiceCtrl; /**< [en]Indicates whether this conference  uses voice control, 0 represent no, 1 represent yes. [cn]�û����Ƿ�ʹ������:ȡֵ:0��������, 1������ */
    TUP_UINT8  ucVoiceCtrlType;  /**< [en]Indicates voice control type.Complement telepresence use:  0x00:use voice control switch;  0x01:screen control switch  [cn]�������ͣ�ȡֵ:��������ʹ��: 0x00: ���᳡�����л�;0x01: ���������л�; ���������ȱʡ��0; */
    TUP_UINT32 ulVoiceValue;     /**< [en]Indicates voice control switch limit value: 0--100. [cn]�����л�����ֵ: 0---100; */
} CONFCTRLC_S_VOICECTRL_PARAM;

/** 
 * [en]This struct is used to describe caller calling input parameter information<br>
 * [cn]���к������������Ϣ�ܽṹ.
 */
typedef struct tagCONFCTRL_BOOKCONF_INFO_S
{
    TUP_UINT8                   ucSiteCallType;        /**< [en]Indicates call set type, at present only support one kind, keep default value CONFCTRLC_E_CALLTYPE_SIP, value refer to  CONFCTRLC_E_CALL_TYPE, required. [cn]���к������ͣ���ǰ��֧��һ�֣�����Ĭ��ֵCONFCTRLC_E_CALLTYPE_SIP��ȡֵ�ο�CONFCTRLC_E_CALL_TYPE����ѡ */
    TUP_UINT16                  ulSiteNumber;          /**< [en]Indicates site number,required. [cn]�᳡��Ŀ����ѡ */
    CC_AddTerminalInfo *        pcParam1;              /**< [en]Indicates chairman add conference hall struct param, required. [cn]��ϯ��ӻ᳡�Ľṹ��������ѡ */
    TUP_UINT32                  TerminalDataRate;      /**< [en]Indicates QB_V2 is bandwidth value, bandwidth unit is 100 bit/s optional. [cn]QB_V2Ϊ����ֵ��ע�⣺����λΪ100bit/s����ѡ */
    TUP_UINT16                  usPwdLen;              /**< [en]Indicates conference password length optional. [cn]�������볤�ȣ���ѡ */
    TUP_UINT8 *                 pucPwd;                /**< [en]Indicates conference password pointer optional. [cn]��������ָ�롣��ѡ */
    TUP_UINT16                  usAnonymousSiteNumber; /**< [en]Indicates anonymous site number optional. [cn]�����᳡��������ѡ */
    TUP_UINT8                   ucHasMuiltiPic;        /**< [en]Indicates whether has multi-picture optional. [cn]�Ƿ��ж໭��,ȡֵ:1Ϊ�У�0Ϊ�ޣ���ѡ */
    TUP_UINT32                  ulSubPicCnt;           /**< [en]Indicates sub picture count optional. [cn]�ܵ��ӻ������,����໭����������ѡ */
    TUP_UINT32                  ulMultiPicGroupCnt;    /**< [en]Indicates multi-picture group count optional. [cn]�໭������,����໭����������ѡ */
    TUP_UINT16                  usConfNameLen;         /**< [en]Indicates conference name length optional. [cn]�������Ƴ��ȣ���ѡ */
    TUP_UINT8 *                 pucConfName;           /**< [en]Indicates conference name pointer optional. [cn]��������ָ�룬��ѡ */
    TUP_UINT8 *                 pucLanguage;           /**< [en]Indicates terminal language info, set language-country for example "zh-CN","en-US","zh-TW" optional. [cn]�ն�������Ϣ����������-���Ҵ��룬�磺"zh-CN","en-US","zh-TW"�ȣ���ѡ */
    CC_SITECALL_PAYMODE *       pPayMode;              /**< [en]Indicates pay mode structure pointer optional. [cn]���ѷ�ʽ�ṹ��ָ�룬��ѡ */
    TUP_UINT8                   ucHasDataConf;         /**< [en]Indicates Whether include data conference, value: 2 means include, 0 means no, optional. [cn]�Ƿ�������ݻ��飬ȡֵ:2Ϊ�������ݻ��飬0Ϊ����������ѡ */
    TUP_UINT8                   ucHasAuxVideo;         /**< [en]Indicates whether has aux video,value: 1 means include, 0 means no, optional. [cn]�Ƿ����˫����ȡֵ:1Ϊ����˫����0Ϊ����������ѡ */
    TUP_UINT8                   ucbMVRecord;           /**< [en]Indicates whether support record_flag,value: 1 means include, 0 means no, optional. [cn]�Ƿ�֧��¼��ȡֵ:1Ϊ֧�֣�0Ϊ��֧�֣���ѡ */
    TUP_UINT8                   ucbMVBroadcast;        /**< [en]Indicates whether support broadcast,value: 1 means include, 0 means no, optional. [cn]�Ƿ�֧��ֱ�Ӳ���ȡֵ:1Ϊ֧�֣�0Ϊ��֧�֣���ѡ */
    TUP_UINT8                   ucRoleLabel;           /**< [en]Indicates role label optional. [cn]��ɫ��ǩ����ѡ */
    CC_IP_ADDR_S                stLocalAddr;           /**< [en]Indicates local address, static ip need to be set under ios, otherwise http can't connect server optional. [cn]���ص�ַ��iOS�����Ϊ��̬ip��Ҫ���ã�����http����޷���ͨ����������ѡ */
    CC_IP_ADDR_S                stServerAddr;          /**< [en]Indicates server address, if it's 4E1,address type is mcu, otherwise it's invalid, currently writer sc address optional. [cn]����˵�ַ�������4E1,��Ϊmcu��ַ��������Ч zhubin����ǰ��SC��ַ����ѡ */  
    TUP_UINT8                   ucSiteCallMode;        /**< [en]Indicates site call mode, 0 means convene immediately, 1 means reserve convene value: 1 means booking meeting, 0 means immediately convene, optional. [cn]���к�����ʽ��ȡֵ:0�������ٿ���1��ԤԼ�ٿ�����ѡ */
    TUP_UINT32                  ulSiteCallStartTime;   /**< [en]Indicates if reserve convene, it's start time, otherwise it's invalid optional. [cn]�����ԤԼ�ٿ�����Ϊ��ʼʱ�䣬������Ч����ѡ */
    TUP_UINT32                  ulSiteCallTime;        /**< [en]Indicates if reserve convene, it's last time. [cn]�����ԤԼ�ٿ�����Ϊ����ʱ�䣨UTC������ѡ */
    TUP_INT32                   lTimezoneOffset;       /**< [en]Indicates current time zone off set optional. [cn]��ǰʱ��ƫ�ƣ���ѡ */
    CC_VIDEO_PROTOCOL_E         eVideoProto;           /**< [en]Indicates video protocol, auto adapt is CC_VIDEO_PROTO_BUTT optional. [cn]��ƵЭ��,����Ӧ��CC_VIDEO_PROTO_BUTT����ѡ */
    CC_VIDEO_FORMAT_E           eVideoFormat;          /**< [en]Indicates video format. [cn]��Ƶ�ֱ��ʸ�ʽ����ѡ */
    CC_VIDEO_FRAMERATE_E        eVideoFrameRate;       /**< [en]Indicates video frame rate. At present, H264 video format 720P 50/60 1080P 50/60 write 0x05, other situation can default write 0x01, refer to CC_VIDEO_FRAMERATE_E optional. [cn]��Ƶ֡��(Ŀǰ����H264��Ƶ��ʽ720P 50/60 1080P 50/60 ʱ��0x05�����������ȱʡ��0x01����CC_VIDEO_FRAMERATE_E����)����ѡ */
    CC_AUDIO_PROTOCOL_E         eAudioProto;           /**< [en]Indicates audio protocol, auto adapt is CC_AUDIO_PROTOCOL_BUTT optional. [cn]��ƵЭ�飬����Ӧ��CC_AUDIO_PROTOCOL_BUTT����ѡ */
    CC_H235_POLICY_E            eH235Policy;           /**< [en]Indicates H234 policy optional. [cn]H235����ʹ�ã���ѡ */
    CC_SRTP_POLICY_E            eSipSrtpPolicy;        /**< [en]Indicates sip srtp policy optional. [cn]SIP���к������ܲ��ԣ���ѡ */
    CC_SITE_CALL_MODE_E         eSiteCallMode;         /**< [en]Indicates site call mode(normal mode, report mode) optional. [cn]����ģʽ(��ͨģʽ���㱨ģʽ)����ѡ */
    CONFCTRLC_S_VOICECTRL_PARAM stVoiceCtrlParam;      /**< [en]Indicates voice control param optional. [cn]�����л�������Ϣ����ѡ */
    TUP_UINT8*                  pucScDomain;           /**< [en]Indicates registerd sc server. optional. [cn]SIP�˺�ע���SC��ַ�������ڶ�SC������ָ�����к���ҵ�����������ѡ*/
} CONFCTRL_BOOKCONF_INFO_S;

/** 
 * [en]This struct is used to describe cancelled reserve conference<br>
 * [cn]ȡ��ԤԼ����
 */
typedef struct tagCONFCTRL_SITECALLCANCEL_INFO_S
{
    TUP_UINT8    ucSiteCallType;        /**< [en]Indicates site call type, support only one at present, keep default, application layer do not need. [cn]���к������ͣ���ǰ��֧��һ�֣�����Ĭ��ֵ��Ӧ�ò���������д */
    TUP_UINT8    ucConfNumLen;          /**< [en]Indicates conf number length. [cn]�������Ƴ��� */
    TUP_UINT8 *  pucConfNum;            /**< [en]Indicates conf number. [cn]�������� */
    TUP_UINT8 *  pucLanguage;           /**< [en]Indicates terminal language info. [cn]�ն�������Ϣ */
    CC_IP_ADDR_S stServerAddr;          /**< [en]Indicates server address. [cn]��������ַ */
} CONFCTRL_CANCELCONF_INFO_S;

/** 
 * [en]This struct is used to describe call conference info query <br>
 * [cn]����������Ϣ��ѯ
 */
typedef struct tagCONFCTRL_SITECALLQUERY_INFO_S
{
    TUP_UINT8            ucSiteCallType;       /**< [en]Indicates site call type, support only one at present, keep default, application layer do not need. [cn]���к������ͣ���ǰ��֧��һ�֣�����Ĭ��ֵ��Ӧ�ò���������д */
    TUP_UINT8            ucConferenceType;     /**< [en]Indicates conference type. [cn]�������ͣ�ȡֵ�ο�CONFCTRL_E_CONF_ENV_TYPE */
    TUP_UINT8            ucGetConfType;        /**< [en]Indicates get conference type. [cn]��ȡ�������� */
    TUP_UINT8            ucGetConfSeq;         /**< [en]Indicates get conference sequence. [cn] �������*/
    TUP_UINT8            ucGetConfNum;         /**< [en]Indicates get conference number. [cn]��ȡ�������� */
    TUP_UINT8 *          pucLanguage;          /**< [en]Indicates terminal language. [cn]�ն�������Ϣ */
    CC_SITECALL_PAYMODE *pPayMode;             /**< [en]Indicates pay mode. [cn] ����ģʽ*/
    CC_AddTerminalInfo * pcMyTerminal;         /**< [en]Indicates my terminal. [cn] �ҵ��ն�*/
    CC_IP_ADDR_S         stServerAddr;         /**< [en]Indicates server address. [cn]��������ַ */
} CONFCTRL_SITECALLQUERY_INFO_S;

/** 
 * [en]This struct is used to describe SMC one key join conference list query<br>
 * [cn]SMCһ������б��ѯ
 */
typedef struct tagCONFCTRL_SITECALLCONFLISTQUERY_INFO_S
{
    TUP_UINT8            ucSiteCallType;       /**< [en]Indicates site call type, at present only support one kind, keep default value, application layer don't need. [cn]���к������ͣ���ǰ��֧��һ�֣�����Ĭ��ֵ��Ӧ�ò���������д[MODIFY],��structȫ��Ϊ�Զ��壬�����ο� */
    TUP_UINT8            ucConferenceType;     /**< [en]Indicates conference type. [cn]�������� */
    TUP_UINT8            ucGetConfType;        /**< [en]Indicates get conference type. [cn]��ȡ�������� */
    TUP_UINT16          usGetConfSeq;         /**< [en]Indicates get conference sequence. [cn] ��ȡ��������*/
    TUP_UINT16          usGetConfNum;         /**< [en]Indicates get conference number. [cn]��ȡ������� */
    TUP_UINT32          ulConfEndTime;        /**< [en]Indicates conference end time. [cn]��ֹʱ��*/
    TUP_UINT8            ucNumberLen;          /**< [en]Indicates terminal number length. [cn�ն˺��볤��*/
    TUP_UINT8 *         pucNumber;          /**< [en]Indicates terminal number. [cn]�ն˺���*/
    TUP_UINT8 *         pucLanguage;          /**< [en]Indicates terminal language information. [cn]�ն�������Ϣ */
    //TUP_UINT8            ucGetConfListType;       /**< [en]xxxx. [cn]�ն�������Ϣ */
    //CC_SITECALL_PAYMODE *pPayMode;             /**< [en]xxxx. [cn] */
    //CC_AddTerminalInfo * pcMyTerminal;         /**< [en]xxxx. [cn] */
    CC_IP_ADDR_S         stServerAddr;         /**< [en]Indicates server address. [cn]��������ַ */
} CONFCTRL_SITECALLCONFLISTQUERY_INFO_S;

/** 
 * [en]This struct is used to describe acquired FTP conference info<br>
 * [cn]��ȡFTP������Ϣ
 */
typedef struct tagCONFCTRL_GETFTP_INFO_S
{
    TUP_UINT8    ucSiteCallType;         /**< [en]Indicates site call type, only support one type at present, keep default value, application layer needn't write at present. [cn]���к������ͣ���ǰ��֧��һ�֣�����Ĭ��ֵ��Ӧ�ò���������д */
    CC_IP_ADDR_S stServerAddr;           /**< [en]Indicates FTP server address. [cn]FTP��������ַ */
} CONFCTRL_GETFTP_INFO_S;

//////////////////////////////////////////////////////////////////////////
//֪ͨ�ϲ�Ļ����б���ض���
//all from prot_call_public
#define CC_MAX_CONF_ID_LENGTH   20          /**< [en]Indicates the maximum length conf id
                                                 <br>[cn]����ID����󳤶� */
#define CC_MAX_CONF_NAME_LENGTH 192         /**< [en]Indicates the maximum length conf name
                                                 <br>[cn]�������Ƶ���󳤶� */
#define CC_MAX_CONF_DESC_LENGTH 256         /**< [en]Indicates the maximum length conf describe
                                                 <br>[cn]���鱸ע����󳤶� */
#define CC_MAX_SELECT_CONF_NUM  8           /**< [en]Indicates the maximum length select conf number
                                                 <br>[cn]��ϸ�Ļ�����Ϣ */

/** 
 * [en]This struct is used to describe single conference message<br>
 * [cn]����������Ϣ
 */
typedef struct tagCC_CONF_INFO_S
{
    TUP_UINT16 uwInfoLen;                                   /**< [en]Indicates conference info length. [cn]��������Ϣ���� */
    TUP_UINT8  ucConfIDLen;                                 /**< [en]Indicates conference id length. [cn]����ų��� */
    TUP_UINT8  ucConfID[CC_MAX_CONF_ID_LENGTH];             /**< [en]Indicates conference id. [cn]����ţ����ַ���ʾ */
    TUP_UINT8  ucConfNameLen;                               /**< [en]Indicates conference name length. [cn]�������Ƴ��� */
    TUP_UINT8  ucConfName[CC_MAX_CONF_NAME_LENGTH];         /**< [en]Indicates conference name. [cn]�������� */
    TUP_UINT32 udwConfStartTime;                            /**< [en]Indicates conference start time. [cn]������ʼʱ�� */
    TUP_UINT32 udwConfEndTime;                              /**< [en]Indicates conference end time. [cn]�������ʱ�� */
    TUP_UINT16 uwConfDescLen;                               /**< [en]Indicates conference describe length. [cn]���鱸ע��Ϣ���� */
    TUP_UINT8  ucConfDesc[CC_MAX_CONF_DESC_LENGTH];         /**< [en]Indicates conference describe info. [cn]���鱸ע��Ϣ */
} CC_CONF_INFO_S;                                           //from prot_call_public

/** 
 * [en]This struct is used to describe conference list<br>
 * [cn]�����б�
 */
typedef struct tagCC_CONF_LIST_S
{
    TUP_UINT16     usConfCount;                      /**< [en]Indicates conference count. [cn]������Ŀ */
    TUP_UINT16     usConfStartSeq;                   /**< [en]Indicates conference start sequence. [cn]������ʼ��� */
    TUP_UINT8      ucRemainConf;                     /**< [en]Indicates whether remain conference. [cn]�Ƿ���ʣ�����,ȡֵ:1Ϊ�У�0Ϊ�� */
    TUP_UINT8      ucGBorUTF8;                       /**< [en]Indicates 0:GB, 1:UTFB. [cn]0:GB,1:UTF8 */
    TUP_UINT8      ucSiteCallType;                  /**< [en]Indicates conference type H323 or SIP. [cn]��������H323 or SIP */
    CC_CONF_INFO_S confinfo[CC_MAX_SELECT_CONF_NUM]; /**< [en]Indicates detail conference info. [cn]��ϸ�Ļ�����Ϣ */
} CC_CONF_LIST_S;                                    //from prot_call_public

//////////////////////////////////////////////////////////////////////////
// ��ؽӿڲ�������


/** 
 * [en]This enum is used to describe conference enviroment type<br>
 * [cn]���黷������
 */
typedef enum tagCONFCTRL_E_CONF_ENV_TYPE
{
    CONFCTRL_E_CONF_ENV_ON_PREMISE_VC = 1,     /**< [en]Indicates VC solutions and settled (on-premise) network in On-premise VC meeting  [cn]On-premise VC����: VC�������, ��פʽ(on-premise)���� */
    CONFCTRL_E_CONF_ENV_HOSTED_VC,             /**< [en]Indicates VC solutions and IMS Hosted&SP Hosted network in Hosted VC meeting [cn]Hosted VC����: VC�������, IMS Hosted&SP Hosted���� */
    CONFCTRL_E_CONF_ENV_CONVERGENT_MEEYING,    /**< [en]Indicates Convergent meeting: EC solutions, IMS Hosted&SP Hosted network, and all network of internal conference in PBX solutions [cn]Convergent meeting �ںϻ���: EC�������, IMS Hosted&SP Hosted�������Լ�PBX��������µ����û����������� */
    CONFCTRL_E_CONF_ENV_BUTT
}CONFCTRL_E_CONF_ENV_TYPE;


/**
 * [en]This enum is used to describe authentication mode
 * [cn]��֤ģʽ
 */
typedef enum tagCONFCTRL_E_HTTPS_VERIFY_MODE
{
    CONFCTRL_E_HTTPS_VERIFY_NONE   =  0x0000,      /**< [en]Indicates anonymous authentication, there is a security risk, please use with caution. [cn]������֤�����ڰ�ȫ���գ������ʹ�á�*/
    CONFCTRL_E_HTTPS_VERIFY_PEER   =  0x0001       /**< [en]Indicates peer authentication. [cn]˫����֤ */
}CONFCTRL_E_HTTPS_VERIFY_MODE;

/**
 * [en]This enum is used to describe cipher enum type
 * [cn]����������ö��
 */
typedef enum tagCONFCTRL_E_CIPHER_TYPE
{
    CONFCTRL_E_TLS11_CK_RSA_NULL_MD5               = 0x03000001,               
    CONFCTRL_E_TLS11_CK_RSA_NULL_SHA               = 0x03000002,          
    CONFCTRL_E_TLS11_CK_RSA_RC4_128_MD5            = 0x03000004,            
    CONFCTRL_E_TLS11_CK_RSA_RC4_128_SHA            = 0x03000005,           
    CONFCTRL_E_TLS11_CK_RSA_DES_64_CBC_SHA         = 0x03000009,         
    CONFCTRL_E_TLS11_CK_RSA_DES_192_CBC3_SHA       = 0x0300000A, 
    CONFCTRL_E_TLS11_CK_EDH_DSS_DES_64_CBC_SHA     = 0x03000012,        
    CONFCTRL_E_TLS11_CK_EDH_DSS_DES_192_CBC3_SHA   = 0x03000013,      
    CONFCTRL_E_TLS11_CK_EDH_RSA_DES_64_CBC_SHA     = 0x03000015,            
    CONFCTRL_E_TLS11_CK_EDH_RSA_DES_192_CBC3_SHA   = 0x03000016,     
    CONFCTRL_E_TLS11_CK_ADH_RC4_128_MD5            = 0x03000018,            
    CONFCTRL_E_TLS11_CK_ADH_DES_64_CBC_SHA         = 0x0300001A,            
    CONFCTRL_E_TLS11_CK_ADH_DES_192_CBC3_SHA       = 0x0300001B,       
    CONFCTRL_E_TLS11_CK_RSA_WITH_AES_128_SHA       = 0x0300002F,       
    CONFCTRL_E_TLS11_CK_DHE_DSS_WITH_AES_128_SHA   = 0x03000032,   
    CONFCTRL_E_TLS11_CK_DHE_RSA_WITH_AES_128_SHA   = 0x03000033, 
    CONFCTRL_E_TLS11_CK_ADH_WITH_AES_128_SHA       = 0x03000034,  
    CONFCTRL_E_TLS11_CK_RSA_WITH_AES_256_SHA       = 0x03000035,      
    CONFCTRL_E_TLS11_CK_DHE_DSS_WITH_AES_256_SHA   = 0x03000038,  
    CONFCTRL_E_TLS11_CK_DHE_RSA_WITH_AES_256_SHA   = 0x03000039,  
    CONFCTRL_E_TLS11_CK_ADH_WITH_AES_256_SHA       = 0x0300003A,   
    CONFCTRL_E_TLS12_CK_RSA_NULL_SHA256            = 0x0300003B,
    CONFCTRL_E_TLS12_CK_RSA_AES_128_CBC_SHA256     = 0x0300003C,
    CONFCTRL_E_TLS12_CK_RSA_AES_256_CBC_SHA256     = 0x0300003D,
    CONFCTRL_E_TLS12_CK_DHE_DSS_AES_128_CBC_SHA256 = 0x03000040,
    CONFCTRL_E_TLS12_CK_DHE_RSA_AES_128_CBC_SHA256 = 0x03000067,
    CONFCTRL_E_TLS12_CK_DHE_DSS_AES_256_CBC_SHA256 = 0x0300006A,
    CONFCTRL_E_TLS12_CK_DHE_RSA_AES_256_CBC_SHA256 = 0x0300006B,
    CONFCTRL_E_TLS12_CK_ADH_AES_128_CBC_SHA256     = 0x0300006C,
    CONFCTRL_E_TLS12_CK_ADH_AES_256_CBC_SHA256     = 0x0300006D,
    CONFCTRL_E_TLS12_CK_RSA_WITH_AES_128_GCM_SHA256 = 0x0300009C,
    CONFCTRL_E_TLS12_CK_RSA_WITH_AES_256_GCM_SHA384 = 0x0300009D,
    CONFCTRL_E_TLS12_CK_DHE_RSA_WITH_AES_128_GCM_SHA256  = 0x0300009E,
    CONFCTRL_E_TLS12_CK_DHE_RSA_WITH_AES_256_GCM_SHA384  = 0x0300009F,
    CONFCTRL_E_TLS12_CK_DHE_DSS_WITH_AES_128_GCM_SHA256  = 0x030000A2,
    CONFCTRL_E_TLS12_CK_DHE_DSS_WITH_AES_256_GCM_SHA384  = 0x030000A3
}CONFCTRL_E_CIPHER_TYPE;


/**
 * [en]This enum is used to describe cipher list structure
 * [cn]�����׽ṹ��
 */
typedef struct tagCONFCTRL_S_CIPHERLIST
{
    TUP_BOOL isAdd;                              /**[en]Indicate set or add, set: init or override current cipher list; add: add extra ciphers usually to default ones, ignoring the duplicates 
                                                    [cn]���û����ӷ��������ã���ȫ�����ü������б����ӣ���ԭ�л��������Ӽ����ף�����Ѵ�������Ч�����ͳ���Ϊ��Ĭ�ϵļ�����������*/
    TUP_UINT32 uiSize;                           /**[en]Indicates number of ciphers in array [cn]����ʵ�ʼ����׸���*/
    CONFCTRL_E_CIPHER_TYPE *peCipherList;        /**[en]Indicates cipher list [cn]����������*/
} CONFCTRL_S_CIPHERLIST;

/** 
 * [en]This stuct is used to describe data which is send in when creating MCU conference control handle<br>
 * [cn]����MCU��ؾ��ʱ���������
 */
typedef struct tagCONFCTRL_MCUConfInfo
{
    TUP_UINT32  udwCallID;          /**< [en]Indicates call id returned by corresponding call. [cn]��Ӧ�ĺ��з��ص�callid */
    TUP_UINT32  udwCallProtType;    /**< [en]Indicates call protocol type, value refer to CALL_E_PROTOCOL_TYPE default is 0-sip call. [cn]����Э������,ȡֵ�ο�CALL_E_PROTOCOL_TYPE��Ĭ��0-SIP���� */
    TUP_CHAR   *pucPasscode;        /**< [en]Indicates conference control password. [cn]������� */
    TUP_CHAR   *pucLocalName;       /**< [en]Indicates local site name. [cn]���ػ᳡���� */
} CONFCTRL_MCUConfInfo;

/** 
 * [en]This stuct is used to describe identify of TE attendee<br>
 * [cn]TE�����ʶ���
 */
typedef struct tagCONFCTRL_S_ATTENDEE_VC
{
    TUP_UINT8 ucMcuNum;      /**< [en]Indicates M, 0 is invalid, 1-192 is valid. [cn]M�� 0��Ч��1-192��Ч */
    TUP_UINT8 ucTerminalNum; /**< [en]Indicates T, 0 is invalid, 1-192 is valid. [cn]T�� 0��Ч��1-192��Ч */
} CONFCTRL_S_ATTENDEE_VC;

#define TE_ATTENDEE_MAX_NAME_LEN 192            /**< [en]Indicates the maximum length of attendee name
                                                     <br>[cn]����ߵ�������ֳ��� */
#define TE_ATTENDEE_MAX_NUM_LEN  128            /**< [en]Indicates the maximum lenght of attendee number
                                                     <br>[cn]����ߺ������󳤶� */

/** 
 * [en]This stuct is used to describe single attendee carried data in attendee list<br>
 * [cn]������б��е��������Я�����������.
 */
typedef struct tagTE_ATTENDEE_DATA_IN_LIST
{
    TUP_CHAR   aucName[TE_ATTENDEE_MAX_NAME_LEN + 1];        /**< [en]Indicates attendee name. [cn]�᳡�� */
    TUP_CHAR   aucNumber[TE_ATTENDEE_MAX_NUM_LEN + 1];       /**< [en]Indicates attendee number. [cn]���� */

    TUP_UINT32 udwUnJoinReason;                              /**< [en]Indicates not join conference reason id. [cn]δ���ԭ��ID */
    TUP_UINT16 uwAutoViewSeq;                                /**< [en]Indicates auto view sequence. [cn]�Զ������� */
    TUP_UINT16 uwAutoBroadSeq;                               /**< [en]Indicates auto broad sequence. [cn]�Զ��㲥��� */

    TUP_UINT8  ucAutoView;                                   /**< [en]Indicates whether choose to auto view, 1 means yes, 0 means no. [cn]�Ƿ�ѡ���Զ������ȡֵ:1Ϊ��ѡ�У�0Ϊû�б�ѡ�� */
    TUP_UINT8  ucAutoBroad;                                  /**< [en]Indicates whether choose to auto broad, 1 means yes, 0 means no. [cn]�Ƿ�ѡ���Զ��㲥��ȡֵ:1Ϊ��ѡ�У�0Ϊû�б�ѡ�� */
    TUP_UINT8  ucSiteNum;                                    /**< [en]Indicates site number. [cn]�᳡��� */
    TUP_UINT8  ucIsUsed;                                     /**< [en]Indicates whether is used, 1 means yes, 0 means no. [cn]�Ƿ�ʹ�ã�ȡֵ:1Ϊʹ�ã�0Ϊû��ʹ�� */
    TUP_UINT8  ucJoinConf;                                   /**< [en]Indicates join conference. [cn]�᳡��� */
    TUP_UINT8  ucM;                                          /**< [en]Indicates ucM. [cn]�᳡M�� */
    TUP_UINT8  ucT;                                          /**< [en]Indicates ucT. [cn]�᳡T�� */
    TUP_UINT8  ucType;                                       /**< [en]Indicates UC type, value refer to h323mmGBSiteCallTerminalType. [cn]�᳡��·���ͣ�ȡֵ�ο�h323mmGBSiteCallTerminalType */
    TUP_UINT8  ucIsPSTN;                                     /**< [en]Indicates whether is PSTN, 1 means yes, 0 means no. [cn]�Ƿ������᳡,ȡֵ:1Ϊ�ǣ�0Ϊ�� */
    TUP_UINT8  ucGetName;                                    /**< [en]Indicates whether get site name, 1 means yes, 0 means no. [cn]�Ƿ�ȡ�û᳡��,ȡֵ:1Ϊ�ǣ�0Ϊ�� */
    TUP_UINT8  ucGetNumber;                                  /**< [en]Indicates whether get site number, 1 means yes, 0 means no. [cn]�Ƿ�ȡ�û᳡����,ȡֵ:1Ϊ�ǣ�0Ϊ�� */
    TUP_UINT8  ucMute;                                       /**< [en]Indicates whether is mute, 1 means yes, 0 means no. [cn]�Ƿ񱻱���,ȡֵ:1Ϊ������0Ϊû�б����� */
    TUP_UINT8  ucSilent;                                     /**< [en]Indicates whether is silent, 1 means yes, 0 means no. [cn]�Ƿ񱻾���ȡֵ:1Ϊ������0Ϊû�о��� */
    TUP_UINT8  ucReqTalk;                                    /**< [en]Indicates whether have requested to talk, 1 means yes, 0 means no. [cn]�Ƿ����뷢��Ȩ��ȡֵ:1Ϊ�ǣ�0Ϊ�� */
    TUP_UINT8  ucTPMain;                                     /**< [en]Indicates whether is telepresence main screen, 1 means yes, 0 means no. [cn]�Ƿ�����������ȡֵ:1Ϊ�ǣ�0Ϊ�� */
    TUP_UINT8  ucScreenNum;                                  /**< [en]Indicates CT&TP screen number. [cn]CT&TP�᳡���� */
    TUP_UINT8  ucHasRefresh;                                 /**< [en]Indicates whether list has been refreshed, 1 means yes, 0 means no. [cn]�б����Ƿ�ˢ�¹���ȡֵ:1Ϊ�ǣ�0Ϊ�� */
    TUP_UINT8  ucChair;                                      /**< [en]Indicates whether is chairman site, 1 means yes, 0 means no. [cn]�Ƿ�����ϯ�᳡��ȡֵ:1Ϊ�ǣ�0Ϊ�� */
    TUP_UINT8  ucLocalMute;                                  /**< [en]Indicates whether local side initiative mute, 1 means yes, 0 means no. [cn]�����Ƿ�����������ȡֵ:1Ϊ�ǣ�0Ϊ�� */
} TE_ATTENDEE_DATA_IN_LIST;

/**
 * [en]This stuct is used to describe uc site information.
 * [cn]���Է��᳡��Ϣ
 */
typedef struct tagTE_FLOOR_ATTENDEE
{
    TUP_UINT8 ucM;          /**< [en]Indicates ucM. [cn]���Է�M */
    TUP_UINT8 ucT;          /**< [en]Indicates ucT. [cn]���Է�T */
    TUP_UINT8 ucVolumn;     /**< [en]Indicates volume. [cn]���Է����� */
} TE_FLOOR_ATTENDEE;

/**
 * [en]This stuct is used to describe uc site info list.
 * [cn]���Է��᳡��Ϣ�б�
 */
typedef struct tagTE_FLOOR_ATTENDEE_LIST
{
    TUP_UINT8          ucCnt;                 /**< [en]Indicates uc count. [cn]���Է����� */
    TE_FLOOR_ATTENDEE *pFloorSiteList;        /**< [en]Indicates uc site list. [cn]���Է��᳡�б� */
} TE_FLOOR_ATTENDEE_LIST;

/* �ն˲��ػ�����Ϣ */
#define TE_MAX_SITENUM_LEN         (128)                       /**< [en]Indicates the maximum length of site number
                                                                    <br>[cn]���᳡����ĳ���   */
#define TE_MAX_MULPIC_NUM          (16)                        /**< [en]Indicates the maximum multi-picture number
                                                                    <br>[cn]���໭�����       */

/**
 * [en]This stuct is used to describe site MT.
 * [cn]�᳡MT��
 */
typedef struct tagTE_SITE_MT
{
    TUP_UINT8 ucM;          /**< [en]Indicates ucM. [cn]�᳡M�� */
    TUP_UINT8 ucT;          /**< [en]Indicates ucT. [cn]�᳡T�� */
} TE_SITE_MT;
/**
 * [en]This stuct is used to describe site info.
 * [cn]�᳡��Ϣ
 */
typedef struct tagTE_CONF_CTRL_INFO
{
    TUP_UINT32           udwConfLeftTime;                                       /**< [en]Indicates conference left time. [cn]����ʣ��ʱ�� */
    TUP_UINT32           udwConfDelayTime;                                      /**< [en]Indicates conference delay time. [cn]�����ӳ�ʱ�� */
    TUP_UINT16           uwAutoViewIntvl;                                       /**< [en]Indicates auto view interval. [cn]�Զ����ʱ���� */
    TUP_UINT16           uwAutoBrdIntvl;                                        /**< [en]Indicates auto broadcast interval. [cn]�Զ��㲥ʱ���� */
    TUP_UINT16           uwJoinCount;                                           /**< [en]Indicates all join site count. [cn]�������᳡��Ŀ */
    TUP_UINT16           uwUnJoinCount;                                         /**< [en]Indicates all unjoin site count. [cn]����δ�����Ŀ */

    TUP_UINT8            ucConfCtrlFailReason;                                  /**< [en]Indicates recently conference control fail reason. [cn]���һ�λ��ʧ��ԭ�� */
    TUP_UINT8            ucConfState;                                           /**< [en]Indicates conference state. [cn]���״̬(CONF_STATE)��ȡֵ�ο�CONFCTRL_E_CONF_STATE */
    TUP_UINT8            ucAutoViewState;                                       /**< [en]Indicates auto view state, 0:close, 1:open. [cn]�Զ����״̬��ȡֵ:0��1�� */
    TUP_UINT8            ucIsInMiniConf;                                        /**< [en]Indicates whether is in mini conference. [cn]��ǰ����MINIMCU������ */
    TUP_UINT8            ucMeIsChair;                                           /**< [en]Indicates whether is chairman, 1 means yes, 0 means no. [cn]�Լ��Ƿ��Ϊ����ϯ,ȡֵ:1Ϊ�ǣ�0Ϊ�� */
    TUP_UINT8            ucMeBrdcasted;                                         /**< [en]Indicates whether is broadcast, 1 means yes, 0 means no. [cn]�Լ��Ƿ񱻹㲥,ȡֵ:1Ϊ�ǣ�0Ϊ�� */
    TUP_UINT8            ucMeIsSiteCall;                                        /**< [en]Indicates whether local is site call, 1 means yes, 0 means no. [cn]�����Ƿ������к�����,ȡֵ:1Ϊ�ǣ�0Ϊ�� */
    TUP_UINT8            ucHasChair;                                            /**< [en]Indicates whether this conference has chair, 1 means yes, 0 means no. [cn]�������Ƿ������ϯ,ȡֵ:1Ϊ�ǣ�0Ϊ�� */
    TUP_UINT8            ucMulPicMode;                                          /**< [en]Indicates multi-picture mode, value refer to MC_E_MPICMODE. [cn]�໭��ģʽ��ȡֵ�ο�MC_E_MPICMODE */
    TUP_UINT8            ucMulPicCount;                                         /**< [en]Indicates multi-picture count. [cn]�໭������ */
    TUP_UINT8            ucMulSubPicCount;                                      /**< [en]Indicates sub picture count. [cn]�ӻ�����Ŀ */
    TUP_UINT8            ucMulPicSytle;                                         /**< [en]Indicates multi-picture style. [cn]�໭����ʽ */
    TUP_UINT8            ucIsReqAutoBrd;                                        /**< [en]Indicates whether is requested auto broadcast, 1 means yes, 0 means no. [cn]�Ƿ�����������Զ��㲥,ȡֵ:1Ϊ�ǣ�0Ϊ�� */
    TUP_UINT8            ucMultiPicGrpCnt;                                      /**< [en]Indicates multi-picture group count. [cn]����໭������ */
    TUP_UINT8            ucTeleConfState;                                       /**< [en]Indicates telepresence conference control state. [cn]���������ͣ�ֻ��¼�㲥/����/�������� */
    TUP_UINT8            ucPermitChair;                                         /**< [en]Indicates whether permit chairman in conference, 0:forbid, 1:allow [cn]�������Ƿ��ֹ��������ϯ��ȡֵ:0��ֹ��1���� */
    TUP_UINT8            ucAuxLockState;                                        /**< [en]Indicates current aux data lock state. [cn]��ǰ��������״̬(UI_AUX_LOCK_STATE) */
    TUP_UINT8            ucVoiceSwitch;                                         /**< [en]Indicates voice control switch set at local. [cn]�������õ����ؿ���״̬��ȡֵ:0 �� 1�� */
    TUP_UINT8            ucVoiceSwitchType;                                     /**< [en]Indicates local voice control switch type, 0:normal, 1:press screen. [cn]�������õ����ؿ������ͣ�ȡֵ:0 ��ͨ 1���� */

    TUP_UINT8            ucMeFreeChair;                                         /**< [en]Indicates whether local initiative free chair, 1 means yes, 0 means no. [cn]�Ƿ񱾶������ͷ���ϯ,ȡֵ:1Ϊ�ǣ�0Ϊ�� */
    TUP_UINT8            ucMeReqedChair;                                        /**< [en]Indicates whether local request to be chairman, 1 means yes, 0 means no. [cn]�����Ƿ���������ϯ,ȡֵ:1Ϊ�ǣ�0Ϊ�� */
    TUP_UINT8            ucLastVoiceSwitch;                                     /**< [en]Indicates last voice switch state. [cn]��һ�ε������л�״̬ */
    TUP_UINT8            ucIsAutoViewAll;                                       /**< [en]Indicates whether is auto view all, 1 means yes, 0 means no. [cn]�Ƿ�ѭ���ۿ�ȫ���᳡,ȡֵ:1Ϊ�ǣ�0Ϊ�� */
    TUP_UINT8            ucReqSetMPicMode;                                      /**< [en]Indicates request set multi-picture mode. [cn]��������Ķ໭��ģʽ */
    TUP_UINT8            ucIsBackUp;                                            /**< [en]Indicates whether MCU define backup conf, 1 means yes, 0 means no. [cn]�Ƿ�MCU�����������᳡,ȡֵ:1Ϊ�ǣ�0Ϊ�� */
    TUP_UINT8            ucIsReportMode;                                        /**< [en]Indicates whether is report mode. [cn]�Ƿ�㱨ģʽ,ȡֵ:1Ϊ�ǣ�0Ϊ�� */
    TUP_UINT8            ucIsCanReportMode;                                     /**< [en]Indicates whether support report mode, 1 means yes, 0 means no. [cn]�Ƿ�֧�ֻ㱨ģʽ,ȡֵ:1Ϊ�ǣ�0Ϊ�� */

    TUP_CHAR             aszVideoConfCode[TE_MAX_SITENUM_LEN + 1];              /**< [en]Indicates video conference code. [cn]��Ƶ�������� */
    TUP_CHAR             aszAudioConfCode[TE_MAX_SITENUM_LEN + 1];              /**< [en]Indicates audio conference code. [cn]��Ƶ�������� */
    TUP_CHAR             aszISDNAccessCode[TE_MAX_SITENUM_LEN + 1];             /**< [en]Indicates ISDN access code. [cn]ISDN�м̺��� */
    TUP_CHAR             aszISDNConfCode[TE_MAX_SITENUM_LEN + 1];               /**< [en]Indicates ISDN conference code. [cn]ISDN����� */
    TUP_CHAR             aszIdentifyPwd[TE_MAX_SITENUM_LEN + 1];                /**< [en]Indicates identify password(MCU->chairman). [cn]��Ȩ���������(MCU->��ϯ) */
    TUP_CHAR             aszConfCtrlPwd[TE_MAX_SITENUM_LEN + 1];                /**< [en]Indicates conference control password(send by MCU, exist even if no chairman). [cn]�������(MCU�·�, ����ϯҲ��) */

    TE_SITE_MT           LocaMT;                                                /**< [en]Indicates local MT. [cn]�ն������MT�� */
    TE_SITE_MT           SeeingSite;                                            /**< [en]Indicates site of local is seeing. [cn]���ն����ڹۿ��Ļ᳡ */
    TE_SITE_MT           ChairMT;                                               /**< [en]Indicates chairman site MT. [cn]��ϯ�᳡MT�� */
    TE_SITE_MT           BrdSite;                                               /**< [en]Indicates is broadcast MT. [cn]���ڱ��㲥�Ļ᳡MT�� */
    TE_SITE_MT           RollCallSite;                                          /**< [en]Indicates roll call site. [cn]�����᳡ */
    TE_SITE_MT           ReqRollcallSite;                                       /**< [en]Indicates request roll call site. [cn]��������᳡ */
    TE_SITE_MT           AuxLockSite;                                           /**< [en]Indicates lock single site MT. [cn]���������᳡��MT�� */
    TE_SITE_MT           MulPic[TE_MAX_MULPIC_NUM];                             /**< [en]Indicates multi-picture MT. [cn]�ӻ����MT�� */
    TUP_UINT8            aucTPScreenID[TE_MAX_MULPIC_NUM];                      /**< [en]Indicates sub picture screen id. [cn]�ӻ�������� */
    TE_SITE_MT           ReqFloorSite;                                          /**< [en]Indicates request speak site. [cn]MCUת���������Ի᳡ */
    TE_SITE_MT           ReqMulPic[TE_MAX_MULPIC_NUM];                          /**< [en]Indicates multi-picture MT. [cn]�ӻ����MT�� */
    TE_SITE_MT           ReqHangupSite;                                         /**< [en]Indicates request hangup site. [cn]��������Ҷϻ᳡ */
    TE_SITE_MT           ReqDelSite;                                            /**< [en]Indicates request delete site. [cn]��������ɾ���᳡ */
    TE_SITE_MT           ReqBrdSite;                                            /**< [en]Indicates request broadcast site(can be sure after demand is responded). [cn]��������㲥�Ļ᳡(��Ҫ�õ���Ӧ�����ȷ��) */

    //UI_S_MULTIPIC_GROUP_INFO stViewedMultiGrpPic;                               /* ���ۿ��Ķ���໭����Ϣ                           */
    //UI_S_MULTIPIC_GROUP_INFO astMultiPicGrpInfo[UI_MAX_MULPIC_GROUP_SUM];       /* ����໭��                                       */

    TUP_UINT8            ucDirectBroadcast;                                     /**< [en]Indicates direct broadcast. 1:start; 0:stop [cn]¼��ֱ�����״̬,ȡֵ:1Ϊ��ʼֱ����0Ϊֱֹͣ�� -- ���� */
    TUP_UINT8            ucRecordBroadcast;                                     /**< [en]Indicates record broadcast. 1:start; 0:stop[cn]¼��ֱ�����״̬,ȡֵ:1Ϊ��ʼ¼����0Ϊֹͣ¼�� */
    TUP_UINT8            ucIsRecServerOnline;                                   /**< [en]Indicates whether is record server online. 0:online; 1:offline [cn]¼ �� �������Ƿ����ߣ�ȡֵ:0:����,1:���� */
    TUP_UINT32           udwRecErrorNum;                                        /**< [en]Indicates record error number. [cn]¼ �� ������������ */
    TUP_UINT8            ucIsCanRecordBroadcast;                                /**< [en]Indicates whether can record broadcast. 1:support; 0:unsupport [cn]�Ƿ�֧��¼�ƣ�ȡֵ:1֧��,0��֧�� */
    TUP_UINT8            ucIsCanDirectBroadcast;                                /**< [en]Indicates whether can direct broadcast. 1:support; 0:unsupport [cn]�Ƿ�֧�ֲ��ţ�ȡֵ:1֧��,0��֧�� */

    //UI_MULTI_PIC_GROUP_OPER_RSP_INFO astMultiPicGrpOperRspInfo;                 /* ���һ�εĶ���໭�������Ӧ         */

    //UI_S_TP_MULTIPIC_IND astViewInfo[UI_MAX_TPSCREEN_NUM];                      /* �������У������ۿ�Դ��Ϣ           */
    TUP_UINT8            ucConfCtrlVersion;                                     /**< [en]Indicates conference control version, it's UINT8 type defined by protocol. [cn]��ذ汾�ţ�Э�鶨���������UINT8 */

    //MC_S_SL_CTRL_INFO stSLCtrlInfo;                                             /*  miniMCU��˽��������Ϣ */

    TE_FLOOR_ATTENDEE_LIST stFloorSiteList;                                     /**< [en]Indicates floor site list. [cn]���Է��᳡��Ϣ�б� */
} TE_CONF_CTRL_INFO;

/**
 * [en]This stuct is used to describe conference control service init param.
 * [cn]���ҵ���ʼ������
 */
typedef struct tagCONFCTRL_S_INIT_PARAM
{
    TUP_BOOL bWaiMsgpThread;         /**< [en]Indicates whether need wait message queue thread. [cn]�Ƿ���Ҫ�ȴ���Ϣ�����߳�*/
    TUP_BOOL bBatchUpdate;           /**< [en]Indicates whether to enable batch update conference parameters. [cn]�Ƿ������������»������ */
    TUP_BOOL bConnectCall;           /**< [en]Indicates whether to bind audio and video call components. [cn]�Ƿ������Ƶ������� */
    TUP_BOOL bSaveParticipantList;   /**< [en]Indicates whether need to save attendee list. [cn]�Ƿ���Ҫ����������б�*/
    TUP_UINT32 ulParaticipantMaxNum; /**< [en]Indicates a maximum number of participants reported, 0 represent not set, use the default value of 400. [cn]һ���ϱ������������, 0��ʾ������,ʹ��Ĭ��ֵ400*/
    TUP_UINT32 ulConfListMaxNum;     /**< [en]Indicates a maximum number of conference list reported, 0 represent not set, use the default value of 100. [cn]һ���ϱ������б�������, 0��ʾ������,ʹ��Ĭ��ֵ100*/
}CONFCTRL_S_INIT_PARAM;

/** 
 * [en]This struct is used to describe the http proxy information.
 * [cn]������Ϣ
 */
typedef struct tagCONFCTRL_S_PROXY_PARAM
{  
    TUP_CHAR uri[CONFCTRL_D_MAX_URL_LEN];             /**< [en]Indicates the server address. [cn]���������url*/
    TUP_UINT32 port;                                  /**< [en]Indicates the server port. [cn]����������˿�*/
    TUP_CHAR user_name[CONFCTRL_D_MAX_NAME_LEN];    /**< [en]Indicates the account user name. [cn]�����������Ȩ�û���*/
    TUP_CHAR password[CONFCTRL_D_MAX_PASSWORD_LEN]; /**< [en]Indicates the account password. [cn]�����������Ȩ����*/
} CONFCTRL_S_PROXY_PARAM;


/**
 * [en]This stuct is used to describe server address.
 * [cn]��������ַ
 */
typedef struct tagCC_SERVER_ADDR_S
{
    TUP_BOOL bIsDomain;                                       /**< [en]Indicates whether is domain. [cn]��־�Ƿ������� */
    TUP_UINT8 acDomainAdd[CONFCTRL_DOMAIN_ADDR_LENGTH + 1];   /**< [en]Indicates domain address. [cn]������ַ*/        
    CC_IP_ADDR_S stIPAddr;                                    /**< [en]Indicates ip address. [cn]IP��ַ*/ 
    TUP_UINT uiPort;                                          /**< [en]Indicates ui port. [cn]�˿ں� */
} CC_SERVER_ADDR_S;

/**
 * [en]This stuct is used to describe server configuration.
 * [cn]����������
 */
typedef struct tagCONFCTRL_SERVER_CFG_S
{
     TUP_CHAR  acServerAddr[CONFCTRL_D_MAX_URL_LEN];        /**< [en]Indicates server address, ip address string or domain address. [cn]��������ַ��IP��ַ�ִ���������ַ */
     TUP_UINT32 ulServerPort;                               /**< [en]Indicates server port, now have not parser port. [cn]�������˿ڣ�����δ�����˿ڣ���ʱ���� */
}CONFCTRL_SERVER_CFG_S;

/** 
 * [en]This struct is used to describe conference room info<br>
 * [cn]�᳡��Ϣ
 */
typedef struct tagCONFCTRL_CONFROOM_INFO_S
{
    TUP_CHAR acConfName[CONFCTRL_CONF_NAME_LENGTH + 1];                /**< [en]Indicates conference room name. [cn]�᳡��*/
    TUP_CHAR  acConfAccessNumber[CONFCTRL_D_MAX_ACCESS_NUM_LEN + 1];      /**< [en]Indicates conference access number. [cn] �᳡������*/
} CONFCTRL_CONFROOM_INFO_S;


/** 
 * [en]This struct is used to describe conference hall info<br>
 * [cn]���������Ϣ
 */
typedef struct tagCONFCTRL_HALL_INFO_S
{
    TUP_BOOL bIsLastPack;                      /**< [en]Indicates whether is the last pack. [cn]�Ƿ����һ�� */
    TUP_UINT16     ucConfNum;                  /**< [en]Indicates uc conference room number. [cn]�᳡��Ŀ*/
    CONFCTRL_CONFROOM_INFO_S  *pstConfRoom;    /**< [en]Indicates conference info. [cn]�᳡��Ϣ*/
} CONFCTRL_HALL_INFO_S;


/**
 * [en]This struct is used to describe conference lock result info.
 * [cn]�����������֪ͨ
 */
typedef struct tagCONFCTRL_CONF_LOCK_INFO_S
{
    TUP_UINT32  ulOperateType;        /**< [en]Indicates operate type, 0:lock, 1:unlock. [cn]��������,ȡֵ:0����,1����*/
    TUP_UINT32  ulResult;             /**< [en]Indicates operate result, 0:success, 1:fail. [cn]�������ȡֵ:0�ɹ�,1ʧ��*/
    TUP_UINT32  ulReason;             /**< [en]Indicates fail reason. [cn]ʧ��ԭ�� */
} CONFCTRL_CONF_LOCK_INFO_S;


/** 
 * [en]This struct is used to describe conference param<br>
 * [cn]��ȡ�����������
 */
typedef struct tagCONFCTRL_S_GET_DATACONF_PARAMS
{
    TUP_CHAR conf_url[CONFCTRL_D_MAX_URL_LEN];        /**< [en]Indicates SMC (before login STG parameters to get back to the SMC address assembly, https://10.184.93.38:8083), MEDIAX Networking (conference parameters get back URL). [cn]SMC(����ǰstg������ȡ���ص�smc��ַƴװ��https://10.184.93.38:8083)��mediax����(����С������ȡ����url)*/
    CONFCTRL_SERVER_CFG_S mcu_addr;                   /**< [en]Indicates MCU address (extended parameter pending). [cn]MCU��ַ����չ���������� */ 
    TUP_CHAR random[CONFCTRL_D_MAX_TOKEN_LEN];        /**< [en]Indicates random code. [cn]����� */ 
    TUP_CHAR passcode[CONFCTRL_D_MAX_ACCESS_NUM_LEN]; /**< [en]Indicates password. [cn]�����˻���ͨ����߰�ȫ����� */
    TUP_CHAR sip_num[CONFCTRL_D_MAX_NUMBER_LEN];      /**< [en]Indicates sip number. [cn]sip���� */ 
    TUP_CHAR conf_id[CONFCTRL_D_MAX_CONF_ID_LEN];     /**< [en]Indicates conference id. [cn]����Id */ 
    TUP_CHAR password[CONFCTRL_D_MAX_PASSWORD_LEN];   /**< [en]Indicates conference password. [cn]�������� */ 
    TUP_UINT32 type;                                /**< [en]Indicates authentication type, default is 0, (no type field) random field authentication; 1, passcode certification; 2, conf_id+password certification; 3, conf_id+password+random authentication. [cn]��֤���ͣ�Ĭ��Ϊ0,(��type�ֶ�)random�ֶ���֤��1��passcode ��֤��2��conf_id+password��֤;3,conf_id+password+random ��֤*/   
} CONFCTRL_S_GET_DATACONF_PARAMS;

/**
 * [en]This struct is used to describe data conference params
 * [cn]���ݻ�������
 **/
typedef struct tagCONFCTRL_S_DATACONF_PARAMS
{
    TUP_INT8    conf_id[CONFCTRL_D_MAX_CONF_ID_LEN];       /**< [en]Indicates when creating a meeting, add the create request ID in the call-id field to differentiate multiple sessions created simultaneously. [cn]�ڴ�������ʱ����call-id�ֶ���Ӵ�������ID����������ͬʱ�����Ķ������ */
    TUP_INT8    host_key[CONFCTRL_D_MAX_HOSTKEY_LEN];      /**< [en]Indicates moderator password: host membership must be set, the other is not needed. [cn]���������룺���������������ã������������Ҫ*/
    TUP_INT8    crypt_key[CONFCTRL_D_MAX_AUTHKEY_LEN];     /**< [en]Indicates conference authentication password. [cn]�����Ȩ����*/
    TUP_INT8    cm_address[CONFCTRL_D_MAX_CMADDR_LEN];     /**< [en]Indicates sip gateway address and port. [cn]sip���ص�ַ���˿�*/
    TUP_INT8    site_url[CONFCTRL_D_MAX_URL_LEN];          /**< [en]Indicates site url. [cn]������վ��ַ*/
    TUP_INT8    site_id[CONFCTRL_D_MAX_CONF_ID_LEN];       /**< [en]Indicates site id. [cn]վ��ID��*/
    TUP_INT8    server_ip[CONFCTRL_D_MAX_SERVER_ADDR_LEN]; /**< [en]Indicates server ip, single ip or url. [cn]�����������ַ��������ַ��URL*/
    TUP_INT8    user_id[CONFCTRL_D_MAX_USER_ID_LEN];       /**< [en]Indicates user id. [cn]�û�id */
    TUP_INT8    user_name[CONFCTRL_D_MAX_NAME_LEN];        /**< [en]Indicates user name. [cn]�û����� */
    TUP_INT8    user_uri[CONFCTRL_D_MAX_URL_LEN];          /**< [en]Indicates user uri. [cn]�û�uri */
    TUP_INT8    conf_name[CONFCTRL_D_MAX_NAME_LEN];        /**< [en]Indicates conference name. [cn]�������� */
    TUP_INT8    access_code[CONFCTRL_D_MAX_ACCESS_NUM_LEN];/**< [en]Indicates conference access code. [cn]��������� */
    TUP_INT8    part_secure_conf_num[CONFCTRL_D_MAX_SECURE_CONF_NUM_LEN]; /**< [en]participant secure conf num. [cn]����߰�ȫ����� */
    TUP_INT8    stg_server_address[CONFCTRL_D_MAX_URL_LEN];/**< [en]participant stg server address. [cn]stg��������ַ */
    TUP_INT8    sbc_server_address[CONFCTRL_D_MAX_URL_LEN];/**< [en]participant sbc server address. [cn]sbc��������ַ */
    TUP_UINT32  user_role;                                 /**< [en]participant user role. 0��normal 1:chairman[cn]sbc�����ɫ 0 ��ͨ����� 1 ��ϯ */
    TUP_UINT32  M;                                         /**< [en]participant M number. [cn]M �� */
    TUP_UINT32  T;                                         /**< [en]participant T number. [cn]T �� */
    TUP_INT8    pin_code[CONFCTRL_D_MAX_NUMBER_LEN];       /**< [en]participant pin code number. [cn]pin code ��*/
    TUP_INT8    participant_id[CONFCTRL_D_MAX_USER_ID_LEN];/**< [en]participant participant id. [cn]����� id*/
}CONFCTRL_S_DATACONF_PARAMS;

/** 
 * [en]This struct is used to describe acquired conference resource<br>
 * [cn]��ȡ������Դ
 */
typedef struct tagCONFCTRL_S_GET_CONF_RESOURCE
{
    TUP_CHAR conf_url[CONFCTRL_D_MAX_URL_LEN];                    /**< [en]Indicates SMC (before login STG parameters to get back to the SMC address assembly, https://10.184.93.38:8083), MEDIAX Networking (conference parameters get back URL). [cn]SMC(����ǰstg������ȡ���ص�smc��ַƴװ��https://10.184.93.38:8083)��mediax����(����С������ȡ����url)*/
    TUP_CHAR random[CONFCTRL_D_MAX_TOKEN_LEN];                    /**< [en]Indicates random code, random value in conf params response. [cn]����� ��������response ��randomֵ */ 
    TUP_CHAR attend_conf_reqbody[CONFCTRL_MAX_HTTPBODY_LENGTH];   /**< [en]Indicates apply for conference information body, UI package XML format body body. [cn]����μӻ�����Ϣbody��UI��װxml��ʽ��body��*/ 
} CONFCTRL_S_GET_CONF_RESOURCE;


/**
 * @ingroup 
 * @brief [en]This interface is used to notify message callback.
 *        <br>[cn]֪ͨ��Ϣ�ص�
 * 
 * @param [in] TUP_UINT32 msgid    <b>:</b><br>[en]Indicates callback message id.
 *                                         <br>[cn]�ص���ϢID��
 * @param [in] TUP_UINT32 param1   <b>:</b><br>[en]Indicates param 1.
 *                                         <br>[cn]����1
 * @param [in] TUP_UINT32 param2   <b>:</b><br>[en]Indicates param 2.
 *                                         <br>[cn]����2
 * @param [in] TUP_VOID *data      <b>:</b><br>[en]Indicates message data.
 *                                         <br>[cn]��Ϣ����
 * @retval TUP_VOID
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see NA
 **/
typedef TUP_VOID (*CONFCTRL_FN_CALLBACK_PTR)(TUP_UINT32 msgid, TUP_UINT32 param1, TUP_UINT32 param2, TUP_VOID *data);

 /**
 * @ingroup 
 * @brief [en]This interface is used to log print callback.
 *        <br>[cn]��־��ӡ�ص�
 * 
 * @param [in] const TUP_INT8 *app_name    <b>:</b><br>[en]Indicates log local module name.
 *                                                 <br>[cn]��־����ģ����
 * @param [in] TUP_UINT32 level            <b>:</b><br>[en]Indicates log level, 0-Error��1-Warning��2-Info��3-Debug.
 *                                                 <br>[cn]��־����ͬE_LOG_LEVEL��0-Error��1-Warning��2-Info��3-Debug.
 * @param [in] const TUP_INT8 *function    <b>:</b><br>[en]Indicates log printed function name.
 *                                                 <br>[cn]��־��ӡ����������
 * @param [in] const TUP_INT8 *filename    <b>:</b><br>[en]Indicates log print file name.
 *                                                 <br>[cn]��־��ӡ�����ļ���
 * @param [in] TUP_UINT32 line_num         <b>:</b><br>[en]Indicates log print line number.
 *                                                 <br>[cn]��־��ӡ�����к�
 * @param [in] const TUP_INT8 *format      <b>:</b><br>[en]Indicates format string.
 *                                                 <br>[cn]��ʽ�ַ���
 * @retval TUP_VOID
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see NA
 **/
typedef TUP_VOID (*CONFCTRL_FN_LOG_CALLBACK_PTR)(const TUP_INT8 *app_name, TUP_UINT32 level,
                                                 const TUP_INT8 *function, const TUP_INT8 *filename, TUP_UINT32 line_num, const TUP_INT8 *format, ...);




/** 
 * [en]This enum is used to describe reserve conference type<br>
 * [cn]ԤԼ��������
 */
typedef enum tagCONFCTRL_E_CONF_TYPE
{
    CONFCTRL_E_CONF_TYPE_NORMAL = 0,           /**< [en]Indicates normal conference
                                                    <br>[cn]��ͨ���� */
    CONFCTRL_E_CONF_TYPE_CYCLE = 1,            /**< [en]Indicates cycle conference
                                                    <br>[cn]���ڻ��� */
    CONFCTRL_E_CONF_TYPE_AS_LONG_CONF = 63     /**< [en]Indicates as long conference
                                                    <br>[cn]��ȺAS���ڻ��� */
} CONFCTRL_E_CONF_TYPE;

/** 
 * [en]This enum is used to describe conference state<br>
 * [cn]����״̬
 */
typedef enum tagCONFCTRL_E_CONF_STATE
{
    CONFCTRL_E_CONF_STATE_SCHEDULE = 0,    /**< [en]Indicates schedule state
                                                <br>[cn]Ԥ��״̬ */
    CONFCTRL_E_CONF_STATE_CREATING,        /**< [en]Indicates be creating state
                                                <br>[cn]���ڴ���״̬ */
    CONFCTRL_E_CONF_STATE_GOING,           /**< [en]Indicates conf going state
                                                <br>[cn]�����Ѿ���ʼ */
    CONFCTRL_E_CONF_STATE_DESTROYED        /**< [en]Indicates conf is destroyed
                                                <br>[cn]�����Ѿ��ر� */
} CONFCTRL_E_CONF_STATE;

/** 
 * [en]This enum is used to describe encrypt mode<br>
 * [cn]��������
 */
typedef enum tagCONFCTRL_E_ENCRYPT_MODE
{
    CONFCTRL_E_ENCRYPT_MODE_AUTO = 0,      /**< [en]Indicates auto encrypt mode
                                                <br>[cn]����Ӧ���� */
    CONFCTRL_E_ENCRYPT_MODE_MUST,          /**< [en]Indicates must encrypt mode
                                                <br>[cn]ǿ�Ƽ��� */
    CONFCTRL_E_ENCRYPT_MODE_NONE           /**< [en]Indicates none encrypt
                                                <br>[cn]������ */
} CONFCTRL_E_ENCRYPT_MODE;

/** 
 * [en]This enum is used to describe reminder type<br>
 * [cn]���ѷ�ʽ
 */
typedef enum tagCONFCTRL_E_REMINDER_TYPE
{
    CONFCTRL_E_REMINDER_TYPE_NONE = 0,    /**< [en]Indicates none reminder
                                               <br>[cn]������ */
    CONFCTRL_E_REMINDER_TYPE_EMAIL,       /**< [en]Indicates email
                                               <br>[cn]email */
    CONFCTRL_E_REMINDER_TYPE_SMS,         /**< [en]Indicates sms
                                               <br>[cn]sms */
    CONFCTRL_E_REMINDER_TYPE_EMAIL_SMS    /**< [en]Indicates email + sms
                                               <br>[cn]email + sms */
} CONFCTRL_E_REMINDER_TYPE;

/** 
 * [en]This enum is used to describe language<br>
 * [cn]����
 */
typedef enum tagCONFCTRL_E_LANGUAGE
{
    CONFCTRL_E_LANGUAGE_ZH_CN = 0,       /**< [en]Indicates ZH_CN
                                              <br>[cn]�������� */
    CONFCTRL_E_LANGUAGE_EN_US            /**< [en]Indicates EN_US
                                              <br>[cn]����Ӣ�� */
} CONFCTRL_E_LANGUAGE;

/** 
 * [en]This enum is used to describe user type<br>
 * [cn]�û�����
 */
typedef enum tagCONFCTRL_E_USER_TYPE
{
    CONFCTRL_E_USER_TYPE_WEB = 0,       /**< [en]Indicates web type
                                             <br>[cn]WEB��ʽ */
    CONFCTRL_E_USER_TYPE_MOBILE,        /**< [en]Indicates mobile terminal
                                             <br>[cn]�ƶ����ն� */
    CONFCTRL_E_USER_TYPE_PC             /**< [en]Indicates pc terminal
                                             <br>[cn]PC���ն� */
} CONFCTRL_E_USER_TYPE;

/** 
 * [en]This enum is used to describe cycle conference time type<br>
 * [cn]���ڻ���ʱ������
 */
typedef enum tagCONFCTRL_E_CYCLE_TYPE
{
    CONFCTRL_E_CYCLE_TYPE_DAY = 0,     /**< [en]Indicates every day
                                            <br>[cn]ÿ�� */
    CONFCTRL_E_CYCLE_TYPE_WEEK,        /**< [en]Indicates every week
                                            <br>[cn]ÿ�� */
    CONFCTRL_E_CYCLE_TYPE_MONTH,       /**< [en]Indicates every month
                                            <br>[cn]ÿ�� */
    CONFCTRL_E_CYCLE_TYPE_YEAR         /**< [en]Indicates every year
                                            <br>[cn]ÿ�� */
} CONFCTRL_E_CYCLE_TYPE;


/** 
 * [en]This enum is used to describe aux data media<br>
 * [cn]����ý����Ϣ
 */
typedef enum tagCONFCTRL_E_ASSIST_MEDIA_TYPE
{
    CONFCTRL_E_ASSIST_MEDIA_TYPE_NONE = 0,     /**< [en]Indicates none
                                                    <br>[cn]�� */
    CONFCTRL_E_ASSIST_MEDIA_TYPE_FILM,         /**< [en]Indicates film picture
                                                    <br>[cn]��̬ͼƬ */
    CONFCTRL_E_ASSIST_MEDIA_TYPE_LIVE          /**< [en]Indicates live picture
                                                    <br>[cn]��̬ͼƬ */
} CONFCTRL_E_ASSIST_MEDIA_TYPE;

/** 
 * [en]This enum is used to describe video codec<br>
 * [cn]��Ƶ�����ʽ
 */
typedef enum tagCONFCTRL_E_VIDEO_CODEC
{
    CONFCTRL_E_VIDEO_CODEC_H261 = 0,      /**< [en]Indicates H261
                                               <br>[cn]H261 */
    CONFCTRL_E_VIDEO_CODEC_H263,          /**< [en]Indicates H263
                                               <br>[cn]H263 */
    CONFCTRL_E_VIDEO_CODEC_H264,          /**< [en]Indicates H264
                                               <br>[cn]H264 */
    CONFCTRL_E_VIDEO_CODEC_MPEG4          /**< [en]Indicates MPEG4
                                               <br>[cn]MPEG4 */
} CONFCTRL_E_VIDEO_CODEC;

/** 
 * [en]This enum is used to describe bandwidth<br>
 * [cn]����
 */
typedef enum tagCONFCTRL_E_BAND_WIDTH
{
    CONFCTRL_E_BAND_WIDTH_128K = 0,       /**< [en]Indicates 128K
                                               <br>[cn]128K */
    CONFCTRL_E_BAND_WIDTH_384K,           /**< [en]Indicates 384K
                                               <br>[cn]384K */
    CONFCTRL_E_BAND_WIDTH_512K,           /**< [en]Indicates 512K
                                               <br>[cn]512K */
    CONFCTRL_E_BAND_WIDTH_768K,           /**< [en]Indicates 768K
                                               <br>[cn]768K */
    CONFCTRL_E_BAND_WIDTH_1M,             /**< [en]Indicates 1M
                                               <br>[cn]1M */
    CONFCTRL_E_BAND_WIDTH_1536K,          /**< [en]Indicates 1536K
                                               <br>[cn]1536K */
    CONFCTRL_E_BAND_WIDTH_2M,             /**< [en]Indicates 2M
                                               <br>[cn]2M */
    CONFCTRL_E_BAND_WIDTH_4M,             /**< [en]Indicates 4M
                                               <br>[cn]4M */
    CONFCTRL_E_BAND_WIDTH_6M,             /**< [en]Indicates 6M
                                               <br>[cn]6M */
    CONFCTRL_E_BAND_WIDTH_8M              /**< [en]Indicates 8M
                                               <br>[cn]8M */
} CONFCTRL_E_BAND_WIDTH;

/** 
 * [en]This enum is used to describe media size<br>
 * [cn]����ֱ���
 */
typedef enum tagCONFCTRL_E_MEDIA_SIZE
{
    CONFCTRL_E_MEDIA_SIZE_QCIF = 0,       /**< [en]Indicates QCIF
                                               <br>[cn]QCIF */
    CONFCTRL_E_MEDIA_SIZE_CIF,            /**< [en]Indicates CIF
                                               <br>[cn]CIF */
    CONFCTRL_E_MEDIA_SIZE_4CIF,           /**< [en]Indicates 4CIF
                                               <br>[cn]4CIF */
    CONFCTRL_E_MEDIA_SIZE_720P,           /**< [en]Indicates 720P
                                               <br>[cn]720P */
    CONFCTRL_E_MEDIA_SIZE_1080P           /**< [en]Indicates 1080P
                                               <br>[cn]1080P */
} CONFCTRL_E_MEDIA_SIZE;

/** 
 * [en]This enum is used to describe conference role<br>
 * [cn]�����Ա��ɫ
 */
typedef enum tagCONFCTRL_E_CONF_ROLE
{
    CONFCTRL_E_CONF_ROLE_ATTENDEE = 0,    /**< [en]Indicates attendee
                                               <br>[cn]��ͨ����� */
    CONFCTRL_E_CONF_ROLE_CHAIRMAN         /**< [en]Indicates chairman
                                               <br>[cn]��ϯ */
} CONFCTRL_E_CONF_ROLE;


/** 
 * [en]This enum is used to describe attendee type<br>
 * [cn]��Ա����
 */
typedef enum tagCONFCTRL_E_ATTENDEE_TYPE
{
    CONFCTRL_E_ATTENDEE_TYPE_NORMAL = 0,      /**< [en]Indicates normal: Voice, HD, SD participants address
                                                   <br>[cn]���������塢��������ߵ�ַ */
    CONFCTRL_E_ATTENDEE_TYPE_TELEPRESENCE,    /**< [en]Indicates telepresence participants address type, single screen, three screen telepresence all belong to this 
                                                   <br>[cn]��������ߵ�ַ���ͣ���������������������� */
    CONFCTRL_E_ATTENDEE_TYPE_SINGLE_CISCO_TP, /**< [en]Indicates cisco single screen
                                                   <br>[cn]˼�Ƶ��� */
    CONFCTRL_E_ATTENDEE_TYPE_THREE_CISCO_TP,  /**< [en]Indicates cisco three screen
                                                   <br>[cn]˼������ */
    CONFCTRL_E_ATTENDEE_TYPE_H323             /**< [en]Indicates network attendee
                                                   <br>[cn]H.323�����û� */
} CONFCTRL_E_ATTENDEE_TYPE;

/** 
 * [en]This enum is used to describe attendee status<br>
 * [cn]��Ա״̬
 */
typedef enum tagCONFCTRL_E_PARTICIPANT_STATUS
{
    CONFCTRL_E_PARTICIPANT_STATUS_IN_CONF = 0, /**< [en]Indicates in conference
                                                    <br>[cn]������ */
    CONFCTRL_E_PARTICIPANT_STATUS_CALLING,     /**< [en]Indicates is calling
                                                    <br>[cn]���ں��� */
    CONFCTRL_E_PARTICIPANT_STATUS_JOINING,     /**< [en]Indicates is joining conference
                                                    <br>[cn]���ڼ������ */
    CONFCTRL_E_PARTICIPANT_STATUS_LEAVED,      /**< [en]Indicates have leaved 
                                                    <br>[cn]�Ѿ��뿪 */
    CONFCTRL_E_PARTICIPANT_STATUS_NO_EXIST,    /**< [en]Indicates not exist
                                                    <br>[cn]�û������� */
    CONFCTRL_E_PARTICIPANT_STATUS_BUSY,        /**< [en]Indicates callee is busy
                                                    <br>[cn]�����û�æ */
    CONFCTRL_E_PARTICIPANT_STATUS_NO_ANSWER,   /**< [en]Indicates no answer
                                                    <br>[cn]�û���Ӧ�� */
    CONFCTRL_E_PARTICIPANT_STATUS_REJECT,      /**< [en]Indicates user reject answer
                                                    <br>[cn]�û��ܾ����� */
    CONFCTRL_E_PARTICIPANT_STATUS_CALL_FAILED  /**< [en]Indicates call failed
                                                    <br>[cn]����ʧ�� */
} CONFCTRL_E_PARTICIPANT_STATUS;

/** 
 * [en]This enum is used to describe attendee update type<br>
 * [cn]�����Ա���·�ʽ
 */
typedef enum tagCONFCTRL_E_PARTICIPANT_UPDATE_TYPE
{
    CONFCTRL_E_PARTICIPANT_UPDATE_TYPE_NULL = 0, /**< [en]Indicates null
                                                      <br>[cn]�޸��� */
    CONFCTRL_E_PARTICIPANT_UPDATE_TYPE_ALL,      /**< [en]Indicates all
                                                      <br>[cn]ȫ�� */
    CONFCTRL_E_PARTICIPANT_UPDATE_TYPE_ADD,      /**< [en]Indicates add
                                                      <br>[cn]�������� */
    CONFCTRL_E_PARTICIPANT_UPDATE_TYPE_CHANGED,  /**< [en]Indicates changed
                                                      <br>[cn]�����޸� */
    CONFCTRL_E_PARTICIPANT_UPDATE_TYPE_DEL       /**< [en]Indicates delete
                                                      <br>[cn]����ɾ�� */
} CONFCTRL_E_PARTICIPANT_UPDATE_TYPE;

/** 
 * [en]This enum is used to describe conference right<br>
 * [cn]����Ȩ��
 */
typedef enum tagCONFCTRL_E_CONF_RIGHT
{
    CONFCTRL_E_CONFRIGHT_CREATE = 0, /**< [en]Indicates conference created by current account
                                          <br>[cn]��ǰ�˺Ŵ����Ļ��� */
    CONFCTRL_E_CONFRIGHT_JOIN,       /**< [en]Indicates right of join conference
                                          <br>[cn]��ǰ�˺Ŵ��μӵĻ��� */
    CONFCTRL_E_CONFRIGHT_CREATE_JOIN /**< [en]Indicates right of create and join conference
                                          <br>[cn]��ǰ�˺Ŵ����Ļ���ʹ��μӵĻ��� */
} CONFCTRL_E_CONFRIGHT;

/** 
 * [en]This enum is used to describe mediax time zone <br>
 * [cn]MediaXʱ��ö��ֵ
 */
typedef enum tagCONFCTRL_E_TIMEZONE
{
    CONFCTRL_E_TIMEZONE_INTERDATE_LINE = 1,       /**< [en]Indicates International Date Line West
                                                       <br>[cn]�ս����� */
    CONFCTRL_E_TIMEZONE_MIDWAY_ISLAND,            /**< [en]Indicates Midway Island, Samoa
                                                       <br>[cn]��;������Ħ��Ⱥ�� */
    CONFCTRL_E_TIMEZONE_HAWAII,                   /**< [en]Indicates Hawaii
                                                       <br>[cn]������ */
    CONFCTRL_E_TIMEZONE_ALASKA,                   /**< [en]Indicates Alaska
                                                       <br>[cn]����˹�� */
    CONFCTRL_E_TIMEZONE_PACIFIC_TIME,             /**< [en]Indicates Pacific Time(US&Canada);Tijuana
                                                       <br>[cn]̫ƽ��ʱ��(�����ͼ��ô�);�ٻ��� */
    CONFCTRL_E_TIMEZONE_ARIZONA,                  /**< [en]Indicates Arizona
                                                       <br>[cn]����ɣ�� */
    CONFCTRL_E_TIMEZONE_MOUNTAIN_TIME,            /**< [en]Indicates Mountain Time(US&Canada)
                                                       <br>[cn]ɽ��ʱ��(�����ͼ��ô�) */
    CONFCTRL_E_TIMEZONE_CENTRAL_AMERICA,          /**< [en]Indicates Central America
                                                       <br>[cn]������ */
    CONFCTRL_E_TIMEZONE_CENTRAL_TIME,             /**< [en]Indicates Central Time(US&Canada)
                                                       <br>[cn]�м�ʱ��(�����ͼ��ô�) */
    CONFCTRL_E_TIMEZONE_MEXICO_CITY,              /**< [en]Indicates Mexico City 
                                                       <br>[cn]ī����� */
    CONFCTRL_E_TIMEZONE_SASKATCHEWAN,             /**< [en]Indicates Saskatchewan
                                                       <br>[cn]��˹������ */
    CONFCTRL_E_TIMEZONE_BOGOTA,                   /**< [en]Indicates Bogota, Lima, Quito
                                                       <br>[cn]������������� */
    CONFCTRL_E_TIMEZONE_EASTERN_TIME,             /**< [en]Indicates Eastern Time(US&Canada)
                                                       <br>[cn]����ʱ��(�����ͼ��ô�) */
    CONFCTRL_E_TIMEZONE_INDIANA,                  /**< [en]Indicates Indiana(East)
                                                       <br>[cn]ӡ�ڰ���(����) */
    CONFCTRL_E_TIMEZONE_ATLANTIC_TIME,            /**< [en]Indicates Atlantic time(Canada)
                                                       <br>[cn]������ʱ��(���ô�) */
    CONFCTRL_E_TIMEZONE_CARACAS,                  /**< [en]Indicates Caracas, La Paz
                                                       <br>[cn]������˹������˹ */
    CONFCTRL_E_TIMEZONE_SANTIAGO,                 /**< [en]Indicates Santiago
                                                       <br>[cn]ʥ���Ǹ� */
    CONFCTRL_E_TIMEZONE_NEWFOUNDLAND,             /**< [en]Indicates Newfoundland
                                                       <br>[cn]Ŧ���� */
    CONFCTRL_E_TIMEZONE_BRASILIA,                 /**< [en]Indicates Brasilia
                                                       <br>[cn]�������� */
    CONFCTRL_E_TIMEZONE_BUENOS_AIRES,             /**< [en]Indicates Buenos Aires, Georgetown
                                                       <br>[cn]����ŵ˹����˹�����ζ� */
    CONFCTRL_E_TIMEZONE_GREENLAND,                /**< [en]Indicates Greenland
                                                       <br>[cn]������ */
    CONFCTRL_E_TIMEZONE_MID_ATLANTIC,             /**< [en]Indicates Mid-Atlantic
                                                       <br>[cn]�д����� */
    CONFCTRL_E_TIMEZONE_AZORES,                   /**< [en]Indicates Azores
                                                       <br>[cn]���ٶ�Ⱥ�� */
    CONFCTRL_E_TIMEZONE_CAPEVERDE,                /**< [en]Indicates Cape Verde Is
                                                       <br>[cn]��ý�Ⱥ�� */
    CONFCTRL_E_TIMEZONE_MONROVIA,                 /**< [en]Indicates Monrovia
                                                       <br>[cn]����ά�� */
    CONFCTRL_E_TIMEZONE_GREENWICH_MEANTIME,       /**< [en]Indicates Greenwich Mean Time:Dublin, Edinburgh, Lisbon, London
                                                       <br>[cn]�������α�׼ʱ�������֣�����������˹�����׶� */
    CONFCTRL_E_TIMEZONE_AMSTERDAM,                /**< [en]Indicates Amsterdam, Berlin, Bern, Rome, Stockholm, Vienna
                                                       <br>[cn]��ķ˹�ص������֣������ᣬ����˹�¸��Ħ��άҲ�� */
    CONFCTRL_E_TIMEZONE_BELGRADE,                 /**< [en]Indicates Belgrade, Bratislava, Budapest, Ljubljana, Prague
                                                       <br>[cn]���������£�������˹������������˹��¬�������ɣ������� */
    CONFCTRL_E_TIMEZONE_BRUSSELS,                 /**< [en]Indicates Brussels, Copenhagen, Madrid, Paris
                                                       <br>[cn]��³�������籾�������������� */
    CONFCTRL_E_TIMEZONE_SARAJEVO,                 /**< [en]Indicates Sarajevo, Skopje, Sofija, Vilnius, Warsaw, Zagreb
                                                       <br>[cn]�������ѣ�˹�����ά��Ŧ˹�������ǣ���ɳ�������ղ� */
    CONFCTRL_E_TIMEZONE_WESTCENTRAL_AFRICA,       /**< [en]Indicates West Central Africa
                                                       <br>[cn]�з����� */
    CONFCTRL_E_TIMEZONE_ATHENS,                     /**< [en]Indicates Athens, Istanbul, Minsk
                                                       <br>[cn]�ŵ䣬��˹̹��������˹�� */
    CONFCTRL_E_TIMEZONE_BUCHAREST,                 /**< [en]Indicates Bucharest
                                                       <br>[cn]������˹�� */ 
    CONFCTRL_E_TIMEZONE_CAIRO,                     /**< [en]Indicates Cairo
                                                       <br>[cn]���� */
    CONFCTRL_E_TIMEZONE_HARARE,                    /**< [en]Indicates Harare, Pretoria
                                                       <br>[cn]�����ף����������� */
    CONFCTRL_E_TIMEZONE_HELSINKI,                 /**< [en]Indicates Helsinki, Riga, Tallinn
                                                       <br>[cn]�ն���������ӣ����� */
    CONFCTRL_E_TIMEZONE_JERUSALEM,                   /**< [en]Indicates Jerusalem
                                                       <br>[cn]Ү·���� */
    CONFCTRL_E_TIMEZONE_BAGHDAD,                     /**< [en]Indicates Baghdad
                                                       <br>[cn]�͸�� */
    CONFCTRL_E_TIMEZONE_KUWAIT,                     /**< [en]Indicates Kuwait, Riyadh
                                                       <br>[cn]�����أ����ŵ� */
    CONFCTRL_E_TIMEZONE_MOSCOW,                    /**< [en]Indicates Moscow, St. Petersburg, Volgograd 
                                                       <br>[cn]Ī˹�ƣ�ʥ�˵ñ�����ɽ�������Ӹ��� */
    CONFCTRL_E_TIMEZONE_NAIROBI,                     /**< [en]Indicates Nairobi
                                                       <br>[cn]���ޱ� */
    CONFCTRL_E_TIMEZONE_TEHRAN,                    /**< [en]Indicates Tehran
                                                       <br>[cn]�º��� */
    CONFCTRL_E_TIMEZONE_ABU_DHABI,                /**< [en]Indicates Abu Dhabi, Muscat
                                                       <br>[cn]�������ȣ���˹���� */
    CONFCTRL_E_TIMEZONE_TBILISI,                     /**< [en]Indicates Tbilisi, Yerevan
                                                       <br>[cn]�ڱ���˹�������� */
    CONFCTRL_E_TIMEZONE_KABUL,                     /**< [en]Indicates Kabul
                                                       <br>[cn]������ */
    CONFCTRL_E_TIMEZONE_EKATERINBURG,             /**< [en]Indicates Ekaterinburg
                                                       <br>[cn]Ҷ�����ձ� */
    CONFCTRL_E_TIMEZONE_ISLAMABAD,                 /**< [en]Indicates Islamabad, Karachi, Tashkent
                                                       <br>[cn]��˹�����������棬��ʲ�� */
    CONFCTRL_E_TIMEZONE_CALCUTTA,                 /**< [en]Indicates Calcutta, Chennai, Mumbai, New Delhi
                                                       <br>[cn]�Ӷ����������˹�������µ��� */
    CONFCTRL_E_TIMEZONE_KATHMANDU,                   /**< [en]Indicates Kathmandu
                                                       <br>[cn]�ӵ����� */
    CONFCTRL_E_TIMEZONE_ALMATY,                     /**< [en]Indicates Almaty
                                                       <br>[cn]����ľͼ */
    CONFCTRL_E_TIMEZONE_ASTANA,                     /**< [en]Indicates Astana, Dhaka
                                                       <br>[cn]��˹���ɣ��￨ */
    CONFCTRL_E_TIMEZONE_SRIJAYA,                  /**< [en]Indicates Sri Jayawardenepura
                                                       <br>[cn]˹����ǻ��������� */
    CONFCTRL_E_TIMEZONE_RANGOON,                     /**< [en]Indicates Rangoon
                                                       <br>[cn]���� */
    CONFCTRL_E_TIMEZONE_BANGKOK,                     /**< [en]Indicates Bangkok, Hanoi, Jakarta
                                                       <br>[cn]���ȣ��żӴ���� */
    CONFCTRL_E_TIMEZONE_NOVOSIBIRSK,                 /**< [en]Indicates Novosibirsk
                                                       <br>[cn]���������� */
    CONFCTRL_E_TIMEZONE_BEIJING,                     /**< [en]Indicates Beijing, Chongqing, Hong Kong, Urumqi, Taipei
                                                       <br>[cn]���������죬��ۣ���³ľ�룬̨�� */
    CONFCTRL_E_TIMEZONE_KRASNOYARSK,                 /**< [en]Indicates Krasnoyarsk, Ulaan Bataar
                                                       <br>[cn]����˹ŵ�Ƕ�˹�ˣ��������� */
    CONFCTRL_E_TIMEZONE_KUALA_LUMPUR,             /**< [en]Indicates Kuala Lumpur, Singapore
                                                       <br>[cn]��¡�£��¼��� */
    CONFCTRL_E_TIMEZONE_PERTH,                     /**< [en]Indicates Perth
                                                       <br>[cn]��˹ */
    CONFCTRL_E_TIMEZONE_OSAKA,                     /**< [en]Indicates Osaka, Sapporo, Tokyo
                                                       <br>[cn]���������棬���� */
    CONFCTRL_E_TIMEZONE_SEOUL,                     /**< [en]Indicates Seoul
                                                       <br>[cn]���� */
    CONFCTRL_E_TIMEZONE_YAKUTSK,                     /**< [en]Indicates Yakutsk
                                                       <br>[cn]�ſ�Ŀ� */
    CONFCTRL_E_TIMEZONE_ADELAIDE,                 /**< [en]Indicates Adelaide
                                                       <br>[cn]�������� */
    CONFCTRL_E_TIMEZONE_DARWIN,                     /**< [en]Indicates Darwin
                                                       <br>[cn]����� */
    CONFCTRL_E_TIMEZONE_BRISBANE,                 /**< [en]Indicates Brisbane
                                                       <br>[cn]����˹�� */
    CONFCTRL_E_TIMEZONE_CANBERRA,                    /**< [en]Indicates Canberra, Melbourne, Sydney
                                                       <br>[cn]��������ī������Ϥ�� */
    CONFCTRL_E_TIMEZONE_GUAM,                     /**< [en]Indicates Guam, Port Moresby
                                                       <br>[cn]�ص���Ī���ȱȸ� */
    CONFCTRL_E_TIMEZONE_HOBART,                    /**< [en]Indicates Hobart
                                                       <br>[cn]������ */
    CONFCTRL_E_TIMEZONE_VLADIVOSTOK,               /**< [en]Indicates Vladivostok
                                                       <br>[cn]��������˹�п� */
    CONFCTRL_E_TIMEZONE_SOLOMON,                    /**< [en]Indicates Solomon Is., New Caledonia
                                                       <br>[cn]������Ⱥ�����¿�������� */
    CONFCTRL_E_TIMEZONE_AUCKLAND,                 /**< [en]Indicates Auckland, Welington
                                                       <br>[cn]�¿���������� */
    CONFCTRL_E_TIMEZONE_FIJI,                     /**< [en]Indicates Fiji, Kamchatka, Marshall Is.
                                                       <br>[cn]��ʿ������Ӱ뵺�����ܶ�Ⱥ�� */
    CONFCTRL_E_TIMEZONE_NUKUALOFA,                 /**< [en]Indicates Nuku'alofa
                                                       <br>[cn]Ŭ�Ⱒ�巨 */
    CONFCTRL_E_TIMEZONE_IRKUTSK,                     /**< [en]Indicates Irkutsk
                                                       <br>[cn]������Ŀ� */
    CONFCTRL_E_TIMEZONE_CASABLANCA,                  /**< [en]Indicates Casablanca
                                                       <br>[cn]���������� */
    CONFCTRL_E_TIMEZONE_BAKU,                     /**< [en]Indicates Baku
                                                       <br>[cn]�Ϳ� */
    CONFCTRL_E_TIMEZONE_MAGADAN,                     /**< [en]Indicates Magadan
                                                       <br>[cn]��ӵ� */
    CONFCTRL_E_TIMEZONE_BUTT
} CONFCTRL_E_TIMEZONE;

/** 
 * [en]This enum is used to describe conference mode<br>
 * [cn]����ģʽ
 */
typedef enum tagCONFCTRL_E_CONF_MODE
{
    CONFCTRL_E_CONF_MODE_FIXED, /**< [en]Indicates fixed broadcast attendee
                                     <br>[cn]�̶��㲥����� */
    CONFCTRL_E_CONF_MODE_VAS,   /**< [en]Indicates voice control mode
                                     <br>[cn]����ģʽ */
    CONFCTRL_E_CONF_MODE_FREE   /**< [en]Indicates free discussion
                                     <br>[cn]�������� */
} CONFCTRL_E_CONF_MODE;

/** 
 * [en]This enum is used to describe conference warning tone<br>
 * [cn]������ʾ��
 */
typedef enum tagCONFCTRL_E_CONF_WARNING_TONE
{
    CONFCTRL_E_CONF_WARNING_TONE_DEFAULT,       /**< [en]Indicates default
                                                     <br>[cn]Ĭ�� */
    CONFCTRL_E_CONF_WARNING_TONE_NOHINT,        /**< [en]Indicates no hint
                                                     <br>[cn]����ʾ */
    CONFCTRL_E_CONF_WARNING_TONE_HINT,          /**< [en]Indicates hint
                                                     <br>[cn]Ĭ����ʾ�� */
    CONFCTRL_E_CONF_WARNING_TONE_HINT_DU,       /**< [en]Indicates hint(DU)
                                                     <br>[cn]��ʾ��(DU) */
    CONFCTRL_E_CONF_WARNING_TONE_BROADCAST,     /**< [en]Indicates broadcast attendee name
                                                     <br>[cn]�㲥��������� */
    CONFCTRL_E_CONF_WARNING_TONE_BUTT
} CONFCTRL_E_CONF_WARNING_TONE;

/** 
 * [en]This enum is used to describe conference media type flag<br>
 * [cn]�����ý�����ͱ�ʶ
 * [cn]��1������ö��String��ɣ����ö��ʱ��ÿ��ö��ֵ֮��ͨ��","���ŷָ�
 */
typedef enum tagCONFCTRL_E_CONF_MEDIATYPE_FLAG
{
    CONFCTRL_E_CONF_MEDIATYPE_FLAG_VOICE = 0x01,                        /**< [en]Indicates voice
                                                                             <br>[cn]"Voice"������ */
    CONFCTRL_E_CONF_MEDIATYPE_FLAG_VIDEO = 0x02,                        /**< [en]Indicates video
                                                                             <br>[cn]"Video"��������Ƶ */
    CONFCTRL_E_CONF_MEDIATYPE_FLAG_HDVIDEO = 0x04,                      /**< [en]Indicates hdvideo
                                                                             <br>[cn]"HDVideo"��������Ƶ����Video���⣬���ͬʱѡ��Video��HDVideo����ϵͳĬ��ѡ��Video�� */
    CONFCTRL_E_CONF_MEDIATYPE_FLAG_TELEPRESENCE = 0x08,                 /**< [en]Indicates telepresence(video and HDvideo are mutual exclusion)
                                                                             <br>[cn]"Telepresence"��������Ƶ����Video��HDVideo���⣩ */
    CONFCTRL_E_CONF_MEDIATYPE_FLAG_DATA = 0x10,                         /**< [en]Indicates data
                                                                             <br>[cn]"Data"�����ݶ�ý����� */
    CONFCTRL_E_CONF_MEDIATYPE_FLAG_DESKTOPSHARING = 0x20,               /**< [en]Indicates desktopsharing(This enumeration can only be used in conjunction with Voice, and mutually exclusive with Data, said the desktop provided by the BFCP stream sharing)
                                                                             <br>[cn]"DesktopSharing"�����湲����ö��ֻ����Voice���ʹ�ã�����Data���⣬��ʾ��BFCP�����ṩ�����湲�� */
    CONFCTRL_E_CONF_MEDIATYPE_FLAG_BUTT
}CONFCTRL_E_CONF_MEDIATYPE_FLAG;

/** 
 * [en]This enum is used to describe batch request conference list request type<br>
 * [cn]��������᳡�б���������
 */
typedef enum tagCONFCTRL_E_GET_TERMNUM_REQ_TYPE
{
    CONFCTRL_E_GET_TERMNUM_REQ_TYPE_ALLMCU = 0,    /**< [en]Indicates request conference info of all MCU
                                                        <br>[cn]��������MCU�ϵĻ᳡��Ϣ */
    CONFCTRL_E_GET_TERMNUM_REQ_TYPE_ONEMCU,        /**< [en]Indicates query all site info of a MCU
                                                        <br>[cn]��ѯһ��mcu�ϵ����л᳡��Ϣ */
    CONFCTRL_E_GET_TERMNUM_REQ_TYPE_MT,            /**< [en]Indicates query by mt number
                                                        <br>[cn]ͨ��mt�Ų�ѯ */
    CONFCTRL_E_GET_TERMNUM_REQ_TYPE_BUTT           
} CONFCTRL_E_GET_TERMNUM_REQ_TYPE;


/** 
 * [en]This struct is used to describe batch request list request param<br>
 * [cn]��������᳡�б��������
 */
typedef struct tagCONFCTRL_S_GET_NUMBER_PARA
{
    TE_SITE_MT *pstMTList;                      /**< [en]Indicates site MT list. [cn]�᳡MT�� ���� */
    TUP_UINT32  listcnt;                        /**< [en]Indicates site count. [cn]�᳡���� */
} CONFCTRL_S_GET_NUMBER_PARA;


/** 
 * [en]This struct is used to describe server param<br>
 * [cn]��������ز���
 */
typedef struct tagCONFCTRL_S_SERVER_PARA
{
    TUP_CHAR   server_addr[CONFCTRL_D_MAX_SERVER_ADDR_LEN]; /**< [en]Indicates server address. [cn]��������ַ */
    TUP_UINT16 port;                                        /**< [en]Indicates port. [cn]�˿ں� */
} CONFCTRL_S_SERVER_PARA;


/** 
 * [en]This struct is used to describe add media info<br>
 * [cn]����ý����Ϣ
 */
typedef struct tagCONFCTRL_S_ADD_MEDIA
{
    TUP_UINT32 media_type;                                 /**< [en]Indicates media type, value refer to CONFCTRL_E_CONF_MEDIATYPE_FLAG, can do "|" operate. [cn]ý�����ͣ�ȡֵ�ο�CONFCTRL_E_CONF_MEDIATYPE_FLAG���ɽ���"|"���� */
    TUP_CHAR group_uri[CONFCTRL_D_MAX_GROUP_URI_LEN];      /**< [en]Indicates group id. [cn]��ѡ��Ⱥ��id */
} CONFCTRL_S_ADD_MEDIA;

/** 
 * [en]This struct is used to describe cycle conference param<br>
 * [cn]���ڻ������
 */
typedef struct tagCONFCTRL_S_CYCLE_PARAM
{
    TUP_UINT64 start_data;   /**< [en]Indicates cycle conference start time. [cn]���ڻ��鿪ʼʱ�� */
    TUP_UINT64 end_data;     /**< [en]Indicates cycle conference end time. [cn]���ڻ���������� */

    CONFCTRL_E_CYCLE_TYPE frequency;  /**< [en]Indicates cycle conference time type, value refer to CONFCTRL_E_CYCLE_TYPE. [cn]���ڻ���ʱ������,ȡֵ:ʹ�� CONFCTRL_E_CYCLE_TYPE ��ֵ����"��"���� */

    TUP_UINT32 appointed_type;        /**< [en]Indicates cycle conference type, when AppointedType=0, every interval days / week / month; default 0. when AppointedType=1, Frequency=2 represent the first few weeks, Frequency=3 represent the first few months. [cn]���ڻ������ͣ�ȡֵ��appointedType=0ʱ��ÿ��interval��/��/�£�Ĭ��0��appointedType=1ʱ��Frequency=2��ʾ�ڼ������ڣ�Frequency=3��ʾ�ڼ��� */

    TUP_UINT32 interval;              /**< [en]Indicates when carry appointedType param, interval has to be wrote. [cn]����appointedType����ʱ��interval ���� */

    TUP_UINT32  point_num;   /**< [en]Indicates number can be wrote in point. [cn]point����������� */
    TUP_UINT32* point;       /**< [en]Indicates meeting point in the cycle. If the Day type is selected, the point parameter can only fill in one parameter, and the additional parameters will be ignored.
                                  <br>[en]for example:
                                  <br>[en]1.the cycle type selected Day, point filled with 2, represent it's held once every two days
                                  <br>[en]2.the cycle type selected Week, point filled with the two elements of the 1 and 3, represent it's held each Monday and Wednesday 
                                  <br>[en]3.the cycle type selected Month, point filled with 12 and 20, represent it's held 12th and 20th each month 
                                  <br>[en]4.the cycle type selected Year, point represent which month, can more than one	                              
                                  [cn]�����ڵĻ����ٿ��㡣���ѡ����Day������point����ֻ�ܹ�����һ��������������Ĳ������ᱻ����
                                  <br>[cn]������ 
                                  <br>[cn]1����������ѡ����Day��point������2�����ʾÿ�����ٿ�һ�� 
                                  <br>[cn]2����������ѡ����Week��point������������Ԫ��1��3�����ʾÿ����һ�������ٿ����� 
                                  <br>[cn]3����������ѡ����Month��point��������12��20���ʾÿ���µ�12�ź�20���ٿ����� 
                                  <br>[cn]4����������ѡ����Year������point��ʾ���£��ɶ�� */ 

    TUP_UINT32 cycle_count;  /**< [en]Indicates cycle count, the maximum times is 30 . [cn]�ظ����������30�� */
} CONFCTRL_S_CYCLE_PARAM;

/** 
 * [en]This struct is used to describe aux data param<br>
 * [cn]��������
 */
typedef struct tagCONFCTRL_S_ASSISTANT_MEDIA
{
    TUP_UINT32 mpi;                    /**< [en]Indicates aux data capacity support frame. The current range from 1 to 30. [cn]��ʾ��������֧�ֵ�֡�ʡ���ǰȡֵ��Χ1��30 */
    CONFCTRL_E_ASSIST_MEDIA_TYPE type; /**< [en]Indicates role type(Static picture / active image). [cn]��ɫ��ǩ(��̬ͼƬ/�ͼ��) */
    CONFCTRL_E_VIDEO_CODEC code;       /**< [en]Indicates video codec. [cn]��Ƶ�ı����ʽ */
    CONFCTRL_E_BAND_WIDTH bandwidth;   /**< [en]Indicates bandwidth supported by aux data. [cn]��ʾ��������֧�ֵĴ���  */
    CONFCTRL_E_MEDIA_SIZE size;        /**< [en]Indicates frame size supported by aux data. [cn]��ʾ��������֧�ֵĻ���ֱ��� */
} CONFCTRL_S_ASSISTANT_MEDIA;

/** 
 * [en]This struct is used to describe attendee info(before join conference)<br>
 * [cn]�������Ϣ(���ǰ)
 */
typedef struct tagCONFCTRL_S_ATTENDEE
{
    TUP_CHAR    number[CONFCTRL_D_MAX_NUMBER_LEN];    /**< [en]Indicates number. [cn]���� */
    TUP_CHAR    name[CONFCTRL_D_MAX_NAME_LEN];        /**< [en]Indicates name. [cn]��ѡ����������� */
    TUP_CHAR    email[CONFCTRL_D_MAX_EMAIL_LEN];      /**< [en]Indicates email. [cn]��ѡ�����������ַ */
    TUP_CHAR    sms[CONFCTRL_D_MAX_PHONE_LEN];        /**< [en]Indicates sms. [cn]��ѡ������֪ͨ�ֻ����� */
    TUP_CHAR    acount_id[CONFCTRL_D_MAX_ACCOUNT_ID_LEN]; /**< [en]Indicates account id. [cn]��ѡ���û���¼�˺� */
    TUP_BOOL    is_mute;               /**< [en]Indicates whether is mute. [cn]�Ƿ���� */
    TUP_BOOL    is_auto_invite;        /**< [en]Indicates whether is auto invite [cn]�Ƿ��Զ����� */
    CONFCTRL_E_CONF_ROLE  role;        /**< [en]Indicates role. [cn]�����Ա��ɫ */
    CONFCTRL_E_ATTENDEE_TYPE type;     /**< [en]Indicates attendee type. [cn]��Ա���� */
} CONFCTRL_S_ATTENDEE;

/** 
 * [en]This struct is used to describe attendee info(before join conference)<br>
 * [cn]�������Ϣ(���ǰ)
 */
typedef struct tagCONFCTRL_S_ATTENDEE_MEDIAX
{
    TUP_CHAR    number[CONFCTRL_D_MAX_NUMBER_LEN]; /**< [en]Indicates number. [cn]���� */
    TUP_CHAR    name[CONFCTRL_D_MAX_NAME_LEN];     /**< [en]Indicates attendee name. [cn]��ѡ����������� */

    CONFCTRL_E_CONF_ROLE  role;        /**< [en]Indicates role. [cn]�����Ա��ɫ */ 
    CONFCTRL_E_ATTENDEE_TYPE type;     /**< [en]Indicates attendee type. [cn]��Ա���� */
} CONFCTRL_S_ATTENDEE_MEDIAX;


/** 
 * [en]This struct is used to describe participant info(after join conference)<br>
 * [cn]�����Ա��Ϣ(�����)
 */
typedef struct tagCONFCTRL_S_PARTICIPANT
{
    TUP_CHAR    participant_id[CONFCTRL_D_MAX_PARTICIPANTID_LEN]; /**< [en]Indicates participant unique id. [cn]�����Ψһ��ʶ */
    TUP_CHAR    participant_callid[CONFCTRL_D_MAX_CALL_ID_LEN];   /**< [en]Indicates participant call id. [cn]����ߵĺ��б�ʶ�� */    
    TUP_CHAR    name[CONFCTRL_D_MAX_NAME_LEN];                    /**< [en]Indicates participant name. [cn]��������� */
    TUP_CHAR    number[CONFCTRL_D_MAX_NUMBER_LEN];                /**< [en]Indicates number. [cn]���� */

    TUP_BOOL    is_mute;           /**< [en]Indicates whether is mute. [cn]�Ƿ���� */
    TUP_BOOL    is_deaf;           /**< [en]Indicates whether is deaf. [cn]�Ƿ��� */
    TUP_BOOL    hand_state;        /**< [en]Indicates hand state. [cn]�Ƿ���� */
    TUP_BOOL    is_broadcast;      /**< [en]Indicates whether is be boardcasted. [cn]�Ƿ񱻹㲥 */
    TUP_BOOL    has_camera;        /**< [en]Indicates whether has camera. [cn]�Ƿ�������ͷ */
    TUP_BOOL    is_multi_stream;   /**< [en]Indicates whether is multiStream device. [cn]�Ƿ��Ƕ����ն� */
    TUP_BOOL    is_allow_Video;    /**< [en]Indicates whether is allow video. [cn]�Ƿ�������Ƶ */
    TUP_BOOL    is_roll_called;    /**< [en]Indicates whether is roll called. [cn]�Ƿ��ڱ�����״̬ */
    TUP_BOOL    has_token_ring;    /**< [en]Indicates whether has token ring. [cn]�Ƿ�ӵ�и�������״̬ */
    TUP_BOOL    is_share;          /**< [en]Indicates whether is share. [cn]�Ƿ�ӵ�����ݹ���Ȩ״̬ */
    
    CONFCTRL_E_CONF_ROLE  role;              /**< [en]Indicates participant role. [cn]�����Ա��ɫ  */
    CONFCTRL_E_PARTICIPANT_STATUS  state;    /**< [en]Indicates participant state. [cn]�û�״̬ */
    TUP_UINT32  media_type;       /**< [en]Indicates media type, value refer to CONFCTRL_E_CONF_MEDIATYPE_FLAG, can do "|" operate. [cn]ý�����ͣ�ȡֵ�ο�CONFCTRL_E_CONF_MEDIATYPE_FLAG���ɽ���"|"���� */
} CONFCTRL_S_PARTICIPANT;

/** 
 * [en]This struct is used to describe add attendee info<br>
 * [cn]����������Ϣ
 */
typedef struct tagCONFCTRL_S_ADD_ATTENDEES_INFO
{
    TUP_UINT32 num_of_attendee;    /**< [en]Indicates attendee number. [cn]����߸��� */
    CONFCTRL_S_ATTENDEE* attendee; /**< [en]Indicates attendee info. [cn]�������Ϣ */
} CONFCTRL_S_ADD_ATTENDEES_INFO;

/** 
 * [en]This struct is used to describe conference creating info(Instant conference)<br>
 * [cn]������Ϣ(��������)
 */
typedef struct tagCONFCTRL_S_CREATE_CONF_INFO
{
    TUP_CHAR  subject[CONFCTRL_D_MAX_SUBJECT_LEN];         /**< [en]Indicates optional, conference subject. [cn]��ѡ���������� */
    TUP_CHAR  group_uri[CONFCTRL_D_MAX_GROUP_URI_LEN];     /**< [en]Indicates group uri. [cn]��ѡ��Ⱥ��uri */

    CONFCTRL_E_CONF_WARNING_TONE  welcome_voice_enable;    /**< [en]Indicates optional, switch of welcome voice. [cn]��ѡ����Ỷӭ�ʿ��� */
    CONFCTRL_E_CONF_WARNING_TONE  enter_prompt;            /**< [en]Indicates optional, participant enter prompt switch. [cn]��ѡ���г�Ա�����ʾ������ */
    CONFCTRL_E_CONF_WARNING_TONE  leave_prompt;            /**< [en]Indicates optional, participant leave prompt switch. [cn]��ѡ���г�Ա�����ʾ������ */
    TUP_BOOL  conf_filter;             /**< [en]Indicates optional, whether conference start filter. [cn]��ѡ�������Ƿ���ˣ�Ԥ�� */
    TUP_BOOL  record_flag;             /**< [en]Indicates optional, whether conference start record. [cn]��ѡ�������Ƿ��Զ�����¼�ƣ�Ԥ�� */
    TUP_BOOL  multi_stream_flag;       /**< [en]Indicates optional, whether conference is multi-stream flag. [cn]��ѡ���Ƿ�Ϊ������Ƶ���� */
    
    TUP_UINT32 media_type;                      /**< [en]Indicates media type, value refer to CONFCTRL_E_CONF_MEDIATYPE_FLAG, can do "|" operate. [cn]ý�����ͣ�ȡֵ�ο�CONFCTRL_E_CONF_MEDIATYPE_FLAG���ɽ���"|"���� */
    CONFCTRL_E_LANGUAGE language;               /**< [en]Indicates optional, default language of conference. [cn]��ѡ�������Ĭ������ */
    CONFCTRL_E_ENCRYPT_MODE conf_encrypt_mode;  /**< [en]Indicate optional,s conference media encrypt mode. [cn]��ѡ������ý�����ģʽ  */
    CONFCTRL_E_USER_TYPE user_type;             /**< [en]Indicates optional, user type of conference created user. [cn]��ѡ�������û����û����� */

    TUP_UINT32 num_of_attendee;                         /**< [en]Indicates attendee number. [cn]����߸��� */
    CONFCTRL_S_ATTENDEE* attendee;                      /**< [en]Indicates attendee info. [cn]�������Ϣ */
    CONFCTRL_S_ASSISTANT_MEDIA* assistant_media_params; /**< [en]Indicates optional, aux data param, this param valid to video conf. [cn]��ѡ�������������ò�������Ƶ������Ч */
} CONFCTRL_S_CREATE_CONF_INFO;

/** 
 * [en]This struct is used to describe conference creating info(reserve conference uportal)<br>
 * [cn]������Ϣ(ԤԼ���� Uportal)
 */
typedef struct tagCONFCTRL_S_BOOK_CONF_INFO_UPORTAL
{
    TUP_UINT32 size;                     /**< [en]Indicates conference size. [cn]���鷽�� */
    CONFCTRL_E_CONF_TYPE conf_type;      /**< [en]Indicates conference type, cycle conference must write cycle_params. [cn]�������� */
    TUP_UINT32 media_type;               /**< [en]Indicates media type, value refer to CONFCTRL_E_CONF_MEDIATYPE_FLAG, can do "|" operate. [cn]ý�����ͣ�ȡֵ�ο�CONFCTRL_E_CONF_MEDIATYPE_FLAG���ɽ���"|"���� */

    TUP_CHAR start_time[CONFCTRL_D_MAX_TIME_FORMATE_LEN];  /**< [en]Indicates optional, conference start time, format:YYYY-MM-DD HH:MM. [cn]��ѡ�����鿪ʼʱ�䣬��ʽ��YYYY-MM-DD HH:MM�����û��ָ����ʼʱ�䣬���ʾ�������Ͽ�ʼ */
    TUP_UINT32 conf_len;                                   /**< [en]Indicates conference length of time, unit is minute. [cn]�������ʱ������λ���� */
    TUP_CHAR subject[CONFCTRL_D_MAX_SUBJECT_LEN];          /**< [en]Indicates optional, conference subject. [cn]��ѡ���������� */

    CONFCTRL_E_CONF_WARNING_TONE  welcome_voice_enable;      /**< [en]Indicates optional, switch of welcome voice. [cn]��ѡ����Ỷӭ�ʿ��� */
    CONFCTRL_E_CONF_WARNING_TONE  enter_prompt;              /**< [en]Indicates optional, participant enter prompt switch. [cn]��ѡ���г�Ա�����ʾ������ */
    CONFCTRL_E_CONF_WARNING_TONE  leave_prompt;              /**< [en]Indicates optional, participant leave prompt switch. [cn]��ѡ���г�Ա�����ʾ������ */
    TUP_BOOL  conf_filter;               /**< [en]Indicates optional, whether conference start filter. [cn]��ѡ�������Ƿ���ˣ�Ԥ�� */
    TUP_BOOL  record_flag;               /**< [en]Indicates optional, whether conference start record. [cn]��ѡ�������Ƿ��Զ�����¼�ƣ�Ԥ�� */
    TUP_BOOL  auto_prolong;              /**< [en]Indicates optional, whether auto prolong conference. [cn]��ѡ���Ƿ��Զ��ӳ����� */
    TUP_BOOL  multi_stream_flag;         /**< [en]Indicates optional, whether is multi-stream video conference. [cn]��ѡ���Ƿ�Ϊ������Ƶ���� */
    
    CONFCTRL_E_REMINDER_TYPE reminder;            /**< [en]Indicates optional, conference remainder. [cn]��ѡ���������ѷ�ʽ  */
    CONFCTRL_E_LANGUAGE language;                 /**< [en]Indicates optional, conference default language. [cn]��ѡ�������Ĭ������ */
    CONFCTRL_E_ENCRYPT_MODE conf_encrypt_mode;    /**< [en]Indicates optional, conference media encrypt mode. [cn]��ѡ������ý�����ģʽ  */
    CONFCTRL_E_USER_TYPE user_type;               /**< [en]Indicates optional, conference creator user type. [cn]��ѡ��Ԥ���ߵ��û����� */

    TUP_UINT32 num_of_attendee;          /**< [en]Indicates optional, attendee number. [cn]��ѡ������߸��� */
    CONFCTRL_S_ATTENDEE* attendee;       /**< [en]Indicates optional, attendee info. [cn]��ѡ���������Ϣ */

    CONFCTRL_S_CYCLE_PARAM* cycle_params;               /**< [en]Indicates required, cycle conference param, preserve. [cn]������ѡ�����ڻ���Ĳ�����Ԥ�� */
    CONFCTRL_S_ASSISTANT_MEDIA* assistant_media_params; /**< [en]Indicates optional, aux data param, this param is valid to video conf. [cn]��ѡ�������������ò�������Ƶ������Ч */
} CONFCTRL_S_BOOK_CONF_INFO_UPORTAL;


/** 
 * [en]This struct is used to describe conference creating info(reserve conference mediax)<br>
 * [cn]������Ϣ(ԤԼ���� mediax)
 */
typedef struct tagCONFCTRL_S_BOOK_CONF_INFO_MEDIAX
{
    TUP_UINT32 size;                     /**< [en]Indicates conference size. [cn]���鷽�� */
    CONFCTRL_E_CONF_TYPE conf_type;      /**< [en]Indicates conference type, cycle conference must write cycle_params. [cn]�������� ���ڻ���cycle_params������д */
    TUP_UINT32 media_type;               /**< [en]Indicates media type, value refer to CONFCTRL_E_CONF_MEDIATYPE_FLAG, can do "|" operate. [cn]ý�����ͣ�ȡֵ�ο�CONFCTRL_E_CONF_MEDIATYPE_FLAG���ɽ���"|"���� */

    TUP_ULONG start_time;                          /**< [en]Indicates optional, conference start time, format:YYYY-MM-DD HH:MM. [cn]��ѡ�����鿪ʼʱ�� ��ʽ��YYYY-MM-DD HH:MM */
    TUP_ULONG summer_time;                         /**< [en]Indicates optional, conference summer time, format:YYYY-MM-DD HH:MM. [cn]��ѡ���������ʱ�� ��ʽ��YYYY-MM-DD HH:MM Ĭ��ΪstartTime��һ��Сʱ */
    TUP_ULONG conf_len;                            /**< [en]Indicates required, conference length of time, unit is minute.. [cn]��ѡ������ʱ�� */
    TUP_CHAR subject[CONFCTRL_D_MAX_SUBJECT_LEN];  /**< [en]Indicates optional, conference subject. [cn]��ѡ���������� */

    CONFCTRL_E_CONF_WARNING_TONE welcome_voice_enable;      /**< [en]Indicates switch of welcome voice. [cn]��Ỷӭ�ʿ��� */
    CONFCTRL_E_CONF_WARNING_TONE enter_prompt;              /**< [en]Indicates participant enter prompt switch. [cn]�г�Ա�����ʾ������ */
    CONFCTRL_E_CONF_WARNING_TONE leave_prompt;              /**< [en]Indicates  participant leave prompt switch. [cn]�г�Ա�����ʾ������ */
    TUP_BOOL conf_filter;               /**< [en]Indicates  whether conference start filter. [cn]������� */
    TUP_BOOL record_flag;               /**< [en]Indicates whether conference auto start record. [cn]�����Ƿ��Զ�����¼�� */
    TUP_BOOL auto_prolong;              /**< [en]Indicates whether auto prolong conference. [cn]�Ƿ��Զ��ӳ����� */
    TUP_BOOL multi_stream_flag;         /**< [en]Indicates whether is multi-stream video conference. [cn]�Ƿ�Ϊ������Ƶ���� */
    TUP_BOOL allow_invite;              /**< [en]Indicates whether allow invite. [cn]�Ƿ��������� */
    TUP_BOOL auto_invite;               /**< [en]Indicates auto invite. [cn]�Ƿ�Ϊ�Զ����� */
    TUP_BOOL allow_video_control;       /**< [en]Indicates whether allow video control. [cn]�Ƿ�������Ƶ���� */
    CONFCTRL_E_TIMEZONE timezone;                 /**< [en]Indicates time zone. [cn]ʱ�� */
    CONFCTRL_E_REMINDER_TYPE reminder;            /**< [en]Indicates conference reminder type. [cn]�������ѷ�ʽ */
    CONFCTRL_E_LANGUAGE language;                 /**< [en]Indicates conference default language. [cn]�����Ĭ������  */
    CONFCTRL_E_ENCRYPT_MODE conf_encrypt_mode;    /**< [en]Indicates conference media encrypt mode. [cn]����ý�����ģʽ  */
    CONFCTRL_E_USER_TYPE user_type;               /**< [en]Indicates  conference creator user type. [cn]Ԥ���ߵ��û�����  */

    TUP_UINT32 num_of_attendee;                 /**< [en]Indicates attendee number. [cn]����߸��� */
    CONFCTRL_S_ATTENDEE_MEDIAX* attendee;       /**< [en]Indicates attendee info. [cn]�������Ϣ */

    CONFCTRL_S_CYCLE_PARAM* cycle_params;               /**< [en]Indicates cycle conference param. [cn]������ѡ�����ڻ���Ĳ��� */
    CONFCTRL_S_ASSISTANT_MEDIA* assistant_media_params; /**< [en]Indicates aux data param, this param is valid to video conf. [cn]��ѡ�������������ò�������Ƶ������Ч */
} CONFCTRL_S_BOOK_CONF_INFO_MEDIAX;


/** 
 * [en]This struct is used to describe result of creating conference<br>
 * [cn]��������Ϣ
 */
typedef struct tagCONFCTRL_S_CREATE_CONF_RESULT
{
    CONFCTRL_E_CONF_ROLE conf_role;                      /**< [en]Indicates conference role. [cn]�����ɫ  */
    TUP_CHAR conf_id[CONFCTRL_D_MAX_CONF_ID_LEN];        /**< [en]Indicates conference id. [cn]����id */
    TUP_CHAR password[CONFCTRL_D_MAX_PASSWORD_LEN];      /**< [en]Indicates conference password. [cn]�������� */
    TUP_UINT32 media_type;                               /**< [en]Indicates media type, value refer to CONFCTRL_E_CONF_MEDIATYPE_FLAG, can do "|" operate. [cn]ý�����ͣ�ȡֵ�ο�CONFCTRL_E_CONF_MEDIATYPE_FLAG���ɽ���"|"���� */
} CCONFCTRL_S_CREATE_CONF_RESULT;

/** 
 * [en]This struct is used to describe result of schedule conference<br>
 * [cn]ԤԼ��������Ϣ
 */
typedef struct tagCONFCTRL_S_CONF_LIST_INFO
{
    TUP_UINT32 size;                                         /**< [en]Indicates conference size. [cn]���鷽�� */
    TUP_CHAR conf_id[CONFCTRL_D_MAX_CONF_ID_LEN];            /**< [en]Indicates conference id. [cn]����id */
    TUP_CHAR cycle_conf_id[CONFCTRL_D_MAX_CONF_ID_LEN];      /**< [en]Indicates cycle conference id. [cn]���ڻ���id */
    TUP_CHAR conf_subject[CONFCTRL_D_MAX_SUBJECT_LEN];       /**< [en]Indicates conference subject. [cn]�������� */
    TUP_CHAR access_number[CONFCTRL_D_MAX_ACCESS_NUM_LEN];   /**< [en]Indicates conference access number. [cn]��������� */
    TUP_CHAR chairman_pwd[CONFCTRL_D_MAX_PASSWORD_LEN];      /**< [en]Indicates chairman password. [cn]��ϯ���� */
    TUP_CHAR general_pwd[CONFCTRL_D_MAX_PASSWORD_LEN];       /**< [en]Indicates general password. [cn]�������� */

    TUP_CHAR start_time[CONFCTRL_D_MAX_TIME_FORMATE_LEN];    /**< [en]Indicates conference start time. [cn]���鿪ʼʱ�� */
    TUP_CHAR end_time[CONFCTRL_D_MAX_TIME_FORMATE_LEN];      /**< [en]Indicates conference end time. [cn]�������ʱ�� */

    TUP_UINT32 media_type;                                   /**< [en]Indicates media type, value refer to CONFCTRL_E_CONF_MEDIATYPE_FLAG, can do "|" operate. [cn]ý�����ͣ�ȡֵ�ο�CONFCTRL_E_CONF_MEDIATYPE_FLAG���ɽ���"|"���� */
    CONFCTRL_E_CONF_STATE conf_state;                        /**< [en]Indicates conference state. [cn]����״̬  */

    TUP_CHAR scheduser_number[CONFCTRL_D_MAX_NUMBER_LEN];    /**< [en]Indicates scheduser number. [cn]Ԥ�����˺� */
    TUP_CHAR scheduser_name[CONFCTRL_D_MAX_NAME_LEN];        /**< [en]Indicates scheduser name. [cn]Ԥ�������� */
} CONFCTRL_S_CONF_LIST_INFO;

/** 
 * [en]This struct is used to describe query conference result info<br>
 * [cn]��ѯ��������Ϣ
 */
typedef struct tagCONFCTRL_S_GET_CONF_INFO_RESULT
{
    CONFCTRL_S_CONF_LIST_INFO conf_list_info; /**< [en]Indicates conference info. [cn]������Ϣ */
    
    TUP_UINT32 num_of_addendee;               /**< [en]Indicates attendee number. [cn]��������� */
    CONFCTRL_S_ATTENDEE* attendee;            /**< [en]Indicates attendee. [cn]����� */
} CONFCTRL_S_GET_CONF_INFO_RESULT;

/** 
 * [en]This struct is used to describe conference incoming call info<br>
 * [cn]����������Ϣ
 */
typedef struct tagCONFCTRL_S_CONF_INCOMING_INFO
{
    TUP_UINT32 media_type;                            /**< [en]Indicates  media type, value refer to CONFCTRL_E_CONF_MEDIATYPE_FLAG, can do "|" operate. [cn]ý�����ͣ�ȡֵ�ο�CONFCTRL_E_CONF_MEDIATYPE_FLAG���ɽ���"|"���� */
    TUP_CHAR number[CONFCTRL_D_MAX_NUMBER_LEN];       /**< [en]Indicates incoming number. [cn]������� */
    TUP_CHAR subject[CONFCTRL_D_MAX_SUBJECT_LEN];     /**< [en]Indicates conference subject. [cn]�������� */
    TUP_CHAR group_uri[CONFCTRL_D_MAX_GROUP_URI_LEN]; /**< [en]Indicates group uri. [cn]Ⱥ��uri */
    TUP_CHAR conf_id[CONFCTRL_D_MAX_CONF_ID_LEN];     /**< [en]Indicates conference id. [cn]����id */
} CONFCTRL_S_CONF_INCOMING_INFO;

/** 
 * [en]This struct is used to describe conference connect call info<br>
 * [cn]�����ͨ��Ϣ
 */
typedef struct tagCONFCTRL_S_CONF_CONNECT_INFO
{
    TUP_UINT32             media_type;                              /**< [en]Indicates  media type, value refer to CONFCTRL_E_CONF_MEDIATYPE_FLAG, can do "|" operate. [cn]ý�����ͣ�ȡֵ�ο�CONFCTRL_E_CONF_MEDIATYPE_FLAG���ɽ���"|"���� */
    TUP_BOOL               is_svc_conf;                             /**< [en]Indicates whether the svc call sign. [cn]�Ƿ���������־��  */                   
    TUP_INT8               svc_lable_count;                         /**< [en]Indicates the number of svc lable. [cn]����Lable��Ч������*/      
    TUP_UINT32             svc_lable[CONFCTRL_D_MAX_SVC_NUM] ;      /**< [en]Indicates the info of svc lable, at most have 7 windows. [cn]����Lable��Ӧ��ssrcֵ(sdpЭ�̳�����)�������7������ */
} CONFCTRL_S_CONF_CONNECTINFO;

/** 
 * [en]This struct is used to describe conference info<br>
 * [cn]������Ϣ
 */
typedef struct tagCONFCTRL_S_CONF_INFO
{
    TUP_UINT32 media_type;                              /**< [en]Indicates  media type, value refer to CONFCTRL_E_CONF_MEDIATYPE_FLAG, can do "|" operate. [cn]ý�����ͣ�ȡֵ�ο�CONFCTRL_E_CONF_MEDIATYPE_FLAG���ɽ���"|"����  */
    TUP_CHAR group_uri[CONFCTRL_D_MAX_GROUP_URI_LEN];   /**< [en]Indicates group uri. [cn]Ⱥ��uri */
    TUP_CHAR subject[CONFCTRL_D_MAX_SUBJECT_LEN];       /**< [en]Indicates conference subject. [cn]�������� */
    TUP_CHAR conf_id[CONFCTRL_D_MAX_CONF_ID_LEN];       /**< [en]Indicates conference id. [cn]����id */
    TUP_CHAR conf_uri[CONFCTRL_D_MAX_URL_LEN];          /**< [en]Indicates conference resource only flag. [cn]������ԴΨһ��ʶ */
    TUP_CHAR dateconf_uri[CONFCTRL_D_MAX_URL_LEN];      /**< [en]Indicates data conference param getting YRL. [cn]���ݻ���������ȡURL */
    TUP_CHAR data_random[CONFCTRL_D_MAX_RANDOM_LEN];    /**< [en]Indicates random number of conference param. [cn]��ȡ��������������� */
    TUP_CHAR password[CONFCTRL_D_MAX_PASSWORD_LEN];     /**< [en]Indicates conference password. [cn]�������� */
    TUP_BOOL   is_svc_conf;                             /**< [en]Indicates whether the svc call sign. [cn]�Ƿ���������־��  */                   
    TUP_INT8   svc_lable_count;                         /**< [en]Indicates the number of svc lable. [cn]����Lable��Ч������*/      
    TUP_UINT32 svc_lable[CONFCTRL_D_MAX_SVC_NUM] ;      /**< [en]Indicates the info of svc lable, at most have 7 windows. [cn]����Lable��Ӧ��ssrcֵ(sdpЭ�̳�����)�������7������ */
} CONFCTRL_S_CONF_INFO;

/** 
 * [en]This struct is used to describe speaker info<br>
 * [cn]���Է���Ϣ
 */
typedef struct tagCONFCTRL_S_SPEAKER
{
    TUP_CHAR   number[CONFCTRL_D_MAX_NUMBER_LEN]; /**< [en]Indicates number. [cn]���� */
    TUP_BOOL   is_speaking;                       /**< [en]Indicates whether is speaking. [cn]�Ƿ��� */
    TUP_UINT32 speaking_volume;                   /**< [en]Indicates speaking volume. [cn]���� */
} CONFCTRL_S_SPEAKER;


/** 
 * [en]This struct is used to describe speaker info<br>
 * [cn]���Է�֪ͨ
 */
typedef struct tagCONFCTRL_S_FLOOR_ATTENDEE_INFO
{
    TUP_UINT32 num_of_speaker;                             /**< [en]Indicates speaker number. [cn]���Է����� */
    CONFCTRL_S_SPEAKER speakers[CONFCTRL_D_MAX_FLOOR_NUM]; /**< [en]Indicates speakers. [cn]���Է� */
} CONFCTRL_S_FLOOR_ATTENDEE_INFO;

/** 
 * [en]This struct is used to describe conference status<br>
 * [cn]����״̬
 */
typedef struct tagCONFCTRL_S_CONF_STATUS
{
    TUP_UINT32 size;             /**< [en]Indicates site attendee count. [cn]�᳡��Ա���� */
    TUP_BOOL record_status;      /**< [en]Indicates record status. [cn]�᳡�Ƿ�Ϊ¼*��״̬ */
    TUP_BOOL lock_state;         /**< [en]Indicates site lock state. [cn]�᳡�Ƿ�Ϊ����״̬ */
    TUP_BOOL is_all_mute;        /**< [en]Indicates site mute state. [cn]�᳡�Ƿ�Ϊ����״̬ */
    TUP_CHAR conf_id[CONFCTRL_D_MAX_CONF_ID_LEN]; /**< [en]Indicates conference id. [cn]����id */
    TUP_CHAR createor[CONFCTRL_D_MAX_NAME_LEN]; /**< [en]Indicates site creator. [cn]����Ԥ���� */
    TUP_CHAR subject[CONFCTRL_D_MAX_SUBJECT_LEN]; /**< [en]Indicates conference subject. [cn]�������� */
    TUP_UINT32 media_type;                        /**< [en]Indicates media type, value refer to CONFCTRL_E_CONF_MEDIATYPE_FLAG, can do "|" operate. [cn]ý�����ͣ�ȡֵ�ο�CONFCTRL_E_CONF_MEDIATYPE_FLAG���ɽ���"|"���� */
    CONFCTRL_E_CONF_STATE conf_state;             /**< [en]Indicates conference state. [cn]����״̬ */
     
    CONFCTRL_E_PARTICIPANT_UPDATE_TYPE update_type; /**< [en]Indicates participant update type. [cn]��Ա���·�ʽ */
    TUP_UINT32 num_of_participant;                  /**< [en]Indicates update participant number. [cn]���³�Ա���� */
    CONFCTRL_S_PARTICIPANT* participants;           /**< [en]Indicates site participant. [cn]�᳡��Ա */
} CONFCTRL_S_CONF_STATUS;

/** 
 * [en]This struct is used to describe query conference info<br>
 * [cn]��ѯ������Ϣ
 */
typedef struct tagCONFCTRL_S_GET_CONF_INFO
{
    TUP_CHAR conf_id[CONFCTRL_D_MAX_CONF_ID_LEN]; /**< [en]Indicates conference id. [cn]����id */
    TUP_UINT32 page_index;                        /**< [en]Indicates specify the page index for the returned attendee list. This value must be greater than 0. [cn]ָ�����ص�������б��ҳ����������ֵ�������0 */
    TUP_UINT32 page_size;                         /**< [en]Indicates return attendee record info. [cn]��������ߵļ�¼�� */
} CONFCTRL_S_GET_CONF_INFO;

/** 
 * [en]This struct is used to describe conference list info <br>
 * [cn]��ѯ�����б���Ϣ
 */
typedef struct tagCONFCTRL_S_GET_CONF_LIST
{
    TUP_CHAR account_id[CONFCTRL_D_MAX_NAME_LEN]; /**< [en]Indicates wait for query account id. [cn]����ѯ���û��˺ţ�������Ա��Ч��UC�˺Ž��ܲ�ѯ�Լ��� */
    TUP_CHAR conf_id[CONFCTRL_D_MAX_CONF_ID_LEN]; /**< [en]Indicates conference id. [cn]����ID */
    TUP_CHAR subject[CONFCTRL_D_MAX_SUBJECT_LEN]; /**< [en]Indicates conference subject. [cn]�������� */
    CONFCTRL_E_CONFRIGHT conf_right;  /**< [en]Indicates conference right. [cn]����Ȩ�� */
    TUP_BOOL include_end;             /**< [en]Indicates whether contain ended conference. [cn]�Ƿ�����ѽ����Ļ��� */
    TUP_UINT32 page_index;            /**< [en]Indicates return appoint page index, this value must more than 0. [cn]ָ�����ص�ҳ����������ֵ�������0 */
    TUP_UINT32 page_size;             /**< [en]Indicates appoint returned page size. [cn]ָ��ÿҳ���صļ�¼�� */
} CONFCTRL_S_GET_CONF_LIST;

/**
* [en]This struct is used to describe conference list info (Host VC meeting)<br>
* [cn]��ѯ�����б���Ϣ(Host VC ����)
*/
typedef struct tagCONFCTRL_S_GET_CONF_LIST_MEDIAX
{
    TUP_UINT32 page_index;              /**< [en]Indicates return appoint page index, this value must more than 0. [cn]ָ�����ص�ҳ����������ֵ�������0 */
    TUP_UINT32 page_size;               /**< [en]Indicates appoint returned page size. [cn]ָ��ÿҳ���صļ�¼�� */
    CONFCTRL_E_CONFRIGHT conf_right;    /**< [en]Indicates conference right. [cn]����Ȩ�� */
} CONFCTRL_S_GET_CONF_LIST_MEDIAX;

/** 
 * [en]This struct is used to describe acquired VMR list<br>
 * [cn]��ȡvmr�б�
 */
typedef struct tagCONFCTRL_S_GET_VMR_LIST
{
    TUP_BOOL is_ascend;     /**< [en]Indicates whether result is ascend. [cn]����Ƿ�Ϊ���� */
    TUP_UINT32 page_index;  /**< [en]Indicates appoint returned page index, this value must more than 0. [cn]ָ�����ص�ҳ����������ֵ�������0 */
    TUP_UINT32 page_size;   /**< [en]Indicates appoint returned page size. [cn]ָ�����صļ�¼�� */
} CONFCTRL_S_GET_VMR_LIST;

/** 
 * [en]This struct is used to describe VMR info<br>
 * [cn]VMR��Ϣ
 */
typedef struct tagCONFCTRL_S_VMR_INFO
{
    TUP_CHAR name[CONFCTRL_D_MAX_NAME_LEN];                /**< [en]Indicates VMR name. [cn]VMR���� */
    TUP_CHAR access_number[CONFCTRL_D_MAX_ACCESS_NUM_LEN]; /**< [en]Indicates access number. [cn]VMR����� */
    TUP_CHAR conf_id[CONFCTRL_D_MAX_CONF_ID_LEN];          /**< [en]Indicates VMR conference id. [cn]VMR����ID */
    TUP_CHAR chairman_pwd[CONFCTRL_D_MAX_PASSWORD_LEN];    /**< [en]Indicates VMR chairman password. [cn]VMR��ϯ���� */
    TUP_CHAR guest_pwd[CONFCTRL_D_MAX_PASSWORD_LEN];       /**< [en]Indicates VMR guest password. [cn]VMR�������� */
    TUP_CHAR chairman_url[CONFCTRL_D_MAX_URL_LEN];         /**< [en]Indicates chairman join conference URL. [cn]��ϯ���URL */
    TUP_CHAR guest_url[CONFCTRL_D_MAX_URL_LEN];               /**< [en]Indicates guest URL. [cn]�������URL */
    TUP_UINT32 max_parties;                                 /**< [en]Indicates the maximum parties. [cn]VMR�����᷽�� */
    TUP_CHAR owner[CONFCTRL_D_MAX_NUMBER_LEN];               /**< [en]Indicates VMR owner. [cn]VMR owner */
    TUP_CHAR description[CONFCTRL_D_MAX_DESCRIPTION_LEN];  /**< [en]Indicates VMR description. [cn]VMR ���� */
    TUP_BOOL without_host_enable;                            /**< [en]Indicates whether enable guest join conference before without host. [cn]��ϯ���ǰ�Ƿ�����������Ὺʼ���� */
} CONFCTRL_S_VMR_INFO;

/** 
 * [en]This struct is used to describe VMR list<br>
 * [cn]VMR�б� 
 */
typedef struct tagCONFCTRL_S_VMR_LIST
{ 
    TUP_UINT32 vmr_num;                                     /**< [en]Indicates VMR number. [cn]VMR���� */
    CONFCTRL_S_VMR_INFO vmr_info[CONFCTRL_D_MAX_VMR_NUM];   /**< [en]Indicates VMR info. [cn]VMR��Ϣ */
} CONFCTRL_S_VMR_LIST;

/** 
 * [en]This struct is used to describe watch svc attendees parameter information<br>
 * [cn]�ۿ�svc����߻��������Ϣ.
 */
typedef struct tagCONFCTRL_S_SVC_ATTENDEE_INFO
{
    CONFCTRL_S_ATTENDEE_VC attendee;    /**< [en]Indicates identify number of TE attendee.[cn]TE�����ʶ��š�*/
    TUP_UINT32 lable_id;                /**< [en]Indicates the ssrc of stream.[cn]��Ӧ��ssrcֵ */
}CONFCTRL_S_SVC_ATTENDEE_INFO;


/** 
 * [en]This struct is used to describe watch svc attendees information list<br>
 * [cn]�ۿ�svc����߻��������Ϣ�б�.
 */
typedef struct tagCONFCTRL_S_WATCH_SVC_ATTENDEES
{
    TUP_UINT32                      count;                                              /**< [en]Indicates watch svc attendees number. [cn]�ۿ�svc����߻������� */
    CONFCTRL_S_SVC_ATTENDEE_INFO    attendees_info[CONFCTRL_D_MAX_SVC_NUM];   /**< [en]Indicates watch svc attendees info. [cn]�ۿ�svc����߻�����Ϣ */   
}CONFCTRL_S_WATCH_SVC_ATTENDEES;

/** 
 * [en]This struct is used to describe watch svc attendees parameter information(Uportal)<br>
 * [cn]�ۿ�svc����߻��������Ϣ(Uportal).
 */
typedef struct tagCONFCTRL_S_SVC_ATTENDEE_UPORTAL
{
    TUP_CHAR   attendee[CONFCTRL_D_MAX_NUMBER_LEN];    /**< [en]Indicates identify number of UC attendee.[cn]UC�����ʶ��� */
    TUP_UINT32 lable_id;                                  /**< [en]Indicates the ssrc of stream.[cn]��Ӧ��ssrcֵ */
}CONFCTRL_S_SVC_ATTENDEE_UPORTAL;

/** 
 * [en]This struct is used to describe watch svc attendees information list(Uportal)<br>
 * [cn]�ۿ�svc����߻��������Ϣ�б�(Uportal).
 */ 
typedef struct tagCONFCTRL_S_WATCH_SVC_ATTENDEES_UPORTAL
{
    TUP_CHAR                         user_num[CONFCTRL_D_MAX_NUMBER_LEN];                /**< [en]Indicates identify number of UC attendee for watcher.[cn]UC�ۿ��������ʶ��� */
    TUP_UINT32                       count;                                    /**< [en]Indicates watch svc attendees number. [cn]�ۿ�svc����߻������� */
    CONFCTRL_S_SVC_ATTENDEE_UPORTAL  attendees_info[CONFCTRL_D_MAX_SVC_NUM];   /**< [en]Indicates watch svc attendees info. [cn]�ۿ�svc����߻�����Ϣ */   
}CONFCTRL_S_WATCH_SVC_ATTENDEES_UPORTAL;

/** 
 * [en]This struct is used to describe svc sites info report for On-premise VC meeting <br>
 * [cn]��ǰ������봰��lable֮����Ϣ,ֻ��On-premise VC����֧���ϱ�
 */
typedef struct tagCONFCTRL_S_SVC_REPORT
{
    CONFCTRL_S_ATTENDEE_VC te_attendees;   /**< [en]Indicates identify number of TE attendee.[cn]TE�����ʶ��� */
    TUP_UINT32    lable_id;       /**< [en]Indicates the ssrc of stream.[cn]��Ӧ��ssrcֵ */
} CONFCTRL_S_SVC_REPORT;

/**
 * [en]This struct is used to describe call attendee result info.
 * [cn]��������߽��֪ͨ
 */
typedef struct tagCONFCTRL_S_ADD_ATTENDEE_RESULT
{
    TUP_CHAR    number[TE_ATTENDEE_MAX_NUM_LEN + 1];       /**< [en]Indicates attendee number. [cn]����ߺ��� */
    TUP_UINT32  result;                                    /**< [en]Indicates operate result, 0:success, 1:fail. [cn]�������ȡֵ:0�ɹ�,1ʧ��*/
    TUP_UINT32  reason;                                    /**< [en]Indicates fail reason. [cn]ʧ��ԭ�� */
} CONFCTRL_S_ADD_ATTENDEE_RESULT;

#ifdef __cplusplus
#if __cplusplus
}
#endif /*  __cpluscplus */
#endif /*  __cpluscplus */

#endif  /* __CONFCTRL_DEF_H__ */
