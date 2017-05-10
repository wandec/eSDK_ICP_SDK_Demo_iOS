/** 
 * @file tup_confctrl_advanced_interface.h
 * 
 * Copyright(C), 2012-2016, Huawei Tech. Co., Ltd. ALL RIGHTS RESERVED. \n
 * 
 * @brief [en]Description: The header files of TUP conference control subsystem basic service function interface
 * [cn]������TUP ���������ϵͳ����ҵ���ܽӿ�ͷ�ļ��� \n
 **/


#ifndef __CONFCTRL_ADVANCED_INTERFACE_H__
#define __CONFCTRL_ADVANCED_INTERFACE_H__

#include "tup_confctrl_advanced_def.h"
#include "tup_confctrl_interface.h"

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif /*  __cpluscplus */
#endif /*  __cpluscplus */


/**
 * @ingroup ConfMng
 * @brief [en]This interface is used to get conference list(synchronize interface).
 *        <br>[cn]��ȡ�����б� (ͬ���ӿ�)
 * 
 * @param [in] const TUP_VOID* get_conf_list  <b>:</b><br>[en]Indicates to get conference list info request structure.
 *                                                    <br>[en]On-premise VC meeting and Hosted VC meeting, not support at present.
 *                                                    <br>[en]In Convergent meeting(include PBX internal conference), corresponding structure is CONFCTRL_S_GET_CONF_LIST.
 *                                                    <br>[cn]��ȡ�����б���Ϣ����ṹ 
 *                                                    <br>[cn]On-premise VC�����Hosted VC���飬�ݲ�֧�֣� 
 *                                                    <br>[cn]Convergent meeting �ںϻ���(����PBX���û���)����Ӧ�����ݽṹΪCONFCTRL_S_GET_CONF_LIST��
 * @param [out] TUP_VOID* conf_info           <b>:</b><br>[en]Indicates conference list information, the need for upper application space, the upper layer
 *                                                    <br>[en]should be allocated corresponding to the size of the data structure get_conf_list.page_size times the size of memory.
 *                                                    <br>[en]In Convergent meeting(include PBX internal conference), corresponding structure is CONFCTRL_S_CONF_LIST_INFO.
 *                                                    <br>[cn]�����б���Ϣ,��Ҫ�ϲ�����ռ䣬�ϲ�Ӧ�÷����Ӧ���ݽṹ��С��get_conf_list.page_size����С�ڴ�
 *                                                    <br>[cn]Convergent meeting �ںϻ���(����PBX���û���)����Ӧ�����ݽṹΪCONFCTRL_S_CONF_LIST_INFO��
 * @param [out] TUP_UINT32* num_of_conf       <b>:</b><br>[en]Indicates number of conference whose size less or equal than get_conf_list.page_size.
 *                                                    <br>[cn]��ʾ��ȡ���Ļ�����Ϣ����������С�ڵ���get_conf_list.page_size
 * @param [out] TUP_UINT32* total_conf_num    <b>:</b><br>[en]Indicates total conference number.
 *                                                    <br>[cn]�ܵĻ������
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCESS, otherwise return corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_confctrl_get_conf_list_syn(IN const TUP_VOID* get_conf_list, OUT TUP_VOID* conf_info, OUT TUP_UINT32* num_of_conf, OUT TUP_UINT32* total_conf_num);



/**
 * @ingroup ConfMng
 * @brief [en]This interface is used to get detail info of conference(sychronize interface).
 *        <br>[cn]��ȡ������ϸ��Ϣ (ͬ���ӿ�)
 * 
 * @param [in] const TUP_VOID* get_conf_list  <b>:</b><br>[en]Indicates get detail info of conference request structure.
 *                                                    <br>[en]On-premise VC meeting and Hosted VC meeting, not support at present.
 *                                                    <br>[en]In Convergent meeting(include PBX internal conference), corresponding structure is CONFCTRL_S_CONF_LIST_INFO.
 *                                                    <br>[cn]��ȡ��ȡ������ϸ��Ϣ����ṹ 
 *                                                    <br>[cn]On-premise VC�����Hosted VC���飬�ݲ�֧�֣� 
 *                                                    <br>[cn]Convergent meeting �ںϻ���(����PBX���û���)����Ӧ�����ݽṹΪCONFCTRL_S_GET_CONF_INFO��
 * @param [out] TUP_VOID* conf_info           <b>:</b><br>[en]Indicates conference list information, the need for upper application space, the upper layer
 *                                                    <br>[en]should be allocated corresponding to the size of the data structure get_conf_list.page_size times the size of memory.
 *                                                    <br>[en]In Convergent meeting(include PBX internal conference), corresponding struct is CONFCTRL_S_GET_CONF_INFO_RESULT��conf_info->attendee, memory to be allocated by the upper, the size of get_conf_info->page_size * sizeof(CONFCTRL_S_ATTENDEE).
 *                                                    <br>[cn]�����б���Ϣ,��Ҫ�ϲ�����ռ䣬�ϲ�Ӧ�÷����Ӧ���ݽṹ��С��get_conf_info.page_size����С�ڴ� 
 *                                                    <br>[cn]Convergent meeting �ںϻ���(����PBX���û���)����Ӧ�����ݽṹΪCONFCTRL_S_GET_CONF_INFO_RESULT��conf_info->attendee�ڴ�Ҫ���ϲ���䣬��СΪ get_conf_info->page_size * sizeof(CONFCTRL_S_ATTENDEE)
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCESS, otherwise return corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_confctrl_get_conf_info_syn(IN const TUP_VOID* get_conf_info, OUT TUP_VOID* conf_info);



/**
 * @ingroup ConfCtrl.
 * @brief [en]This interface is used to get info of joining data conf (sychronize interface).
 *        <br>[cn]��ȡ���ݻ�����������Ϣ(ͬ���ӿ�)
 * 
 * @param [in] const CONFCTRL_S_GET_DATACONF_PARAMS* get_params  <b>:</b><br>[en]Indicates info of joining data conf request struct.
 *                                                                  <br>[cn]��ȡ�����������
 * @param [io] TUP_CHAR* conf_params                        <b>:</b><br>[en]Indicates the data conference membership information, UI needs to allocate memory storage.
 *                                                                  <br>[cn]���ݻ�����������Ϣ��UI��Ҫ���з����ڴ�洢��
 * @param [io] TUP_UINT32* data_len                         <b>:</b><br>[en]Indicates need to allocate the conf_params memory size of the UI to return to the conference parameters of large data length, maximum length CONFCTRL_MAX_CONFPARAMS_LENGTH.
 *                                                                  <br>[cn]��Ҫ��UI�����conf_params�ڴ��С���룬���ػ����������ݳ��ȣ���󳤶�CONFCTRL_MAX_CONFPARAMS_LENGTH
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCESS, otherwise return corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]Indicates the data conference membership information is generally known as the "big data conference parameters", this interface is used in On-premise VC meeting, Hosted VC meeting and Convergent meeting(include PBX built-in Conference).
 *            <br>[cn]���ݻ��������Ϣһ�㱻��Ϊ"���ݻ�������"���˽ӿ�������On-premise VC���顢Hosted VC�����Convergent meeting �ںϻ���(����PBX���û���)
 * @see NA
 **/
TUP_API TUP_RESULT tup_confctrl_get_dataconf_params_xml_syn(IN const CONFCTRL_S_GET_DATACONF_PARAMS* get_params, OUT TUP_CHAR* conf_params, IO TUP_UINT32* data_len);


/**
 * @ingroup ConfCtrl.
 * @brief [en]This interface is used to get info of joining data conference (synchronize interface)(big param has been parsed).
 *        <br>[cn]��ȡ���ݻ�����������Ϣ(ͬ���ӿ�),(������ѽ���)
 * 
 * @param [in] const CONFCTRL_S_GET_DATACONF_PARAMS* get_params  <b>:</b><br>[en]Indicates info of joining data conf request struct.
 *                                                                       <br>[cn]��ȡ�����������
 * @param [out] CONFCTRL_S_DATACONF_PARAMS * conf_params         <b>:</b><br>[en]Indicates the data conference membership information, has to parse large parameter.
 *                                                                       <br>[cn]���ݻ�����������Ϣ���ѶԴ�������н�����
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCESS, otherwise return corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]Indicates the data conference membership information is generally known as the "big data conference parameters", this interface is used in On-premise VC meeting, Hosted VC meeting and Convergent meeting(include PBX built-in Conference).
 *            <br>[cn]���ݻ��������Ϣһ�㱻��Ϊ"���ݻ�������"���˽ӿ�������On-premise VC���顢Hosted VC�����Convergent meeting �ںϻ���(����PBX���û���)
 * @see NA
 */
TUP_API TUP_RESULT tup_confctrl_get_dataconf_params_syn(IN const CONFCTRL_S_GET_DATACONF_PARAMS* get_params, OUT CONFCTRL_S_DATACONF_PARAMS* conf_params);

/**
 * @ingroup ConfCtrl.
 * @brief [en]This interface is used to get conference resource(MCU network, mediax network),synchronize interface.
 *        <br>[cn]��ȡ������Դ(MCU���� mediax����)��ͬ���ӿ�
 * 
 * @param [in] const CONFCTRL_S_GET_CONF_RESOURCE *get_params  <b>:</b><br>[en]Indicates param of getting conf resource.
 *                                                                    <br>[cn]��ȡ������Դ��Ҫ�������Ϣ
 * @param [io] TUP_CHAR *conf_resource                        <b>:</b><br>[en]Indicates conference resources, UI need to allocate their own memory storage.
 *                                                                    <br>[cn]������Դ��UI��Ҫ���з����ڴ�洢��
 * @param [io] TUP_UINT32 *data_len                           <b>:</b><br>[en]Indicates need to allocate the conf_resource memory size UI incoming, return to the conference resource data length, maximum length CONFCTRL_MAX_CONFRESOURCE_LENGTH.
 *                                                                    <br>[cn]��Ҫ��UI�����conf_resource�ڴ��С���룬���ػ�����Դ���ݳ��ȣ���󳤶�CONFCTRL_MAX_CONFRESOURCE_LENGTH
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCESS, otherwise return corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_confctrl_get_conf_resource_syn(IN const CONFCTRL_S_GET_CONF_RESOURCE *get_params, IO TUP_CHAR *conf_resource, IO TUP_UINT32 *data_len);

/**
 * @ingroup AdvancedAPI
 * @brief [en]This interface is used to set conference control protocol trpe.
 *        <br>[cn]���û��Э������
 * 
 * @param [in] CONFCTRL_E_PROTOCOL_TYPE eProtocolType   <b>:</b><br>[en]Indicates protocol type.
 *                                                      <br>[cn]���Э������
 * @see NA
 **/
TUP_API  TUP_VOID tup_confctrl_set_protocol_type(CONFCTRL_E_PROTOCOL_TYPE eProtocolType);


#ifdef __cplusplus
#if __cplusplus
}
#endif /*  __cpluscplus */
#endif /*  __cpluscplus */

#endif  /* __CONFCTRL_ADVANCED_INTERFACE_H__ */
