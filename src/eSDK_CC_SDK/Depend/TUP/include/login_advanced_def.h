/** 
 * @file login_def.h
 * 
 * Copyright(C), 2012-2015, Huawei Tech. Co., Ltd. ALL RIGHTS RESERVED. \n
 *
 * @brief [en]Description: The header file of the TUP unified authentication and login component function struct definitioin
 *        [cn]������TUP ͳһ��Ȩ���¼������ܽṹ����ͷ�ļ��� \n
 * 
 */


#ifndef __LOGIN_ADVANCED_DEF_H__
#define __LOGIN_ADVANCED_DEF_H__

#include "tup_def.h"
#include "login_def.h"

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif /*  __cpluscplus */
#endif /*  __cpluscplus */

/**
 *  [en]cipher enum type
 *  [cn]����������ö��
 */
typedef enum tagLOGIN_E_CIPHER_TYPE
{
    LOGIN_E_TLS11_CK_RSA_NULL_MD5               = 0x03000001,               
    LOGIN_E_TLS11_CK_RSA_NULL_SHA               = 0x03000002,          
    LOGIN_E_TLS11_CK_RSA_RC4_128_MD5            = 0x03000004,            
    LOGIN_E_TLS11_CK_RSA_RC4_128_SHA            = 0x03000005,           
    LOGIN_E_TLS11_CK_RSA_DES_64_CBC_SHA         = 0x03000009,         
    LOGIN_E_TLS11_CK_RSA_DES_192_CBC3_SHA       = 0x0300000A, 
    LOGIN_E_TLS11_CK_EDH_DSS_DES_64_CBC_SHA     = 0x03000012,        
    LOGIN_E_TLS11_CK_EDH_DSS_DES_192_CBC3_SHA   = 0x03000013,      
    LOGIN_E_TLS11_CK_EDH_RSA_DES_64_CBC_SHA     = 0x03000015,            
    LOGIN_E_TLS11_CK_EDH_RSA_DES_192_CBC3_SHA   = 0x03000016,     
    LOGIN_E_TLS11_CK_ADH_RC4_128_MD5            = 0x03000018,            
    LOGIN_E_TLS11_CK_ADH_DES_64_CBC_SHA         = 0x0300001A,            
    LOGIN_E_TLS11_CK_ADH_DES_192_CBC3_SHA       = 0x0300001B,       
    LOGIN_E_TLS11_CK_RSA_WITH_AES_128_SHA       = 0x0300002F,       
    LOGIN_E_TLS11_CK_DHE_DSS_WITH_AES_128_SHA   = 0x03000032,   
    LOGIN_E_TLS11_CK_DHE_RSA_WITH_AES_128_SHA   = 0x03000033, 
    LOGIN_E_TLS11_CK_ADH_WITH_AES_128_SHA       = 0x03000034,  
    LOGIN_E_TLS11_CK_RSA_WITH_AES_256_SHA       = 0x03000035,      
    LOGIN_E_TLS11_CK_DHE_DSS_WITH_AES_256_SHA   = 0x03000038,  
    LOGIN_E_TLS11_CK_DHE_RSA_WITH_AES_256_SHA   = 0x03000039,  
    LOGIN_E_TLS11_CK_ADH_WITH_AES_256_SHA       = 0x0300003A,   
    LOGIN_E_TLS12_CK_RSA_NULL_SHA256            = 0x0300003B,
    LOGIN_E_TLS12_CK_RSA_AES_128_CBC_SHA256     = 0x0300003C,
    LOGIN_E_TLS12_CK_RSA_AES_256_CBC_SHA256     = 0x0300003D,
    LOGIN_E_TLS12_CK_DHE_DSS_AES_128_CBC_SHA256 = 0x03000040,
    LOGIN_E_TLS12_CK_DHE_RSA_AES_128_CBC_SHA256 = 0x03000067,
    LOGIN_E_TLS12_CK_DHE_DSS_AES_256_CBC_SHA256 = 0x0300006A,
    LOGIN_E_TLS12_CK_DHE_RSA_AES_256_CBC_SHA256 = 0x0300006B,
    LOGIN_E_TLS12_CK_ADH_AES_128_CBC_SHA256     = 0x0300006C,
    LOGIN_E_TLS12_CK_ADH_AES_256_CBC_SHA256     = 0x0300006D,
    LOGIN_E_TLS12_CK_RSA_WITH_AES_128_GCM_SHA256 = 0x0300009C,
    LOGIN_E_TLS12_CK_RSA_WITH_AES_256_GCM_SHA384 = 0x0300009D,
    LOGIN_E_TLS12_CK_DHE_RSA_WITH_AES_128_GCM_SHA256  = 0x0300009E,
    LOGIN_E_TLS12_CK_DHE_RSA_WITH_AES_256_GCM_SHA384  = 0x0300009F,
    LOGIN_E_TLS12_CK_DHE_DSS_WITH_AES_128_GCM_SHA256  = 0x030000A2,
    LOGIN_E_TLS12_CK_DHE_DSS_WITH_AES_256_GCM_SHA384  = 0x030000A3
}LOGIN_E_CIPHER_TYPE;



/** 
 * [en]This enumeration is used to describe the license type.
 * [cn]License����
 */
typedef enum tagLOGIN_E_LICENSE_TYPE
{
    LOGIN_E_LICENSE_HUAWEI_SC = 0,          /**< [en]Indicates Huawei SC.
                                                 <br>[cn]��ΪSC */
    LOGIN_E_LICENSE_OTHER_SIP_SERVER,       /**< [en]Indicates third-party sip server.
                                                 <br>[cn]������sip server */
    LOGIN_E_LICENSE_BUTT                    /**< [en]Indicates invalid type.
                                                 <br>[cn]��Ч���� */
}LOGIN_E_LICENSE_TYPE;



/** 
 * [en]This enumeration is used to describe platform types.
 * [cn]ƽ̨����
 */
typedef enum tagLOGIN_E_PLATFORM_TYPE
{
    LOGIN_E_PLATFORM_TYPE_BEGIN = 0,
    LOGIN_E_PLATFORM_TYPE_VIDEXIO,              /**< [en]Indicates the VidexIO platform.
                                                     <br>[cn]VidexIOƽ̨ */
    LOGIN_E_PLATFORM_TYPE_DR_PENG,              /**< [en]Indicates Dr. Peng platform.
                                                     <br>[cn]����ʿƽ̨  */
    LOGIN_E_PLATFORM_TYPE_END
}LOGIN_E_PLATFORM_TYPE;


/** 
 * [en]This enumeration is used to describe LDAP authentication types.
 * [cn]LADP��Ȩ����
 */
typedef enum tagLOGIN_E_LDAP_AUTH_TYPE
{
    LOGIN_E_LDAP_AUTH_BEGIN,
    LOGIN_E_LDAP_AUTH_GENERAL,                  /**< [en]Indicates normal.
                                                     <br>[cn]��ͨ */
    LOGIN_E_LDAP_AUTH_SECURED,                  /**< [en]Indicates encryption.
                                                     <br>[cn]���� */
    LOGIN_E_LDAP_AUTH_ANONYMOUS,                /**< [en]Indicates anonymity.
                                                     <br>[cn]���� */
    LOGIN_E_LDAP_AUTH_END
}LOGIN_E_LDAP_AUTH_TYPE;




/** 
 * [en]This enumeration is used to describe the major configuration types.
 * [cn]��Ҫ����������
 */
typedef enum tagLOGIN_E_CFG_MAJOR_TYPE
{
    LOGIN_E_CFG_PLATFORM = 1,    /**< [en]Indicates docking platform.
                                      <br>[cn]�Խ�ƽ̨   */
    LOGIN_E_CFG_SERVER,          /**< [en]Indicates the server address.
                                      <br>[cn]��������ַ */
    LOGIN_E_CFG_DEVICE,          /**< [en]Indicates device information.
                                      <br>[cn]�豸��Ϣ   */
    LOGIN_E_CFG_BUTT
} LOGIN_E_CFG_MAJOR_TYPE;

/** 
 * [en]This enumeration is used to describe the configuration data type.
 * [cn]������������
 */
typedef enum tagLOGIN_E_CFG_DATA_TYPE
{
    LOGIN_E_CFG_DATA_TYPE_INT       = 0x01,        /**< [en]Indicates the int type.
                                                        <br>[cn]int���� */
    LOGIN_E_CFG_DATA_TYPE_STRING    = 0x02,        /**< [en]Indicates the string type.
                                                        <br>[cn]string���� */
    LOGIN_E_CFG_DATA_TYPE_STRUCTURE = 0x04,        /**< [en]Indicates the structure type.
                                                        <br>[cn]structure���� */
    LOGIN_E_CFG_DATA_TYPE_BOOL      = 0x08,        /**< [en]Indicates the bool type.
                                                        <br>[cn]bool���� */
    LOGIN_E_CFG_DATA_TYPE_PTR       = 0x10,        /**< [en]Indicates the ptr type.
                                                        <br>[cn]ptr���� */
    LOGIN_E_CFG_DATA_TYPE_BUTT
} LOGIN_E_CFG_DATA_TYPE;


#define LOGIN_ID_DEF(major, data_type, id, index) ((major) << 24 | ((data_type) << 16) | (id) << 8 | (index))

#define LOGIN_D_CFG_PLATFORM_TYPE              LOGIN_ID_DEF(LOGIN_E_CFG_PLATFORM, LOGIN_E_CFG_DATA_TYPE_INT,       0x1, 0)  /**< [en]Indicates the docking platform type, LOGIN_E_PLATFORM_TYPE
                                                                                                                                 <br>[cn]�Խ�ƽ̨���ͣ�LOGIN_E_PLATFORM_TYPE */
#define LOGIN_D_CFG_TIME_QUERY_INTERVAL        LOGIN_ID_DEF(LOGIN_E_CFG_SERVER,   LOGIN_E_CFG_DATA_TYPE_INT,       0x3, 0)  /**< [en]Indicates the time interval for querying the configuration server, and the heartbeat interval in seconds
                                                                                                                                 <br>[cn]�����÷�������ʱ��ѯ��������������������λ: ��    */

#define LOGIN_D_CFG_DEVICE_INFO                LOGIN_ID_DEF(LOGIN_E_CFG_DEVICE,   LOGIN_E_CFG_DATA_TYPE_STRUCTURE, 0x1, 0)  /**< [en]Indicates the device information, LOGIN_S_VIDEXIO_DEVICE_INFO
                                                                                                                                 <br>[cn]�豸��Ϣ��LOGIN_S_VIDEXIO_DEVICE_INFO  */
#define LOGIN_D_CFG_SYSTEM_NAME                LOGIN_ID_DEF(LOGIN_E_CFG_DEVICE,   LOGIN_E_CFG_DATA_TYPE_STRING,    0x2, 0)  /**< [en]Indicates the system name, TUP_CHAR system_name [LOGIN_D_MAX_SYSTEM_NAME_LEN + 1]
                                                                                                                                 <br>[cn]ϵͳ���ƣ�TUP_CHAR system_name[LOGIN_D_MAX_SYSTEM_NAME_LEN + 1]   */



/**
 * [en]This struct is used to describe cipher list structure
 * [cn]�����׽ṹ��
 */
typedef struct tagLOGIN_S_CIPHERLIST
{
    TUP_BOOL isAdd;                           /**[en]indicate set or add, set: init or override current cipher list; add: add extra ciphers usually to default ones, ignoring the duplicates 
                                                 [cn]���û����ӷ��������ã���ȫ�����ü������б����ӣ���ԭ�л��������Ӽ����ף�����Ѵ�������Ч�����ͳ���Ϊ��Ĭ�ϵļ�����������*/
    TUP_UINT32 uiSize;                        /**[en]number of ciphers in array. [cn]����ʵ�ʳ���*/
    LOGIN_E_CIPHER_TYPE *peCipherList;        /**[en]cipher list. [cn]����������*/
} LOGIN_S_CIPHERLIST;


/**
 * [en]This struct is used to describe the parameters of HTTP timeout.
 * [cn]HTTP��ʱ����
 */
typedef struct tagLOGIN_S_HTTP_TIMEOUT_VALUE
{
    TUP_UINT32 uiTcpCreateTimeOut; /**< [en]Indicates tcp three-way handshake timeout, the default 5s. [cn]tcp�������ֳ�ʱ,Ĭ��5s */
    TUP_UINT32 uiTlsCreateTimeOut; /**< [en]Indicates tls timeout, the default 4s. [cn]tls������ʱ,Ĭ��4s */
    TUP_UINT32 uiRequestTimeOut;   /**< [en]Indicates the signaling request timed out, the default 30s. [cn]��������ʱ,Ĭ��30s */
} LOGIN_S_HTTP_TIMEOUT_VALUE;


/**
 * [en]This struct is used to describe initialize the parameters.
 * [cn]��ʼ�������ṹ��
 */
typedef struct tagLOGIN_S_INIT_PARAM
{
    TUP_BOOL bWaiMsgpThread;               /**< [en]Indicates whether to wait for the message Queuing thread (default: TRUE). [cn]�Ƿ�Ҫ�ȴ���Ϣ�����߳�(Ĭ��TRUE) */
    TUP_BOOL bFailedRetry;                 /**< [en]Indicates whether to retry after failed. [cn]ʧ�ܺ��Ƿ����� */
    LOGIN_S_HTTP_TIMEOUT_VALUE stTimeOut;  /**< [en]Indicates time http timeout. [cn]http��ʱʱ�� */
} LOGIN_S_INIT_PARAM;


/** 
 * [en]This structure is used to describe the license management parameters.
 * [cn]license�������
 */
typedef struct tagLOGIN_S_LICENSE_MANAGE_PARAM
{
    TUP_CHAR acUseName[LOGIN_D_MAX_USERNAME_LEN];         /**< [en]Indicates the username. [cn]�û��� */
    TUP_CHAR acPassword[LOGIN_D_MAX_PASSWORD_LEN];        /**< [en]Indicates the password. [cn]���� */
    TUP_CHAR acServerAddress[LOGIN_D_MAX_SERVICE_LEN];    /**< [en]Indicates the license management server. [cn]license��������� */
}LOGIN_S_LICENSE_MANAGE_PARAM;


/** 
 * [en]This structure is used to describe call bandwidth information.
 * [cn]���д�����Ϣ
 */
typedef struct tagLOGIN_S_VIDEXIO_CONF_INFO
{
    TUP_UINT32              max_call_out_band_width;    /**< [en]Indicates the maximum of outgoing bandwidth. [cn]���������� */
    TUP_UINT32              max_call_in_band_width;     /**< [en]Indicates the maximum of incoming bandwidth. [cn]��������� */
    LOGIN_E_ENCRYPTION_TYPE encrypt_type;               /**< [en]Indicates the signaling encryption policy. [cn]������ܲ��� */
    LOGIN_E_PROTOCOL_TYPE   default_protocol;           /**< [en]Indicates the default call protocol. [cn]ȱʡ����Э�� */
    TUP_UINT32              default_band_width;         /**< [en]Indicates the default call bandwidth. [cn]ȱʡ���д��� */
}LOGIN_S_VIDEXIO_CONF_INFO;

/** 
 * [en]This structure is used to describe LDAP server information.
 * [cn]LDAP��������Ϣ
 */
typedef struct tagLOGIN_S_LDAP_SERVER_INFO
{
    TUP_CHAR                ldap_server_address[LOGIN_D_MAX_URL_LENGTH + 1];    /**< [en]Indicates the LDAP server address. [cn]LDAP��������ַ */
    TUP_UINT16              port;                                               /**< [en]Indicates the port. [cn]�˿� */
    TUP_CHAR                base_dn[LOGIN_D_MAX_DN_LEN + 1];                    /**< [en]Indicates the base domain name. [cn]base DN */
    LOGIN_E_LDAP_AUTH_TYPE  authentication_type;                                /**< [en]Indicates the type of authentication. [cn]��Ȩ���� */
    TUP_UINT32              ssl_encrypt;                                        /**< [en]Indicates whether SSL is supported.The options are as follows: 0, indicating Disable; non-0, said Enable. [cn]�Ƿ�֧��SSL��0����ʾDisable����0����ʾEnable */
    TUP_CHAR                user_name[LOGIN_D_MAX_VIDEXIO_ACCOUNT_LEN + 1];     /**< [en]Indicates the login account. [cn]��¼�˺� */
    TUP_CHAR                pwd[LOGIN_D_MAX_VIDEXIO_PASSWORD_LENGTH + 1];       /**< [en]Indicates the password. [cn]���� */
    TUP_CHAR                domain[LOGIN_D_MAX_URL_LENGTH + 1];                 /**< [en]Indicates the domain. [cn]�� */
    TUP_UINT32              auto_search;                                        /**< [en]Indicates whether automatic searching is supported. The options are as follows:0, said Off; non-0, said On. [cn]�Ƿ�֧���Զ�������0����ʾOff����0����ʾOn */
}LOGIN_S_LDAP_SERVER_INFO;

/** 
 * [en]This structure is used to describe query results of configuration information.
 * [cn]������Ϣ�Ĳ�ѯ���
 */
typedef struct tagLOGIN_S_CONFIG_QUERY_RES
{
    TUP_UINT32                subscribe_result;         /**< [en]Indicates to query result. [cn]��ѯ��� */
    LOGIN_S_SIP_INFO          sip_info;                 /**< [en]Indicates SIP information. [cn]SIP��Ϣ */
    LOGIN_S_VIDEXIO_CONF_INFO conf_info;                /**< [en]Indicates to call bandwidth. [cn]���д��� */
    TUP_BOOL                  net_service_on_sip;       /**< [en]Indicates the sip network service information. The options are as follows:: 0, off; 1, open. [cn]sip���������Ϣ��ȡֵ��0���رգ�1������  */
    TUP_UINT32                heart_beat_interval;      /**< [en]Indicates the sip heartbeat interval, in seconds. [cn]sip�������ʱ�䣬��λ:�� */
    LOGIN_S_LDAP_SERVER_INFO  ldap_info;                /**< [en]Indicates the LDAP server information. [cn]LDAP��������Ϣ */
}LOGIN_S_CONFIG_QUERY_RES;



/** 
 * [en]This structure is used to describe active result.
 * [cn]������
 */
typedef struct tagLOGIN_S_ACTIVE_RESULT
{
    TUP_UINT32         active_result;                                       /**< [en]Indicates the active result. [cn]������ */
    TUP_CHAR           account[LOGIN_D_MAX_VIDEXIO_ACCOUNT_LEN + 1];        /**< [en]Indicates the account. [cn]�˺� */
    TUP_CHAR           password[LOGIN_D_MAX_VIDEXIO_PASSWORD_LENGTH + 1];   /**< [en]Indicates the password. [cn]���� */
    TUP_CHAR           server_url[LOGIN_D_MAX_HTTPURL_LEN + 1];             /**< [en]Indicates the server address. [cn]��������ַ */
}LOGIN_S_IPADDR_S_ACTIVE_RESULT;



/** 
 * [en]This structure is used to describe device information.
 * [cn]�豸��Ϣ
 */
typedef struct tagLOGIN_S_VIDEXIO_DEVICE_INFO
{
    TUP_CHAR       software_version[LOGIN_D_MAX_SOFTWARE_VER_LEN + 1];  /**< [en]Indicates the device software version number. [cn]���豸����汾��       */
    TUP_CHAR       product_name[LOGIN_D_MAX_PRODUCT_NAME_LEN + 1];      /**< [en]Indicates the product's product name. [cn]���豸��Ʒ����         */
    TUP_UINT32     ipv4;                                                /**< [en]Indicates the the IPV6 address of the device, network order. [cn]���豸IPV4��ַ�������� */
    TUP_UINT8      ipv6[LOGIN_D_IP_LENGTH];                             /**< [en]Indicates the IPV6 address of the device. [cn]���豸IPV6��ַ         */
    TUP_CHAR       device_mac[LOGIN_D_MAC_LEN];                         /**< [en]Indicates the MAC address of the device. [cn]���豸MAC��ַ          */
    TUP_CHAR       dev_sn[LOGIN_D_MAX_SN_LEN + 1];                      /**< [en]Indicates the SN number of the device. [cn]���豸SN��             */
}LOGIN_S_VIDEXIO_DEVICE_INFO;


/** 
 * [en]This enumeration is used to describe return code of download device configuration retcode.
 * [cn]�����豸����retcode������ 
 */
typedef enum tagLOGIN_E_UPORTAL_RETCODE
{
    LOGIN_E_UPORTAL_RETCODE_NORMAL,    /**< [en]Indicates the device is normal bound.
                                            <br>[cn]0����ʾ�û��������豸�� */
    LOGIN_E_UPORTAL_RETCODE_DEFAULT,   /**< [en]Indicates the device only has the default account number.
                                            <br>[cn]1���豸����Ĭ���˺� */
    LOGIN_E_UPORTAL_RETCODE_BUTT
} LOGIN_E_UPORTAL_RETCODE;



#ifdef __cplusplus
#if __cplusplus
}
#endif /*  __cpluscplus */
#endif /*  __cpluscplus */


#endif  /* __LOGIN_ADVANCED_DEF_H__ */


