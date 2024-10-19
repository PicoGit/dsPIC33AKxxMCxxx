/*----------------------------------------------------------------------------*/
/**
* @file		Peripheral_Init.c
* @brief	周辺モジュール初期化に関するドライバ関数
* @date		24/07/16
* @details	
* @note		
*/
/*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*/
/*インクルードファイル*/
/*----------------------------------------------------------------------------*/
#include <xc.h>
#include "BoardSupportPackage.h"
#include "init_fix.h"
#include "typedef.h"
#include "adc_driver.h"
#include "aux_driver.h"
#include "biss_driver.h"
#include "bmx_driver.h"
#include "ccp_driver.h"
#include "clc_driver.h"
#include "clock_driver.h"
#include "clockmonitor_driver.h"
#include "cpu_driver.h"
#include "crc_driver.h"
#include "cmp_dac_driver.h"
#include "dma_driver.h"
#include "dmt_driver.h"
#include "ecan_driver.h"
#include "ecc_driver.h"
#include "hpc_driver.h"
#include "i2c_driver.h"
#include "ibias_driver.h"
#include "iomon_driver.h"
#include "interrupt_driver.h"
#include "jtag_driver.h"
#include "mbist_driver.h"
#include "msi_driver.h"
#include "nvm_driver.h"
#include "opamp_driver.h"
#include "other_driver.h"
#include "pga_driver.h"
#include "pmd_driver.h"
#include "port_driver.h"
#include "pr_driver.h"
#include "ptg_driver.h"
#include "pwb_driver.h"
#include "pwm_driver.h"
#include "qei_driver.h"
#include "refo_driver.h"
#include "remappin_driver.h"
#include "sent_driver.h"
#include "spi_driver.h"
#include "timer_driver.h"
#include "uart_driver.h"
#include "wdt_driver.h"
#include "pac_driver.h"

/*----------------------------------------------------------------------------*/
/*定数定義*/
/*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*/
/*変数定義*/
/*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*/
/*プロトタイプ宣言*/
/*----------------------------------------------------------------------------*/
void vdg_Peripheral_Init(void)
{
    /*----------------------------------------------------------------------------*/
    /*【****】リセット、クロック設定*/
    /*----------------------------------------------------------------------------*/
		vdg_Clock_Set_Register();
        vdg_AUX_Set_Register();
    /*----------------------------------------------------------------------------*/
    /*【****】CPU設定*/
    /*----------------------------------------------------------------------------*/
        vdg_CPU_Set_Register();
    /*----------------------------------------------------------------------------*/
    /*【****】モジュール共通設定*/
    /*----------------------------------------------------------------------------*/
        vdg_PMD_Set_All_Register();
        vdg_Interrupt_Set_Register();
		vdg_IOMON_Set_Register();
    /*----------------------------------------------------------------------------*/
    /*【****】ピン設定*/
    /*----------------------------------------------------------------------------*/
        vdg_Port_Set_All_Register();
        vdg_RemapPin_Set_All_Register();
    /*----------------------------------------------------------------------------*/
    /*【****】アナログモジュール設定*/
    /*----------------------------------------------------------------------------*/
        vdg_ADC_Set_Register();
        vdg_CMP_DAC_Set_Register();
		vdg_OPAMP_Set_Register();
        vdg_IBias_Set_Register();

    /*----------------------------------------------------------------------------*/
    /*【****】通信モジュール設定*/
    /*----------------------------------------------------------------------------*/
        vdg_UART_Set_Register();
        vdg_SPI_Set_Register();
        vdg_I2C_Set_Register();
        vdg_SENT_Set_Register();

#if ( PMD_CAN1MD == PMD_MODULE_ENABLE )	
        vdg_ECAN_Set_Register();
#endif
    /*----------------------------------------------------------------------------*/
    /*【****】Safetyモジュール設定*/
    /*----------------------------------------------------------------------------*/
        vdg_DMT_Set_Register();
        vdg_ECC_Set_Register();
        vdg_WDT_Set_Register();
    /*----------------------------------------------------------------------------*/
    /*【****】デジタル入出力*/
    /*----------------------------------------------------------------------------*/
        vdg_CCP_Set_Register();
        vdg_PWM_Set_Register();
        vdg_QEI_Set_Register();
        vdg_CLC_Set_Register();
		vdg_BiSS_Set_Register();
    /*----------------------------------------------------------------------------*/
    /*【****】タイマー*/
    /*----------------------------------------------------------------------------*/
        vdg_Timer1_Set_Register();
    /*----------------------------------------------------------------------------*/
    /*【****】その他*/
    /*----------------------------------------------------------------------------*/
        vdg_DMA_Set_Register();
        vdg_CRC_Set_Register();
        vdg_PTG_Set_Register();

        vdg_NVM_Set_Register();
        vdg_Other_Set_Register();
		
		
		vdg_PAC_Set_Register();
		vdg_PR_Set_Register();
		vdg_PWB_Set_Register();
		vdg_CM_Set_Register();
		vdg_MBIST_Set_Register();
		
}
