/*----------------------------------------------------------------------------*/
/**
* @file		CLC_Driver.c
* @brief	CLCモジュールに関するドライバ関数
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
#include "clc_driver.h"
#include "clc_user.h"
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
* @fn        vdg_CLC1_Set_Register(void)
* @brief     CLC1レジスタを初期化します
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void vdg_CLC1_Set_Register(void)
{
#if ( PMD_CLC1MD == PMD_MODULE_ENABLE )
  
	/*-----------------------------------------------------------------------*/
	/* CLC1CONレジスタ */
	/*-----------------------------------------------------------------------*/
		CLC1CON =	( CLC1_USER_MODE << 0U ) |
					( CLC1_USER_LCOE << 7U ) |
					( CLC1_USER_INTN << 10U ) |
					( CLC1_USER_INTP << 11U ) |
					( CLC1_USER_G1POL << 16U ) |
					( CLC1_USER_G2POL << 17U ) |
					( CLC1_USER_G3POL << 18U ) |
					( CLC1_USER_G4POL << 19U ) ;
		#ifdef DEF_BITNAME
			CLC1CONbits.MODE = CLC1_USER_MODE;
			CLC1CONbits.LCPOL = 0u;
			CLC1CONbits.LCOUT = 0u;
			CLC1CONbits.LCOE = CLC1_USER_LCOE;
			CLC1CONbits.INTN = CLC1_USER_INTN;
			CLC1CONbits.INTP = CLC1_USER_INTP;
			CLC1CONbits.ON = 0u;
			CLC1CONbits.G1POL = CLC1_USER_G1POL;
			CLC1CONbits.G2POL = CLC1_USER_G2POL;
			CLC1CONbits.G3POL = CLC1_USER_G3POL;
			CLC1CONbits.G4POL = CLC1_USER_G4POL;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CLC1SELレジスタ */
	/*-----------------------------------------------------------------------*/
		CLC1SEL =	( CLC1_USER_SEL_DS1 << 0U ) |
					( CLC1_USER_SEL_DS2 << 4U ) |
					( CLC1_USER_SEL_DS3 << 8U ) |
					( CLC1_USER_SEL_DS4 << 12U ) ;
		#ifdef DEF_BITNAME
			CLC1SELbits.DS1 = CLC1_USER_SEL_DS1;
			CLC1SELbits.DS2 = CLC1_USER_SEL_DS2;
			CLC1SELbits.DS3 = CLC1_USER_SEL_DS3;
			CLC1SELbits.DS4 = CLC1_USER_SEL_DS4;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CLC1GLSレジスタ */
	/*-----------------------------------------------------------------------*/
		CLC1GLS =	( CLC1_USER_SEL_G1D1N << 0U ) |
					( CLC1_USER_SEL_G1D1T << 1U ) |
					( CLC1_USER_SEL_G1D2N << 2U ) |
					( CLC1_USER_SEL_G1D2T << 3U ) |
					( CLC1_USER_SEL_G1D3N << 4U ) |
					( CLC1_USER_SEL_G1D3T << 5U ) |
					( CLC1_USER_SEL_G1D4N << 6U ) |
					( CLC1_USER_SEL_G1D4T << 7U ) |
					( CLC1_USER_SEL_G2D1N << 8U ) |
					( CLC1_USER_SEL_G2D1T << 9U ) |
					( CLC1_USER_SEL_G2D2N << 10U ) |
					( CLC1_USER_SEL_G2D2T << 11U ) |
					( CLC1_USER_SEL_G2D3N << 12U ) |
					( CLC1_USER_SEL_G2D3T << 13U ) |
					( CLC1_USER_SEL_G2D4N << 14U ) |
					( CLC1_USER_SEL_G2D4T << 15U ) |
					( CLC1_USER_SEL_G3D1N << 16U ) |
					( CLC1_USER_SEL_G3D1T << 17U ) |
					( CLC1_USER_SEL_G3D2N << 18U ) |
					( CLC1_USER_SEL_G3D2T << 19U ) |
					( CLC1_USER_SEL_G3D3N << 20U ) |
					( CLC1_USER_SEL_G3D3T << 21U ) |
					( CLC1_USER_SEL_G3D4N << 22U ) |
					( CLC1_USER_SEL_G3D4T << 23U ) |
					( CLC1_USER_SEL_G4D1N << 24U ) |
					( CLC1_USER_SEL_G4D1T << 25U ) |
					( CLC1_USER_SEL_G4D2N << 26U ) |
					( CLC1_USER_SEL_G4D2T << 27U ) |
					( CLC1_USER_SEL_G4D3N << 28U ) |
					( CLC1_USER_SEL_G4D3T << 29U ) |
					( CLC1_USER_SEL_G4D4N << 30U ) |
					( CLC1_USER_SEL_G4D4T << 31U ) ;


		#ifdef DEF_BITNAME
			CLC1GLSbits.G1D1N = CLC1_USER_SEL_G1D1N;
			CLC1GLSbits.G1D1T = CLC1_USER_SEL_G1D1T;
			CLC1GLSbits.G1D2N = CLC1_USER_SEL_G1D2N;
			CLC1GLSbits.G1D2T = CLC1_USER_SEL_G1D2T;
			CLC1GLSbits.G1D3N = CLC1_USER_SEL_G1D3N;
			CLC1GLSbits.G1D3T = CLC1_USER_SEL_G1D3T;
			CLC1GLSbits.G1D4N = CLC1_USER_SEL_G1D4N;
			CLC1GLSbits.G1D4T = CLC1_USER_SEL_G1D4T;
			CLC1GLSbits.G2D1N = CLC1_USER_SEL_G2D1N;
			CLC1GLSbits.G2D1T = CLC1_USER_SEL_G2D1T;
			CLC1GLSbits.G2D2N = CLC1_USER_SEL_G2D2N;
			CLC1GLSbits.G2D2T = CLC1_USER_SEL_G2D2T;
			CLC1GLSbits.G2D3N = CLC1_USER_SEL_G2D3N;
			CLC1GLSbits.G2D3T = CLC1_USER_SEL_G2D3T;
			CLC1GLSbits.G2D4N = CLC1_USER_SEL_G2D4N;
			CLC1GLSbits.G2D4T = CLC1_USER_SEL_G2D4T;
			CLC1GLSbits.G3D1N = CLC1_USER_SEL_G3D1N;
			CLC1GLSbits.G3D1T = CLC1_USER_SEL_G3D1T;
			CLC1GLSbits.G3D2N = CLC1_USER_SEL_G3D2N;
			CLC1GLSbits.G3D2T = CLC1_USER_SEL_G3D2T;
			CLC1GLSbits.G3D3N = CLC1_USER_SEL_G3D3N;
			CLC1GLSbits.G3D3T = CLC1_USER_SEL_G3D3T;
			CLC1GLSbits.G3D4N = CLC1_USER_SEL_G3D4N;
			CLC1GLSbits.G3D4T = CLC1_USER_SEL_G3D4T;
			CLC1GLSbits.G4D1N = CLC1_USER_SEL_G4D1N;
			CLC1GLSbits.G4D1T = CLC1_USER_SEL_G4D1T;
			CLC1GLSbits.G4D2N = CLC1_USER_SEL_G4D2N;
			CLC1GLSbits.G4D2T = CLC1_USER_SEL_G4D2T;
			CLC1GLSbits.G4D3N = CLC1_USER_SEL_G4D3N;
			CLC1GLSbits.G4D3T = CLC1_USER_SEL_G4D3T;
			CLC1GLSbits.G4D4N = CLC1_USER_SEL_G4D4N;
			CLC1GLSbits.G4D4T = CLC1_USER_SEL_G4D4T;
		#endif					
			
		CLC1CONbits.ON = CLC1_USER_ON;
#endif 
}
/*----------------------------------------------------------------------------*/
/*
* @fn        vdg_CLC2_Set_Register(void)
* @brief     CLC2レジスタを初期化します
* @param
* @return
* @detail 
*/
/*----------------------------------------------------------------------------*/
void vdg_CLC2_Set_Register(void)
{
#if ( PMD_CLC2MD == PMD_MODULE_ENABLE )
	/*-----------------------------------------------------------------------*/
	/* CLC2CONレジスタ */
	/*-----------------------------------------------------------------------*/
		CLC2CON =	( CLC2_USER_MODE << 0U ) |
					( CLC2_USER_LCOE << 7U ) |
					( CLC2_USER_INTN << 10U ) |
					( CLC2_USER_INTP << 11U ) |
					( CLC2_USER_G1POL << 16U ) |
					( CLC2_USER_G2POL << 17U ) |
					( CLC2_USER_G3POL << 18U ) |
					( CLC2_USER_G4POL << 19U ) ;
		#ifdef DEF_BITNAME
			CLC2CONbits.MODE = CLC2_USER_MODE;
			CLC2CONbits.LCPOL = 0u;
			CLC2CONbits.LCOUT = 0u;
			CLC2CONbits.LCOE = CLC2_USER_LCOE;
			CLC2CONbits.INTN = CLC2_USER_INTN;
			CLC2CONbits.INTP = CLC2_USER_INTP;
			CLC2CONbits.ON = 0u;
			CLC2CONbits.G1POL = CLC2_USER_G1POL;
			CLC2CONbits.G2POL = CLC2_USER_G2POL;
			CLC2CONbits.G3POL = CLC2_USER_G3POL;
			CLC2CONbits.G4POL = CLC2_USER_G4POL;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CLC2SELレジスタ */
	/*-----------------------------------------------------------------------*/
		CLC2SEL =	( CLC2_USER_SEL_DS1 << 0U ) |
					( CLC2_USER_SEL_DS2 << 4U ) |
					( CLC2_USER_SEL_DS3 << 8U ) |
					( CLC2_USER_SEL_DS4 << 12U ) ;
		#ifdef DEF_BITNAME
			CLC2SELbits.DS1 = CLC2_USER_SEL_DS1;
			CLC2SELbits.DS2 = CLC2_USER_SEL_DS2;
			CLC2SELbits.DS3 = CLC2_USER_SEL_DS3;
			CLC2SELbits.DS4 = CLC2_USER_SEL_DS4;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CLC2GLSレジスタ */
	/*-----------------------------------------------------------------------*/
		CLC2GLS =	( CLC2_USER_SEL_G1D1N << 0U ) |
					( CLC2_USER_SEL_G1D1T << 1U ) |
					( CLC2_USER_SEL_G1D2N << 2U ) |
					( CLC2_USER_SEL_G1D2T << 3U ) |
					( CLC2_USER_SEL_G1D3N << 4U ) |
					( CLC2_USER_SEL_G1D3T << 5U ) |
					( CLC2_USER_SEL_G1D4N << 6U ) |
					( CLC2_USER_SEL_G1D4T << 7U ) |
					( CLC2_USER_SEL_G2D1N << 8U ) |
					( CLC2_USER_SEL_G2D1T << 9U ) |
					( CLC2_USER_SEL_G2D2N << 10U ) |
					( CLC2_USER_SEL_G2D2T << 11U ) |
					( CLC2_USER_SEL_G2D3N << 12U ) |
					( CLC2_USER_SEL_G2D3T << 13U ) |
					( CLC2_USER_SEL_G2D4N << 14U ) |
					( CLC2_USER_SEL_G2D4T << 15U ) |
					( CLC2_USER_SEL_G3D1N << 16U ) |
					( CLC2_USER_SEL_G3D1T << 17U ) |
					( CLC2_USER_SEL_G3D2N << 18U ) |
					( CLC2_USER_SEL_G3D2T << 19U ) |
					( CLC2_USER_SEL_G3D3N << 20U ) |
					( CLC2_USER_SEL_G3D3T << 21U ) |
					( CLC2_USER_SEL_G3D4N << 22U ) |
					( CLC2_USER_SEL_G3D4T << 23U ) |
					( CLC2_USER_SEL_G4D1N << 24U ) |
					( CLC2_USER_SEL_G4D1T << 25U ) |
					( CLC2_USER_SEL_G4D2N << 26U ) |
					( CLC2_USER_SEL_G4D2T << 27U ) |
					( CLC2_USER_SEL_G4D3N << 28U ) |
					( CLC2_USER_SEL_G4D3T << 29U ) |
					( CLC2_USER_SEL_G4D4N << 30U ) |
					( CLC2_USER_SEL_G4D4T << 31U ) ;


		#ifdef DEF_BITNAME
			CLC2GLSbits.G1D1N = CLC2_USER_SEL_G1D1N;
			CLC2GLSbits.G1D1T = CLC2_USER_SEL_G1D1T;
			CLC2GLSbits.G1D2N = CLC2_USER_SEL_G1D2N;
			CLC2GLSbits.G1D2T = CLC2_USER_SEL_G1D2T;
			CLC2GLSbits.G1D3N = CLC2_USER_SEL_G1D3N;
			CLC2GLSbits.G1D3T = CLC2_USER_SEL_G1D3T;
			CLC2GLSbits.G1D4N = CLC2_USER_SEL_G1D4N;
			CLC2GLSbits.G1D4T = CLC2_USER_SEL_G1D4T;
			CLC2GLSbits.G2D1N = CLC2_USER_SEL_G2D1N;
			CLC2GLSbits.G2D1T = CLC2_USER_SEL_G2D1T;
			CLC2GLSbits.G2D2N = CLC2_USER_SEL_G2D2N;
			CLC2GLSbits.G2D2T = CLC2_USER_SEL_G2D2T;
			CLC2GLSbits.G2D3N = CLC2_USER_SEL_G2D3N;
			CLC2GLSbits.G2D3T = CLC2_USER_SEL_G2D3T;
			CLC2GLSbits.G2D4N = CLC2_USER_SEL_G2D4N;
			CLC2GLSbits.G2D4T = CLC2_USER_SEL_G2D4T;
			CLC2GLSbits.G3D1N = CLC2_USER_SEL_G3D1N;
			CLC2GLSbits.G3D1T = CLC2_USER_SEL_G3D1T;
			CLC2GLSbits.G3D2N = CLC2_USER_SEL_G3D2N;
			CLC2GLSbits.G3D2T = CLC2_USER_SEL_G3D2T;
			CLC2GLSbits.G3D3N = CLC2_USER_SEL_G3D3N;
			CLC2GLSbits.G3D3T = CLC2_USER_SEL_G3D3T;
			CLC2GLSbits.G3D4N = CLC2_USER_SEL_G3D4N;
			CLC2GLSbits.G3D4T = CLC2_USER_SEL_G3D4T;
			CLC2GLSbits.G4D1N = CLC2_USER_SEL_G4D1N;
			CLC2GLSbits.G4D1T = CLC2_USER_SEL_G4D1T;
			CLC2GLSbits.G4D2N = CLC2_USER_SEL_G4D2N;
			CLC2GLSbits.G4D2T = CLC2_USER_SEL_G4D2T;
			CLC2GLSbits.G4D3N = CLC2_USER_SEL_G4D3N;
			CLC2GLSbits.G4D3T = CLC2_USER_SEL_G4D3T;
			CLC2GLSbits.G4D4N = CLC2_USER_SEL_G4D4N;
			CLC2GLSbits.G4D4T = CLC2_USER_SEL_G4D4T;
		#endif					
			
		CLC2CONbits.ON = CLC2_USER_ON;
#endif
}
/*----------------------------------------------------------------------------*/
/*
* @fn        vdg_CLC3_Set_Register(void)
* @brief        CLC3レジスタを初期化します 
* @param
* @return
* @detail 
*/
/*----------------------------------------------------------------------------*/
void vdg_CLC3_Set_Register(void)
{
#if ( PMD_CLC3MD == PMD_MODULE_ENABLE )
    /*-----------------------------------------------------------------------*/
	/* CLC3CONレジスタ */
	/*-----------------------------------------------------------------------*/
		CLC3CON =	( CLC3_USER_MODE << 0U ) |
					( CLC3_USER_LCOE << 7U ) |
					( CLC3_USER_INTN << 10U ) |
					( CLC3_USER_INTP << 11U ) |
					( CLC3_USER_G1POL << 16U ) |
					( CLC3_USER_G2POL << 17U ) |
					( CLC3_USER_G3POL << 18U ) |
					( CLC3_USER_G4POL << 19U ) ;
		#ifdef DEF_BITNAME
			CLC3CONbits.MODE = CLC3_USER_MODE;
			CLC3CONbits.LCPOL = 0u;
			CLC3CONbits.LCOUT = 0u;
			CLC3CONbits.LCOE = CLC3_USER_LCOE;
			CLC3CONbits.INTN = CLC3_USER_INTN;
			CLC3CONbits.INTP = CLC3_USER_INTP;
			CLC3CONbits.ON = 0u;
			CLC3CONbits.G1POL = CLC3_USER_G1POL;
			CLC3CONbits.G2POL = CLC3_USER_G2POL;
			CLC3CONbits.G3POL = CLC3_USER_G3POL;
			CLC3CONbits.G4POL = CLC3_USER_G4POL;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CLC3SELレジスタ */
	/*-----------------------------------------------------------------------*/
		CLC3SEL =	( CLC3_USER_SEL_DS1 << 0U ) |
					( CLC3_USER_SEL_DS2 << 4U ) |
					( CLC3_USER_SEL_DS3 << 8U ) |
					( CLC3_USER_SEL_DS4 << 12U ) ;
		#ifdef DEF_BITNAME
			CLC3SELbits.DS1 = CLC3_USER_SEL_DS1;
			CLC3SELbits.DS2 = CLC3_USER_SEL_DS2;
			CLC3SELbits.DS3 = CLC3_USER_SEL_DS3;
			CLC3SELbits.DS4 = CLC3_USER_SEL_DS4;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CLC3GLSレジスタ */
	/*-----------------------------------------------------------------------*/
		CLC3GLS =	( CLC3_USER_SEL_G1D1N << 0U ) |
					( CLC3_USER_SEL_G1D1T << 1U ) |
					( CLC3_USER_SEL_G1D2N << 2U ) |
					( CLC3_USER_SEL_G1D2T << 3U ) |
					( CLC3_USER_SEL_G1D3N << 4U ) |
					( CLC3_USER_SEL_G1D3T << 5U ) |
					( CLC3_USER_SEL_G1D4N << 6U ) |
					( CLC3_USER_SEL_G1D4T << 7U ) |
					( CLC3_USER_SEL_G2D1N << 8U ) |
					( CLC3_USER_SEL_G2D1T << 9U ) |
					( CLC3_USER_SEL_G2D2N << 10U ) |
					( CLC3_USER_SEL_G2D2T << 11U ) |
					( CLC3_USER_SEL_G2D3N << 12U ) |
					( CLC3_USER_SEL_G2D3T << 13U ) |
					( CLC3_USER_SEL_G2D4N << 14U ) |
					( CLC3_USER_SEL_G2D4T << 15U ) |
					( CLC3_USER_SEL_G3D1N << 16U ) |
					( CLC3_USER_SEL_G3D1T << 17U ) |
					( CLC3_USER_SEL_G3D2N << 18U ) |
					( CLC3_USER_SEL_G3D2T << 19U ) |
					( CLC3_USER_SEL_G3D3N << 20U ) |
					( CLC3_USER_SEL_G3D3T << 21U ) |
					( CLC3_USER_SEL_G3D4N << 22U ) |
					( CLC3_USER_SEL_G3D4T << 23U ) |
					( CLC3_USER_SEL_G4D1N << 24U ) |
					( CLC3_USER_SEL_G4D1T << 25U ) |
					( CLC3_USER_SEL_G4D2N << 26U ) |
					( CLC3_USER_SEL_G4D2T << 27U ) |
					( CLC3_USER_SEL_G4D3N << 28U ) |
					( CLC3_USER_SEL_G4D3T << 29U ) |
					( CLC3_USER_SEL_G4D4N << 30U ) |
					( CLC3_USER_SEL_G4D4T << 31U ) ;


		#ifdef DEF_BITNAME
			CLC3GLSbits.G1D1N = CLC3_USER_SEL_G1D1N;
			CLC3GLSbits.G1D1T = CLC3_USER_SEL_G1D1T;
			CLC3GLSbits.G1D2N = CLC3_USER_SEL_G1D2N;
			CLC3GLSbits.G1D2T = CLC3_USER_SEL_G1D2T;
			CLC3GLSbits.G1D3N = CLC3_USER_SEL_G1D3N;
			CLC3GLSbits.G1D3T = CLC3_USER_SEL_G1D3T;
			CLC3GLSbits.G1D4N = CLC3_USER_SEL_G1D4N;
			CLC3GLSbits.G1D4T = CLC3_USER_SEL_G1D4T;
			CLC3GLSbits.G2D1N = CLC3_USER_SEL_G2D1N;
			CLC3GLSbits.G2D1T = CLC3_USER_SEL_G2D1T;
			CLC3GLSbits.G2D2N = CLC3_USER_SEL_G2D2N;
			CLC3GLSbits.G2D2T = CLC3_USER_SEL_G2D2T;
			CLC3GLSbits.G2D3N = CLC3_USER_SEL_G2D3N;
			CLC3GLSbits.G2D3T = CLC3_USER_SEL_G2D3T;
			CLC3GLSbits.G2D4N = CLC3_USER_SEL_G2D4N;
			CLC3GLSbits.G2D4T = CLC3_USER_SEL_G2D4T;
			CLC3GLSbits.G3D1N = CLC3_USER_SEL_G3D1N;
			CLC3GLSbits.G3D1T = CLC3_USER_SEL_G3D1T;
			CLC3GLSbits.G3D2N = CLC3_USER_SEL_G3D2N;
			CLC3GLSbits.G3D2T = CLC3_USER_SEL_G3D2T;
			CLC3GLSbits.G3D3N = CLC3_USER_SEL_G3D3N;
			CLC3GLSbits.G3D3T = CLC3_USER_SEL_G3D3T;
			CLC3GLSbits.G3D4N = CLC3_USER_SEL_G3D4N;
			CLC3GLSbits.G3D4T = CLC3_USER_SEL_G3D4T;
			CLC3GLSbits.G4D1N = CLC3_USER_SEL_G4D1N;
			CLC3GLSbits.G4D1T = CLC3_USER_SEL_G4D1T;
			CLC3GLSbits.G4D2N = CLC3_USER_SEL_G4D2N;
			CLC3GLSbits.G4D2T = CLC3_USER_SEL_G4D2T;
			CLC3GLSbits.G4D3N = CLC3_USER_SEL_G4D3N;
			CLC3GLSbits.G4D3T = CLC3_USER_SEL_G4D3T;
			CLC3GLSbits.G4D4N = CLC3_USER_SEL_G4D4N;
			CLC3GLSbits.G4D4T = CLC3_USER_SEL_G4D4T;
		#endif					
			
		CLC3CONbits.ON = CLC3_USER_ON;
#endif
}
/*----------------------------------------------------------------------------*/
/*
* @fn        vdg_CLC4_Set_Register(void)
* @brief     CLC4レジスタを初期化します
* @param
* @return
* @detail 
*/
/*----------------------------------------------------------------------------*/
void vdg_CLC4_Set_Register(void)
{
#if ( PMD_CLC4MD == PMD_MODULE_ENABLE )
     /*-----------------------------------------------------------------------*/
	/* CLC4CONレジスタ */
	/*-----------------------------------------------------------------------*/
		CLC4CON =	( CLC4_USER_MODE << 0U ) |
					( CLC4_USER_LCOE << 7U ) |
					( CLC4_USER_INTN << 10U ) |
					( CLC4_USER_INTP << 11U ) |
					( CLC4_USER_G1POL << 16U ) |
					( CLC4_USER_G2POL << 17U ) |
					( CLC4_USER_G3POL << 18U ) |
					( CLC4_USER_G4POL << 19U ) ;
		#ifdef DEF_BITNAME
			CLC4CONbits.MODE = CLC4_USER_MODE;
			CLC4CONbits.LCPOL = 0u;
			CLC4CONbits.LCOUT = 0u;
			CLC4CONbits.LCOE = CLC4_USER_LCOE;
			CLC4CONbits.INTN = CLC4_USER_INTN;
			CLC4CONbits.INTP = CLC4_USER_INTP;
			CLC4CONbits.ON = 0u;
			CLC4CONbits.G1POL = CLC4_USER_G1POL;
			CLC4CONbits.G2POL = CLC4_USER_G2POL;
			CLC4CONbits.G3POL = CLC4_USER_G3POL;
			CLC4CONbits.G4POL = CLC4_USER_G4POL;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CLC4SELレジスタ */
	/*-----------------------------------------------------------------------*/
		CLC4SEL =	( CLC4_USER_SEL_DS1 << 0U ) |
					( CLC4_USER_SEL_DS2 << 4U ) |
					( CLC4_USER_SEL_DS3 << 8U ) |
					( CLC4_USER_SEL_DS4 << 12U ) ;
		#ifdef DEF_BITNAME
			CLC4SELbits.DS1 = CLC4_USER_SEL_DS1;
			CLC4SELbits.DS2 = CLC4_USER_SEL_DS2;
			CLC4SELbits.DS3 = CLC4_USER_SEL_DS3;
			CLC4SELbits.DS4 = CLC4_USER_SEL_DS4;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CLC4GLSレジスタ */
	/*-----------------------------------------------------------------------*/
		CLC4GLS =	( CLC4_USER_SEL_G1D1N << 0U ) |
					( CLC4_USER_SEL_G1D1T << 1U ) |
					( CLC4_USER_SEL_G1D2N << 2U ) |
					( CLC4_USER_SEL_G1D2T << 3U ) |
					( CLC4_USER_SEL_G1D3N << 4U ) |
					( CLC4_USER_SEL_G1D3T << 5U ) |
					( CLC4_USER_SEL_G1D4N << 6U ) |
					( CLC4_USER_SEL_G1D4T << 7U ) |
					( CLC4_USER_SEL_G2D1N << 8U ) |
					( CLC4_USER_SEL_G2D1T << 9U ) |
					( CLC4_USER_SEL_G2D2N << 10U ) |
					( CLC4_USER_SEL_G2D2T << 11U ) |
					( CLC4_USER_SEL_G2D3N << 12U ) |
					( CLC4_USER_SEL_G2D3T << 13U ) |
					( CLC4_USER_SEL_G2D4N << 14U ) |
					( CLC4_USER_SEL_G2D4T << 15U ) |
					( CLC4_USER_SEL_G3D1N << 16U ) |
					( CLC4_USER_SEL_G3D1T << 17U ) |
					( CLC4_USER_SEL_G3D2N << 18U ) |
					( CLC4_USER_SEL_G3D2T << 19U ) |
					( CLC4_USER_SEL_G3D3N << 20U ) |
					( CLC4_USER_SEL_G3D3T << 21U ) |
					( CLC4_USER_SEL_G3D4N << 22U ) |
					( CLC4_USER_SEL_G3D4T << 23U ) |
					( CLC4_USER_SEL_G4D1N << 24U ) |
					( CLC4_USER_SEL_G4D1T << 25U ) |
					( CLC4_USER_SEL_G4D2N << 26U ) |
					( CLC4_USER_SEL_G4D2T << 27U ) |
					( CLC4_USER_SEL_G4D3N << 28U ) |
					( CLC4_USER_SEL_G4D3T << 29U ) |
					( CLC4_USER_SEL_G4D4N << 30U ) |
					( CLC4_USER_SEL_G4D4T << 31U ) ;


		#ifdef DEF_BITNAME
			CLC4GLSbits.G1D1N = CLC4_USER_SEL_G1D1N;
			CLC4GLSbits.G1D1T = CLC4_USER_SEL_G1D1T;
			CLC4GLSbits.G1D2N = CLC4_USER_SEL_G1D2N;
			CLC4GLSbits.G1D2T = CLC4_USER_SEL_G1D2T;
			CLC4GLSbits.G1D3N = CLC4_USER_SEL_G1D3N;
			CLC4GLSbits.G1D3T = CLC4_USER_SEL_G1D3T;
			CLC4GLSbits.G1D4N = CLC4_USER_SEL_G1D4N;
			CLC4GLSbits.G1D4T = CLC4_USER_SEL_G1D4T;
			CLC4GLSbits.G2D1N = CLC4_USER_SEL_G2D1N;
			CLC4GLSbits.G2D1T = CLC4_USER_SEL_G2D1T;
			CLC4GLSbits.G2D2N = CLC4_USER_SEL_G2D2N;
			CLC4GLSbits.G2D2T = CLC4_USER_SEL_G2D2T;
			CLC4GLSbits.G2D3N = CLC4_USER_SEL_G2D3N;
			CLC4GLSbits.G2D3T = CLC4_USER_SEL_G2D3T;
			CLC4GLSbits.G2D4N = CLC4_USER_SEL_G2D4N;
			CLC4GLSbits.G2D4T = CLC4_USER_SEL_G2D4T;
			CLC4GLSbits.G3D1N = CLC4_USER_SEL_G3D1N;
			CLC4GLSbits.G3D1T = CLC4_USER_SEL_G3D1T;
			CLC4GLSbits.G3D2N = CLC4_USER_SEL_G3D2N;
			CLC4GLSbits.G3D2T = CLC4_USER_SEL_G3D2T;
			CLC4GLSbits.G3D3N = CLC4_USER_SEL_G3D3N;
			CLC4GLSbits.G3D3T = CLC4_USER_SEL_G3D3T;
			CLC4GLSbits.G3D4N = CLC4_USER_SEL_G3D4N;
			CLC4GLSbits.G3D4T = CLC4_USER_SEL_G3D4T;
			CLC4GLSbits.G4D1N = CLC4_USER_SEL_G4D1N;
			CLC4GLSbits.G4D1T = CLC4_USER_SEL_G4D1T;
			CLC4GLSbits.G4D2N = CLC4_USER_SEL_G4D2N;
			CLC4GLSbits.G4D2T = CLC4_USER_SEL_G4D2T;
			CLC4GLSbits.G4D3N = CLC4_USER_SEL_G4D3N;
			CLC4GLSbits.G4D3T = CLC4_USER_SEL_G4D3T;
			CLC4GLSbits.G4D4N = CLC4_USER_SEL_G4D4N;
			CLC4GLSbits.G4D4T = CLC4_USER_SEL_G4D4T;
		#endif					
			
		CLC4CONbits.ON = CLC4_USER_ON;
#endif
}
/*----------------------------------------------------------------------------*/
/*
* @fn        vdg_CLC_Set_Register(void)
* @brief     全てのCLCレジスタを初期化します
* @param
* @return
* @detail 
*/
/*----------------------------------------------------------------------------*/
void vdg_CLC_Set_Register(void)
{
#if ( PMD_CLC1MD == PMD_MODULE_ENABLE )
    vdg_CLC1_Set_Register();
#endif
#if ( PMD_CLC2MD == PMD_MODULE_ENABLE )
    vdg_CLC2_Set_Register();
#endif
#if ( PMD_CLC3MD == PMD_MODULE_ENABLE )
    vdg_CLC3_Set_Register();
#endif
#if ( PMD_CLC4MD == PMD_MODULE_ENABLE )
    vdg_CLC4_Set_Register();
#endif
}