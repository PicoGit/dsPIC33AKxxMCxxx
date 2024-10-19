/*----------------------------------------------------------------------------*/
/**
* @file		CRC_Driver.c
* @brief	CRCモジュールに関するドライバ関数
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
#include "crc_driver.h"
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
* @fn        vdg_CRC_Set_Register(void)
* @brief     CRCレジスタを初期化します
* @param
* @return
* @detail 
*/
/*----------------------------------------------------------------------------*/
void vdg_CRC_Set_Register(void)
{
		
#if ( PMD_CRCMD == PMD_MODULE_ENABLE )
	/*-----------------------------------------------------------------------*/
	/* CRCCONレジスタ */
	/*-----------------------------------------------------------------------*/
		CRCCON = 0x00000000u;
		#ifdef DEF_BITNAME
			CRCCONbits.MOD = 0u;
			CRCCONbits.LENDIAN = 0u;
			CRCCONbits.CRCGO = 0u;
			CRCCONbits.CRCISEL = 0u;
			CRCCONbits.CRCMPT = 0u;
			CRCCONbits.CRCFUL = 0u;
			CRCCONbits.VWORD = 0u;
			CRCCONbits.SIDL = 0u;
			CRCCONbits.ON = 0u;
			CRCCONbits.PLEN = 0u;
			CRCCONbits.DWIDTH = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CRCXORレジスタ */
	/*-----------------------------------------------------------------------*/
		CRCXOR = 0x00000000u;
		#ifdef DEF_BITNAME
			CRCXORbits.X1 = 0u;
			CRCXORbits.X2 = 0u;
			CRCXORbits.X3 = 0u;
			CRCXORbits.X4 = 0u;
			CRCXORbits.X5 = 0u;
			CRCXORbits.X6 = 0u;
			CRCXORbits.X7 = 0u;
			CRCXORbits.X8 = 0u;
			CRCXORbits.X9 = 0u;
			CRCXORbits.X10 = 0u;
			CRCXORbits.X11 = 0u;
			CRCXORbits.X12 = 0u;
			CRCXORbits.X13 = 0u;
			CRCXORbits.X14 = 0u;
			CRCXORbits.X15 = 0u;
			CRCXORbits.X16 = 0u;
			CRCXORbits.X17 = 0u;
			CRCXORbits.X18 = 0u;
			CRCXORbits.X19 = 0u;
			CRCXORbits.X20 = 0u;
			CRCXORbits.X21 = 0u;
			CRCXORbits.X22 = 0u;
			CRCXORbits.X23 = 0u;
			CRCXORbits.X24 = 0u;
			CRCXORbits.X25 = 0u;
			CRCXORbits.X26 = 0u;
			CRCXORbits.X27 = 0u;
			CRCXORbits.X28 = 0u;
			CRCXORbits.X29 = 0u;
			CRCXORbits.X30 = 0u;
			CRCXORbits.X31 = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CRCDATレジスタ */
	/*-----------------------------------------------------------------------*/
		CRCDAT = 0x00000000u;
	/*-----------------------------------------------------------------------*/
	/* CRCWDATレジスタ */
	/*-----------------------------------------------------------------------*/
		CRCWDAT = 0x00000000u;
#endif		
		
}