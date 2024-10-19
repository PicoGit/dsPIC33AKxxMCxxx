/*----------------------------------------------------------------------------*/
/**
* @file		SENT_Driver.c
* @brief	Single-Edge Nibble Transmissionモジュールに関するドライバ関数
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
* @fn        vdg_SENT1_Set_Register(void)
* @brief        SENT1のレジスタを初期化します 
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void vdg_SENT1_Set_Register(void)
{
#if ( PMD_SENT1MD == PMD_MODULE_ENABLE ) 	
    /*-----------------------------------------------------------------------*/
	/* SENT1CON1レジスタ */
	/*-----------------------------------------------------------------------*/
		SENT1CON1 = 0x00000000u;
		#ifdef DEF_BITNAME
			SENT1CON1bits.NIBCNT = 0u;
			SENT1CON1bits.PS = 0u;
			SENT1CON1bits.SPCEN = 0u;
			SENT1CON1bits.PPP = 0u;
			SENT1CON1bits.CRCEN = 0u;
			SENT1CON1bits.TXPOL = 0u;
			SENT1CON1bits.TXM = 0u;
			SENT1CON1bits.RCVEN = 0u;
			SENT1CON1bits.SNTSIDL = 0u;
			SENT1CON1bits.SNTEN = 0u;
			SENT1CON1bits.SIDL = 0u;
			SENT1CON1bits.ON = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* SENT1CON2レジスタ */
	/*-----------------------------------------------------------------------*/
		SENT1CON2 = 0x00000000u;
		#ifdef DEF_BITNAME
			SENT1CON2bits.TICKTIME = 0u;
			SENT1CON2bits.SYNCMAX = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* SENT1CON3レジスタ */
	/*-----------------------------------------------------------------------*/
		SENT1CON3 = 0x00000000u;
		#ifdef DEF_BITNAME
			SENT1CON3bits.FRMTIME = 0u;
			SENT1CON3bits.SYNCMIN = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* SENT1STATレジスタ */
	/*-----------------------------------------------------------------------*/
		SENT1STAT = 0x00000000u;
		#ifdef DEF_BITNAME
			SENT1STATbits.SYNCTXEN = 0u;
			SENT1STATbits.RXIDLE = 0u;
			SENT1STATbits.FRMERR = 0u;
			SENT1STATbits.CRCERR = 0u;
			SENT1STATbits.NIB = 0u;
			SENT1STATbits.PAUSE = 0u;
			SENT1STATbits.SYNC = 0u;
			SENT1STATbits.NIB0 = 0u;
			SENT1STATbits.NIB1 = 0u;
			SENT1STATbits.NIB2 = 0u;
			SENT1STATbits.TXEN = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* SENT1SYNCレジスタ */
	/*-----------------------------------------------------------------------*/
		SENT1SYNC = 0x00000000u;
		#ifdef DEF_BITNAME
			SENT1SYNCbits.SENTSYNC = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* SENT1DATレジスタ */
	/*-----------------------------------------------------------------------*/
		SENT1DAT = 0x00000000u;
		#ifdef DEF_BITNAME
			SENT1DATbits.CRC = 0u;
			SENT1DATbits.DATA6 = 0u;
			SENT1DATbits.DATA5 = 0u;
			SENT1DATbits.DATA4 = 0u;
			SENT1DATbits.DATA3 = 0u;
			SENT1DATbits.DATA2 = 0u;
			SENT1DATbits.DATA1 = 0u;
			SENT1DATbits.STAT = 0u;
		#endif 

#endif
}
/*----------------------------------------------------------------------------*/
/*
* @fn        vdg_SENT2_Set_Register(void)
* @brief        SENT2のレジスタを初期化します
* @param
* @return
* @detail 
*/
/*----------------------------------------------------------------------------*/
void vdg_SENT2_Set_Register(void)
{
#if ( PMD_SENT2MD == PMD_MODULE_ENABLE ) 		

	/*-----------------------------------------------------------------------*/
	/* SENT2CON1レジスタ */
	/*-----------------------------------------------------------------------*/
		SENT2CON1 = 0x00000000u;
		#ifdef DEF_BITNAME
			SENT2CON1bits.NIBCNT = 0u;
			SENT2CON1bits.PS = 0u;
			SENT2CON1bits.SPCEN = 0u;
			SENT2CON1bits.PPP = 0u;
			SENT2CON1bits.CRCEN = 0u;
			SENT2CON1bits.TXPOL = 0u;
			SENT2CON1bits.TXM = 0u;
			SENT2CON1bits.RCVEN = 0u;
			SENT2CON1bits.SNTSIDL = 0u;
			SENT2CON1bits.SNTEN = 0u;
			SENT2CON1bits.SIDL = 0u;
			SENT2CON1bits.ON = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* SENT2CON2レジスタ */
	/*-----------------------------------------------------------------------*/
		SENT2CON2 = 0x00000000u;
		#ifdef DEF_BITNAME
			SENT2CON2bits.TICKTIME = 0u;
			SENT2CON2bits.SYNCMAX = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* SENT2CON3レジスタ */
	/*-----------------------------------------------------------------------*/
		SENT2CON3 = 0x00000000u;
		#ifdef DEF_BITNAME
			SENT2CON3bits.FRMTIME = 0u;
			SENT2CON3bits.SYNCMIN = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* SENT2STATレジスタ */
	/*-----------------------------------------------------------------------*/
		SENT2STAT = 0x00000000u;
		#ifdef DEF_BITNAME
			SENT2STATbits.SYNCTXEN = 0u;
			SENT2STATbits.RXIDLE = 0u;
			SENT2STATbits.FRMERR = 0u;
			SENT2STATbits.CRCERR = 0u;
			SENT2STATbits.NIB = 0u;
			SENT2STATbits.PAUSE = 0u;
			SENT2STATbits.SYNC = 0u;
			SENT2STATbits.NIB0 = 0u;
			SENT2STATbits.NIB1 = 0u;
			SENT2STATbits.NIB2 = 0u;
			SENT2STATbits.TXEN = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* SENT2SYNCレジスタ */
	/*-----------------------------------------------------------------------*/
		SENT2SYNC = 0x00000000u;
		#ifdef DEF_BITNAME
			SENT2SYNCbits.SENTSYNC = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* SENT2DATレジスタ */
	/*-----------------------------------------------------------------------*/
		SENT2DAT = 0x00000000u;
		#ifdef DEF_BITNAME
			SENT2DATbits.CRC = 0u;
			SENT2DATbits.DATA6 = 0u;
			SENT2DATbits.DATA5 = 0u;
			SENT2DATbits.DATA4 = 0u;
			SENT2DATbits.DATA3 = 0u;
			SENT2DATbits.DATA2 = 0u;
			SENT2DATbits.DATA1 = 0u;
			SENT2DATbits.STAT = 0u;
		#endif 
#endif
}
/*----------------------------------------------------------------------------*/
/*
* @fn        vdg_SENT_Set_Register(void) 
* @brief        SENT1,2のレジスタを初期化します
* @param
* @return
* @detail 
*/
/*----------------------------------------------------------------------------*/
void vdg_SENT_Set_Register(void)
{
#if ( PMD_SENT1MD == PMD_MODULE_ENABLE ) 	
    vdg_SENT1_Set_Register();
#endif
#if ( PMD_SENT2MD == PMD_MODULE_ENABLE ) 	
    vdg_SENT2_Set_Register();
#endif
}