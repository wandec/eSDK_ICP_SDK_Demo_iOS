/** 
 * @file tup_conf_baseapi.h
 * 
 * Copyright(C), 2012-2016, Huawei Tech. Co., Ltd. ALL RIGHTS RESERVED. \n
 * 
 * @brief [en]The header file of the TUP conference components basic service function interface. \n
 *        [cn]TUP �����������ҵ���ܽӿ�ͷ�ļ��� \n
 * @note  [en] The characters involved in the interface set in UTF8 format. \n
 *        [cn] �ӿ����漰�ַ���������UTF8��ʽ
 **/



#ifndef _TUP_CONF_BASEAPI_H_
#define _TUP_CONF_BASEAPI_H_

#include "tup_conf_basedef.h"
#include "tup_def.h"


#ifdef __cplusplus
#if __cplusplus
extern "C"{
#endif
#endif /* __cplusplus */


/**
 * @defgroup OpenAPI
 * @brief [en]This module is about conference components open interface.
 *        <br>[cn]����������Žӿ�.
 **/

/**
 * @defgroup BasicConfCtrl
 * @ingroup OpenAPI
 * @brief [en]This module is about basic conference control interface.
 *        <br>[cn]����������ƽӿ�
 **/

/**
 * @defgroup AppShare
 * @ingroup OpenAPI
 * @brief [en]This module is about desktop and application share.
 *        <br>[cn]����/Ӧ�ó�����
 **/

/**
 * @defgroup DocShare
 * @ingroup OpenAPI
 * @brief [en]This module is about desktop and white board share.
 *        <br>[cn]�ĵ��Ͱװ干��
 **/

/**
 * @defgroup VideoCtrl
 * @ingroup OpenAPI
 * @brief [en]This module is about video control.
 *        <br>[cn]��Ƶ����
 **/

/**
 * @defgroup AudioCtrl
 * @ingroup OpenAPI
 * @brief [en]This module is about audio control.
 *        <br>[cn]��Ƶ����
 **/



/**
 * @ingroup BasicConfCtrl
 * @brief [en]This interface is used to initialize conference components, set thread model, system device type and operate system type.
 *        <br>[cn]��ʼ����������������߳�ģ�͡�ϵͳ�豸���ͺͲ���ϵͳ����
 * 
 * @param [in] TUP_BOOL selfthread            <b>:</b><br>[en]Indicates thread model. The options are as follows:
 *                                                    <br>true: conference component run in a independent thread, in this mode it not support media sharing module.
 *                                                    <br>fales: the thread which invoke this function is the running thread of conference component, callback also in this thread.
 *                                                    <br>[cn]�߳�ģ��, ȡֵ:
 *                                                    <br>[cn]true����������ڶ����߳����У���ģʽ�²�֧��ý�干��ģ��
 *                                                    <br>[cn]false�����øú������߳�Ϊ��������������̣߳���Ϣ�ص�Ҳ�ڸ��߳�
 * @param [in] const Init_param * pinitparam  <b>:</b><br>[en]Indicates initialization parameters, including device type and operate system type.
 *                                                    <br>[cn]��ʼ�������������豸���ͺͲ���ϵͳ����
 * @retval TUP_VOID
 * 
 * @attention [en]The thread which invoke this function is message callback thread, suggest invoke in main thread.
 *            <br>[cn]���øú������߳�Ϊ��Ϣ�ص��̣߳����������̵߳���
 * @see tup_conf_uninit
 **/
TUP_API TUP_VOID  tup_conf_init(IN TUP_BOOL selfthread, IN const Init_param * pinitparam);


/**
 * @ingroup BasicConfCtrl
 * @brief [en]This interface is used to uninit the meeting components, release all meetings and all resources before exit program .
 *        <br>[cn]ȥ��ʼ������������˳�����ǰ�ͷ����л��鼰������Դ
 * 
 * @param [in] TUP_VOID
 * @retval TUP_VOID
 * 
 * @attention [en]NA
 *            <br>[cn]NA
 * @see tup_conf_init
 **/
TUP_API TUP_VOID  tup_conf_uninit(TUP_VOID);


/**
 * @ingroup BasicConfCtrl
 * @brief [en]This interface is used to create a new conference object.
 *        <br>[cn]�½�һ���������
 * 
 * @param [in] conference_multi_callback callback   <b>:</b><br>[en]Indicates conference callback handler function address.
 *                                                          <br>[cn]����ص���������ַ
 * @param [in] const TC_CONF_INFO* confinfo         <b>:</b><br>[en]Indicates conference parameter information.
 *                                                          <br>[cn]���������Ϣ
 * @param [in] TUP_UINT32 option                    <b>:</b><br>[en]Indicates conference option, value refer to CONF_OPTION, when use base function set CONF_OPTION_USERLIST.
 *                                                          <br>[cn]����ѡ�ȡֵ:CONF_OPTION��ʹ�û�������ʱ����ΪCONF_OPTION_USERLIST
 * @param [out] CONF_HANDLE* handle                 <b>:</b><br>[en]Returns conference handle pointer.
 *                                                          <br>[cn]���ػ�������ָ��
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCSS, otherwise return corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]Return a conference unique sign. This interface is only suit for single conference scene, please use tup_conf_new interface
 *            <br>window system: this function must be invoked in main thread which has message loop, otherwise unable to drive component message processing.
 *            <br>[cn]����һ�������Ψһ��ʶ���ýӿ�ֻ���õ����鳡�����Ի�������tup_conf_new�ӿڡ�
 *            <br>[cn]Windowϵͳ���ú�������������Ϣѭ�����߳��е��ã������޷����������Ϣ����
 * @see tup_conf_release
 **/
TUP_API TUP_RESULT  tup_conf_new(IN conference_multi_callback callback, IN const TC_CONF_INFO* confinfo, 
                                     IN TUP_UINT32 option, OUT CONF_HANDLE* handle);

/**
 * @ingroup BasicConfCtrl
 * @brief [en]This interface is used to join conference.
 *        <br>[cn]�������
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle.
 *                                                <br>[cn]������
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCSS��otherwise return corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]NA.
 *            <br>[cn]NA         
 * @see CONF_MSG_ON_CONFERENCE_JOIN
 * @see CONF_MSG_USER_ON_ENTER_IND 
 * @see CONF_MSG_USER_ON_HOST_CHANGE_IND
 * @see CONF_MSG_USER_ON_PRESENTER_CHANGE_IND
 **/
TUP_API TUP_RESULT  tup_conf_join(IN CONF_HANDLE handle); 

/**
 * @ingroup BasicConfCtrl
 * @brief [en]This interface is used to leave conference.
 *        <br>[cn]�뿪����
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle.
 *                                                <br>[cn]������
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCSS��otherwise return corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]xxxx.
 *            <br>[cn]NA
 *            
 * @see CONF_MSG_USER_ON_LEAVE_IND
 **/
TUP_API TUP_RESULT  tup_conf_leave(IN CONF_HANDLE handle); 


/**
 * @ingroup BasicConfCtrl
 * @brief [en]This interface is used to end conference.
 *        <br>[cn]��������
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle.
 *                                                <br>[cn]������
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCSS�� otherwise return corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]Notify conference server to release conference resource, all attendees will receive conference end notification, after conference end when join it again will be prompted "conference already end". Only conference chairman can invoke.
 *            <br>[cn]��֪ͨ����������ͷŻ�����Դ����������߻��յ����������֪ͨ��Ϣ������������ٴ�������ʾ����û�"�����Ѿ�����"�� 
 *            <br>[cn]������ϯ�ſɵ��á�           
 * @see CONF_MSG_ON_CONFERENCE_TERMINATE
 **/
TUP_API TUP_RESULT  tup_conf_terminate(IN CONF_HANDLE handle);


/**
 * @ingroup BasicConfCtrl
 * @brief [en]This interface is used to destroy a conference object.
 *        <br>[cn]����һ���������
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle.
 *                                                <br>[cn]������
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCSS otherwise return corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]This method must be in the same thread as tup_conf_new, this function is suggested invoke when the program exits, such as invoking at the last moment the main thread exits.
 *            <br>Can not invokr the tup_conf_leave interface immediately after the invoke to the interface, or some messages can not be sent, failed to leave the meeting.
 *            <br>Cannot invoke tup_conf_terminate interface invoke immediately after the interface, some messages won't be able to send, the meeting is not terminated by normal, or may cause components to collapse. Can receive news CONF_MSG_ON_CONFERENCE_TERMINATE recognition has been stopped in invoke to the interface 
 *            <br>[cn]�ú��������tup_conf_new��ͬһ���̣߳�
 *            <br>[cn]�ú��������ڳ����˳�ʱ���ã��������߳��˳������һ�̵��á�
 *            <br>[cn]���ܵ���tup_conf_leave�ӿ�֮�����̵��øýӿڣ�����һЩ��Ϣ�޷����ͣ�δ�������뿪����
 *            <br>[cn]���ܵ���tup_conf_terminate�ӿ�֮�����̵��øýӿڣ�����һЩ��Ϣ�޷����ͣ�����δ��������ֹ�����߿��ܻ������������������յ���ֹȷ����ϢCONF_MSG_ON_CONFERENCE_TERMINATE����øýӿ�
 * @see tup_conf_new
 **/
TUP_API TUP_RESULT  tup_conf_release(IN CONF_HANDLE handle);


/**
 * @ingroup BasicConfCtrl
 * @brief [en]This interface is used to loads the specified component .
 *        <br>[cn]����ָ�����
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle.
 *                                                <br>[cn]������
 * @param [in] TUP_UINT32 compts          <b>:</b><br>[en]Indicates component id, value refer to COMPONENT_IID, multiple components can be loaded or operation
 *                                                <br>[cn]���ID, ȡֵ:COMPONENT_IID, ���ض�����ʱ�ɻ�����
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCSS��otherwise return corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @CONF_MSG_ON_COMPONENT_LOAD
 * @see tup_conf_reg_component_callback
 **/
TUP_API TUP_RESULT  tup_conf_load_component(IN CONF_HANDLE handle, IN TUP_UINT32 compts);


/**
 * @ingroup BasicConfCtrl
 * @brief [en]This interface is used to registers the callback function of the specified component.
 *        <br>[cn]ע��ָ������Ļص�����
 * 
 * @param [in] CONF_HANDLE handle                   <b>:</b><br>[en]Indicates conference handle.
 *                                                          <br>[cn]������
 * @param [in] TUP_UINT32 compts                    <b>:</b><br>[en]Indicates component ID, value refer to COMPONENT_IID.
 *                                                          <br>[cn]���ID, ȡֵ:COMPONENT_IID
 * @param [in] component_multi_callback callback    <b>:</b><br>[en]Indicates callback method.
 *                                                          <br>[cn]�ص�����
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCSS��otherwise return corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see tup_conf_load_component
 **/
TUP_API TUP_RESULT  tup_conf_reg_component_callback(IN CONF_HANDLE handle, IN TUP_UINT32 compt, IN component_multi_callback callback);


/**
 * @ingroup BasicConfCtrl
 * @brief [en]This interface is used to kick out a user.
 *        <br>[cn]�߳�һ���û�
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle.
 *                                                <br>[cn]������
 * @param [in] TUP_UINT32 userid          <b>:</b><br>[en]Indicates user id.
 *                                                <br>[cn]�û�ID
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCSS��otherwise return corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]Invoker must be host.
 *            <br>[cn]�����߱�����������
 * @see CONF_MSG_ON_CONFERENCE_LEAVE
 * @see CONF_MSG_USER_ON_LEAVE_IND
 **/
TUP_API TUP_RESULT  tup_conf_user_kickout(IN CONF_HANDLE handle, IN TUP_UINT32 userid);


/**
 * @ingroup AppShare
 * @brief [en]This interface is used to set the screen share owner.
 *        <br>[cn]������Ļ�����ӵ����
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle.
 *                                                <br>[cn]������
 * @param [in] TUP_UINT32 userid          <b>:</b><br>[en]Indicates user id.
 *                                                <br>[cn]�û�ID
 * @param [in] TUP_UINT32 action          <b>:</b><br>[en]Indicates set action, release:AS_ACTION_DELETE; owner:AS_ACTION_ADD.
 *                                                <br>[cn]���ö���, �ͷ�:AS_ACTION_DELETE;ӵ��:AS_ACTION_ADD
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCSS�� otherwise return corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]After successful invoke this interface, the original have Shared permissions the user share permissions will be automatically cancelled, ongoing sharing will stop .
 *            <br>[cn]�ɹ����øýӿں�ԭ��ӵ�й���Ȩ�޵��û��Ĺ���Ȩ�޻��Զ�ȡ�������ڽ��еĹ����ֹͣ
 * @seeCOMPT_MSG_AS_ON_SHARING_SESSION
 * @see tup_conf_uninit
 **/
TUP_API TUP_RESULT  tup_conf_as_set_owner(IN CONF_HANDLE handle, IN TUP_UINT32 userid, IN TUP_UINT32 action);                


/**
 * @ingroup AppShare
 * @brief [en]This interface is used to set the current sharing type.
 *        <br>[cn]���õ�ǰ�Ĺ�������
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle.
 *                                                <br>[cn]������
 * @param [in] TUP_UINT32 sharingtype     <b>:</b><br>[en]Indicates sharing type, desktop sharing:AS_SHARINGTYPE_DESKTOP; application sharing:AS_SHARINGTYPE_APP.
 *                                                <br>[cn]��������, ���湲��:AS_SHARINGTYPE_DESKTOP;Ӧ�ó�����:AS_SHARINGTYPE_APP
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCSS��otherwise return corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]The interface can only be invoking by a shared end, and when the shared type changes, the current ongoing share will stop.
 *            <br>[cn]�ýӿ�ֻ�����ɹ���˵��ã�����������ͷ��ͱ仯ʱ����ǰ���ڽ��еĹ����ֹͣ��
 * @see NA
 **/
TUP_API TUP_RESULT  tup_conf_as_set_sharetype(IN CONF_HANDLE handle, IN TUP_INT32 sharingtype);


/**
 * @ingroup AppShare
 * @brief [en]This interface is used to starts desktop sharing or application sharing.
 *        <br>[cn]��ʼ���湲���Ӧ�ó�����
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle.
 *                                                <br>[cn]������
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCSS�� otherwise return corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 *            
 * @see COMPT_MSG_AS_ON_SHARING_STATE
 **/
TUP_API TUP_RESULT  tup_conf_as_start(IN CONF_HANDLE handle);


/**
 * @ingroup AppShare
 * @brief [en]This interface is used to stop desktop sharing or application sharing.
 *        <br>[cn]ֹͣ���湲���Ӧ�ó�����
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle.
 *                                                <br>[cn]������
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCSS�� otherwise return corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 *            
 * @see COMPT_MSG_AS_ON_SHARING_STATE
 **/
TUP_API TUP_RESULT  tup_conf_as_stop(IN CONF_HANDLE handle); 



/**
 * @ingroup AppShare
 * @brief [en]This interface is used to get screen data.
 *        <br>[cn]��ȡ��Ļ����
 * 
 * @param [in] CONF_HANDLE handle                   <b>:</b><br>[en]Indicates conference handle.
 *                                                          <br>[cn]������
 * @param [out] TC_AS_SCREENDATA* pscreendata       <b>:</b><br>[en]Indicates screen data.
 *                                                          <br>[cn]��Ļ����
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCSS, otherwise return corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]Invoke when receive COMPT_MSG_AS_ON_SCREEN_DATA message.
 *            <br>[cn]���յ�COMPT_MSG_AS_ON_SCREEN_DATA��Ϣʱ����
 * @see NA
 **/
TUP_API TUP_RESULT  tup_conf_as_get_screendata(IN CONF_HANDLE handle, OUT TC_AS_SCREENDATA* pscreendata); 


/**
 * @ingroup VideoCtrl
 * @brief [en]This interface is used to get device information list.
 *        <br>[cn]��ȡ�豸��Ϣ�б�
 * 
 * @param [in] CONF_HANDLE handle                  <b>:</b><br>[en]Indicates conference handle, when it's 0, use to video guide.
 *                                                         <br>[cn]��������Ϊ0ʱ��������Ƶ��
 * @param [out] TC_DEVICE_INFO* device_info        <b>:</b><br>[en]Indicates pointer which point video devices list array.
 *                                                         <br>[cn]ָ����Ƶ�豸�б������ָ��
 * @param [out] TUP_UINT32* ret_count              <b>:</b><br>[en]Indicates when device_info is null,returns the number of video devices.
 *                                                         <br>[cn]��device_infoΪ��ʱ��������Ƶ�豸����
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCSS otherwise return corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]This interface should be divided into two invoke, the first invoke to get the number of devices, the second invoke to obtain specific equipment information.
 *            <br>This interface application scene: after the success of the video module loading, access to their own device information; or open the wizard window, access to their device information.
 *            <br>[cn]�˽ӿ�Ҫ�����ε��ã���һ�ε��û�ȡ�豸�������ڶ��ε��û�ȡ�����豸��Ϣ
 *            <br>[cn]�˽ӿ�Ӧ�ó�������Ƶģ����سɹ��󣬻�ȡ�Լ����豸��Ϣ�������򵼴��ں󣬻�ȡ�Լ����豸��Ϣ��
 * @see NA
 **/
TUP_API TUP_RESULT  tup_conf_video_get_deviceinfo(IN CONF_HANDLE handle, OUT TC_DEVICE_INFO* device_info, OUT TUP_UINT32* ret_count);


/**
 * @ingroup VideoCtrl
 * @brief [en]This interface is used to gets the capability set information list for the specified device.
 *        <br>[cn]��ȡָ���豸����������Ϣ�б�
 * 
 * @param [in] CONF_HANDLE handle                  <b>:</b><br>[en]Indicates conference handle.
 *                                                         <br>[cn]������
 * @param [in] TUP_UINT32 deviceid                 <b>:</b><br>[en]Indicates video device ID.
 *                                                         <br>[cn]��Ƶ�豸ID
 * @param [out] TC_VIDEO_PARAM* capbility_info     <b>:</b><br>[en]Indicates video device capability information.
 *                                                         <br>[cn]��Ƶ�豸������Ϣ
 * @param [out] TUP_UINT32* ret_count              <b>:</b><br>[en]Indicates when pdevice_info is null,returns the number of video devices.
 *                                                         <br>[cn]��pdevice_infoΪ��ʱ��������Ƶ�豸����
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCSS otherwise return corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]This interface get the oneself device capability info list. When the handle is 0, said to be able to obtain membership number of equipment, can be used to guide function.
 *            <br>This interface application scene: after the success of the video module loading, access to their own equipment has the ability of information; or open the wizard window, access to their own equipment has the ability to information
 *            <br>[cn]�˽ӿڻ�õ����Լ���ĳһ�豸��������Ϣ�б���handleΪ0ʱ����ʾ�����Ϳ��Ի�ȡ�豸�������������򵼹��ܣ�
 *            <br>[cn]�˽ӿ�Ӧ�ó�������Ƶģ����سɹ��󣬻�ȡ�Լ���ĳ���豸ӵ�е�������Ϣ�������򵼴��ں󣬻�ȡ�Լ���ĳ���豸ӵ�е�������Ϣ��
 * @see NA
 **/
TUP_API TUP_RESULT  tup_conf_video_get_devicecapbilityinfo(IN CONF_HANDLE handle, IN TUP_UINT32 deviceid, OUT TC_VIDEO_PARAM* capbility_info, OUT TUP_UINT32* ret_count);    


/**
 * @ingroup VideoCtrl
 * @brief [en]This interface is used to turn on your own camera
 *        <br>[cn]���Լ�������ͷ
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle.
 *                                                <br>[cn]������
 * @param [in] TUP_UINT32 deviceid        <b>:</b><br>[en]Indicates video device ID.
 *                                                <br>[cn]��Ƶ�豸ID
 * @param [in] TUP_BOOL preview           <b>:</b><br>[en]Whether need to preview ,do not preview will not call back the COMPT_MSG_VIDEO_ON_SWITCH message.
 *                                                <br>[cn]�Ƿ���ҪԤ������Ԥ���򲻻�ص�COMPT_MSG_VIDEO_ON_SWITCH��Ϣ
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCSS�� otherwise return corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]This operation will start your own camera.
 *            <br>[cn]�ò����������Լ�������ͷ
 * @see COMPT_MSG_VIDEO_ON_SWITCH
 * @see tup_conf_video_close
 **/
TUP_API TUP_RESULT  tup_conf_video_open(IN CONF_HANDLE handle, IN TUP_UINT32 deviceid, IN TUP_BOOL preview );      


/**
 * @ingroup VideoCtrl
 * @brief [en]This interface is used to close your own camera.
 *        <br>[cn]�ر��Լ�������ͷ
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle.
 *                                                <br>[cn]������
 * @param [in] TUP_UINT32 deviceid        <b>:</b><br>[en]Indicates video device ID.
 *                                                <br>[cn]��Ƶ�豸ID
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCSS�� otherwise return corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see COMPT_MSG_VIDEO_ON_SWITCH
 * @see tup_conf_video_open
 **/
TUP_API TUP_RESULT  tup_conf_video_close(IN CONF_HANDLE handle, IN TUP_UINT32 deviceid); 


/**
 * @ingroup VideoCtrl
 * @brief [en]This interface is used to set related parameters of video.
 *        <br>[cn]������Ƶ����ز���
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle.
 *                                                <br>[cn]������
 * @param [in] TUP_UINT32 deviceid        <b>:</b><br>[en]Indicates video device ID.
 *                                                <br>[cn]��Ƶ�豸ID
 * @param [in] TC_VIDEO_PARAM* pvparam    <b>:</b><br>[en]Indicates video device capability parameter message.
 *                                                <br>[cn]��Ƶ�豸����������Ϣ
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCSS��otherwise return corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]Sets parameters before opening the video,if not set then use the default value to set.
 *            <br>[cn]����Ƶ֮ǰ��Ҫ���ã��粻������ô�Ͳ���ȱʡֵ��������
 * @see tup_conf_video_close
 **/
TUP_API TUP_RESULT  tup_conf_video_setparam(IN CONF_HANDLE handle, IN TUP_UINT32 deviceid, IN TC_VIDEO_PARAM* pvparam);


/**
 * @ingroup VideoCtrl
 * @brief [en]This interface is used to attach appointed user's video and window.
 *        <br>[cn]ָ���û�����Ƶ�봰�ڽ��а�
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle.
 *                                                <br>[cn]������
 * @param [in] TUP_UINT32 userid          <b>:</b><br>[en]Indicates user id.
 *                                                <br>[cn]�û�ID
 * @param [in] TUP_UINT32 deviceid        <b>:</b><br>[en]Indicates video device id.
 *                                                <br>[cn]��Ƶ�豸ID
 * @param [in] TUP_VOID* pwnd             <b>:</b><br>[en]Indicates window handle.
 *                                                <br>[cn]���ھ��
 * @param [in] TUP_BOOL highchannel       <b>:</b><br>[en]Indicates whether to join the high channel default is high.
 *                                                <br>[cn]�Ƿ���������ȡֵ:TRUE/FALSE, Ĭ�ϸ���
 * @param [in] TUP_UINT8 showmode         <b>:</b><br>[en]Indicates video show mode in window, 0: full window; 1: Show according to the ratio of the video, the rest in the black filled; 2: That cut by the size of the window
 *                                                <br>[cn]��Ƶ�ڴ�����ʾģʽ��ȡֵ:0 ��ʾ��������, 1 ��ʾ����Ƶ�ı���������ʾ�����ಿ���Ժ�ɫ���, 2 ��ʾ�����ڴ�С���вü�
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCSS��otherwise return corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]Binding oneself is preview, binding others joined the video channel from others to the current user can watch the video of others .
 *            <br>[cn]���Լ�����Ԥ�����󶨱�����ǰ�û�������˵���Ƶͨ���Ӷ����Թۿ����˵���Ƶ��
 * @see tup_conf_video_detach
 **/
TUP_API TUP_RESULT  tup_conf_video_attach(IN CONF_HANDLE handle, IN TUP_UINT32 userid, IN TUP_UINT32 deviceid, IN TUP_VOID* pwnd, IN TUP_BOOL highchannel , IN TUP_UINT8 showmode );


/**
 * @ingroup VideoCtrl
 * @brief [en]This interface is used to detach appointed user's video and window.
 *        <br>[cn]ָ���û���Ƶ�봰�ڽ��н��
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle.
 *                                                <br>[cn]������
 * @param [in] TUP_UINT32 userid          <b>:</b><br>[en]Indicates user id.
 *                                                <br>[cn]�û�ID
 * @param [in] TUP_UINT32 deviceid        <b>:</b><br>[en]Indicates video device id.
 *                                                <br>[cn]��Ƶ�豸ID
 * @param [in] TUP_VOID* pwnd             <b>:</b><br>[en]Indicates window handle.
 *                                                <br>[cn]���ھ��
 * @param [in] TUP_BOOL bleavechannel     <b>:</b><br>[en]Indicates whether to leave the channel when unbind the window.
 *                                                <br>[cn]��󴰿�ʱ�Ƿ��뿪ͨ����ȡֵ:TRUE/FALSE, Ĭ�ϲ��뿪���뿪�򲻽�������
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCSS, otherwise return corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see tup_conf_video_attach
 **/
TUP_API TUP_RESULT  tup_conf_video_detach(IN CONF_HANDLE handle, IN TUP_UINT32 userid, IN TUP_UINT32 deviceid, IN TUP_VOID* pwnd, IN TUP_BOOL bleavechannel);


/**
 * @ingroup VideoCtrl
 * @brief [en]This interface is used to attach multi-video.
 *        <br>[cn]����ָ���û�����Ƶ�봰�ڽ��а�
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle.
 *                                                <br>[cn]������
 * @param [in] TC_MEDIA_USER_IND puserList     <b>:</b><br>[en]Indicates the pointer of video information.
 *                                                <br>[cn]��Ƶ������ID������Ϣ
 * @param [in] TUP_UINT32 dwcount        <b>:</b><br>[en]Indicates the count of video.
 *                                                <br>[cn]��Ƶ����
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCSS��otherwise return corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]Binding oneself is preview, binding others joined the video channel from others to the current user can watch the video of others .
 *            <br>[cn]���Լ�����Ԥ�����󶨱�����ǰ�û�������˵���Ƶͨ���Ӷ����Թۿ����˵���Ƶ��
 * @see tup_conf_video_detach_all_substream
 **/
TUP_API TUP_RESULT  tup_conf_video_attach_batch(CONF_HANDLE handle, TC_MEDIA_USER_IND* puserList, TUP_UINT32 dwcount);


/**
 * @ingroup VideoCtrl
 * @brief [en]This interface is used to detach all user's sub video.
 *        <br>[cn]����û���������
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle.
 *                                                <br>[cn]������
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCSS, otherwise return corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see tup_conf_video_attach_batch
 **/
TUP_API TUP_RESULT  tup_conf_video_detach_all_substream(CONF_HANDLE handle);


/**
 * @ingroup DocShare
 * @brief [en]This interface is used to create a new whiteboard document
 *        <br>[cn]�½�һ���յİװ��ĵ�
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle.
 *                                                <br>[cn]������
 * @param [in] COMPONENT_IID ciid         <b>:</b><br>[en]Indicates component id, IID_COMPONENT_WB represent whiteboard.
 *                                                <br>[cn]���ID��IID_COMPONENT_WB��ʾ�װ�
 * @param [in] TUP_UINT32* ret_docid      <b>:</b><br>[en]Indicates document id.
 *                                                <br>[cn]�װ��ĵ�ID
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCSS�� otherwise return corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]Other attendees will receive create new whiteboard notification.
 *            <br>[cn]������������߶����յ��½��װ��֪ͨ
 * @see COMPT_MSG_WB_ON_DOC_NEW
 * @see tup_conf_ds_new_page
 **/
TUP_API TUP_RESULT  tup_conf_ds_new_doc(IN CONF_HANDLE handle, IN COMPONENT_IID ciid, OUT TUP_UINT32* ret_docid);


/**
 * @ingroup DocShare
 * @brief [en]This interface is used to create a new whiteboard page in a appointed whiteboard document.
 *        <br>[cn]��ָ���İװ��ĵ����½��װ�ҳ
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle.
 *                                                <br>[cn]������
 * @param [in] COMPONENT_IID ciid         <b>:</b><br>[en]Indicates component id, IID_COMPONENT_WB represent whiteboard.
 *                                                <br>[cn]���ID��IID_COMPONENT_WB��ʾ�װ�
 * @param [in] TUP_UINT32 docid           <b>:</b><br>[en]Indicates document id.
 *                                                <br>[cn]�װ��ĵ���ID
 * @param [in] TUP_INT32 width            <b>:</b><br>[en]Indicates page width(TWIPS).
 *                                                <br>[cn]Ҫ������ҳ��Ŀ�ȣ���TWIPSΪ��λ
 * @param [in] TUP_INT32 height           <b>:</b><br>[en]Indicates page height(TWIPS).
 *                                                <br>[cn]Ҫ������ҳ��ĸ߶ȣ���TWIPSΪ��λ
 * @param [out] TUP_UINT32* ret_pageid    <b>:</b><br>[en]Indicates new page id.
 *                                                <br>[cn]��ҳ���ID
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCSS, otherwise return corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]If the new page is created successfully, the new page will be used as the last page of the document. All other attendees will receive the notification of the new page.
 *            <br>[cn]����½��ɹ����½���ҳ�潫����Ϊ���ĵ������һҳ��������������߶����յ��½�ҳ��֪ͨ
 * @see COMPT_MSG_WB_ON_DOC_NEW
 * @see COMPT_MSG_WB_ON_DRAW_DATA_NOTIFY
 * @see COMPT_MSG_WB_ON_CURRENT_PAGE_IND
 * @see tup_conf_ds_new_doc
 **/
TUP_API TUP_RESULT  tup_conf_ds_new_page(IN CONF_HANDLE handle, IN COMPONENT_IID ciid, IN TUP_UINT32 docid, IN TUP_INT32 width, IN TUP_INT32 height, OUT TUP_UINT32* ret_pageid);    


/**
 * @ingroup DocShare
 * @brief [en]This interface is used to open sharing document.
 *        <br>[cn]�򿪹����ĵ�
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle.
 *                                                <br>[cn]������
 * @param [in] COMPONENT_IID ciid         <b>:</b><br>[en]Indicates component id, IID_COMPONENT_DB represent sharing document.
 *                                                <br>[cn]���ID��IID_COMPONENT_DS��ʾ�����ĵ�
 * @param [in] const TUP_CHAR* filename   <b>:</b><br>[en]Indicates the full path of the shared document to be opened(utf-8),can not be null.
 *                                                <br>[cn]Ҫ�򿪵Ĺ����ĵ���ȫ·��(utf8�����ַ���)������ΪNULL
 * @param [in] TUP_UINT32 option          <b>:</b><br>[en]Indicates open document option,DS_OPTION_QUALITY quality first,EMF first,DS_OPTION_SIZE bandwidth first,and JPG first.
 *                                                <br>[cn]���ĵ�ѡ�ȡֵ��DS_OPTION_QUALITY �������ȣ����Ȳ���EMF��ʽ, DS_OPTION_SIZE �������ȣ����Ȳ���JPG��ʽ
 * @param [out] TUP_UINT32* ret_docid     <b>:</b><br>[en]Indicates shared document id.
 *                                                <br>[cn]�����ĵ���ID 
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCSS, otherwise return corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]After the document is successfully loaded, it will be uploaded to the server, and all other attendees will receive the contents of the document.
 *            <br>[cn]�ĵ��ɹ����غ󽫱��ϴ�����������������������߽�����յ����ĵ�������
 * @see COMPT_MSG_DS_ON_DOCLOAD_START
 * @see COMPT_MSG_DS_ON_DOC_NEW
 * @see COMPT_MSG_DS_ON_PAGE_NEW
 * @see COMPT_MSG_DS_ON_PAGE_LOADED
 * @see COMPT_MSG_DS_ON_DOCLOAD_FINISH
 * @see COMPT_MSG_DS_ON_CURRENT_PAGE_IND(��˺����޹�)
 * @see COMPT_MSG_DS_ON_DRAW_DATA_NOTIFY(��˺����޹�)
 * @see tup_conf_ds_close
 **/
TUP_API TUP_RESULT  tup_conf_ds_open(IN CONF_HANDLE handle, IN COMPONENT_IID ciid, IN const TUP_CHAR* filename, IN TUP_UINT32 option, OUT TUP_UINT32* ret_docid);


/**
 * @ingroup DocShare
 * @brief [en]This interface is used to close a document.
 *        <br>[cn]�ر�һ���ĵ�
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle.
 *                                                <br>[cn]������
 * @param [in] COMPONENT_IID ciid         <b>:</b><br>[en]Indicates component id, IID_COMPONENT_DB represent sharing document.
 *                                                <br>[cn]���ID��IID_COMPONENT_DS��ʾ�����ĵ�
 * @param [in] TUP_UINT32 docid           <b>:</b><br>[en]Indicates shared document id.
 *                                                <br>[cn]�����ĵ���ID
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCSS�� otherwise return corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]All other attendees will receive close information.
 *            <br>[cn]������������߶����յ��ر���Ϣ
 * @see COMPT_MSG_DS_ON_DOC_DEL
 * @see COMPT_MSG_DS_ON_PAGE_DEL
 * @see COMPT_MSG_DS_ON_CURRENT_PAGE_IND(��˺����޹�)
 * @see COMPT_MSG_DS_ON_DRAW_DATA_NOTIFY(��˺����޹�)
 * @see tup_conf_ds_open
 **/
TUP_API TUP_RESULT  tup_conf_ds_close(IN CONF_HANDLE handle, IN COMPONENT_IID ciid, IN TUP_UINT32 docid);


/**
 * @ingroup DocShare
 * @brief [en]This interface is used to set the current page.
 *        <br>[cn]���õ�ǰ��ʾ��ҳ��
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle, when it's 0, use to preview document.
 *                                                <br>[cn]������, Ϊ0ʱ�������ĵ�Ԥ��
 * @param [in] COMPONENT_IID ciid         <b>:</b><br>[en]Indicates component id, IID_COMPONENT_DB represent sharing document.
 *                                                <br>[cn]���ID��IID_COMPONENT_DS��ʾ�����ĵ�
 * @param [in] TUP_UINT32 docid           <b>:</b><br>[en]Indicates document id.
 *                                                <br>[cn]�ĵ���ID
 * @param [in] TUP_UINT32 pageid          <b>:</b><br>[en]Indicates page id.
 *                                                <br>[cn]ҳ��ID
 * @param [in] TUP_BOOL sync              <b>:</b><br>[en]Indicates whether synchronization settings.
 *                                                <br>[cn]�Ƿ�ͬ������, ȡֵ: true ͬ��, false ��ͬ��
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCSS�� otherwise return corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]When the interface is called, the currently displayed page is switched to the specified document page. If the specified document ID is valid and the page ID is 0, it is switched to the page that the document was last displayed..
 *            <br>[cn]���øýӿں󣬵�ǰ��ʾ��ҳ�潫���л���ָ�����ĵ�ҳ�����ָ�����ĵ�IDΪ��Чֵ��ҳ��IDΪ0�����л������ĵ��ϴ���ʾ��ҳ�档
 *            [en]There are two kinds of synchronization and non synchronization of the function. When the synchronization is set, all the other participants will receive the message and perform the corresponding operation..
 *            <br>[cn]�ú�����ͬ�����úͷ�ͬ�����֣�ͬ������ʱ��������������߶����յ��л���Ϣ��ִ����Ӧ��������ͬ��ʱ��ֻ�б��ط����仯��
 * @see COMPT_MSG_DS_ON_CURRENT_PAGE_IND
 * @see COMPT_MSG_DS_ON_CURRENT_PAGE
 * @see COMPT_MSG_DS_ON_DRAW_DATA_NOTIFY
 * @see COMPT_MSG_WB_ON_CURRENT_PAGE_IND
 * @see COMPT_MSG_WB_ON_CURRENT_PAGE
 * @see COMPT_MSG_WB_ON_DRAW_DATA_NOTIFY
 **/
TUP_API TUP_RESULT  tup_conf_ds_set_current_page(IN CONF_HANDLE handle, IN COMPONENT_IID ciid, IN TUP_UINT32 docid, IN TUP_UINT32 pageid, IN TUP_BOOL sync);    


/**
 * @ingroup DocShare
 * @brief [en]This interface is used to set the size of the display area.
 *        <br>[cn]������ʾ����Ĵ�С
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle, when it's 0, use to preview document.
 *                                                <br>[cn]������, Ϊ0ʱ�������ĵ�Ԥ��
 * @param [in] COMPONENT_IID ciid         <b>:</b><br>[en]Indicates component id, IID_COMPONENT_DB represent sharing document.
 *                                                <br>[cn]���ID��IID_COMPONENT_DS��ʾ�����ĵ�
 * @param [in] TC_SIZE size               <b>:</b><br>[en]Indicates display area width and height.
 *                                                <br>[cn]��ʾ����Ŀ�ߣ���TWIPSΪ��λ
 * @param [in] TUP_BOOL redraw            <b>:</b><br>[en]Indicates whether to redraw right now.
 *                                                <br>[cn]�Ƿ������ػ棬ȡֵ: true �ػ�, false ���ػ�
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCSS�� otherwise return corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]This function needs to be called before the operation of any display interface, otherwise nothing will be displayed. It is recommended to call this function after receiving the message prepared by the document sharing component, or call it when the display size changes..
 *            <br>[cn]�ú�����Ҫ���κ���ʾ����Ĳ���֮ǰ�����ã����򽫲�����ʾ�κ����ݣ��������յ��ĵ��������׼���õ���Ϣ����øú�����
 *            <br>[cn]��������ʾ��С�����仯ʱ���á�    
 * @see COMPT_MSG_DS_ON_DRAW_DATA_NOTIFY
 **/
TUP_API TUP_RESULT  tup_conf_ds_set_canvas_size(IN CONF_HANDLE handle, IN COMPONENT_IID ciid, IN TC_SIZE size, IN TUP_BOOL redraw);


/**
 * @ingroup DocShare
 * @brief [en]This interface is used to get the rendered current page image.
 *        <br>[cn]��ȡ��Ⱦ�õĵ�ǰҳ��ͼ��
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle, when it's 0, use to preview document.
 *                                                <br>[cn]������, Ϊ0ʱ�������ĵ�Ԥ��
 * @param [in] COMPONENT_IID ciid         <b>:</b><br>[en]Indicates component id, IID_COMPONENT_DB represent sharing document.
 *                                                <br>[cn]���ID��IID_COMPONENT_DS��ʾ�����ĵ�
 * @param [out] TUP_UINT32* ret_width     <b>:</b><br>[en]Indicates image width(TWIPS).
 *                                                <br>[cn]ͼ��Ŀ�ȣ���TWIPSΪ��λ
 * @param [out] TUP_UINT32* ret_height    <b>:</b><br>[en]Indicates image height(TWIPS).
 *                                                <br>[cn]ͼ��ĸ߶ȣ���TWIPSΪ��λ
 * @retval TUP_VOID*  <b>:</b><br>[en]The pointer to the image data is successfully acquired, and the empty pointer is returned.
 *                            <br>[cn]�ɹ���ȡ����ͼ������ָ�룬ʧ�ܷ��ؿ�
 * 
 * @attention [en]Image format windows platform for HDC, iOS platform for the BMP.
 *            <br>[cn]����ֵΪ��ͼ�������ָ�룬ͼ���ʽwindowsƽ̨ΪHDC��iOSƽ̨ΪBMP
 * @see NA
 **/
TUP_API TUP_VOID* tup_conf_ds_get_surfacebmp(IN CONF_HANDLE handle, IN COMPONENT_IID ciid, OUT TUP_UINT32* ret_width, OUT TUP_UINT32* ret_height);


/**
 * @ingroup DocShare
 * @brief [en]This interface is used to get the current information on server.
 *        <br>[cn]��ȡ�������ϵĵ�ǰ��Ϣ
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle.
 *                                                <br>[cn]������
 * @param [in] COMPONENT_IID ciid         <b>:</b><br>[en]Indicates component id, IID_COMPONENT_DB represent sharing document.
 *                                                <br>[cn]���ID��IID_COMPONENT_DS��ʾ�����ĵ�
 * @param [out] DsSyncInfo* info          <b>:</b><br>[en]Indicates document synchronization information.
 *                                                <br>[cn]�ĵ�ͬ����Ϣ
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCSS��otherwise return corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]It is generally used to synchronize attendees to the presenter.
 *            <br>[cn]һ�������������������ͬ��
 * @see NA
 **/
TUP_API TUP_RESULT  tup_conf_ds_get_syncinfo(IN CONF_HANDLE handle, IN COMPONENT_IID ciid, OUT DsSyncInfo* info);


/**
 * @ingroup AudioCtrl
 * @brief [en]This interface is used to set the audio parameters.
 *        <br>[cn]����������ز���
 * 
 * @param [in] CONF_HANDLE handle           <b>:</b><br>[en]Indicates conference handle.
 *                                                  <br>[cn]������
 * @param [in] TC_AUDIO_PARAM* audio_param  <b>:</b><br>[en]Indicates audio parameters.
 *                                                  <br>[cn]��Ƶ����
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCSS�� otherwise return corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]NA.
 *            <br>[cn]NA          
 * @see COMPT_MSG_AUDIO_ON_AUDIO_DEVICE_STATUS_CHANGE
 **/
TUP_API TUP_RESULT  tup_conf_audio_setparam(IN CONF_HANDLE handle, IN TC_AUDIO_PARAM* audio_param);


/**
 * @ingroup AudioCtrl
 * @brief [en]This interface is used to open audio device.
 *        <br>[cn]����Ƶ�豸
 * 
 * @param [in] CONF_HANDLE handle           <b>:</b><br>[en]Indicates conference handle, when it's 0, use to audio guide.
 *                                                  <br>[cn]��������Ϊ0ʱ��������Ƶ��
 * @param [in] TUP_BOOL bmic                <b>:</b><br>[en]Indicates whether it is a microphone, true means microphone, false means speaker.
 *                                                  <br>[cn]�Ƿ�����˷磬ȡֵ: true ��˷�, false ������
 * @param [in] TUP_UINT32 deviceid          <b>:</b><br>[en]Indicates device id, in mobile device, device id will be ignored.
 *                                                  <br>[cn]�豸ID�����ƶ��豸�ϣ�deviceidֵ������
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCSS, otherwise return corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see COMPT_MSG_AUDIO_ON_AUDIO_DEVICE_STATUS_CHANGE
 * @see COMPT_MSG_AUDIO_ON_AUDIO_OPEN_MIC
 * @see tup_conf_audio_close
 **/
TUP_API TUP_RESULT  tup_conf_audio_open(IN CONF_HANDLE handle,TUP_BOOL bmic, IN TUP_UINT32 deviceid);


/**
 * @ingroup AudioCtrl
 * @brief [en]This interface is used to close audio device.
 *        <br>[cn]�ر���Ƶ�豸
 * 
 * @param [in] CONF_HANDLE handle           <b>:</b><br>[en]Indicates conference handle, when it's 0, use to audio guide.
 *                                                  <br>[cn]��������Ϊ0ʱ��������Ƶ��
 * @param [in] TUP_BOOL bmic                <b>:</b><br>[en]Indicates whether it is a microphone, true means microphone, false means speaker.
 *                                                  <br>[cn]�Ƿ�����˷磬ȡֵ: true ��˷�, false ������
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCSS�� otherwise return corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see COMPT_MSG_AUDIO_ON_AUDIO_DEVICE_STATUS_CHANGE
 * @see tup_conf_audio_open
 **/
TUP_API TUP_RESULT  tup_conf_audio_close(IN CONF_HANDLE handle,TUP_BOOL bmic);


/**
 * @ingroup AudioCtrl
 * @brief [en]This interface is used to mute audio device.
 *        <br>[cn]������Ƶ�豸
 * 
 * @param [in] CONF_HANDLE handle           <b>:</b><br>[en]Indicates conference handle, when it's 0, use to audio guide.
 *                                                  <br>[cn]��������Ϊ0ʱ��������Ƶ��
 * @param [in] TUP_BOOL bmic                <b>:</b><br>[en]Indicates whether it is a microphone, true means microphone, false means speaker.
 *                                                  <br>[cn]�Ƿ�����˷磬ȡֵ: true ��˷�, false ������
 * @param [in] TUP_BOOL bMute               <b>:</b><br>[en]Indicates whether to mute.
 *                                                  <br>[cn]�Ƿ�Mute��ȡֵ: true ����, false ȡ������
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCSS�� otherwise return corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]NA.
 *            <br>[cn]NA          
 * @see COMPT_MSG_AUDIO_ON_AUDIO_DEVICE_STATUS_CHANGE
 **/
TUP_API TUP_RESULT  tup_conf_audio_mute(IN CONF_HANDLE handle,TUP_BOOL bmic, IN TUP_BOOL bMute);


/**
 * @ingroup AudioCtrl
 * @brief [en]This interface is used to get the volume of the audio input device.
 *        <br>[cn]��ȡ��Ƶ�����豸������
 * 
 * @param [in] CONF_HANDLE handle           <b>:</b><br>[en]Indicates conference handle, when it's 0, use to audio guide.
 *                                                  <br>[cn]��������Ϊ0ʱ��������Ƶ��
 * @param [in] TUP_BOOL bmic                <b>:</b><br>[en]Indicates whether it is a microphone, true means microphone, false means speaker.
 *                                                  <br>[cn]�Ƿ�����˷磬ȡֵ: true ��˷�, false ������
 * @param [in] TUP_BOOL bsystem             <b>:</b><br>[en]Indicates whether is a system device.
 *                                                  <br>[cn]�Ƿ���ϵͳ�豸��ȡֵ: true/false
 * @param [out] TUP_UINT32 *volume          <b>:</b><br>[en]Indicates volume, range from 0 to 100.
 *                                                  <br>[cn]������ȡֵ[0, 100]
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCSS�� otherwise return corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see NA
 **/
TUP_API TUP_RESULT  tup_conf_audio_get_volume(IN CONF_HANDLE handle,TUP_BOOL bmic,TUP_BOOL bsystem, OUT TUP_UINT32 *volume);


/**
 * @ingroup AudioCtrl
 * @brief [en]This interface is used to set the volume of the audio input device.
 *        <br>[cn]������Ƶ�����豸������
 * 
 * @param [in] CONF_HANDLE handle           <b>:</b><br>[en]Indicates conference handle, when it's 0, use to audio guide.
 *                                                  <br>[cn]��������Ϊ0ʱ��������Ƶ��
 * @param [in] TUP_BOOL bmic                <b>:</b><br>[en]Indicates whether it is a microphone, true means microphone, false means speaker.
 *                                                  <br>[cn]�Ƿ�����˷磬ȡֵ: true ��˷�, false ������
 * @param [in] TUP_BOOL bsystem             <b>:</b><br>[en]Indicates whether is a system device.
 *                                                  <br>[cn]�Ƿ���ϵͳ�豸��ȡֵ: true/false
 * @param [in] TUP_UINT32 volume            <b>:</b><br>[en]Indicates volume, range from 0 to 100.
 *                                                  <br>[cn]������ȡֵ[0, 100]
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCSS�� otherwise return corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see NA
 **/
TUP_API TUP_RESULT  tup_conf_audio_set_volume(IN CONF_HANDLE handle,TUP_BOOL bmic,TUP_BOOL bsystem, IN TUP_UINT32 volume);


/**
 * @ingroup AudioCtrl
 * @brief [en]This interface is used to get the type of audio.
 *        <br>[cn]��ȡ��Ƶ�豸����
 * 
 * @param [in] CONF_HANDLE handle                 <b>:</b><br>[en]Indicates conference handle, when it's 0, use to audio guide.
 *                                                        <br>[cn]��������Ϊ0ʱ��������Ƶ��
 * @param [in] TUP_BOOL binput                    <b>:</b><br>[en]Indicates whether is input device, true means input device, false means output device.
 *                                                        <br>[cn]�Ƿ��������豸��ȡֵ: true �����豸, false ����豸
 * @param [in] TC_AUDIO_DEVICE_INFO *device_info  <b>:</b><br>[en]Indicates device information list array.
 *                                                        <br>[cn]�豸��Ϣ�б�����
 * @param [out] TUP_UINT32 *ret_count             <b>:</b><br>[en]Indicates device list amount.
 *                                                        <br>[cn]��Ƶ�豸������
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCSS�� otherwise return corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see NA
 **/
TUP_API TUP_RESULT  tup_conf_audio_get_device(IN CONF_HANDLE handle,TUP_BOOL binput, TC_AUDIO_DEVICE_INFO *device_info, TUP_UINT32 *ret_count);


/**
 * @ingroup BasicConfCtrl
 * @brief [en]This interface is used to initialize ISV message
 *        <br>[cn]��ʼ��ISV��Ϣ
 * 
 * @param [in] TUP_BOOL bpaasmode         <b>:</b><br>[en]Indicates whether to enable public cloud mode.
 *                                                <br>[cn]�Ƿ����ù�����ģʽ, ȡֵ:true/false
 * @param [in] Isv_Param* isv_param       <b>:</b><br>[en]Indicates ISV param, include ISV account and ISV private key.
 *                                                <br>[cn]ISV����������ISV�ʺź�ISV˽Կ
 * @retval TUP_VOID
 * 
 * @attention [en]Include ISV account and ISV private key, thid interface is applied for public cloud, under the conditions of public cloud need to start .
 *            <br>[cn]����ISV�ʺź�ISV˽Կ���ýӿ����ṩ���������õģ��ڹ����������²���������
 * @see NA
 **/
TUP_API TUP_VOID  tup_conf_init_isv(IN TUP_BOOL bpaasmode, IN const Isv_Param* isv_param);

/**
 * @ingroup BasicConfCtrl
 * @brief [en]This interface is used to check certificate datatime
 *        <br>[cn]����֤�鵽��ʱ��
 * 
 * @param [in] TUP_CHAR certfile_path          <b>:</b><br>[en]Indicates certificate path.
 *                                                 <br>[cn]֤��·��
 * @param [out] TC_CERT_DATA_TIME* expire_time <b>:</b><br>[en]Indicates expire time.
 *                                                 <br>[cn]֤�鵽��ʱ��
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCSS�� otherwise return corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]NA
 *            <br>[cn]NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_conf_check_certificate_overdue(IN const char *certfile_path, OUT TC_CERT_DATA_TIME *expire_time);

/**
 * @ingroup BasicConfCtrl
 * @brief [en]This interface is used to verify certificate
 *        <br>[cn]У��֤���Ƿ���Ч
 * 
 * @param [in] TUP_CHAR certfile_path         <b>:</b><br>[en]Indicates certificate path.
 *                                                <br>[cn]֤��·��
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCSS�� otherwise return corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]NA
 *            <br>[cn]NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_conf_verify_certificate(IN const char *certfile_path);

#ifdef __cplusplus
#if __cplusplus
}
#endif
#endif /* __cplusplus */

#endif


