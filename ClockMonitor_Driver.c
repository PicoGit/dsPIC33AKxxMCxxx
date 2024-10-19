/*----------------------------------------------------------------------------*/
/**
* @file		ClockMonitor_Driver.c
* @brief	ClockMonitorモジュールに関するドライバ関数
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
#include "clockmonitor_driver.h"
/*----------------------------------------------------------------------------*/
/*定数定義*/
/*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*/
/*変数定義*/
/*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*/
/*プロトタイプ宣言*/
/*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*/
/*
* @fn        vdg_CM1_Set_Register(void)
* @brief     CM1レジスタを初期化します
* @param
* @return
* @detail 
*/
/*----------------------------------------------------------------------------*/
void vdg_CM1_Set_Register(void)
{
	/*-----------------------------------------------------------------------*/
	/* CM1CONレジスタ */
	/*-----------------------------------------------------------------------*/
		CM1CON = 0x00000000u;
		#ifdef DEF_BITNAME
			CM1CONbits.WIDTH = 0u;
			CM1CONbits.FLTINJ = 0u;
			CM1CONbits.CNTDIV = 0u;
			CM1CONbits.SLPEN = 0u;
			CM1CONbits.SIDL = 0u;
			CM1CONbits.ON = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CM1STATレジスタ */
	/*-----------------------------------------------------------------------*/
		CM1STAT = 0x00000000u;
		#ifdef DEF_BITNAME
			CM1STATbits.BUFV = 0u;
			CM1STATbits.SATD = 0u;
			CM1STATbits.TRIG = 0u;
			CM1STATbits.LFT = 0u;
			CM1STATbits.HFT = 0u;
			CM1STATbits.LWT = 0u;
			CM1STATbits.HWT = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CM1WINPRレジスタ */
	/*-----------------------------------------------------------------------*/
		CM1WINPR = 0x00000000u;
	/*-----------------------------------------------------------------------*/
	/* CM1SELレジスタ */
	/*-----------------------------------------------------------------------*/
		CM1SEL = 0x00000000u;
		#ifdef DEF_BITNAME
			CM1SELbits.WINSEL = 0u;
			CM1SELbits.CNTSEL = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CM1BUFレジスタ */
	/*-----------------------------------------------------------------------*/
		CM1BUF = 0x00000000u;
	/*-----------------------------------------------------------------------*/
	/* CM1SATレジスタ */
	/*-----------------------------------------------------------------------*/
		CM1SAT = 0x00000000u;
	/*-----------------------------------------------------------------------*/
	/* CM1HFAILレジスタ */
	/*-----------------------------------------------------------------------*/
		CM1HFAIL = 0x00000000u;
	/*-----------------------------------------------------------------------*/
	/* CM1LFAILレジスタ */
	/*-----------------------------------------------------------------------*/
		CM1LFAIL = 0x00000000u;
	/*-----------------------------------------------------------------------*/
	/* CM1HWARNレジスタ */
	/*-----------------------------------------------------------------------*/
		CM1HWARN = 0x00000000u;
	/*-----------------------------------------------------------------------*/
	/* CM1LWARNレジスタ */
	/*-----------------------------------------------------------------------*/
		CM1LWARN = 0x00000000u;
}
/*----------------------------------------------------------------------------*/
/*
* @fn        vdg_CM2_Set_Register(void)
* @brief     CM2レジスタを初期化します
* @param
* @return
* @detail 
*/
/*----------------------------------------------------------------------------*/
void vdg_CM2_Set_Register(void)
{
	/*-----------------------------------------------------------------------*/
	/* CM2CONレジスタ */
	/*-----------------------------------------------------------------------*/
		CM2CON = 0x00000000u;
		#ifdef DEF_BITNAME
			CM2CONbits.WIDTH = 0u;
			CM2CONbits.FLTINJ = 0u;
			CM2CONbits.CNTDIV = 0u;
			CM2CONbits.SLPEN = 0u;
			CM2CONbits.SIDL = 0u;
			CM2CONbits.ON = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CM2STATレジスタ */
	/*-----------------------------------------------------------------------*/
		CM2STAT = 0x00000000u;
		#ifdef DEF_BITNAME
			CM2STATbits.BUFV = 0u;
			CM2STATbits.SATD = 0u;
			CM2STATbits.TRIG = 0u;
			CM2STATbits.LFT = 0u;
			CM2STATbits.HFT = 0u;
			CM2STATbits.LWT = 0u;
			CM2STATbits.HWT = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CM2WINPRレジスタ */
	/*-----------------------------------------------------------------------*/
		CM2WINPR = 0x00000000u;
	/*-----------------------------------------------------------------------*/
	/* CM2SELレジスタ */
	/*-----------------------------------------------------------------------*/
		CM2SEL = 0x00000000u;
		#ifdef DEF_BITNAME
			CM2SELbits.WINSEL = 0u;
			CM2SELbits.CNTSEL = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CM2BUFレジスタ */
	/*-----------------------------------------------------------------------*/
		CM2BUF = 0x00000000u;
	/*-----------------------------------------------------------------------*/
	/* CM2SATレジスタ */
	/*-----------------------------------------------------------------------*/
		CM2SAT = 0x00000000u;
	/*-----------------------------------------------------------------------*/
	/* CM2HFAILレジスタ */
	/*-----------------------------------------------------------------------*/
		CM2HFAIL = 0x00000000u;
	/*-----------------------------------------------------------------------*/
	/* CM2LFAILレジスタ */
	/*-----------------------------------------------------------------------*/
		CM2LFAIL = 0x00000000u;
	/*-----------------------------------------------------------------------*/
	/* CM2HWARNレジスタ */
	/*-----------------------------------------------------------------------*/
		CM2HWARN = 0x00000000u;
	/*-----------------------------------------------------------------------*/
	/* CM2LWARNレジスタ */
	/*-----------------------------------------------------------------------*/
		CM2LWARN = 0x00000000u;
}
/*----------------------------------------------------------------------------*/
/*
* @fn        vdg_CM3_Set_Register(void)
* @brief     CM3レジスタを初期化します
* @param
* @return
* @detail 
*/
/*----------------------------------------------------------------------------*/
void vdg_CM3_Set_Register(void)
{
	/*-----------------------------------------------------------------------*/
	/* CM3CONレジスタ */
	/*-----------------------------------------------------------------------*/
		CM3CON = 0x00000000u;
		#ifdef DEF_BITNAME
			CM3CONbits.WIDTH = 0u;
			CM3CONbits.FLTINJ = 0u;
			CM3CONbits.CNTDIV = 0u;
			CM3CONbits.SLPEN = 0u;
			CM3CONbits.SIDL = 0u;
			CM3CONbits.ON = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CM3STATレジスタ */
	/*-----------------------------------------------------------------------*/
		CM3STAT = 0x00000000u;
		#ifdef DEF_BITNAME
			CM3STATbits.BUFV = 0u;
			CM3STATbits.SATD = 0u;
			CM3STATbits.TRIG = 0u;
			CM3STATbits.LFT = 0u;
			CM3STATbits.HFT = 0u;
			CM3STATbits.LWT = 0u;
			CM3STATbits.HWT = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CM3WINPRレジスタ */
	/*-----------------------------------------------------------------------*/
		CM3WINPR = 0x00000000u;
	/*-----------------------------------------------------------------------*/
	/* CM3SELレジスタ */
	/*-----------------------------------------------------------------------*/
		CM3SEL = 0x00000000u;
		#ifdef DEF_BITNAME
			CM3SELbits.WINSEL = 0u;
			CM3SELbits.CNTSEL = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CM3BUFレジスタ */
	/*-----------------------------------------------------------------------*/
		CM3BUF = 0x00000000u;
	/*-----------------------------------------------------------------------*/
	/* CM3SATレジスタ */
	/*-----------------------------------------------------------------------*/
		CM3SAT = 0x00000000u;
	/*-----------------------------------------------------------------------*/
	/* CM3HFAILレジスタ */
	/*-----------------------------------------------------------------------*/
		CM3HFAIL = 0x00000000u;
	/*-----------------------------------------------------------------------*/
	/* CM3LFAILレジスタ */
	/*-----------------------------------------------------------------------*/
		CM3LFAIL = 0x00000000u;
	/*-----------------------------------------------------------------------*/
	/* CM3HWARNレジスタ */
	/*-----------------------------------------------------------------------*/
		CM3HWARN = 0x00000000u;
	/*-----------------------------------------------------------------------*/
	/* CM3LWARNレジスタ */
	/*-----------------------------------------------------------------------*/
		CM3LWARN = 0x00000000u;
}
/*----------------------------------------------------------------------------*/
/*
* @fn        vdg_CM4_Set_Register(void)
* @brief     CM4レジスタを初期化します
* @param
* @return
* @detail 
*/
/*----------------------------------------------------------------------------*/
void vdg_CM4_Set_Register(void)
{
	/*-----------------------------------------------------------------------*/
	/* CM4CONレジスタ */
	/*-----------------------------------------------------------------------*/
		CM4CON = 0x00000000u;
		#ifdef DEF_BITNAME
			CM4CONbits.WIDTH = 0u;
			CM4CONbits.FLTINJ = 0u;
			CM4CONbits.CNTDIV = 0u;
			CM4CONbits.SLPEN = 0u;
			CM4CONbits.SIDL = 0u;
			CM4CONbits.ON = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CM4STATレジスタ */
	/*-----------------------------------------------------------------------*/
		CM4STAT = 0x00000000u;
		#ifdef DEF_BITNAME
			CM4STATbits.BUFV = 0u;
			CM4STATbits.SATD = 0u;
			CM4STATbits.TRIG = 0u;
			CM4STATbits.LFT = 0u;
			CM4STATbits.HFT = 0u;
			CM4STATbits.LWT = 0u;
			CM4STATbits.HWT = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CM4WINPRレジスタ */
	/*-----------------------------------------------------------------------*/
		CM4WINPR = 0x00000000u;
	/*-----------------------------------------------------------------------*/
	/* CM4SELレジスタ */
	/*-----------------------------------------------------------------------*/
		CM4SEL = 0x00000000u;
		#ifdef DEF_BITNAME
			CM4SELbits.WINSEL = 0u;
			CM4SELbits.CNTSEL = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CM4BUFレジスタ */
	/*-----------------------------------------------------------------------*/
		CM4BUF = 0x00000000u;
	/*-----------------------------------------------------------------------*/
	/* CM4SATレジスタ */
	/*-----------------------------------------------------------------------*/
		CM4SAT = 0x00000000u;
	/*-----------------------------------------------------------------------*/
	/* CM4HFAILレジスタ */
	/*-----------------------------------------------------------------------*/
		CM4HFAIL = 0x00000000u;
	/*-----------------------------------------------------------------------*/
	/* CM4LFAILレジスタ */
	/*-----------------------------------------------------------------------*/
		CM4LFAIL = 0x00000000u;
	/*-----------------------------------------------------------------------*/
	/* CM4HWARNレジスタ */
	/*-----------------------------------------------------------------------*/
		CM4HWARN = 0x00000000u;
	/*-----------------------------------------------------------------------*/
	/* CM4LWARNレジスタ */
	/*-----------------------------------------------------------------------*/
		CM4LWARN = 0x00000000u;
}
/*----------------------------------------------------------------------------*/
/*
* @fn        vdg_CM_Set_Register(void)
* @brief     CMレジスタ全てを初期化します
* @param
* @return
* @detail 
*/
/*----------------------------------------------------------------------------*/
void vdg_CM_Set_Register(void)
{
	vdg_CM1_Set_Register();
	vdg_CM2_Set_Register();
	vdg_CM3_Set_Register();
	vdg_CM4_Set_Register();
}