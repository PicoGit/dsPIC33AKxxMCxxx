/*----------------------------------------------------------------------------*/
/**
* @file		SPI_Driver.c
* @brief	SPIモジュールに関するドライバ関数
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
* @fn        vdg_SPI1_Set_Register(void)
* @brief        SPI1のレジスタを初期化します
* @param
* @return
* @detail 
*/
/*----------------------------------------------------------------------------*/
void vdg_SPI1_Set_Register(void)
{
#if ( PMD_SPI1MD == PMD_MODULE_ENABLE ) 
	/*-----------------------------------------------------------------------*/
	/* SPI1CON1レジスタ */
	/*-----------------------------------------------------------------------*/
		SPI1CON1 = 0x00000000u;
		#ifdef DEF_BITNAME
			SPI1CON1bits.ENHBUF = 0u;
			SPI1CON1bits.SPIFE = 0u;
			SPI1CON1bits.MCLKEN = 0u;
			SPI1CON1bits.DISSCK = 0u;
			SPI1CON1bits.DISSDI = 0u;
			SPI1CON1bits.MSTEN = 0u;
			SPI1CON1bits.CKP = 0u;
			SPI1CON1bits.SSEN = 0u;
			SPI1CON1bits.CKE = 0u;
			SPI1CON1bits.SMP = 0u;
			SPI1CON1bits.MODE16 = 0u;
			SPI1CON1bits.MODE32 = 0u;
			SPI1CON1bits.DISSDO = 0u;
			SPI1CON1bits.SIDL = 0u;
			SPI1CON1bits.ON = 0u;
			SPI1CON1bits.FRMCNT = 0u;
			SPI1CON1bits.FRMSYPW = 0u;
			SPI1CON1bits.MSSEN = 0u;
			SPI1CON1bits.FRMPOL = 0u;
			SPI1CON1bits.FRMSYNC = 0u;
			SPI1CON1bits.FRMEN = 0u;
			SPI1CON1bits.AUDMOD = 0u;
			SPI1CON1bits.URDTEN = 0u;
			SPI1CON1bits.AUDMONO = 0u;
			SPI1CON1bits.IGNTUR = 0u;
			SPI1CON1bits.IGNROV = 0u;
			SPI1CON1bits.SPISGNEXT = 0u;
			SPI1CON1bits.AUDEN = 0u;
			SPI1CON1bits.MODE = 0u;
			SPI1CON1bits.SPISIDL = 0u;
			SPI1CON1bits.SPIEN = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* SPI1CON2レジスタ */
	/*-----------------------------------------------------------------------*/
		SPI1CON2 = 0x00000000u;
		#ifdef DEF_BITNAME
			SPI1CON2bits.WLENGTH = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* SPI1STATレジスタ */
	/*-----------------------------------------------------------------------*/
		SPI1STAT = 0x00000000u;
		#ifdef DEF_BITNAME
			SPI1STATbits.SPIRBF = 0u;
			SPI1STATbits.SPITBF = 0u;
			SPI1STATbits.SPITBE = 0u;
			SPI1STATbits.SPIRBE = 0u;
			SPI1STATbits.SPIROV = 0u;
			SPI1STATbits.SRMT = 0u;
			SPI1STATbits.SPITUR = 0u;
			SPI1STATbits.SPIBUSY = 0u;
			SPI1STATbits.FRMERR = 0u;
			SPI1STATbits.TXELM = 0u;
			SPI1STATbits.RXELM = 0u;
			SPI1STATbits.TXELM0 = 0u;
			SPI1STATbits.TXELM1 = 0u;
			SPI1STATbits.TXELM2 = 0u;
			SPI1STATbits.TXELM3 = 0u;
			SPI1STATbits.TXELM4 = 0u;
			SPI1STATbits.TXELM5 = 0u;
			SPI1STATbits.RXELM0 = 0u;
			SPI1STATbits.RXELM1 = 0u;
			SPI1STATbits.RXELM2 = 0u;
			SPI1STATbits.RXELM3 = 0u;
			SPI1STATbits.RXELM4 = 0u;
			SPI1STATbits.RXELM5 = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* SPI1BUFレジスタ */
	/*-----------------------------------------------------------------------*/
		SPI1BUF = 0x00000000u;
		#ifdef DEF_BITNAME
			SPI1BUFbits.SPI1BUF = 0u;
			SPI1BUFbits.DATA = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* SPI1BRGレジスタ */
	/*-----------------------------------------------------------------------*/
		SPI1BRG = 0x00000000u;
		#ifdef DEF_BITNAME
			SPI1BRGbits.SPI1BRG = 0u;
			SPI1BRGbits.BRG = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* SPI1IMSKレジスタ */
	/*-----------------------------------------------------------------------*/
		SPI1IMSK = 0x00000000u;
		#ifdef DEF_BITNAME
			SPI1IMSKbits.SPIRBFEN = 0u;
			SPI1IMSKbits.SPITBFEN = 0u;
			SPI1IMSKbits.SPITBEN = 0u;
			SPI1IMSKbits.SPIRBEN = 0u;
			SPI1IMSKbits.SPIROVEN = 0u;
			SPI1IMSKbits.SRMTEN = 0u;
			SPI1IMSKbits.SPITUREN = 0u;
			SPI1IMSKbits.BUSYEN = 0u;
			SPI1IMSKbits.FRMERREN = 0u;
			SPI1IMSKbits.TXMSK = 0u;
			SPI1IMSKbits.TXWIEN = 0u;
			SPI1IMSKbits.RXMSK = 0u;
			SPI1IMSKbits.RXWIEN = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* SPI1URDTレジスタ */
	/*-----------------------------------------------------------------------*/
		SPI1URDT = 0x00000000u;
		#ifdef DEF_BITNAME
			SPI1URDTbits.SPI1URDT = 0u;
			SPI1URDTbits.URDATA = 0u;
		#endif 
#endif
}
/*----------------------------------------------------------------------------*/
/*
* @fn        vdg_SPI2_Set_Register(void)
* @brief        SPI2のレジスタを初期化します
* @param
* @return
* @detail 
*/
/*----------------------------------------------------------------------------*/
void vdg_SPI2_Set_Register(void)
{
#if ( PMD_SPI2MD == PMD_MODULE_ENABLE ) 
	/*-----------------------------------------------------------------------*/
	/* SPI2CON1レジスタ */
	/*-----------------------------------------------------------------------*/
		SPI2CON1 = 0x00000000u;
		#ifdef DEF_BITNAME
			SPI2CON1bits.ENHBUF = 0u;
			SPI2CON1bits.SPIFE = 0u;
			SPI2CON1bits.MCLKEN = 0u;
			SPI2CON1bits.DISSCK = 0u;
			SPI2CON1bits.DISSDI = 0u;
			SPI2CON1bits.MSTEN = 0u;
			SPI2CON1bits.CKP = 0u;
			SPI2CON1bits.SSEN = 0u;
			SPI2CON1bits.CKE = 0u;
			SPI2CON1bits.SMP = 0u;
			SPI2CON1bits.MODE16 = 0u;
			SPI2CON1bits.MODE32 = 0u;
			SPI2CON1bits.DISSDO = 0u;
			SPI2CON1bits.SIDL = 0u;
			SPI2CON1bits.ON = 0u;
			SPI2CON1bits.FRMCNT = 0u;
			SPI2CON1bits.FRMSYPW = 0u;
			SPI2CON1bits.MSSEN = 0u;
			SPI2CON1bits.FRMPOL = 0u;
			SPI2CON1bits.FRMSYNC = 0u;
			SPI2CON1bits.FRMEN = 0u;
			SPI2CON1bits.AUDMOD = 0u;
			SPI2CON1bits.URDTEN = 0u;
			SPI2CON1bits.AUDMONO = 0u;
			SPI2CON1bits.IGNTUR = 0u;
			SPI2CON1bits.IGNROV = 0u;
			SPI2CON1bits.SPISGNEXT = 0u;
			SPI2CON1bits.AUDEN = 0u;
			SPI2CON1bits.MODE = 0u;
			SPI2CON1bits.SPISIDL = 0u;
			SPI2CON1bits.SPIEN = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* SPI2CON2レジスタ */
	/*-----------------------------------------------------------------------*/
		SPI2CON2 = 0x00000000u;
		#ifdef DEF_BITNAME
			SPI2CON2bits.WLENGTH = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* SPI2STATレジスタ */
	/*-----------------------------------------------------------------------*/
		SPI2STAT = 0x00000000u;
		#ifdef DEF_BITNAME
			SPI2STATbits.SPIRBF = 0u;
			SPI2STATbits.SPITBF = 0u;
			SPI2STATbits.SPITBE = 0u;
			SPI2STATbits.SPIRBE = 0u;
			SPI2STATbits.SPIROV = 0u;
			SPI2STATbits.SRMT = 0u;
			SPI2STATbits.SPITUR = 0u;
			SPI2STATbits.SPIBUSY = 0u;
			SPI2STATbits.FRMERR = 0u;
			SPI2STATbits.TXELM = 0u;
			SPI2STATbits.RXELM = 0u;
			SPI2STATbits.TXELM0 = 0u;
			SPI2STATbits.TXELM1 = 0u;
			SPI2STATbits.TXELM2 = 0u;
			SPI2STATbits.TXELM3 = 0u;
			SPI2STATbits.TXELM4 = 0u;
			SPI2STATbits.TXELM5 = 0u;
			SPI2STATbits.RXELM0 = 0u;
			SPI2STATbits.RXELM1 = 0u;
			SPI2STATbits.RXELM2 = 0u;
			SPI2STATbits.RXELM3 = 0u;
			SPI2STATbits.RXELM4 = 0u;
			SPI2STATbits.RXELM5 = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* SPI2BUFレジスタ */
	/*-----------------------------------------------------------------------*/
		SPI2BUF = 0x00000000u;
		#ifdef DEF_BITNAME
			SPI2BUFbits.SPI2BUF = 0u;
			SPI2BUFbits.DATA = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* SPI2BRGレジスタ */
	/*-----------------------------------------------------------------------*/
		SPI2BRG = 0x00000000u;
		#ifdef DEF_BITNAME
			SPI2BRGbits.SPI2BRG = 0u;
			SPI2BRGbits.BRG = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* SPI2IMSKレジスタ */
	/*-----------------------------------------------------------------------*/
		SPI2IMSK = 0x00000000u;
		#ifdef DEF_BITNAME
			SPI2IMSKbits.SPIRBFEN = 0u;
			SPI2IMSKbits.SPITBFEN = 0u;
			SPI2IMSKbits.SPITBEN = 0u;
			SPI2IMSKbits.SPIRBEN = 0u;
			SPI2IMSKbits.SPIROVEN = 0u;
			SPI2IMSKbits.SRMTEN = 0u;
			SPI2IMSKbits.SPITUREN = 0u;
			SPI2IMSKbits.BUSYEN = 0u;
			SPI2IMSKbits.FRMERREN = 0u;
			SPI2IMSKbits.TXMSK = 0u;
			SPI2IMSKbits.TXWIEN = 0u;
			SPI2IMSKbits.RXMSK = 0u;
			SPI2IMSKbits.RXWIEN = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* SPI2URDTレジスタ */
	/*-----------------------------------------------------------------------*/
		SPI2URDT = 0x00000000u;
		#ifdef DEF_BITNAME
			SPI2URDTbits.SPI2URDT = 0u;
			SPI2URDTbits.URDATA = 0u;
		#endif 	
#endif
}
/*----------------------------------------------------------------------------*/
/*
* @fn        vdg_SPI3_Set_Register(void)
* @brief        SPI3のレジスタを初期化します
* @param
* @return
* @detail 
*/
/*----------------------------------------------------------------------------*/
void vdg_SPI3_Set_Register(void)
{
#if ( PMD_SPI3MD == PMD_MODULE_ENABLE ) 
	/*-----------------------------------------------------------------------*/
	/* SPI3CON1レジスタ */
	/*-----------------------------------------------------------------------*/
		SPI3CON1 = 0x00000000u;
		#ifdef DEF_BITNAME
			SPI3CON1bits.ENHBUF = 0u;
			SPI3CON1bits.SPIFE = 0u;
			SPI3CON1bits.MCLKEN = 0u;
			SPI3CON1bits.DISSCK = 0u;
			SPI3CON1bits.DISSDI = 0u;
			SPI3CON1bits.MSTEN = 0u;
			SPI3CON1bits.CKP = 0u;
			SPI3CON1bits.SSEN = 0u;
			SPI3CON1bits.CKE = 0u;
			SPI3CON1bits.SMP = 0u;
			SPI3CON1bits.MODE16 = 0u;
			SPI3CON1bits.MODE32 = 0u;
			SPI3CON1bits.DISSDO = 0u;
			SPI3CON1bits.SIDL = 0u;
			SPI3CON1bits.ON = 0u;
			SPI3CON1bits.FRMCNT = 0u;
			SPI3CON1bits.FRMSYPW = 0u;
			SPI3CON1bits.MSSEN = 0u;
			SPI3CON1bits.FRMPOL = 0u;
			SPI3CON1bits.FRMSYNC = 0u;
			SPI3CON1bits.FRMEN = 0u;
			SPI3CON1bits.AUDMOD = 0u;
			SPI3CON1bits.URDTEN = 0u;
			SPI3CON1bits.AUDMONO = 0u;
			SPI3CON1bits.IGNTUR = 0u;
			SPI3CON1bits.IGNROV = 0u;
			SPI3CON1bits.SPISGNEXT = 0u;
			SPI3CON1bits.AUDEN = 0u;
			SPI3CON1bits.MODE = 0u;
			SPI3CON1bits.SPISIDL = 0u;
			SPI3CON1bits.SPIEN = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* SPI3CON2レジスタ */
	/*-----------------------------------------------------------------------*/
		SPI3CON2 = 0x00000000u;
		#ifdef DEF_BITNAME
			SPI3CON2bits.WLENGTH = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* SPI3STATレジスタ */
	/*-----------------------------------------------------------------------*/
		SPI3STAT = 0x00000000u;
		#ifdef DEF_BITNAME
			SPI3STATbits.SPIRBF = 0u;
			SPI3STATbits.SPITBF = 0u;
			SPI3STATbits.SPITBE = 0u;
			SPI3STATbits.SPIRBE = 0u;
			SPI3STATbits.SPIROV = 0u;
			SPI3STATbits.SRMT = 0u;
			SPI3STATbits.SPITUR = 0u;
			SPI3STATbits.SPIBUSY = 0u;
			SPI3STATbits.FRMERR = 0u;
			SPI3STATbits.TXELM = 0u;
			SPI3STATbits.RXELM = 0u;
			SPI3STATbits.TXELM0 = 0u;
			SPI3STATbits.TXELM1 = 0u;
			SPI3STATbits.TXELM2 = 0u;
			SPI3STATbits.TXELM3 = 0u;
			SPI3STATbits.TXELM4 = 0u;
			SPI3STATbits.TXELM5 = 0u;
			SPI3STATbits.RXELM0 = 0u;
			SPI3STATbits.RXELM1 = 0u;
			SPI3STATbits.RXELM2 = 0u;
			SPI3STATbits.RXELM3 = 0u;
			SPI3STATbits.RXELM4 = 0u;
			SPI3STATbits.RXELM5 = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* SPI3BUFレジスタ */
	/*-----------------------------------------------------------------------*/
		SPI3BUF = 0x00000000u;
		#ifdef DEF_BITNAME
			SPI3BUFbits.SPI3BUF = 0u;
			SPI3BUFbits.DATA = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* SPI3BRGレジスタ */
	/*-----------------------------------------------------------------------*/
		SPI3BRG = 0x00000000u;
		#ifdef DEF_BITNAME
			SPI3BRGbits.SPI3BRG = 0u;
			SPI3BRGbits.BRG = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* SPI3IMSKレジスタ */
	/*-----------------------------------------------------------------------*/
		SPI3IMSK = 0x00000000u;
		#ifdef DEF_BITNAME
			SPI3IMSKbits.SPIRBFEN = 0u;
			SPI3IMSKbits.SPITBFEN = 0u;
			SPI3IMSKbits.SPITBEN = 0u;
			SPI3IMSKbits.SPIRBEN = 0u;
			SPI3IMSKbits.SPIROVEN = 0u;
			SPI3IMSKbits.SRMTEN = 0u;
			SPI3IMSKbits.SPITUREN = 0u;
			SPI3IMSKbits.BUSYEN = 0u;
			SPI3IMSKbits.FRMERREN = 0u;
			SPI3IMSKbits.TXMSK = 0u;
			SPI3IMSKbits.TXWIEN = 0u;
			SPI3IMSKbits.RXMSK = 0u;
			SPI3IMSKbits.RXWIEN = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* SPI3URDTレジスタ */
	/*-----------------------------------------------------------------------*/
		SPI3URDT = 0x00000000u;
		#ifdef DEF_BITNAME
			SPI3URDTbits.SPI3URDT = 0u;
			SPI3URDTbits.URDATA = 0u;
		#endif 
#endif
}
/*----------------------------------------------------------------------------*/
/*
* @fn			vdg_SPI_Set_Register(void)
* @brief        SPIレジスタを初期化します
* @param
* @return
* @detail 
*/
/*----------------------------------------------------------------------------*/
void vdg_SPI_Set_Register(void)
{
#if ( PMD_SPI1MD == PMD_MODULE_ENABLE ) 
    vdg_SPI1_Set_Register();
#endif
#if ( PMD_SPI2MD == PMD_MODULE_ENABLE ) 
    vdg_SPI2_Set_Register();
#endif
#if ( PMD_SPI3MD == PMD_MODULE_ENABLE ) 
    vdg_SPI3_Set_Register();
#endif
}