/*----------------------------------------------------------------------------*/
/**
* @file		CMP_DAC_Driver.c
* @brief	コンパレータとDACモジュールに関するドライバ関数
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
#include "cmp_dac_driver.h"
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
* @fn        vdg_CMP_DACCOM_Set_Register(void)
* @brief        CMP_DACの共通レジスタを初期化します
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void vdg_CMP_DACCOM_Set_Register(void)
{		
#if (( PMD_CM1MD == PMD_MODULE_ENABLE ) || ( PMD_CM2MD == PMD_MODULE_ENABLE ) || ( PMD_CM3MD == PMD_MODULE_ENABLE )|| ( PMD_CM4MD == PMD_MODULE_ENABLE ))
	/*-----------------------------------------------------------------------*/
	/* DACCTRL1レジスタ */
	/*-----------------------------------------------------------------------*/
		DACCTRL1 = 0x00000000u;
		#ifdef DEF_BITNAME
			DACCTRL1bits.FCLKDIV = 0u;
			DACCTRL1bits.DNLADJ = 0u;
			DACCTRL1bits.SIDL = 0u;
			DACCTRL1bits.ON = 0u;
			DACCTRL1bits.NEGINLADJ = 0u;
			DACCTRL1bits.POSINLADJ = 0u;
			DACCTRL1bits.RREN = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* DACCTRL2レジスタ */
	/*-----------------------------------------------------------------------*/
		DACCTRL2 = 0x00000000u;
		#ifdef DEF_BITNAME
			DACCTRL2bits.TMODTIME = 0u;
			DACCTRL2bits.SSTIME = 0u;
		#endif 
#endif
}
/*----------------------------------------------------------------------------*/
/*
* @fn        vdg_CMP_DAC1_Set_Register(void)
* @brief        CMP_DAC1レジスタを初期化します
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void vdg_CMP_DAC1_Set_Register(void)
{
#if ( PMD_CM1MD == PMD_MODULE_ENABLE )
    /*-----------------------------------------------------------------------*/
	/* DAC1CONレジスタ */
	/*-----------------------------------------------------------------------*/
		DAC1CON = 0x00000000u;
		#ifdef DEF_BITNAME
			DAC1CONbits.HYSSEL = 0u;
			DAC1CONbits.HYSPOL = 0u;
			DAC1CONbits.INSEL = 0u;
			DAC1CONbits.CMPPOL = 0u;
			DAC1CONbits.CMPSTAT = 0u;
			DAC1CONbits.FLTREN = 0u;
			DAC1CONbits.DACOEN = 0u;
			DAC1CONbits.CBE = 0u;
			DAC1CONbits.UPDTMDIS = 0u;
			DAC1CONbits.EXTUPD = 0u;
			DAC1CONbits.IRQM = 0u;
			DAC1CONbits.DACEN = 0u;
			DAC1CONbits.TMCB = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* DAC1DATレジスタ */
	/*-----------------------------------------------------------------------*/
		DAC1DAT = 0x00000000u;
		#ifdef DEF_BITNAME
			DAC1DATbits.DACLOW = 0u;
			DAC1DATbits.DACDAT = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* DAC1SLPCONレジスタ */
	/*-----------------------------------------------------------------------*/
		DAC1SLPCON = 0x00000000u;
		#ifdef DEF_BITNAME
			DAC1SLPCONbits.SLPSTRT = 0u;
			DAC1SLPCONbits.SLPSTOPB = 0u;
			DAC1SLPCONbits.SLPSTOPA = 0u;
			DAC1SLPCONbits.HCFSEL = 0u;
			DAC1SLPCONbits.FFSEN = 0u;
			DAC1SLPCONbits.PSE = 0u;
			DAC1SLPCONbits.TWME = 0u;
			DAC1SLPCONbits.HME = 0u;
			DAC1SLPCONbits.SLOPEN = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* SLP1CONレジスタ */
	/*-----------------------------------------------------------------------*/
		SLP1CON = 0x00000000u;
		#ifdef DEF_BITNAME
			SLP1CONbits.SLPSTRT = 0u;
			SLP1CONbits.SLPSTOPB = 0u;
			SLP1CONbits.SLPSTOPA = 0u;
			SLP1CONbits.HCFSEL = 0u;
			SLP1CONbits.FFSEN = 0u;
			SLP1CONbits.PSE = 0u;
			SLP1CONbits.TWME = 0u;
			SLP1CONbits.HME = 0u;
			SLP1CONbits.SLOPEN = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* DAC1SLPDATレジスタ */
	/*-----------------------------------------------------------------------*/
		DAC1SLPDAT = 0x00000000u;
		#ifdef DEF_BITNAME
			DAC1SLPDATbits.SLPDAT = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* SLP1DATレジスタ */
	/*-----------------------------------------------------------------------*/
		SLP1DAT = 0x00000000u;
		#ifdef DEF_BITNAME
			SLP1DATbits.SLPDAT = 0u;
		#endif 
#endif
}
/*----------------------------------------------------------------------------*/
/*
* @fn			vdg_CMP_DAC2_Set_Register(void)
* @brief        CMP_DAC2レジスタを初期化します 
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void vdg_CMP_DAC2_Set_Register(void)
{
#if ( PMD_CM2MD == PMD_MODULE_ENABLE )	
    /*-----------------------------------------------------------------------*/
	/* DAC2CONレジスタ */
	/*-----------------------------------------------------------------------*/
		DAC2CON = 0x00000000u;
		#ifdef DEF_BITNAME
			DAC2CONbits.HYSSEL = 0u;
			DAC2CONbits.HYSPOL = 0u;
			DAC2CONbits.INSEL = 0u;
			DAC2CONbits.CMPPOL = 0u;
			DAC2CONbits.CMPSTAT = 0u;
			DAC2CONbits.FLTREN = 0u;
			DAC2CONbits.DACOEN = 0u;
			DAC2CONbits.CBE = 0u;
			DAC2CONbits.UPDTMDIS = 0u;
			DAC2CONbits.EXTUPD = 0u;
			DAC2CONbits.IRQM = 0u;
			DAC2CONbits.DACEN = 0u;
			DAC2CONbits.TMCB = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* DAC2DATレジスタ */
	/*-----------------------------------------------------------------------*/
		DAC2DAT = 0x00000000u;
		#ifdef DEF_BITNAME
			DAC2DATbits.DACLOW = 0u;
			DAC2DATbits.DACDAT = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* DAC2SLPCONレジスタ */
	/*-----------------------------------------------------------------------*/
		DAC2SLPCON = 0x00000000u;
		#ifdef DEF_BITNAME
			DAC2SLPCONbits.SLPSTRT = 0u;
			DAC2SLPCONbits.SLPSTOPB = 0u;
			DAC2SLPCONbits.SLPSTOPA = 0u;
			DAC2SLPCONbits.HCFSEL = 0u;
			DAC2SLPCONbits.FFSEN = 0u;
			DAC2SLPCONbits.PSE = 0u;
			DAC2SLPCONbits.TWME = 0u;
			DAC2SLPCONbits.HME = 0u;
			DAC2SLPCONbits.SLOPEN = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* SLP2CONレジスタ */
	/*-----------------------------------------------------------------------*/
		SLP2CON = 0x00000000u;
		#ifdef DEF_BITNAME
			SLP2CONbits.SLPSTRT = 0u;
			SLP2CONbits.SLPSTOPB = 0u;
			SLP2CONbits.SLPSTOPA = 0u;
			SLP2CONbits.HCFSEL = 0u;
			SLP2CONbits.FFSEN = 0u;
			SLP2CONbits.PSE = 0u;
			SLP2CONbits.TWME = 0u;
			SLP2CONbits.HME = 0u;
			SLP2CONbits.SLOPEN = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* DAC2SLPDATレジスタ */
	/*-----------------------------------------------------------------------*/
		DAC2SLPDAT = 0x00000000u;
		#ifdef DEF_BITNAME
			DAC2SLPDATbits.SLPDAT = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* SLP2DATレジスタ */
	/*-----------------------------------------------------------------------*/
		SLP2DAT = 0x00000000u;
		#ifdef DEF_BITNAME
			SLP2DATbits.SLPDAT = 0u;
		#endif 
#endif
}
/*----------------------------------------------------------------------------*/
/*
* @fn			vdg_CMP_DAC3_Set_Register(void)
* @brief        CMP_DAC3レジスタを初期化します
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void vdg_CMP_DAC3_Set_Register(void)
{
#if ( PMD_CM3MD == PMD_MODULE_ENABLE )
	/*-----------------------------------------------------------------------*/
	/* DAC3CONレジスタ */
	/*-----------------------------------------------------------------------*/
		DAC3CON = 0x00000000u;
		#ifdef DEF_BITNAME
			DAC3CONbits.HYSSEL = 0u;
			DAC3CONbits.HYSPOL = 0u;
			DAC3CONbits.INSEL = 0u;
			DAC3CONbits.CMPPOL = 0u;
			DAC3CONbits.CMPSTAT = 0u;
			DAC3CONbits.FLTREN = 0u;
			DAC3CONbits.DACOEN = 0u;
			DAC3CONbits.CBE = 0u;
			DAC3CONbits.UPDTMDIS = 0u;
			DAC3CONbits.EXTUPD = 0u;
			DAC3CONbits.IRQM = 0u;
			DAC3CONbits.DACEN = 0u;
			DAC3CONbits.TMCB = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* DAC3DATレジスタ */
	/*-----------------------------------------------------------------------*/
		DAC3DAT = 0x00000000u;
		#ifdef DEF_BITNAME
			DAC3DATbits.DACLOW = 0u;
			DAC3DATbits.DACDAT = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* DAC3SLPCONレジスタ */
	/*-----------------------------------------------------------------------*/
		DAC3SLPCON = 0x00000000u;
		#ifdef DEF_BITNAME
			DAC3SLPCONbits.SLPSTRT = 0u;
			DAC3SLPCONbits.SLPSTOPB = 0u;
			DAC3SLPCONbits.SLPSTOPA = 0u;
			DAC3SLPCONbits.HCFSEL = 0u;
			DAC3SLPCONbits.FFSEN = 0u;
			DAC3SLPCONbits.PSE = 0u;
			DAC3SLPCONbits.TWME = 0u;
			DAC3SLPCONbits.HME = 0u;
			DAC3SLPCONbits.SLOPEN = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* SLP3CONレジスタ */
	/*-----------------------------------------------------------------------*/
		SLP3CON = 0x00000000u;
		#ifdef DEF_BITNAME
			SLP3CONbits.SLPSTRT = 0u;
			SLP3CONbits.SLPSTOPB = 0u;
			SLP3CONbits.SLPSTOPA = 0u;
			SLP3CONbits.HCFSEL = 0u;
			SLP3CONbits.FFSEN = 0u;
			SLP3CONbits.PSE = 0u;
			SLP3CONbits.TWME = 0u;
			SLP3CONbits.HME = 0u;
			SLP3CONbits.SLOPEN = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* DAC3SLPDATレジスタ */
	/*-----------------------------------------------------------------------*/
		DAC3SLPDAT = 0x00000000u;
		#ifdef DEF_BITNAME
			DAC3SLPDATbits.SLPDAT = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* SLP3DATレジスタ */
	/*-----------------------------------------------------------------------*/
		SLP3DAT = 0x00000000u;
		#ifdef DEF_BITNAME
			SLP3DATbits.SLPDAT = 0u;
		#endif 
#endif
}
/*----------------------------------------------------------------------------*/
/*
* @fn        vdg_CMP_DAC_Set_Register(void)
* @brief     全てのCMP_DACレジスタを初期化します
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void vdg_CMP_DAC_Set_Register(void)
{
#if (( PMD_CMP1MD == PMD_MODULE_ENABLE ) || ( PMD_CMP2MD == PMD_MODULE_ENABLE ) || ( PMD_CMP3MD == PMD_MODULE_ENABLE ))
    vdg_CMP_DACCOM_Set_Register();
#endif
#if ( PMD_CMP1MD == PMD_MODULE_ENABLE )
    vdg_CMP_DAC1_Set_Register();
#endif
#if ( PMD_CMP1MD == PMD_MODULE_ENABLE )
    vdg_CMP_DAC2_Set_Register();
#endif
#if ( PMD_CMP1MD == PMD_MODULE_ENABLE )
    vdg_CMP_DAC3_Set_Register();
#endif
}