/*----------------------------------------------------------------------------*/
/**
* @file		PAC_Driver.c
* @brief	Peripheral Access Controlに関するドライバ関数
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
#include "pac_driver.h"
//#include "pac_user.h"
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
* @fn        vdg_PAC_Set_Register(void)
* @brief     PACレジスタをセットします
* @param
* @return
* @detail 
*/
/*----------------------------------------------------------------------------*/
void vdg_PAC_Set_Register(void)
{
    /*-----------------------------------------------------------------------*/
	/* PACCON1レジスタ */
	/*-----------------------------------------------------------------------*/
		PACCON1 = 0x00000000u;
		#ifdef DEF_BITNAME
			PACCON1bits.IVTBASELK = 0u;
			PACCON1bits.IVTCREGLK = 0u;
			PACCON1bits.BMXIRAMLLK = 0u;
			PACCON1bits.BMXIRAMHLK = 0u;
			PACCON1bits.PCLKCONLK = 0u;
			PACCON1bits.IOIM1CONLK = 0u;
			PACCON1bits.IOIM2CONLK = 0u;
			PACCON1bits.IOIM3CONLK = 0u;
			PACCON1bits.IOIM4CONLK = 0u;
			PACCON1bits.NVMCONLK = 0u;
			PACCON1bits.OSCCTRLLK = 0u;
			PACCON1bits.CM1CONLK = 0u;
			PACCON1bits.CM1RANGELK = 0u;
			PACCON1bits.CM2CONLK = 0u;
			PACCON1bits.CM2RANGELK = 0u;
			PACCON1bits.CM3CONLK = 0u;
			PACCON1bits.IVTBASEWR = 0u;
			PACCON1bits.IVTCREGWR = 0u;
			PACCON1bits.BMXIRAMLWR = 0u;
			PACCON1bits.BMXIRAMHWR = 0u;
			PACCON1bits.PCLKCONWR = 0u;
			PACCON1bits.IOIM1CONWR = 0u;
			PACCON1bits.IOIM2CONWR = 0u;
			PACCON1bits.IOIM3CONWR = 0u;
			PACCON1bits.IOIM4CONWR = 0u;
			PACCON1bits.NVMCONWR = 0u;
			PACCON1bits.OSCCTRLWR = 0u;
			PACCON1bits.CM1CONWR = 0u;
			PACCON1bits.CM1RANGEWR = 0u;
			PACCON1bits.CM2CONWR = 0u;
			PACCON1bits.CM2RANGEWR = 0u;
			PACCON1bits.CM3CONWR = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* PACCON2レジスタ */
	/*-----------------------------------------------------------------------*/
		PACCON2 = 0x00000000u;
		#ifdef DEF_BITNAME
			PACCON2bits.CM3RANGELK = 0u;
			PACCON2bits.CM4CONLK = 0u;
			PACCON2bits.CM4RANGELK = 0u;
			PACCON2bits.WDTCONLK = 0u;
			PACCON2bits.RPCONLK = 0u;
			PACCON2bits.MBISTCONLK = 0u;
			PACCON2bits.CM3RANGEWR = 0u;
			PACCON2bits.CM4CONWR = 0u;
			PACCON2bits.CM4RANGEWR = 0u;
			PACCON2bits.WDTCONWR = 0u;
			PACCON2bits.RPCONWR = 0u;
			PACCON2bits.MBISTCONWR = 0u;
		#endif 

}
