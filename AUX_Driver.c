/*----------------------------------------------------------------------------*/
/**
* @file		AUX_Driver.c
* @brief	AUXモジュールに関するドライバ関数
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
#include "aux_driver.h"
/*----------------------------------------------------------------------------*/
/*定数定義*/
/*----------------------------------------------------------------------------*/

/*----- OSCCONbits.COSC か OSCCONbits.NOSCで使用 -----*/
#define AUX_OSC_FRC         0u  /* 高速 RC オシレータ  */
#define AUX_OSC_FRCPLL      1u  /* PLL 併用高速 RC オシレータ */
#define AUX_OSC_PRI         2u  /* プライマリ オシレータ */
#define AUX_OSC_PRIPLL      3u  /* PLL 併用プライマリ オシレータ */
#define AUX_OSC_SOSC        4u  /* セカンダリ オシレータ  */
#define AUX_OSC_LPRC        5u  /* 低消費電力 RC オシレータ */
#define AUX_OSC_FRCDIV16    6u  /* 16 分周高速 RC オシレータ */
#define AUX_OSC_FRCDIVN     7u  /* N 分周高速 RC オシレータ */

/*----- OSCCONbits.OSWENで使用 -----*/
#define AUX_OSC_SWITCH_STAT   0u  /* オシレータ切り換えは完了した  */
#define AUX_OSC_SWITCH_EN     1u  /* オシレータへの切り換えを要求する */

/*----- OSCCONbits.LOCKで使用 -----*/
#define AUX_OSC_LOCK_OFF    0u  /* PLL はロック解除中、または起動タイマが作動中、または PLL は無効になっている  */
#define AUX_OSC_LOCK_ON     1u  /* PLL はロック中、または PLL 起動タイマは終了した */

/*----- CANCLKCONbits.CANCLKSELで使用 -----*/
#define AUX_DRV_CANCLK_NO           0u
#define AUX_DRV_CANCLK_FVCO         1u
#define AUX_DRV_CANCLK_FPLLO        2u
#define AUX_DRV_CANCLK_FVCO_DIV2    3u
#define AUX_DRV_CANCLK_FVCO_DIV3    4u
#define AUX_DRV_CANCLK_FVCO_DIV4    5u
#define AUX_DRV_CANCLK_AFPLLO       6u
#define AUX_DRV_CANCLK_AFVCO        7u
#define AUX_DRV_CANCLK_AFVCO_DIV2   8u
#define AUX_DRV_CANCLK_AFVCO_DIV3   9u
#define AUX_DRV_CANCLK_AFVCO_DIV4   10u
/*----------------------------------------------------------------------------*/
/*変数定義*/
/*----------------------------------------------------------------------------*/
struct
{
    _u2 u2_RCON;
}s_AUX;
/*----------------------------------------------------------------------------*/
/*プロトタイプ宣言*/
/*----------------------------------------------------------------------------*/
static void vds_Unknown_Set_Clock_Register(void);
static void vds_AUX_Set_RCON_Register(void);

/*----------------------------------------------------------------------------*/
/*
* @fn        vds_AUX_Set_Clock_Register(void)
* @brief     クロックの設定をします
* @param
* @return
* @detail       
*/
/*----------------------------------------------------------------------------*/
static void vds_Unknown_Set_Clock_Register(void)
{

/*-----------------------------------------------------------------------*/
/* UCPROTレジスタ */
/*-----------------------------------------------------------------------*/
UCPROT = 0x00000000u;
#ifdef DEF_BITNAME
	UCPROTbits.EPUCB = 0u;
	UCPROTbits.WPUCB = 0u;
	UCPROTbits.WPUCA = 0u;
#endif 

/*-----------------------------------------------------------------------*/
/* IRTCTRLレジスタ */
/*-----------------------------------------------------------------------*/
IRTCTRL = 0x00000000u;
#ifdef DEF_BITNAME
	IRTCTRLbits.EAA = 0u;
	IRTCTRLbits.DBG = 0u;
	IRTCTRLbits.DONE = 0u;
	IRTCTRLbits.PLCK = 0u;
	IRTCTRLbits.IACT = 0u;
#endif 

/*-----------------------------------------------------------------------*/
/* IRTSTATレジスタ */
/*-----------------------------------------------------------------------*/
IRTSTAT = 0x00000000u;
/*-----------------------------------------------------------------------*/
/* CHECONレジスタ */
/*-----------------------------------------------------------------------*/
CHECON = 0x00000000u;
#ifdef DEF_BITNAME
	CHECONbits.FLTINJ = 0u;
	CHECONbits.CHECOH = 0u;
	CHECONbits.CHEINV = 0u;
	CHECONbits.ON = 0u;
#endif 

/*-----------------------------------------------------------------------*/
/* CHESTATレジスタ */
/*-----------------------------------------------------------------------*/
CHESTAT = 0x00000000u;
#ifdef DEF_BITNAME
	CHESTATbits.PAR = 0u;
	CHESTATbits.RD = 0u;
#endif 

/*-----------------------------------------------------------------------*/
/* CHEFLTINJレジスタ */
/*-----------------------------------------------------------------------*/
CHEFLTINJ = 0x00000000u;
#ifdef DEF_BITNAME
	CHEFLTINJbits.FLTPTR = 0u;
#endif 

/*-----------------------------------------------------------------------*/
/* PSCNTレジスタ */
/*-----------------------------------------------------------------------*/
PSCNT = 0x00000000u;
/*-----------------------------------------------------------------------*/
/* PSINTVレジスタ */
/*-----------------------------------------------------------------------*/
PSINTV = 0x00000000u;
/*-----------------------------------------------------------------------*/
/* PPPCレジスタ */
/*-----------------------------------------------------------------------*/
PPPC = 0x00000000u;
#ifdef DEF_BITNAME
	PPPCbits.NMISTEP1 = 0u;
#endif 

/*-----------------------------------------------------------------------*/
/* PPCレジスタ */
/*-----------------------------------------------------------------------*/
PPC = 0x00000000u;
#ifdef DEF_BITNAME
	PPCbits.NMISTEP2 = 0u;
#endif 	
}
/*----------------------------------------------------------------------------*/
/*
* @fn			vds_AUX_Set_RCON_Register(void)
* @brief        RCONレジスタを初期化します
* @param
* @return
* @detail 
*/
/*----------------------------------------------------------------------------*/
static void vds_AUX_Set_RCON_Register(void)
{
    /*----------------------------------------------------------------------------*/
    /* リセット要因のローカルコピー */		
    /*----------------------------------------------------------------------------*/
        s_AUX.u2_RCON = RCON;
	/*-----------------------------------------------------------------------*/
	/* RCONレジスタ */
	/*-----------------------------------------------------------------------*/
		RCON = 0x00000000u;
		#ifdef DEF_BITNAME
			RCONbits.POR = 0u;
			RCONbits.BOR = 0u;
			RCONbits.IDLE = 0u;
			RCONbits.SLEEP = 0u;
			RCONbits.WDTO = 0u;
			RCONbits.SWR = 0u;
			RCONbits.EXTR = 0u;
			RCONbits.CM = 0u;
			RCONbits.BUCKR = 0u;
			RCONbits.VREG1R = 0u;
			RCONbits.VREG2R = 0u;
			RCONbits.VREG3R = 0u;
		#endif
}
/*----------------------------------------------------------------------------*/
/*
* @fn			u2g_AUX_Get_RCON_Register(void)
* @brief        起動時のRCONレジスタ情報を返します
* @param
* @return       起動時のRCONレジスタ
* @detail 
*/
/*----------------------------------------------------------------------------*/
_u2 u2g_AUX_Get_RCON_Register(void)
{
    return (s_AUX.u2_RCON);
}
/*----------------------------------------------------------------------------*/
/*
* @fn        vdg_AUX_Set_Register(void)
* @brief        クロックやリセット要因の初期化します
* @param
* @return
* @detail 
*/
/*----------------------------------------------------------------------------*/
void vdg_AUX_Set_Register(void)
{
    vds_Unknown_Set_Clock_Register();
    vds_AUX_Set_RCON_Register();
}		

