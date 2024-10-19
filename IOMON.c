/*----------------------------------------------------------------------------*/
/**
* @file		IOMON_Driver.c
* @brief	I/O Monitorに関するドライバ関数
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
#include "iomon_driver.h"
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
* @fn        vdg_IOIM1_Set_Register(void)
* @brief        IOIM1レジスタを初期化します
* @param
* @return
* @detail 
*/
/*----------------------------------------------------------------------------*/
void vdg_IOIM1_Set_Register(void)
{		
#if ( PMD_IOIM1MD == PMD_MODULE_ENABLE )
	/*-----------------------------------------------------------------------*/
	/* IOIM1CONレジスタ */
	/*-----------------------------------------------------------------------*/
		IOIM1CON = 0x00000000u;
		#ifdef DEF_BITNAME
			IOIM1CONbits.REFSEL = 0u;
			IOIM1CONbits.FBKSEL = 0u;
			IOIM1CONbits.EXTCLK = 0u;
			IOIM1CONbits.LOCK = 0u;
			IOIM1CONbits.SIDL = 0u;
			IOIM1CONbits.SLPEN = 0u;
			IOIM1CONbits.ON = 0u;
			IOIM1CONbits.EOVFVAL = 0u;
			IOIM1CONbits.TESTEN = 0u;
			IOIM1CONbits.OKINJ = 0u;
			IOIM1CONbits.FLTINJ = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* IOIM1BCONレジスタ */
	/*-----------------------------------------------------------------------*/
		IOIM1BCON = 0x00000000u;
		#ifdef DEF_BITNAME
			IOIM1BCONbits.BLANK = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* IOIM1STATレジスタ */
	/*-----------------------------------------------------------------------*/
		IOIM1STAT = 0x00000000u;
		#ifdef DEF_BITNAME
			IOIM1STATbits.OK = 0u;
			IOIM1STATbits.ERR = 0u;
			IOIM1STATbits.OVF = 0u;
			IOIM1STATbits.RREDGE = 0u;
			IOIM1STATbits.RFEDGE = 0u;
			IOIM1STATbits.FREDGE = 0u;
			IOIM1STATbits.FFEDGE = 0u;
			IOIM1STATbits.ERRCNT = 0u;
		#endif 
#endif
}
/*----------------------------------------------------------------------------*/
/*
* @fn        vdg_IOIM2_Set_Register(void)
* @brief     IOIM2レジスタを初期化します
* @param
* @return
* @detail 
*/
/*----------------------------------------------------------------------------*/
void vdg_IOIM2_Set_Register(void)
{		
#if ( PMD_IOIM2MD == PMD_MODULE_ENABLE )
	/*-----------------------------------------------------------------------*/
	/* IOIM2CONレジスタ */
	/*-----------------------------------------------------------------------*/
		IOIM2CON = 0x00000000u;
		#ifdef DEF_BITNAME
			IOIM2CONbits.REFSEL = 0u;
			IOIM2CONbits.FBKSEL = 0u;
			IOIM2CONbits.EXTCLK = 0u;
			IOIM2CONbits.LOCK = 0u;
			IOIM2CONbits.SIDL = 0u;
			IOIM2CONbits.SLPEN = 0u;
			IOIM2CONbits.ON = 0u;
			IOIM2CONbits.EOVFVAL = 0u;
			IOIM2CONbits.TESTEN = 0u;
			IOIM2CONbits.OKINJ = 0u;
			IOIM2CONbits.FLTINJ = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* IOIM2BCONレジスタ */
	/*-----------------------------------------------------------------------*/
		IOIM2BCON = 0x00000000u;
		#ifdef DEF_BITNAME
			IOIM2BCONbits.BLANK = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* IOIM2STATレジスタ */
	/*-----------------------------------------------------------------------*/
		IOIM2STAT = 0x00000000u;
		#ifdef DEF_BITNAME
			IOIM2STATbits.OK = 0u;
			IOIM2STATbits.ERR = 0u;
			IOIM2STATbits.OVF = 0u;
			IOIM2STATbits.RREDGE = 0u;
			IOIM2STATbits.RFEDGE = 0u;
			IOIM2STATbits.FREDGE = 0u;
			IOIM2STATbits.FFEDGE = 0u;
			IOIM2STATbits.ERRCNT = 0u;
		#endif 
#endif
}
/*----------------------------------------------------------------------------*/
/*
* @fn        vdg_IOIM3_Set_Register(void) 
* @brief     IOIM3レジスタを初期化します 
* @param
* @return
* @detail 
*/
/*----------------------------------------------------------------------------*/
void vdg_IOIM3_Set_Register(void)
{		
#if ( PMD_IOIM3MD == PMD_MODULE_ENABLE )
	/*-----------------------------------------------------------------------*/
	/* IOIM3CONレジスタ */
	/*-----------------------------------------------------------------------*/
		IOIM3CON = 0x00000000u;
		#ifdef DEF_BITNAME
			IOIM3CONbits.REFSEL = 0u;
			IOIM3CONbits.FBKSEL = 0u;
			IOIM3CONbits.EXTCLK = 0u;
			IOIM3CONbits.LOCK = 0u;
			IOIM3CONbits.SIDL = 0u;
			IOIM3CONbits.SLPEN = 0u;
			IOIM3CONbits.ON = 0u;
			IOIM3CONbits.EOVFVAL = 0u;
			IOIM3CONbits.TESTEN = 0u;
			IOIM3CONbits.OKINJ = 0u;
			IOIM3CONbits.FLTINJ = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* IOIM3BCONレジスタ */
	/*-----------------------------------------------------------------------*/
		IOIM3BCON = 0x00000000u;
		#ifdef DEF_BITNAME
			IOIM3BCONbits.BLANK = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* IOIM3STATレジスタ */
	/*-----------------------------------------------------------------------*/
		IOIM3STAT = 0x00000000u;
		#ifdef DEF_BITNAME
			IOIM3STATbits.OK = 0u;
			IOIM3STATbits.ERR = 0u;
			IOIM3STATbits.OVF = 0u;
			IOIM3STATbits.RREDGE = 0u;
			IOIM3STATbits.RFEDGE = 0u;
			IOIM3STATbits.FREDGE = 0u;
			IOIM3STATbits.FFEDGE = 0u;
			IOIM3STATbits.ERRCNT = 0u;
		#endif 

#endif
}
/*----------------------------------------------------------------------------*/
/*
* @fn        vdg_IOIM4_Set_Register(void)
* @brief        IOIM4レジスタを初期化します
* @param
* @return
* @detail 
*/
/*----------------------------------------------------------------------------*/
void vdg_IOIM4_Set_Register(void)
{		
#if ( PMD_IOIM4MD == PMD_MODULE_ENABLE )
	/*-----------------------------------------------------------------------*/
	/* IOIM4CONレジスタ */
	/*-----------------------------------------------------------------------*/
		IOIM4CON = 0x00000000u;
		#ifdef DEF_BITNAME
			IOIM4CONbits.REFSEL = 0u;
			IOIM4CONbits.FBKSEL = 0u;
			IOIM4CONbits.EXTCLK = 0u;
			IOIM4CONbits.LOCK = 0u;
			IOIM4CONbits.SIDL = 0u;
			IOIM4CONbits.SLPEN = 0u;
			IOIM4CONbits.ON = 0u;
			IOIM4CONbits.EOVFVAL = 0u;
			IOIM4CONbits.TESTEN = 0u;
			IOIM4CONbits.OKINJ = 0u;
			IOIM4CONbits.FLTINJ = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* IOIM4BCONレジスタ */
	/*-----------------------------------------------------------------------*/
		IOIM4BCON = 0x00000000u;
		#ifdef DEF_BITNAME
			IOIM4BCONbits.BLANK = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* IOIM4STATレジスタ */
	/*-----------------------------------------------------------------------*/
		IOIM4STAT = 0x00000000u;
		#ifdef DEF_BITNAME
			IOIM4STATbits.OK = 0u;
			IOIM4STATbits.ERR = 0u;
			IOIM4STATbits.OVF = 0u;
			IOIM4STATbits.RREDGE = 0u;
			IOIM4STATbits.RFEDGE = 0u;
			IOIM4STATbits.FREDGE = 0u;
			IOIM4STATbits.FFEDGE = 0u;
			IOIM4STATbits.ERRCNT = 0u;
		#endif 
#endif
}
/*----------------------------------------------------------------------------*/
/*
* @fn        vdg_MIOMON_Set_Register(void)
* @brief     全てのIOMONレジスタを初期化します
* @param
* @return
* @detail 
*/
/*----------------------------------------------------------------------------*/
void vdg_IOMON_Set_Register(void)
{
#if ( PMD_IOIM1MD == PMD_MODULE_ENABLE )
    vdg_IOIM1_Set_Register();
#endif
#if ( PMD_IOIM2MD == PMD_MODULE_ENABLE )
    vdg_IOIM2_Set_Register();
#endif
#if ( PMD_IOIM3MD == PMD_MODULE_ENABLE )
    vdg_IOIM3_Set_Register();
#endif
#if ( PMD_IOIM4MD == PMD_MODULE_ENABLE )
    vdg_IOIM4_Set_Register();
#endif
}