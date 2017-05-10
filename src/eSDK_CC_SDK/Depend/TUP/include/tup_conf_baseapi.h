/** 
 * @file tup_conf_baseapi.h
 * 
 * Copyright(C), 2012-2016, Huawei Tech. Co., Ltd. ALL RIGHTS RESERVED. \n
 * 
 * @brief [en]The header file of the TUP conference components basic service function interface. \n
 *        [cn]TUP 会议组件基础业务功能接口头文件。 \n
 * @note  [en] The characters involved in the interface set in UTF8 format. \n
 *        [cn] 接口中涉及字符串均采用UTF8格式
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
 *        <br>[cn]会议组件开放接口.
 **/

/**
 * @defgroup BasicConfCtrl
 * @ingroup OpenAPI
 * @brief [en]This module is about basic conference control interface.
 *        <br>[cn]基础会议控制接口
 **/

/**
 * @defgroup AppShare
 * @ingroup OpenAPI
 * @brief [en]This module is about desktop and application share.
 *        <br>[cn]桌面/应用程序共享
 **/

/**
 * @defgroup DocShare
 * @ingroup OpenAPI
 * @brief [en]This module is about desktop and white board share.
 *        <br>[cn]文档和白板共享
 **/

/**
 * @defgroup VideoCtrl
 * @ingroup OpenAPI
 * @brief [en]This module is about video control.
 *        <br>[cn]视频控制
 **/

/**
 * @defgroup AudioCtrl
 * @ingroup OpenAPI
 * @brief [en]This module is about audio control.
 *        <br>[cn]音频控制
 **/



/**
 * @ingroup BasicConfCtrl
 * @brief [en]This interface is used to initialize conference components, set thread model, system device type and operate system type.
 *        <br>[cn]初始化会议组件，设置线程模型、系统设备类型和操作系统类型
 * 
 * @param [in] TUP_BOOL selfthread            <b>:</b><br>[en]Indicates thread model. The options are as follows:
 *                                                    <br>true: conference component run in a independent thread, in this mode it not support media sharing module.
 *                                                    <br>fales: the thread which invoke this function is the running thread of conference component, callback also in this thread.
 *                                                    <br>[cn]线程模型, 取值:
 *                                                    <br>[cn]true：会议组件在独立线程运行，该模式下不支持媒体共享模块
 *                                                    <br>[cn]false：调用该函数的线程为会议组件的运行线程，消息回调也在该线程
 * @param [in] const Init_param * pinitparam  <b>:</b><br>[en]Indicates initialization parameters, including device type and operate system type.
 *                                                    <br>[cn]初始化参数，包括设备类型和操作系统类型
 * @retval TUP_VOID
 * 
 * @attention [en]The thread which invoke this function is message callback thread, suggest invoke in main thread.
 *            <br>[cn]调用该函数的线程为消息回调线程，建议在主线程调用
 * @see tup_conf_uninit
 **/
TUP_API TUP_VOID  tup_conf_init(IN TUP_BOOL selfthread, IN const Init_param * pinitparam);


/**
 * @ingroup BasicConfCtrl
 * @brief [en]This interface is used to uninit the meeting components, release all meetings and all resources before exit program .
 *        <br>[cn]去初始化会议组件，退出程序前释放所有会议及所有资源
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
 *        <br>[cn]新建一个会议对象
 * 
 * @param [in] conference_multi_callback callback   <b>:</b><br>[en]Indicates conference callback handler function address.
 *                                                          <br>[cn]会议回调处理函数地址
 * @param [in] const TC_CONF_INFO* confinfo         <b>:</b><br>[en]Indicates conference parameter information.
 *                                                          <br>[cn]会议参数信息
 * @param [in] TUP_UINT32 option                    <b>:</b><br>[en]Indicates conference option, value refer to CONF_OPTION, when use base function set CONF_OPTION_USERLIST.
 *                                                          <br>[cn]会议选项，取值:CONF_OPTION，使用基本功能时设置为CONF_OPTION_USERLIST
 * @param [out] CONF_HANDLE* handle                 <b>:</b><br>[en]Returns conference handle pointer.
 *                                                          <br>[cn]返回会议句柄的指针
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCSS, otherwise return corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]Return a conference unique sign. This interface is only suit for single conference scene, please use tup_conf_new interface
 *            <br>window system: this function must be invoked in main thread which has message loop, otherwise unable to drive component message processing.
 *            <br>[cn]返回一个会议的唯一标识。该接口只适用单会议场景，对会议请用tup_conf_new接口。
 *            <br>[cn]Window系统：该函数必须在有消息循环主线程中调用，否则无法驱动组件消息处理。
 * @see tup_conf_release
 **/
TUP_API TUP_RESULT  tup_conf_new(IN conference_multi_callback callback, IN const TC_CONF_INFO* confinfo, 
                                     IN TUP_UINT32 option, OUT CONF_HANDLE* handle);

/**
 * @ingroup BasicConfCtrl
 * @brief [en]This interface is used to join conference.
 *        <br>[cn]加入会议
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle.
 *                                                <br>[cn]会议句柄
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCSS，otherwise return corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
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
 *        <br>[cn]离开会议
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle.
 *                                                <br>[cn]会议句柄
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCSS，otherwise return corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
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
 *        <br>[cn]结束会议
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle.
 *                                                <br>[cn]会议句柄
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCSS， otherwise return corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]Notify conference server to release conference resource, all attendees will receive conference end notification, after conference end when join it again will be prompted "conference already end". Only conference chairman can invoke.
 *            <br>[cn]即通知会议服务器释放会议资源，所有与会者会收到会议结束的通知消息，会议结束后再次入会会提示入会用户"会议已经结束"。 
 *            <br>[cn]会议主席才可调用。           
 * @see CONF_MSG_ON_CONFERENCE_TERMINATE
 **/
TUP_API TUP_RESULT  tup_conf_terminate(IN CONF_HANDLE handle);


/**
 * @ingroup BasicConfCtrl
 * @brief [en]This interface is used to destroy a conference object.
 *        <br>[cn]销毁一个会议对象
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle.
 *                                                <br>[cn]会议句柄
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCSS otherwise return corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]This method must be in the same thread as tup_conf_new, this function is suggested invoke when the program exits, such as invoking at the last moment the main thread exits.
 *            <br>Can not invokr the tup_conf_leave interface immediately after the invoke to the interface, or some messages can not be sent, failed to leave the meeting.
 *            <br>Cannot invoke tup_conf_terminate interface invoke immediately after the interface, some messages won't be able to send, the meeting is not terminated by normal, or may cause components to collapse. Can receive news CONF_MSG_ON_CONFERENCE_TERMINATE recognition has been stopped in invoke to the interface 
 *            <br>[cn]该函数必须和tup_conf_new在同一个线程，
 *            <br>[cn]该函数建议在程序退出时调用，如在主线程退出的最后一刻调用。
 *            <br>[cn]不能调用tup_conf_leave接口之后立刻调用该接口，否则一些消息无法发送，未能正常离开会议
 *            <br>[cn]不能调用tup_conf_terminate接口之后立刻调用该接口，否则一些消息无法发送，会议未被正常终止，或者可能会造成组件崩溃。可在收到终止确认消息CONF_MSG_ON_CONFERENCE_TERMINATE后调用该接口
 * @see tup_conf_new
 **/
TUP_API TUP_RESULT  tup_conf_release(IN CONF_HANDLE handle);


/**
 * @ingroup BasicConfCtrl
 * @brief [en]This interface is used to loads the specified component .
 *        <br>[cn]加载指定组件
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle.
 *                                                <br>[cn]会议句柄
 * @param [in] TUP_UINT32 compts          <b>:</b><br>[en]Indicates component id, value refer to COMPONENT_IID, multiple components can be loaded or operation
 *                                                <br>[cn]组件ID, 取值:COMPONENT_IID, 加载多个组件时可或运算
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCSS，otherwise return corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
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
 *        <br>[cn]注册指定组件的回调函数
 * 
 * @param [in] CONF_HANDLE handle                   <b>:</b><br>[en]Indicates conference handle.
 *                                                          <br>[cn]会议句柄
 * @param [in] TUP_UINT32 compts                    <b>:</b><br>[en]Indicates component ID, value refer to COMPONENT_IID.
 *                                                          <br>[cn]组件ID, 取值:COMPONENT_IID
 * @param [in] component_multi_callback callback    <b>:</b><br>[en]Indicates callback method.
 *                                                          <br>[cn]回调函数
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCSS，otherwise return corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see tup_conf_load_component
 **/
TUP_API TUP_RESULT  tup_conf_reg_component_callback(IN CONF_HANDLE handle, IN TUP_UINT32 compt, IN component_multi_callback callback);


/**
 * @ingroup BasicConfCtrl
 * @brief [en]This interface is used to kick out a user.
 *        <br>[cn]踢除一个用户
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle.
 *                                                <br>[cn]会议句柄
 * @param [in] TUP_UINT32 userid          <b>:</b><br>[en]Indicates user id.
 *                                                <br>[cn]用户ID
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCSS，otherwise return corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]Invoker must be host.
 *            <br>[cn]调用者必须是主持人
 * @see CONF_MSG_ON_CONFERENCE_LEAVE
 * @see CONF_MSG_USER_ON_LEAVE_IND
 **/
TUP_API TUP_RESULT  tup_conf_user_kickout(IN CONF_HANDLE handle, IN TUP_UINT32 userid);


/**
 * @ingroup AppShare
 * @brief [en]This interface is used to set the screen share owner.
 *        <br>[cn]设置屏幕共享的拥有者
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle.
 *                                                <br>[cn]会议句柄
 * @param [in] TUP_UINT32 userid          <b>:</b><br>[en]Indicates user id.
 *                                                <br>[cn]用户ID
 * @param [in] TUP_UINT32 action          <b>:</b><br>[en]Indicates set action, release:AS_ACTION_DELETE; owner:AS_ACTION_ADD.
 *                                                <br>[cn]设置动作, 释放:AS_ACTION_DELETE;拥有:AS_ACTION_ADD
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCSS， otherwise return corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]After successful invoke this interface, the original have Shared permissions the user share permissions will be automatically cancelled, ongoing sharing will stop .
 *            <br>[cn]成功调用该接口后，原来拥有共享权限的用户的共享权限会自动取消，正在进行的共享会停止
 * @seeCOMPT_MSG_AS_ON_SHARING_SESSION
 * @see tup_conf_uninit
 **/
TUP_API TUP_RESULT  tup_conf_as_set_owner(IN CONF_HANDLE handle, IN TUP_UINT32 userid, IN TUP_UINT32 action);                


/**
 * @ingroup AppShare
 * @brief [en]This interface is used to set the current sharing type.
 *        <br>[cn]设置当前的共享类型
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle.
 *                                                <br>[cn]会议句柄
 * @param [in] TUP_UINT32 sharingtype     <b>:</b><br>[en]Indicates sharing type, desktop sharing:AS_SHARINGTYPE_DESKTOP; application sharing:AS_SHARINGTYPE_APP.
 *                                                <br>[cn]共享类型, 桌面共享:AS_SHARINGTYPE_DESKTOP;应用程序共享:AS_SHARINGTYPE_APP
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCSS，otherwise return corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]The interface can only be invoking by a shared end, and when the shared type changes, the current ongoing share will stop.
 *            <br>[cn]该接口只可以由共享端调用，当共享的类型发送变化时，当前正在进行的共享会停止。
 * @see NA
 **/
TUP_API TUP_RESULT  tup_conf_as_set_sharetype(IN CONF_HANDLE handle, IN TUP_INT32 sharingtype);


/**
 * @ingroup AppShare
 * @brief [en]This interface is used to starts desktop sharing or application sharing.
 *        <br>[cn]开始桌面共享或应用程序共享
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle.
 *                                                <br>[cn]会议句柄
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCSS， otherwise return corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
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
 *        <br>[cn]停止桌面共享或应用程序共享
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle.
 *                                                <br>[cn]会议句柄
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCSS， otherwise return corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
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
 *        <br>[cn]获取屏幕数据
 * 
 * @param [in] CONF_HANDLE handle                   <b>:</b><br>[en]Indicates conference handle.
 *                                                          <br>[cn]会议句柄
 * @param [out] TC_AS_SCREENDATA* pscreendata       <b>:</b><br>[en]Indicates screen data.
 *                                                          <br>[cn]屏幕数据
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCSS, otherwise return corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]Invoke when receive COMPT_MSG_AS_ON_SCREEN_DATA message.
 *            <br>[cn]在收到COMPT_MSG_AS_ON_SCREEN_DATA消息时调用
 * @see NA
 **/
TUP_API TUP_RESULT  tup_conf_as_get_screendata(IN CONF_HANDLE handle, OUT TC_AS_SCREENDATA* pscreendata); 


/**
 * @ingroup VideoCtrl
 * @brief [en]This interface is used to get device information list.
 *        <br>[cn]获取设备信息列表
 * 
 * @param [in] CONF_HANDLE handle                  <b>:</b><br>[en]Indicates conference handle, when it's 0, use to video guide.
 *                                                         <br>[cn]会议句柄，为0时，用于视频向导
 * @param [out] TC_DEVICE_INFO* device_info        <b>:</b><br>[en]Indicates pointer which point video devices list array.
 *                                                         <br>[cn]指向视频设备列表数组的指针
 * @param [out] TUP_UINT32* ret_count              <b>:</b><br>[en]Indicates when device_info is null,returns the number of video devices.
 *                                                         <br>[cn]当device_info为空时，返回视频设备数量
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCSS otherwise return corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]This interface should be divided into two invoke, the first invoke to get the number of devices, the second invoke to obtain specific equipment information.
 *            <br>This interface application scene: after the success of the video module loading, access to their own device information; or open the wizard window, access to their device information.
 *            <br>[cn]此接口要分两次调用，第一次调用获取设备数量，第二次调用获取具体设备信息
 *            <br>[cn]此接口应用场景：视频模块加载成功后，获取自己的设备信息；或开启向导窗口后，获取自己的设备信息。
 * @see NA
 **/
TUP_API TUP_RESULT  tup_conf_video_get_deviceinfo(IN CONF_HANDLE handle, OUT TC_DEVICE_INFO* device_info, OUT TUP_UINT32* ret_count);


/**
 * @ingroup VideoCtrl
 * @brief [en]This interface is used to gets the capability set information list for the specified device.
 *        <br>[cn]获取指定设备的能力集信息列表
 * 
 * @param [in] CONF_HANDLE handle                  <b>:</b><br>[en]Indicates conference handle.
 *                                                         <br>[cn]会议句柄
 * @param [in] TUP_UINT32 deviceid                 <b>:</b><br>[en]Indicates video device ID.
 *                                                         <br>[cn]视频设备ID
 * @param [out] TC_VIDEO_PARAM* capbility_info     <b>:</b><br>[en]Indicates video device capability information.
 *                                                         <br>[cn]视频设备能力信息
 * @param [out] TUP_UINT32* ret_count              <b>:</b><br>[en]Indicates when pdevice_info is null,returns the number of video devices.
 *                                                         <br>[cn]当pdevice_info为空时，返回视频设备数量
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCSS otherwise return corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]This interface get the oneself device capability info list. When the handle is 0, said to be able to obtain membership number of equipment, can be used to guide function.
 *            <br>This interface application scene: after the success of the video module loading, access to their own equipment has the ability of information; or open the wizard window, access to their own equipment has the ability to information
 *            <br>[cn]此接口获得的是自己的某一设备的能力信息列表。当handle为0时，表示不入会就可以获取设备数量，可用于向导功能，
 *            <br>[cn]此接口应用场景：视频模块加载成功后，获取自己的某个设备拥有的能力信息；或开启向导窗口后，获取自己的某个设备拥有的能力信息。
 * @see NA
 **/
TUP_API TUP_RESULT  tup_conf_video_get_devicecapbilityinfo(IN CONF_HANDLE handle, IN TUP_UINT32 deviceid, OUT TC_VIDEO_PARAM* capbility_info, OUT TUP_UINT32* ret_count);    


/**
 * @ingroup VideoCtrl
 * @brief [en]This interface is used to turn on your own camera
 *        <br>[cn]打开自己的摄像头
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle.
 *                                                <br>[cn]会议句柄
 * @param [in] TUP_UINT32 deviceid        <b>:</b><br>[en]Indicates video device ID.
 *                                                <br>[cn]视频设备ID
 * @param [in] TUP_BOOL preview           <b>:</b><br>[en]Whether need to preview ,do not preview will not call back the COMPT_MSG_VIDEO_ON_SWITCH message.
 *                                                <br>[cn]是否需要预览，不预览则不会回调COMPT_MSG_VIDEO_ON_SWITCH消息
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCSS， otherwise return corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]This operation will start your own camera.
 *            <br>[cn]该操作会启用自己的摄像头
 * @see COMPT_MSG_VIDEO_ON_SWITCH
 * @see tup_conf_video_close
 **/
TUP_API TUP_RESULT  tup_conf_video_open(IN CONF_HANDLE handle, IN TUP_UINT32 deviceid, IN TUP_BOOL preview );      


/**
 * @ingroup VideoCtrl
 * @brief [en]This interface is used to close your own camera.
 *        <br>[cn]关闭自己的摄像头
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle.
 *                                                <br>[cn]会议句柄
 * @param [in] TUP_UINT32 deviceid        <b>:</b><br>[en]Indicates video device ID.
 *                                                <br>[cn]视频设备ID
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCSS， otherwise return corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
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
 *        <br>[cn]设置视频的相关参数
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle.
 *                                                <br>[cn]会议句柄
 * @param [in] TUP_UINT32 deviceid        <b>:</b><br>[en]Indicates video device ID.
 *                                                <br>[cn]视频设备ID
 * @param [in] TC_VIDEO_PARAM* pvparam    <b>:</b><br>[en]Indicates video device capability parameter message.
 *                                                <br>[cn]视频设备能力参数信息
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCSS，otherwise return corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]Sets parameters before opening the video,if not set then use the default value to set.
 *            <br>[cn]打开视频之前需要设置，如不设置那么就采用缺省值进行设置
 * @see tup_conf_video_close
 **/
TUP_API TUP_RESULT  tup_conf_video_setparam(IN CONF_HANDLE handle, IN TUP_UINT32 deviceid, IN TC_VIDEO_PARAM* pvparam);


/**
 * @ingroup VideoCtrl
 * @brief [en]This interface is used to attach appointed user's video and window.
 *        <br>[cn]指定用户的视频与窗口进行绑定
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle.
 *                                                <br>[cn]会议句柄
 * @param [in] TUP_UINT32 userid          <b>:</b><br>[en]Indicates user id.
 *                                                <br>[cn]用户ID
 * @param [in] TUP_UINT32 deviceid        <b>:</b><br>[en]Indicates video device id.
 *                                                <br>[cn]视频设备ID
 * @param [in] TUP_VOID* pwnd             <b>:</b><br>[en]Indicates window handle.
 *                                                <br>[cn]窗口句柄
 * @param [in] TUP_BOOL highchannel       <b>:</b><br>[en]Indicates whether to join the high channel default is high.
 *                                                <br>[cn]是否加入高流，取值:TRUE/FALSE, 默认高流
 * @param [in] TUP_UINT8 showmode         <b>:</b><br>[en]Indicates video show mode in window, 0: full window; 1: Show according to the ratio of the video, the rest in the black filled; 2: That cut by the size of the window
 *                                                <br>[cn]视频在窗口显示模式，取值:0 表示布满窗口, 1 表示按视频的比例进行显示，其余部分以黑色填充, 2 表示按窗口大小进行裁剪
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCSS，otherwise return corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]Binding oneself is preview, binding others joined the video channel from others to the current user can watch the video of others .
 *            <br>[cn]绑定自己则是预览，绑定别人则当前用户加入别人的视频通道从而可以观看别人的视频。
 * @see tup_conf_video_detach
 **/
TUP_API TUP_RESULT  tup_conf_video_attach(IN CONF_HANDLE handle, IN TUP_UINT32 userid, IN TUP_UINT32 deviceid, IN TUP_VOID* pwnd, IN TUP_BOOL highchannel , IN TUP_UINT8 showmode );


/**
 * @ingroup VideoCtrl
 * @brief [en]This interface is used to detach appointed user's video and window.
 *        <br>[cn]指定用户视频与窗口进行解绑
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle.
 *                                                <br>[cn]会议句柄
 * @param [in] TUP_UINT32 userid          <b>:</b><br>[en]Indicates user id.
 *                                                <br>[cn]用户ID
 * @param [in] TUP_UINT32 deviceid        <b>:</b><br>[en]Indicates video device id.
 *                                                <br>[cn]视频设备ID
 * @param [in] TUP_VOID* pwnd             <b>:</b><br>[en]Indicates window handle.
 *                                                <br>[cn]窗口句柄
 * @param [in] TUP_BOOL bleavechannel     <b>:</b><br>[en]Indicates whether to leave the channel when unbind the window.
 *                                                <br>[cn]解绑窗口时是否离开通道，取值:TRUE/FALSE, 默认不离开，离开则不接收数据
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCSS, otherwise return corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see tup_conf_video_attach
 **/
TUP_API TUP_RESULT  tup_conf_video_detach(IN CONF_HANDLE handle, IN TUP_UINT32 userid, IN TUP_UINT32 deviceid, IN TUP_VOID* pwnd, IN TUP_BOOL bleavechannel);


/**
 * @ingroup VideoCtrl
 * @brief [en]This interface is used to attach multi-video.
 *        <br>[cn]批量指定用户的视频与窗口进行绑定
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle.
 *                                                <br>[cn]会议句柄
 * @param [in] TC_MEDIA_USER_IND puserList     <b>:</b><br>[en]Indicates the pointer of video information.
 *                                                <br>[cn]视频窗口与ID对照信息
 * @param [in] TUP_UINT32 dwcount        <b>:</b><br>[en]Indicates the count of video.
 *                                                <br>[cn]视频数量
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCSS，otherwise return corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]Binding oneself is preview, binding others joined the video channel from others to the current user can watch the video of others .
 *            <br>[cn]绑定自己则是预览，绑定别人则当前用户加入别人的视频通道从而可以观看别人的视频。
 * @see tup_conf_video_detach_all_substream
 **/
TUP_API TUP_RESULT  tup_conf_video_attach_batch(CONF_HANDLE handle, TC_MEDIA_USER_IND* puserList, TUP_UINT32 dwcount);


/**
 * @ingroup VideoCtrl
 * @brief [en]This interface is used to detach all user's sub video.
 *        <br>[cn]解绑用户所有子流
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle.
 *                                                <br>[cn]会议句柄
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCSS, otherwise return corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see tup_conf_video_attach_batch
 **/
TUP_API TUP_RESULT  tup_conf_video_detach_all_substream(CONF_HANDLE handle);


/**
 * @ingroup DocShare
 * @brief [en]This interface is used to create a new whiteboard document
 *        <br>[cn]新建一个空的白板文档
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle.
 *                                                <br>[cn]会议句柄
 * @param [in] COMPONENT_IID ciid         <b>:</b><br>[en]Indicates component id, IID_COMPONENT_WB represent whiteboard.
 *                                                <br>[cn]组件ID，IID_COMPONENT_WB表示白板
 * @param [in] TUP_UINT32* ret_docid      <b>:</b><br>[en]Indicates document id.
 *                                                <br>[cn]白板文档ID
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCSS， otherwise return corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]Other attendees will receive create new whiteboard notification.
 *            <br>[cn]其他所有与会者都会收到新建白板的通知
 * @see COMPT_MSG_WB_ON_DOC_NEW
 * @see tup_conf_ds_new_page
 **/
TUP_API TUP_RESULT  tup_conf_ds_new_doc(IN CONF_HANDLE handle, IN COMPONENT_IID ciid, OUT TUP_UINT32* ret_docid);


/**
 * @ingroup DocShare
 * @brief [en]This interface is used to create a new whiteboard page in a appointed whiteboard document.
 *        <br>[cn]在指定的白板文档中新建白板页
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle.
 *                                                <br>[cn]会议句柄
 * @param [in] COMPONENT_IID ciid         <b>:</b><br>[en]Indicates component id, IID_COMPONENT_WB represent whiteboard.
 *                                                <br>[cn]组件ID，IID_COMPONENT_WB表示白板
 * @param [in] TUP_UINT32 docid           <b>:</b><br>[en]Indicates document id.
 *                                                <br>[cn]白板文档的ID
 * @param [in] TUP_INT32 width            <b>:</b><br>[en]Indicates page width(TWIPS).
 *                                                <br>[cn]要创建的页面的宽度，以TWIPS为单位
 * @param [in] TUP_INT32 height           <b>:</b><br>[en]Indicates page height(TWIPS).
 *                                                <br>[cn]要创建的页面的高度，以TWIPS为单位
 * @param [out] TUP_UINT32* ret_pageid    <b>:</b><br>[en]Indicates new page id.
 *                                                <br>[cn]新页面的ID
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCSS, otherwise return corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]If the new page is created successfully, the new page will be used as the last page of the document. All other attendees will receive the notification of the new page.
 *            <br>[cn]如果新建成功，新建的页面将被作为该文档的最后一页，其他所有与会者都会收到新建页的通知
 * @see COMPT_MSG_WB_ON_DOC_NEW
 * @see COMPT_MSG_WB_ON_DRAW_DATA_NOTIFY
 * @see COMPT_MSG_WB_ON_CURRENT_PAGE_IND
 * @see tup_conf_ds_new_doc
 **/
TUP_API TUP_RESULT  tup_conf_ds_new_page(IN CONF_HANDLE handle, IN COMPONENT_IID ciid, IN TUP_UINT32 docid, IN TUP_INT32 width, IN TUP_INT32 height, OUT TUP_UINT32* ret_pageid);    


/**
 * @ingroup DocShare
 * @brief [en]This interface is used to open sharing document.
 *        <br>[cn]打开共享文档
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle.
 *                                                <br>[cn]会议句柄
 * @param [in] COMPONENT_IID ciid         <b>:</b><br>[en]Indicates component id, IID_COMPONENT_DB represent sharing document.
 *                                                <br>[cn]组件ID，IID_COMPONENT_DS表示共享文档
 * @param [in] const TUP_CHAR* filename   <b>:</b><br>[en]Indicates the full path of the shared document to be opened(utf-8),can not be null.
 *                                                <br>[cn]要打开的共享文档的全路径(utf8编码字符串)，不能为NULL
 * @param [in] TUP_UINT32 option          <b>:</b><br>[en]Indicates open document option,DS_OPTION_QUALITY quality first,EMF first,DS_OPTION_SIZE bandwidth first,and JPG first.
 *                                                <br>[cn]打开文档选项，取值：DS_OPTION_QUALITY 质量优先，优先采用EMF格式, DS_OPTION_SIZE 带宽优先，优先采用JPG格式
 * @param [out] TUP_UINT32* ret_docid     <b>:</b><br>[en]Indicates shared document id.
 *                                                <br>[cn]共享文档的ID 
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCSS, otherwise return corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]After the document is successfully loaded, it will be uploaded to the server, and all other attendees will receive the contents of the document.
 *            <br>[cn]文档成功加载后将被上传到服务器，其他所有与会者将会接收到该文档的内容
 * @see COMPT_MSG_DS_ON_DOCLOAD_START
 * @see COMPT_MSG_DS_ON_DOC_NEW
 * @see COMPT_MSG_DS_ON_PAGE_NEW
 * @see COMPT_MSG_DS_ON_PAGE_LOADED
 * @see COMPT_MSG_DS_ON_DOCLOAD_FINISH
 * @see COMPT_MSG_DS_ON_CURRENT_PAGE_IND(与此函数无关)
 * @see COMPT_MSG_DS_ON_DRAW_DATA_NOTIFY(与此函数无关)
 * @see tup_conf_ds_close
 **/
TUP_API TUP_RESULT  tup_conf_ds_open(IN CONF_HANDLE handle, IN COMPONENT_IID ciid, IN const TUP_CHAR* filename, IN TUP_UINT32 option, OUT TUP_UINT32* ret_docid);


/**
 * @ingroup DocShare
 * @brief [en]This interface is used to close a document.
 *        <br>[cn]关闭一个文档
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle.
 *                                                <br>[cn]会议句柄
 * @param [in] COMPONENT_IID ciid         <b>:</b><br>[en]Indicates component id, IID_COMPONENT_DB represent sharing document.
 *                                                <br>[cn]组件ID，IID_COMPONENT_DS表示共享文档
 * @param [in] TUP_UINT32 docid           <b>:</b><br>[en]Indicates shared document id.
 *                                                <br>[cn]共享文档的ID
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCSS， otherwise return corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]All other attendees will receive close information.
 *            <br>[cn]其他所有与会者都会收到关闭消息
 * @see COMPT_MSG_DS_ON_DOC_DEL
 * @see COMPT_MSG_DS_ON_PAGE_DEL
 * @see COMPT_MSG_DS_ON_CURRENT_PAGE_IND(与此函数无关)
 * @see COMPT_MSG_DS_ON_DRAW_DATA_NOTIFY(与此函数无关)
 * @see tup_conf_ds_open
 **/
TUP_API TUP_RESULT  tup_conf_ds_close(IN CONF_HANDLE handle, IN COMPONENT_IID ciid, IN TUP_UINT32 docid);


/**
 * @ingroup DocShare
 * @brief [en]This interface is used to set the current page.
 *        <br>[cn]设置当前显示的页面
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle, when it's 0, use to preview document.
 *                                                <br>[cn]会议句柄, 为0时，用于文档预览
 * @param [in] COMPONENT_IID ciid         <b>:</b><br>[en]Indicates component id, IID_COMPONENT_DB represent sharing document.
 *                                                <br>[cn]组件ID，IID_COMPONENT_DS表示共享文档
 * @param [in] TUP_UINT32 docid           <b>:</b><br>[en]Indicates document id.
 *                                                <br>[cn]文档的ID
 * @param [in] TUP_UINT32 pageid          <b>:</b><br>[en]Indicates page id.
 *                                                <br>[cn]页面ID
 * @param [in] TUP_BOOL sync              <b>:</b><br>[en]Indicates whether synchronization settings.
 *                                                <br>[cn]是否同步设置, 取值: true 同步, false 非同步
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCSS， otherwise return corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]When the interface is called, the currently displayed page is switched to the specified document page. If the specified document ID is valid and the page ID is 0, it is switched to the page that the document was last displayed..
 *            <br>[cn]调用该接口后，当前显示的页面将被切换到指定的文档页，如果指定的文档ID为有效值而页面ID为0，则切换到该文档上次显示的页面。
 *            [en]There are two kinds of synchronization and non synchronization of the function. When the synchronization is set, all the other participants will receive the message and perform the corresponding operation..
 *            <br>[cn]该函数有同步设置和非同步两种，同步设置时，其他所有与会者都会收到切换消息并执行相应操作，非同步时，只有本地发生变化。
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
 *        <br>[cn]设置显示区域的大小
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle, when it's 0, use to preview document.
 *                                                <br>[cn]会议句柄, 为0时，用于文档预览
 * @param [in] COMPONENT_IID ciid         <b>:</b><br>[en]Indicates component id, IID_COMPONENT_DB represent sharing document.
 *                                                <br>[cn]组件ID，IID_COMPONENT_DS表示共享文档
 * @param [in] TC_SIZE size               <b>:</b><br>[en]Indicates display area width and height.
 *                                                <br>[cn]显示区域的宽高，以TWIPS为单位
 * @param [in] TUP_BOOL redraw            <b>:</b><br>[en]Indicates whether to redraw right now.
 *                                                <br>[cn]是否立刻重绘，取值: true 重绘, false 不重绘
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCSS， otherwise return corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]This function needs to be called before the operation of any display interface, otherwise nothing will be displayed. It is recommended to call this function after receiving the message prepared by the document sharing component, or call it when the display size changes..
 *            <br>[cn]该函数需要在任何显示界面的操作之前被调用，否则将不能显示任何内容，建议在收到文档共享组件准备好的消息后调用该函数，
 *            <br>[cn]或者在显示大小发生变化时调用。    
 * @see COMPT_MSG_DS_ON_DRAW_DATA_NOTIFY
 **/
TUP_API TUP_RESULT  tup_conf_ds_set_canvas_size(IN CONF_HANDLE handle, IN COMPONENT_IID ciid, IN TC_SIZE size, IN TUP_BOOL redraw);


/**
 * @ingroup DocShare
 * @brief [en]This interface is used to get the rendered current page image.
 *        <br>[cn]获取渲染好的当前页面图像
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle, when it's 0, use to preview document.
 *                                                <br>[cn]会议句柄, 为0时，用于文档预览
 * @param [in] COMPONENT_IID ciid         <b>:</b><br>[en]Indicates component id, IID_COMPONENT_DB represent sharing document.
 *                                                <br>[cn]组件ID，IID_COMPONENT_DS表示共享文档
 * @param [out] TUP_UINT32* ret_width     <b>:</b><br>[en]Indicates image width(TWIPS).
 *                                                <br>[cn]图像的宽度，以TWIPS为单位
 * @param [out] TUP_UINT32* ret_height    <b>:</b><br>[en]Indicates image height(TWIPS).
 *                                                <br>[cn]图像的高度，以TWIPS为单位
 * @retval TUP_VOID*  <b>:</b><br>[en]The pointer to the image data is successfully acquired, and the empty pointer is returned.
 *                            <br>[cn]成功获取到的图像数据指针，失败返回空
 * 
 * @attention [en]Image format windows platform for HDC, iOS platform for the BMP.
 *            <br>[cn]返回值为该图像的数据指针，图像格式windows平台为HDC，iOS平台为BMP
 * @see NA
 **/
TUP_API TUP_VOID* tup_conf_ds_get_surfacebmp(IN CONF_HANDLE handle, IN COMPONENT_IID ciid, OUT TUP_UINT32* ret_width, OUT TUP_UINT32* ret_height);


/**
 * @ingroup DocShare
 * @brief [en]This interface is used to get the current information on server.
 *        <br>[cn]获取服务器上的当前信息
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle.
 *                                                <br>[cn]会议句柄
 * @param [in] COMPONENT_IID ciid         <b>:</b><br>[en]Indicates component id, IID_COMPONENT_DB represent sharing document.
 *                                                <br>[cn]组件ID，IID_COMPONENT_DS表示共享文档
 * @param [out] DsSyncInfo* info          <b>:</b><br>[en]Indicates document synchronization information.
 *                                                <br>[cn]文档同步信息
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCSS，otherwise return corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]It is generally used to synchronize attendees to the presenter.
 *            <br>[cn]一般用于与会者向主讲人同步
 * @see NA
 **/
TUP_API TUP_RESULT  tup_conf_ds_get_syncinfo(IN CONF_HANDLE handle, IN COMPONENT_IID ciid, OUT DsSyncInfo* info);


/**
 * @ingroup AudioCtrl
 * @brief [en]This interface is used to set the audio parameters.
 *        <br>[cn]设置语音相关参数
 * 
 * @param [in] CONF_HANDLE handle           <b>:</b><br>[en]Indicates conference handle.
 *                                                  <br>[cn]会议句柄
 * @param [in] TC_AUDIO_PARAM* audio_param  <b>:</b><br>[en]Indicates audio parameters.
 *                                                  <br>[cn]音频参数
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCSS， otherwise return corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]NA.
 *            <br>[cn]NA          
 * @see COMPT_MSG_AUDIO_ON_AUDIO_DEVICE_STATUS_CHANGE
 **/
TUP_API TUP_RESULT  tup_conf_audio_setparam(IN CONF_HANDLE handle, IN TC_AUDIO_PARAM* audio_param);


/**
 * @ingroup AudioCtrl
 * @brief [en]This interface is used to open audio device.
 *        <br>[cn]打开音频设备
 * 
 * @param [in] CONF_HANDLE handle           <b>:</b><br>[en]Indicates conference handle, when it's 0, use to audio guide.
 *                                                  <br>[cn]会议句柄，为0时，用于音频向导
 * @param [in] TUP_BOOL bmic                <b>:</b><br>[en]Indicates whether it is a microphone, true means microphone, false means speaker.
 *                                                  <br>[cn]是否是麦克风，取值: true 麦克风, false 扬声器
 * @param [in] TUP_UINT32 deviceid          <b>:</b><br>[en]Indicates device id, in mobile device, device id will be ignored.
 *                                                  <br>[cn]设备ID，在移动设备上，deviceid值被忽略
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCSS, otherwise return corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
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
 *        <br>[cn]关闭音频设备
 * 
 * @param [in] CONF_HANDLE handle           <b>:</b><br>[en]Indicates conference handle, when it's 0, use to audio guide.
 *                                                  <br>[cn]会议句柄，为0时，用于音频向导
 * @param [in] TUP_BOOL bmic                <b>:</b><br>[en]Indicates whether it is a microphone, true means microphone, false means speaker.
 *                                                  <br>[cn]是否是麦克风，取值: true 麦克风, false 扬声器
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCSS， otherwise return corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
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
 *        <br>[cn]静音音频设备
 * 
 * @param [in] CONF_HANDLE handle           <b>:</b><br>[en]Indicates conference handle, when it's 0, use to audio guide.
 *                                                  <br>[cn]会议句柄，为0时，用于音频向导
 * @param [in] TUP_BOOL bmic                <b>:</b><br>[en]Indicates whether it is a microphone, true means microphone, false means speaker.
 *                                                  <br>[cn]是否是麦克风，取值: true 麦克风, false 扬声器
 * @param [in] TUP_BOOL bMute               <b>:</b><br>[en]Indicates whether to mute.
 *                                                  <br>[cn]是否Mute，取值: true 静音, false 取消静音
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCSS， otherwise return corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]NA.
 *            <br>[cn]NA          
 * @see COMPT_MSG_AUDIO_ON_AUDIO_DEVICE_STATUS_CHANGE
 **/
TUP_API TUP_RESULT  tup_conf_audio_mute(IN CONF_HANDLE handle,TUP_BOOL bmic, IN TUP_BOOL bMute);


/**
 * @ingroup AudioCtrl
 * @brief [en]This interface is used to get the volume of the audio input device.
 *        <br>[cn]获取音频输入设备的音量
 * 
 * @param [in] CONF_HANDLE handle           <b>:</b><br>[en]Indicates conference handle, when it's 0, use to audio guide.
 *                                                  <br>[cn]会议句柄，为0时，用于音频向导
 * @param [in] TUP_BOOL bmic                <b>:</b><br>[en]Indicates whether it is a microphone, true means microphone, false means speaker.
 *                                                  <br>[cn]是否是麦克风，取值: true 麦克风, false 扬声器
 * @param [in] TUP_BOOL bsystem             <b>:</b><br>[en]Indicates whether is a system device.
 *                                                  <br>[cn]是否是系统设备，取值: true/false
 * @param [out] TUP_UINT32 *volume          <b>:</b><br>[en]Indicates volume, range from 0 to 100.
 *                                                  <br>[cn]音量，取值[0, 100]
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCSS， otherwise return corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see NA
 **/
TUP_API TUP_RESULT  tup_conf_audio_get_volume(IN CONF_HANDLE handle,TUP_BOOL bmic,TUP_BOOL bsystem, OUT TUP_UINT32 *volume);


/**
 * @ingroup AudioCtrl
 * @brief [en]This interface is used to set the volume of the audio input device.
 *        <br>[cn]设置音频输入设备的音量
 * 
 * @param [in] CONF_HANDLE handle           <b>:</b><br>[en]Indicates conference handle, when it's 0, use to audio guide.
 *                                                  <br>[cn]会议句柄，为0时，用于音频向导
 * @param [in] TUP_BOOL bmic                <b>:</b><br>[en]Indicates whether it is a microphone, true means microphone, false means speaker.
 *                                                  <br>[cn]是否是麦克风，取值: true 麦克风, false 扬声器
 * @param [in] TUP_BOOL bsystem             <b>:</b><br>[en]Indicates whether is a system device.
 *                                                  <br>[cn]是否是系统设备，取值: true/false
 * @param [in] TUP_UINT32 volume            <b>:</b><br>[en]Indicates volume, range from 0 to 100.
 *                                                  <br>[cn]音量，取值[0, 100]
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCSS， otherwise return corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see NA
 **/
TUP_API TUP_RESULT  tup_conf_audio_set_volume(IN CONF_HANDLE handle,TUP_BOOL bmic,TUP_BOOL bsystem, IN TUP_UINT32 volume);


/**
 * @ingroup AudioCtrl
 * @brief [en]This interface is used to get the type of audio.
 *        <br>[cn]获取音频设备类型
 * 
 * @param [in] CONF_HANDLE handle                 <b>:</b><br>[en]Indicates conference handle, when it's 0, use to audio guide.
 *                                                        <br>[cn]会议句柄，为0时，用于音频向导
 * @param [in] TUP_BOOL binput                    <b>:</b><br>[en]Indicates whether is input device, true means input device, false means output device.
 *                                                        <br>[cn]是否是输入设备，取值: true 输入设备, false 输出设备
 * @param [in] TC_AUDIO_DEVICE_INFO *device_info  <b>:</b><br>[en]Indicates device information list array.
 *                                                        <br>[cn]设备信息列表数组
 * @param [out] TUP_UINT32 *ret_count             <b>:</b><br>[en]Indicates device list amount.
 *                                                        <br>[cn]音频设备的数量
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCSS， otherwise return corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see NA
 **/
TUP_API TUP_RESULT  tup_conf_audio_get_device(IN CONF_HANDLE handle,TUP_BOOL binput, TC_AUDIO_DEVICE_INFO *device_info, TUP_UINT32 *ret_count);


/**
 * @ingroup BasicConfCtrl
 * @brief [en]This interface is used to initialize ISV message
 *        <br>[cn]初始化ISV信息
 * 
 * @param [in] TUP_BOOL bpaasmode         <b>:</b><br>[en]Indicates whether to enable public cloud mode.
 *                                                <br>[cn]是否启用公有云模式, 取值:true/false
 * @param [in] Isv_Param* isv_param       <b>:</b><br>[en]Indicates ISV param, include ISV account and ISV private key.
 *                                                <br>[cn]ISV参数，包括ISV帐号和ISV私钥
 * @retval TUP_VOID
 * 
 * @attention [en]Include ISV account and ISV private key, thid interface is applied for public cloud, under the conditions of public cloud need to start .
 *            <br>[cn]包括ISV帐号和ISV私钥。该接口是提供给公有云用的，在公有云条件下才需启动。
 * @see NA
 **/
TUP_API TUP_VOID  tup_conf_init_isv(IN TUP_BOOL bpaasmode, IN const Isv_Param* isv_param);

/**
 * @ingroup BasicConfCtrl
 * @brief [en]This interface is used to check certificate datatime
 *        <br>[cn]返回证书到期时间
 * 
 * @param [in] TUP_CHAR certfile_path          <b>:</b><br>[en]Indicates certificate path.
 *                                                 <br>[cn]证书路径
 * @param [out] TC_CERT_DATA_TIME* expire_time <b>:</b><br>[en]Indicates expire time.
 *                                                 <br>[cn]证书到期时间
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCSS， otherwise return corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]NA
 *            <br>[cn]NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_conf_check_certificate_overdue(IN const char *certfile_path, OUT TC_CERT_DATA_TIME *expire_time);

/**
 * @ingroup BasicConfCtrl
 * @brief [en]This interface is used to verify certificate
 *        <br>[cn]校验证书是否有效
 * 
 * @param [in] TUP_CHAR certfile_path         <b>:</b><br>[en]Indicates certificate path.
 *                                                <br>[cn]证书路径
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCSS， otherwise return corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
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


