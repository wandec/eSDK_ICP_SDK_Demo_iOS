/******************************************************************************

                  ��Ȩ���� (C), 2001-2011, ��Ϊ�������޹�˾

 ******************************************************************************
  �� �� ��   : tup_dns_interface.h
  �� �� ��   : ����
  ��    ��   : z00379872
  ��������   : 2017��1��12��
  ����޸�   :
  ��������   : tup_dns_interface.h ��ͷ�ļ�
  �����б�   :
  �޸���ʷ   :
  1.��    ��   : 2017��1��12��
    ��    ��   : z00379872
    �޸�����   : �����ļ�

******************************************************************************/

/*----------------------------------------------*
 * �ⲿ����˵��                                 *
 *----------------------------------------------*/

/*----------------------------------------------*
 * �ⲿ����ԭ��˵��                             *
 *----------------------------------------------*/

/*----------------------------------------------*
 * �ڲ�����ԭ��˵��                             *
 *----------------------------------------------*/

/*----------------------------------------------*
 * ȫ�ֱ���                                     *
 *----------------------------------------------*/

/*----------------------------------------------*
 * ģ�鼶����                                   *
 *----------------------------------------------*/

/*----------------------------------------------*
 * ��������                                     *
 *----------------------------------------------*/


/*----------------------------------------------*
 * �궨��                                       *
 *----------------------------------------------*/

#ifndef __TUP_DNS_INTERFACE_H__
#define __TUP_DNS_INTERFACE_H__


#ifdef __cplusplus
#if __cplusplus
extern "C"{
#endif
#endif /* __cplusplus */
#include "tup_def.h"
#define TUP_IP_ADDR_LEN (40)
#define TUP_DNS_DNAME_BUFSZ (256)
/*ͳһIP��ַ���ݽṹ*/
typedef struct tagTUP_S_HOST 
{
    TUP_UINT32  ulType;  // IP��ַ���ͣ�ö��IFRAME_E_IP_ADDR_TYPE
    TUP_UINT8   aucIP[TUP_IP_ADDR_LEN];  //IP��ַ

} TUP_S_HOST, *TUP_S_HOST_PTR;

/** ����SRV��¼�ṹ */
typedef struct tagTUP_DNS_S_SRV_TARGET 
{
  TUP_INT8 szTargetName[TUP_DNS_DNAME_BUFSZ]; /**< Ŀ������,�������ṩ��������� */
  TUP_UINT16 usPriority;              /**< ���ȼ� */
  TUP_UINT16 usWeight;                /**< Ȩ�� */
  TUP_S_HOST stIPAddr;         /**<IP ��ַ*/
  TUP_UINT16 usPort;                  /**< �˿ں� */
  TUP_UINT16 usReserve;             /**< ����Ԥ�� */
} TUP_DNS_S_SRV_TARGET, *TUP_DNS_S_SRV_TARGET_PTR;


typedef enum tagTUP_DNS_E_SEARCH_RECORD_TYPE
{
    TUP_DNS_E_RECORD_A = 0,      /**< ��ѯA��¼ */
    TUP_DNS_E_RECORD_AAAA,       /**< ��ѯAAAA��¼ */
    TUP_DNS_E_RECORD             /**< �Ȳ�A��¼���ٲ�AAAA��¼ */
}TUP_DNS_E_SEARCH_RECORD_TYPE;


/* dns ��־��ӡ�ӿں���ָ������ */
typedef TUP_VOID  (*TUP_FN_DNS_LOG_PRINT_PTR)(const TUP_CHAR *str);


/*****************************************************************************
 �� �� ��  : tup_dns_get_srv_resolve_syn
 ��������  : ͬ������dns SRV��ַ
 �������  : const TUP_INT8 *pszService                
             const TUP_INT8 *pszProto                  
             const TUP_INT8 *pszDomain                 
             TUP_DNS_S_SRV_TARGET *  pstSrvTargetList  
             TUP_UINT32* pulRRCount                    
 �������  : ��
 �� �� ֵ  : extern TUP_API TUP_RESULT
 ���ú���  : 
 ��������  : 
 
 �޸���ʷ      :
  1.��    ��   : 2017��2��17��
    ��    ��   : z00379872
    �޸�����   : �����ɺ���

*****************************************************************************/
extern TUP_API TUP_RESULT tup_dns_get_srv_resolve_syn(const TUP_INT8 *pszService,  const TUP_INT8 *pszProto, const TUP_INT8 *pszDomain,
                                          TUP_DNS_S_SRV_TARGET *  pstSrvTargetList, TUP_UINT32* pulRRCount);
/*****************************************************************************
 �� �� ��  : tup_dns_get_ip_resolve_syn
 ��������  : ͬ������A/AAAA��¼dns��ַ
 �������  : const TUP_INT8 *pszHostName  
             TUP_UINT32 ulSearchType      �鿴TUP_DNS_E_SEARCH_RECORD_TYPE
             TUP_S_HOST *pstAddressList   
             TUP_UINT32 *pulIpCount       
 �������  : ��
 �� �� ֵ  : extern TUP_API TUP_RESULT
 ���ú���  : 
 ��������  : 
 
 �޸���ʷ      :
  1.��    ��   : 2017��2��17��
    ��    ��   : z00379872
    �޸�����   : �����ɺ���

*****************************************************************************/
extern TUP_API TUP_RESULT tup_dns_get_ip_resolve_syn(
                     const TUP_CHAR *pszHostName,
                     TUP_UINT32 ulSearchType, 
                     TUP_S_HOST *pstAddressList,
                     TUP_UINT32 *pulIpCount);




/** Ӧ�ó�����øýӿ��������������Ϣ�ļ���

 *  @param[in]  ulLevel  ���������Ϣ�ļ���
 *  @param[out]  none   
 *  
 *  @retval     none  
 *
  \b ע�⣺
 - ��
 
 \b ʾ����
 - ��
 
 *  @see TSP_NETB_DnsSetLogLevel
 */
extern TUP_API TUP_VOID tup_dns_set_log_level(TUP_UINT32 ulLevel);

/** Ӧ�ó�����øýӿ��������������Ϣ����ӿ�

 *  @param[in]  pfnLogFunc  ���������Ϣ�����亯��
 *  @param[out]  none   
 *  
 *  @retval     none  
 *
  \b ע�⣺
 - ��
 
 \b ʾ����
 - ��
 
 *  @see TSP_NETB_DnsRegisterLogFunc
 */
extern TUP_API TUP_VOID tup_dns_register_log_func(TUP_FN_DNS_LOG_PRINT_PTR pfnLogFunc);

#ifdef __cplusplus
#if __cplusplus
}
#endif
#endif /* __cplusplus */


#endif /* __TUP_DNS_INTERFACE_H__ */
