/*----------------------------------------------------------------------------*/
/**
* @file		MBIST_Driver.c
* @brief	RAM Memory Built-In Self-Testに関するドライバ関数
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
#include "mbist_driver.h"
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
* @fn           vdg_MBIST_Set_Register(void)
* @brief        MBISTレジスタを初期化します
* @param
* @return
* @detail 
*/
/*----------------------------------------------------------------------------*/
void vdg_MBIST_Set_Register(void)
{
	/*-----------------------------------------------------------------------*/
	/* MBISTCONレジスタ */
	/*-----------------------------------------------------------------------*/
		MBISTCON = 0x00000000u;
		#ifdef DEF_BITNAME
			MBISTCONbits.MBISTEN = 0u;
			MBISTCONbits.MBISTSTAT = 0u;
			MBISTCONbits.MBISTDONE = 0u;
			MBISTCONbits.FLTINJ = 0u;
		#endif 


}