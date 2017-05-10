/** 
* @file call_advanced_def.h
* 
* Copyright(C), 2012-2015, Huawei Tech. Co., Ltd. ALL RIGHTS RESERVED. \n
* 
* ������TUP ������ϵͳ�߼�ҵ����ͷ�ļ��� \n
*/


/**
*
*  @{
*/
 

#ifndef __CALL_ADVANCED_DEF_H__
#define __CALL_ADVANCED_DEF_H__

/*******************************************************************************
 *   ���ļ���Ҫ����������ͷ�ļ�
 *******************************************************************************/
#include "tup_def.h"
#include "call_def.h"

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif /*  __cpluscplus */
#endif /*  __cpluscplus */



#define CALL_D_MAX_STR_LENGTH                       (256)   /**< ͨ���ַ�����󳤶� */
#define CALL_D_512_STR_LENGTH                       (512)   /**< 512�ֽڳ��� */
#define CALL_D_256_STR_LENGTH                       (256)   /**< 256�ֽڳ��� */
#define CALL_D_128_STR_LENGTH                       (128)   /**< 128�ֽڳ��� */
#define CALL_D_64_STR_LENGTH                        (64)    /**< 64�ֽڳ��� */
#define CALL_D_32_STR_LENGTH                        (32)    /**< 32�ֽڳ��� */
#define CALL_D_16_STR_LENGTH                        (16)    /**< 16�ֽڳ��� */

#define CALL_D_AUDIO_EQ_MAX_BANDS                   (10)    /**< ��ƵEQ BAND�����*/
#define CALL_D_MAX_LOCAL_CONFER_CALL_NUM            (10)    /**< ������·��*/

#define CALL_D_MAXNUM_GET_MEETING_INFO_PER_PAGE     (10)    /**< GET CONF LIST ÿ�λ�õ����MEETING ��Ϣ����*/
#define CALL_D_CONF_MAX_PW_LEN                      (10)    /**< ���������������󳤶� */
#define CALL_D_MAX_BITFLAG_LEN                      (33)    /**< ������չ��ʶ���� */
#define CALL_D_MAX_SERVERCONF_ATTENDEE              (20)    /**< ����������� */

#define CALL_D_MAX_IMS_CONF_NAME_LEN                (128)   /**< IMS����������󳤶�   */
#define CALL_D_MAX_IMS_CONF_CHAIR_PSW_LEN           (32)    /**< IMS������ϯ������󳤶�   */
#define CALL_D_MAX_IMS_CONF_GUEST_PSW_LEN           (32)    /**< IMS��������������󳤶�   */

#define CALL_D_MAX_HISTORY_NUM                      (5)     /**< ��ʷ��¼�����������IMSǰת*/
#define CALL_D_MAX_FOWARD_NUM                       (24)    /**< ���ǰת���ƿ鴦�����*/
#define CALL_D_MAX_UM_MSG_LENGTH                (4 * 1024)  /**< UM��Ϣ����ֽڳ���*/


#define CALL_D_MAX_PAGING_NUM                       (10)    /**< Paging�����ֵ */
#define CALL_D_MAX_HUNTGROUP_NUM                    (10)    /**< HuntGroup�����ֵ */

#define CALL_D_MAX_PRESET_MSG_LENGTH                (100)   /**< Ԥ����Ϣ�ַ�����󳤶� */
#define CALL_D_MAX_NAMESPACE                        (12)    /**< APP���ֿռ���󳤶� */

#define CALL_D_EADDR_ENTERPRISE_STAFFNO_LEN         (32)    /**< ������󳤶�*/
#define CALL_D_EADDR_ENTERPRISE_STAFFACCOUNT_LEN    (128)   /**< �˺���󳤶�*/
#define CALL_D_EADDR_ENTERPRISE_NAME_LEN            (128)   /**< ������󳤶�*/
#define CALL_D_EADDR_ENTERPRISE_NUM_LEN             (33)    /**< ������󳤶�*/
#define CALL_D_EADDR_ENTERPRISE_DEPT_LEN            (256)   /**< ����������󳤶�*/
#define CALL_D_EADDR_ENTERPRISE_COMMON_LEN          (128)   /**< ͨ����󳤶�*/
#define CALL_D_EADDR_ENTERPRISE_EMAIL_LEN           (256)   /**< EMAIL��󳤶�*/
#define CALL_D_EADDR_ENTERPRISE_URI_LEN             (128)   /**< URI��󳤶�*/
#define CALL_D_EADDR_ENTERPRISE_AVATARID_LEN        (144)   /**< ͷ��ID��󳤶� */
#define CALL_D_EADDR_ENTERPRISE_ADDRESS_LEN         (256)    /**< ��ַ��󳤶�*/

#define CALL_CONF_SUBJECT_MAX_STR_LEN               (1024)  /**< ����������󳤶�*/
#define CALL_D_MAX_H323_ID_LEN                      (256)   /**< H323 ID��󳤶� */
#define CALL_D_MAX_H323_SITE_NAME_LEN               (256)   /**< H323�˵�������󳤶� */
#define CALL_D_MAX_LANGUAGE                         (32)    /**< ����������󳤶� */

#define CALL_D_KEYTYPE_QUICK_DIAL                   (1)  /* ����������1��ʱ���ʾ���ٲ���  */
#define CALL_D_KEYTYPE_HUNTGROUP                    (19) /* ��������19��ʾhuntgroup */

#define CALL_D_MAX_CODEC_LEN                        (32)    /* �������������ֵ */


/* BLF���� */
typedef struct tagCALL_S_BLF_ITEM
{
    TUP_UINT32      ulSipAccountID;                       /**< �����˺� */
    TUP_UINT32      ulKeyType;                            /**< ��·������ see CALL_D_KEYTYPE_QUICK_DIAL CALL_D_KEYTYPE_HUNTGROUP  */
    TUP_CHAR        szNumber[CALL_D_MAX_STR_LENGTH];      /**< BLF���ĺ��� */
} CALL_S_BLF_ITEM;

/* AA��¼ģʽ */
typedef enum tagCALL_E_LOGIN_MODE
{
    CALL_E_LOGIN_MODE_NUMBER,        /* �û������¼ */
    CALL_E_LOGIN_MODE_UCACCOUNT,     /* UC�˺ŵ�¼ */
    CALL_E_LOGIN_MODE_BUTT
} CALL_E_LOGIN_MODE;

/**
 * ������Ƶ����Ԥ��ʱ��ʹ�õĽṹ��
 */
typedef struct tagCALL_S_VIDEOCONF_VIDEO_PARAM
{
    TUP_UINT32 xResolution;     /**< x�ֱ���(��) */
    TUP_UINT32 yResolution;     /**< y�ֱ���(��) */
    TUP_UINT32 nBitRate;        /**< ����*/
} CALL_S_VIDEOCONF_VIDEO_PARAM;

/** 
 * [en]This structure is used to describe the svc window info.

 * [cn]����������Ϣ
 */
typedef struct tagCALL_S_SVC_VIDEOWND_INFO
{
    TUP_UPTR    ulRender;                              /**< [en]Window handle. [cn]���ھ��*/
    TUP_UINT32  ulLable;                               /**< [en]lable. [cn]ÿ��������Ҫ������lableֵ*/
} CALL_S_SVC_VIDEOWND_INFO;


/**
 * ��Ƶ�����豸�β�
 */
typedef enum tagCALL_E_VIDEOCONF_DEVICE_INPUT_STATUS
{
    CALL_E_VIDEOCONF_DEVICE_INPUT_STATUS_START,     /**< ��Ч  */
    CALL_E_VIDEOCONF_DEVICE_INPUT_STATUS_INPUT,     /**< ����  */
    CALL_E_VIDEOCONF_DEVICE_INPUT_STATUS_OUTPUT,    /**< �γ�  */
    CALL_E_VIDEOCONF_DEVICE_INPUT_STATUS_BUTT       /**< ��Чֵ  */
} CALL_E_VIDEOCONF_DEVICE_INPUT_STATUS;


/** 
 * ��Ƶ�����豸״̬
 */
typedef enum tagCALL_E_VIDEOCONF_DEVICE_STATUS
{
    CALL_E_VIDEOCONF_DEVICE_LOCAL_STATUS_CLOSE = 0, /**< �ر�״̬  */
    CALL_E_VIDEOCONF_DEVICE_LOCAL_STATUS_OPEN = 1,  /**< ��״̬  */
    CALL_E_VIDEOCONF_DEVICE_LOCAL_STATUS_RESUME = 2,/**< �ָ�  */
    CALL_E_VIDEOCONF_DEVICE_LOCAL_STATUS_PAUSE = 4, /**< ��ͣ  */
    CALL_E_VIDEOCONF_DEVICE_LOCAL_STATUS_ERROR = 5, /**< ����״̬  */
    CALL_E_VIDEOCONF_DEVICE_LOCAL_STATUS_BUTT       /**< ��Чֵ  */
} CALL_E_VIDEOCONF_DEVICE_STATUS;


/** 
 * ��ҵ��ַ������
 */
typedef enum tagCALL_E_EUA_TYPE
{
    CALL_E_EUA_TYPE_INVALID = 0,                    /**< ��Ч���� */
    CALL_E_EUA_TYPE_FTP,                            /**< FTP���� */
    CALL_E_EUA_TYPE_LDAP                            /**< LDAP���� */
}CALL_E_EUA_TYPE;


#define CALL_DEBUG_CMD_TYPE_OFFSET_LENGTH (16)

/**
 * ������������
 */
typedef enum {
    CALL_E_DEBUG_CMD_H323 = 0,      /**< H323 */
    CALL_E_DEBUG_CMD_SIP,           /**< SIP */
    CALL_E_DEBUG_CMD_CC,            /**< Э������� */
    CALL_E_DEBUG_CMD_MEDIA,         /**< ý�� */
    CALL_E_DEBUG_CMD_OTHER          /**< ���� */
}CALL_E_DEBUG_CMD_TYPE;

typedef enum tagCALL_E_DEBUG_COMMAND
{
    CALL_E_DEBUG_COMMAND_H323c_SetTrace = (CALL_E_DEBUG_CMD_H323 << CALL_DEBUG_CMD_TYPE_OFFSET_LENGTH),
    CALL_E_DEBUG_COMMAND_H323c_GetGKCfg,
    CALL_E_DEBUG_COMMAND_H323c_GetGlobCfg,
    CALL_E_DEBUG_COMMAND_H323c_GetCallInfo,
    CALL_E_DEBUG_COMMAND_H323c_GetChanInfo,
    CALL_E_DEBUG_COMMAND_H323c_DbgReSendTCS,
    CALL_E_DEBUG_COMMAND_H323c_DbgSetReSendStartCap,
    CALL_E_DEBUG_COMMAND_H323c_DbgChangeReStartCap,
    CALL_E_DEBUG_COMMAND_H323c_DbgChangeReStartAudioCap,
    CALL_E_DEBUG_COMMAND_H323c_DbgCfgParam,
    CALL_E_DEBUG_COMMAND_H323c_DbgLocalInfo,
    CALL_E_DEBUG_COMMAND_SIP_REGINFO = (CALL_E_DEBUG_CMD_SIP << CALL_DEBUG_CMD_TYPE_OFFSET_LENGTH), 
    CALL_E_DEBUG_COMMAND_SIP_CALLINFO, 
    CALL_E_DEBUG_COMMAND_CC_SHOWCALL = (CALL_E_DEBUG_CMD_CC << CALL_DEBUG_CMD_TYPE_OFFSET_LENGTH),
    CALL_E_DEBUG_COMMAND_CC_CALLINFO,
    CALL_E_DEBUG_COMMAND_CC_SHOWCFG,
    CALL_E_DEBUG_COMMAND_CC_AIRAUXINFO,
    CALL_E_DEBUG_COMMAND_MEDIA_SHOWCFG = (CALL_E_DEBUG_CMD_MEDIA << CALL_DEBUG_CMD_TYPE_OFFSET_LENGTH),
    CALL_E_DEBUG_COMMAND_MEDIA_CHANINFO, 
    CALL_E_DEBUG_COMMAND_BUTT
} CALL_E_DEBUG_COMMAND;

typedef enum tagCALL_E_VIDEOCONF_RESOLUTION
{
    CALL_E_VIDEOCONF_RESOLUTION_QCIF,                       /** �ֱ���176*144 */
    CALL_E_VIDEOCONF_RESOLUTION_QVGA,                       /**320 * 240      */
    CALL_E_VIDEOCONF_RESOLUTION_CIF,                        /** 352 * 288     */
    CALL_E_VIDEOCONF_RESOLUTION_VGA,                        /** 640 *480      */
    CALL_E_VIDEOCONF_RESOLUTION_4CIF,                       /**704 * 576      */
    CALL_E_VIDEOCONF_RESOLUTION_720P,                       /**1280 * 720     */
    CALL_E_VIDEOCONF_RESOLUTION_1080P,                      /**1920 * 1080    */
    CALL_E_VIDEOCONF_RESOLUTION_BUTT
} CALL_E_VIDEOCONF_RESOLUTION;
/** 
 * �ϱ��������������������
 */
typedef enum tagCALL_E_MSG_WAIT_TYPE
{
    CALL_E_MSG_WAIT_TYPE_VOICE = 0,     /**< ������Ϣ */
    CALL_E_MSG_WAIT_TYPE_VIDEO,         /**< ��Ƶ��Ϣ */
    CALL_E_MSG_WAIT_TYPE_FAX,           /**< ������Ϣ */
    CALL_E_MSG_WAIT_TYPE_PAGER,         /**< ҳ����Ϣ */
    CALL_E_MSG_WAIT_TYPE_MULTIMEDIA,    /**< ý����Ϣ */
    CALL_E_MSG_WAIT_TYPE_TEXT,          /**< �ı���Ϣ */
    CALL_E_MSG_WAIT_TYPE_VITRUALVM,     /**< ��������������Ϣ */
    CALL_E_MSG_WAIT_TYPE_BUTT           /**< δ֪��Ϣ */
} CALL_E_MSG_WAIT_TYPE;

/** 
 * ����ԤԼ����
 */
typedef enum tagCALL_E_CONF_START_TYPE
{
    CALL_E_CONF_START_IMMEDIATELY = 0,  /**<  �������� */
    CALL_E_CONF_START_RESERVATION       /**< ԤԼ���� */
}CALL_E_CONF_START_TYPE;

/* 
 * �����ý�����ͱ�ʶ
 */
typedef enum tagCALL_E_CONF_MEDIATYPE_FLAG
{
    CALL_E_CONF_MEDIATYPE_FLAG_VOICE            = 0x01, /**< ����     */
    CALL_E_CONF_MEDIATYPE_FLAG_VIDEO            = 0x02, /**< ������Ƶ */
    CALL_E_CONF_MEDIATYPE_FLAG_HDVIDEO          = 0x04, /**< ������Ƶ */
    CALL_E_CONF_MEDIATYPE_FLAG_TELEPRESENCE     = 0x08, /**< ������Ƶ */
    CALL_E_CONF_MEDIATYPE_FLAG_DATA             = 0x10, /**< ��ý��   */
    CALL_E_CONF_MEDIATYPE_FLAG_DESKTOPSHARING   = 0x20, /**< ���湲�� */
    CALL_E_CONF_MEDIATYPE_FLAG_BUTT
}CALL_E_CONF_MEDIATYPE_FLAG;

/** 
 * ��Ƶ����˫��״̬
 */
typedef struct tagCALL_S_VIDEOCONF_DOUBLESTREAM_STATUS
{
    TUP_CHAR szAttendNum[CALL_D_MAX_STR_LENGTH];    /**< ����ߺ��� */ 
    TUP_UINT32 xResolution;                         /**< x�ֱ���(��)  */
    TUP_UINT32 yResolution;                         /**< y�ֱ���(��)  */

    TUP_UINT32 bHighOrLowChannel;                   /**< ��ǰ���뵽�������ǵ���  */
    TUP_UINT32 bDoubleStream;                       /**< �Ƿ�˫��  */
    TUP_BOOL bOwnLowStream;                         /**< �Ƿ�ӵ�е���  */
    TUP_BOOL bFlowCtrl;                             /**< �Ƿ������ظ澯����  */
} CALL_S_VIDEOCONF_DOUBLESTREAM_STATUS;


/** 
 * ͨ��IPTҵ����Ϣ����
 */
typedef struct tagCALL_S_SERVICE_INFO
{
    TUP_UINT32   ulRight;                                           /**< ҵ��Ȩ��״̬ @see tagCALL_E_SEVICERIGHT_STATUS */
    TUP_UINT32   ulRegister;                                        /**< ҵ��Ǽ�״̬ @see tagCALL_E_SEVICEREGISTER_STATUS */
    TUP_CHAR     acActiveAccessCode[CALL_D_ACCESSCODE_MAX_LENGTH];  /**< �Ǽ������� */
    TUP_CHAR     acDeactiveAccessCode[CALL_D_ACCESSCODE_MAX_LENGTH];/**< ע�������� */
} CALL_S_SERVICE_INFO;



/**
 * IPTҵ��������Ϣ
 */
typedef struct tagCALL_S_SERVICE_PARAM
{
    TUP_CHAR         acCallForwardUnconditionNum[CALL_D_MAX_LENGTH_NUM];/**< ������ǰת���� */
    TUP_CHAR         acCallForwardOnBusyNum[CALL_D_MAX_LENGTH_NUM];     /**< ��æǰת���� */ 
    TUP_CHAR         acCallForwardNoReplyNum[CALL_D_MAX_LENGTH_NUM];    /**< ��Ӧ��ǰת���� */ 
    TUP_CHAR         acCallForwardOfflineNum[CALL_D_MAX_LENGTH_NUM];    /**< ����ǰת���� */ 
    TUP_CHAR         acVoiceMailGetNum[CALL_D_MAX_LENGTH_NUM];          /**< ����������ȡ���� */
    TUP_CHAR         acTurnPhoneNum[CALL_D_MAX_LENGTH_NUM];             /**< �ֻ��ֻ�:ת�Ƶ����������� */
    TUP_CHAR         acTurnMobileNum[CALL_D_MAX_LENGTH_NUM];            /**< �ֻ��ֻ�:ת�Ƶ��ֻ������� */
    TUP_UINT32       ulEaddrSearchType;                                 /**< ��ҵ��ַ���������ͣ�͸���ֶ� */
    TUP_CHAR         acAbbrDial[CALL_D_ACCESSCODE_MAX_LENGTH];          /**< ��λ����ҵ�������� */
    TUP_UINT32       ulVoiceMailSupportType;                            /**< ��������֧�����ͣ�Ԥ���ֶΣ���δʹ�� */
    TUP_CHAR         acVoiceMailNumber[CALL_D_MAX_LENGTH_NUM];          /**< ����������� */
    TUP_CHAR         acVoiceMailSPIN[CALL_D_MAX_LENGTH_NUM];            /**< ����������ȡ��SPIN���� */
    TUP_UINT32       ulVVMHttpsSupport;                                 /**< vvm�Ƿ�֧��https */
    TUP_UINT32       ulCallLimitType;                                   /**< �����޺����� */
    TUP_CHAR         acCallLimitCode[CALL_D_MAX_LENGTH_NUM];            /**< �����޺������� */
    TUP_UINT32       ulHotLineEnable;                                   /**< ����ʹ�ܱ�ʶ */
    TUP_CHAR         acHotLineNumber[CALL_D_128_STR_LENGTH];            /**< ���ߺ��� */
    TUP_UINT32       ulHotLineDelayTime;                                /**< ����ʱ�� */
    TUP_UINT32       ulHotLineType;                                     /**< �������� */
    TUP_BOOL         bIsChangeCFUNum;                                   /**< �Ƿ������������ǰת���� */
    TUP_BOOL         ulLinkageRight;                                    /**< ���ն�ʹ��:�����Ƿ���Ȩ�ޡ�0��û������Ȩ�ޣ�����������Ȩ�ޡ�*/
    TUP_CHAR         acLinkageBinderNum[CALL_D_MAX_LENGTH_NUM];         /**< ���ն˰󶨵������������� */
} CALL_S_SERVICE_PARAM;


/** 
 * ���ؽ����յ���message ��������meeting ��Ϣת�������洦�� TODO
 */
typedef struct tagCALL_S_UM_MEETING_MSG
{
    TUP_CHAR acMeetingTopic[CALL_D_MAX_STR_LENGTH];         /**< ��������*/
    TUP_CHAR acMeetingTime[CALL_D_64_STR_LENGTH];           /**< ����ʱ��*/
    TUP_CHAR acConvener[CALL_D_64_STR_LENGTH];              /**< �����ټ���*/
    TUP_CHAR acAttendee[CALL_D_MAX_SERVERCONF_ATTENDEE* CALL_D_64_STR_LENGTH];  /** ���������,���20��*/
    TUP_CHAR acHost[CALL_D_64_STR_LENGTH];                  /**< ������*/
    TUP_CHAR acHostID[CALL_D_64_STR_LENGTH];                /**< ������id*/
    TUP_CHAR acConfID[CALL_D_128_STR_LENGTH];               /**< ����id*/
    TUP_CHAR acAccessNumber[CALL_D_64_STR_LENGTH];          /**< ���������*/
    TUP_CHAR acSecurityCode[CALL_D_64_STR_LENGTH];          /**< ���鰲ȫ�ţ���ϯ����*/
    TUP_CHAR acStartDate[CALL_D_64_STR_LENGTH];             /**< ���鿪ʼʱ��*/
    TUP_CHAR acValidityPeriodDate[CALL_D_64_STR_LENGTH];    /**< ������Чʱ��*/
    TUP_CHAR acIMContent[CALL_D_MAX_STR_LENGTH * 2];        /**< ��������*/
} CALL_S_UM_MEETING_MSG;

/**
 * ҵ��Ȩ��������
 */
typedef struct tagCALL_S_SERVICERIGHT_CFG
{
    CALL_S_SERVICE_INFO   astSrvInfo[CALL_E_SERVICE_RIGHT_TYPE_BUTT];  /**< IPTҵ����Ϣ��������CALL_E_SERVICE_RIGHT_TYPE ��Ӧ */
    CALL_S_SERVICE_PARAM  stServiceParam;           /**< IPTҵ��������Ϣ */
    TUP_CHAR acIntercomNum[CALL_D_MAX_LENGTH_NUM];  /**< intercom���� */
} CALL_S_SERVICERIGHT_CFG;


/** 
 * ��Ϣ֪ͨ��Ϣ����
 */
typedef struct tagCALL_S_MSG_INFO
{
    CALL_E_MSG_WAIT_TYPE enMsgType;                 /**< ���Ե����� */
    TUP_UINT32 ulNewMsgNum;                         /**< ����Ϣ���� */
    TUP_UINT32 ulOldMsgNum;                         /**< ����Ϣ���� */
    TUP_UINT32 ulNewEmgMsgNum;                      /**< �½�����Ϣ���� */
    TUP_UINT32 ulOldEmgMsgNum;                      /**< �ɽ�����Ϣ���� */
    TUP_CHAR   aszSubscriber[CALL_D_MAX_LENGTH_NUM];/**< �����ĺ��� */
} CALL_S_MSG_INFO;


/** 
 * ��������֪ͨ
 */
typedef struct tagCALL_S_MSG_WAIT_INFOS
{
    TUP_UINT32 ulMsgCnt;                                    /**< ��Ϣ���� */
    CALL_S_MSG_INFO astMsgInfos[CALL_D_MAX_MSGSUMMARY_NUM]; /**< ��Ϣ��Ϣ���� */
    TUP_BOOL bMessageWait;                                  /**< MessageWait:yesʱ��������Ϣ�ж��ٸ�������Ҫ���*/
} CALL_S_MSG_WAIT_INFOS;


/** 
 * �鲥������
 */
typedef struct tagCALL_S_PAGING_GROUP_CFG
{
    TUP_CHAR   aszPagingIP[CALL_D_128_STR_LENGTH];
    TUP_UINT32 ulPort;
    TUP_CHAR   aszGroupName[CALL_D_128_STR_LENGTH];
    TUP_CHAR   aszGroupNumber[CALL_D_128_STR_LENGTH];
    TUP_CHAR   aszCodec[CALL_D_MAX_CODEC_LEN];
    TUP_UINT32 ulPtime;
    TUP_BOOL   bIgnoreDND;
    TUP_UINT32 ulPayloadType;
    TUP_UINT32 ulAccountSet;
} CALL_S_PAGING_GROUP_CFG;

/**
 * ������·״̬
 */
typedef enum tagCALL_E_SCASTATE
{
    CALL_E_SCASTATE_IDLE,                /**< ����״̬ */
    CALL_E_SCASTATE_SEIZED,              /**< ռ��״̬ */
    CALL_E_SCASTATE_ALERTING,            /**< ���������� */
    CALL_E_SCASTATE_ACTIVE,              /**< ͨ���� */
    CALL_E_SCASTATE_PROGRESSING,         /**< ������ */
    CALL_E_SCASTATE_HELD,                /**< ����״̬ */
    CALL_E_SCASTATE_HELD_PRIVATE,        /**< ˽�˱���״̬ */
    CALL_E_SCASTATE_BRIDGE_ACTIVE,       /**< bridge����״̬ */
    CALL_E_SCASTATE_LOCK,                /**< ˽�л�״̬ */
    CALL_E_SCASTATE_TERM,                /**< �����ս�*/
    CALL_E_SCASTATE_BUTT                 /**< ��Чֵ  */
} CALL_E_SCASTATE;


/**
 * ���ػ���᳡״̬
 */
typedef enum tagCALL_E_LOCAL_CONF_STATE
{
    CALL_E_LOCAL_CONF_STATE_IDLE,        /**< �������̬ */
    CALL_E_LOCAL_CONF_STATE_INIT,        /**< �����ʼ̬ */
    CALL_E_LOCAL_CONF_STATE_LIVE,        /**< ���鼤��̬ */
    CALL_E_LOCAL_CONF_STATE_HOLD,        /**< ���鱣��̬ */
    CALL_E_LOCAL_CONF_STATE_END,         /**< �������̬ */
    CALL_E_LOCAL_CONF_STATE_BUTT         /**< ������Ч̬ */
} CALL_E_LOCAL_CONF_STATE;


/**
 * ���ػ���Ļ�������
 */
typedef enum tagCALL_E_LOCAL_CONF_TYPE
{
    CALL_E_LOCAL_CONFTYPE_HOLD,         /**< ��������ʱ�᳡������*/
    CALL_E_LOCAL_CONFTYPE_NOHOLD,       /**< ��������ʱ�᳡�ճ�����(���豣�ֻ᳡)*/
    CALL_E_LOCAL_CONF_BUTT              /**< ��Чֵ  */
} CALL_E_LOCAL_CONF_TYPE_ENUM;


/**
 * ����߷���״̬
 */
typedef enum tagCALL_E_LOCAL_CONFREE_TALK_STATE
{
    CALL_E_LOCAL_CONFREE_TALK_STATE_IDLE,       /**< ����̬ */
    CALL_E_LOCAL_CONFREE_TALK_STATE_SPEAKING,   /**< ����̬ */
    CALL_E_LOCAL_CONFREE_STATE_BUTT             /**< ��Ч̬ */
} CALL_E_LOCAL_CONFREE_TALK_STATE;


/** 
 * �����޺�����
 */
typedef enum tagCALL_E_CALL_LIMIT_TYPE
{
    CALL_E_CALL_LIMIT_NONE,                     /**< ������ */
    CALL_E_CALL_LIMIT_HOME,                     /**< �����޺� */
    CALL_E_CALL_LIMIT_INTERNATIONAL,            /**< �����޺� */
    CALL_E_CALL_LIMIT_BOTH,                     /**< �����޺�+�����޺� */
    CALL_E_CALL_LIMIT_BUTT                      /**< ��Чֵ  */
} CALL_E_CALL_LIMIT_TYPE;


/**
 * ��ϵ��״̬
 */
typedef enum  tagCALL_E_CONTACT_STATUS
{
    CALL_E_CONTACT_STATUS_OFFLINE,       /**< ���ߣ����ֳ���---���նˡ�Ӳ�նˡ�CC�ϱ���BLF(Subscription-State: terminated;reason=probation) */
    CALL_E_CONTACT_STATUS_ONLINE,        /**< ���У����ֳ���---���նˡ�Ӳ�նˡ�BLF(terminated) */
    CALL_E_CONTACT_STATUS_BUSY,          /**< æµ�����ֳ���---���ն� */
    CALL_E_CONTACT_STATUS_LEAVE,         /**< �뿪�����ֳ���---���ն� */
    CALL_E_CONTACT_STATUS_DND,           /**< DND �����ֳ���---���նˡ�Ӳ�ն� */
    CALL_E_CONTACT_STATUS_CALLING,       /**< ͨ���У����ֳ���---���նˡ�Ӳ�նˡ�CC�ϱ���BLF(confirmed) */
    CALL_E_CONTACT_STATUS_BUSY_CALLING,  /**< �����У����ֳ���---���� */
    CALL_E_CONTACT_STATUS_BUSY_MEETING,  /**< ������������ */

    CALL_E_CONTACT_STATUS_RINGING,       /**< �������壬���ֳ���---CC�ϱ���BLF(early) */
    CALL_E_CONTACT_STATUS_DAILNUM,       /**< ժ�����ţ����ֳ���---CC�ϱ� */
    CALL_E_CONTACT_STATUS_OFFHOOK,       /**< ժ�������ֳ���---CC�ϱ� */
    CALL_E_CONTACT_STATUS_ONHOOK,        /**< �һ������ֳ���---CC�ϱ� */

    CALL_E_CONTACT_STATUS_UNDND,         /**< ȡ��DND �����ֳ���---���նˡ�Ӳ�նˣ������ڷ���! */
    CALL_E_CONTACT_STATUS_UNBUSY,        /**< ȡ��æµ�������뷢��! */

    CALL_E_CONTACT_STATUS_UNKNOWN,       /**< δ֪״̬  */
    CALL_E_CONTACT_STATUS_PHONE_ONLINE,  /**< ��������  */
    CALL_E_CONTACT_STATUS_PROCEEDING,    /**< ������,�Խ�USM����״̬ */
    CALL_E_CONTACT_STATUS_BUTT           /**< ��Ч״̬ */
} CALL_E_CONTACT_STATUS;

/** 
 * �Ƿ���ʾ���ն˺���
 */
typedef enum tagCALL_E_LINKAGE_STATE 
{
    CALL_E_LINKAGE_STATE_DISPSOFTTEL,      /**< ��ʾ */
    CALL_E_LINKAGE_STATE_NOT_DISPSOFTTEL,  /**< ����ʾ */
    CALL_E_LINKAGE_STATE_BUTT              /**< ��Чֵ  */
}CALL_E_LINKAGE_STATE;


/**
 * ��֤��ʽ
 */
typedef enum tagCALL_E_AUTH_TYPE 
{
    CALL_E_AUTH_TYPE_NO,        /**< ��̬ע��δ��֤ */
    CALL_E_AUTH_TYPE_LOCAL,     /**< ����ע�� */
    CALL_E_AUTH_TYPE_EXTERNAL,  /**< �ⲿע�� */     
    CALL_E_AUTH_TYPE_BUTT       /**< ��Чֵ  */
}CALL_E_AUTH_TYPE;


/**
 * ��ϵ����Ϣ
 */
typedef struct tagCALL_S_CONTACT_INFO
{
    TUP_UINT32  ulIndex;                                            /**< ��ǰ������·��ʶ */
    TUP_INT8    StaffAccount[CALL_D_EADDR_ENTERPRISE_STAFFACCOUNT_LEN]; /**< UC�˺� */
    TUP_INT8    PersonName[CALL_D_EADDR_ENTERPRISE_NAME_LEN];       /**< ���� */
    TUP_UINT32  Sex;                                                /**< �Ա� */
    TUP_INT8    Staffno[CALL_D_EADDR_ENTERPRISE_STAFFNO_LEN] ;      /**< ���� */
    TUP_INT8    IPNum[CALL_D_EADDR_ENTERPRISE_NUM_LEN];             /**< IP���� */
    TUP_INT8    DeptName[CALL_D_EADDR_ENTERPRISE_DEPT_LEN];         /**< �������� */
    TUP_INT8    Title[CALL_D_EADDR_ENTERPRISE_COMMON_LEN];          /**< ְ�� */
    TUP_INT8    CellPhone[CALL_D_EADDR_ENTERPRISE_NUM_LEN];         /**< �ֻ����� */
    TUP_INT8    Seatphone[CALL_D_EADDR_ENTERPRISE_NUM_LEN];         /**< �������� */
    TUP_INT8    Otherphone[CALL_D_EADDR_ENTERPRISE_NUM_LEN];        /**< ������� */
    TUP_INT8    Otherphone2[CALL_D_EADDR_ENTERPRISE_NUM_LEN];       /**< �������2 */
    TUP_INT8    homephone[CALL_D_EADDR_ENTERPRISE_NUM_LEN];         /**< ��ͥ���� */
    TUP_INT8    acOfficePhone1[CALL_D_EADDR_ENTERPRISE_NUM_LEN];    /* �칫����1 */
    TUP_INT8    acOfficePhone2[CALL_D_EADDR_ENTERPRISE_NUM_LEN];    /* �칫����2 */
    TUP_INT8    acOfficePhone3[CALL_D_EADDR_ENTERPRISE_NUM_LEN];    /* �칫����3 */
    TUP_INT8    acOfficePhone4[CALL_D_EADDR_ENTERPRISE_NUM_LEN];    /* �칫����4 */
    TUP_INT8    acOfficePhone5[CALL_D_EADDR_ENTERPRISE_NUM_LEN];    /* �칫����5 */
    TUP_INT8    acOfficePhone6[CALL_D_EADDR_ENTERPRISE_NUM_LEN];    /* �칫����6 */
    TUP_INT8    Email[CALL_D_EADDR_ENTERPRISE_EMAIL_LEN];           /**< email */
    TUP_INT8    Address[CALL_D_EADDR_ENTERPRISE_ADDRESS_LEN];       /**< ��ַ */
    TUP_UINT32  ulState;                                            /**< ����״̬ TODO */
    TUP_INT8    acuriDomain[CALL_D_EADDR_ENTERPRISE_URI_LEN];       /**< �û�URI */
    TUP_INT8    acAvatarID[CALL_D_EADDR_ENTERPRISE_AVATARID_LEN];   /**< ͷ��ID */
    CALL_E_LINKAGE_STATE    enLinkageState;                         /**< ���ն˺�����ʾ״̬ */
} CALL_S_CONTACT_INFO, *CALL_S_CONTACT_INFO_PTR;

/**
 * ��ϵ�˼���״̬��Ϣ
 */
typedef struct tagCALL_S_CONTACT_STATUS
{
    TUP_UINT32 ulSipAccountID;                      /**< �˺�ID */
    TUP_CHAR acNo[CALL_D_EADDR_ENTERPRISE_NUM_LEN]; /**< ���� */
    CALL_E_CONTACT_STATUS enContactStatus;          /**< ״̬ */
} CALL_S_CONTACT_STATUS, *CALL_S_CONTACT_STATUS_PTR;


/** 
 * ״̬��Ϣ
 */
typedef struct tagCALL_S_STATUS
{
    TUP_UINT32 ulNum;                       /**< ��ϵ�˼���״̬��Ϣ���� */
    CALL_S_CONTACT_STATUS* pstStatus;       /**< ��ϵ�˼���״̬��Ϣ���� */
} CALL_S_STATUS, *CALL_S_STATUS_PTR;


/**
 * ��ϵ��״̬֪ͨ
 */
typedef struct tagCALL_S_CONTACT_NTF
{
    TUP_UINT8  ucContactNameLen;            /**< ��ϵ�˱������� */
    TUP_UINT8  ucOnlineState;               /**< ����״̬: 1-���У�����-��æ */
    TUP_UINT8  ucProtocolType;              /**< Э������ 0-H323, 2-SIP */
    TUP_CHAR   acContactName[CALL_D_256_STR_LENGTH]; /**< ��ϵ�˱��� */
}CALL_S_CONTACT_NTF, *CALL_S_CONTACT_NTF_PTR;


/**
 * ����״̬����֪ͨ(����huawei_ido)
 */
typedef struct tagCALL_S_IDO_ONLINE
{
    TUP_UINT32 ulErrCode;               /**< �����붨��:0-�ɹ���0x1-δ�������߹��� 0x2-�����ն������� 0xffffffff-ϵͳ�ڲ����� */
    TUP_BOOL bIsLastPack;               /**< �Ƿ����һ�� */
    TUP_UINT16 uContactCount;           /**< �˺Ÿ��� */
    CALL_S_CONTACT_NTF *pstContactInfo; /**< ��ϵ����Ϣ */
}CALL_S_IDO_ONLINE, *CALL_S_IDO_ONLINE_PTR;


/**
 * �����ַ������֪ͨ(����huawei_ido)
 */
typedef struct tagCALL_S_IDO_NETADDRESS
{
    CALL_E_EUA_TYPE eEUAType;                       /**< EUA���� ftp ���� ldap */
    TUP_CHAR  acAddress[CALL_D_512_STR_LENGTH];     /**< ��������ַ�������ַ�á�;������ */
    TUP_CHAR  acUserName[CALL_D_MAX_STR_LENGTH];    /**< �û��� */
    TUP_UINT32 uiPasswordLen;                       /**< ����� */
    TUP_CHAR  acPassword[CALL_D_MAX_STR_LENGTH];    /**< ���� */
    TUP_CHAR  acFilePath[CALL_D_MAX_STR_LENGTH];    /**< ��ַ���ļ�·�� */
    TUP_CHAR  acDNValue[CALL_D_MAX_STR_LENGTH];     /**< DNֵ */
    TUP_CHAR  acVersion[CALL_D_MAX_STR_LENGTH];     /**< �汾��Ϣ */
    CALL_E_PROTOCOL_TYPE enProtocol;                /**< ����Э��*/

}CALL_S_IDO_NETADDRESS, *CALL_S_IDO_NETADDRESS_PTR;


/**
 *  �˺ű���(����huawei_ido)
 */
typedef struct tagCALL_S_IDO_FORCEUNREG
{
    TUP_BOOL   bIsKickOff;                              /**< �Ƿ��ߣ�4�ֽ� */
    TUP_UINT8  ucIpType;                                /**< ��ַ���ͣ�1�ֽ� */
    TUP_UINT8  acIpAddress[CALL_D_16_STR_LENGTH + 1];   /**< ��ַ��16�ֽ�*/
}CALL_S_IDO_FORCEUNREG, *CALL_S_IDO_FORCEUNREG_PTR;


/**
 * ͬ�����֪ͨ�ϱ���ϢЯ��������
*/
typedef struct tagCALL_S_TIPINFO
{
    TUP_CHAR acCallerNo[CALL_D_MAX_STR_LENGTH];   /**< ���к��� */
    TUP_CHAR acRingNo[CALL_D_MAX_STR_LENGTH];     /**< ������� */
} CALL_S_TIPINFO, *CALL_S_TIPINFO_PTR;


/**
 * ����������Ϣ
 */
typedef struct tagCALL_S_JOINT_CMD_INFOS
{
    TUP_UINT32 ulSipAccountID;                  /**< �˺�ID */
    TUP_UINT32 ulCallID;                        /**< ����ID */
    TUP_UINT32 ulTransferOriginID;              /**< ����������һ���л��ĺ���ID */
    TUP_UINT32 ulConfID;                        /**< ����ID */
    TUP_UINT32 ulLineID;                        /**< ��·ID */
    CALL_E_CALL_EVENT enJointCmdMsg;            /**< ��Ϣ���� */
    TUP_CHAR acCallNum[CALL_D_MAX_STR_LENGTH];  /**< �绰���� */
    TUP_UINT32  ulCallNumLen;                   /**< �绰���볤�� */
    TUP_UINT32  ulResult;                       /**< 0 : �ɹ�������: ʧ��*/
    TUP_CHAR    acConfId[CALL_D_MAX_CONFID_LEN];      /**< ����id */
    TUP_CHAR    acConfPsw[CALL_D_MAX_CONF_PASWD_LEN]; /**< ��������*/
} CALL_S_JOINT_CMD_INFOS;


/**
 * ���������ںϻ����ϱ�֪ͨ��Ϣ�ṹ
 */
typedef struct tagCALL_S_JOINMSCONF_INFO
{
    TUP_UINT32 ulSipAccountID;                      /**< �˺�ID */
    TUP_UINT32 ulCallID;                            /**< ����ID */
    TUP_UINT32 ulConfID;                            /**< ����ID */
    TUP_UINT32 ulMediaType;                         /**< ����ý������ */
    CALL_E_CONF_TOPOLOGY_TYPE enConfTopology;        /**< �������� */
    TUP_CHAR acConfId[CALL_D_MAX_PASSCODE_LENGTH];  /**< ��������� */ 
} CALL_S_JOINMSCONF_INFO;


#define CALL_D_CTD_BIND_NUM_MAX_LEN 255             /**< CTD�󶨺�����󳤶� */
#define CALL_D_CTD_ATTENDEE_MAX_NUM 64              /**< CTD���������� */


/**
 * CTD ֪ͨ��Ϣ�ṹ
 */
typedef struct tagCALL_S_CTD_INFO_BODY
{
    TUP_UINT32   ulServiceType;     /**< ҵ�����ͣ������������� */
    TUP_UINT32   ulCmdType;         /**< �������ͣ������������� */
    TUP_UINT32   ulCtdCallId;       /**< CTD����ID */
    TUP_CHAR     acAttendeeEid[CALL_D_CTD_ATTENDEE_MAX_NUM][CALL_D_CTD_BIND_NUM_MAX_LEN + 1]; /**< Ԥ������δʹ�� */
    TUP_UINT32   ulAttendeeNum;     /**< Ԥ������δʹ�� */
    TUP_CHAR     acCtdCallerNum[CALL_D_CTD_BIND_NUM_MAX_LEN + 1];   /**< CTD���к��� */
    TUP_CHAR     acCtdCalleeNum[CALL_D_CTD_BIND_NUM_MAX_LEN + 1];   /**< CTD���к��� */
}CALL_S_CTD_INFO_BODY;


/**
 * ��ƵEQ��������
 */
typedef enum tagCALL_E_EQ_PARAMS_DIRECTION
{
    CALL_E_EQ_PARAMS_DIRECTION_NONE = 0x00,
    CALL_E_EQ_PARAMS_DIRECTION_UP   = 0x01,       /**< ���з������ */
    CALL_E_EQ_PARAMS_DIRECTION_DOWN = 0x02,       /**< ���з������ */

    CALL_E_EQ_PARAMS_DIRECTION_INVALID = 0xff
}CALL_E_EQ_PARAMS_DIRECTION;

/**
 * ��־�ڵĺ����ӡ����
 */
typedef enum tagCALL_E_CALLOUT_NUMBER_PRINT_MODE
{
    CALL_E_CALLOUT_NUMBER_PRINT_RULE_1,    /**< ���γ��ֵڶ���*��#���������*/
    CALL_E_CALLOUT_NUMBER_PRINT_RULE_2,    /**< �����������ι���:
                                              1. 3λ��3λ���²�����
                                              2. 4��5λ���ε����ڶ�λ
                                              3. 6-7λ���������λ�����ε���3��4��5��λ
                                              4. 8-10λ���������λ�����ε���3��4��5��6��λ�� ���磺*20*556699�������Ժ���־��ӡ�ɣ�*20*****99��
                                              5. ����10λ������ǰ��λ�������λ��������������λ�������磺*20*5566991234�������Ժ���־��ӡ�ɣ�*20*********34��
                                            */
}CALL_E_CALLOUT_NUMBER_PRINT_MODE;

/**
 * ��ƵEQ����
 */
typedef struct tagCALL_S_AUDIO_EQ_PARAMS
{
    TUP_INT32 iSampleRate;                           /**< �����ʣ�֧��8000��16000��48000���ֲ�����*/

    TUP_INT32 iBand_Q[CALL_D_AUDIO_EQ_MAX_BANDS];    /**< Ƶ�ʿ�ȣ�����ֵΪ�˲���Qֵ��Ӧ��Q26����ֵ��Ҫ������
                                                        <br> 1����һ���˲��������һ���˲�������Ϊ����˲������м�Ϊ��ֵ�˲���
                                                        <br> 2������˲���Qֵ���÷�Χ[0.03125, 0.70711]����ӦQ26����ֵ[94906266, 2147483647]
                                                        <br> 3����ֵ�˲���Qֵ���÷�Χ[0.03125, 64]����ӦQ26����ֵ[1048576, 2147483647]*/
    TUP_INT16 sBand_f0[CALL_D_AUDIO_EQ_MAX_BANDS];   /**< �ɵ�Ƶ������Ƶ�ʣ���ͬ�����ʡ���ͬ�˲�����Χ��ͬ��Ҫ������:
                                                        <br> ������8K:��Ƶ����˲�������һƵ�Σ�����Ƶ�ʷ�ΧΪ:10Hz~2000Hz
                                                        <br> ��ֵ�˲������м�Ƶ�Σ�����Ƶ�ʷ�ΧΪ:60Hz~3000Hz
                                                        <br> ��Ƶ����˲��������Ƶ�Σ�����Ƶ�ʷ�ΧΪ:1000Hz~3800Hz
                                                        <br> ������16K:��Ƶ����˲�������һƵ�Σ�����Ƶ�ʷ�ΧΪ:10Hz~4000Hz
                                                        <br> ��ֵ�˲������м�Ƶ�Σ�����Ƶ�ʷ�ΧΪ:60Hz~6000Hz
                                                        <br> ��Ƶ����˲��������Ƶ�Σ�����Ƶ�ʷ�ΧΪ:1000Hz~7800Hz
                                                        <br> ������48K:��Ƶ����˲�������һƵ�Σ�����Ƶ�ʷ�ΧΪ:10Hz~8000Hz
                                                        <br> ��ֵ�˲������м�Ƶ�Σ�����Ƶ�ʷ�ΧΪ:60Hz~16000Hz
                                                        <br> ��Ƶ����˲��������Ƶ�Σ�����Ƶ�ʷ�ΧΪ:1000Hz~22000Hz */
    TUP_INT16 sDBgain[CALL_D_AUDIO_EQ_MAX_BANDS];    /**< �ɵ�Ƶ�����棬���÷�Χ[-24, 24]dB*/
                                                          
    TUP_INT32 iNBand;                                /**< Ƶ���������÷�Χ[0, 10]��0����ر�EQ*/

    TUP_INT32 iACLPEnabled;                          /**< ����ģ���־: 1��ʾ������0��ʾ�ر�*/

}CALL_S_AUDIO_EQ_PARAMS;


/**
 * ��ƵAEC����
 */
typedef struct tagCALL_S_AUDIO_AEC_PARAMS
{
    TUP_UINT8   ucCngMode;              /**< ��������ģʽ: ��رգ�����򿪣�Ĭ�ϴ�, */  
    TUP_UINT8   ucPureDelay;            /**< ������, ȡֵ<br>0:0ms, 1:10ms, 2:20ms, 3:30ms, 4:40ms, 5:50ms, 6:60ms, Ĭ��Ϊ0ms*/
    TUP_UINT16  usNearAllPassEnergy;    /**< �жϽ����Ƿ�͸����Զ��������ֵ, ȡֵ<br>0:-59dBm0, 1:-49dBm0, 2:-39dBm0, Ĭ��Ϊ1 */
    TUP_UINT8   ucNearCleanSupEnergy;   /**< �жϽ����Ƿ�Ϊ������֡����ֵ, ȡֵ<br>0:12dB, 1:15dB, 2:18dB, Ĭ��Ϊ2,  */
    TUP_UINT8   ucMode;                 /**< ����ģʽ��ȡֵ<br>0:��Ͳ, 1:����, Ĭ��Ϊ��Ͳģʽ */
    TUP_UINT8   ucSampleRate;           /**< ������, ȡֵ<br>0:8K,1:16K,2:24K,3:48K, Ĭ��Ϊ48K, Ŀǰ��֧��24K������ */
}CALL_S_AUDIO_AEC_PARAMS;


/**
 * ��ƵEQ���ò���
 */
typedef struct tagCALL_S_AUDIO_EQ_CONFIG
{
    CALL_E_EQ_PARAMS_DIRECTION   eParamsDirection;  /**< ������־λ������or���� CALL_E_EQ_PARAMS_DIRECTION*/
    TUP_INT32 iMode;                                /**< EQ״̬����0��ʾ��EQ��0��ʾ�ر�EQ */
    CALL_S_AUDIO_EQ_PARAMS stEqCfg_8K;              /**< ������Ϊ8Kʱ��EQ�����б� */
    CALL_S_AUDIO_EQ_PARAMS stEqCfg_16K;             /**< ������Ϊ16Kʱ��EQ�����б� */
    CALL_S_AUDIO_EQ_PARAMS stEqCfg_48K;             /**< ������Ϊ48Kʱ��EQ�����б� */
    TUP_CHAR acVolMap[CALL_D_MAX_STR_LENGTH];       /**< ��������ĵ��ڷ�Χӳ����ö��ŷֿ�ÿ��ֵ */
    TUP_UINT32 ulMicVolume;                         /**< MIC��������[0-10000] */
}CALL_S_AUDIO_EQ_CONFIG;




/**
 * ��ǰ��������Ϣ
 */
typedef struct tagCALL_S_CURRENT_SIPSERVER
{
    TUP_CHAR acCurrentRegAddress[CALL_D_MAX_STR_LENGTH];    /**< ��ǰʹ�õ�SIPע���������ַ */
    TUP_UINT32 ulCurrentRegPort;                            /**< ��ǰʹ�õ�SIPע��������˿� */

    TUP_CHAR acCurrentProxyAddress[CALL_D_MAX_STR_LENGTH];  /**< ��ǰʹ�õĴ����������ַ */
    TUP_UINT32 ulCurrentProxyPort;                          /**< ��ǰʹ�õĴ���������˿� */
} CALL_S_CURRENT_SIPSERVER;


/**
 * SIP��ַ��Ϣ
 */
typedef struct tagCALL_S_SIP_ADDR_INFO
{
    TUP_CHAR acSipAddress[CALL_D_64_STR_LENGTH];
    TUP_INT32 iPort;
} CALL_S_SIP_ADDR_INFO;


/**
 * �������Ϣ
 */
typedef struct tagCALL_S_CONFEREE_INFO
{
    TUP_UINT32 ulCallID;                              /**< �������·ͨ��ID����ЧIDΪ0xFFFFFFFF */
    TUP_BOOL bIsMuted;                                /**< ������Ƿ񱻾��� */
    CALL_E_LOCAL_CONFREE_TALK_STATE enTalkState;      /**< �����˵��״̬ */
} CALL_S_CONFEREE_INFO;



/**
 * �������·�б�
 */
typedef struct tagCALL_S_CONFER_CALLID_LIST
{
    CALL_S_CONFEREE_INFO astConfereeList[CALL_D_MAX_LOCAL_CONFER_CALL_NUM];    /**< ������б�*/
    TUP_UINT32 ulCnt;                                                          /**< ��������� */
} CALL_S_CONFER_CALLID_LIST;



/**
 * ���ػ�����Ϣ
 */
typedef struct tagCALL_S_CONFER_LOCAL_INFO
{
    TUP_UINT32 ulConfID;                          /**< ���ػ���᳡ID */
    TUP_UINT32 ulSipAccountID;                    /**< ���ػ�����ϯSipID */
    TUP_UINT32 ulCreatorCallID;                   /**< �����᳡��·��CallID */
    TUP_UINT32 ulCreatorLineID;                   /**< ���鴴����·��ID */
    CALL_E_LOCAL_CONF_STATE   enConfState;        /**< �᳡״̬ */
    CALL_E_LOCAL_CONF_TYPE_ENUM enLocConfType;    /**< ���ػ�������*/
    CALL_S_CONFER_CALLID_LIST stConfCallIDList;   /**< �����CallID�б�*/
} CALL_S_CONFER_LOCAL_INFO;



/**
 * Desktop�˵�����
 */
typedef struct tagCALL_S_SERVICE_EXTENSION_CFG
{
    TUP_UINT32 ulMessageButton;
    TUP_UINT32 ulEnableLogout;
} CALL_S_SERVICE_EXTENSION_CFG;


/** 
 * �������з���Ϣ
 */
typedef struct tagCALL_S_PICKUP_REMOTE_INFO
{
    TUP_CHAR acTelNum[CALL_D_MAX_STR_LENGTH];   /**<  ָ���������з����� */
    TUP_CHAR acDisplayName[CALL_D_64_STR_LENGTH];  /**< ָ���������з���ʾ���� */
} CALL_S_PICKUP_REMOTE_INFO;


/** 
 * ������״̬(���� OR ����)
 */
typedef enum tagCALL_E_CALLINFO_ORIGINATE
{
    CALL_E_CALLINFO_ORIGINATE_FROM,                      /**< ������״̬Ϊ���ߺ��� */
    CALL_E_CALLINFO_ORIGINATE_TO,                        /**< ������״̬Ϊ�����ߺ��� */
    CALL_E_CALLINFO_ORIGINATE_BUTT,                      /**< ������״̬��Դδ֪ */
}CALL_E_CALLINFO_ORIGINATE;


/** 
 * �����ߺ�����Ϣ
 */
typedef struct tagCALL_S_SCA_CALLINFO
{
    TUP_UINT32 ulSipAccountID;                      /**< �˻�ID */
    TUP_UINT32 ulAppearanceIndex;                   /**< ��·�� */
    TUP_UINT32 ulAppearanceState;                   /**< ��·״̬��
                                                         <br>0:���� 1:ռ�� 2:�������� 3:ͨ���� 4:������ 5:������ 
                                                         <br>6:˽�˱����� 7:bridge���� 8:˽�л�״̬ 9: �����ս� */
    CALL_E_CALLINFO_ORIGINATE enOriginateType;      /**< ������״̬��Դ */
    TUP_CHAR acDisplayName[CALL_D_MAX_DISPLAY_NAME];/**< ������ͨ����Ϣ��ʾ���� */
    TUP_CHAR acDisplayNum[CALL_D_MAX_LENGTH_NUM];   /**< ������ͨ����Ϣ��ʾ���� */
} CALL_S_SCA_CALLINFO;



/** 
 * Reinvite�¼��ϱ�
 */
typedef enum
{
    CALL_E_REINVITE_PNOTIFICATION_NONE,             /**< ��Ч�¼� */
    CALL_E_REINVITE_PNOTIFICATION_HOLD,             /**< �����¼� */
    CALL_E_REINVITE_PNOTIFICATION_UNHOLD,           /**< ȡ�������¼� */
    CALL_E_REINVITE_PNOTIFICATION_BUTT              /**< ��Чֵ  */
} CALL_E_REINVITE_TYPE;


/**
 * �����޺��Ǽ�ԭ����
 */
typedef enum tagCALL_E_CAUSE_RESON
{
    CALL_E_CAUSE_NORMAL = 0,        /**< �ɹ� */
    CALL_E_CAUSE_FAILURE,           /**< ʧ�� */
    CALL_E_CAUSE_LOCKED,            /**< ���� */
    CALL_E_CAUSE_NOLINE,            /**< �޿�����· */
    CALL_E_CAUSE_BUSY,              /**< �û�æ */
    CALL_E_CAUSE_REJECT_LOCALNOANSWER,                 /* ��ʾ���峬�����涨ʱ��ʱ��   */
    CALL_E_CAUSE_PHONE_NOANSWER,    /**< ��ʾ�����Ļ�������Ӧ   */
    CALL_E_CAUSE_BUTT               /**< ��Чֵ  */
} CALL_E_CAUSE_RESON;

//������������CALL_D_CFG_H239_ROLE����
typedef struct tagCALL_S_H239_ROLE
{
    TUP_UINT8 H239_control;                              /* H239 ��������, ���Ƿ�֧�� Presentation ��ɫ */
    TUP_UINT8 H239_live;                                 /* H239 �Ƿ�֧�� Live ��ɫ */
} CALL_S_H239_ROLE;

/**
 * H323Э��˿ڣ���CALL_D_CFG_H323_PORT����
 */
typedef struct tagCALL_S_H323_Port
{
    TUP_UINT32 H245_port;           /**< H245�˿� */
    TUP_UINT32 RAS_port;            /**< RAS�˿� */
    TUP_UINT32 Q931_port;           /**< Q931�˿� */
} CALL_S_H323_PORT;

/**
 * ע��ģʽ
 */
typedef struct tagCALL_S_REGIST_MODE
{
    CALL_E_PROTOCOL_TYPE protocol;      /**< Э������ */
    CALL_E_REGIST_TYPE   regist_type;   /**< ע��ģʽ */
} CALL_S_REGISTER_MODE;

/**
 * �Զ��غ���Ϣ�ṹ
 */
typedef struct tagCALL_S_ACB_INFO
{
    TUP_UINT32 ulTime1;                             /**< �������õĻغ���ʱʱ��*/
    TUP_CHAR acCalleeNum[CALL_D_MAX_STR_LENGTH];    /**< �غ����� */
    TUP_UINT32 ulOverTime;                          /**< �غ�ʣ��ʱ�� */
} CALL_S_ACB_INFO;


/**
 * ��¼����(¼*��)���֪ͨ��Ϣ�ṹ
 */   
typedef struct tagCALL_S_RECORD_INFO
{
    TUP_BOOL bRecordStatus;         /**< �Ƿ���(¼*��)״̬ */
    TUP_BOOL bRecordRight;          /**< �Ƿ���(¼*��)Ȩ�� */
}CALL_S_RECORD_INFO;



/**
 * ����״̬
 */
typedef enum tagCALL_E_SUB_STATE
{
    CALL_E_SUB_STATE_UNSUB,     /**< δ���� */
    CALL_E_SUB_STATE_SUBING,    /**< ������ */
    CALL_E_SUB_STATE_DESUBING,  /**< ȥ������ */
    CALL_E_SUB_STATE_SUBED,     /**< �Ѷ��� */
    CALL_E_SUB_STATE_BUTT       /**< ������Ч״̬ */
} CALL_E_SUB_STATE;


/**
 * ��·����
 */
typedef enum tagCALL_E_LINETYPE
{
    CALL_E_LINETYPE_NORMAL,     /**< ��ͨ������· */
    CALL_E_LINETYPE_SCA,        /**< ��������· */
    CALL_E_LINETYPE_BUTT        /**< ��Чֵ  */
} CALL_E_LINE_TYPE;


/**
 * Ӳ��(����ͷ)����
 */
typedef struct tagCALL_S_HARDWARE_PARAMS
{
    TUP_UINT32 ulBright;                /**< ���� [1,100]Ĭ��50 */
    TUP_UINT32 ulContrast;              /**< �Աȶ� [1,100]Ĭ��50 */
    TUP_UINT32 ulDigitalZoom;           /**< ���ֱ䱶 [1,100]Ĭ��50 */

} CALL_S_HARDWARE_PARAMS;


/**
 * �Զ��غ�(ACB)�Ǽ�ҵ������
 */
typedef struct tagCALL_S_ACB_SERVICE_DATA
{
    TUP_CHAR   acACBCallNum[CALL_D_MAX_STR_LENGTH];      /**< �غ����� */
    TUP_UINT32 ulACBCallNumLenl;                         /**< �غ����볤�� */
} CALL_S_ACB_SERVICE_DATA;


/**
 * �����޺��Ǽ�ҵ������
 */
typedef struct tagCALL_S_CALL_BARRING_SERVICE_DATA
{
    TUP_CHAR   aszPassword[CALL_D_MAX_STR_LENGTH];    /**< �����޺������� */
    TUP_UINT32 ulPasswordLen;                         /**< ���볤�� */
    TUP_UINT32 ulLimitType;                           /**< �����޺������� */
} CALL_S_CALL_BARRING_SERVICE_DATA;

/**
 * ��ǰת��Ŀ�ĺ�����֪ͨ�ṹ(����IMS������)
 */
typedef struct tagCALL_S_HISTORY_INFO
{
    TUP_UINT32 ulCnt;           /**< ������� */
    TUP_CHAR   aszHistoryNum[CALL_D_MAX_HISTORY_NUM][CALL_D_128_STR_LENGTH]; /**< ������Ϣ���� */
} CALL_S_HISTORY_INFO;


/**
 * Paging ҵ������֪ͨ�ṹ
 */
typedef struct tagCALL_S_PAGING_GROUP
{
    TUP_CHAR aszGroupName[CALL_D_MAX_LENGTH_NUM];   /**< Paging ���� */
    TUP_CHAR aszGroupNumber[CALL_D_MAX_LENGTH_NUM]; /**< Paging ��� */
}CALL_S_PAGING_GROUP;


/**
 * DNDģʽ
 */
typedef enum tagCALL_E_DND_TYPE
{
    CALL_E_DND_TYPE_SERVER = 0,    /**< ������DND */
    CALL_E_DND_TYPE_LOCAL,         /**< ����DND */
    CALL_E_DND_TYPE_BUTT           /**< ��Чֵ  */
} CALL_E_DND_TYPE;


/**
 * LOCAL DND����ģʽ
 */
typedef enum tagCALL_E_LOCALDND_TYPE
{
    CALL_E_LOCALDND_TYPE_REJECT = 0,      /**< ����ܽ� */
    CALL_E_LOCALDND_TYPE_RINGOFF,         /**< ���粻���� */
    CALL_E_LOCALDND_TYPE_BUTT             /**< ��Чֵ  */
} CALL_E_LOCALDND_TYPE;


/** 
 * DND���ݽṹ
 */
typedef struct tagCALL_S_CALL_DND_DATA
{
    TUP_BOOL bSwitch;                       /**< �Ƿ����л�DND������������Ǽ� */
    TUP_BOOL bNeedStartLocalDND;            /**< ��������ɹ����Ƿ���Ҫ���𱾵�DND�Ǽ� */
    TUP_BOOL bSetenableLocalDND;            /**< �Ƿ���Ҫ����enableLocalDND */
    CALL_E_LOCALDND_TYPE enLocalDNDType;    /**< ����DND���� */
    TUP_CHAR acRecvNotifyApp[CALL_D_MAX_NAMESPACE];  /**< ���ͽ����Ŀ�ĵ�ģ��ID*/
} CALL_S_CALL_DND_DATA;

/** 
 * DNDģʽ
 */
typedef struct tagCALL_S_CALL_DNDMODE_CFG
{
    TUP_UINT32 ulDNDMode;                 /*DNDģʽ:����DND��������DND   */
    TUP_UINT32 ulLocalDNDMode;            /*����DNDģʽ:���羲�壬����ܽ�*/
    TUP_UINT32 ulEnableLocalDND;          /*����DNDʹ��                  */
} CALL_S_CALL_DNDMODE_CFG;

/**
 * ǰת����
 */
typedef enum tatCALL_E_FORWARD_TYPE
{
    CALL_E_FORWARD_TYPE_UNCONDITION,        /**< ������ǰת*/
    CALL_E_FORWARD_TYPE_ONBUSY,             /**< ��æǰת*/
    CALL_E_FORWARD_TYPE_NOREPLY,            /**< ��Ӧ��ǰת*/
    CALL_E_FORWARD_TYPE_OFFLINE,            /**< ����ǰת*/
    CALL_E_FORWARD_TYPE_BUTT                /**< ��Чֵ  */
} CALL_E_FORWARD_TYPE;


/**
 * ǰתĿ�����Ͷ���
 */
typedef enum tagCALL_E_FORWARD_DEST_TYPE
{
    CALL_E_FORWARD_DEST_TYPE_PHONENUM = 0,  /**< ǰת����������*/
    CALL_E_FORWARD_DEST_TYPE_VOICEMAIL,     /**< ǰת����������*/
    CALL_E_FORWARD_DEST_TYPE_BUTT           /**< ��Чֵ  */
} CALL_E_FORWARD_DEST_TYPE;


/**
 * ǰת�����ر�
 */
typedef enum tagCALL_E_FORWARD_ONOFF_TYPE
{
    CALL_E_FORWARD_ONOFF_TYPE_ON = 0,       /**< ǰת���ܿ� */
    CALL_E_FORWARD_ONOFF_TYPE_OFF,          /**< ǰת���ܹ� */
    CALL_E_FORWARD_ONOFF_TYPE_BUTT          /**< ��Чֵ  */
} CALL_E_FORWARD_ONOFF_TYPE;

/**
 * ǰת��Ϣ�ṹ��
 */
typedef struct tagCALL_S_FORWARD_INFO
{
    TUP_UINT32 ulSipAccountID;                      /**< �˻�ID*/
    CALL_E_FORWARD_TYPE  enFwdType;                 /**< ǰת����*/
    CALL_E_FORWARD_ONOFF_TYPE enOnOff;              /**< ������ر�    0���� 1�ر�*/
    CALL_E_FORWARD_DEST_TYPE enDstType;             /**< Ŀ������  0����  1��������*/
    TUP_CHAR    acDestNum[CALL_D_MAX_LENGTH_NUM];   /**< ǰתĿ�ĺ��� ���Ϊ�������䣬����Ϊ��*/
    TUP_UINT32  ulResult;                           /**< ǰ�������0�ɹ���1ʧ�ܣ�1��ʼֵ*/
} CALL_S_FORWARD_INFO, *CALL_S_FORWARD_INFO_PTR;


/**
 * ����������/ȡ��ǰת���н����Ϣ�ṹ
 */
typedef struct tagCALL_S_FORWARD_RESULT_INFO
{
    TUP_UINT32 ulSipAccountID;                      /**< �˻�ID */
    TUP_UINT32 ulCallId;                            /**< ����ID */
    CALL_E_FORWARD_TYPE  enFwdType;                 /**< ǰת���� */
    CALL_E_FORWARD_DEST_TYPE enDstType;             /**< Ŀ������ */
    CALL_E_FORWARD_ONOFF_TYPE enOnOff;              /**< ������ر�, 0���� 1�ر� */
    TUP_CHAR    acDestNum[CALL_D_MAX_LENGTH_NUM];   /**< ǰתĿ�ĺ��� ���Ϊ�������䣬����Ϊ�� */
    TUP_UINT32  ulResult;                           /**< ǰ�������0�ɹ���1ʧ�ܣ�1��ʼֵ */
} CALL_S_FORWARD_RESULT_INFO;


/**
 * ������ǰת���֪ͨ���ݽṹ
 */
typedef struct tagCALL_S_FORWARD_SERVICE
{
    TUP_CHAR acRecvNotifyApp[CALL_D_MAX_NAMESPACE];                 /**< ���ͽ����Ŀ�ĵ�ģ��ID */
    TUP_UINT32  ulFwdNum;                                           /**< ǰת���еĸ��� */
    CALL_S_FORWARD_RESULT_INFO  pstFwdResult[CALL_D_MAX_FOWARD_NUM];/**< ǰת��� */
} CALL_S_FORWARD_SERVICE , *CALL_S_FORWARD_SERVICE_PTR;


/**
 * �Զ��غ�(ACB)������Ϣ����
 */
typedef struct tagCALL_S_ACBCALL_REQ_INFO
{
    TUP_UINT32 ulSipAccountID;                      /**< �˻�ID */
    TUP_CHAR acRemoteNum[CALL_D_MAX_STR_LENGTH];    /**< Զ�˺��� */
}CALL_S_ACB_REQ_INFO;

 
/** 
 * ǰתҵ�����ݽṹ
 */
typedef struct tagCALL_S_CALL_FORWARD_SERVICE_DATA
{
    TUP_CHAR    astDestNum[CALL_D_MAX_LENGTH_NUM]; /**< ǰת����*/
    TUP_UINT32 ulDestNumLen;                       /**< ǰת���볤��*/
} CALL_S_CALL_FORWARD_SERVICE_DATA;


/** 
 * HuntGroupҵ�����ݽṹ
 */
typedef struct tagCALL_S_HUNTGROUP_DATA
{
    TUP_CHAR   aszGroupNumber[CALL_D_MAX_LENGTH_NUM];  /**< HuntGroup���*/
}CALL_S_HUNTGROUP_DATA;

/** 
 * δ����������ҵ�����ݽṹ
 */
typedef struct tagCALL_S_CALL_ALERT_DATA
{
    TUP_CHAR   aszUCAccount[CALL_D_MAX_LENGTH_NUM];  /**< UC�˺�*/
}CALL_S_CALL_ALERT_DATA;

/** 
 * IPTҵ������������
 */
typedef union tagCALL_U_IPT_DATA
{
    CALL_S_ACB_SERVICE_DATA stACBData;                  /**< �Զ��غ�ҵ������*/
    CALL_S_CALL_BARRING_SERVICE_DATA stCallBarringData; /**< �����޺�ҵ������*/
    CALL_S_CALL_FORWARD_SERVICE_DATA stCallForwardData; /**< ����ǰתҵ������*/
    CALL_S_CALL_DND_DATA stDNDData;                     /**< DND��ҵ������*/
    CALL_S_HUNTGROUP_DATA stHuntGroupData;              /**< HuntGroupҵ������*/
    CALL_S_CALL_ALERT_DATA stCallAlertData;             /**< δ����������ҵ������*/
} CALL_U_IPT_DATA;

/** IPTҵ������ */
typedef struct tagCALL_S_IPT_DATA
{
    TUP_CHAR  acRecvNotifyApp[CALL_D_MAX_NAMESPACE];    /**< ���ͽ����Ŀ�ĵ�ģ��ID */
    CALL_E_SERVICE_CALL_TYPE enIPTServiceType;          /**< IPTҵ������ */
    CALL_U_IPT_DATA unIPTData;                          /**< ҵ������������ */
    TUP_BOOL bCancelNextOpIfFail;                       /**< �Ǽ�ʧ��ʱ�Ƿ�ȡ����һ��IPTҵ�� */
} CALL_S_IPT_DATA;

/** 
 * ҵ��Ȩ�޵Ǽǽ����ϸ��Ϣ
 */
typedef struct tagCALL_S_IPT_SET_RESULT
{
    TUP_CHAR                  acDestNum[CALL_D_MAX_LENGTH_NUM];            /**< ǰת����                 */
    CALL_E_SERVICE_RIGHT_TYPE ulServiceRightType;                          /**< IPTҵ������              */
    TUP_BOOL                  bIsActiveService;                            /* �ǵǼǻ�ȡ���Ǽ�,�ж�ҵ���� */
} CALL_S_IPT_SET_RESULT;

/**
 * ���ӻ����������ѯ��Ϣ�ṹ 
 */
typedef struct tagCALL_VVM_QUERY_MSG
{
    TUP_UINT32 ulSipAccountID;                  /**< �˻�ID */
    TUP_UINT32 ulPageLimit;                     /**< ��ѯ�������� ÿҳ���� */
    TUP_UINT32 ulOrderType;                     /**< Ԥ�����ݲ�ʹ�� */
    TUP_CHAR acPrevMsgID[CALL_D_64_STR_LENGTH]; /**< ǰһ��ϢID */
} CALL_S_VVM_QUERY_MSG;


/**
 * ���ӻ���������ת����Ϣ�ṹ 
 */
typedef struct tagCALL_VVM_FWD_MSG
{
    TUP_UINT32 ulSipAccountID;                  /**< �˻�ID */
    TUP_CHAR acMsgID[CALL_D_64_STR_LENGTH];     /**< ��ϢID */
    TUP_CHAR acDstNum[CALL_D_MAX_LENGTH_NUM];   /**< Ŀ�ĺ��� */
} CALL_S_VVM_FWD_MSG;


/**
 * ���ӻ���������ɾ����Ϣ�ṹ 
 */
typedef struct tagCALL_VVM_DEL_MSG
{
    TUP_UINT32 ulSipAccountID;                  /**< �˻�ID */
    TUP_BOOL bIsDelAllMsg;                      /**< �Ƿ�ɾ��������Ϣ */
    TUP_CHAR acMsgID[CALL_D_64_STR_LENGTH];     /**< ��ϢID */
} CALL_S_VVM_DEL_MSG;


 /**
  * �ź�������
  */
typedef enum tagCALL_E_SIGTONE_TYPE
{
    CALL_E_SIGNAL_DIAL,    /**< ������ */
    CALL_E_SIGNAL_BACK,    /**< ������ */
    CALL_E_SIGNAL_BUSY,    /**< æ�� */
    CALL_E_SIGNAL_ALERT,   /**< �澯�� */
    CALL_E_SIGNAL_WAIT,    /**< ������ʾ�� */
    CALL_E_SIGNAL_BUTT     /**< δ֪���� */
} CALL_E_SIGTONE_TYPE;
 

/**
 * UM��Ϣ����
 */
typedef enum tagCALL_E_UM_MSG_TYPE
{
    CALL_E_UM_TYPE_IM,      /**< IM��Ϣ*/
    CALL_E_UM_TYPE_CONF,    /**< ������Ϣ*/
    CALL_E_UM_TYPE_BUTT     /**< ��Чֵ  */
} CALL_E_UM_MSG_TYPE;


/**
 * UM��Ϣ��Ϣ����
 */
typedef struct tagCALL_S_UM_MSG
{
    CALL_E_UM_MSG_TYPE  eMsgType;                       /**< ����Ϣ����, �����Ϳ����Ժ����չ*/
    TUP_UINT32 ulSipAccountID;                          /**< ���ո�IM��Ϣ���˺�ID */
    TUP_UINT32 ulUMContextLen;                          /**< UM ��ϢContext���� */
    TUP_CHAR szFromUserNum[CALL_D_MAX_STR_LENGTH];      /**< UM ��Ϣ��Դ����  */
    TUP_CHAR szSrcPrority[CALL_D_MAX_STR_LENGTH];       /**< MsgExt.SrcPrority �ֶ�*/
    TUP_CHAR szHasAttachment[CALL_D_MAX_STR_LENGTH];    /**< MsgExt.HasAttachment �ֶ�*/
    TUP_CHAR szHistoryMsgNotify[CALL_D_MAX_STR_LENGTH]; /**< HistoryMsgNotify �ֶ�*/
    TUP_CHAR acLocalMsgID [CALL_D_MAX_STR_LENGTH];      /**< MsgExt.localMsgID �ֶ�*/
    TUP_CHAR acMsgSvcType [CALL_D_MAX_STR_LENGTH];      /**< MsgExt.msgSvcType ֵ */
    TUP_CHAR acMsgSort [CALL_D_MAX_STR_LENGTH];         /**< MsgExt.msgSort ֵ */
    TUP_CHAR acMsgExt [CALL_D_MAX_STR_LENGTH];          /**< MsgExt�ֶ� */
    TUP_CHAR acValidTime[CALL_D_MAX_STR_LENGTH];        /**< ValidTime�ֶ� */
    TUP_CHAR acSubmitTime [CALL_D_MAX_STR_LENGTH];      /**< submitTime�ֶ� */
    TUP_CHAR acAnonMsg [CALL_D_MAX_STR_LENGTH];         /**< anonMsg�ֶ� */
    TUP_CHAR acNsImdn [CALL_D_MAX_STR_LENGTH];          /**< Ns:Imdn�ֶ� */
    TUP_CHAR acMessageID [CALL_D_MAX_STR_LENGTH];       /**< imdn.Message-ID�ֶ� */
    TUP_CHAR acContentType [CALL_D_MAX_STR_LENGTH];     /**< content-type�ֶ�*/
    TUP_CHAR acEncode[CALL_D_MAX_STR_LENGTH];           /**< content-transfer-encoding�ֶ� */
    TUP_CHAR acUMContext[CALL_D_MAX_UM_MSG_LENGTH];     /**< UM����*/
} CALL_S_UM_MSG;



/**
 * ���оܽӻظ���������
 */
typedef enum tagCALL_E_REJECTCALL_TYPE
{
    CALL_D_REJECTTYPE_486 = 1,  /**< 486 */
    CALL_D_REJECTTYPE_603,      /**< 603 */
    CALL_D_REJECTTYPE_404,      /**< 404 */
    CALL_D_REJECTTYPE_480,      /**< 480 */
    CALL_D_REJECTTYPE_403,      /**< 403 */
    CALL_D_REJECTTYPE_BUTT      /**< ��Чֵ  */
}CALL_E_REJECTCALL_TYPE;

/**
 * ��������ԭ��ֵ
 */
typedef enum tagCALL_E_END_CALL_REASON
{
    CALL_E_END_CALL_BUSYHERE = 1,                /**< æ */
    CALL_E_END_CALL_REJECT,                      /**< �ܾ� */
    CALL_E_END_CALL_NOT_FOUND,                   /**< δ���� */
    CALL_E_END_CALL_TEMPORARILY_UNAVAILABLE,     /**< ��ʱʧЧ */
    CALL_E_END_CALL_FORBIDDEN,                   /**< ��ֹ */
    CALL_E_END_CALL_BUTT
}CALL_E_END_CALL_REASON;


/**
 * Я����REFRESHER��������
 */
typedef enum tagCALL_E_SESSION_REFRESHER
{
    CALL_E_REFRESHER_UAC,       /**< uac */
    CALL_E_REFRESHER_UAS,       /**< uas */
    CALL_E_REFRESHER_UNDEFINED, /**< δ���� */
    CALL_E_REFRESHER_BUIT       /**< ��Чֵ  */
}CALL_E_SESSION_REFRESHER;


/**
 * ��Ƶ�ܽӻظ���������
 */
typedef enum tagCALL_E_REJECTVIDEO_TYPE
{
    CALL_D_REJECTVIDEOTYPE_200, /**< 200 */
    CALL_D_REJECTVIDEOTYPE_603, /**< 603 */
    CALL_D_REJECTVIDEOTYPE_BUTT /**< ��Чֵ  */    
}CALL_E_REJECTVIDEO_TYPE;


/**
 * ����������Ϣ
 */
typedef struct tagCALL_S_CONF_SUBJECT
{
    TUP_UINT32 ulConfID;        /**< ����ID */
    TUP_CHAR acSubject[CALL_CONF_SUBJECT_MAX_STR_LEN];  /**< �������� */
}CALL_S_CONF_SUBJECT;


/**
 * ���������
 */
typedef struct tagCALL_S_CONF_CONNECT_RESULT
{
    TUP_UINT32                  ulConfID;           /**< ����ID */
    TUP_UINT32                  ulCallID;           /**< ����ID */
    TUP_UINT32                  ulResult;           /**< ��������� */
    TUP_UINT32                  ulConfMediaType;    /**< media_type = CALL_E_CONF_MEDIA_AUDIO|CALL_E_CONF_MEDIA_VIDEO|CALL_E_CONF_MEDIA_DATA  */
    CALL_E_CONF_TOPOLOGY_TYPE   enTopology;          /**< �������� */
}CALL_S_CONF_CONNECT_RESULT;


/**
 * ��������߽��
 */
typedef struct tagCALL_S_CONF_ADDATTENDEE_RESULT
{
    TUP_UINT32 ulConfID;            /**< ����ID */
    TUP_UINT32 ulResult;            /**< �����������߽�� */
    TUP_UINT32 ulAttendeeCount;     /**< ����߸��� */
    TUP_CHAR *pcAttendee;           /**< ������б� */
}CALL_S_CONF_ADDATTENDEE_RESULT;


/**
 * ͨ����ת�����֪ͨ
 */
typedef struct tagCALL_S_CONF_BETRANSFERTOCONF
{
    TUP_UINT32                  ulConfID;                              /**< ����ID */
    TUP_UINT32                  ulCallID;                              /**< ����ID */
    TUP_INT8                    acGroupUri[CALL_D_MAX_LENGTH_NUM];     /**< ��URI */
    TUP_INT8                    acConfIndex[CALL_D_MAX_LENGTH_NUM];    /**< �������� */
    TUP_UINT32                  ulConfMediaType;                       /**< media_type = CALL_E_CONF_MEDIA_AUDIO|CALL_E_CONF_MEDIA_VIDEO|CALL_E_CONF_MEDIA_DATA|CALL_E_CONF_MEDIA_AUX  */
    CALL_E_CONF_TOPOLOGY_TYPE   enTopology;                            /**< �������� */
    CALL_E_CONF_ROLE            enCallRole;                            /**< ����߽�ɫ*/
    TUP_INT8                    acSubject[CALL_D_MAX_LENGTH_NUM];      /**< ����*/
}CALL_S_CONF_BETRANSFERTOCONF;


/**
 * ͨ��ת������(�ɹ���ʧ��)
 */
typedef struct tagCALL_S_CONF_TRANSFERTOCONF_RESULT
{
    TUP_UINT32 ulConfID;        /**< ����ID */
    TUP_UINT32 ulCallID;        /**< ����ID */
    TUP_UINT32 ulResult;        /**< ���:0�ɹ������� ʧ�� */
}CALL_S_CONF_TRANSFERTOCONF_RESULT;

/**
 * �ںϻ�����Ƶ���������Ϣ
 */
typedef struct tagCALL_S_CONF_VIDEOCONF_INFO
{
    TUP_UINT32  ulConfCtrlID;                                /**< EC6.0-uportal����confctrl��ConfID */
    TUP_UINT32  ulCallID;                                    /**< ����ID */
    TUP_UINT32  ulAccountID;                                 /**< �˺�ID */  
    CALL_E_CONF_ROLE enRole;                                 /**< �����ɫ*/ 
    TUP_INT8    acCallId[CALL_D_MAX_CONFID_LEN];             /**< �ڴ�������ʱ����call-id�ֶ���Ӵ�������ID����������ͬʱ�����Ķ������ */
    TUP_INT8    acAuthKey[CALL_D_DATACONF_PARAM_LENGTH + 1]; /**< �������ݻ���ļ�Ȩ�� */
    TUP_INT8    acConfCode[CALL_D_DATACONF_PARAM_LENGTH];    /**< ��������롣���ٿ�ԤԼ����ʱ�����˽����뷢��Info�����Ϣ��*/
    TUP_INT8    acCmAddr[CALL_D_DATACONF_CMADDR_LENGTH];     /**< ��ѡ, ���ϻ᳡��IP��ַ+SIP�˿ںţ�192.168.1.2:5060 */
    TUP_INT8    acCharman[CALL_D_DATACONF_PARAM_LENGTH + 1]; /**< ������UC����*/
    TUP_INT8    acSbj[CALL_CONF_SUBJECT_MAX_STR_LEN];       /**< ��������*/
    TUP_INT8    acSiteUrl[CALL_D_MAX_URL_LENGTH];            /**< ������վ��ַ*/
    TUP_INT8    acSiteID[CALL_D_MAX_SITE_ID_LENGTH];         /**< վ��ID*/
    TUP_INT8    acServerIP[CALL_D_MAX_SERVER_LENGTH];     /**< �����������ַ��������ַ��URL*/
    TUP_INT8    acHostKey[CALL_D_DATACONF_PARAM_LENGTH];     /**< ���������룺���������������ã������������Ҫ*/
}CALL_S_CONF_VIDEOCONF_INFO;

/**  IMS ���� */
typedef struct tagCALL_S_CONF_IMSATTENDEE
{
    TUP_UINT32 ulBandwidth;                                 /**< �᳡������λKbps */
    TUP_UINT32 ulTermType;                                  /**< �᳡�ն����� */
    TUP_CHAR   acDisplayName[CALL_D_MAX_URL_LENGTH + 1];    /**< �᳡��ʾ���� */
    TUP_CHAR   acUrl[CALL_D_MAX_URL_LENGTH + 1];            /**< �᳡���룬����SIP���룬H323���룬PSTN���롣 */
}CALL_S_CONF_IMSATTENDEE;

typedef struct tagCALL_S_CONF_IMS
{
    CALL_E_CONF_START_TYPE      eSiteCallMode;              /**< ���к�����ʽ */
    TUP_UINT32                  ulBandwidth;                /**< ���������λkbps������0����0��ʱ����MCU���������� */
    CALL_E_CONF_MEDIATYPE_FLAG  eMediaType;                 /**< [en]xxxx. [cn]ý������ ʹ�� CALL_E_CONF_MEDIATYPE_FLAG ��ֵ���� "��" ���� */
    CALL_E_SRTP_MODE            enEncryptMode;              /**< [en]xxxx. [cn]����ý�����ģʽ ʹ�� CALL_E_SRTP_MODE ��ֵ����"��"���� */

    TUP_UINT32                  ulStartTime;                /**< ���鿪ʼʱ�䣨UTC����������������飬���ֵ��Ч,����0Ҳ��Ч */
    TUP_UINT32                  ulDuration;                 /**< �������ʱ�� */
    TUP_UINT32                  ulTimezoneOffset;           /**< ��ǰʱ��ƫ��,������������飬���ֵ��Ч�����Ϊ0�������͸��Զˣ��Զ�Ĭ��Ϊ0*/
    
    TUP_UINT32                  ulMultiPic;                 /**< �໭����������0�� 0��1:1���棬�����͸���������������Ĭ��Ϊһ���� */
    
    CALL_E_VIDEO_CAP            enConfVideoProto;           /**< ������ƵЭ��  */
    CALL_E_VIDEOCONF_RESOLUTION enConfVideoFmt;             /**< ������Ƶ�ߴ�  */
    
    TUP_BOOL                    bHasAuxVideo;               /**< �Ƿ����˫����1������;0��������,�����͸�������*/    
    TUP_UINT32                  ulRoleLabel;                /**< ������ɫ��bHasAuxVideoΪ1ʱ��Ч��1 Presentation��2 live��*/    
    CALL_E_VIDEO_CAP            enConfAuxVideoProto;        /**< ������ƵЭ��   */
    CALL_E_VIDEOCONF_RESOLUTION enConfAuxVideoFmt;          /**< ������Ƶ�ߴ�   */

    TUP_CHAR                    acConfName[CALL_D_MAX_IMS_CONF_NAME_LEN+1];          /**< ��������*/
    TUP_CHAR                    acConfGuestPwd[CALL_D_MAX_IMS_CONF_CHAIR_PSW_LEN+1]; /**< ������������ */
    TUP_CHAR                    acConfChairPwd[CALL_D_MAX_IMS_CONF_GUEST_PSW_LEN+1]; /**< ������ϯ���� */

    TUP_UINT32                  ulAnonyNum;                 /**< �����᳡���� */
    
    TUP_UINT32                  ulSiteNum;                  /**< �᳡��Ŀ�����400���᳡��0����ʾû�л᳡��������ʧ�ܡ� */    
    CALL_S_CONF_IMSATTENDEE *   pastIMSAttendInfo;          /**< ���᳡�б� */
}CALL_S_CONF_IMS;


/**
 * һ�����������
 */
typedef struct tagCALL_S_ONEKEY_TO_CONF_RESULT
{
    TUP_UINT32 ulCallID;                            /**< ����ID */
    TUP_UINT32 ulResult;                            /**< ���:0�ɹ������� ʧ�� */
    TUP_UINT32 ulMediaType;                         /**< ����ý������ */
    CALL_E_CONF_TOPOLOGY_TYPE enConfTopology;        /**< �������� */
}CALL_S_ONEKEY_TO_CONF_RESULT,CALL_S_CONF_CONNECT_ONEKEY_TO_CONF_RESULT;


/**
 * ��Ƶý��ģʽ
 */
typedef enum tagCALL_E_AUDIO_MODE
{
    CALL_AUDIO_MODE_NONE     =   0x00,  /**< ��Чģʽ */
    CALL_AUDIO_MODE_LOCAL    =   0x01,  /**< pc����ģʽ */
    CALL_AUDIO_MODE_VM_LOCAL =   0x02,  /**< ���ϱ�����Ƶģʽ */
    CALL_AUDIO_MODE_TC       =   0x04,  /**< TCģʽ */

    CALL_AUDIO_MODE_INVALID  =   0xFF
}CALL_E_AUDIO_MODE;


/**
 * TC�ļ�ֵ��ÿ��ֵ��Ӧһ���̶����ļ������ݿͻ���ֵһһ��Ӧ
 */
typedef enum tagCALL_E_TC_FILE_VALUE
{
    CALL_TC_FILE_INCOMINGIM,        /**< ��IM��Ϣ���� incomingim */
    CALL_TC_FILE_INCOMINGCALL,      /**< ���籾�ط��� incomingcall */
    CALL_TC_FILE_CALLHOLD,          /**< ���ֱ��ط��� callhold */
    CALL_TC_FILE_RINGBACKTONE,      /**< ringbacktone */
    CALL_TC_FILE_NUM0,              /**< num0 0 */
    CALL_TC_FILE_NUM1,              /**< num1 1 */
    CALL_TC_FILE_NUM2,              /**< num2 2 */
    CALL_TC_FILE_NUM3,              /**< num3 3 */
    CALL_TC_FILE_NUM4,              /**< num4 4 */
    CALL_TC_FILE_NUM5,              /**< num5 5 */
    CALL_TC_FILE_NUM6,              /**< num6 6 */
    CALL_TC_FILE_NUM7,              /**< num7 7 */
    CALL_TC_FILE_NUM8,              /**< num8 8 */
    CALL_TC_FILE_NUM9,              /**< num9 9 */
    CALL_TC_FILE_STAR,              /**< star * */
    CALL_TC_FILE_POUND,             /**< pound # */
    CALL_TC_FILE_CALLOUT,           /**< callout, */
    CALL_TC_FILE_ROLLBACK           /**< rollback ������ */
}CALL_E_TC_FILE_VALUE;
#define CALL_TC_FILE_NUMXING    CALL_TC_FILE_STAR
#define CALL_TC_FILE_NUMJING    CALL_TC_FILE_POUND
/**
 * �����ź���ö��
 */
typedef enum  enumAUDIO_CompoundVoice
{
    COMPOUND_E_NONE   = 0,  /**< ���ź��� */
    COMPOUND_E_BUSY,        /**< æ�� */    
    COMPOUND_E_BACK,        /**< ������ */
    COMPOUND_E_DIAL,        /**< ������ */
    COMPOUND_E_WAIT,        /**< ������ */
    COMPOUND_E_TIP,         /**< ��ʾ�� */
    COMPOUND_E_WARN,        /**< ������ */
    COMPOUND_E_LEAVE,       /**< �᳡�뿪�� */
    COMPOUND_E_UFWD,        /**< ������ǰת���Ⲧ���� */

    COMPOUND_E_DTMF0,       /**< dtmf����0 */
    COMPOUND_E_DTMF1,       /**< dtmf����1 */
    COMPOUND_E_DTMF2,       /**< dtmf����2 */
    COMPOUND_E_DTMF3,       /**< dtmf����3 */
    COMPOUND_E_DTMF4,       /**< dtmf����4 */
    COMPOUND_E_DTMF5,       /**< dtmf����5 */
    COMPOUND_E_DTMF6,       /**< dtmf����6 */
    COMPOUND_E_DTMF7,       /**< dtmf����7 */
    COMPOUND_E_DTMF8,       /**< dtmf����8 */
    COMPOUND_E_DTMF9,       /**< dtmf����9 */ 
    COMPOUND_E_DTMFSTAR,    /**< dtmf����'*' */
    COMPOUND_E_DTMFJIN,     /**< dtmf����'#' */
    COMPOUND_E_DTMFA,       /**< dtmf����A */
    COMPOUND_E_DTMFB,       /**< dtmf����B */
    COMPOUND_E_DTMFC,       /**< dtmf����C */
    COMPOUND_E_DTMFD,       /**< dtmf����D */
    COMPOUND_E_DTMFFLASH,   /**< dtmf����FLASH */
    
    COMPOUND_E_BUTT
}AUDIO_E_COMPOUNT_VOICE;





/**
 * ���������ı�֪ͨ��Ϣ�ṹ
 */
typedef struct tagCALL_S_NETQUALITY_CHANGE
{
    TUP_UINT32 ulCallID;        /**< ����ID */   
    TUP_UINT32 uLNetError;      /**< ������� 0 : û�д��� 1 : ���緢�˴��� 2 : �����ն˴��� 3 : �����շ������� */
    TUP_UINT32 ulNetLevel;      /**< ���������ȼ�����net-errorΪ0��ֵ��Ч [0,5]  */
}CALL_S_NETQUALITY_CHANGE;


/**
 * ��������ͳ����Ϣ
 */
typedef struct tagCALL_S_STATISTIC_NETINFO
{
    TUP_UINT32 ulCallID;        /**< ����ID */  
    TUP_UINT32 ulLost;          /**< �����ʣ���λ% */
    TUP_UINT32 ulDelay;         /**< ʱ�� ���� */
    TUP_UINT32 ulJitter;        /**< ���� ���� */
}CALL_S_STATISTIC_NETINFO;

/**
 * �������������Ϣ
 */
typedef struct tagCALL_S_VQM_DIAGNOSES_REPORT
{
    TUP_UINT32 ulDiagnosesResult;  /**< VQM��������������
                                        0             �Ự���������쳣�ָ����ϱ�
                                        (1 << 0)      ��ͨ
                                        (1 << 1)      �������� 
                                        (1 << 2)      ����С 
                                        (1 << 3)      ͨ���л��� 
                                        (1 << 4)      �������� */

    TUP_UINT32 ulDiagnosesSrc;     /**< VQM��ϵ�ͨ����ԭ����
                                          0      ��������,�����е�ͨ�쳣�ָ����ϱ�
                                    (1 << 0)     ��������,�����е�ͨ�쳣�ָ����ϱ�
                                    (1 << 1)     �ɼ������쳣
                                    (1 << 2)     ���������쳣
                                    (1 << 3)     δ���յ��������ݰ�
                                    (1 << 4)     ���ģ����
                                    (1 << 5)     SRTP����ʧ��
                                    (1 << 6)     ͬ�˿ڽ��յ����������
                                    (1 << 7)     PT��֧��
                                    (1 << 8)     �����쳣
                                    (1 << 9)     ���쳣
                                    (1 << 10)    JB��������
                                    (1 << 11)    �ź�������������
                                    (1 << 12)    �ź������������ž�������δʵ��

                                    VQM�����������ԭ����
                                          0      ���������������ж����쳣�ָ����ϱ�
                                    (1 << 0)     ���������������ж����쳣�ָ����ϱ�
                                    (1 << 1)     ���綪��
                                    (1 << 2)     JB��������
                                    (1 << 3)     �����豸����
                                    (1 << 4)     �ź����ж�

                                    VQM��ϴ�����ԭ����
                                    (1 << 0)     ���������������ɼ��������ָ����ϱ�
                                    (1 << 1)     ����������������Ŵ������ָ����ϱ�
                                    (1 << 2)     ������������
                                    (1 << 3)     ����������� 
                                    
                                    VQM����Сԭ����
                                    0           �����������������������ָ����ϱ�����δʹ��
                                    (1 << 1)    ����������������������ָ����ϱ�����δʹ��
                                    (1 << 2)    ��������С����ʾ�û���������������
                                    (1 << 3)    ��������С����ʾ�û�AGCδ����
                                    (1 << 4)    ��������С����ʾ�û�������˷���ǿ
                                    (1 << 5)    �������С����δʵ��
                                    */
} CALL_S_VQM_DIAGNOSES_REPORT;

/**
 * ������ı䷴��֪ͨ
 */
typedef struct tagCALL_S_VOLUMESCALE_CHANGE_NTF
{
    TUP_UINT32 ulPos;        /**< ������ı�λ�õ㣬��ֻʹ��0��ʾ�ɼ�������ı� */
    TUP_FLOAT  fVolumeScale; /**< �����������ֵ */
} CALL_S_VOLUMESCALE_CHANGE_NTF;

/**
 * QOS������Ϣ�ϱ�
 */
typedef struct tagCALL_S_QOS_BASE_INFO
{
    TUP_CHAR acLocalIP[CALL_D_IP_LENGTH];              /**< ����IP*/
    TUP_CHAR acRemoteIP[CALL_D_IP_LENGTH];             /**< Զ��IP*/
    TUP_CHAR acHMEVersion[CALL_D_HMEVERSION_LENGTH];   /**< HME�汾*/
    TUP_CHAR acTCVersion[CALL_D_HMEVERSION_LENGTH];    /**< TC�汾,û�еĻ�Ϊ��*/
} CALL_S_QOS_BASE_INFO;

/**
 * �ļ���ʽ 
 */
typedef enum  tagCALL_E_FILE_FORMAT
{
    CALL_FILE_FORMAT_PCM = 0,   /**< PCM�ļ���ʽ */  
    CALL_FILE_FORMAT_WAV = 1,   /**< WAV�ļ���ʽ��Ŀǰ֧��PCM_ALAW��PCM_ULAW��PCM */  
    CALL_FILE_FORMAT_AMR = 2,   /**< AMR�ļ���ʽ��Ŀǰ֧�ֵ�ͨ��AMR-NB */  
}CALL_E_FILE_FORMAT;


/**
 * ������Ƶ�ļ�������Ϣ
 */
typedef struct tagCALL_S_AUDIO_PLAYFILE_ADDITIONINFO
{
    CALL_E_FILE_FORMAT enFileFormat;    /**< �ļ���ʽ */
} CALL_S_AUDIO_PLAYFILE_ADDITIONINFO;


/**
 * Ԥ��EQ����
 */
typedef enum tagCALL_E_PRESET_EQ_TYPE
{
    CALL_E_PRESET_EQ_TYPE_RECOMMEND,    /**< �Ƽ���Ч */
    CALL_E_PRESET_EQ_TYPE_NORTHAMERICA, /**< ������Ч */
    CALL_E_PRESET_EQ_TYPE_AUSTRALIA,    /**< ������Ч */
    CALL_E_PRESET_EQ_TYPE_TIA920,       /**< TIA920��Ч */
    CALL_E_PRESET_EQ_TYPE_BUTT
}CALL_E_PRESET_EQ_TYPE;

/**
 * ��Ƶ����
 */
typedef struct tagCALL_S_VIDEO_OPERATION
{
    TUP_UINT32 ulCallID;        /**< ����ID */
    TUP_UINT32 ulOperation;     /**< ������ȡֵ:
                                 <br>open 0x01��close 0x02��start 0x04��stop 0x08 */
    TUP_UPTR   ulRenderHanle;   /**< ����������Ƶ���ھ��  */
    TUP_UINT32 ulType;          /**< Զ�˻��߱��� 1������ 2��Զ��  */
}CALL_S_VIDEO_OPERATION;


/**
 * ��Ƶ(����)��С���
 */
typedef struct tagCALL_S_VIDEO_FRAMESIZE_CHANGE
{
    TUP_UINT32 ulCallID;        /**< ����ID */
    TUP_UINT32 ulWidth;         /**< ����� */
    TUP_UINT32 ulHeight;        /**< ����� */
}CALL_S_VIDEO_FRAMESIZE_CHANGE;


/**
 * ý�������Ϣ
 */
typedef struct tagCALL_S_MEDIA_ERRORINFO
{
    TUP_UINT32 ulCallID;        /**< ����ID */
    TUP_UINT32 ulMediaType;     /**< ý�����ͣ�  0 : δ֪���͡�1 : ��Ƶ��  2 : ��Ƶ�� 3 : ����  */
    TUP_UINT32 ulErrorType;     /**< ��������:   0 : δ֪���� 1 : �������ʹ��� 2 : �������մ���  */
}CALL_S_MEDIA_ERRORINFO;


/**
 * �Ự����ʹ�õı��������Ϣ
 */
typedef struct tagCALL_S_SESSION_CODEC
{
    TUP_UINT32 ulCallID;        /**< ����ID */
    TUP_UINT32 ulMediaType;     /**< ý�����ͣ�  0 : δ֪���͡�1 : ��Ƶ��  2 : ��Ƶ�� 3 : ���� */
    TUP_UINT32 ulCodecType;     /**< ����������ͣ� 0 : δ֪���͡� 1 : ��������2 : �������� */
    TUP_CHAR   acCodecName[CALL_MAX_CODEC_NAME_LEN]; /**< ��������� */
}CALL_S_SESSION_CODEC;


/**
 *  �豸��Ϣ
 */
typedef struct tagCALL_S_DEVICE_INFO
{
    TUP_UINT8   uiIndex;                        /**< �豸��Ӧ��index */
    TUP_UINT32  uiOrienation;                   /**< ��Ƶ�豸��Ϣר�ã�Ӳ�ն˿��Բ���Ҫ��������ƶ��豸���� */
    TUP_CHAR    strName[CALL_D_MAX_LENGTH_NUM]; /**< �豸���� */
}CALL_S_DEVICE_INFO;

/** 
 * ���������������� 
 */
typedef struct tagCALL_S_OUTPUT_VOICEVALUE
{
    TUP_UINT32 speaker_volume;            /**< ����������*/
    TUP_UINT32 bluetooth_volume;          /**< ������������*/
    TUP_UINT32 earpiece_volume;           /**< �ֱ�����*/
    TUP_UINT32 head_volume;               /**< 3.5MM��������*/
    TUP_UINT32 HDMI_volume;               /**< HDMI��������*/
    TUP_UINT32 usb_volume;                /**< USB��������*/
    TUP_UINT32 speaker_ring_volume;       /**< ��������������*/
    TUP_UINT32 bluetooth_ring_volume;     /**< ����������������*/
    TUP_UINT32 HDMI_ring_volume;          /**< HDMI��������*/
    TUP_UINT32 usb_ring_volume;           /**< USB������������*/
} CALL_S_OUTPUT_VOICEVALUE;

/**
 * ��Ƶ����/����豸��Ϣ
 */
typedef struct tagCALL_S_AUDIO_DEVICE_INFO
{
    TUP_UINT8 uiInputNum;         /**< �����豸��Ŀ */
    TUP_UINT8 uiOutputNum;        /**< ����豸��Ŀ */
    CALL_S_DEVICE_INFO stInputDevice[CALL_D_MAX_DEVICE_NUM];   /**< ��Ƶ�����豸 */
    CALL_S_DEVICE_INFO stOutPutDevice[CALL_D_MAX_DEVICE_NUM];  /**< ��Ƶ����豸 */
}CALL_S_AUDIO_DEVICE_INFO;


/**
 * ��Ƶ����/����豸��Ϣ
 */
typedef struct tagCALL_S_VIDEO_DEVICE_INFO
{
    TUP_UINT8 uiCaptureNum;                             /**< ����ͷ��Ŀ */
    CALL_S_DEVICE_INFO stCapture[CALL_D_MAX_DEVICE_NUM];/**< ��Ƶ�豸��Ϣ */
}CALL_S_VIDEO_DEVICE_INFO;


/**
 * ¼*���ļ�������Ϣ
 */
typedef struct tagCALL_S_RECORDFILE_INFO
{
    TUP_UINT32 ulCaptureIndex;  /**< ���������豸���� */
    TUP_UINT32 ulFileSize;      /**< �ļ���С��ʾ�澯������ļ������Ĵ�С��������֪ͨ����Ӱ�칦�ܣ�Ĭ��100M,��Ƶ������Ҫ */
    TUP_UINT32 ulSampleFreq;    /**< ������ */
    TUP_UINT32 ulRate;          /**< ���� */
    TUP_INT8   acCodecName[CALL_MAX_CODEC_NAME_LEN];   /**< �������� */
}CALL_S_RECORDFILE_INFO;


/**
 * QoS�ϱ�������Ϣ
 */
typedef struct tagCALL_S_SETQOS_INFO
{
    TUP_BOOL   bIsNotifyQos;    /**< �Ƿ���Qos�ϱ���Ĭ��false��������true����  */
    TUP_UINT32 ulQosTime;       /**< �ϱ����  */
    TUP_FLOAT  fMosVal;         /**< mos��ֵ */
    TUP_UINT32 ulLostVal;       /**< �����ʷ�ֵ */
    TUP_UINT32 ulJitterVal;     /**< ������ֵ */
    TUP_UINT32 ulDelayVal;      /**< ʱ�ӷ�ֵ */
}CALL_S_SETQOS_INFO;


/**
 * QoS�ϱ���Ϣ(�ϱ���������)
 */
typedef struct tagCALL_S_NOTIFYQOS_INFO
{
    TUP_UINT32 ulCallID;        /**< ����ID */

    //����
    TUP_FLOAT  fMosValue;       /**< mosֵ */
    TUP_UINT32 ulLostValue;     /**< JB������ */
    TUP_UINT32 ulNetLostValue;  /**< ���綪���� */
    TUP_UINT32 ulJitterValue;   /**< ���� */
    TUP_UINT32 ulDelayValue;    /**< ʱ�� */
    TUP_UINT32 ulRtpLossValue;  /**< FEC�󶪰� */
    TUP_UINT32 ulSpeechLevel;   /**< ����������ƽ */
    TUP_UINT32 ulNoiseLevel;    /**< ����������ƽ */
    TUP_UINT32 ulBytesRecv;         /**< ƽ���������� */

    //����
    TUP_FLOAT  fSendMosValue;         /**< mosֵ */
    TUP_UINT32 ulSendLostValue;       /**< ������ */
    TUP_UINT32 ulSendJitterValue;     /**< ���� */
    TUP_UINT32 ulSendSpeechLevel;     /**< �ɼ�������ƽ */
    TUP_UINT32 ulSendNoiseLevel;      /**< �ɼ�������ƽ */
    TUP_UINT32 ulBytesSend;           /**< ƽ���������� */

    TUP_UINT32 ulabnormityTime;       /**< �쳣ʱ�� */
    TUP_UINT32 uiTcErrorNum;          /**< TC�쳣�� */

    TUP_BOOL bCallEndNotify;          /**< �Ƿ�ͨ���ҶϺ��ϱ� */
    TUP_CHAR acConfIndex[50];         /**< ����������id ֵΪ�գ���ʾ��Ե�ͨ�� */
    TUP_UINT32 uiActiveTime;          /**< ����ʱ������λ��ms */
    TUP_UINT32 auiPacketLoss[11];     /**< �����ֲ� */

    TUP_CHAR acAudioCodec[CALL_D_MAX_AUDIO_CODEC_LEN]; /**< ��Ƶ����� "G722,PCMA,PCMU,G729,iLBC,telephone-event,red"*/
    TUP_CHAR acLocalIP[CALL_D_IP_LENGTH];              /**< ����IP*/
    TUP_CHAR acRemoteIP[CALL_D_IP_LENGTH];             /**< Զ��IP*/
    TUP_CHAR acHMEVersion[CALL_D_HMEVERSION_LENGTH];   /**< HME�汾*/
    TUP_CHAR acTCVersion[CALL_D_HMEVERSION_LENGTH];    /**< TC�汾,û�еĻ�Ϊ��*/
}CALL_S_NOTIFYQOS_INFO;


/**
 * QoS�ϱ���Ϣ(�ϱ�����UI)
 */
typedef struct tagCALL_S_NOTIFYLOACLQOS_INFO
{
    TUP_UINT32 ulCallID;        /**< ����ID */

    /**< ���� */
    TUP_FLOAT  fMosValue;       /**< mosƽ��ֵ */
    TUP_UINT32 ulLostValue;     /**< JB������ƽ��ֵ */
    TUP_UINT32 ulNetLostValue;  /**< ���綪����ƽ��ֵ */
    TUP_UINT32 ulJitterValue;   /**< ����ƽ��ֵ */
    TUP_UINT32 ulDelayValue;    /**< ʱ��ƽ��ֵ */
    TUP_UINT32 ulRtpLossValue;  /**< FEC�󶪰� */

    /**< ���� */
    TUP_FLOAT  fSendMosValue;         /**< mosֵ */
    TUP_UINT32 ulSendLostValue;       /**< ������ */
    TUP_UINT32 ulSendJitterValue;     /**< ���� */

    TUP_CHAR acAudioCodec[CALL_D_MAX_AUDIO_CODEC_LEN]; /**< ��Ƶ����� "G722,PCMA,PCMU,G729,iLBC,telephone-event,red"*/
}CALL_S_NOTIFYLOACLQOS_INFO;


/**
 * �Ự�޸���ɽ����Ϣ
 */
typedef struct tagCALL_S_SESSION_MODIFIED
{
    TUP_UINT32 ulCallID;                                /**< ����ID */
    TUP_BOOL bIsFocus;                                  /**< �Ƿ��isfoucs��ʶ���ƶ����鳡��ʹ��*/  
    TUP_INT8 acServerConfType[CALL_D_MAX_LENGTH_NUM];   /**< �������ͣ��ƶ����鳡��ʹ��*/  
    TUP_INT8 acServerConfID[CALL_D_MAX_LENGTH_NUM];     /**< ����ID, �ƶ����鳡��ʹ��*/
    TUP_UINT32 ulOrientType;                            /**< �ƶ���Ƶ���������*/
    TUP_INT8 acLocalAddr[CALL_D_IP_LENGTH];             /**< �ƶ��ϱ����ص�ַ*/
    TUP_INT8 acRemoteAddr[CALL_D_IP_LENGTH];            /**< �ƶ��ϱ�Զ�˵�ַ*/
    CALL_E_REINVITE_TYPE enHoldType;                    /**< �����п�ҵ����Reinvite��Ϣָʾ���¼�����*/
    CALL_E_MEDIA_SENDMODE enAudioSendMode;              /**< ��Ƶý�巽��*/
    CALL_E_MEDIA_SENDMODE enVideoSendMode;              /**< ��Ƶý�巽��*/
    CALL_E_MEDIA_SENDMODE enDataSendMode;               /**< ����ý�巽��*/
    TUP_BOOL              bIsLowBWSwitchToAudio;        /**< �Ƿ����ɵʹ�����ɵ���Ƶ�л�����Ƶ*/
    TUP_UINT32                ulConfMediaType;          /**< media_type = CALL_E_CONF_MEDIA_AUDIO|CALL_E_CONF_MEDIA_VIDEO|CALL_E_CONF_MEDIA_DATA  */
    CALL_E_CONF_TOPOLOGY_TYPE enConfTopology;           /**< �������� */
    TUP_BOOL               bIsSvcCall;                                  /**< �Ƿ���������־��ȡֵ��TUP_TRUE���Ƕ���������У������� */                   
    TUP_INT8               iSvcLablecount;                              /**< ����������Ч���� */      
    TUP_UINT32             aulSvcLable[CALL_D_MAX_SVC_LABLE_NUM] ;      /**< ����С���ڶ�Ӧ��ssrcֵ(sdpЭ�̳�����)�������6��С���� */
}CALL_S_SESSION_MODIFIED;


/**
 * �˺ŵ��û���
 */
typedef struct tagCALL_S_ACCOUNT_USER_NAME
{
    TUP_UINT32 ulAccountID;                         /**< �˻�ID */
    TUP_CHAR acUserName[CALL_D_128_STR_LENGTH];     /**< �û���,�������ʱ,û��UC�˺ŵ�������ϱ� */
}CALL_S_ACCOUNT_USER_NAME;


/**
 * BFCP����
 */
typedef struct tagCALL_S_BFCP_PARAM
{
    TUP_UINT32 uiTransType; /**< �����������ͣ�1��ʾUDP��2��ʾTCP, Э�̵Ľ��������invite��Ϊ׼��@see CALL_E_BFCPTRANS_TYPE*/
    TUP_UINT32 uiFloorCtrl; /**< �����������ͣ�1��ʾc-only,2��ʾs-only�� @see CALL_E_BFCP_FLOOR_CTRL*/
    TUP_UINT32 uiSetup;     /**< �û���TCP����BFCP����ʱ�涨�������ӵ�һ����1��ʾactive��2��ʾpassive�� @see CALL_E_BFCP_SETUP*/
}CALL_S_BFCP_PARAM, CALL_S_BFCP_CAP;


/**
 * BFCP TLS ��ϸ����
 */
typedef struct tagCALL_S_BFCP_TLS_PARAM
{
    TUP_UINT32  bfcp_tls_ctrl_mode;                         /**< 0��ʾ����Ӧ(Ĭ��)��1��ʾǿ��, @see CALL_E_BFCP_TLS_CTRL_MODE */

    TUP_UINT32  tls_version;                                /**< tls֧�ֵİ汾, @see CALL_D_TLSVERSION_V1_2|CALL_D_TLSVERSION_V1_1*/
    TUP_UINT32  tls_verify_mode;                            /**< tls��֤ģʽ, @see CALL_E_BFCP_TLS_VERIFY_MODE */

    TUP_CHAR    root_cert_path[CALL_D_MAX_LENGTH_NUM];      /**< TLS��֤��·�� */

    TUP_CHAR    srv_cert_file[CALL_D_MAX_LENGTH_NUM];       /**< TLS������豸֤�� */
    TUP_CHAR    srv_private_kfile[CALL_D_MAX_LENGTH_NUM];   /**< TLS�����˽Կ�ļ� */
    TUP_CHAR    srv_private_kfile_pw[CALL_D_MAX_LENGTH_NUM];/**< TLS�����˽Կ���� */

    TUP_CHAR    clt_cert_file[CALL_D_MAX_LENGTH_NUM];       /**< TLS�ͻ����豸֤�� */
    TUP_CHAR    clt_private_kfile[CALL_D_MAX_LENGTH_NUM];   /**< TLS�ͻ���˽Կ�ļ� */
    TUP_CHAR    clt_private_kfile_pw[CALL_D_MAX_LENGTH_NUM];/**< TLS�ͻ���˽Կ���� */
}CALL_S_BFCP_TLS_PARAM;

/**
 * BFCPЭ�̽��
 */
typedef struct tagCALL_S_BFCP_NEGO_RESULT
{
    TUP_BOOL            bfcp_common;        /**< bfcp����������true��ʾЭ�̳ɹ�*/
    TUP_UINT32          port;         /**< BFCP�˿� */
    CALL_S_BFCP_CAP     bfcp_ctrl;     /**< bfcp m����Ϣ */
}CALL_S_BFCP_NEGO_RESULT;

/**
 * һ·�Ự�ı�������
 */
typedef struct tagCALL_S_LOCAL_CAP
{
    TUP_UINT32             band_width;                                          /**< �Ự���� */
    TUP_UINT32             is_H239_control;                                     /**< �Ƿ�֧��H239�������� */
    TUP_UINT32             is_aux_support;                                      /**< �Ƿ�֧�ָ�����0����֧�֣�1��֧�֣�*/
    TUP_UINT32             is_presentation_support;                             /**< �����Ƿ�֧��presentation��0����֧�֣�1��֧�֣�*/
    TUP_UINT32             is_live_support;                                     /**< �����Ƿ�֧��live��0����֧�֣�1��֧�֣�*/

    TUP_UINT32             main_video_priority[CALL_E_VIDEO_DETAIL_CAP_BUTT];   /**< ������Ƶ�������ȼ� */
    CALL_S_MAIN_VIDEO      main_video_cap;                                      /**< ������������� */

    TUP_UINT32             aux_video_priority[CALL_D_MAX_AUX_STRM_NUM][CALL_E_VIDEO_DETAIL_CAP_BUTT];   /**< ������Ƶ�������ȼ� */
    CALL_S_AUX_VIDEO       aux_video_cap;                                       /**< ������������� */

    TUP_UINT32             audio_priority[CALL_E_AUDIO_CAP_BUTT];               /**< ��Ƶ���ȼ� */
    CALL_S_LOCAL_AUDIO_CAP audio_cap;                                           /**< ��Ƶ���� */

    TUP_UINT32             dtmf_priority[CALL_E_DTMF_CAP_BUTT];                 /**< ���β����������ȼ� */
    CALL_S_BFCP_CAP        bfcp_cap;                                            /**< BFCP���� */
    CALL_S_MEDIA_DIRECTION_MODE        direction_mode;                          /**< ��������Ϣ */
} CALL_S_LOCAL_CAP;


/**
 * ��������
 */
typedef enum tagCALL_E_LOOPBACK_TYPE
{
    CALL_E_LOOPBACK_AUDIO_LOCAL = 0,   /**< ��Ƶ���˻��� */
    CALL_E_LOOPBACK_AUDIO_REMOTE,      /**< ��ƵԶ�˻��� */
    CALL_E_LOOPBACK_VIDEO_LOCAL,       /**< ��Ƶ���˻��� */
    CALL_E_LOOPBACK_VIDEO_REMOTE       /**< ��ƵԶ�˻��� */
} CALL_E_LOOPBACK_TYPE;

/**
 * ���������������
 */
typedef enum tagCALL_E_LOOPBACK_REQUEST_OPERATE
{
    CALL_E_LOOPBACK_REQUEST_CLOSE = 0,  /**< �رջ��� */
    CALL_E_LOOPBACK_REQUEST_OPEN        /**< �򿪻��� */
} CALL_E_LOOPBACK_REQUEST_OPERATE;

/**
 * ����Ӧ��
 */
typedef enum tagCALL_E_LOOPBACK_ANSWER_OPERATE
{
    CALL_E_LOOPBACK_ANSWER_ACCEPT = 0,   /**< ���ܻ������� */
    CALL_E_LOOPBACK_ANSWER_REFUSE        /**< �ܾ��������� */
} CALL_E_LOOPBACK_ANSWER_OPERATE;

/**
 * ���ط���
 */
typedef enum tagCALL_E_LOOPBACK_DIRECTION
{
    CALL_E_LOOPBACK_SENDER = 0,    /**< ���� */
    CALL_E_LOOPBACK_RECEIVER,      /**< ���ܷ� */
} CALL_E_LOOPBACK_DIRECTION;

/**
 * ��������
 */
typedef struct _LOOPBACK_REQUEST
{
    TUP_UINT32                      callid;     /**<  ����id */
    CALL_E_LOOPBACK_TYPE            type;       /**<  �������� */
    CALL_E_LOOPBACK_REQUEST_OPERATE operate;    /**<  ������� */
} CALL_S_LOOPBACK_REQUEST;

/**
 * ����Ӧ��
 */
typedef struct _LOOPBACK_ANSWER
{
    TUP_UINT32                     callid;      /**<  ����id */
    CALL_E_LOOPBACK_TYPE           type;        /**<  �������� */
    CALL_E_LOOPBACK_ANSWER_OPERATE operate;     /**<  Ӧ����� */
} CALL_S_LOOPBACK_ANSWER;

/**
 * ����֪ͨ����
 */
typedef struct _LOOPBACK_NOTIFY_PARAMS
{
    TUP_UINT32                callid;          /**< ����id */
    CALL_E_LOOPBACK_TYPE      type;            /**< �������� */
    CALL_E_LOOPBACK_DIRECTION direction;       /**< ���ط��� */
} CALL_S_LOOPBACK_NOTIFY_PARAMS;

/**
 * �ն�����
 */
typedef enum tagCALL_E_TERMINAL_TYPE
{
    CALL_E_SET                          = 40,
    CALL_E_TERMINAL_ONLY                = 50,
    CALL_E_TERMINAL_AND_MC              = 70,
    CALL_E_GATEWAY_ONLY                 = 60,
    CALL_E_GATEWAY_AND_MC               = 80,
    CALL_E_GATEWAY_AND_MC_WITH_DATA_MP  = 90,
    CALL_E_GATEWAY_AND_MC_WITH_AUDIO_MP = 100,
    CALL_E_GATEWAY_AND_MC_WITH_AV_MP    = 110,
    CALL_E_GATE_KEEPER_ONLY             = 120,
    CALL_E_GATE_KEEPER_WITH_DATA_MP     = 130,
    CALL_E_GATE_KEEPER_WITH_AUDIO_MP    = 140,
    CALL_E_GATE_KEEPER_WITH_AV_MP       = 150,
    CALL_E_MCU_ONLY                     = 160,
    CALL_E_MCU_WITH_DATA_MP             = 170,
    CALL_E_MCU_WITH_AUDIO_MP            = 180,
    CALL_E_MCU_WITH_AV_MP               = 190,
    CALL_E_ACTIVE_MC                    = 240,

    CALL_E_TERMINAL_TYPE_BUTT
} CALL_E_TERMINAL_TYPE;


/**
 * ý����Ƭ������
 */
typedef struct tagCALL_S_MEDIA_MULTISLICE_PARAM_SET
{
    CALL_E_PROTOCOL_TYPE protocol_type;               /**< Э������ (ֻ��ʹ��ǰ������ö��) */
    TUP_CHAR   product_id[CALL_D_64_STR_LENGTH];      /**< ��Ʒ����*/
    TUP_CHAR   version_id[CALL_D_64_STR_LENGTH];      /**< �汾����*/
    TUP_UINT32 multi_mode;                            /**< multi-sliceģʽ*/
} CALL_S_MEDIA_MULTISLICE_PARAM_SET;

/**
 * ý����Ƭ���Ա�
 */
typedef struct tagCALL_S_MEDIA_MULTISLICE_PARAM_TABLE
{
    CALL_S_MEDIA_MULTISLICE_PARAM_SET *multi_slice_param_set;   /**< ý����Ƭ���Ա� */
    TUP_UINT32                         table_line_num;          /**< ������ */
} CALL_S_MEDIA_MULTISLICE_PARAM_TABLE;

/**
 * ý����Ƭģʽ
 */
typedef enum tagCALL_E_MULTISLICE_MODE
{
    CALL_E_MULTISLICE_MODE_DISABLE   = 0,        /**< ����   */
    CALL_E_MULTISLICE_MODE_SINGLE_NAL,            /**< ����ģʽ   */
    CALL_E_MULTISLICE_MODE_SINGLE_NAL_STAP,        /**< �ۺϰ�ģʽ   */
    CALL_E_MULTISLICE_MODE_AUTO,                /**< �Զ�   */
    CALL_E_MULTISLICE_MODE_BUTT
} CALL_E_MULTISLICE_MODE;


#define CALL_NTF_TEST_BASE     CALL_E_EVT_BUTT                      /**< �Զ�������֪ͨ�¼���ʼID */
#define CALL_NTF_VIDEO_FIRST_PACKET_TEST    (CALL_NTF_TEST_BASE+1)  /**< �յ���һ����Ƶ����Ϣ */
#define CALL_NTF_AUDIO_FIRST_PACKET_TEST    (CALL_NTF_TEST_BASE+2)  /**< �յ���һ����Ƶ����Ϣ */

#define CALL_DEC_PT_NUM_MAX 18      /**< ����PTֵ������ */


/**
 * ��Ƶ������Ϣ
 */
typedef struct tagCALL_VIDEO_BASE_INFO
{
    TUP_UINT32  uiCallID;                                   /**< ����ID */    
    TUP_CHAR    acCodecName[CALL_MAX_CODEC_NAME_LEN+1];     /**< ������� */ 
    TUP_UINT16  usEncPt;                                    /**< ����PTֵ */ 
    TUP_UINT16  ausDecPt[CALL_DEC_PT_NUM_MAX];              /**< ����PTֵ�б� */ 
    TUP_UINT16  usDecPtNum;                                 /**< ����PTֵ�б���� */ 
}CALL_VIDEO_BASE_INFO;


/**
 * ��Ƶ������Ϣ
 */
typedef struct tagCALL_AUDIO_BASE_INFO
{
    TUP_UINT32  uiCallID;                                   /**< ����ID */    
    TUP_CHAR    acCodecName[CALL_MAX_CODEC_NAME_LEN+1];     /**< ������� */ 
    TUP_UINT16  usEncPt;                                    /**< ����PTֵ */
    TUP_UINT16  usDecPt;                                    /**< ����PTֵ */
}CALL_AUDIO_BASE_INFO;


/**
 * ��Ƶ��������
 */
typedef enum tagCALL_E_AUDIO_OP
{
    CALL_E_AUDIO_OP_MIC_MUTE,           /**< ��˷羲�� */
    CALL_E_AUDIO_OP_MIC_UNMUTE,         /**< ��˷�ȡ������ */
    CALL_E_AUDIO_OP_SPEAKER_MUTE,       /**< ���������� */
    CALL_E_AUDIO_OP_SPEAKER_UNMUTE,     /**< ������ȡ������ */
    CALL_E_AUDIO_OP_MIC_VOLUME,         /**< ������˷����� */
    CALL_E_AUDIO_OP_SPEAKER_VOLUME,     /**< �������������� */
    CALL_E_AUDIO_OP_MIC_GAIN,           /**< ������˷����� */
    CALL_E_AUDIO_OP_SPEAKER_GAIN,       /**< �������������� */
    
    ALL_E_AUDIO_OP_BUTT
}CALL_E_AUDIO_OP;

/**
 * ��Ƶ������Ӧ��ֵ
 */
typedef union tagCALL_U_AUDIO_OP_VAL
{
    TUP_BOOL    is_mute;                /**< TUP_TRUE,����;TUP_FALSE,ȡ������ */
    TUP_UINT32  volume;                 /**< ������ȡֵ[0,100] */
    TUP_UINT32  gain;                   /**< ���������档 gain = ��������ֵ * 1000����������ȡֵ[0, 10]����С����0.1��*/
}CALL_U_AUDIO_OP_VAL;

/**
 * ��Ƶ����ʱЯ���Ĳ���
 */
typedef struct tagCALL_S_AUDIO_OP
{
    TUP_BOOL            is_set;                             /**< TUP_TRUE,  ����; TUP_FALSE, ��ȡ */
    TUP_CHAR            dev_name[CALL_D_MAX_DISPLAY_NAME];  /**< ��Ƶ�豸�� */
    CALL_E_AUDIO_OP     audio_op_type;                      /**< ��Ƶ�������� */
    CALL_U_AUDIO_OP_VAL val;                                /**< ��Ƶ����ֵ */
}CALL_S_AUDIO_OP;

/**
 * ���û��ȡ��������������Ľṹ��
 */
typedef struct tagCALL_S_CALL_AUDIO_CHN_OP
{
    TUP_BOOL    is_set;         /**< TUP_TRUE,  ����; TUP_FALSE, ��ȡ */
    TUP_UINT32  gain;           /**< ���������档 gain = ��������ֵ * 1000����������ȡֵ[0, 10]����С����0.1��*/
}CALL_S_CALL_AUDIO_CHN_OP;

/**
 * ICP�����̵�ַ�������˿�
 */
typedef struct tagCALL_S_LISTEN_ADDR
{
    TUP_CHAR   address[CALL_D_IP_STR_LENGTH];    /**< IP��ַ�ִ� */
    TUP_UINT32 data_port;                        /**< ���ݶ˿� */
    TUP_UINT32 control_port;                     /**< ���ƶ˿� */
}CALL_S_LISTEN_ADDR;

/**
 * ICP������TCP������ַ�Ͷ˿�
 */
typedef struct tagCALL_S_TCP_LISTEN_ADDR
{
    CALL_S_IPADDR ip_addr;                       /**< IP��ַ */
    TUP_UINT32    control_port;                  /**< ���ƶ˿� */
}CALL_S_TCP_LISTEN_ADDR;


/**
 * ��������ͨ�ŵ�ַ�ṹ�塣��ǰ���ڱ��ؽ��̼����Ƶ���ݵ�ת��
 */
typedef struct tagCALL_S_COM_ADDR
{
    CALL_S_LISTEN_ADDR   primary_addr;          /**< �����̵�ַ�����ݡ����ƶ˿� */
    CALL_S_LISTEN_ADDR   secondary_addr;        /**< �������̵�ַ������/���ƶ˿� */
}CALL_S_COM_ADDR;


/**
 * ��������ͨ�ŵ�ַ�ṹ�塣��ǰ���ڱ��ؽ��̼����Ƶ���ݵ�ת��
 */
typedef struct tagCALL_S_AIR_AUDIO_PARAM
{   
    CALL_S_LISTEN_ADDR   stListenAddr;               /**< ������������ַ      */
    TUP_UINT32           max_link_num;               /**< ���TCP������      */
    TUP_UINT32           sock_recv_timeout;          /**< TCP���ӳ�ʱ����λ:���� */
}CALL_S_AIR_AUDIO_PARAM;


/**
 * �����Զ������Ի�����Ϣ
 */
typedef union tagCALL_U_TEST_INFO
{
    CALL_AUDIO_BASE_INFO stAudioBaseInfo;                   /**< ��Ƶ������Ϣ */    
    CALL_VIDEO_BASE_INFO stVideoBaseInfo;                   /**< ��Ƶ������Ϣ */   
}CALL_U_TEST_INFO;


/**
 * �����Զ������Ի�����Ϣ֪ͨ
 */
typedef struct tagCALL_S_TEST_NOTIFY
{
    TUP_UINT32 uiNotifyType;    /* ֪ͨ���ͣ���Ƶ����Ƶ */
    CALL_U_TEST_INFO unInfo;    /* �����Զ������Ի�����Ϣ */
} CALL_S_TEST_NOTIFY;

/**
 * EC6.0�غ�����
 */
typedef enum tagCALL_E_SUBCALLBACK_TYPE
{   
    CALL_E_SUBCALLBACK_NONE,  /**< �� */
    CALL_E_SUBCALLBACK_BS,    /**< ��æ�غ� */
    CALL_E_SUBCALLBACK_NR,    /**< ��Ӧ��غ� */
    CALL_E_SUBCALLBACK_BUTT
}CALL_E_SUBCALLBACK_TYPE;

/** 
 * ��������:ָ�������ͬ�����
 */
typedef enum tagCALL_E_PICKUP_CALL_TYPE
{
    CALL_E_PICKUP_NULL,             /**< �� */
    CALL_E_PICKUP_GROUP_PICKUP,     /**< ͬ����� */
    CALL_E_PICKUP_DIRECTLY_PICKUP   /**< ָ������ */
} CALL_E_PICKUP_CALL_TYPE;

/**dialog info*/
#define CALL_D_MAX_INFO_BODY_LEN (512)          /**< ���ͶԻ���INFO text��󳤶�*/
#define CALL_D_MAX_CONTENT_TYPE_LEN (64)        /**< ���ͶԻ���INFO �����ִ���󳤶�*/



/**
 *�Ի���INFO ��Ϣ�ṹ
 */
typedef struct tagCALL_S_SIP_INFO
{
    TUP_CHAR media_type[CALL_D_MAX_CONTENT_TYPE_LEN];           /**< sip info ��Ϣ ������*/
    TUP_CHAR sub_media_type[CALL_D_MAX_CONTENT_TYPE_LEN];       /**< sip info ��Ϣ ������*/  
    TUP_CHAR body[CALL_D_MAX_INFO_BODY_LEN];                    /**< sip info ��Ϣ ����*/ 
} CALL_S_SIP_INFO;



/**
* �Ի���INFO ���� �μ�:CALL_D_CFG_SIPGLOBAL_CONTENT_TYPE
*/
typedef struct tagCALL_S_CONTENT_TYPE
{
    TUP_CHAR media_type[CALL_D_MAX_CONTENT_TYPE_LEN];               /**< �Ի��� info ��Ϣ ������*/
    TUP_CHAR sub_media_type[CALL_D_MAX_CONTENT_TYPE_LEN];           /**< �Ի��� info ��Ϣ ������*/
} CALL_S_CONTENT_TYPE;


/**
 * �Ի���INFO ��Ϣ�ṹ
 */
typedef struct tagCALL_S_DIALOG_INFO
{
    TUP_CHAR media_type[CALL_D_MAX_CONTENT_TYPE_LEN];              /**< �Ի��� info ��Ϣ ������*/
    TUP_CHAR sub_media_type[CALL_D_MAX_CONTENT_TYPE_LEN];          /**< �Ի��� info ��Ϣ ������*/  
    TUP_CHAR body[CALL_D_MAX_INFO_BODY_LEN];                       /**< �Ի��� info ��Ϣ ����*/ 
} CALL_S_DIALOG_INFO;

/**
 * Э��Э�̹��������ϱ�����ǰ��TE10/20ʹ��
 */
typedef struct tagCALL_S_COMMON_CAPS
{
    TUP_UINT32                  call_band_width;                                        /**< ���д�����λ:kbit����0 */

    TUP_UINT32                  aux_send_band_width;                                    /**< TUP����0ֵ�����棬������������ֵ�󣬴ӻص������ڷ��� */
    TUP_UINT32                  aux_common_band_width;                                  /**< ������������  */

    CALL_E_MEDIA_SENDMODE       media_dir[CALL_E_MEDIA_BUTT];                           /**< ý�巽�� ��Ƶ����Ƶ������*/

    TUP_UINT32                  band_width;                                             /**< H320������������ߴ���ֵ������ʱ��*/

    TUP_UINT8                   H264_num;                                               /**< ������Ƶ��h264���� 0-3*/
    CALL_S_VIDEO_H264_CAP       H264_array[CALL_D_H264_MAX_NUM];                        /**< ����H264���� */

    TUP_UINT8                   aux_H264_num;                                           /**< ������h264���� 0-3*/
    CALL_S_VIDEO_H264_CAP       aux_H264_array[CALL_D_H264_MAX_NUM];                    /**< ����H264���� */

    TUP_UINT8                   AAC_num;                                                /**< AAC_LD�������� 0-8*/
    CALL_S_AACLD_CAP            aac[CALL_D_AAC_MAX_NUMBER];                             /**< AAC_LD���� */

    TUP_UINT8                   G7221_ex;                                               /**< �Ƿ�G.722.1 Extend,ȡֵ��0����֧�֣�1��֧��*/
    TUP_UINT8                   G7221_b24;                                              /**< �Ƿ�G.722.1 base mode 32k,ȡֵ��0����֧�֣�1��֧��*/
    TUP_UINT8                   G7221_b32;                                              /**< �Ƿ�G.722.1 base mode 24k,ȡֵ��0����֧�֣�1��֧��*/
    CALL_S_AUDIO_G7221_CAP      G7221_cap_ex;                                           /**< G.722.1 Extend mode ������ ������24,32,48kbits/s*/
    CALL_S_AUDIO_G7221_CAP      G7221_cap_base_24k;                                     /**< G.722.1 base mode 32k ������ */
    CALL_S_AUDIO_G7221_CAP      G7221_cap_base_32k;                                     /**< G.722.1 base mode 24k ������ */
    CALL_S_ILBC_CAP             ilbc_cap;                                               /**< ILBC���� */
    CALL_S_OPUS_CAP             opus_cap;                                               /**< OPUS���� */

    TUP_UINT8                   audio_cap[CALL_E_AUDIO_CAP_BUTT];                       /**< ��ӦCC_AUDIOCAP_ID_E��Ƶ���� 0 ��ʾû�У�1��ʾ��,*/
    TUP_UINT32                  audio_band_width[CALL_E_AUDIO_CAP_BUTT];                /**< ��Ƶ����*/

    TUP_UINT16                  HWA_LD_sound_track;                                     /**< HWA_LD�����������Ϊ0���ʾû��HWA_LD���� */
    TUP_UINT16                  HWA_LD_sampling_rate;                                   /**< HWA_LD�����ʣ�ֻ���ϱ���������ѡ��֮������ʣ����Ϊ0���ʾHWA_LD���� */

    TUP_UINT8                   video_cap[CALL_E_VIDEO_DETAIL_CAP_BUTT];                /**< ������Ƶ���� */
    CALL_S_VIDEO_CUSTOM_PICTURE main_H263_custom_picture[CALL_D_MAX_CUSTOM_PICTFROMAT]; /**< ����H263���� */
    TUP_UINT32                  video_band_width[CALL_E_VIDEO_DETAIL_CAP_BUTT];         /**< ������Ƶ����*/

    TUP_UINT8                   aux_video_cap[CALL_E_VIDEO_DETAIL_CAP_BUTT];            /**< ������Ƶ���� */
    CALL_S_VIDEO_CUSTOM_PICTURE aux_H263_custom_picture[CALL_D_MAX_CUSTOM_PICTFROMAT];  /**< ����H263���� */
    TUP_UINT8                   aux_video_role_label[CALL_E_VIDEO_DETAIL_CAP_BUTT];     /**< ������Ƶ��ɫ: 1 Presentation 2 live*/
    TUP_UINT32                  aux_video_band_width[CALL_E_VIDEO_DETAIL_CAP_BUTT];     /**< ������Ƶ����*/

    CALL_S_DTMF_CAP             dtmf_cap;                                               /**< ���β������� */
    TUP_BOOL                    T140;                                                   /**< �Ƿ���T140����������TUP_TRUE, ��ʾ��; ���򣬱�ʾû�� */
    TUP_BOOL                    fec;                                                      /**��Ƶfec����*/
    TUP_BOOL                    fec2;                                                    /**��Ƶfec2����*/
    TUP_BOOL                    media_stream_encrypt;                                   /**< �����Ƿ���� */
    TUP_BOOL                    multi_pic;                                              /**< �Ǳ�໭�� */
    TUP_BOOL                    aux_in_pic;                                             /**< �����Ƿ����໭�� */
    TUP_BOOL                    local_main_in_pic;                                      /**< �����Ƿ����໭�� */
    CALL_S_BFCP_NEGO_RESULT     bfcp_cap;                                               /**< bfcp���� */
} CALL_S_COMMON_CAPS_S;

/**
 * ָ�������ͬ����������Ϣ���������к�����������
 */
typedef struct tagCALL_S_PICKUP_INFO
{
    TUP_CHAR caller_number[CALL_D_MAX_LENGTH_NUM];   /**< ���к��� */
    TUP_CHAR ring_number[CALL_D_MAX_LENGTH_NUM];     /**< ������� */
} CALL_S_PICKUP_INFO;

/**
 * @brief �Զ������Իص�����
 * 
 * @param [in] TUP_VOID* pUserContext         <b>:</b> �û���Ϣ
 * @param [in] CALL_S_TEST_NOTIFY* punNotify  <b>:</b> �����Զ������Ի�����Ϣ֪ͨ�ṹ
 * @param [out] NA
 * @retval typedef TUP_VOID (* <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention Ԥ������û��ʹ��
 * @see NA
 **/
typedef TUP_VOID (*TEST_CALL_BACK)(TUP_VOID* pUserContext, CALL_S_TEST_NOTIFY* punNotify); 



/**
 * @brief �������Զ�����־����
 * 
 * @param [in] const TUP_INT8 *app_name  <b>:</b> ģ����
 * @param [in] TUP_UINT32 level          <b>:</b> ��־����
 * @param [in] const TUP_INT8* function  <b>:</b> ������
 * @param [in] const TUP_INT8* filename  <b>:</b> �ļ���
 * @param [in] TUP_UINT32 line_num       <b>:</b> �к�
 * @param [in] const TUP_INT8 *format    <b>:</b> ��ʽ
 * @param [in] ...                       <b>:</b> �ɱ����
 * @retval typedef TUP_VOID (* <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention �˺��������������ã���ΪԤ���ӿ�
 * @see tup_call_register_logfun
 **/
typedef TUP_VOID (*CALL_FN_DEBUG_CALLBACK_PTR)(const TUP_INT8 *app_name, TUP_UINT32 level,
                            const TUP_INT8* function, const TUP_INT8* filename, TUP_UINT32 line_num, const TUP_INT8 *format, ...);


//***********************�ص�**********************************************
/**
 * <b>Description:</b> ͨ��MCע��Ļص������ϱ���������,MC���ԶԹ����������޸�(sipý��ͨ������Ҳ�������ϱ�sendrecv\sendonly\recvonly\inactive)
 * <br><b>Purpose:</b>
 * @param [in] TUP_UINT32 callid <b>:</b>����ID
 * @param [in/out] CALL_S_COMMON_CAPS_S* common_caps <b>:</b>��������
 * @retval TUP_RESULT <b>:</b> TUP_SUCCESS �ɹ�������ʧ�ܡ�
 * 
 * @attention NA
 * @see NA
 */
typedef TUP_RESULT (*CALL_FN_NOTIFY_COMMON_CAP_SET)(TUP_UINT32 callid, CALL_S_COMMON_CAPS_S *common_caps);

/**
 * <b>Description:</b> �����������/ɾ���¼������ɹ�ʱ֪ͨMC�� ʧ�ܵ�ʱ����Ҫ���ĵ�ȷ�ϴ���ʽ�����ص�������
 * <br><b>Purpose:</b>
 * @param [in] TUP_UINT32 callid <b>:</b>����ID
 * @param [in] CALL_S_CODER_INFO coder_info <b>:</b>�������¼�
 * @retval TUP_RESULT <b>:</b> TUP_SUCCESS �ɹ�������ʧ�ܡ�
 * 
 * @attention NA
 * @see NA
 */
typedef TUP_RESULT (*CALL_FN_CALLBACK_CODEC_HANDLE)(TUP_UINT32 callid, CALL_S_CODER_INFO *coder_info);

/**
 * <b>Description:</b> ����ɹ����ص�������
 * <br><b>Purpose:</b>
 * @param [in] TUP_UINT32 callid <b>:</b>����ID
 * @param [in] CALL_S_DECODER_SUCC_INFO *coder_info <b>:</b>����ɹ��¼�
 * @retval TUP_RESULT <b>:</b> TUP_SUCCESS �ɹ�������ʧ�ܡ�
 * 
 * @attention NA
 * @see NA
 */
typedef TUP_RESULT (*CALL_FN_CALLBACK_DECODEC_SUCC)(TUP_UINT32 callid, CALL_S_DECODER_SUCC_INFO *coder_info);

/**
 * <b>Description:</b> ֪ͨ�ϲ�GK��������ʱ��������ʵ�������ǰϵͳʱ�䡣���ص�������
 * <br><b>Purpose:</b>
 * @param [in] TUP_UINT32 time_stamp <b>:</b>ʱ���
 * @retval TUP_RESULT <b>:</b> TUP_SUCCESS �ɹ�������ʧ�ܡ�
 * 
 * @attention NA
 * @see NA
 */
typedef TUP_RESULT (*CALL_FN_CALLBACK_SET_SYS_TIME)(TUP_UINT32 time_stamp);

/**
 * <b>Description:</b> ���߼�ͨ�����ص�������
 * <br><b>Purpose:</b>
 * @param [in] const CALL_S_OPENING_LOGIC_CHN* logic_chn <b>:</b>���ڴ򿪵��߼�ͨ����Ϣ
 * @param [out] TUP_BOOL* is_go_on  <b>:</b>�Ƿ�������п�ͨ������
 * @retval TUP_RESULT <b>:</b> TUP_SUCCESS �ɹ�������ʧ�ܡ�
 * 
 * @attention NA
 * @see NA
 */
typedef TUP_RESULT (*CALL_FN_CALLBACK_OPEN_LOGIC_CHN)(const CALL_S_OPENING_LOGIC_CHN* logic_chn, TUP_BOOL* is_go_on);

/**
 * <b>Description:</b> ��Ƶ֡���ݻص����ص�������
 * <br><b>Purpose:</b>
 * @param [in] width <b>:</b>��Ƶ���
 * @param [in] height <b>:</b>��Ƶ�߶�
 * @param [in] len <b>:</b>֡���ݳ���
 * @param [in] data <b>:</b>֡����ָ��
 * @retval TUP_RESULT <b>:</b> TUP_SUCCESS �ɹ�������ʧ�ܡ�
 * 
 * @attention NA
 * @see NA
 */
typedef TUP_RESULT (*CALL_FN_CALLBACK_EX_VIDEO_FRAME)(TUP_UINT32 width, TUP_UINT32 height, TUP_CHAR* data, TUP_UINT32 len);


/**
 * <b>Description:</b> ���߸���MTUֵ���ص�������
 * <br><b>Purpose:</b>
 * @param [in] TUP_UINT32 callid <b>:</b>����ID
 * @param [in] TUP_UINT32 mtu_value <b>:</b>MTUֵ
 * @retval TUP_RESULT <b>:</b> TUP_SUCCESS �ɹ�������ʧ�ܡ�
 * 
 * @attention NA
 * @see NA
 */
typedef TUP_RESULT (*CALL_FN_CALLBACK_AIRAUX_MTU)(TUP_UINT32 callid, TUP_UINT32 mtu_value);

/**
 * �ص������ṹ��
 */
typedef struct tagCALL_S_CALL_EVENT_PROC
{
    CALL_FN_NOTIFY_COMMON_CAP_SET pfn_notify_common_cap_set;        /**< ���������ص� */
    CALL_FN_CALLBACK_CODEC_HANDLE pfn_callback_codec_handle;        /**< �����������/ɾ���¼��ص� */
    CALL_FN_CALLBACK_SET_SYS_TIME pfn_callback_set_sys_time;        /**< ֪ͨ�ϲ�GK��������ʱ��������ʵ�������ǰϵͳʱ�� */
    CALL_FN_CALLBACK_DECODEC_SUCC pfn_callback_decoder_succ;        /**< ����ɹ� */
    CALL_FN_CALLBACK_OPEN_LOGIC_CHN pfn_callback_open_logic_chan;   /**< ���߼�ͨ�� */  
    CALL_FN_CALLBACK_AIRAUX_MTU pfn_callback_airaux_mtu;            /**< ���߸���MTUֵ */
    CALL_FN_CALLBACK_EX_VIDEO_FRAME pfn_callback_local_video_frame; /**< ������Ƶ֡���ݻص� */
    CALL_FN_CALLBACK_EX_VIDEO_FRAME pfn_callback_remote_video_frame; /**< Զ����Ƶ֡���ݻص� */
    CALL_FN_CALLBACK_EX_VIDEO_FRAME pfn_callback_data_frame;         /**< ������Ƶ֡���ݻص� */
    CALL_FN_NOTIFY_COMMON_CAP_SET pfn_notify_remote_cap_set;        /**< Զ�������ص� */
} CALL_S_CALL_EVENT_PROC, *CALL_S_CALL_EVENT_PROC_PTR;

/**
 * <b>Description:</b> �ʹ�����ԣ��ص�������
 * <br><b>Purpose:</b>
 * @param [in] �� <b>:</b>��
 * @retval TUP_RESULT <b>:</b> TUP_SUCCESS �ɹ�������ʧ�ܡ�
 * 
 * @attention NA
 * @see NA
 */
typedef TUP_RESULT (*CALL_FN_LOW_BANG_WIDTH_HANDLE)();

/**
 * <b>Description:</b> �鿴�����Ƿ��Ѿ����ڣ��ص�������
 * <br><b>Purpose:</b>
 * @param [in] TUP_CHAR *callee_number <b>:</b>��ǰ���еĺ���
 * @param [in] TUP_UINT32 *now_callid <b>:</b>�Ѿ����ڵĺ���ID����
 * @param [in] TUP_UINT8   now_call_num <b>:</b>��ǰ���ڵĺ��и���
 * @retval TUP_RESULT <b>:</b> TUP_SUCCESS �ɹ�������ʧ�ܡ�
 * 
 * @attention NA
 * @see NA
 */
typedef TUP_RESULT (*CALL_FN_CHECK_CALL_EXIST_HANDLE)(TUP_CHAR *callee_number, TUP_UINT32 *now_callid, TUP_UINT8 now_call_num);

/**
 * <b>Description:</b> �鿴�Ƿ���������ص�������
 * <br><b>Purpose:</b>
 * @param [in] TUP_CHAR *callee_number              <b>:</b>��ǰ���еĺ���
 * @param [in] CALL_E_PROTOCOL_TYPE call_protocol   <b>:</b>��������
 * @param [in] TUP_CHAR *local_ip                   <b>:</b>����IP
 * @param [in] TUP_CHAR *local_H323num              <b>:</b>����323����
 * @param [in] TUP_CHAR *local_sipnum               <b>:</b>����sip����
 * @retval TUP_RESULT <b>:</b> TUP_SUCCESS �ɹ�������ʧ�ܡ�
 * 
 * @attention NA
 * @see NA
 */
typedef TUP_RESULT (*CALL_FN_CHECK_CALL_LOCAL_HANDLE)(TUP_CHAR *callee_number, CALL_E_PROTOCOL_TYPE call_protocol, TUP_CHAR *local_ip, TUP_CHAR *local_H323num, TUP_CHAR *local_sipnum);

/**
 * <b>Description:</b> �鿴������Դ�Ƿ񹻣��ص�������
 * <br><b>Purpose:</b>
 * @param [in]  CALL_S_MAX_CALL_NUM max_call_num    <b>:</b>������·��
 * @param [in]  CALL_E_CALL_TYPE    call_media_type <b>:</b>��������
 * @param [in]  TUP_UINT32          video_num       <b>:</b>��ǰ�Ѿ����ڵ���Ƶ����·��
 * @param [in]  TUP_UINT32          audio_num       <b>:</b>��ǰ�Ѿ����ڵ���Ƶ����·��
 * @param [in]  TUP_BOOL            is_audtovid     <b>:</b>�Ƿ���Ƶ����Ƶ����
 * @param [in]  TUP_BOOL            is_encrypt      <b>:</b>�Ƿ���ܻ���
 * @param [out]  TUP_UINT32 *       fail_reason     <b>:</b>ʧ��ԭ��
 * @retval TUP_RESULT <b>:</b> TUP_SUCCESS �ɹ�������ʧ�ܡ�
 * 
 * @attention NA
 * @see NA
 */
typedef TUP_RESULT (*CALL_FN_CHECK_CALL_RESOURCE_HANDLE)(CALL_S_MAX_CALL_NUM max_call_num,
                                                         CALL_E_CALL_TYPE    call_media_type,
                                                         TUP_UINT32          video_num,
                                                         TUP_UINT32          audio_num,
                                                         TUP_BOOL            is_audtovid,
                                                         TUP_BOOL            is_encrypt,
                                                         TUP_UINT32 *        fail_reason);

/**
 * <b>Description:</b> ����H264ͨ���������ص�������
 * <br><b>Purpose:</b>
 * @param [in]  

 * @param [in]  CALL_E_H264_LEVEL       chan_level       <b>:</b>Э��ͨ��level
 * @param [in]  TUP_UINT32              chan_frame       <b>:</b>Э��ͨ��֡��
 * @param [in]  TUP_BOOL                is_send_chan     <b>:</b>�Ƿ��ͷ���
 * @param [in]  TUP_BOOL                is_auto_policy   <b>:</b>�Ƿ�ִ��������������
 * @param [in]  CALL_S_AUTO_POLICY_INFO auto_policy_info <b>:</b>�����������������Ϣ
 * @param [out] TUP_UINT32 *           video_width       <b>:</b>����������֡�ʵȲ��Խ���õ���Ƶ���
 * @param [out] TUP_UINT32 *           video_height      <b>:</b>����������֡�ʵȲ��Խ���õ���Ƶ�߶�
 * @param [out] TUP_UINT32 *           video_frame       <b>:</b>����������֡�ʵȲ��Խ���õ���Ƶ֡��
 * @retval TUP_RESULT <b>:</b> TUP_SUCCESS �ɹ�������ʧ�ܡ�
 * 
 * @attention NA
 * @see NA
 */
 typedef TUP_RESULT (*CALL_FN_DEAL_H264_CHAN_HANDLE)(CALL_E_H264_LEVEL  chan_level,
                                                    TUP_UINT32              chan_frame,
                                                    TUP_BOOL                is_send_chan,
                                                    TUP_BOOL                is_auto_policy,
                                                    CALL_S_AUTO_POLICY_INFO auto_policy_info,
                                                    TUP_UINT32 *            video_width,
                                                    TUP_UINT32 *            video_height,
                                                    TUP_UINT32 *            video_frame);

/**
 * <b>Description:</b> ����H264�����������ԣ��ص�������
 * <br><b>Purpose:</b>
 * @param [in] 

 * @param [in]  CALL_E_H264_LEVEL       chan_level          <b>:</b>Э��ͨ��level
 * @param [in]  TUP_UINT32              chan_frame          <b>:</b>Э��ͨ��֡��
 * @param [in]  TUP_BOOL                is_send_chan        <b>:</b>�Ƿ��ͷ���
 * @param [in]  TUP_BOOL                is_auto_policy      <b>:</b>�Ƿ�ִ��������������
 * @param [in]  CALL_S_AUTO_POLICY_INFO auto_policy_info    <b>:</b>�����������������Ϣ
 * @param [out] TUP_UINT32 *            video_width         <b>:</b>������������õ���Ƶ���
 * @param [out] TUP_UINT32 *            video_height        <b>:</b>������������õ���Ƶ�߶�
 * @param [out] TUP_UINT32 *            video_frame         <b>:</b>������������õ���Ƶ֡��
 * @retval TUP_RESULT <b>:</b> TUP_SUCCESS �ɹ�������ʧ�ܡ�
 * 
 * @attention NA
 * @see NA
 */
typedef TUP_RESULT (*CALL_FN_DEAL_H264_AUTO_POLICY_HANDLE)(CALL_E_H264_LEVEL       chan_level,
                                                           TUP_UINT32              chan_frame,
                                                           TUP_BOOL                is_send_chan,
                                                           TUP_BOOL                is_auto_policy,
                                                           CALL_S_AUTO_POLICY_INFO auto_policy_info,
                                                           TUP_UINT32 *            video_width,
                                                           TUP_UINT32 *            video_height,
                                                           TUP_UINT32 *            video_frame);

/**
 * <b>Description:</b> �������ز��ԣ��ص�������
 * <br><b>Purpose:</b>
 * @param [in]  CALL_S_FLOW_CTRL_INFO flow_ctrl_info    <b>:</b>���ز�����Ϣ
 * @param [in]  CALL_S_CHAN_RATE cur_chan_rate          <b>:</b>��ǰͨ������
 * @param [out]  CALL_S_CHAN_RATE *flowctrl_chan_rate   <b>:</b>���ز���ִ�к����
 * @retval TUP_RESULT <b>:</b> TUP_SUCCESS �ɹ�������ʧ�ܡ�
 * 
 * @attention NA
 * @see NA
 */
typedef TUP_RESULT (*CALL_FN_DEAL_FLOWCTRL_HANDLE)(CALL_S_FLOW_CTRL_INFO flow_ctrl_info, CALL_S_CHAN_RATE cur_chan_rate, CALL_S_CHAN_RATE *flowctrl_chan_rate);

/**
 * <b>Description:</b> ���ܲ��ԣ��ص�������
 * <br><b>Purpose:</b>
 * @param [in] 

 * @param [in]  TUP_UINT32 callid               <b>:</b>����ID
 * @param [in]  TUP_BOOL is_chan_encryp         <b>:</b>ͨ���Ƿ����
 * @param [in]  CALL_E_PROTOCOL_TYPE pro_type   <b>:</b>����Э��
 * @param [in]  CALL_E_SRTP_MODE srtp_mode      <b>:</b>�û����õ�sip srtp���ܲ���
 * @param [in]  CALL_E_H235_POLICY h235_policy  <b>:</b>�û����õ�H235���ܲ���
 * @retval TUP_RESULT <b>:</b> TUP_SUCCESS �ɹ�������ʧ�ܡ�
 * 
 * @attention NA
 * @see NA
 */
typedef TUP_RESULT (*CALL_FN_ENCRYPT_POLICY_HANDLE)(TUP_UINT32 callid, TUP_BOOL is_chan_encrypt, CALL_E_PROTOCOL_TYPE pro_type, CALL_E_SRTP_MODE srtp_mode, CALL_E_H235_POLICY h235_policy);

/**
 * <b>Description:</b> ���β��Ų��ԣ��ص�������
 * <br><b>Purpose:</b>
 * @param [in]  CALL_E_DTMF_MODE user_select        <b>:</b>�û���ѡ����
 * @param [in]  CALL_S_DTMF_CAP common_dtmf_cap     <b>:</b>���β��Ź�������
 * @retval TUP_RESULT <b>:</b> TUP_SUCCESS �ɹ�������ʧ�ܡ�
 * 
 * @attention NA
 * @see NA
 */
typedef CALL_E_DTMF_MODE (*CALL_FN_GET_DTMF_MODE_HANDLE)(CALL_E_DTMF_MODE user_select, CALL_S_DTMF_CAP common_dtmf_cap);

/**
 * <b>Description:</b> ����������ԣ��ص�������
 * <br><b>Purpose:</b>
 * @param [in]  TUP_CHAR *rem_product_id                    <b>:</b>Զ�˲�ƷID
 * @param [in]  CALL_E_CALL_CLASS call_class                <b>:</b>����״̬
 * @param [in]  CALL_E_AUX_PROTOCOL aux_protocol            <b>:</b>����Э��
 * @param [in]  CALL_E_H264_LEVEL chan_h264_level           <b>:</b>Э�̳����ĸ�������ͨ��H264level
 * @param [in]  CALL_S_VIDEO_CUSTOM_PICTURE *aux_h263_cap   <b>:</b>Э�̳�����H263��ѡ��ʽ
 * @param [out]  CALL_S_AUX_ENC_FORMAT *aux_enc_format      <b>:</b>֧�ֵĸ��������ʽ
 * @retval TUP_RESULT <b>:</b> TUP_SUCCESS �ɹ�������ʧ�ܡ�
 * 
 * @attention NA
 * @see NA
 */
typedef TUP_RESULT (*CALL_FN_DEAL_AUX_ENC_FORMAT_HANDLE)(TUP_CHAR *rem_product_id, CALL_E_CALL_CLASS call_class, CALL_E_AUX_PROTOCOL aux_protocol, CALL_E_H264_LEVEL chan_h264_level, CALL_S_VIDEO_CUSTOM_PICTURE *aux_h263_cap, CALL_S_AUX_ENC_FORMAT *aux_enc_format);




#ifdef __cplusplus
#if __cplusplus
}
#endif /*  __cpluscplus */
#endif /*  __cpluscplus */


#endif  /* __CALL_ADVANCED_DEF_H__*/

/** @}*/

/*
* History: \n
* 2012-12-10, ��ʼ�����ļ��� \n
* 2015-12-30, TUP V100R001C50 TR5 ���������´��ļ��� \n
*
* vi: set expandtab ts=4 sw=4 tw=80:
*/


