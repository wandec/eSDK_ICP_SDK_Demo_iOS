/**
* @file tup_eaddr_def.h
*
* Copyright(C), 2012-2016, Huawei Tech. Co., Ltd. ALL RIGHTS RESERVED.
*
* @brief [en]Description: TUP eaddr search component parameter-define header files
* [cn]������TUP ��ҵͨѶ¼��ѯ�����������ͷ�ļ�.
**/


#ifndef __TUP_EADDR_DEF_H__
#define __TUP_EADDR_DEF_H__

#include "tup_def.h"
#include "tup_errdef.h"
#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif /* __cplusplus */

#define TUP_EADDR_D_SERVER_URL_MAX_LEN       (256)       /**< [en]the buffer size for server URL 
                                                              <br>[cn]������URL��󳤶� */
#define TUP_EADDR_D_TOKEN_LEN                (256)       /**< [en] the buffer size for Authorization token
                                                              <br>[cn]��֤token ������󳤶� */
#define TUP_EADDR_D_MAX_PATH_LEN             (256)       /**< [en] the buffer size for file path
                                                              <br>[cn]�ļ�·����󳤶� */
#define TUP_EADDR_D_SEARCH_MAX_LEN           (128)       /**< [en] the max buffer size for searching info
                                                              <br>[cn]������Ϣ�������ֵ */  
#define TUP_EADDR_D_ENTERPRISE_COMMON_LEN    (128)       /**< [en] the max buffer size for contact item
                                                              <br>[cn]��ҵ��ϵ���ֶ���󳤶� */
#define TUP_EADDR_D_ENTERPRISE_EMAIL_LEN     (256)       /**< [en] the max buffer size for contact email
                                                              <br>[cn]��ҵ��ϵ�˵����ʼ��ֶ���󳤶� */
#define TUP_EADDR_D_ENTERPRISE_NAME_LEN      (128)       /**< [en] the max buffer size for contact name
                                                              <br>[cn]��ҵ��ϵ�������ֶ���󳤶� */
#define TUP_EADDR_D_ENTERPRISE_NUM_LEN       (33)        /**< [en] the max buffer size for contact phone number
                                                              <br>[cn]��ҵ��ϵ�˺����ֶ���󳤶� */
#define TUP_EADDR_D_ENTERPRISE_STAFFNO_LEN   (32)        /**< [en] the max buffer size for contact staff number
                                                              <br>[cn]��ҵ��ϵ�˹����ֶ���󳤶� */
#define TUP_EADDR_D_ENTERPRISE_STAFFACCOUNT_LEN   (128)  /**< [en] the max buffer size for contact staff account
                                                              <br>[cn]��ҵ��ϵ��UC�˺��ֶ���󳤶� */
#define TUP_EADDR_D_ENTERPRISE_ADDRESS_LEN        (256)  /**< [en] the max buffer size for contact address
                                                              <br>[cn]��ҵ��ϵ�˵�ַ�ֶ���󳤶� */
#define TUP_EADDR_D_ENTERPRISE_URI_LEN            (128)  /**< [en] the max buffer size for contact uri
                                                              <br>[cn]uri�ֶ���󳤶� */
#define TUP_EADDR_D_ENTERPRISE_ICONID_LEN         (144)  /**< [en] the max buffer size for contact icon id
                                                              <br>[cn]ͷ��ID��󳤶� */
#define TUP_EADDR_D_ENTERPRISE_GENDER_LEN         (8)    /**< [en] the max buffer size for contact gender
                                                              <br>[cn]�Ա���󳤶� */
#define TUP_EADDR_D_ENTERPRISE_ZIPCODE_LEN        (32)   /**< [en] the max buffer size for contact zip code
                                                              <br>[cn]�ʱ���󳤶� */
#define TUP_EADDR_D_ENTERPRISE_SIGNATURE_LEN      (256)  /**< [en] the max buffer size for contact signature
                                                              <br>[cn]ǩ����󳤶� */    
#define TUP_EADDR_D_ENTERPRISE_DEPID_LEN          (16)   /**< [en] the max buffer size for contact department id 
                                                              <br>[cn]����ID��󳤶ȣ�2^32=42�ڣ�Ҳ����12λ */
#define TUP_EADDR_D_ENTERPRISE_DEPT_LEN           (256)  /**< [en] the max buffer size for contact deparment name
                                                              <br>[cn]����������󳤶�  */  
#define TUP_EADDR_D_ICONNAME_MAX_LEN              (148)  /**< [en] the max buffer size for contact icon name
                                                              <br>[cn]ͷ������󳤶� */
#define TUP_EADDR_D_DEPNAME_MAX_LEN               (128)  /**< [en]department name lenth maximum.
                                                              <br>[cn]����������󳤶� */

#define TUP_EADDR_D_AUTH_NAME                     (256)  /**< [en]authorizon name length maximun.
                                                              <br>[cn]��Ȩ/ע��������󳤶�*/

#define TUP_EADDR_D_AUTH_PASSWORD                 (256)  /**< [en]authorizon password length maximum
                                                              <br>[cn]��Ȩ/ע��������󳤶�*/

/** 
 * [en]error code.
 * [cn]EADDR ģ�������
 */
typedef enum tagTUP_EADDR_E_ERR_EADDR
{
    TUP_E_ERR_EADDR_PARAME_NULL = TUP_ERR_DEF(TUP_E_CBBID_EADDR, \
                                  0, 0),            /**< [en] parameter is null
                                                         <br>[cn]�������� */
    TUP_E_ERR_EADDR_MEM_ERR,                        /**< [en] malloc failed
                                                         <br>[cn]�ڴ����ʧ�� */
    TUP_E_ERR_EADDR_GETAPP_ERR,                     /**< [en] get APP name failed
                                                         <br>[cn]��ȡӦ�ó�����ʧ�� */
    TUP_E_ERR_EADDR_VTOPMSG_ERR,                    /**< [en] handle message failed
                                                         <br>[cn]��Ϣʧ�� */
    TUP_E_ERR_EADDR_SEARCHATTR_NULL,                /**< [en] the search attribute is null
                                                         <br>[cn]��������Ϊ�� */
    TUP_E_ERR_EADDR_ATTR_LEN_ERR,                   /**< [en] the lenth of search attribute is wrong
                                                         <br>[cn]�����б��ַ����������� */
    TUP_E_ERR_EADDR_STR_LONGER,                     /**< [en] the string lenth is wrong
                                                         <br>[cn]�ַ�������Խ�� */
    TUP_E_ERR_EADDR_PARAME_ERR,                     /**< [en] wrong parameter
                                                         <br>[cn]�����д� */
    TUP_E_ERR_EADDR_XML_ERR,                        /**< [en] handle xml failed
                                                         <br>[cn]xml����ʧ�� */
    TUP_E_ERR_EADDR_GZIP_ERR,                       /**< [en] handle GZIP failed
                                                         <br>[cn]GZIP����ʧ�� */
    TUP_E_ERR_EADDR_CONNECT_FAIL,                   /**< [en] connect failed
                                                         <br>[cn]����ʧ�� */
    TUP_E_ERR_EADDR_TIMEOUT,                        /**< [en] connect timeout
                                                         <br>[cn]���ӳ�ʱ */
    TUP_E_ERR_EADDR_TOKEN,                          /**< [en] handle token failed
                                                         <br>[cn]tokenʧ�� */
    TUP_E_ERR_EADDR_BUTT
} TUP_EADDR_E_ERR_EADDR;


/** 
 * [en]searching result code.
 * [cn]EADDR ģ���ѯ���
 */
typedef enum tagTUP_EADDR_E_SEARCH_RES
{
    TUP_EADDR_SUCCESS_SEARCH, /**< [en]search succeed.
	                               <br>[cn]���ҳɹ� */
    TUP_EADDR_FAIL_CONNECT,   /**< [en]connect failed.
	                               <br>[cn] ���ӷ�����ʧ�� */
    TUP_EADDR_FAIL_AUTH,      /**< [en]authorizon failed
                                   <br>[cn] ��Ȩʧ�� */
    TUP_EADDR_FAIL_SEARCH,    /**< [en]search failed 
                                   <br>[cn]����ʧ�� */
    TUP_EADDR_FAIL_TIMEOUT,   /**< [en]search timeout
                                   <br>[cn] ���ҳ�ʱ */
    TUP_EADDR_FAIL_NOCONFIG,  /**< [en]config parameters error
                                   <br>[cn] ���ò��������Ϊ�� */
    TUP_EADDR_FAIL_NORESULT,  /**< [en]no such contactor
                                   <br>[cn] ���Ҳ�����ϵ�� */
    TUP_EADDR_FAIL_TOKEN,     /**< [en]token expired
                                   <br>[cn] token���� */    
    TUP_EADDR_FAIL_UNKNOWN
}TUP_EADDR_E_SEARCH_RES;


/**
 * [en]log level
 * [cn]��־��ӡ����
 */
typedef enum  tagTUP_EADDR_E_LOG_LEVEL
{
    TUP_EADDR_DEBUG,   /**< [en] debugging   
	                        <br>[cn]���� */
    TUP_EADDR_INFO,    /**< [en] informing   
	                        <br>[cn]��ʾ */
    TUP_EADDR_WARN,    /**< [en] warning      
	                        <br>[cn]���� */
    TUP_EADDR_ERROR,   /**< [en] error          
	                        <br>[cn]���� */
    TUP_EADDR_BUTT
} TUP_EADDR_E_LOG_LEVEL;

/**
 * [en]log configuration
 * [cn]��־���ò����ṹ��
 */
typedef  struct  tagTUP_EADDR_S_LOG_PARA
{
    TUP_EADDR_E_LOG_LEVEL    enLevel;                           /**< [en] log level. [cn]��־���� */
    TUP_UINT32             ulMaxFileSize;                       /**< [en] the maximum of the file size, unit KB. [cn]��־�ļ����ֵ����λKB */
    TUP_CHAR               acLogPath[TUP_EADDR_D_MAX_PATH_LEN]; /**< [en] the path of the logfile. [cn]��־�ļ�·�� */
} TUP_EADDR_S_LOG_PARA;

/**
 * [en]type.
 * [cn]��������
 */
typedef enum tagTUP_EADDR_E_TYPE
{
    EADDR_E_TYPE_IMS,       /**< [en] IMS.          
	                             <br>[cn]IMS���� */
    EADDR_E_TYPE_EC6X,      /**< [en] EC6X.          
	                             <br>[cn]EC6X���� */
    EADDR_E_TYPE_BUTT
} TUP_EADDR_E_TYPE;

/**
 * [en]authorizon parameter.
 * [cn]�����Ȩ��Ϣ�ṹ��
 */
typedef struct tagTUP_EADDR_S_PROXY_AUTH_INFO
{
    TUP_CHAR acUserName[TUP_EADDR_D_AUTH_NAME];      /**< [en] username. [cn]�����Ȩ�û��� */
    TUP_CHAR acPassword[TUP_EADDR_D_AUTH_PASSWORD];  /**< [en] password. [cn]�����Ȩ���� */ 
}TUP_EADDR_S_PROXY_AUTH_INFO;


/**
 * [en]proxy configuration
 * [cn]���ô�������ṹ��
 */
typedef struct tagTUP_EADDR_S_PROXY_PARAM
{
    TUP_CHAR    acIpAddr[TUP_EADDR_D_SERVER_URL_MAX_LEN];   /**< [en] ip address. [cn]IP��ַ */
    TUP_UINT32  ulPort;                                     /**< [en] port      . [cn]�˿ں� */
    TUP_EADDR_S_PROXY_AUTH_INFO stAuthInfo;                 /**< [en] authorizon. [cn]�����Ȩ��Ϣ*/
} TUP_EADDR_S_PROXY_PARAM;

/**
 * [en]uportal configuration
 * [cn]uportal���ò����ṹ��
 */
typedef struct tagTUP_EADDR_S_UPORTAL_CONFIG
{
    TUP_CHAR   acServerAddr[TUP_EADDR_D_SERVER_URL_MAX_LEN];         /**< [en] the server url. [cn]������URL */
    TUP_CHAR   acHttpServerAddr[TUP_EADDR_D_SERVER_URL_MAX_LEN];     /**< [en] the server url. [cn]��ѯ��ϵ�˷�����URL */
    TUP_CHAR   acIconServerAddr[TUP_EADDR_D_SERVER_URL_MAX_LEN];     /**< [en] the server url. [cn]��ѯͷ�������URL */                                                                                                      
    TUP_CHAR   acToken[TUP_EADDR_D_TOKEN_LEN];                       /**< [en] the authorization token. [cn]��֤Token */
    TUP_UINT32 ulVerifyMode;                                         /**< [en] the flag for verifying server certification. [cn]�Ƿ�Է�����֤�������֤��ȡֵ��1Ϊ��Ҫ��֤��0Ϊ����Ҫ��֤ */
    TUP_INT8   acCertFilePath[TUP_EADDR_D_MAX_PATH_LEN];             /**< [en] the path of the certification file. [cn]�����֤��Ҫ����֤���ļ�·�� */
    TUP_EADDR_E_TYPE enType ;                                        /**< [en] the  searching  type. [cn]������������ */
    TUP_UINT32 ulPageItemMax;                                        /**< [en] the  item amount maximum in a page. [cn]ÿҳ�������� */
    TUP_INT8   acIconFilePath[TUP_EADDR_D_MAX_PATH_LEN];           /**< [en]getting icon result file path. [cn] ��ȡ����ͷ���ļ�����·��,��ʱ�ļ����·�� */    
    TUP_INT8   acDeptFilePath[TUP_EADDR_D_MAX_PATH_LEN];              /**< [en]department searching result file path��for a temp file. [cn]���Ų�ѯ����ļ���ŵ�ַ,��ʱ�ļ����·�� */
    TUP_EADDR_S_PROXY_PARAM    stPorxy;                              /**< [en] setting proxy param. [cn]�������ò��� */                                                                                               
} TUP_EADDR_S_UPORTAL_CONFIG;

/**
 * [en]self-defined icon info
 * [cn]�Զ���ͷ������ṹ��
 */
typedef struct tagTUP_EADDR_S_ICON
{
    TUP_UINT32  ulSmallIcon_len;           /**< [en] the length of the small icon content. [cn]Сͷ�����ݳ��� */
    TUP_CHAR*   pcSmallIcon_data;          /**< [en] the small icon content. [cn]Сͷ������ */
    TUP_UINT32  ulMediumIcon_len;          /**< [en] the length of the medium icon content. [cn]��ͷ�����ݳ��� */
    TUP_CHAR*   pcMediumIcon_data;         /**< [en] the medium icon content. [cn]��ͷ������ */
    TUP_UINT32  ulLargeIcon_len;           /**< [en] the length of the large icon content. [cn]��ͷ�����ݳ��� */
    TUP_CHAR*   pcLargeIcon_data;          /**< [en] the large icon content. [cn]��ͷ������ */
} TUP_EADDR_S_ICON;

/**
 * [en]searching contact term
 * [cn]���������ṹ�� 
 */
typedef struct tagTUP_EADDR_S_SEARCH_PARAM
{
    TUP_INT8     acSearchItem[TUP_EADDR_D_SEARCH_MAX_LEN];  /**< [en]id means to handle the searching contactor result message. [cn]ƥ���ַ��� */
    TUP_UINT32   ulPageIndex;                               /**< [en]id means to handle the searching contactor result message. [cn]��ǰ��Ҫ���ҵ�ҳ�� */
    TUP_UINT32   ulExactSearch;                             /**< [en]flag differring from exact searching or not;if exact searching,result just has one item.                    [cn]�Ƿ�ȷ���ң�ȡֵ��0:ģ����1:��ȷ;��ȷ��ѯ����ƥ�䵽�������򷵻ض�Ӧ�ĵ�һ��ֵ */
    TUP_UINT32   ulSeqNo;                                   /**< [en]sequence number. [cn]��ѯ��� */
    TUP_CHAR     acDepId[TUP_EADDR_D_ENTERPRISE_DEPID_LEN]; /**< [en]department ID. [cn]����ID������ѯ����յ� */
} TUP_EADDR_S_SEARCH_PARAM;


/**
 * [en]message priority.
 * [cn]��Ϣ���ȼ� 
 */
typedef enum tagTUP_EADDR_E_MsgPrio
{
    EADDR_MSG_PRIO_HIGH = 2,     /**< [en] high.          
	                                  <br>[cn]���ȼ���*/
    EADDR_MSG_PRIO_MID,          /**< [en] medium.          
	                                  <br>[cn]���ȼ���*/
    EADDR_MSG_PRIO_LOW,          /**< [en] low.          
	                                  <br>[cn]���ȼ��� */
    EADDR_MSG_PRIO_BUTT
}TUP_EADDR_E_MsgPrio;


/**
 * [en]getting icon term
 * [cn]ͷ�������ṹ�� 
 */
typedef struct tagTUP_EADDR_S_ICON_PARAM
{
    TUP_INT8        acStaffAccount[TUP_EADDR_D_ENTERPRISE_STAFFACCOUNT_LEN];/**< [en]UC account. [cn]UC�˺� */
    TUP_UINT32      ulSeqNo;                                                /**< [en]sequence number. [cn]��ѯ���*/
    TUP_EADDR_E_MsgPrio   enMsgPrio;                                        /**< [en]searching priority. [cn]ͷ���ѯ���ȼ� */
} TUP_EADDR_S_ICON_PARAM;

/**
 * [en]searching department term
 * [cn]�����б����������ṹ�� 
 */
typedef struct tagTUP_EADDR_S_DEP_PARAM
{
    TUP_INT8    acDepId[TUP_EADDR_D_ENTERPRISE_DEPID_LEN];  /**< [en]department ID. [cn]��ѯ�Ĳ���ID��IDΪ-1ʱ�����ȡ0��1������ */
    TUP_UINT32  ulSeqNo;                                    /**< [en]sequence number. [cn]��ѯ��� */
} TUP_EADDR_S_DEP_PARAM;

/**
 * [en]searching result message id.
 * [cn]ͨѶ¼��ѯ�����Ϣ����
 */
typedef enum tagTUP_EADDR_E_RESULT_OPER_ID
{
    TUP_EADDR_E_HANDLE_PERSONINFO,   /**< [en]id means to handle the searching contactor result message
                                          <br>[cn]������ϵ����Ϣ���������Ϣ */
    TUP_EADDR_E_HANDLE_ICON,         /**< [en]id means to handle the searching contactor's icon result message
                                          <br>[cn]������ϵ��ͷ����������Ϣ */
    TUP_EADDR_E_HANDLE_DEPTINFO,     /**< [en]id means to handle the searching contactor's department result message
                                          <br>[cn]������ϵ�˲��Ž��������Ϣ */
    TUP_EADDR_E_HANDLE_BUTT
} TUP_EADDR_E_RESULT_OPER_ID;

/**
 * [en]searching contactor information.
 * [cn]��ϵ����ϸ��Ϣ��ѯ���
 */
typedef struct tagTUP_EADDR_S_CONTACTOR_INFO
{
    TUP_INT8    StaffAccount[TUP_EADDR_D_ENTERPRISE_STAFFACCOUNT_LEN];  /**< [en]the uc account. [cn]UC�˺� */
    TUP_INT8    PersonName[TUP_EADDR_D_ENTERPRISE_NAME_LEN];            /**< [en]the person's name. [cn]���� */
    TUP_INT8    Staffno[TUP_EADDR_D_ENTERPRISE_STAFFNO_LEN] ;           /**< [en]the person's staff number. [cn]���� */
    TUP_INT8    Terminal[TUP_EADDR_D_ENTERPRISE_NUM_LEN];               /**< [en]the person's ip number. [cn]IP���� ���ն˺��� */
    TUP_INT8    Terminal2[TUP_EADDR_D_ENTERPRISE_NUM_LEN];              /**< [en]the person's ip long number. [cn]���ն˹������� */
    TUP_INT8    DeptName[TUP_EADDR_D_ENTERPRISE_DEPT_LEN];              /**< [en]the person's department name. [cn]�������� */
    TUP_INT8    Title[TUP_EADDR_D_ENTERPRISE_COMMON_LEN];               /**< [en]the person's title. [cn]ְ�� */
    TUP_INT8    Mobile[TUP_EADDR_D_ENTERPRISE_NUM_LEN];                 /**< [en]the person's cellphone. [cn]�ֻ����� */
    TUP_INT8    Homephone[TUP_EADDR_D_ENTERPRISE_NUM_LEN];              /**< [en]the person's home number. [cn]��ͥ�绰 */
    TUP_INT8    Email[TUP_EADDR_D_ENTERPRISE_EMAIL_LEN];                /**< [en]the person's email. [cn]���� */
    TUP_INT8    OfficePhone[TUP_EADDR_D_ENTERPRISE_NUM_LEN];            /**< [en]the person's seat phone. [cn]�������� �칫�绰 */
    TUP_INT8    OfficePhone2[TUP_EADDR_D_ENTERPRISE_NUM_LEN];           /**< [en]the person's office phone No.2. [cn]Ӳ�ն�2 */
    TUP_INT8    OfficePhone3[TUP_EADDR_D_ENTERPRISE_NUM_LEN];           /**< [en]the person's office phone No.3. [cn]Ӳ�ն�3 */
    TUP_INT8    OfficePhone4[TUP_EADDR_D_ENTERPRISE_NUM_LEN];           /**< [en]the person's office phone No.4. [cn]Ӳ�ն�4 */
    TUP_INT8    OfficePhone5[TUP_EADDR_D_ENTERPRISE_NUM_LEN];           /**< [en]the person's office phone No.5. [cn]Ӳ�ն�5 */
    TUP_INT8    OfficePhone6[TUP_EADDR_D_ENTERPRISE_NUM_LEN];           /**< [en]the person's office phone No.6. [cn]Ӳ�ն�6 */
    TUP_INT8    Otherphone[TUP_EADDR_D_ENTERPRISE_NUM_LEN];             /**< [en]the person's other phone number No.1. [cn]�����绰 */
    TUP_INT8    Otherphone2[TUP_EADDR_D_ENTERPRISE_NUM_LEN];            /**< [en]the person's other phone number No.2. [cn]�����绰2 */
    TUP_CHAR    Gender[TUP_EADDR_D_ENTERPRISE_GENDER_LEN];              /**< [en]the person's gender. [cn]�Ա� */
    TUP_CHAR    ZipCode[TUP_EADDR_D_ENTERPRISE_ZIPCODE_LEN];            /**< [en]the person's zip code. [cn]�ʱ� */
    TUP_CHAR    Address[TUP_EADDR_D_ENTERPRISE_ADDRESS_LEN];            /**< [en]the person's address. [cn]��ַ */
    TUP_CHAR    Signature[TUP_EADDR_D_ENTERPRISE_SIGNATURE_LEN];        /**< [en]the person's signature. [cn]ǩ�� */
}TUP_EADDR_S_CONTACTOR_INFO;

/**
 * [en]result of searching contactor.
 * [cn]��ϵ���������
 */
typedef struct tagTUP_EADDR_S_SEARCH_CONTACTOR_RESULT
{
    TUP_UINT32 ret;                                      /**< [en]result number. [cn]�����룬���ж�Ӧ��enumֵ��ο� ȡֵ�ο�,�ɹ�ȡTUP_SUCCESS��0��������ȡ��Ӧ������*/
    TUP_UINT32 ulSeqNo;                                  /**< [en]sequence number. [cn]��ѯ��� */
    TUP_UINT32 ulPage;                                   /**< [en]page number. [cn]��ǰҳ�� */
    TUP_UINT32 ulTotalNum;                               /**< [en]total contactor number. [cn]��ϵ������ */
    TUP_CHAR   acSearchItem[TUP_EADDR_D_SEARCH_MAX_LEN]; /**< [en]search item. [cn]�������� */
    TUP_EADDR_S_CONTACTOR_INFO* pstContactorInfo;        /**< [en]contactor infomation. [cn]��ϵ����Ϣ */
}TUP_EADDR_S_SEARCH_CONTACTOR_RESULT;

/**
 * [en]result of getting user icon.
 * [cn]ͷ���ѯ���
 */
typedef struct tagTUP_EADDR_S_GETICON_RESULT
{
    TUP_UINT32 ret;                                      /**< [en]result number. [cn]�����룬�ɹ�ȡTUP_SUCCESS��0��������ȡ��Ӧ������ */
    TUP_UINT32 ulSeqNo;                                  /**< [en]sequence number. [cn]��ѯ��� */
    TUP_UINT32 ulSysIconID;                              /**< [en]system Icon id. [cn]ϵͳͷ��id */
    TUP_CHAR   acIconFile[TUP_EADDR_D_ICONNAME_MAX_LEN]; /**< [en]self-define Icon file path. [cn]�Զ���ͷ���ļ�·�� */
}TUP_EADDR_S_GETICON_RESULT;

/**
 * [en]department information.
 * [cn]������Ϣ�ṹ��
 */
typedef struct tagTUP_EADDR_S_DEPT_INFO
{
    TUP_INT8   deptId[TUP_EADDR_D_ENTERPRISE_DEPID_LEN];  /**< [en]department id. [cn]����id */
    TUP_INT8   parentId[TUP_EADDR_D_ENTERPRISE_DEPID_LEN];/**< [en]parent id. [cn]���ڵ�id */
    TUP_INT8   deptName[TUP_EADDR_D_DEPNAME_MAX_LEN];     /**< [en]department name. [cn]�������� */
}TUP_EADDR_S_DEPT_INFO;

/**
 * [en]result of searching department.
 * [cn]���Ų�ѯ���
 */
typedef struct tagTUP_S_EADDR_SEARCH_DEPT_RESULT
{
    TUP_UINT32 ret;                                             /**< [en]result number. [cn]�����룬�ɹ�ȡTUP_SUCCESS��0��������ȡ��Ӧ������ */
    TUP_UINT32 ulSeqNo;                                         /**< [en]sequence number. [cn]��ѯ��� */
    TUP_INT8   acSearchDepId[TUP_EADDR_D_ENTERPRISE_DEPID_LEN]; /**< [en]searching department id. [cn]��ѯ�Ĳ���ID */
    TUP_UINT32 ulItemNum;                                       /**< [en]item number. [cn]��ѯ������һ��������Ŀ����*/
    TUP_EADDR_S_DEPT_INFO* pstDeptInfo;                         /**< [en]department info. [cn]��ѯ�Ĳ�����Ϣ */
}TUP_EADDR_S_SEARCH_DEPT_RESULT;


#ifdef __cplusplus
#if __cplusplus
}
#endif
#endif /* __cplusplus */
#endif /*__TUP_EADDR_DEF_H__*/
