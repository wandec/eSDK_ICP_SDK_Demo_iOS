/******************************************************************************

                  ��Ȩ���� (C), 2001-2011, ��Ϊ�������޹�˾

 ******************************************************************************
  �� �� ��   : cmpt_def.h
  �� �� ��   : ����
  ��    ��   : h00217227
  ��������   : 2016��8��16��
  ����޸�   :
  ��������   : TUP cmptģ��ͷ�ļ�
  �����б�   :
  �޸���ʷ   :
  1.��    ��   : 2016��8��16��
    ��    ��   : h00217227
    �޸�����   : �����ļ�

******************************************************************************/
#ifndef __CMPT_DEF_H__
#define __CMPT_DEF_H__

#include "tup_def.h"

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif /*  __cpluscplus */
#endif /*  __cpluscplus */

#define CMPT_D_MAX_ISSUER_NAME            (256)        /**< ֤��䷢����󳤶�*/

/**tup_call_digitmap_create_handle ��һ������typeȡֵ��Χ*/
#define TUP_COMMON_DIGITMAP_INDEX   (0)    /**< ����ƥ����ͼ����*/
#define TUP_REPLACE_DIGITMAP_INDEX  (1)    /**< �滻ƥ����ͼ����*/

/* digitmap */
#define DM_MAX_DIALNUMBER_LEN            32        /**< ������󳤶�*/


/**
 * CMPTģ�������
 */
typedef enum tagCMPT_E_ERRORCODE{
    EN_CMPT_OK = 0,
    EN_CMPT_INVALID_PARAM,                    /**< �Ƿ����*/
    EN_CMPT_GENERAL_ERR,                      /**< һ�����*/
    EN_CMPT_ALLOC_MEM_FAIL,                   /**< �ڴ����ʧ�� */
    
    EN_CMPT_CERT_OPEN_FAILED,                 /**< ֤���ʽ�����⣬��ʧ�� */
    EN_CMPT_CERT_NOT_IN_USE,                  /**< ֤��δ��Ч */
    EN_CMPT_CERT_OVERDUE,                     /**< ֤���ѹ��� */
    EN_CMPT_CERT_ISSUER_ERROR,                /**< �䷢�������� */
    EN_CMPT_CERT_REVOKED,                     /**< ֤���ѵ��� */
    EN_CMPT_ERRORCODE_BUTT                    /**< never used */
}CMPT_E_ERRORCODE;

typedef struct tagDMRESULT
{
    TUP_UINT32 uiLength;                     /**< ƥ��ĳ��Ȼ����滻��ĺ��볤��*/
    TUP_CHAR pszNUM[DM_MAX_DIALNUMBER_LEN];  /**< �滻��ĺ���*/
}DMRESULT;

typedef struct tagCMPT_S_CERTVERIFY_INFO
{
    TUP_UINT8 acCertIssuerName[CMPT_D_MAX_ISSUER_NAME];           /**<֤��䷢����ͨ������У����*/
}CMPT_S_CERTVERIFY_INFO;


typedef struct tagCMPT_S_DATETIME
{
    TUP_UINT16 uwYear;      /**< Year,the value domain is from 0 to 65536 */
    TUP_UINT8  ucMonth;     /**< Month,the value domain is from 1 to 12 */
    TUP_UINT8  ucDay;       /**< Day,the value domain is from 1 to 31 */
    TUP_UINT8  ucHour;      /**< Hour,the value domain is from 0 to 23 */
    TUP_UINT8  ucMinute;    /**< Minute,the value domain is from 0 to 59 */
    TUP_UINT8  ucSecond;    /**< Second,the value domain is from 0 to 59 */
    TUP_ULONG  ulUTCSec;    /**< Second to UTC, ��00:00:00 UTC, January 1, 1900 ����������������*/
}CMPT_S_DATETIME;


#ifdef __cplusplus
#if __cplusplus
}
#endif /*  __cpluscplus */
#endif /*  __cpluscplus */

#endif  /* __CMPT_DEF_H__ */
