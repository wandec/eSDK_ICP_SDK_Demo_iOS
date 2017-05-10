/** 
 * @file tup_confctrl_advanced_def.h
 * 
 * Copyright(C), 2012-2017, Huawei Tech. Co., Ltd. ALL RIGHTS RESERVED. \n
 * 
 * @brief [en]Description: The header file of conference control subsystem basic service function struct definition.
 * ������TUP ���������ϵͳ����ҵ���ܽṹ�嶨��ͷ�ļ��� \n
 **/

#ifndef __CONFCTRL_ADVANCED_DEF_H__
#define __CONFCTRL_ADVANCED_DEF_H__

#include "tup_def.h"
#include "tup_confctrl_def.h"

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif /*  __cpluscplus */
#endif /*  __cpluscplus */


/** 
 * [en]<br>
 * [cn]���Э������
 */
typedef enum tagCONFCTRL_E_PROTOCOL_TYPE
{
    CONFCTRL_E_H323_H245,                       /**< [en]Indicates H245 confcontrol of H323  protocol.  [cn]H323Э���H245��� */
    CONFCTRL_E_SIP_IDO,                         /**< [en]Indicates ido confcontrol for SIP  protocol.      [cn]SIPЭ���IDO��� */
    CONFCTRL_E_PROTOCOL_BUTT                    /**< [en]Indicates invalid  protocol type.                     [cn]��Ч��Э������ */
} CONFCTRL_E_PROTOCOL_TYPE;

#ifdef __cplusplus
#if __cplusplus
}
#endif /*  __cpluscplus */
#endif /*  __cpluscplus */

#endif  /* __CONFCTRL_ADVANCED_DEF_H__ */
