
/*******************************************************************************
 *               Copyright (C) 2011, Huawei Tech. Co., Ltd.
 *                      ALL RIGHTS RESERVED
 *******************************************************************************/


#ifndef __RSA_ENCRYPT_INTERFACE_H__
#define __RSA_ENCRYPT_INTERFACE_H__

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif /*  __cpluscplus */
#endif /*  __cpluscplus */


/**
 * @brief RSA����
 * 
 * @param [in] const TUP_CHAR *src_data         <b>:</b> �����ܴ��������
 * @param [in] const TUP_CHAR *public_key_path  <b>:</b> ��Կ·��
 * @param [out] TUP_CHAR **encrypt_data         <b>:</b> ���ܺ������
 * @param [out] TUP_INT *encrypt_len            <b>:</b> ���ܺ�����ݳ���
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention ���ܺ������������Ҫ�ͷţ��ͷź���tup_rsa_free_public_encrypt_data
 * @see tup_rsa_free_public_encrypt_data
 **/
TUP_API TUP_RESULT tup_rsa_public_encrypt(const TUP_CHAR *src_data, const TUP_CHAR *public_key_path, TUP_CHAR **encrypt_data, TUP_INT *encrypt_len);


/**
 * @brief �ͷ�RSA��������
 * 
 * @param [in] TUP_CHAR *encrypt_data  <b>:</b> ���ͷŵļ�������
 * @retval TUP_API TUP_VOID <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see tup_rsa_public_encrypt
 **/
TUP_API TUP_VOID tup_rsa_free_public_encrypt_data(TUP_CHAR *encrypt_data);


#ifdef __cplusplus
#if __cplusplus
}
#endif /*  __cpluscplus */
#endif /*  __cpluscplus */

#endif  /* __RSA_ENCRYPT_INTERFACE_H__ */

