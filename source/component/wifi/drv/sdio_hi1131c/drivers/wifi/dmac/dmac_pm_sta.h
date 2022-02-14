/******************************************************************************

                  ��Ȩ���� (C), 2001-2011, ��˼�뵼�����޹�˾

 ******************************************************************************
  �� �� ��   : dmac_pm_sta.h
  �� �� ��   : ����
  ��    ��   : 
  ��������   : 2015��1��14��
  ����޸�   :
  ��������   : dmac_pm_sta.c ��ͷ�ļ�
  �����б�   :
  �޸���ʷ   :
  1.��    ��   : 2015��1��14��
    ��    ��   : 
    �޸�����   : �����ļ�

******************************************************************************/

#ifndef __DMAC_PM_STA_H__
#define __DMAC_PM_STA_H__

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif


/*****************************************************************************
  1 ����ͷ�ļ�����
*****************************************************************************/

#undef  THIS_FILE_ID
#define THIS_FILE_ID OAM_FILE_ID_DMAC_PM_STA_H
/*****************************************************************************
  2 �궨��
*****************************************************************************/
#define WLAN_SAVE_USE_DMA 1

/*****************************************************************************
  3 ö�ٶ���
*****************************************************************************/


/*****************************************************************************
  4 ȫ�ֱ�������
*****************************************************************************/


/*****************************************************************************
  5 ��Ϣͷ����
*****************************************************************************/


/*****************************************************************************
  6 ��Ϣ����
*****************************************************************************/


/*****************************************************************************
  7 STRUCT����
*****************************************************************************/


/*****************************************************************************
  8 UNION����
*****************************************************************************/


/*****************************************************************************
  9 OTHERS����
*****************************************************************************/


/*****************************************************************************
  10 ��������
*****************************************************************************/
extern oal_uint8 dmac_psm_check_hw_txq_state(oal_void);
extern oal_uint8 dmac_psm_check_txrx_state(oal_void);
extern oal_void  dmac_psm_recover_start_dma(oal_uint8 *puc_ch0,oal_uint8 *puc_ch1,oal_uint8 *puc_ch2);
extern oal_uint8 dmac_psm_clean_state (oal_void);
extern oal_void dmac_psm_save_start_dma (oal_uint8* puc_ch0,oal_uint8* puc_ch1,oal_uint8* puc_ch2);
extern oal_uint8 dmac_psm_save_ps_state (oal_void);
extern oal_uint8 dmac_psm_recover_powerdown(oal_uint8 uc_dmach0,oal_uint8 uc_dmach1,oal_uint8 uc_dmach2);
extern oal_uint8 dmac_psm_recover_no_powerdown (oal_void);
extern oal_uint8 dmac_psm_cbb_stopwork (oal_void);
extern oal_void dmac_psm_rf_sleep(oal_uint8 uc_restore_reg);
extern oal_void dmac_psm_rf_awake (oal_uint8 uc_restore_reg);
//extern oal_void dmac_psm_sync_tsf_to_sta(oal_void);
//extern oal_void dmac_psm_sync_tsf_to_ap(oal_void);
extern oal_uint8 dmac_psm_is_fake_queues_empty(oal_void);
extern void pm_wlan_deepsleep_save_state(void);
extern void pm_wlan_deepsleep_load_state(void);
extern oal_void dmac_psm_save_register(oal_void);
extern oal_void dmac_psm_restore_register(oal_void);




#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif

#endif /* end of dmac_pm_sta.h */