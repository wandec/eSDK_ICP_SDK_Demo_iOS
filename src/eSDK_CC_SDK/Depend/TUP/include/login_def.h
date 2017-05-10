/** 
 * @file login_def.h
 * 
 * Copyright(C), 2012-2015, Huawei Tech. Co., Ltd. ALL RIGHTS RESERVED. \n
 *
 * @brief [en]Description: The header file of the TUP unified authentication and login component function struct definitioin
 *        [cn]������TUP ͳһ��Ȩ���¼������ܽṹ����ͷ�ļ��� \n
 * 
 */


#ifndef __LOGIN_DEF_H__
#define __LOGIN_DEF_H__

#include "tup_def.h"

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif /*  __cpluscplus */
#endif /*  __cpluscplus */


#define LOGIN_D_MAX_USERNAME_LEN        (128)       /**< [en]Indicates the maximum length of the login username 
                                                         <br>[cn]��¼�û�����󳤶�*/
#define LOGIN_D_MAX_PASSWORD_LEN        (256)       /**< [en]Indicates the maximum length of the login password
                                                         <br>[cn]��¼������󳤶�*/
#define LOGIN_D_MAX_SERVICE_LEN         (128)       /**< [en]Indicates the maximum length of the login server address
                                                         <br>[cn]��¼��������ַ��󳤶�*/
#define LOGIN_D_MAX_SESSIONID_LEN       (128)       /**< [en]Indicates the maximum length of the login SESSIONID
                                                         <br>[cn]��¼SESSIONID��󳤶�*/
#define LOGIN_D_MAX_HTTPURL_LEN         (256)       /**< [en]Indicates the maximum length of the login HTTP URL
                                                         <br>[cn]��¼HTTP URL��󳤶�*/
#define LOGIN_D_MAX_AUTHCODE_LEN        (512)       /**< [en]Indicates the maximum length of the login authentication code
                                                         <br>[cn]��¼��Ȩ����󳤶�*/
#define LOGIN_D_MAX_CA_PATH_LEN         (512)       /**< [en]Indicates the maximum length of the CA path
                                                         <br>[cn]CA֤��·����󳤶� */

#define LOGIN_D_MAX_URL_LENGTH                          (256)       /**< [en]Indicates the maximum length of the common URL.
                                                                             <br>[cn]ͨ��URL��󳤶� */
#define LOGIN_D_IP_LENGTH                               (16)        /**< [en]Indicates the maximum byte length of the Ipv6.
                                                                             <br>[cn]ipv6�ֽڳ��� */
#define LOGIN_D_MAX_ACCOUNT_LEN                         (128)       /**< [en]Indicates the maximum length of the account.
                                                                             <br>[cn]����˺ų��� */
#define LOGIN_D_MAX_PASSWORD_LENGTH                     (128)       /**< [en]Indicates the maximum length of the password.
                                                                             <br>[cn]������볤�� */
#define LOGIN_D_MAX_USERNUMBER_LENGTH                   (256)       /**< [en]Indicates the maximum length of the user number.
                                                                             <br>[cn]�����볤�� */
#define LOGIN_D_MAX_VIDEXIO_SIP_URL_LEN                 (128)       /**< [en]Indicates the maximum byte length of the SIP url.
                                                                             <br>[cn]���SIP url�ֽڳ��� */
#define LOGIN_D_MAX_VIDEXIO_SIP_DISPLAY_NAME_LEN        (128)       /**< [en]Indicates the maximum byte length of the SIP terminal name.
                                                                             <br>[cn]���SIP�ն������ֽڳ��� */
#define LOGIN_D_MAX_VIDEXIO_ACCOUNT_LEN                 (128)       /**< [en]Indicates the maximum length of the account
                                                                             <br>[cn]����˺ų��� */
#define LOGIN_D_MAX_VIDEXIO_PASSWORD_LENGTH             (128)       /**< [en]Indicates the maximum length of the password.
                                                                             <br>[cn]������볤�� */
#define LOGIN_D_MAX_DN_LEN                              (128)       /**< [en]Indicates the maximum length of the domain name.
                                                                             <br>[cn]���DN���� */
#define LOGIN_D_MAX_PATH_LEN                            (256)       /**< [en]Indicates the maximum length of the path.
                                                                             <br>[cn]���·������ */
#define LOGIN_D_MAX_SN_LEN                              (128)       /**< [en]Indicates the maximum length of the SN.
                                                                             <br>[cn]���SN���� */
#define LOGIN_D_MAX_SOFTWARE_VER_LEN                    (128)       /**< [en]Indicates the maximum length of the software version.
                                                                             <br>[cn]�������汾���� */
#define LOGIN_D_MAX_PRODUCT_NAME_LEN                    (256)       /**< [en]Indicates the maximum length of the product name.
                                                                             <br>[cn]����Ʒ���Ƴ��� */
#define LOGIN_D_MAX_SYSTEM_NAME_LEN                     (192)       /**< [en]Indicates the maximum length of the system name.
                                                                             <br>[cn]���ϵͳ���Ƴ��� */
#define LOGIN_D_MAC_LEN                                 (32)        /**< [en]Indicates the maximum length of the MAC address.
                                                                             <br>[cn]MAC��ַ���� */
#define LOGIN_D_MAX_USERAGENT_LEN                       (256)       /**< [en]Indicates the length of the UserAgent.
                                                                             <br>[cn]UserAgent���� */
#define LOGIN_D_MAX_TIKET_LEN                           (256)       /**< [en]Indicates the Tiket length.
                                                                             <br>[cn]Tiket���� */
#define LOGIN_D_MAX_TOKEN_LEN                           (256)       /**< [en]Indicates the length of the Token.
                                                                             <br>[cn]Token���� */
#define LOGIN_D_MAX_MEDIATYPE_LEN                       (256)       /**< [en]Indicates the MediaType type length.
                                                                             <br>[cn]MediaType���ͳ��� */    
#define LOGIN_D_MAX_NAME                                (256)       /**< [en]Indicates the maximum length of the name.
                                                                             <br>[cn]���name���� */
#define LOGIN_D_MAX_EUA_NUM                              18         /**< [en]Indicates the maximum number of EUA.
                                                                             <br>[cn]EUA������ */
#define LOGIN_D_MAX_USERNAME_LENGTH                      (256)      /**< [en]Indicates the maximum length of the username.
                                                                             <br>[cn]����û������� */
#define LOGIN_D_MAX_DOMAIN_LENGTH                        (256)      /**< [en]Indicates the maximum length of domain.
                                                                             <br>[cn]����������� */


/**
 * [en]This enumeration is used to describe the log level.
 * [cn]��־����
 */
typedef enum tagLOGIN_E_LOG_LEVEL
{
    LOGIN_E_LOG_ERROR = 0,            /**<[en]Indicates error level.
                                      <br>[cn]���󼶱� */
    LOGIN_E_LOG_WARNING,              /**<[en]Indicates warning level.
                                      <br>[cn]���漶�� */     
    LOGIN_E_LOG_INFO,                 /**<[en]Indicates log level.
                                      <br>[cn]��־���� */      
    LOGIN_E_LOG_DEBUG                 /**<[en]Indicates debug level.
                                      <br>[cn]���Լ��� */      
}LOGIN_E_LOG_LEVEL;


/** 
 * [en]This enumeration is used to describe ID definition of login authentication event.
 * [cn]��¼��Ȩ�¼�ID����
 */
typedef enum tagLOGIN_E_EVENT
{
    LOGIN_E_EVT_BEGIN = 0x8f<<24,

    LOGIN_E_EVT_PASSWORD_CHANGEED_RESULT,   /**< [en]Indicates the password modification result
                                                 <br>[cn]�����޸Ľ��
                                                 <br>param1��TUP_UINT32 result [en]Indicates the password modification result.Reference value:tagLOGIN_E_ERR_ID [cn]�����޸Ľ��, ȡֵ�ο�:tagLOGIN_E_ERR_ID
                                                 <br>param2��None
                                                 <br>data��  None  */
                                                                
    LOGIN_E_EVT_GET_LICENSE_TYPE_RESULT,    /**< [en]Indicates that the license type response is obtained
                                                 <br>[cn]��ȡlicense���ͽ��
                                                 <br>param1��TUP_UINT32 result [en]Indicates result.Reference value: tagLOGIN_E_ERR_ID[cn]���, ȡֵ�ο�:tagLOGIN_E_ERR_ID
                                                 <br>param2��LOGIN_E_LICENSE_TYPE license_type [en]Indicates license type.Reference value:LOGIN_E_LICENSE_TYPE [cn]��ȡlicense���ͽ�� ȡֵ�ο�:LOGIN_E_LICENSE_TYPE
                                                 <br>data��  None  */    
                                                                
    LOGIN_E_EVT_APPLY_LICENSE_RESULT,       /**< [en]Indicates license application result.
                                                 <br>[cn]����license���
                                                 <br>param1��TUP_UINT32 result [en]Indicates result.Reference value:tagLOGIN_E_ERR_ID [cn]���, ȡֵ�ο�: tagLOGIN_E_ERR_ID
                                                 <br>param2��None
                                                 <br>data��  None  */ 
                                                                
    LOGIN_E_EVT_REFRESH_LICENSE_FAILED,     /**< [en]Indicates refresh license failed.
                                                 <br>[cn]����licenseʧ��
                                                 <br>param1��None
                                                 <br>param2��None
                                                 <br>data��  None */   
                                                                
    LOGIN_E_EVT_RELEASE_LICENSE_RESULT,     /**< [en]Indicates release license response.
                                                 <br>[cn]�ͷ�license��Ӧ
                                                 <br>param1��TUP_UINT32 result [en]Indicates the release of license results. Reference value: tagLOGIN_E_ERR_ID [cn]�ͷ�license��� ȡֵ�ο�:tagLOGIN_E_ERR_ID
                                                 <br>param2��None
                                                 <br>data��  None  */   

    LOGIN_E_EVT_ACTIVE_RES,                 /**< [en]Indicates report VidexIO platform activation results.
                                                 <br>[cn]VidexIOƽ̨�������ϱ�
                                                 <br>param1��TUP_UINT32 result [en]Indicates result.Reference value: tagLOGIN_E_ERR_ID[cn]���, ȡֵ�ο�:tagLOGIN_E_ERR_ID
                                                 <br>param2��None
                                                 <br>data��  LOGIN_S_IPADDR_S_ACTIVE_RESULT* active_result [en]Indicates the VidexIO platform activation result. [cn]VidexIOƽ̨������ */ 

    LOGIN_E_EVT_CONFIG_QUERY_RES,           /**< [en]Indicates report VidexIO platform configuration query results.
                                                 <br>[cn]VidexIOƽ̨���ò�ѯ����ϱ�
                                                 <br>param1��None
                                                 <br>param2��None
                                                 <br>data��  LOGIN_S_CONFIG_QUERY_RES* result [en]Indicates the VidexIO platform configure the query results.[cn]VidexIOƽ̨���ò�ѯ��� */

    LOGIN_E_EVT_SEARCH_SERVER_RESULT,       /**< [en]Indicates the probe server results.
                                                 <br>[cn]̽����������
                                                 <br>param1��TUP_UINT32 result [en]Indicates the probe server results.Reference value: tagLOGIN_E_ERR_ID[cn]̽���������� ȡֵ�ο���tagLOGIN_E_ERR_ID
                                                 <br>param2��None
                                                 <br>data��  None */

    LOGIN_E_EVT_AUTHORIZE_RESULT,           /**< [en]Indicates the mediax authentication login result.
                                                 <br>[cn]SP&IMS Hosted VC��Ȩ��¼���(MediaX)
                                                 <br>param1��TUP_UINT32 result [en]Indicates result. Reference value: tagLOGIN_E_ERR_ID[cn]��� ȡֵ�ο���tagLOGIN_E_ERR_ID
                                                 <br>param2��TUP_UINT32 ulUserId [en]Indicates the user ID. [cn]�û�ID
                                                 <br>data��  LOGIN_S_AUTHORIZE_RESULT* auth_result [en]Indicates the mediax authentication login result.[cn] mediax��Ȩ��¼���  */

    LOGIN_E_EVT_UPORTAL_AUTHORIZE_RESULT,   /**< [en]Indicates the uportal authentication login result.
                                                 <br>[cn]uportal��Ȩ��¼���
                                                 <br>param1��TUP_UINT32 result [en]Indicates result. Reference value: tagLOGIN_E_ERR_ID[cn]��� ȡֵ�ο���tagLOGIN_E_ERR_ID
                                                 <br>param2��TUP_UINT32 user_id [en]Indicates the user ID. [cn]�û�ID
                                                 <br>data��  LOGIN_S_UPORTAL_AUTHORIZE_RESULT* result [en]Indicates Reference the uportal authentication login result.[cn] uportal��Ȩ��¼���   */

    LOGIN_E_EVT_REFRESH_TOKEN_RESULT,       /**< [en]Indicates the token refresh results (both forced and timed refresh).
                                                 <br>[cn]Tokenˢ�½����ǿ��ˢ�ºͶ�ʱˢ�¶��ϱ�����¼���
                                                 <br>param1��TUP_UINT32 result [en]Indicates result. Reference value: tagLOGIN_E_ERR_ID[cn]��� ȡֵ�ο���tagLOGIN_E_ERR_ID
                                                 <br>param2��None
                                                 <br>data��  LOGIN_S_REFRESH_TOKEN_RESULT* token [en]Indicates the token refresh results.[cn]Tokenˢ�½��*/

    LOGIN_E_EVT_GET_NONCE_RESULT,           /**< [en]Indicates to get the personal nonce result
                                                 <br>[cn]��ȡ����nonce���
                                                 <br>param1��TUP_UINT32 result [en]Indicates result. Reference value: tagLOGIN_E_ERR_ID[cn]��� ȡֵ�ο���tagLOGIN_E_ERR_ID
                                                 <br>param2��None
                                                 <br>data��  TUP_CHAR * nonce[en]Indicate to get the user nonce result.[cn]��ȡ����nonce���*/
                                                 
    LOGIN_E_EVT_DOWNLOAD_CONFIG_RESULT,     /**< [en]Indicates download configuration file results.
                                                 <br>[cn]���������ļ����         
                                                 <br>param1��TUP_UINT32 result [en]Indicates result. Reference value: tagLOGIN_E_ERR_ID[cn]��� ȡֵ�ο���tagLOGIN_E_ERR_ID
                                                 <br>param2��LOGIN_E_UPORTAL_RETCODE eRetCode [en]Indicates download configuration file results.[cn]���������ļ����
                                                 <br>data��  None */
                                                 
    LOGIN_E_EVT_SMC_AUTHORIZE_RESULT,       /**< [en]Indicates the smc network authentication login result.
                                                 <br>[cn]On-premise VC������Ȩ��¼���(SMC)
                                                 <br>param1��TUP_UINT32 result [en]Indicates result. Reference value: tagLOGIN_E_ERR_ID[cn]��� ȡֵ�ο���tagLOGIN_E_ERR_ID
                                                 <br>param2��TUP_UINT32 user_id [en]Indicates the user id.[cn]�û�ID 
                                                 <br>data��  LOGIN_S_SMC_AUTHORIZE_RESULT* authorizeInfo [en]Indicates the smc networking authentication login result.[cn]smc������Ȩ��¼��� */
                                                 
    LOGIN_E_EVT_FIREWALL_DETECT_RESULT,     /**< [en]Indicates the result of firewall probe.
                                                 <br>[cn]����ǽ̽����
                                                 <br>param1��TUP_UINT32 result [en]Indicates result. Reference value: tagLOGIN_E_ERR_ID[cn]��� ȡֵ�ο���tagLOGIN_E_ERR_ID
                                                 <br>param2��LOGIN_E_FIREWALL_MODE mode[en]Indicates the firewall mode.[cn]����ǽģʽ
                                                 <br>data��  None */
                                                 
    LOGIN_E_EVT_STG_TUNNEL_BUILD_RESULT,    /**< [en]Indicates the result of STG tunnel setup.
                                                 <br>[cn]STG����������
                                                 <br>param1��TUP_UINT32 result [en]Indicates result. Reference value: tagLOGIN_E_ERR_ID[cn]��� ȡֵ�ο���tagLOGIN_E_ERR_ID
                                                 <br>param2��None
                                                 <br>data��  None */
                                                 
    LOGIN_E_EVT_STG_DESTORY_TUNNEL_RESULT,  /**< [en]Indicates the result of STG tunnel destruction.
                                                 <br>[cn]����STG������
                                                 <br>param1��TUP_UINT32 result [en]Indicates result. Reference value: tagLOGIN_E_ERR_ID[cn]��� ȡֵ�ο���tagLOGIN_E_ERR_ID
                                                 <br>param2��None
                                                 <br>data��  None */
                                                 
    LOGIN_E_EVT_UC32_UPORTAL_TOKEN_REFRESH, /**< [en]Indicates UC3.2 Uportal token refresh notification
                                                 <br>[cn]UC3.2����Uportal tokenˢ�½��
                                                 <br>param1��None
                                                 <br>param2��None
                                                 <br>data��LOGIN_S_UPORTAL_TOKEN_REFRESH_INFO*  UC32UportalAuthRst [en]Indicates UC3.2 Uportal token refresh notification. [cn]UC3.2����Uportal tokenˢ�½�� */

    LOGIN_E_EVT_END
} LOGIN_E_EVENT;

/** 
 * [en]This enumeration is used to describe login module error code.
 * [cn]LOGIN ģ�������
 */
typedef enum tagLOGIN_E_ERR_ID
{
    LOGIN_E_ERR_BEGIN = 0,                         /**< [en]Indicates begin error.
                                                        <br>[cn]��ʼ����[MODIFY] */
    LOGIN_E_ERR_GENERAL,                           /**< [en]Indicates general error.
                                                        <br>[cn]һ����� */
    LOGIN_E_ERR_PARAM_ERROR,                       /**< [en]Indicates parameter error.
                                                        <br>[cn]�������� */
    LOGIN_E_ERR_TIMEOUT,                           /**< [en]Indicates timeout.
                                                        <br>[cn]��ʱ */
    LOGIN_E_ERR_MEM_ERROR,                         /**< [en]Indicates allocating memory errors.
                                                        <br>[cn]�����ڴ���� */
    LOGIN_E_ERR_XML_ERROR,                         /**< [en]Indicates XML parsing error.
                                                        <br>[cn]XML�������� */
    LOGIN_E_ERR_PARSE_PTKT_ERROR,                  /**< [en]Indicates that the parse server PTKT package is abnormal.
                                                        <br>[cn]����������PTKT���쳣 */
    LOGIN_E_ERR_DNS_ERROR,                         /**< [en]Indicates DNS resolution exception.
                                                        <br>[cn]DNS�����쳣 */
    LOGIN_E_ERR_REQUEST_FAILED,                    /**< [en]Indicates that the request message is abnormal.
                                                        <br>[cn]������Ϣ�쳣 */
    LOGIN_E_ERR_AUTH_FAILED,                       /**< [en]Indicates authentication failure.
                                                        <br>[cn]��Ȩʧ�� */
    LOGIN_E_ERR_SN_FAILED,                         /**< [en]Indicates that the sn match failed.
                                                        <br>[cn]snƥ��ʧ�� */
    LOGIN_E_ERR_SERVICE_ERROR,                     /**< [en]Indicates a server exception.
                                                        <br>[cn]�������쳣 */
    LOGIN_E_ERR_ACCOUNT_LOCKED,                    /**< [en]Indicates that the account is locked.
                                                        <br>[cn]�˺ű����� */
    LOGIN_E_ERR_TIMER_ERROR,                       /**< [en]Indicates create timer error.
                                                        <br>[cn]������ʱ������ */
    LOGIN_E_ERR_WRONG_SERVERTYPE,                  /**< [en]Indicates wrong server type.
                                                        <br>[cn]����ķ��������� */
    LOGIN_E_ERR_WRONG_SERVERVERSION,               /**< [en]Indicates wrong server version.
                                                        <br>[cn]����ķ������汾 */
    LOGIN_E_ERR_INVALID_URL,                       /**< [en]Indicates invalid URL.
                                                        <br>[cn]��Ч��URL */
    LOGIN_E_ERR_SEARCH_SERVER_FAIL,                /**< [en]Indicates query server address failed.
                                                        <br>[cn]��ѯ��������ַʧ�� */ 
    LOGIN_E_ERR_START_REFRESH_FAIL                 /**< [en]Indicates start Token refresh failed.
                                                        <br>[cn]����Tokenˢ��ʧ�� */ 
}LOGIN_E_ERR_ID;


/**
 * [en]This enumeration is used to describe the protocol type.
 * [cn]Э������
 */
typedef enum tagLOGIN_E_PROTOCOL_TYPE
{
    LOGIN_D_PROTOCOL_TYPE_SIP = 1,          /**< [en]Indicates SIP .
                                                 <br>[cn]SIP */
    LOGIN_D_PROTOCOL_TYPE_H323,             /**< [en]Indicates H323.
                                                 <br>[cn]H323 */
    LOGIN_D_PROTOCOL_TYPE_BUTT    
}LOGIN_E_PROTOCOL_TYPE;


/** 
 * [en]This enumeration is used to describe the mode of firewall.
 * [cn]����ǽģʽ
 */
typedef enum tagLOGIN_E_FIREWALL_MODE
{
    LOGIN_E_FIREWALL_MODE_ONLY_HTTP,     /**< [en]Indicates that only http can pass through the firewall.
                                              <br>[cn]ֻ��http��ͨ������ǽ */
    LOGIN_E_FIREWALL_MODE_HTTP_AND_SVN,  /**< [en]Indicates that only http and svn (udp 443) can pass through the firewall.
                                              <br>[cn]ֻ��http��svn(udp 443)��ͨ������ǽ */
    LOGIN_E_FIREWALL_MODE_NULL           /**< [en]Indicates that there is no firewall.
                                              <br>[cn]�޷���ǽ���� */
} LOGIN_E_FIREWALL_MODE;



/** 
 * [en]This enumeration is used to describe verify mode.
 * [cn]��֤ģʽ
 */
typedef enum tagLOGIN_E_VERIFY_MODE
{
    LOGIN_E_VERIFY_MODE_NONE        = 0,                  /**< [en]Indicates no authentication.
                                                               <br>[cn]����֤ */
    LOGIN_E_VERIFY_MODE_SERVER      = 1                   /**< [en]Indicates  authentication server.
                                                               <br>[cn]��֤����� */
}LOGIN_E_VERIFY_MODE;



/** 
 * [en]This enumeration is used to describe encryption policy types.
 * [cn]���ܲ�������
 */
typedef enum tagLOGIN_E_ENCRYPTION_TYPE
{
    LOGIN_E_ENCRYPTION_REJECTED,                /**< [en]Indicates that encryption is rejected.
                                                     <br>[cn]�ܾ�(��)����*/
    LOGIN_E_ENCRYPTION_REQUIRED,                /**< [en]Indicates forced encryption.
                                                     <br>[cn]ǿ�Ƽ���*/
    LOGIN_E_ENCRYPTION_OPTIONAL,                /**< [en]Indicates optional encryption,maximum interoperability.
                                                     <br>[cn]��ѡ���ܣ������ͨ��*/
    LOGIN_E_ENCRYPTION_BUTT
}LOGIN_E_ENCRYPTION_TYPE;


/** 
 * [en]This enumeration is used to describe send mode.
 * [cn]����ģʽ
 */
typedef enum tagLOGIN_E_TRANSPORTMODE
{
    LOGIN_E_TRANSPORTMODE_UDP,                  /**< [en]Indicates UDP.
                                                     <br>[cn]UDP */
    LOGIN_E_TRANSPORTMODE_TLS,                  /**< [en]Indicates TLS.
                                                     <br>[cn]TLS */
    LOGIN_E_TRANSPORTMODE_TCP,                  /**< [en]Indicates TCP.
                                                     <br>[cn]TCP */
    LOGIN_E_TRANSPORTMODE_DEFAULT,              /**< [en]Indicates default use public transport mode.
                                                     <br>[cn]Ĭ��ʹ�ù��ô��䷽ʽ */
    LOGIN_E_TRANSPORTMODE_SVN,                  /**< [en]Indicates SVN.
                                                     <br>[cn]SVN */
    LOGIN_E_TRANSPORTMODE_BUTT
} LOGIN_E_TRANSPORTMODE;


/** 
 * [en]This enumeration is used to describe registered account password types.
 * [cn]ע���˺���������
 */
typedef enum tagLOGIN_E_AUTH_PASSWORD_TYPE
{
    LOGIN_E_AUTH_PASSWORD_NORMAL = 0, /**< [en]Indicates the general password type.
                                           <br>[cn]��ͨ�������� */
    LOGIN_E_AUTH_PASSWORD_HA1,        /**< [en]Indicates the HA1 password type.
                                           <br>[cn]HA1�������� */
    LOGIN_E_AUTH_PASSWORD_BUTT
} LOGIN_E_AUTH_PASSWORD_TYPE;


/** 
 * [en]This enumeration is used to describe the deployment mode.
 * [cn]����ģʽ
 */
typedef enum tagLOGIN_E_DEPLOY_MODE
{
    LOGIN_E_DEPLOY_ENTERPRISE_IPT, /**< [en]Indicates on-premise PBX.
                                        <br>[cn]��ҵ��פ-IPT */
    LOGIN_E_DEPLOY_ENTERPRISE_CC,  /**< [en]Indicates on-premise Convergent conference.
                                        <br>[cn]��ҵ��פ-�ںϻ��� */
    LOGIN_E_DEPLOY_SPHOSTED_IPT,   /**< [en]Indicates SP hosted-IP T.
                                        <br>[cn]SP Hosted -IPT */
    LOGIN_E_DEPLOY_SPHOSTED_CC,    /**< [en]Indicates SP Hosted - Converged conference.
                                        <br>[cn]SP Hosted -�ںϻ��� */
    LOGIN_E_DEPLOY_SPHOSTED_CONF,  /**< [en]Indicates Hosted - pure conference.
                                        <br>[cn]SP Hosted -������ */
    LOGIN_E_DEPLOY_IMSHOSTED_IPT,  /**< [en]Indicates IMS hosted-IPT.
                                        <br>[cn]IMS Hosted -IPT */
    LOGIN_E_DEPLOY_IMSHOSTED_CC    /**< [en]Indicates IMS Hosted - Converged conference.
                                        <br>[cn]IMS Hosted -�ںϻ��� */
} LOGIN_E_DEPLOY_MODE;


/** 
 * [en]This enumeration is used to describe the server type.
 * [cn]����������
 */
typedef enum tagLOGIN_E_SERVER_TYPE
{
    LOGIN_E_SERVER_TYPE_PORTAL = 0,         /**< [en]Indicates the UPortal server.
                                                 <br>[cn]UPortal������ */
    LOGIN_E_SERVER_TYPE_MEDIAX,             /**< [en]Indicates the Mediax server.
                                                 <br>[cn]Mediax������ */
    LOGIN_E_SERVER_TYEP_SMC,                /**< [en]Indicates the SMC server.
                                                 <br>[cn]SMC������ */
    LOGIN_E_SERVER_TYPE_BUTT
}LOGIN_E_SERVER_TYPE;


/** 
 * [en]This enumeration is used to describe the type of authentication.
 * [cn]��Ȩ����
 */
typedef enum tagLOGIN_E_AUTH_TYPE
{
    LOGIN_E_AUTH_NORMAL,        /**< [en]Indicates password authentication.
                                     <br>[cn]�����Ȩ */
    LOGIN_E_AUTH_TIKET,         /**< [en]Indicates the tiket authentication.
                                     <br>[cn]Tiket��Ȩ */

    LOGIN_E_AUTH_BUTT
}LOGIN_E_AUTH_TYPE;

/** 
 * [en]This enumeration is used to describe the source of password.
 * [cn]IP������¼�������Դ
 */
typedef enum tagLOGIN_E_SOURCE_OF_PSW
{
    LOGIN_E_SRCPSW_NONE,        /**< [en]Indicates no source of password.
                                     <br>[cn]��������Դ */
    LOGIN_E_SRCPSW_USER,        /**< [en]Indicates user input the password.
                                     <br>[cn]�û���������� */
    LOGIN_E_SRCPSW_OM,          /**< [en]Indicates the manager give the password.
                                     <br>[cn]��ʾ�����·������� */
    LOGIN_E_SRCPSW_BUTT
}LOGIN_E_SOURCE_OF_PSW;

/** 
 * [en]This structure is used to describe change the login password.
 * [cn]�޸ĵ�½�������ݽṹ
 */
typedef struct tagLOGIN_S_CHANGE_PWD_PARAM
{
    TUP_CHAR acAccount[LOGIN_D_MAX_USERNAME_LEN];         /**< [en]Indicates the login account. [cn]��¼�˺� */
    TUP_CHAR acOldPassword[LOGIN_D_MAX_PASSWORD_LEN];     /**< [en]Indicates the original password. [cn]ԭ���� */
    TUP_CHAR acNewPassword[LOGIN_D_MAX_PASSWORD_LEN];     /**< [en]Indicates the new password. [cn]������ */
    TUP_CHAR acNumber[LOGIN_D_MAX_USERNAME_LEN];          /**< [en]Indicates the number. [cn]���� */
    TUP_CHAR acServer[LOGIN_D_MAX_SERVICE_LEN];           /**< [en]Indicates the server address. [cn]��������ַ */
    TUP_UINT32 uiPort;                                    /**< [en]Indicates the server port. [cn]�������˿� */
    LOGIN_E_PROTOCOL_TYPE eProtocol;                      /**< [en]Indicates the protocol type. [cn]Э������ */
}LOGIN_S_CHANGE_PWD_PARAM;


/** 
 * [en]This structure is used to describe the server information.
 * [cn]��������Ϣ
 */
typedef struct tagLOGIN_S_SERVER_INFO
{
    TUP_CHAR                server_url[LOGIN_D_MAX_HTTPURL_LEN + 1];    /**< [en]Indicates the server address. [cn]��������ַ */
    TUP_CHAR                account[LOGIN_D_MAX_ACCOUNT_LEN];           /**< [en]Indicates the account. [cn]�˺� */
    TUP_CHAR                password[LOGIN_D_MAX_PASSWORD_LENGTH];      /**< [en]Indicates the password. [cn]���� */
}LOGIN_S_SERVER_INFO;


/** 
 * [en]This structure is used to describe SIP authentication information.
 * [cn]SIP��Ȩ��Ϣ
 */
typedef struct tagLOGIN_S_SIP_AUTH_INFO
{
    TUP_CHAR user_name[LOGIN_D_MAX_ACCOUNT_LEN + 1];                        /**< [en]Indicates the account username. [cn]�˻��û��� */
    TUP_CHAR password[LOGIN_D_MAX_PASSWORD_LENGTH + 1];                     /**< [en]Indicates the account password. [cn]�˻����� */
    TUP_CHAR user_number[LOGIN_D_MAX_USERNUMBER_LENGTH + 1];                /**< [en]Indicates the user number. Assignment is only required when docking UC3.2 UPortal. [cn]�û����롣�Խ�UC3.2 UPortal��ʱ�����Ҫ��ֵ��*/
}LOGIN_S_AUTH_INFO;

/** 
 * [en]This structure is used to describe SIP information.
 * [cn]SIP��Ϣ
 */
typedef struct tagLOGIN_S_SIP_INFO
{
    TUP_CHAR                sip_url[LOGIN_D_MAX_VIDEXIO_SIP_URL_LEN + 1];               /**< [en]Indicates the SIP registration URL. [cn]SIPע��URL */
    TUP_CHAR                display_name[LOGIN_D_MAX_VIDEXIO_SIP_DISPLAY_NAME_LEN + 1]; /**< [en]Indicates the terminal name. [cn]�ն����� */
    LOGIN_E_TRANSPORTMODE   transport_mode;                                             /**< [en]Indicates SIP send mode. [cn]SIP����ģʽ */
    LOGIN_S_AUTH_INFO       auth_info;                                                  /**< [en]Indicates SIP account, password. [cn]SIP�˺š����� */
    TUP_CHAR                proxy_address[LOGIN_D_MAX_HTTPURL_LEN + 1];                 /**< [en]Indicates proxy server address. [cn]�����������ַ */
}LOGIN_S_SIP_INFO;


/** 
 * [en]This structure is used to describe authentication server information.
 * [cn]��Ȩ��������Ϣ
 */
typedef struct tagLOGIN_S_AUTH_SERVER_INFO
{
    LOGIN_E_SERVER_TYPE server_type;                                    /**< [en]Indicates the server type. [cn]���������� */
    TUP_UINT32          server_port;                                    /**< [en]Indicates the server port. [cn]�������˿ں� */
    TUP_CHAR            server_url[LOGIN_D_MAX_URL_LENGTH];             /**< [en]Indicates the server address. [cn]��������ַ */
    TUP_UINT32          proxy_port;                                     /**< [en]Indicates the proxy port. [cn]����������˿ں� */
    TUP_CHAR            proxy_url[LOGIN_D_MAX_URL_LENGTH];              /**< [en]Indicates the proxy server address. [cn]�����������ַ */
    TUP_CHAR            server_version[LOGIN_D_MAX_SOFTWARE_VER_LEN];   /**< [en]Indicates the server version. [cn]�������汾 */
}LOGIN_S_AUTH_SERVER_INFO;


/** 
 * [en]This structure is used to describe authentication parameters.
 * [cn]��Ȩ����
 */
typedef struct tagLOGIN_S_AUTHORIZE_PARAM
{
    LOGIN_E_AUTH_TYPE   auth_type;                                  /**< [en]Indicates the type of authentication. [cn]��Ȩ���� */
    LOGIN_S_AUTH_INFO   auth_info;                                  /**< [en]Indicates the user name and password. [cn]�û���+���� */
    TUP_CHAR            user_agent[LOGIN_D_MAX_USERAGENT_LEN];      /**< [en]Indicates the product information: Type the terminal type, TE Enter the accountType. [cn]��Ʒ��Ϣ��Я���ն����ͣ�TE����accountType*/
    TUP_CHAR            user_tiket[LOGIN_D_MAX_TIKET_LEN];          /**< [en]Indicates the Tiket value used by a third-party authentication Tiken scenario. [cn]Tiketֵ����������ȨTiken����ʹ�� */
    LOGIN_S_AUTH_SERVER_INFO auth_server;                           /**< [en]Indicates the authentication server. [cn]��Ȩ������ */
    TUP_CHAR            device_sn[LOGIN_D_MAX_SN_LEN];              /**< [en]Indicates the sn number. Option parameter. [cn]�豸sn�š� ��ѡ������*/
    TUP_UINT32          user_id;                                    /**< [en]Indicates the user id that requires UI generation. [cn]�û�id����ҪUI���� */
    TUP_CHAR            domain[LOGIN_D_MAX_DOMAIN_LENGTH];          /**< [en]Indicates the SIP domain [cn]SIP���� */
    LOGIN_E_SOURCE_OF_PSW src_of_psw;                               /**< [en]Indicates the source of password. [cn]IP������¼�������Դ */
} LOGIN_S_AUTHORIZE_PARAM;


/** 
 * [en]This structure is used to describe EUA information.
 * [cn]EUA��Ϣ
 */
typedef struct tagLOGIN_S_EUA_INFO
{
    LOGIN_S_AUTH_INFO   eua_auth;                                                    /**< [en]Indicates the user name and password. [cn]�û���+���� */
    TUP_CHAR            eua_dn[LOGIN_D_MAX_DN_LEN];                                  /**< [en]Indicates the eua reference DN. [cn]eua��׼DN */

    TUP_UINT32          num_of_eua;                                                  /**< [en]Indicates the number of eua. [cn]eua���� */
    TUP_CHAR            eua_addr[LOGIN_D_MAX_EUA_NUM][LOGIN_D_MAX_URL_LENGTH];       /**< [en]Indicates the eua address information. [cn]eua��ַ��Ϣ */
}LOGIN_S_EUA_INFO;


/** 
 * [en]This structure is used to describe single server information.
 * [cn]������������Ϣ
 */
typedef struct tagLOGIN_S_SERVER_ADDR_INFO
{
    TUP_UINT32  server_port;                            /**< [en]Indicates the server port. [cn]�������˿ں� */
    TUP_CHAR    server_uri[LOGIN_D_MAX_URL_LENGTH];     /**< [en]Indicates the server address. [cn]��������ַ */
} LOGIN_S_SERVER_ADDR_INFO;

#define LOGIN_S_SINGLE_SERVER_INFO LOGIN_S_SERVER_ADDR_INFO


/** 
 * [en]This structure is used to describe STG information.
 * [cn]STG��Ϣ
 */
typedef struct tagLOGIN_S_STG_INFO
{
    TUP_CHAR user_name[LOGIN_D_MAX_ACCOUNT_LEN];                /**< [en]Indicates the username. [cn]�û��� */
    TUP_CHAR password[LOGIN_D_MAX_PASSWORD_LENGTH];             /**< [en]Indicates the password. [cn]���� */

    TUP_UINT32 stg_num;                                         /**< [en]Indicates the number of stg. [cn]stg���� */
    LOGIN_S_SERVER_ADDR_INFO* stg_addr;                         /**< [en]Indicates the STG addr. [cn]STG ��ַ��Ϣ */

    TUP_UINT32 sbc_num;                                         /**< [en]Indicates the number of sbc. [cn]sbc���� */
    LOGIN_S_SERVER_ADDR_INFO* sbc_addr;                         /**< [en]Indicates the SBC addr. [cn]SBC ��ַ��Ϣ */
}LOGIN_S_STG_INFO;


/** 
 * [en]This structure is used to describe TMS information.
 * [cn]TMS��Ϣ
 */
typedef struct tagLOGIN_S_TMS_INFO
{
    TUP_CHAR user_name[LOGIN_D_MAX_ACCOUNT_LEN];                /**< [en]Indicates the username. [cn]�û��� */
    TUP_CHAR password[LOGIN_D_MAX_PASSWORD_LENGTH];             /**< [en]Indicates the password. [cn]���� */

    TUP_UINT32 tms_num;                                         /**< [en]Indicates the number of stg. [cn]tms���� */
    LOGIN_S_SERVER_ADDR_INFO* tms_addr;                         /**< [en]Indicates the STG addr. [cn]tms ��ַ��Ϣ */
}LOGIN_S_TMS_INFO;


/** 
 * [en]This structure is used to describe multi-server information.
 * [cn]���������Ϣ
 */
typedef struct tagLOGIN_S_MULTI_SERVER_INFO
{
    TUP_UINT32                  server_num;             /**< [en]Indicates the number of servers. [cn]���������� */
    LOGIN_S_SERVER_ADDR_INFO  * server_info;            /**< [en]Indicates server information. [cn]��������Ϣ  modify �����䶯 */
}LOGIN_S_MULTI_SERVER_INFO, *LOGIN_S_MULTI_SERVER_PTR;

#define LOGIN_D_MAX_MS_NUM 8


/** 
 * [en]This structure is used to describe STG information.
 * [cn]STG��Ϣ
 */
typedef struct tagLOGIN_S_UPORTAL_STG_INFO
{
    TUP_CHAR stg_uri[LOGIN_D_MAX_URL_LENGTH];          /**< [en]Indicates the STG URI. Required for external network access. [cn]STG����URI����������ʱ��ѡ */
    TUP_CHAR account[LOGIN_D_MAX_ACCOUNT_LEN];         /**< [en]Indicates the account. Required for external network access.[cn]STG�����ʺţ���������ʱ��ѡ */
    TUP_CHAR password[LOGIN_D_MAX_PASSWORD_LENGTH];    /**< [en]Indicates the password. Required for external network access.[cn]STG�������룬��������ʱ��ѡ */
    TUP_CHAR sip_stg_uri[LOGIN_D_MAX_URL_LENGTH];      /**< [en]Indicates the sip STG URI. Proxy intranet address, required for external network access.[cn]SBC�ϵ�SIP Proxy������ַ����������ʱ��ѡ */
    TUP_CHAR eserver_stg_uri[LOGIN_D_MAX_URL_LENGTH];  /**< [en]Indicates the IP address of the internal network accessed through STG. Required for external network access. [cn]ͨ��STG���������eServer��ַ����������ʱ��ѡ */
    TUP_CHAR maa_stg_uri[LOGIN_D_MAX_URL_LENGTH];      /**< [en]Indicates the internal network MAA address accessed through the STG. Required for external network access. [cn]ͨ��STG���������MAA��ַ����������ʱ��ѡ */
    TUP_CHAR ms_stg_uri[LOGIN_D_MAX_MS_NUM][LOGIN_D_MAX_URL_LENGTH];   /**< [en]Indicates the internal network MS address accessed through the STG. Required for external network access. [cn]ͨ��STG���������MS��ַ����������ʱ��ѡ */
} LOGIN_S_UPORTAL_STG_INFO;


/** 
 * [en]This structure is used to describe access server.
 * [cn]���ʷ�����
 */
typedef struct tagLOGIN_S_ACCESS_SERVER
{
    TUP_CHAR server_name[LOGIN_D_MAX_NAME];             /**< [en]Indicates the access server name. [cn]������������� */
    TUP_CHAR sip_uri[LOGIN_D_MAX_URL_LENGTH];           /**< [en]Indicates the SIP URI. [cn]SIPע���ַ */
    TUP_CHAR svn_uri[LOGIN_D_MAX_URL_LENGTH];           /**< [en]Indicates the SVN proxy server address. [cn]SVN�����������ַ */
    TUP_CHAR httpsproxy_uri[LOGIN_D_MAX_URL_LENGTH];    /**< [en]Indicates the Https proxy server address. [cn]HTTPS��������ַ */
    TUP_CHAR eserver_uri[LOGIN_D_MAX_URL_LENGTH];       /**< [en]Indicates the eServer address. [cn]eServer������(IMҵ�������)��ַ */
    TUP_CHAR conf_uri[LOGIN_D_MAX_URL_LENGTH];          /**< [en]Indicates the conference uri. [cn]���������URI */
    TUP_CHAR maa_uri[LOGIN_D_MAX_URL_LENGTH];           /**< [en]Indicates the MAA server address. [cn] MAA��������ַ*/
    TUP_CHAR androidpush_uri[LOGIN_D_MAX_URL_LENGTH];   /**< [en]Indicates an Android push address. [cn]AndroidPush��������ַ */
    TUP_CHAR ms_param_uri[LOGIN_D_MAX_URL_LENGTH];      /**< [en]Indicates the MS conference parameter gets the server address. [cn] MS���������ȡ��������ַ*/
    TUP_CHAR ms_param_path_uri[LOGIN_D_MAX_URL_LENGTH]; /**< [en]Indicates that the MS conference parameter gets the server path. [cn] MS���������ȡ������·��*/
    TUP_CHAR eab_uri[LOGIN_D_MAX_URL_LENGTH];           /**< [en]Indicates the enterprise address The server address. [cn] ��ҵ��ַ����������ַ*/
    TUP_CHAR prophoto_uri[LOGIN_D_MAX_URL_LENGTH];      /**< [en]Indicates the avatar server address. [cn] ͷ���������ַ*/
    TUP_CHAR ms_uri[LOGIN_D_MAX_MS_NUM][LOGIN_D_MAX_URL_LENGTH];       /**< [en]Indicates the MS conferencing server. [cn] MS���������*/
    LOGIN_S_UPORTAL_STG_INFO stg_info;                  /**< [en]Indicates stg information. [cn]STG��Ϣ */
} LOGIN_S_ACCESS_SERVER;


/** 
 * [en]This structure is used to describe authentication address information.
 * [cn]��Ȩ��ַ��Ϣ
 */
typedef struct tagLOGIN_S_AUTHORIZE_SITE_INFO
{
    TUP_CHAR site_name[LOGIN_D_MAX_NAME];          /**< [en]Indicates the site name. [cn]վ������ */
    TUP_CHAR sbc_domain[LOGIN_D_MAX_URL_LENGTH];   /**< [en]Indicates the SBC domain. [cn]SBC���� */
    
    TUP_UINT32 priority;                           /**< [en]Indicates the priority, value range from 1 to 3, the smaller number represent the higher priority [cn]վ�����ȼ���ֵ��[1-3]�����ȼ��Ӹߵ��ͣ�����ԽС�������ȼ�Խ�� */
    TUP_UINT32 num_of_server;                      /**< [en]Indicates the number of servers. [cn]������������� */
    LOGIN_S_ACCESS_SERVER* access_server;          /**< [en]Indicates access to the server. [cn]�����������Ϣ */
} LOGIN_S_AUTHORIZE_SITE_INFO;


/** 
 * [en]This structure is used to describe authentication login result.(SP&IMS Hosted VC)
 * [cn]��Ȩ��¼���(SP&IMS Hosted VC)
 */
typedef struct tagLOGIN_S_AUTHORIZE_RESULT
{
    TUP_CHAR auth_token[LOGIN_D_MAX_TOKEN_LEN];         /**< [en]Indicates the token value. [cn]tokenֵ */
    TUP_CHAR user_name[LOGIN_D_MAX_ACCOUNT_LEN];        /**< [en]Indicates the username (third-party Tiket authentication, Uportal return username and Token). [cn]�û���(������Tiket��Ȩ��Uportal�����û�����Token)  */
    TUP_CHAR media_type[LOGIN_D_MAX_MEDIATYPE_LEN];     /**< [en]Indicates the MediaType type, the media type of the user-supported conference, similar to: voice; video. [cn]MediaType���ͣ��û�֧�ֵĻ����ý�����ͣ����ƣ�voice;video */
    
    LOGIN_S_SERVER_ADDR_INFO auth_serinfo;              /**< [en]Indicates the authentication login address information, usually the IP address. [cn]��Ȩ��¼��ַ��Ϣ��һ����IP��ַ */

    LOGIN_S_SIP_INFO sip_info;                          /**< [en]Indicates SIP information. [cn]SIP��Ϣ */
    LOGIN_S_STG_INFO stg_info;                          /**< [en]Indicates STG information. [cn]STG��Ϣ */
    LOGIN_S_EUA_INFO eua_info;                          /**< [en]Indicates EUA information. [cn]EUA��Ϣ */    
    LOGIN_S_TMS_INFO tms_info;                          /**< [en]Indicates TMS information. [cn]TMS��Ϣ */  
    LOGIN_S_MULTI_SERVER_INFO maa_info;                 /**< [en]Indicates the MAA server address and port. [cn]MAA    ��������ַ�Ͷ˿ں� */
    LOGIN_S_MULTI_SERVER_INFO eServer_info;             /**< [en]Indicates the eServer server address and port. [cn]eServer��������ַ�Ͷ˿ں� */
    LOGIN_S_SERVER_ADDR_INFO eab_info;                  /**< [en]Indicates the EAB server address and port. [cn]EAB    ��������ַ�Ͷ˿ں� */
    LOGIN_S_SERVER_ADDR_INFO group_info;                /**< [en]Indicates the Group server address and port. [cn]Group ��������ַ�Ͷ˿ں� */
    LOGIN_S_MULTI_SERVER_INFO uportal_info;             /**< [en]Indicates the Uportal server address and port. [cn]Uportal ��������ַ�Ͷ˿ں� */
} LOGIN_S_AUTHORIZE_RESULT;


/** 
 * [en]This structure is used to describe authentication login result.(uportal)
 * [cn]��Ȩ��¼��� uportal
 */
typedef struct tagLOGIN_S_UPORTAL_AUTHORIZE_RESULT
{
    TUP_CHAR auth_token[LOGIN_D_MAX_TOKEN_LEN];         /**< [en]Indicates the token value. [cn]Tokenֵ */
    TUP_CHAR user_name[LOGIN_D_MAX_ACCOUNT_LEN];        /**< [en]Indicates the username (third-party Tiket authentication, Uportal returns the user name and Token). [cn]�û���(������Tiket��Ȩ��Uportal�����û�����Token)  */
    TUP_CHAR media_type[LOGIN_D_MAX_MEDIATYPE_LEN];     /**< [en]Indicates the MediaType type, the media type of the user-supported conference, similar to: voice; video. [cn]MediaType���ͣ��û�֧�ֵĻ����ý�����ͣ����ƣ�voice;video */
    
    TUP_CHAR sip_account[LOGIN_D_MAX_ACCOUNT_LEN];      /**< [en]Indicates the sip number. [cn]SIPע���ʺ� */
    TUP_CHAR sip_impi[LOGIN_D_MAX_ACCOUNT_LEN];         /**< [en]Indicates the impi number. [cn]SIP IP��ý��˽�б�ʶ(IP Multimedia Private Identity) */

    LOGIN_E_AUTH_PASSWORD_TYPE password_type;           /**< [en]Indicates the password type. [cn]SIP�������� */
    TUP_CHAR sip_password[LOGIN_D_MAX_PASSWORD_LENGTH]; /**< [en]Indicates the sip password. [cn]SIPע������ */
    TUP_CHAR sip_domain[LOGIN_D_MAX_URL_LENGTH];        /**< [en]Indicates the sip domain name. [cn]SIP���� */
    
    LOGIN_S_SERVER_ADDR_INFO auth_serinfo;              /**< [en]Indicates the authentication login address information, usually the IP address. [cn]��ǰ��Ȩ��¼��ַ��Ϣ */
    TUP_UINT32 expire;                                  /**< [en]Indicates the authentication expiration time. [cn]��Ȩ����ʱ�� */
    TUP_UINT32 num_of_site;                             /**< [en]Indicates the number of site. [cn]վ������ */
    LOGIN_E_DEPLOY_MODE deploy_mode;                    /**< [en]Indicates the deployment mode. [cn]����ģʽ */
    LOGIN_S_AUTHORIZE_SITE_INFO* site_info;             /**< [en]Indicates site information. [cn]վ����Ϣ */
    TUP_BOOL is_first_login;                            /**< [en]Indicates whether is first login. [cn]�Ƿ��״ε�½ */
    TUP_UINT32 left_days_of_pwd;                        /**< [en]Indicates the left days of password. [cn]����ʣ����Ч������ */
} LOGIN_S_UPORTAL_AUTHORIZE_RESULT;


/** 
 * [en]This structure is used to describe UC3.2 UPORTAL TOKEN refresh information, for hard terminal.
 * [cn]UC3.2 UPORTAL TOKEN ˢ����Ϣ��Ӳ�ն�ʹ��
 */
typedef struct tagLOGIN_S_UPORTAL_TOKEN_REFRESH_INFO
{
    TUP_CHAR acToken[LOGIN_D_MAX_TOKEN_LEN];          /**< [en]Indicates the token value. [cn]Tokenֵ */
    TUP_CHAR acEabServer[LOGIN_D_MAX_URL_LENGTH];     /**< [en]Indicates the enterprise address book server. [cn]��ҵͨѶ¼������ */
    TUP_CHAR acGroupServer[LOGIN_D_MAX_URL_LENGTH];   /**< [en]Indicates the avatar server. [cn]ͷ������� */
    TUP_CHAR acUsername[LOGIN_D_MAX_USERNAME_LENGTH]; /**< [en]Indicates the username. [cn]�û��� */
    TUP_UINT32 ulExpire;                              /**< [en]Indicates the authentication expiration time. [cn]��Ȩ����ʱ�� */
}LOGIN_S_UPORTAL_TOKEN_REFRESH_INFO;


/** 
 * [en]This structure is used to describe login server parameters(On-premise VC).
 * [cn]��¼����������(On-premise VC)
 **/
typedef struct tagLOGIN_S_SMC_AUTHORIZE_RESULT
{
    TUP_CHAR name[LOGIN_D_MAX_NAME];                   /**< [en]Indicates the STG login name. [cn]STG�������� */
    TUP_CHAR password[LOGIN_D_MAX_PASSWORD_LENGTH];    /**< [en]Indicates the STG login password. [cn]STG�������� */

    TUP_UINT32 stg_num;                                /**< [en]Indicates the number of STG servers. [cn]STG����������*/
    LOGIN_S_SERVER_ADDR_INFO* stg_servers;             /**< [en]Indicates the STG server IP. [cn]STG������IP*/
    TUP_UINT32 sbc_num;                                /**< [en]Indicates the number of IP addresses in the SBC. [cn]SBC����IP����*/
    LOGIN_S_SERVER_ADDR_INFO* sbc_servers;             /**< [en]Indicates the SBC Intranet IP. [cn]SBC����IP */
    TUP_UINT32 smc_num;                                /**< [en]Indicates the number of SMC addresses. [cn]SMC��ַ����*/
    LOGIN_S_SERVER_ADDR_INFO* smc_servers;             /**< [en]Indicates the SMC address. [cn]SMC��ַ */ 
    TUP_UINT32 sbc_out_num;                            /**< [en]Indicates the number of IP addresses in the SBC. [cn]SBC����IP����*/
    LOGIN_S_SERVER_ADDR_INFO* sbc_out_servers;         /**< [en]Indicates the SBC external network IP. [cn]SBC����IP */
    TUP_UINT32 sip_server_num;                         /**< [en]Indicates the number of SIP server. [cn]SIP ���������� */
    LOGIN_S_SERVER_ADDR_INFO* sip_servers;             /**< [en]Indicates the SIP server address. [cn]SIP ��������ַ */
    TUP_UINT32 sip_proxy_num;                          /**< [en]Indicates the number of SIP proxy server . [cn]SIP ������������� */
    LOGIN_S_SERVER_ADDR_INFO* sip_proxy_servers;       /**< [en]Indicates the SIP proxy server address. [cn]SIP �����������ַ */
    TUP_CHAR sip_uri[LOGIN_D_MAX_URL_LENGTH];          /**< [en]Indicates the SIP uri. [cn]SIP uri��ַ */
    TUP_CHAR sip_authname[LOGIN_D_MAX_NAME];           /**< [en]Indicates the SIP authorize account. [cn]SIP ��Ȩ�û��� */
    TUP_CHAR sip_pwd[LOGIN_D_MAX_PASSWORD_LENGTH];     /**< [en]Indicates the SIP authorize pwd. [cn]SIP ��Ȩ���� */
    TUP_UINT32 h323_gk_num;                            /**< [en]Indicates the number of h.323 gk server . [cn]h.323 gk���������� */
    LOGIN_S_SERVER_ADDR_INFO* h323_gk_servers;         /**< [en]Indicates the h.323 gk server address. [cn]h.323 gk ��������ַ */
    TUP_CHAR h323_e164[LOGIN_D_MAX_USERNUMBER_LENGTH]; /**< [en]Indicates the h.323 e164. [cn]h.323 e164 */
    TUP_CHAR h323_id[LOGIN_D_MAX_USERNUMBER_LENGTH];   /**< [en]Indicates the h.323 id. [cn]h.323 id */
    TUP_CHAR h323_authname[LOGIN_D_MAX_NAME];          /**< [en]Indicates the h.323 authorize account. [cn]h.323 ��Ȩ�û��� */
    TUP_CHAR h323_pwd[LOGIN_D_MAX_PASSWORD_LENGTH];    /**< [en]Indicates the h.323 authorize pwd. [cn]h.323 ��Ȩ���� */

    LOGIN_S_SERVER_ADDR_INFO auth_serinfo;             /**< [en]Indicates the authentication login address information, usually the IP address. [cn]��Ȩ��¼��ַ��Ϣ��һ����IP��ַ */
} LOGIN_S_SMC_AUTHORIZE_RESULT;


/** 
 * [en]This structure is used to describe the refresh token result.
 * [cn]tokenˢ�½��
 */
typedef struct tagLOGIN_S_REFRESH_TOKEN_RESULT
{
    TUP_CHAR                    auth_token[LOGIN_D_MAX_TOKEN_LEN];  /**< [en]Indicates the token value. [cn]tokenֵ */
}LOGIN_S_REFRESH_TOKEN_RESULT;


/** 
 * [en]This structure is used to describe the firewall detection server parameters.
 * [cn]����ǽ̽������������ṹ��
 **/
typedef struct tagLOGIN_S_DETECT_SERVER
{
    TUP_UINT32 server_num;                       /**< [en]Indicates the number of servers. [cn]����������*/
    LOGIN_S_SERVER_ADDR_INFO* servers;           /**< [en]Indicates Server IP (Port Reservation). [cn]������IP(�˿�Ԥ��)*/
} LOGIN_S_DETECT_SERVER;


/** 
 * [en]This structure is used to describe the STG information.
 * [cn]STG��Ϣ
 */
typedef struct tagLOGIN_S_STG_PARAM
{
    TUP_UINT32 stg_num;                              /**< [en]Indicates the number of STG servers. [cn]STG���������� */
    LOGIN_S_SERVER_ADDR_INFO* stg_servers;           /**< [en]Indicates the STG server. [cn]STG������ */
    TUP_CHAR user_name[LOGIN_D_MAX_ACCOUNT_LEN];     /**< [en]Indicates the account username. [cn]�˻��û��� */
    TUP_CHAR password[LOGIN_D_MAX_PASSWORD_LENGTH];  /**< [en]Indicates the account password. [cn]�˻����� */
    TUP_CHAR ca_path[LOGIN_D_MAX_CA_PATH_LEN];       /**< [en]Indicates the path of CA . [cn]CA֤��·�� */
} LOGIN_S_STG_PARAM;


/** 
 * [en]This structure is used to describe the http proxy information.
 * [cn]������Ϣ
 */
typedef struct tagLOGIN_S_PROXY_PARAM
{  
    LOGIN_S_SERVER_ADDR_INFO proxy_server;           /**< [en]Indicates that the http proxy server, up to only one. [cn]http��������������ֻ��һ�� */
    LOGIN_S_AUTH_INFO proxy_auth;                    /**< [en]Indicates the username and password. [cn]�û���+���� */
} LOGIN_S_PROXY_PARAM;


/**
 * @brief [en]Indicates the login event notification callback function definition..
 *        <br>[cn]��¼�¼�֪ͨ�ص���������
 * 
 * @param [in] TUP_UINT32 msgid           <b>:</b><br>[en]Indicates the message ID. @see tagLOGIN_E_EVENT.
 *                                                <br>[cn]��ϢID @see tagLOGIN_E_EVENT
 * @param [in] TUP_UINT32 param1          <b>:</b><br>[en]Indicates the parameter 1.
 *                                                <br>[cn]����1
 * @param [in] TUP_UINT32 param2          <b>:</b><br>[en]Indicates the parameter 2.
 *                                                <br>[cn]����2
 * @param [in] TUP_VOID *data             <b>:</b><br>[en]]Indicates the message to attach data, see the description of the different event IDs.
 *                                                <br>[cn]�������ݣ�����μ���ͬ�¼�ID��˵��
 * @retval TUP_VOID
 * 
 * @attention [en]None.
 *            <br>[cn]
 * @see NA
 **/
typedef TUP_VOID (*LOGIN_FN_CALLBACK_PTR)(TUP_UINT32 msgid, TUP_UINT32 param1, TUP_UINT32 param2, TUP_VOID *data);


#ifdef __cplusplus
#if __cplusplus
}
#endif /*  __cpluscplus */
#endif /*  __cpluscplus */


#endif  /* __LOGIN_DEF_H__ */


/*
* History: \n
* 2012-12-10, ��ʼ�����ļ��� \n
* 2015-12-30, TUP V100R001C50 TR5 ���������´��ļ��� \n
 *
* vi: set expandtab ts=4 sw=4 tw=80:
*/

