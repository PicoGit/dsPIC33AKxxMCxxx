/*----------------------------------------------------------------------------*/
/**
 * @file	ADC_Driver.c
 * @brief	ADCモジュールに関するドライバ関数
 * @details 
 */
/*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*/
/*インクルードファイル*/
/*----------------------------------------------------------------------------*/
#include <xc.h>
#include "BoardSupportPackage.h"
#include "init_fix.h"
#include "typedef.h"
#include "adc_user.h"
#include "adc_driver.h"
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
* @fn        vdg_ADC1_Set_All_Register(void) 
* @brief        ADC1レジスタを初期化します 
* @param
* @return
* @detail 
 */
/*----------------------------------------------------------------------------*/
void vdg_ADC1_Set_All_Register(void)
{
#if ( PMD_ADC1MD == PMD_MODULE_ENABLE )
	/*-----------------------------------------------------------------------*/
	/* AD1CONレジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CON = (ADC1_USER_CALCNT << 5U) |
				(ADC1_USER_STANDBY << 16U) |
				(ADC1_USER_RPTCNT << 18) |
				(ADC1_USER_CALRATE << 26U) |
				(ADC1_USER_ACALEN << 28U) ;
		#ifdef DEF_BITNAME
			AD1CONbits.CALCNT = ADC1_USER_CALCNT;
			AD1CONbits.BUFEN = 0u;
			AD1CONbits.TSTEN = 0u;
			AD1CONbits.TSTLOCK = 0u;
			AD1CONbits.SIDL = 0u;
			AD1CONbits.ON = 0u;
			AD1CONbits.STNDBY = ADC1_USER_STANDBY;
			AD1CONbits.VREFMOD = 0u;
			AD1CONbits.RPTCNT = ADC1_USER_RPTCNT;
			AD1CONbits.MODE = 0u;
			AD1CONbits.CALRATE = ADC1_USER_CALRATE;
			AD1CONbits.ACALEN = ADC1_USER_ACALEN;
			AD1CONbits.CALREQ = 0u;
			AD1CONbits.CALRDY = 0u;
			AD1CONbits.ADRDY = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD1DATAOVRレジスタ */
	/*-----------------------------------------------------------------------*/
		AD1DATAOVR = 0x00000000u;
	/*-----------------------------------------------------------------------*/
	/* AD1STATレジスタ */
	/*-----------------------------------------------------------------------*/
		AD1STAT = 0x00000000u;
		#ifdef DEF_BITNAME
			AD1STATbits.CH0RDY = 0u;
			AD1STATbits.CH1RDY = 0u;
			AD1STATbits.CH2RDY = 0u;
			AD1STATbits.CH3RDY = 0u;
			AD1STATbits.CH4RDY = 0u;
			AD1STATbits.CH5RDY = 0u;
			AD1STATbits.CH6RDY = 0u;
			AD1STATbits.CH7RDY = 0u;
			AD1STATbits.CH8RDY = 0u;
			AD1STATbits.CH9RDY = 0u;
			AD1STATbits.CH10RDY = 0u;
			AD1STATbits.CH11RDY = 0u;
			AD1STATbits.CH12RDY = 0u;
			AD1STATbits.CH13RDY = 0u;
			AD1STATbits.CH14RDY = 0u;
			AD1STATbits.CH15RDY = 0u;
			AD1STATbits.CH16RDY = 0u;
			AD1STATbits.CH17RDY = 0u;
			AD1STATbits.CH18RDY = 0u;
			AD1STATbits.CH19RDY = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD1CMPSTATレジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CMPSTAT = 0x00000000u;
		#ifdef DEF_BITNAME
			AD1CMPSTATbits.CH0CMP = 0u;
			AD1CMPSTATbits.CH1CMP = 0u;
			AD1CMPSTATbits.CH2CMP = 0u;
			AD1CMPSTATbits.CH3CMP = 0u;
			AD1CMPSTATbits.CH4CMP = 0u;
			AD1CMPSTATbits.CH5CMP = 0u;
			AD1CMPSTATbits.CH6CMP = 0u;
			AD1CMPSTATbits.CH7CMP = 0u;
			AD1CMPSTATbits.CH8CMP = 0u;
			AD1CMPSTATbits.CH9CMP = 0u;
			AD1CMPSTATbits.CH10CMP = 0u;
			AD1CMPSTATbits.CH11CMP = 0u;
			AD1CMPSTATbits.CH12CMP = 0u;
			AD1CMPSTATbits.CH13CMP = 0u;
			AD1CMPSTATbits.CH14CMP = 0u;
			AD1CMPSTATbits.CH15CMP = 0u;
			AD1CMPSTATbits.CH16CMP = 0u;
			AD1CMPSTATbits.CH17CMP = 0u;
			AD1CMPSTATbits.CH18CMP = 0u;
			AD1CMPSTATbits.CH19CMP = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD1SWTRGレジスタ */
	/*-----------------------------------------------------------------------*/
		AD1SWTRG = 0x00000000u;
		#ifdef DEF_BITNAME
			AD1SWTRGbits.CH0TRG = 0u;
			AD1SWTRGbits.CH1TRG = 0u;
			AD1SWTRGbits.CH2TRG = 0u;
			AD1SWTRGbits.CH3TRG = 0u;
			AD1SWTRGbits.CH4TRG = 0u;
			AD1SWTRGbits.CH5TRG = 0u;
			AD1SWTRGbits.CH6TRG = 0u;
			AD1SWTRGbits.CH7TRG = 0u;
			AD1SWTRGbits.CH8TRG = 0u;
			AD1SWTRGbits.CH9TRG = 0u;
			AD1SWTRGbits.CH10TRG = 0u;
			AD1SWTRGbits.CH11TRG = 0u;
			AD1SWTRGbits.CH12TRG = 0u;
			AD1SWTRGbits.CH13TRG = 0u;
			AD1SWTRGbits.CH14TRG = 0u;
			AD1SWTRGbits.CH15TRG = 0u;
			AD1SWTRGbits.CH16TRG = 0u;
			AD1SWTRGbits.CH17TRG = 0u;
			AD1SWTRGbits.CH18TRG = 0u;
			AD1SWTRGbits.CH19TRG = 0u;
		#endif 
	/*-----------------------------------------------------------------------*/
	/* AD1CH0CONレジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH0CON = (ADC1_USER_CH0_TRG1SRC ) |
				(ADC1_USER_CH0_SAMC << 5U ) |
				(ADC1_USER_CH0_NINSEL << 8U ) |
				(ADC1_USER_CH0_LEFT << 10U ) |
				(ADC1_USER_CH0_PINSEL << 11U ) |
				(ADC1_USER_CH0_DIFF << 15U ) |
				(ADC1_USER_CH0_CMPMOD << 16U ) |
				(ADC1_USER_CH0_TRG2SRC << 19U ) |
				(ADC1_USER_CH0_EIEN << 24U ) |
				(ADC1_USER_CH0_TRG1POL << 25U ) |
				(ADC1_USER_CH0_ACCRO << 26U ) |
				(ADC1_USER_CH0_ACCBRST << 27U ) |
				(ADC1_USER_CH0_ACCNUM << 28U ) |
				(ADC1_USER_CH0_MODE << 30U ) ;
		#ifdef DEF_BITNAME
			AD1CH0CONbits.TRG1SRC = ADC1_USER_CH0_TRG1SRC;
			AD1CH0CONbits.SAMC = ADC1_USER_CH0_SAMC;
			AD1CH0CONbits.NINSEL = ADC1_USER_CH0_NINSEL;
			AD1CH0CONbits.LEFT = ADC1_USER_CH0_LEFT;
			AD1CH0CONbits.PINSEL = ADC1_USER_CH0_PINSEL;
			AD1CH0CONbits.DIFF = ADC1_USER_CH0_DIFF;
			AD1CH0CONbits.CMPMOD = ADC1_USER_CH0_CMPMOD;
			AD1CH0CONbits.TRG2SRC = ADC1_USER_CH0_TRG2SRC;
			AD1CH0CONbits.EIEN = ADC1_USER_CH0_EIEN;
			AD1CH0CONbits.TRG1POL = ADC1_USER_CH0_TRG1POL;
			AD1CH0CONbits.ACCRO = ADC1_USER_CH0_ACCRO;
			AD1CH0CONbits.ACCBRST = ADC1_USER_CH0_ACCBRST;
			AD1CH0CONbits.ACCNUM = ADC1_USER_CH0_ACCNUM;
			AD1CH0CONbits.MODE = ADC1_USER_CH0_MODE;
		#endif 
	/*-----------------------------------------------------------------------*/
	/* AD1CH0DATAレジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH0DATA = 0x00000000u;
	/*-----------------------------------------------------------------------*/
	/* AD1CH0CNTレジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH0CNT = ADC1_USER_CH0_CNT;
		#ifdef DEF_BITNAME
			AD1CH0CNTbits.CNT = 0u;
			AD1CH0CNTbits.CNTSTAT = 0u;
		#endif 
	/*-----------------------------------------------------------------------*/
	/* AD1CH0CMPLOレジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH0CMPLO = ADC1_USER_CH0_CMPLO;
	/*-----------------------------------------------------------------------*/
	/* AD1CH0CMPHIレジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH0CMPHI = ADC1_USER_CH0_CMPHI;
	/*-----------------------------------------------------------------------*/
	/* AD1CH0ACCレジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH0ACC = 0x00000000u;

	/*-----------------------------------------------------------------------*/
	/* AD1CH1CONレジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH1CON = (ADC1_USER_CH1_TRG1SRC ) |
				(ADC1_USER_CH1_SAMC << 5U ) |
				(ADC1_USER_CH1_NINSEL << 8U ) |
				(ADC1_USER_CH1_LEFT << 10U ) |
				(ADC1_USER_CH1_PINSEL << 11U ) |
				(ADC1_USER_CH1_DIFF << 15U ) |
				(ADC1_USER_CH1_CMPMOD << 16U ) |
				(ADC1_USER_CH1_TRG2SRC << 19U ) |
				(ADC1_USER_CH1_EIEN << 24U ) |
				(ADC1_USER_CH1_TRG1POL << 25U ) |
				(ADC1_USER_CH1_ACCRO << 26U ) |
				(ADC1_USER_CH1_ACCBRST << 27U ) |
				(ADC1_USER_CH1_ACCNUM << 28U ) |
				(ADC1_USER_CH1_MODE << 30U ) ;
		#ifdef DEF_BITNAME
			AD1CH1CONbits.TRG1SRC = ADC1_USER_CH1_TRG1SRC;
			AD1CH1CONbits.SAMC = ADC1_USER_CH1_SAMC;
			AD1CH1CONbits.NINSEL = ADC1_USER_CH1_NINSEL;
			AD1CH1CONbits.LEFT = ADC1_USER_CH1_LEFT;
			AD1CH1CONbits.PINSEL = ADC1_USER_CH1_PINSEL;
			AD1CH1CONbits.DIFF = ADC1_USER_CH1_DIFF;
			AD1CH1CONbits.CMPMOD = ADC1_USER_CH1_CMPMOD;
			AD1CH1CONbits.TRG2SRC = ADC1_USER_CH1_TRG2SRC;
			AD1CH1CONbits.EIEN = ADC1_USER_CH1_EIEN;
			AD1CH1CONbits.TRG1POL = ADC1_USER_CH1_TRG1POL;
			AD1CH1CONbits.ACCRO = ADC1_USER_CH1_ACCRO;
			AD1CH1CONbits.ACCBRST = ADC1_USER_CH1_ACCBRST;
			AD1CH1CONbits.ACCNUM = ADC1_USER_CH1_ACCNUM;
			AD1CH1CONbits.MODE = ADC1_USER_CH1_MODE;
		#endif 
	/*-----------------------------------------------------------------------*/
	/* AD1CH1DATAレジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH1DATA = 0x00000000u;
	/*-----------------------------------------------------------------------*/
	/* AD1CH1CNTレジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH1CNT = ADC1_USER_CH1_CNT;
		#ifdef DEF_BITNAME
			AD1CH1CNTbits.CNT = 0u;
			AD1CH1CNTbits.CNTSTAT = 0u;
		#endif 
	/*-----------------------------------------------------------------------*/
	/* AD1CH1CMPLOレジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH1CMPLO = ADC1_USER_CH1_CMPLO;
	/*-----------------------------------------------------------------------*/
	/* AD1CH1CMPHIレジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH1CMPHI = ADC1_USER_CH1_CMPHI;
	/*-----------------------------------------------------------------------*/
	/* AD1CH1ACCレジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH1ACC = 0x00000000u;
	
	/*-----------------------------------------------------------------------*/
	/* AD1CH2CONレジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH2CON = (ADC1_USER_CH2_TRG1SRC ) |
				(ADC1_USER_CH2_SAMC << 5U ) |
				(ADC1_USER_CH2_NINSEL << 8U ) |
				(ADC1_USER_CH2_LEFT << 10U ) |
				(ADC1_USER_CH2_PINSEL << 11U ) |
				(ADC1_USER_CH2_DIFF << 15U ) |
				(ADC1_USER_CH2_CMPMOD << 16U ) |
				(ADC1_USER_CH2_TRG2SRC << 19U ) |
				(ADC1_USER_CH2_EIEN << 24U ) |
				(ADC1_USER_CH2_TRG1POL << 25U ) |
				(ADC1_USER_CH2_ACCRO << 26U ) |
				(ADC1_USER_CH2_ACCBRST << 27U ) |
				(ADC1_USER_CH2_ACCNUM << 28U ) |
				(ADC1_USER_CH2_MODE << 30U ) ;
		#ifdef DEF_BITNAME
			AD1CH2CONbits.TRG1SRC = ADC1_USER_CH2_TRG1SRC;
			AD1CH2CONbits.SAMC = ADC1_USER_CH2_SAMC;
			AD1CH2CONbits.NINSEL = ADC1_USER_CH2_NINSEL;
			AD1CH2CONbits.LEFT = ADC1_USER_CH2_LEFT;
			AD1CH2CONbits.PINSEL = ADC1_USER_CH2_PINSEL;
			AD1CH2CONbits.DIFF = ADC1_USER_CH2_DIFF;
			AD1CH2CONbits.CMPMOD = ADC1_USER_CH2_CMPMOD;
			AD1CH2CONbits.TRG2SRC = ADC1_USER_CH2_TRG2SRC;
			AD1CH2CONbits.EIEN = ADC1_USER_CH2_EIEN;
			AD1CH2CONbits.TRG1POL = ADC1_USER_CH2_TRG1POL;
			AD1CH2CONbits.ACCRO = ADC1_USER_CH2_ACCRO;
			AD1CH2CONbits.ACCBRST = ADC1_USER_CH2_ACCBRST;
			AD1CH2CONbits.ACCNUM = ADC1_USER_CH2_ACCNUM;
			AD1CH2CONbits.MODE = ADC1_USER_CH2_MODE;
		#endif 
	/*-----------------------------------------------------------------------*/
	/* AD1CH2DATAレジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH2DATA = 0x00000000u;
	/*-----------------------------------------------------------------------*/
	/* AD1CH2CNTレジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH2CNT = ADC1_USER_CH2_CNT;
		#ifdef DEF_BITNAME
			AD1CH2CNTbits.CNT = 0u;
			AD1CH2CNTbits.CNTSTAT = 0u;
		#endif 
	/*-----------------------------------------------------------------------*/
	/* AD1CH2CMPLOレジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH2CMPLO = ADC1_USER_CH2_CMPLO;
	/*-----------------------------------------------------------------------*/
	/* AD1CH2CMPHIレジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH2CMPHI = ADC1_USER_CH2_CMPHI;
	/*-----------------------------------------------------------------------*/
	/* AD1CH2ACCレジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH3ACC = 0x00000000u;

	/*-----------------------------------------------------------------------*/
	/* AD1CH3CONレジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH3CON = (ADC1_USER_CH3_TRG1SRC ) |
				(ADC1_USER_CH3_SAMC << 5U ) |
				(ADC1_USER_CH3_NINSEL << 8U ) |
				(ADC1_USER_CH3_LEFT << 10U ) |
				(ADC1_USER_CH3_PINSEL << 11U ) |
				(ADC1_USER_CH3_DIFF << 15U ) |
				(ADC1_USER_CH3_CMPMOD << 16U ) |
				(ADC1_USER_CH3_TRG2SRC << 19U ) |
				(ADC1_USER_CH3_EIEN << 24U ) |
				(ADC1_USER_CH3_TRG1POL << 25U ) |
				(ADC1_USER_CH3_ACCRO << 26U ) |
				(ADC1_USER_CH3_ACCBRST << 27U ) |
				(ADC1_USER_CH3_ACCNUM << 28U ) |
				(ADC1_USER_CH3_MODE << 30U ) ;
		#ifdef DEF_BITNAME
			AD1CH3CONbits.TRG1SRC = ADC1_USER_CH3_TRG1SRC;
			AD1CH3CONbits.SAMC = ADC1_USER_CH3_SAMC;
			AD1CH3CONbits.NINSEL = ADC1_USER_CH3_NINSEL;
			AD1CH3CONbits.LEFT = ADC1_USER_CH3_LEFT;
			AD1CH3CONbits.PINSEL = ADC1_USER_CH3_PINSEL;
			AD1CH3CONbits.DIFF = ADC1_USER_CH3_DIFF;
			AD1CH3CONbits.CMPMOD = ADC1_USER_CH3_CMPMOD;
			AD1CH3CONbits.TRG2SRC = ADC1_USER_CH3_TRG2SRC;
			AD1CH3CONbits.EIEN = ADC1_USER_CH3_EIEN;
			AD1CH3CONbits.TRG1POL = ADC1_USER_CH3_TRG1POL;
			AD1CH3CONbits.ACCRO = ADC1_USER_CH3_ACCRO;
			AD1CH3CONbits.ACCBRST = ADC1_USER_CH3_ACCBRST;
			AD1CH3CONbits.ACCNUM = ADC1_USER_CH3_ACCNUM;
			AD1CH3CONbits.MODE = ADC1_USER_CH3_MODE;
		#endif 
	/*-----------------------------------------------------------------------*/
	/* AD1CH3DATAレジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH3DATA = 0x00000000u;
	/*-----------------------------------------------------------------------*/
	/* AD1CH3CNTレジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH3CNT = ADC1_USER_CH3_CNT;
		#ifdef DEF_BITNAME
			AD1CH3CNTbits.CNT = 0u;
			AD1CH3CNTbits.CNTSTAT = 0u;
		#endif 
	/*-----------------------------------------------------------------------*/
	/* AD1CH3CMPLOレジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH3CMPLO = ADC1_USER_CH3_CMPLO;
	/*-----------------------------------------------------------------------*/
	/* AD1CH3CMPHIレジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH3CMPHI = ADC1_USER_CH3_CMPHI;
	/*-----------------------------------------------------------------------*/
	/* AD1CH3ACCレジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH3ACC = 0x00000000u;
		
	/*-----------------------------------------------------------------------*/
	/* AD1CH4CONレジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH4CON = (ADC1_USER_CH4_TRG1SRC ) |
				(ADC1_USER_CH4_SAMC << 5U ) |
				(ADC1_USER_CH4_NINSEL << 8U ) |
				(ADC1_USER_CH4_LEFT << 10U ) |
				(ADC1_USER_CH4_PINSEL << 11U ) |
				(ADC1_USER_CH4_DIFF << 15U ) |
				(ADC1_USER_CH4_CMPMOD << 16U ) |
				(ADC1_USER_CH4_TRG2SRC << 19U ) |
				(ADC1_USER_CH4_EIEN << 24U ) |
				(ADC1_USER_CH4_TRG1POL << 25U ) |
				(ADC1_USER_CH4_ACCRO << 26U ) |
				(ADC1_USER_CH4_ACCBRST << 27U ) |
				(ADC1_USER_CH4_ACCNUM << 28U ) |
				(ADC1_USER_CH4_MODE << 30U ) ;
		#ifdef DEF_BITNAME
			AD1CH4CONbits.TRG1SRC = ADC1_USER_CH4_TRG1SRC;
			AD1CH4CONbits.SAMC = ADC1_USER_CH4_SAMC;
			AD1CH4CONbits.NINSEL = ADC1_USER_CH4_NINSEL;
			AD1CH4CONbits.LEFT = ADC1_USER_CH4_LEFT;
			AD1CH4CONbits.PINSEL = ADC1_USER_CH4_PINSEL;
			AD1CH4CONbits.DIFF = ADC1_USER_CH4_DIFF;
			AD1CH4CONbits.CMPMOD = ADC1_USER_CH4_CMPMOD;
			AD1CH4CONbits.TRG2SRC = ADC1_USER_CH4_TRG2SRC;
			AD1CH4CONbits.EIEN = ADC1_USER_CH4_EIEN;
			AD1CH4CONbits.TRG1POL = ADC1_USER_CH4_TRG1POL;
			AD1CH4CONbits.ACCRO = ADC1_USER_CH4_ACCRO;
			AD1CH4CONbits.ACCBRST = ADC1_USER_CH4_ACCBRST;
			AD1CH4CONbits.ACCNUM = ADC1_USER_CH4_ACCNUM;
			AD1CH4CONbits.MODE = ADC1_USER_CH4_MODE;
		#endif 
	/*-----------------------------------------------------------------------*/
	/* AD1CH4DATAレジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH4DATA = 0x00000000u;
	/*-----------------------------------------------------------------------*/
	/* AD1CH4CNTレジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH4CNT = ADC1_USER_CH4_CNT;
		#ifdef DEF_BITNAME
			AD1CH4CNTbits.CNT = 0u;
			AD1CH4CNTbits.CNTSTAT = 0u;
		#endif 
	/*-----------------------------------------------------------------------*/
	/* AD1CH4CMPLOレジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH4CMPLO = ADC1_USER_CH4_CMPLO;
	/*-----------------------------------------------------------------------*/
	/* AD1CH4CMPHIレジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH4CMPHI = ADC1_USER_CH4_CMPHI;
	/*-----------------------------------------------------------------------*/
	/* AD1CH4ACCレジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH4ACC = 0x00000000u;

	/*-----------------------------------------------------------------------*/
	/* AD1CH5CONレジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH5CON = (ADC1_USER_CH5_TRG1SRC ) |
				(ADC1_USER_CH5_SAMC << 5U ) |
				(ADC1_USER_CH5_NINSEL << 8U ) |
				(ADC1_USER_CH5_LEFT << 10U ) |
				(ADC1_USER_CH5_PINSEL << 11U ) |
				(ADC1_USER_CH5_DIFF << 15U ) |
				(ADC1_USER_CH5_CMPMOD << 16U ) |
				(ADC1_USER_CH5_TRG2SRC << 19U ) |
				(ADC1_USER_CH5_EIEN << 24U ) |
				(ADC1_USER_CH5_TRG1POL << 25U ) |
				(ADC1_USER_CH5_ACCRO << 26U ) |
				(ADC1_USER_CH5_ACCBRST << 27U ) |
				(ADC1_USER_CH5_ACCNUM << 28U ) |
				(ADC1_USER_CH5_MODE << 30U ) ;
		#ifdef DEF_BITNAME
			AD1CH5CONbits.TRG1SRC = ADC1_USER_CH5_TRG1SRC;
			AD1CH5CONbits.SAMC = ADC1_USER_CH5_SAMC;
			AD1CH5CONbits.NINSEL = ADC1_USER_CH5_NINSEL;
			AD1CH5CONbits.LEFT = ADC1_USER_CH5_LEFT;
			AD1CH5CONbits.PINSEL = ADC1_USER_CH5_PINSEL;
			AD1CH5CONbits.DIFF = ADC1_USER_CH5_DIFF;
			AD1CH5CONbits.CMPMOD = ADC1_USER_CH5_CMPMOD;
			AD1CH5CONbits.TRG2SRC = ADC1_USER_CH5_TRG2SRC;
			AD1CH5CONbits.EIEN = ADC1_USER_CH5_EIEN;
			AD1CH5CONbits.TRG1POL = ADC1_USER_CH5_TRG1POL;
			AD1CH5CONbits.ACCRO = ADC1_USER_CH5_ACCRO;
			AD1CH5CONbits.ACCBRST = ADC1_USER_CH5_ACCBRST;
			AD1CH5CONbits.ACCNUM = ADC1_USER_CH5_ACCNUM;
			AD1CH5CONbits.MODE = ADC1_USER_CH5_MODE;
		#endif 
	/*-----------------------------------------------------------------------*/
	/* AD1CH5DATAレジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH5DATA = 0x00000000u;
	/*-----------------------------------------------------------------------*/
	/* AD1CH5CNTレジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH5CNT = ADC1_USER_CH5_CNT;
		#ifdef DEF_BITNAME
			AD1CH5CNTbits.CNT = 0u;
			AD1CH5CNTbits.CNTSTAT = 0u;
		#endif 
	/*-----------------------------------------------------------------------*/
	/* AD1CH5CMPLOレジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH5CMPLO = ADC1_USER_CH5_CMPLO;
	/*-----------------------------------------------------------------------*/
	/* AD1CH5CMPHIレジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH5CMPHI = ADC1_USER_CH5_CMPHI;
	/*-----------------------------------------------------------------------*/
	/* AD1CH5ACCレジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH5ACC = 0x00000000u;
		
	/*-----------------------------------------------------------------------*/
	/* AD1CH6CONレジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH6CON = (ADC1_USER_CH6_TRG1SRC ) |
				(ADC1_USER_CH6_SAMC << 5U ) |
				(ADC1_USER_CH6_NINSEL << 8U ) |
				(ADC1_USER_CH6_LEFT << 10U ) |
				(ADC1_USER_CH6_PINSEL << 11U ) |
				(ADC1_USER_CH6_DIFF << 15U ) |
				(ADC1_USER_CH6_CMPMOD << 16U ) |
				(ADC1_USER_CH6_TRG2SRC << 19U ) |
				(ADC1_USER_CH6_EIEN << 24U ) |
				(ADC1_USER_CH6_TRG1POL << 25U ) |
				(ADC1_USER_CH6_ACCRO << 26U ) |
				(ADC1_USER_CH6_ACCBRST << 27U ) |
				(ADC1_USER_CH6_ACCNUM << 28U ) |
				(ADC1_USER_CH6_MODE << 30U ) ;
		#ifdef DEF_BITNAME
			AD1CH6CONbits.TRG1SRC = ADC1_USER_CH6_TRG1SRC;
			AD1CH6CONbits.SAMC = ADC1_USER_CH6_SAMC;
			AD1CH6CONbits.NINSEL = ADC1_USER_CH6_NINSEL;
			AD1CH6CONbits.LEFT = ADC1_USER_CH6_LEFT;
			AD1CH6CONbits.PINSEL = ADC1_USER_CH6_PINSEL;
			AD1CH6CONbits.DIFF = ADC1_USER_CH6_DIFF;
			AD1CH6CONbits.CMPMOD = ADC1_USER_CH6_CMPMOD;
			AD1CH6CONbits.TRG2SRC = ADC1_USER_CH6_TRG2SRC;
			AD1CH6CONbits.EIEN = ADC1_USER_CH6_EIEN;
			AD1CH6CONbits.TRG1POL = ADC1_USER_CH6_TRG1POL;
			AD1CH6CONbits.ACCRO = ADC1_USER_CH6_ACCRO;
			AD1CH6CONbits.ACCBRST = ADC1_USER_CH6_ACCBRST;
			AD1CH6CONbits.ACCNUM = ADC1_USER_CH6_ACCNUM;
			AD1CH6CONbits.MODE = ADC1_USER_CH6_MODE;
		#endif 
	/*-----------------------------------------------------------------------*/
	/* AD1CH6DATAレジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH6DATA = 0x00000000u;
	/*-----------------------------------------------------------------------*/
	/* AD1CH6CNTレジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH6CNT = ADC1_USER_CH6_CNT;
		#ifdef DEF_BITNAME
			AD1CH6CNTbits.CNT = 0u;
			AD1CH6CNTbits.CNTSTAT = 0u;
		#endif 
	/*-----------------------------------------------------------------------*/
	/* AD1CH6CMPLOレジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH6CMPLO = ADC1_USER_CH6_CMPLO;
	/*-----------------------------------------------------------------------*/
	/* AD1CH6CMPHIレジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH6CMPHI = ADC1_USER_CH6_CMPHI;
	/*-----------------------------------------------------------------------*/
	/* AD1CH6ACCレジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH6ACC = 0x00000000u;

	/*-----------------------------------------------------------------------*/
	/* AD1CH7CONレジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH7CON = (ADC1_USER_CH7_TRG1SRC ) |
				(ADC1_USER_CH7_SAMC << 5U ) |
				(ADC1_USER_CH7_NINSEL << 8U ) |
				(ADC1_USER_CH7_LEFT << 10U ) |
				(ADC1_USER_CH7_PINSEL << 11U ) |
				(ADC1_USER_CH7_DIFF << 15U ) |
				(ADC1_USER_CH7_CMPMOD << 16U ) |
				(ADC1_USER_CH7_TRG2SRC << 19U ) |
				(ADC1_USER_CH7_EIEN << 24U ) |
				(ADC1_USER_CH7_TRG1POL << 25U ) |
				(ADC1_USER_CH7_ACCRO << 26U ) |
				(ADC1_USER_CH7_ACCBRST << 27U ) |
				(ADC1_USER_CH7_ACCNUM << 28U ) |
				(ADC1_USER_CH7_MODE << 30U ) ;
		#ifdef DEF_BITNAME
			AD1CH7CONbits.TRG1SRC = ADC1_USER_CH7_TRG1SRC;
			AD1CH7CONbits.SAMC = ADC1_USER_CH7_SAMC;
			AD1CH7CONbits.NINSEL = ADC1_USER_CH7_NINSEL;
			AD1CH7CONbits.LEFT = ADC1_USER_CH7_LEFT;
			AD1CH7CONbits.PINSEL = ADC1_USER_CH7_PINSEL;
			AD1CH7CONbits.DIFF = ADC1_USER_CH7_DIFF;
			AD1CH7CONbits.CMPMOD = ADC1_USER_CH7_CMPMOD;
			AD1CH7CONbits.TRG2SRC = ADC1_USER_CH7_TRG2SRC;
			AD1CH7CONbits.EIEN = ADC1_USER_CH7_EIEN;
			AD1CH7CONbits.TRG1POL = ADC1_USER_CH7_TRG1POL;
			AD1CH7CONbits.ACCRO = ADC1_USER_CH7_ACCRO;
			AD1CH7CONbits.ACCBRST = ADC1_USER_CH7_ACCBRST;
			AD1CH7CONbits.ACCNUM = ADC1_USER_CH7_ACCNUM;
			AD1CH7CONbits.MODE = ADC1_USER_CH7_MODE;
		#endif 
	/*-----------------------------------------------------------------------*/
	/* AD1CH7DATAレジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH7DATA = 0x00000000u;
	/*-----------------------------------------------------------------------*/
	/* AD1CH7CNTレジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH7CNT = ADC1_USER_CH7_CNT;
		#ifdef DEF_BITNAME
			AD1CH7CNTbits.CNT = 0u;
			AD1CH7CNTbits.CNTSTAT = 0u;
		#endif 
	/*-----------------------------------------------------------------------*/
	/* AD1CH7CMPLOレジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH7CMPLO = ADC1_USER_CH7_CMPLO;
	/*-----------------------------------------------------------------------*/
	/* AD1CH7CMPHIレジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH7CMPHI = ADC1_USER_CH7_CMPHI;
	/*-----------------------------------------------------------------------*/
	/* AD1CH7ACCレジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH7ACC = 0x00000000u;
		
	/*-----------------------------------------------------------------------*/
	/* AD1CH8CONレジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH8CON = (ADC1_USER_CH8_TRG1SRC ) |
				(ADC1_USER_CH8_SAMC << 5U ) |
				(ADC1_USER_CH8_NINSEL << 8U ) |
				(ADC1_USER_CH8_LEFT << 10U ) |
				(ADC1_USER_CH8_PINSEL << 11U ) |
				(ADC1_USER_CH8_DIFF << 15U ) |
				(ADC1_USER_CH8_CMPMOD << 16U ) |
				(ADC1_USER_CH8_TRG2SRC << 19U ) |
				(ADC1_USER_CH8_EIEN << 24U ) |
				(ADC1_USER_CH8_TRG1POL << 25U ) |
				(ADC1_USER_CH8_ACCRO << 26U ) |
				(ADC1_USER_CH8_ACCBRST << 27U ) |
				(ADC1_USER_CH8_ACCNUM << 28U ) |
				(ADC1_USER_CH8_MODE << 30U ) ;
		#ifdef DEF_BITNAME
			AD1CH8CONbits.TRG1SRC = ADC1_USER_CH8_TRG1SRC;
			AD1CH8CONbits.SAMC = ADC1_USER_CH8_SAMC;
			AD1CH8CONbits.NINSEL = ADC1_USER_CH8_NINSEL;
			AD1CH8CONbits.LEFT = ADC1_USER_CH8_LEFT;
			AD1CH8CONbits.PINSEL = ADC1_USER_CH8_PINSEL;
			AD1CH8CONbits.DIFF = ADC1_USER_CH8_DIFF;
			AD1CH8CONbits.CMPMOD = ADC1_USER_CH8_CMPMOD;
			AD1CH8CONbits.TRG2SRC = ADC1_USER_CH8_TRG2SRC;
			AD1CH8CONbits.EIEN = ADC1_USER_CH8_EIEN;
			AD1CH8CONbits.TRG1POL = ADC1_USER_CH8_TRG1POL;
			AD1CH8CONbits.ACCRO = ADC1_USER_CH8_ACCRO;
			AD1CH8CONbits.ACCBRST = ADC1_USER_CH8_ACCBRST;
			AD1CH8CONbits.ACCNUM = ADC1_USER_CH8_ACCNUM;
			AD1CH8CONbits.MODE = ADC1_USER_CH8_MODE;
		#endif 
	/*-----------------------------------------------------------------------*/
	/* AD1CH8DATAレジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH8DATA = 0x00000000u;
	/*-----------------------------------------------------------------------*/
	/* AD1CH8CNTレジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH8CNT = ADC1_USER_CH8_CNT;
		#ifdef DEF_BITNAME
			AD1CH8CNTbits.CNT = 0u;
			AD1CH8CNTbits.CNTSTAT = 0u;
		#endif 
	/*-----------------------------------------------------------------------*/
	/* AD1CH8CMPLOレジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH8CMPLO = ADC1_USER_CH8_CMPLO;
	/*-----------------------------------------------------------------------*/
	/* AD1CH8CMPHIレジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH8CMPHI = ADC1_USER_CH8_CMPHI;
	/*-----------------------------------------------------------------------*/
	/* AD1CH8ACCレジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH8ACC = 0x00000000u;

	/*-----------------------------------------------------------------------*/
	/* AD1CH9CONレジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH9CON = (ADC1_USER_CH9_TRG1SRC ) |
				(ADC1_USER_CH9_SAMC << 5U ) |
				(ADC1_USER_CH9_NINSEL << 8U ) |
				(ADC1_USER_CH9_LEFT << 10U ) |
				(ADC1_USER_CH9_PINSEL << 11U ) |
				(ADC1_USER_CH9_DIFF << 15U ) |
				(ADC1_USER_CH9_CMPMOD << 16U ) |
				(ADC1_USER_CH9_TRG2SRC << 19U ) |
				(ADC1_USER_CH9_EIEN << 24U ) |
				(ADC1_USER_CH9_TRG1POL << 25U ) |
				(ADC1_USER_CH9_ACCRO << 26U ) |
				(ADC1_USER_CH9_ACCBRST << 27U ) |
				(ADC1_USER_CH9_ACCNUM << 28U ) |
				(ADC1_USER_CH9_MODE << 30U ) ;
		#ifdef DEF_BITNAME
			AD1CH9CONbits.TRG1SRC = ADC1_USER_CH9_TRG1SRC;
			AD1CH9CONbits.SAMC = ADC1_USER_CH9_SAMC;
			AD1CH9CONbits.NINSEL = ADC1_USER_CH9_NINSEL;
			AD1CH9CONbits.LEFT = ADC1_USER_CH9_LEFT;
			AD1CH9CONbits.PINSEL = ADC1_USER_CH9_PINSEL;
			AD1CH9CONbits.DIFF = ADC1_USER_CH9_DIFF;
			AD1CH9CONbits.CMPMOD = ADC1_USER_CH9_CMPMOD;
			AD1CH9CONbits.TRG2SRC = ADC1_USER_CH9_TRG2SRC;
			AD1CH9CONbits.EIEN = ADC1_USER_CH9_EIEN;
			AD1CH9CONbits.TRG1POL = ADC1_USER_CH9_TRG1POL;
			AD1CH9CONbits.ACCRO = ADC1_USER_CH9_ACCRO;
			AD1CH9CONbits.ACCBRST = ADC1_USER_CH9_ACCBRST;
			AD1CH9CONbits.ACCNUM = ADC1_USER_CH9_ACCNUM;
			AD1CH9CONbits.MODE = ADC1_USER_CH9_MODE;
		#endif 
	/*-----------------------------------------------------------------------*/
	/* AD1CH9DATAレジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH9DATA = 0x00000000u;
	/*-----------------------------------------------------------------------*/
	/* AD1CH9CNTレジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH9CNT = ADC1_USER_CH9_CNT;
		#ifdef DEF_BITNAME
			AD1CH9CNTbits.CNT = 0u;
			AD1CH9CNTbits.CNTSTAT = 0u;
		#endif 
	/*-----------------------------------------------------------------------*/
	/* AD1CH9CMPLOレジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH9CMPLO = ADC1_USER_CH9_CMPLO;
	/*-----------------------------------------------------------------------*/
	/* AD1CH9CMPHIレジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH9CMPHI = ADC1_USER_CH9_CMPHI;
	/*-----------------------------------------------------------------------*/
	/* AD1CH9ACCレジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH9ACC = 0x00000000u;
		
	/*-----------------------------------------------------------------------*/
	/* AD1CH10CONレジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH10CON = (ADC1_USER_CH10_TRG1SRC ) |
				(ADC1_USER_CH10_SAMC << 5U ) |
				(ADC1_USER_CH10_NINSEL << 8U ) |
				(ADC1_USER_CH10_LEFT << 10U ) |
				(ADC1_USER_CH10_PINSEL << 11U ) |
				(ADC1_USER_CH10_DIFF << 15U ) |
				(ADC1_USER_CH10_CMPMOD << 16U ) |
				(ADC1_USER_CH10_TRG2SRC << 19U ) |
				(ADC1_USER_CH10_EIEN << 24U ) |
				(ADC1_USER_CH10_TRG1POL << 25U ) |
				(ADC1_USER_CH10_ACCRO << 26U ) |
				(ADC1_USER_CH10_ACCBRST << 27U ) |
				(ADC1_USER_CH10_ACCNUM << 28U ) |
				(ADC1_USER_CH10_MODE << 30U ) ;
		#ifdef DEF_BITNAME
			AD1CH10CONbits.TRG1SRC = ADC1_USER_CH10_TRG1SRC;
			AD1CH10CONbits.SAMC = ADC1_USER_CH10_SAMC;
			AD1CH10CONbits.NINSEL = ADC1_USER_CH10_NINSEL;
			AD1CH10CONbits.LEFT = ADC1_USER_CH10_LEFT;
			AD1CH10CONbits.PINSEL = ADC1_USER_CH10_PINSEL;
			AD1CH10CONbits.DIFF = ADC1_USER_CH10_DIFF;
			AD1CH10CONbits.CMPMOD = ADC1_USER_CH10_CMPMOD;
			AD1CH10CONbits.TRG2SRC = ADC1_USER_CH10_TRG2SRC;
			AD1CH10CONbits.EIEN = ADC1_USER_CH10_EIEN;
			AD1CH10CONbits.TRG1POL = ADC1_USER_CH10_TRG1POL;
			AD1CH10CONbits.ACCRO = ADC1_USER_CH10_ACCRO;
			AD1CH10CONbits.ACCBRST = ADC1_USER_CH10_ACCBRST;
			AD1CH10CONbits.ACCNUM = ADC1_USER_CH10_ACCNUM;
			AD1CH10CONbits.MODE = ADC1_USER_CH10_MODE;
		#endif 
	/*-----------------------------------------------------------------------*/
	/* AD1CH10DATAレジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH10DATA = 0x00000000u;
	/*-----------------------------------------------------------------------*/
	/* AD1CH10CNTレジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH10CNT = ADC1_USER_CH10_CNT;
		#ifdef DEF_BITNAME
			AD1CH10CNTbits.CNT = 0u;
			AD1CH10CNTbits.CNTSTAT = 0u;
		#endif 
	/*-----------------------------------------------------------------------*/
	/* AD1CH10CMPLOレジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH10CMPLO = ADC1_USER_CH10_CMPLO;
	/*-----------------------------------------------------------------------*/
	/* AD1CH10CMPHIレジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH10CMPHI = ADC1_USER_CH10_CMPHI;
	/*-----------------------------------------------------------------------*/
	/* AD1CH10ACCレジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH10ACC = 0x00000000u;

	/*-----------------------------------------------------------------------*/
	/* AD1CH11CONレジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH11CON = (ADC1_USER_CH11_TRG1SRC ) |
				(ADC1_USER_CH11_SAMC << 5U ) |
				(ADC1_USER_CH11_NINSEL << 8U ) |
				(ADC1_USER_CH11_LEFT << 10U ) |
				(ADC1_USER_CH11_PINSEL << 11U ) |
				(ADC1_USER_CH11_DIFF << 15U ) |
				(ADC1_USER_CH11_CMPMOD << 16U ) |
				(ADC1_USER_CH11_TRG2SRC << 19U ) |
				(ADC1_USER_CH11_EIEN << 24U ) |
				(ADC1_USER_CH11_TRG1POL << 25U ) |
				(ADC1_USER_CH11_ACCRO << 26U ) |
				(ADC1_USER_CH11_ACCBRST << 27U ) |
				(ADC1_USER_CH11_ACCNUM << 28U ) |
				(ADC1_USER_CH11_MODE << 30U ) ;
		#ifdef DEF_BITNAME
			AD1CH11CONbits.TRG1SRC = ADC1_USER_CH11_TRG1SRC;
			AD1CH11CONbits.SAMC = ADC1_USER_CH11_SAMC;
			AD1CH11CONbits.NINSEL = ADC1_USER_CH11_NINSEL;
			AD1CH11CONbits.LEFT = ADC1_USER_CH11_LEFT;
			AD1CH11CONbits.PINSEL = ADC1_USER_CH11_PINSEL;
			AD1CH11CONbits.DIFF = ADC1_USER_CH11_DIFF;
			AD1CH11CONbits.CMPMOD = ADC1_USER_CH11_CMPMOD;
			AD1CH11CONbits.TRG2SRC = ADC1_USER_CH11_TRG2SRC;
			AD1CH11CONbits.EIEN = ADC1_USER_CH11_EIEN;
			AD1CH11CONbits.TRG1POL = ADC1_USER_CH11_TRG1POL;
			AD1CH11CONbits.ACCRO = ADC1_USER_CH11_ACCRO;
			AD1CH11CONbits.ACCBRST = ADC1_USER_CH11_ACCBRST;
			AD1CH11CONbits.ACCNUM = ADC1_USER_CH11_ACCNUM;
			AD1CH11CONbits.MODE = ADC1_USER_CH11_MODE;
		#endif 
	/*-----------------------------------------------------------------------*/
	/* AD1CH11DATAレジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH11DATA = 0x00000000u;
	/*-----------------------------------------------------------------------*/
	/* AD1CH11CNTレジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH11CNT = ADC1_USER_CH11_CNT;
		#ifdef DEF_BITNAME
			AD1CH11CNTbits.CNT = 0u;
			AD1CH11CNTbits.CNTSTAT = 0u;
		#endif 
	/*-----------------------------------------------------------------------*/
	/* AD1CH11CMPLOレジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH11CMPLO = ADC1_USER_CH11_CMPLO;
	/*-----------------------------------------------------------------------*/
	/* AD1CH11CMPHIレジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH11CMPHI = ADC1_USER_CH11_CMPHI;
	/*-----------------------------------------------------------------------*/
	/* AD1CH11ACCレジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH11ACC = 0x00000000u;
		
	/*-----------------------------------------------------------------------*/
	/* AD1CH12CONレジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH12CON = (ADC1_USER_CH12_TRG1SRC ) |
				(ADC1_USER_CH12_SAMC << 5U ) |
				(ADC1_USER_CH12_NINSEL << 8U ) |
				(ADC1_USER_CH12_LEFT << 10U ) |
				(ADC1_USER_CH12_PINSEL << 11U ) |
				(ADC1_USER_CH12_DIFF << 15U ) |
				(ADC1_USER_CH12_CMPMOD << 16U ) |
				(ADC1_USER_CH12_TRG2SRC << 19U ) |
				(ADC1_USER_CH12_EIEN << 24U ) |
				(ADC1_USER_CH12_TRG1POL << 25U ) |
				(ADC1_USER_CH12_ACCRO << 26U ) |
				(ADC1_USER_CH12_ACCBRST << 27U ) |
				(ADC1_USER_CH12_ACCNUM << 28U ) |
				(ADC1_USER_CH12_MODE << 30U ) ;
		#ifdef DEF_BITNAME
			AD1CH12CONbits.TRG1SRC = ADC1_USER_CH12_TRG1SRC;
			AD1CH12CONbits.SAMC = ADC1_USER_CH12_SAMC;
			AD1CH12CONbits.NINSEL = ADC1_USER_CH12_NINSEL;
			AD1CH12CONbits.LEFT = ADC1_USER_CH12_LEFT;
			AD1CH12CONbits.PINSEL = ADC1_USER_CH12_PINSEL;
			AD1CH12CONbits.DIFF = ADC1_USER_CH12_DIFF;
			AD1CH12CONbits.CMPMOD = ADC1_USER_CH12_CMPMOD;
			AD1CH12CONbits.TRG2SRC = ADC1_USER_CH12_TRG2SRC;
			AD1CH12CONbits.EIEN = ADC1_USER_CH12_EIEN;
			AD1CH12CONbits.TRG1POL = ADC1_USER_CH12_TRG1POL;
			AD1CH12CONbits.ACCRO = ADC1_USER_CH12_ACCRO;
			AD1CH12CONbits.ACCBRST = ADC1_USER_CH12_ACCBRST;
			AD1CH12CONbits.ACCNUM = ADC1_USER_CH12_ACCNUM;
			AD1CH12CONbits.MODE = ADC1_USER_CH12_MODE;
		#endif 
	/*-----------------------------------------------------------------------*/
	/* AD1CH12DATAレジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH12DATA = 0x00000000u;
	/*-----------------------------------------------------------------------*/
	/* AD1CH12CNTレジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH12CNT = ADC1_USER_CH12_CNT;
		#ifdef DEF_BITNAME
			AD1CH12CNTbits.CNT = 0u;
			AD1CH12CNTbits.CNTSTAT = 0u;
		#endif 
	/*-----------------------------------------------------------------------*/
	/* AD1CH12CMPLOレジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH12CMPLO = ADC1_USER_CH12_CMPLO;
	/*-----------------------------------------------------------------------*/
	/* AD1CH12CMPHIレジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH12CMPHI = ADC1_USER_CH12_CMPHI;
	/*-----------------------------------------------------------------------*/
	/* AD1CH12ACCレジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH12ACC = 0x00000000u;

	/*-----------------------------------------------------------------------*/
	/* AD1CH13CONレジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH13CON = (ADC1_USER_CH13_TRG1SRC ) |
				(ADC1_USER_CH13_SAMC << 5U ) |
				(ADC1_USER_CH13_NINSEL << 8U ) |
				(ADC1_USER_CH13_LEFT << 10U ) |
				(ADC1_USER_CH13_PINSEL << 11U ) |
				(ADC1_USER_CH13_DIFF << 15U ) |
				(ADC1_USER_CH13_CMPMOD << 16U ) |
				(ADC1_USER_CH13_TRG2SRC << 19U ) |
				(ADC1_USER_CH13_EIEN << 24U ) |
				(ADC1_USER_CH13_TRG1POL << 25U ) |
				(ADC1_USER_CH13_ACCRO << 26U ) |
				(ADC1_USER_CH13_ACCBRST << 27U ) |
				(ADC1_USER_CH13_ACCNUM << 28U ) |
				(ADC1_USER_CH13_MODE << 30U ) ;
		#ifdef DEF_BITNAME
			AD1CH13CONbits.TRG1SRC = ADC1_USER_CH13_TRG1SRC;
			AD1CH13CONbits.SAMC = ADC1_USER_CH13_SAMC;
			AD1CH13CONbits.NINSEL = ADC1_USER_CH13_NINSEL;
			AD1CH13CONbits.LEFT = ADC1_USER_CH13_LEFT;
			AD1CH13CONbits.PINSEL = ADC1_USER_CH13_PINSEL;
			AD1CH13CONbits.DIFF = ADC1_USER_CH13_DIFF;
			AD1CH13CONbits.CMPMOD = ADC1_USER_CH13_CMPMOD;
			AD1CH13CONbits.TRG2SRC = ADC1_USER_CH13_TRG2SRC;
			AD1CH13CONbits.EIEN = ADC1_USER_CH13_EIEN;
			AD1CH13CONbits.TRG1POL = ADC1_USER_CH13_TRG1POL;
			AD1CH13CONbits.ACCRO = ADC1_USER_CH13_ACCRO;
			AD1CH13CONbits.ACCBRST = ADC1_USER_CH13_ACCBRST;
			AD1CH13CONbits.ACCNUM = ADC1_USER_CH13_ACCNUM;
			AD1CH13CONbits.MODE = ADC1_USER_CH13_MODE;
		#endif 
	/*-----------------------------------------------------------------------*/
	/* AD1CH13DATAレジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH13DATA = 0x00000000u;
	/*-----------------------------------------------------------------------*/
	/* AD1CH13CNTレジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH13CNT = ADC1_USER_CH13_CNT;
		#ifdef DEF_BITNAME
			AD1CH13CNTbits.CNT = 0u;
			AD1CH13CNTbits.CNTSTAT = 0u;
		#endif 
	/*-----------------------------------------------------------------------*/
	/* AD1CH13CMPLOレジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH13CMPLO = ADC1_USER_CH13_CMPLO;
	/*-----------------------------------------------------------------------*/
	/* AD1CH13CMPHIレジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH13CMPHI = ADC1_USER_CH13_CMPHI;
	/*-----------------------------------------------------------------------*/
	/* AD1CH13ACCレジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH13ACC = 0x00000000u;
		
	/*-----------------------------------------------------------------------*/
	/* AD1CH14CONレジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH14CON = (ADC1_USER_CH14_TRG1SRC ) |
				(ADC1_USER_CH14_SAMC << 5U ) |
				(ADC1_USER_CH14_NINSEL << 8U ) |
				(ADC1_USER_CH14_LEFT << 10U ) |
				(ADC1_USER_CH14_PINSEL << 11U ) |
				(ADC1_USER_CH14_DIFF << 15U ) |
				(ADC1_USER_CH14_CMPMOD << 16U ) |
				(ADC1_USER_CH14_TRG2SRC << 19U ) |
				(ADC1_USER_CH14_EIEN << 24U ) |
				(ADC1_USER_CH14_TRG1POL << 25U ) |
				(ADC1_USER_CH14_ACCRO << 26U ) |
				(ADC1_USER_CH14_ACCBRST << 27U ) |
				(ADC1_USER_CH14_ACCNUM << 28U ) |
				(ADC1_USER_CH14_MODE << 30U ) ;
		#ifdef DEF_BITNAME
			AD1CH14CONbits.TRG1SRC = ADC1_USER_CH14_TRG1SRC;
			AD1CH14CONbits.SAMC = ADC1_USER_CH14_SAMC;
			AD1CH14CONbits.NINSEL = ADC1_USER_CH14_NINSEL;
			AD1CH14CONbits.LEFT = ADC1_USER_CH14_LEFT;
			AD1CH14CONbits.PINSEL = ADC1_USER_CH14_PINSEL;
			AD1CH14CONbits.DIFF = ADC1_USER_CH14_DIFF;
			AD1CH14CONbits.CMPMOD = ADC1_USER_CH14_CMPMOD;
			AD1CH14CONbits.TRG2SRC = ADC1_USER_CH14_TRG2SRC;
			AD1CH14CONbits.EIEN = ADC1_USER_CH14_EIEN;
			AD1CH14CONbits.TRG1POL = ADC1_USER_CH14_TRG1POL;
			AD1CH14CONbits.ACCRO = ADC1_USER_CH14_ACCRO;
			AD1CH14CONbits.ACCBRST = ADC1_USER_CH14_ACCBRST;
			AD1CH14CONbits.ACCNUM = ADC1_USER_CH14_ACCNUM;
			AD1CH14CONbits.MODE = ADC1_USER_CH14_MODE;
		#endif 
	/*-----------------------------------------------------------------------*/
	/* AD1CH14DATAレジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH14DATA = 0x00000000u;
	/*-----------------------------------------------------------------------*/
	/* AD1CH14CNTレジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH14CNT = ADC1_USER_CH14_CNT;
		#ifdef DEF_BITNAME
			AD1CH14CNTbits.CNT = 0u;
			AD1CH14CNTbits.CNTSTAT = 0u;
		#endif 
	/*-----------------------------------------------------------------------*/
	/* AD1CH14CMPLOレジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH14CMPLO = ADC1_USER_CH14_CMPLO;
	/*-----------------------------------------------------------------------*/
	/* AD1CH14CMPHIレジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH14CMPHI = ADC1_USER_CH14_CMPHI;
	/*-----------------------------------------------------------------------*/
	/* AD1CH14ACCレジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH14ACC = 0x00000000u;

	/*-----------------------------------------------------------------------*/
	/* AD1CH15CONレジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH15CON = (ADC1_USER_CH15_TRG1SRC ) |
				(ADC1_USER_CH15_SAMC << 5U ) |
				(ADC1_USER_CH15_NINSEL << 8U ) |
				(ADC1_USER_CH15_LEFT << 10U ) |
				(ADC1_USER_CH15_PINSEL << 11U ) |
				(ADC1_USER_CH15_DIFF << 15U ) |
				(ADC1_USER_CH15_CMPMOD << 16U ) |
				(ADC1_USER_CH15_TRG2SRC << 19U ) |
				(ADC1_USER_CH15_EIEN << 24U ) |
				(ADC1_USER_CH15_TRG1POL << 25U ) |
				(ADC1_USER_CH15_ACCRO << 26U ) |
				(ADC1_USER_CH15_ACCBRST << 27U ) |
				(ADC1_USER_CH15_ACCNUM << 28U ) |
				(ADC1_USER_CH15_MODE << 30U ) ;
		#ifdef DEF_BITNAME
			AD1CH15CONbits.TRG1SRC = ADC1_USER_CH15_TRG1SRC;
			AD1CH15CONbits.SAMC = ADC1_USER_CH15_SAMC;
			AD1CH15CONbits.NINSEL = ADC1_USER_CH15_NINSEL;
			AD1CH15CONbits.LEFT = ADC1_USER_CH15_LEFT;
			AD1CH15CONbits.PINSEL = ADC1_USER_CH15_PINSEL;
			AD1CH15CONbits.DIFF = ADC1_USER_CH15_DIFF;
			AD1CH15CONbits.CMPMOD = ADC1_USER_CH15_CMPMOD;
			AD1CH15CONbits.TRG2SRC = ADC1_USER_CH15_TRG2SRC;
			AD1CH15CONbits.EIEN = ADC1_USER_CH15_EIEN;
			AD1CH15CONbits.TRG1POL = ADC1_USER_CH15_TRG1POL;
			AD1CH15CONbits.ACCRO = ADC1_USER_CH15_ACCRO;
			AD1CH15CONbits.ACCBRST = ADC1_USER_CH15_ACCBRST;
			AD1CH15CONbits.ACCNUM = ADC1_USER_CH15_ACCNUM;
			AD1CH15CONbits.MODE = ADC1_USER_CH15_MODE;
		#endif 
	/*-----------------------------------------------------------------------*/
	/* AD1CH15DATAレジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH15DATA = 0x00000000u;
	/*-----------------------------------------------------------------------*/
	/* AD1CH15CNTレジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH15CNT = ADC1_USER_CH15_CNT;
		#ifdef DEF_BITNAME
			AD1CH15CNTbits.CNT = 0u;
			AD1CH15CNTbits.CNTSTAT = 0u;
		#endif 
	/*-----------------------------------------------------------------------*/
	/* AD1CH15CMPLOレジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH15CMPLO = ADC1_USER_CH15_CMPLO;
	/*-----------------------------------------------------------------------*/
	/* AD1CH15CMPHIレジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH15CMPHI = ADC1_USER_CH15_CMPHI;
	/*-----------------------------------------------------------------------*/
	/* AD1CH15ACCレジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH15ACC = 0x00000000u;
		
	/*-----------------------------------------------------------------------*/
	/* AD1CH16CONレジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH16CON = (ADC1_USER_CH16_TRG1SRC ) |
				(ADC1_USER_CH16_SAMC << 5U ) |
				(ADC1_USER_CH16_NINSEL << 8U ) |
				(ADC1_USER_CH16_LEFT << 10U ) |
				(ADC1_USER_CH16_PINSEL << 11U ) |
				(ADC1_USER_CH16_DIFF << 15U ) |
				(ADC1_USER_CH16_CMPMOD << 16U ) |
				(ADC1_USER_CH16_TRG2SRC << 19U ) |
				(ADC1_USER_CH16_EIEN << 24U ) |
				(ADC1_USER_CH16_TRG1POL << 25U ) |
				(ADC1_USER_CH16_ACCRO << 26U ) |
				(ADC1_USER_CH16_ACCBRST << 27U ) |
				(ADC1_USER_CH16_ACCNUM << 28U ) |
				(ADC1_USER_CH16_MODE << 30U ) ;
		#ifdef DEF_BITNAME
			AD1CH16CONbits.TRG1SRC = ADC1_USER_CH16_TRG1SRC;
			AD1CH16CONbits.SAMC = ADC1_USER_CH16_SAMC;
			AD1CH16CONbits.NINSEL = ADC1_USER_CH16_NINSEL;
			AD1CH16CONbits.LEFT = ADC1_USER_CH16_LEFT;
			AD1CH16CONbits.PINSEL = ADC1_USER_CH16_PINSEL;
			AD1CH16CONbits.DIFF = ADC1_USER_CH16_DIFF;
			AD1CH16CONbits.CMPMOD = ADC1_USER_CH16_CMPMOD;
			AD1CH16CONbits.TRG2SRC = ADC1_USER_CH16_TRG2SRC;
			AD1CH16CONbits.EIEN = ADC1_USER_CH16_EIEN;
			AD1CH16CONbits.TRG1POL = ADC1_USER_CH16_TRG1POL;
			AD1CH16CONbits.ACCRO = ADC1_USER_CH16_ACCRO;
			AD1CH16CONbits.ACCBRST = ADC1_USER_CH16_ACCBRST;
			AD1CH16CONbits.ACCNUM = ADC1_USER_CH16_ACCNUM;
			AD1CH16CONbits.MODE = ADC1_USER_CH16_MODE;
		#endif 
	/*-----------------------------------------------------------------------*/
	/* AD1CH16DATAレジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH16DATA = 0x00000000u;
	/*-----------------------------------------------------------------------*/
	/* AD1CH16CNTレジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH16CNT = ADC1_USER_CH16_CNT;
		#ifdef DEF_BITNAME
			AD1CH16CNTbits.CNT = 0u;
			AD1CH16CNTbits.CNTSTAT = 0u;
		#endif 
	/*-----------------------------------------------------------------------*/
	/* AD1CH16CMPLOレジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH16CMPLO = ADC1_USER_CH16_CMPLO;
	/*-----------------------------------------------------------------------*/
	/* AD1CH16CMPHIレジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH16CMPHI = ADC1_USER_CH16_CMPHI;
	/*-----------------------------------------------------------------------*/
	/* AD1CH16ACCレジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH16ACC = 0x00000000u;

	/*-----------------------------------------------------------------------*/
	/* AD1CH17CONレジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH17CON = (ADC1_USER_CH17_TRG1SRC ) |
				(ADC1_USER_CH17_SAMC << 5U ) |
				(ADC1_USER_CH17_NINSEL << 8U ) |
				(ADC1_USER_CH17_LEFT << 10U ) |
				(ADC1_USER_CH17_PINSEL << 11U ) |
				(ADC1_USER_CH17_DIFF << 15U ) |
				(ADC1_USER_CH17_CMPMOD << 16U ) |
				(ADC1_USER_CH17_TRG2SRC << 19U ) |
				(ADC1_USER_CH17_EIEN << 24U ) |
				(ADC1_USER_CH17_TRG1POL << 25U ) |
				(ADC1_USER_CH17_ACCRO << 26U ) |
				(ADC1_USER_CH17_ACCBRST << 27U ) |
				(ADC1_USER_CH17_ACCNUM << 28U ) |
				(ADC1_USER_CH17_MODE << 30U ) ;
		#ifdef DEF_BITNAME
			AD1CH17CONbits.TRG1SRC = ADC1_USER_CH17_TRG1SRC;
			AD1CH17CONbits.SAMC = ADC1_USER_CH17_SAMC;
			AD1CH17CONbits.NINSEL = ADC1_USER_CH17_NINSEL;
			AD1CH17CONbits.LEFT = ADC1_USER_CH17_LEFT;
			AD1CH17CONbits.PINSEL = ADC1_USER_CH17_PINSEL;
			AD1CH17CONbits.DIFF = ADC1_USER_CH17_DIFF;
			AD1CH17CONbits.CMPMOD = ADC1_USER_CH17_CMPMOD;
			AD1CH17CONbits.TRG2SRC = ADC1_USER_CH17_TRG2SRC;
			AD1CH17CONbits.EIEN = ADC1_USER_CH17_EIEN;
			AD1CH17CONbits.TRG1POL = ADC1_USER_CH17_TRG1POL;
			AD1CH17CONbits.ACCRO = ADC1_USER_CH17_ACCRO;
			AD1CH17CONbits.ACCBRST = ADC1_USER_CH17_ACCBRST;
			AD1CH17CONbits.ACCNUM = ADC1_USER_CH17_ACCNUM;
			AD1CH17CONbits.MODE = ADC1_USER_CH17_MODE;
		#endif 
	/*-----------------------------------------------------------------------*/
	/* AD1CH17DATAレジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH17DATA = 0x00000000u;
	/*-----------------------------------------------------------------------*/
	/* AD1CH17CNTレジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH17CNT = ADC1_USER_CH17_CNT;
		#ifdef DEF_BITNAME
			AD1CH17CNTbits.CNT = 0u;
			AD1CH17CNTbits.CNTSTAT = 0u;
		#endif 
	/*-----------------------------------------------------------------------*/
	/* AD1CH17CMPLOレジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH17CMPLO = ADC1_USER_CH17_CMPLO;
	/*-----------------------------------------------------------------------*/
	/* AD1CH17CMPHIレジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH17CMPHI = ADC1_USER_CH17_CMPHI;
	/*-----------------------------------------------------------------------*/
	/* AD1CH17ACCレジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH17ACC = 0x00000000u;
		
	/*-----------------------------------------------------------------------*/
	/* AD1CH18CONレジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH18CON = (ADC1_USER_CH18_TRG1SRC ) |
				(ADC1_USER_CH18_SAMC << 5U ) |
				(ADC1_USER_CH18_NINSEL << 8U ) |
				(ADC1_USER_CH18_LEFT << 10U ) |
				(ADC1_USER_CH18_PINSEL << 11U ) |
				(ADC1_USER_CH18_DIFF << 15U ) |
				(ADC1_USER_CH18_CMPMOD << 16U ) |
				(ADC1_USER_CH18_TRG2SRC << 19U ) |
				(ADC1_USER_CH18_EIEN << 24U ) |
				(ADC1_USER_CH18_TRG1POL << 25U ) |
				(ADC1_USER_CH18_ACCRO << 26U ) |
				(ADC1_USER_CH18_ACCBRST << 27U ) |
				(ADC1_USER_CH18_ACCNUM << 28U ) |
				(ADC1_USER_CH18_MODE << 30U ) ;
		#ifdef DEF_BITNAME
			AD1CH18CONbits.TRG1SRC = ADC1_USER_CH18_TRG1SRC;
			AD1CH18CONbits.SAMC = ADC1_USER_CH18_SAMC;
			AD1CH18CONbits.NINSEL = ADC1_USER_CH18_NINSEL;
			AD1CH18CONbits.LEFT = ADC1_USER_CH18_LEFT;
			AD1CH18CONbits.PINSEL = ADC1_USER_CH18_PINSEL;
			AD1CH18CONbits.DIFF = ADC1_USER_CH18_DIFF;
			AD1CH18CONbits.CMPMOD = ADC1_USER_CH18_CMPMOD;
			AD1CH18CONbits.TRG2SRC = ADC1_USER_CH18_TRG2SRC;
			AD1CH18CONbits.EIEN = ADC1_USER_CH18_EIEN;
			AD1CH18CONbits.TRG1POL = ADC1_USER_CH18_TRG1POL;
			AD1CH18CONbits.ACCRO = ADC1_USER_CH18_ACCRO;
			AD1CH18CONbits.ACCBRST = ADC1_USER_CH18_ACCBRST;
			AD1CH18CONbits.ACCNUM = ADC1_USER_CH18_ACCNUM;
			AD1CH18CONbits.MODE = ADC1_USER_CH18_MODE;
		#endif 
	/*-----------------------------------------------------------------------*/
	/* AD1CH18DATAレジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH18DATA = 0x00000000u;
	/*-----------------------------------------------------------------------*/
	/* AD1CH18CNTレジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH18CNT = ADC1_USER_CH18_CNT;
		#ifdef DEF_BITNAME
			AD1CH18CNTbits.CNT = 0u;
			AD1CH18CNTbits.CNTSTAT = 0u;
		#endif 
	/*-----------------------------------------------------------------------*/
	/* AD1CH18CMPLOレジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH18CMPLO = ADC1_USER_CH18_CMPLO;
	/*-----------------------------------------------------------------------*/
	/* AD1CH18CMPHIレジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH18CMPHI = ADC1_USER_CH18_CMPHI;
	/*-----------------------------------------------------------------------*/
	/* AD1CH18ACCレジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH18ACC = 0x00000000u;

	/*-----------------------------------------------------------------------*/
	/* AD1CH19CONレジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH19CON = (ADC1_USER_CH19_TRG1SRC ) |
				(ADC1_USER_CH19_SAMC << 5U ) |
				(ADC1_USER_CH19_NINSEL << 8U ) |
				(ADC1_USER_CH19_LEFT << 10U ) |
				(ADC1_USER_CH19_PINSEL << 11U ) |
				(ADC1_USER_CH19_DIFF << 15U ) |
				(ADC1_USER_CH19_CMPMOD << 16U ) |
				(ADC1_USER_CH19_TRG2SRC << 19U ) |
				(ADC1_USER_CH19_EIEN << 24U ) |
				(ADC1_USER_CH19_TRG1POL << 25U ) |
				(ADC1_USER_CH19_ACCRO << 26U ) |
				(ADC1_USER_CH19_ACCBRST << 27U ) |
				(ADC1_USER_CH19_ACCNUM << 28U ) |
				(ADC1_USER_CH19_MODE << 30U ) ;
		#ifdef DEF_BITNAME
			AD1CH19CONbits.TRG1SRC = ADC1_USER_CH19_TRG1SRC;
			AD1CH19CONbits.SAMC = ADC1_USER_CH19_SAMC;
			AD1CH19CONbits.NINSEL = ADC1_USER_CH19_NINSEL;
			AD1CH19CONbits.LEFT = ADC1_USER_CH19_LEFT;
			AD1CH19CONbits.PINSEL = ADC1_USER_CH19_PINSEL;
			AD1CH19CONbits.DIFF = ADC1_USER_CH19_DIFF;
			AD1CH19CONbits.CMPMOD = ADC1_USER_CH19_CMPMOD;
			AD1CH19CONbits.TRG2SRC = ADC1_USER_CH19_TRG2SRC;
			AD1CH19CONbits.EIEN = ADC1_USER_CH19_EIEN;
			AD1CH19CONbits.TRG1POL = ADC1_USER_CH19_TRG1POL;
			AD1CH19CONbits.ACCRO = ADC1_USER_CH19_ACCRO;
			AD1CH19CONbits.ACCBRST = ADC1_USER_CH19_ACCBRST;
			AD1CH19CONbits.ACCNUM = ADC1_USER_CH19_ACCNUM;
			AD1CH19CONbits.MODE = ADC1_USER_CH19_MODE;
		#endif 
	/*-----------------------------------------------------------------------*/
	/* AD1CH19DATAレジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH19DATA = 0x00000000u;
	/*-----------------------------------------------------------------------*/
	/* AD1CH19CNTレジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH19CNT = ADC1_USER_CH19_CNT;
		#ifdef DEF_BITNAME
			AD1CH19CNTbits.CNT = 0u;
			AD1CH19CNTbits.CNTSTAT = 0u;
		#endif 
	/*-----------------------------------------------------------------------*/
	/* AD1CH19CMPLOレジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH19CMPLO = ADC1_USER_CH19_CMPLO;
	/*-----------------------------------------------------------------------*/
	/* AD1CH19CMPHIレジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH19CMPHI = ADC1_USER_CH19_CMPHI;
	/*-----------------------------------------------------------------------*/
	/* AD1CH19ACCレジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH19ACC = 0x00000000u;
		
#endif
	
}

/*----------------------------------------------------------------------------*/
/*
* @fn        vdg_ADC1_Set_All_Register(void)
* @brief        ADC1レジスタを初期化します 
* @param
* @return
* @detail 
 */
/*----------------------------------------------------------------------------*/
void vdg_ADC2_Set_All_Register(void)
{
	#if ( PMD_ADC2MD == PMD_MODULE_ENABLE )
	/*-----------------------------------------------------------------------*/
	/* AD2CONレジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CON = (ADC2_USER_CALCNT << 5U) |
				(ADC2_USER_STANDBY << 16U) |
				(ADC2_USER_RPTCNT << 18) |
				(ADC2_USER_CALRATE << 26U) |
				(ADC2_USER_ACALEN << 28U) ;
		#ifdef DEF_BITNAME
			AD2CONbits.CALCNT = ADC2_USER_CALCNT;
			AD2CONbits.BUFEN = 0u;
			AD2CONbits.TSTEN = 0u;
			AD2CONbits.TSTLOCK = 0u;
			AD2CONbits.SIDL = 0u;
			AD2CONbits.ON = 0u;
			AD2CONbits.STNDBY = ADC2_USER_STANDBY;
			AD2CONbits.VREFMOD = 0u;
			AD2CONbits.RPTCNT = ADC2_USER_RPTCNT;
			AD2CONbits.MODE = 0u;
			AD2CONbits.CALRATE = ADC2_USER_CALRATE;
			AD2CONbits.ACALEN = ADC2_USER_ACALEN;
			AD2CONbits.CALREQ = 0u;
			AD2CONbits.CALRDY = 0u;
			AD2CONbits.ADRDY = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD2DATAOVRレジスタ */
	/*-----------------------------------------------------------------------*/
		AD2DATAOVR = 0x00000000u;
	/*-----------------------------------------------------------------------*/
	/* AD2STATレジスタ */
	/*-----------------------------------------------------------------------*/
		AD2STAT = 0x00000000u;
		#ifdef DEF_BITNAME
			AD2STATbits.CH0RDY = 0u;
			AD2STATbits.CH1RDY = 0u;
			AD2STATbits.CH2RDY = 0u;
			AD2STATbits.CH3RDY = 0u;
			AD2STATbits.CH4RDY = 0u;
			AD2STATbits.CH5RDY = 0u;
			AD2STATbits.CH6RDY = 0u;
			AD2STATbits.CH7RDY = 0u;
			AD2STATbits.CH8RDY = 0u;
			AD2STATbits.CH9RDY = 0u;
			AD2STATbits.CH10RDY = 0u;
			AD2STATbits.CH11RDY = 0u;
			AD2STATbits.CH12RDY = 0u;
			AD2STATbits.CH13RDY = 0u;
			AD2STATbits.CH14RDY = 0u;
			AD2STATbits.CH15RDY = 0u;
			AD2STATbits.CH16RDY = 0u;
			AD2STATbits.CH17RDY = 0u;
			AD2STATbits.CH18RDY = 0u;
			AD2STATbits.CH19RDY = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD2CMPSTATレジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CMPSTAT = 0x00000000u;
		#ifdef DEF_BITNAME
			AD2CMPSTATbits.CH0CMP = 0u;
			AD2CMPSTATbits.CH1CMP = 0u;
			AD2CMPSTATbits.CH2CMP = 0u;
			AD2CMPSTATbits.CH3CMP = 0u;
			AD2CMPSTATbits.CH4CMP = 0u;
			AD2CMPSTATbits.CH5CMP = 0u;
			AD2CMPSTATbits.CH6CMP = 0u;
			AD2CMPSTATbits.CH7CMP = 0u;
			AD2CMPSTATbits.CH8CMP = 0u;
			AD2CMPSTATbits.CH9CMP = 0u;
			AD2CMPSTATbits.CH10CMP = 0u;
			AD2CMPSTATbits.CH11CMP = 0u;
			AD2CMPSTATbits.CH12CMP = 0u;
			AD2CMPSTATbits.CH13CMP = 0u;
			AD2CMPSTATbits.CH14CMP = 0u;
			AD2CMPSTATbits.CH15CMP = 0u;
			AD2CMPSTATbits.CH16CMP = 0u;
			AD2CMPSTATbits.CH17CMP = 0u;
			AD2CMPSTATbits.CH18CMP = 0u;
			AD2CMPSTATbits.CH19CMP = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD2SWTRGレジスタ */
	/*-----------------------------------------------------------------------*/
		AD2SWTRG = 0x00000000u;
		#ifdef DEF_BITNAME
			AD2SWTRGbits.CH0TRG = 0u;
			AD2SWTRGbits.CH1TRG = 0u;
			AD2SWTRGbits.CH2TRG = 0u;
			AD2SWTRGbits.CH3TRG = 0u;
			AD2SWTRGbits.CH4TRG = 0u;
			AD2SWTRGbits.CH5TRG = 0u;
			AD2SWTRGbits.CH6TRG = 0u;
			AD2SWTRGbits.CH7TRG = 0u;
			AD2SWTRGbits.CH8TRG = 0u;
			AD2SWTRGbits.CH9TRG = 0u;
			AD2SWTRGbits.CH10TRG = 0u;
			AD2SWTRGbits.CH11TRG = 0u;
			AD2SWTRGbits.CH12TRG = 0u;
			AD2SWTRGbits.CH13TRG = 0u;
			AD2SWTRGbits.CH14TRG = 0u;
			AD2SWTRGbits.CH15TRG = 0u;
			AD2SWTRGbits.CH16TRG = 0u;
			AD2SWTRGbits.CH17TRG = 0u;
			AD2SWTRGbits.CH18TRG = 0u;
			AD2SWTRGbits.CH19TRG = 0u;
		#endif 
	/*-----------------------------------------------------------------------*/
	/* AD2CH0CONレジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CH0CON = (ADC2_USER_CH0_TRG1SRC ) |
				(ADC2_USER_CH0_SAMC << 5U ) |
				(ADC2_USER_CH0_NINSEL << 8U ) |
				(ADC2_USER_CH0_LEFT << 10U ) |
				(ADC2_USER_CH0_PINSEL << 11U ) |
				(ADC2_USER_CH0_DIFF << 15U ) |
				(ADC2_USER_CH0_CMPMOD << 16U ) |
				(ADC2_USER_CH0_TRG2SRC << 19U ) |
				(ADC2_USER_CH0_EIEN << 24U ) |
				(ADC2_USER_CH0_TRG1POL << 25U ) |
				(ADC2_USER_CH0_ACCRO << 26U ) |
				(ADC2_USER_CH0_ACCBRST << 27U ) |
				(ADC2_USER_CH0_ACCNUM << 28U ) |
				(ADC2_USER_CH0_MODE << 30U ) ;
		#ifdef DEF_BITNAME
			AD2CH0CONbits.TRG1SRC = ADC2_USER_CH0_TRG1SRC;
			AD2CH0CONbits.SAMC = ADC2_USER_CH0_SAMC;
			AD2CH0CONbits.NINSEL = ADC2_USER_CH0_NINSEL;
			AD2CH0CONbits.LEFT = ADC2_USER_CH0_LEFT;
			AD2CH0CONbits.PINSEL = ADC2_USER_CH0_PINSEL;
			AD2CH0CONbits.DIFF = ADC2_USER_CH0_DIFF;
			AD2CH0CONbits.CMPMOD = ADC2_USER_CH0_CMPMOD;
			AD2CH0CONbits.TRG2SRC = ADC2_USER_CH0_TRG2SRC;
			AD2CH0CONbits.EIEN = ADC2_USER_CH0_EIEN;
			AD2CH0CONbits.TRG1POL = ADC2_USER_CH0_TRG1POL;
			AD2CH0CONbits.ACCRO = ADC2_USER_CH0_ACCRO;
			AD2CH0CONbits.ACCBRST = ADC2_USER_CH0_ACCBRST;
			AD2CH0CONbits.ACCNUM = ADC2_USER_CH0_ACCNUM;
			AD2CH0CONbits.MODE = ADC2_USER_CH0_MODE;
		#endif 
	/*-----------------------------------------------------------------------*/
	/* AD2CH0DATAレジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CH0DATA = 0x00000000u;
	/*-----------------------------------------------------------------------*/
	/* AD2CH0CNTレジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CH0CNT = ADC2_USER_CH0_CNT;
		#ifdef DEF_BITNAME
			AD2CH0CNTbits.CNT = 0u;
			AD2CH0CNTbits.CNTSTAT = 0u;
		#endif 
	/*-----------------------------------------------------------------------*/
	/* AD2CH0CMPLOレジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CH0CMPLO = ADC2_USER_CH0_CMPLO;
	/*-----------------------------------------------------------------------*/
	/* AD2CH0CMPHIレジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CH0CMPHI = ADC2_USER_CH0_CMPHI;
	/*-----------------------------------------------------------------------*/
	/* AD2CH0ACCレジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CH0ACC = 0x00000000u;

	/*-----------------------------------------------------------------------*/
	/* AD2CH1CONレジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CH1CON = (ADC2_USER_CH1_TRG1SRC ) |
				(ADC2_USER_CH1_SAMC << 5U ) |
				(ADC2_USER_CH1_NINSEL << 8U ) |
				(ADC2_USER_CH1_LEFT << 10U ) |
				(ADC2_USER_CH1_PINSEL << 11U ) |
				(ADC2_USER_CH1_DIFF << 15U ) |
				(ADC2_USER_CH1_CMPMOD << 16U ) |
				(ADC2_USER_CH1_TRG2SRC << 19U ) |
				(ADC2_USER_CH1_EIEN << 24U ) |
				(ADC2_USER_CH1_TRG1POL << 25U ) |
				(ADC2_USER_CH1_ACCRO << 26U ) |
				(ADC2_USER_CH1_ACCBRST << 27U ) |
				(ADC2_USER_CH1_ACCNUM << 28U ) |
				(ADC2_USER_CH1_MODE << 30U ) ;
		#ifdef DEF_BITNAME
			AD2CH1CONbits.TRG1SRC = ADC2_USER_CH1_TRG1SRC;
			AD2CH1CONbits.SAMC = ADC2_USER_CH1_SAMC;
			AD2CH1CONbits.NINSEL = ADC2_USER_CH1_NINSEL;
			AD2CH1CONbits.LEFT = ADC2_USER_CH1_LEFT;
			AD2CH1CONbits.PINSEL = ADC2_USER_CH1_PINSEL;
			AD2CH1CONbits.DIFF = ADC2_USER_CH1_DIFF;
			AD2CH1CONbits.CMPMOD = ADC2_USER_CH1_CMPMOD;
			AD2CH1CONbits.TRG2SRC = ADC2_USER_CH1_TRG2SRC;
			AD2CH1CONbits.EIEN = ADC2_USER_CH1_EIEN;
			AD2CH1CONbits.TRG1POL = ADC2_USER_CH1_TRG1POL;
			AD2CH1CONbits.ACCRO = ADC2_USER_CH1_ACCRO;
			AD2CH1CONbits.ACCBRST = ADC2_USER_CH1_ACCBRST;
			AD2CH1CONbits.ACCNUM = ADC2_USER_CH1_ACCNUM;
			AD2CH1CONbits.MODE = ADC2_USER_CH1_MODE;
		#endif 
	/*-----------------------------------------------------------------------*/
	/* AD2CH1DATAレジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CH1DATA = 0x00000000u;
	/*-----------------------------------------------------------------------*/
	/* AD2CH1CNTレジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CH1CNT = ADC2_USER_CH1_CNT;
		#ifdef DEF_BITNAME
			AD2CH1CNTbits.CNT = 0u;
			AD2CH1CNTbits.CNTSTAT = 0u;
		#endif 
	/*-----------------------------------------------------------------------*/
	/* AD2CH1CMPLOレジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CH1CMPLO = ADC2_USER_CH1_CMPLO;
	/*-----------------------------------------------------------------------*/
	/* AD2CH1CMPHIレジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CH1CMPHI = ADC2_USER_CH1_CMPHI;
	/*-----------------------------------------------------------------------*/
	/* AD2CH1ACCレジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CH1ACC = 0x00000000u;
	
	/*-----------------------------------------------------------------------*/
	/* AD2CH2CONレジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CH2CON = (ADC2_USER_CH2_TRG1SRC ) |
				(ADC2_USER_CH2_SAMC << 5U ) |
				(ADC2_USER_CH2_NINSEL << 8U ) |
				(ADC2_USER_CH2_LEFT << 10U ) |
				(ADC2_USER_CH2_PINSEL << 11U ) |
				(ADC2_USER_CH2_DIFF << 15U ) |
				(ADC2_USER_CH2_CMPMOD << 16U ) |
				(ADC2_USER_CH2_TRG2SRC << 19U ) |
				(ADC2_USER_CH2_EIEN << 24U ) |
				(ADC2_USER_CH2_TRG1POL << 25U ) |
				(ADC2_USER_CH2_ACCRO << 26U ) |
				(ADC2_USER_CH2_ACCBRST << 27U ) |
				(ADC2_USER_CH2_ACCNUM << 28U ) |
				(ADC2_USER_CH2_MODE << 30U ) ;
		#ifdef DEF_BITNAME
			AD2CH2CONbits.TRG1SRC = ADC2_USER_CH2_TRG1SRC;
			AD2CH2CONbits.SAMC = ADC2_USER_CH2_SAMC;
			AD2CH2CONbits.NINSEL = ADC2_USER_CH2_NINSEL;
			AD2CH2CONbits.LEFT = ADC2_USER_CH2_LEFT;
			AD2CH2CONbits.PINSEL = ADC2_USER_CH2_PINSEL;
			AD2CH2CONbits.DIFF = ADC2_USER_CH2_DIFF;
			AD2CH2CONbits.CMPMOD = ADC2_USER_CH2_CMPMOD;
			AD2CH2CONbits.TRG2SRC = ADC2_USER_CH2_TRG2SRC;
			AD2CH2CONbits.EIEN = ADC2_USER_CH2_EIEN;
			AD2CH2CONbits.TRG1POL = ADC2_USER_CH2_TRG1POL;
			AD2CH2CONbits.ACCRO = ADC2_USER_CH2_ACCRO;
			AD2CH2CONbits.ACCBRST = ADC2_USER_CH2_ACCBRST;
			AD2CH2CONbits.ACCNUM = ADC2_USER_CH2_ACCNUM;
			AD2CH2CONbits.MODE = ADC2_USER_CH2_MODE;
		#endif 
	/*-----------------------------------------------------------------------*/
	/* AD2CH2DATAレジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CH2DATA = 0x00000000u;
	/*-----------------------------------------------------------------------*/
	/* AD2CH2CNTレジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CH2CNT = ADC2_USER_CH2_CNT;
		#ifdef DEF_BITNAME
			AD2CH2CNTbits.CNT = 0u;
			AD2CH2CNTbits.CNTSTAT = 0u;
		#endif 
	/*-----------------------------------------------------------------------*/
	/* AD2CH2CMPLOレジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CH2CMPLO = ADC2_USER_CH2_CMPLO;
	/*-----------------------------------------------------------------------*/
	/* AD2CH2CMPHIレジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CH2CMPHI = ADC2_USER_CH2_CMPHI;
	/*-----------------------------------------------------------------------*/
	/* AD2CH2ACCレジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CH3ACC = 0x00000000u;

	/*-----------------------------------------------------------------------*/
	/* AD2CH3CONレジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CH3CON = (ADC2_USER_CH3_TRG1SRC ) |
				(ADC2_USER_CH3_SAMC << 5U ) |
				(ADC2_USER_CH3_NINSEL << 8U ) |
				(ADC2_USER_CH3_LEFT << 10U ) |
				(ADC2_USER_CH3_PINSEL << 11U ) |
				(ADC2_USER_CH3_DIFF << 15U ) |
				(ADC2_USER_CH3_CMPMOD << 16U ) |
				(ADC2_USER_CH3_TRG2SRC << 19U ) |
				(ADC2_USER_CH3_EIEN << 24U ) |
				(ADC2_USER_CH3_TRG1POL << 25U ) |
				(ADC2_USER_CH3_ACCRO << 26U ) |
				(ADC2_USER_CH3_ACCBRST << 27U ) |
				(ADC2_USER_CH3_ACCNUM << 28U ) |
				(ADC2_USER_CH3_MODE << 30U ) ;
		#ifdef DEF_BITNAME
			AD2CH3CONbits.TRG1SRC = ADC2_USER_CH3_TRG1SRC;
			AD2CH3CONbits.SAMC = ADC2_USER_CH3_SAMC;
			AD2CH3CONbits.NINSEL = ADC2_USER_CH3_NINSEL;
			AD2CH3CONbits.LEFT = ADC2_USER_CH3_LEFT;
			AD2CH3CONbits.PINSEL = ADC2_USER_CH3_PINSEL;
			AD2CH3CONbits.DIFF = ADC2_USER_CH3_DIFF;
			AD2CH3CONbits.CMPMOD = ADC2_USER_CH3_CMPMOD;
			AD2CH3CONbits.TRG2SRC = ADC2_USER_CH3_TRG2SRC;
			AD2CH3CONbits.EIEN = ADC2_USER_CH3_EIEN;
			AD2CH3CONbits.TRG1POL = ADC2_USER_CH3_TRG1POL;
			AD2CH3CONbits.ACCRO = ADC2_USER_CH3_ACCRO;
			AD2CH3CONbits.ACCBRST = ADC2_USER_CH3_ACCBRST;
			AD2CH3CONbits.ACCNUM = ADC2_USER_CH3_ACCNUM;
			AD2CH3CONbits.MODE = ADC2_USER_CH3_MODE;
		#endif 
	/*-----------------------------------------------------------------------*/
	/* AD2CH3DATAレジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CH3DATA = 0x00000000u;
	/*-----------------------------------------------------------------------*/
	/* AD2CH3CNTレジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CH3CNT = ADC2_USER_CH3_CNT;
		#ifdef DEF_BITNAME
			AD2CH3CNTbits.CNT = 0u;
			AD2CH3CNTbits.CNTSTAT = 0u;
		#endif 
	/*-----------------------------------------------------------------------*/
	/* AD2CH3CMPLOレジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CH3CMPLO = ADC2_USER_CH3_CMPLO;
	/*-----------------------------------------------------------------------*/
	/* AD2CH3CMPHIレジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CH3CMPHI = ADC2_USER_CH3_CMPHI;
	/*-----------------------------------------------------------------------*/
	/* AD2CH3ACCレジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CH3ACC = 0x00000000u;
		
	/*-----------------------------------------------------------------------*/
	/* AD2CH4CONレジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CH4CON = (ADC2_USER_CH4_TRG1SRC ) |
				(ADC2_USER_CH4_SAMC << 5U ) |
				(ADC2_USER_CH4_NINSEL << 8U ) |
				(ADC2_USER_CH4_LEFT << 10U ) |
				(ADC2_USER_CH4_PINSEL << 11U ) |
				(ADC2_USER_CH4_DIFF << 15U ) |
				(ADC2_USER_CH4_CMPMOD << 16U ) |
				(ADC2_USER_CH4_TRG2SRC << 19U ) |
				(ADC2_USER_CH4_EIEN << 24U ) |
				(ADC2_USER_CH4_TRG1POL << 25U ) |
				(ADC2_USER_CH4_ACCRO << 26U ) |
				(ADC2_USER_CH4_ACCBRST << 27U ) |
				(ADC2_USER_CH4_ACCNUM << 28U ) |
				(ADC2_USER_CH4_MODE << 30U ) ;
		#ifdef DEF_BITNAME
			AD2CH4CONbits.TRG1SRC = ADC2_USER_CH4_TRG1SRC;
			AD2CH4CONbits.SAMC = ADC2_USER_CH4_SAMC;
			AD2CH4CONbits.NINSEL = ADC2_USER_CH4_NINSEL;
			AD2CH4CONbits.LEFT = ADC2_USER_CH4_LEFT;
			AD2CH4CONbits.PINSEL = ADC2_USER_CH4_PINSEL;
			AD2CH4CONbits.DIFF = ADC2_USER_CH4_DIFF;
			AD2CH4CONbits.CMPMOD = ADC2_USER_CH4_CMPMOD;
			AD2CH4CONbits.TRG2SRC = ADC2_USER_CH4_TRG2SRC;
			AD2CH4CONbits.EIEN = ADC2_USER_CH4_EIEN;
			AD2CH4CONbits.TRG1POL = ADC2_USER_CH4_TRG1POL;
			AD2CH4CONbits.ACCRO = ADC2_USER_CH4_ACCRO;
			AD2CH4CONbits.ACCBRST = ADC2_USER_CH4_ACCBRST;
			AD2CH4CONbits.ACCNUM = ADC2_USER_CH4_ACCNUM;
			AD2CH4CONbits.MODE = ADC2_USER_CH4_MODE;
		#endif 
	/*-----------------------------------------------------------------------*/
	/* AD2CH4DATAレジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CH4DATA = 0x00000000u;
	/*-----------------------------------------------------------------------*/
	/* AD2CH4CNTレジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CH4CNT = ADC2_USER_CH4_CNT;
		#ifdef DEF_BITNAME
			AD2CH4CNTbits.CNT = 0u;
			AD2CH4CNTbits.CNTSTAT = 0u;
		#endif 
	/*-----------------------------------------------------------------------*/
	/* AD2CH4CMPLOレジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CH4CMPLO = ADC2_USER_CH4_CMPLO;
	/*-----------------------------------------------------------------------*/
	/* AD2CH4CMPHIレジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CH4CMPHI = ADC2_USER_CH4_CMPHI;
	/*-----------------------------------------------------------------------*/
	/* AD2CH4ACCレジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CH4ACC = 0x00000000u;

	/*-----------------------------------------------------------------------*/
	/* AD2CH5CONレジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CH5CON = (ADC2_USER_CH5_TRG1SRC ) |
				(ADC2_USER_CH5_SAMC << 5U ) |
				(ADC2_USER_CH5_NINSEL << 8U ) |
				(ADC2_USER_CH5_LEFT << 10U ) |
				(ADC2_USER_CH5_PINSEL << 11U ) |
				(ADC2_USER_CH5_DIFF << 15U ) |
				(ADC2_USER_CH5_CMPMOD << 16U ) |
				(ADC2_USER_CH5_TRG2SRC << 19U ) |
				(ADC2_USER_CH5_EIEN << 24U ) |
				(ADC2_USER_CH5_TRG1POL << 25U ) |
				(ADC2_USER_CH5_ACCRO << 26U ) |
				(ADC2_USER_CH5_ACCBRST << 27U ) |
				(ADC2_USER_CH5_ACCNUM << 28U ) |
				(ADC2_USER_CH5_MODE << 30U ) ;
		#ifdef DEF_BITNAME
			AD2CH5CONbits.TRG1SRC = ADC2_USER_CH5_TRG1SRC;
			AD2CH5CONbits.SAMC = ADC2_USER_CH5_SAMC;
			AD2CH5CONbits.NINSEL = ADC2_USER_CH5_NINSEL;
			AD2CH5CONbits.LEFT = ADC2_USER_CH5_LEFT;
			AD2CH5CONbits.PINSEL = ADC2_USER_CH5_PINSEL;
			AD2CH5CONbits.DIFF = ADC2_USER_CH5_DIFF;
			AD2CH5CONbits.CMPMOD = ADC2_USER_CH5_CMPMOD;
			AD2CH5CONbits.TRG2SRC = ADC2_USER_CH5_TRG2SRC;
			AD2CH5CONbits.EIEN = ADC2_USER_CH5_EIEN;
			AD2CH5CONbits.TRG1POL = ADC2_USER_CH5_TRG1POL;
			AD2CH5CONbits.ACCRO = ADC2_USER_CH5_ACCRO;
			AD2CH5CONbits.ACCBRST = ADC2_USER_CH5_ACCBRST;
			AD2CH5CONbits.ACCNUM = ADC2_USER_CH5_ACCNUM;
			AD2CH5CONbits.MODE = ADC2_USER_CH5_MODE;
		#endif 
	/*-----------------------------------------------------------------------*/
	/* AD2CH5DATAレジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CH5DATA = 0x00000000u;
	/*-----------------------------------------------------------------------*/
	/* AD2CH5CNTレジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CH5CNT = ADC2_USER_CH5_CNT;
		#ifdef DEF_BITNAME
			AD2CH5CNTbits.CNT = 0u;
			AD2CH5CNTbits.CNTSTAT = 0u;
		#endif 
	/*-----------------------------------------------------------------------*/
	/* AD2CH5CMPLOレジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CH5CMPLO = ADC2_USER_CH5_CMPLO;
	/*-----------------------------------------------------------------------*/
	/* AD2CH5CMPHIレジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CH5CMPHI = ADC2_USER_CH5_CMPHI;
	/*-----------------------------------------------------------------------*/
	/* AD2CH5ACCレジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CH5ACC = 0x00000000u;
		
	/*-----------------------------------------------------------------------*/
	/* AD2CH6CONレジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CH6CON = (ADC2_USER_CH6_TRG1SRC ) |
				(ADC2_USER_CH6_SAMC << 5U ) |
				(ADC2_USER_CH6_NINSEL << 8U ) |
				(ADC2_USER_CH6_LEFT << 10U ) |
				(ADC2_USER_CH6_PINSEL << 11U ) |
				(ADC2_USER_CH6_DIFF << 15U ) |
				(ADC2_USER_CH6_CMPMOD << 16U ) |
				(ADC2_USER_CH6_TRG2SRC << 19U ) |
				(ADC2_USER_CH6_EIEN << 24U ) |
				(ADC2_USER_CH6_TRG1POL << 25U ) |
				(ADC2_USER_CH6_ACCRO << 26U ) |
				(ADC2_USER_CH6_ACCBRST << 27U ) |
				(ADC2_USER_CH6_ACCNUM << 28U ) |
				(ADC2_USER_CH6_MODE << 30U ) ;
		#ifdef DEF_BITNAME
			AD2CH6CONbits.TRG1SRC = ADC2_USER_CH6_TRG1SRC;
			AD2CH6CONbits.SAMC = ADC2_USER_CH6_SAMC;
			AD2CH6CONbits.NINSEL = ADC2_USER_CH6_NINSEL;
			AD2CH6CONbits.LEFT = ADC2_USER_CH6_LEFT;
			AD2CH6CONbits.PINSEL = ADC2_USER_CH6_PINSEL;
			AD2CH6CONbits.DIFF = ADC2_USER_CH6_DIFF;
			AD2CH6CONbits.CMPMOD = ADC2_USER_CH6_CMPMOD;
			AD2CH6CONbits.TRG2SRC = ADC2_USER_CH6_TRG2SRC;
			AD2CH6CONbits.EIEN = ADC2_USER_CH6_EIEN;
			AD2CH6CONbits.TRG1POL = ADC2_USER_CH6_TRG1POL;
			AD2CH6CONbits.ACCRO = ADC2_USER_CH6_ACCRO;
			AD2CH6CONbits.ACCBRST = ADC2_USER_CH6_ACCBRST;
			AD2CH6CONbits.ACCNUM = ADC2_USER_CH6_ACCNUM;
			AD2CH6CONbits.MODE = ADC2_USER_CH6_MODE;
		#endif 
	/*-----------------------------------------------------------------------*/
	/* AD2CH6DATAレジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CH6DATA = 0x00000000u;
	/*-----------------------------------------------------------------------*/
	/* AD2CH6CNTレジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CH6CNT = ADC2_USER_CH6_CNT;
		#ifdef DEF_BITNAME
			AD2CH6CNTbits.CNT = 0u;
			AD2CH6CNTbits.CNTSTAT = 0u;
		#endif 
	/*-----------------------------------------------------------------------*/
	/* AD2CH6CMPLOレジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CH6CMPLO = ADC2_USER_CH6_CMPLO;
	/*-----------------------------------------------------------------------*/
	/* AD2CH6CMPHIレジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CH6CMPHI = ADC2_USER_CH6_CMPHI;
	/*-----------------------------------------------------------------------*/
	/* AD2CH6ACCレジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CH6ACC = 0x00000000u;

	/*-----------------------------------------------------------------------*/
	/* AD2CH7CONレジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CH7CON = (ADC2_USER_CH7_TRG1SRC ) |
				(ADC2_USER_CH7_SAMC << 5U ) |
				(ADC2_USER_CH7_NINSEL << 8U ) |
				(ADC2_USER_CH7_LEFT << 10U ) |
				(ADC2_USER_CH7_PINSEL << 11U ) |
				(ADC2_USER_CH7_DIFF << 15U ) |
				(ADC2_USER_CH7_CMPMOD << 16U ) |
				(ADC2_USER_CH7_TRG2SRC << 19U ) |
				(ADC2_USER_CH7_EIEN << 24U ) |
				(ADC2_USER_CH7_TRG1POL << 25U ) |
				(ADC2_USER_CH7_ACCRO << 26U ) |
				(ADC2_USER_CH7_ACCBRST << 27U ) |
				(ADC2_USER_CH7_ACCNUM << 28U ) |
				(ADC2_USER_CH7_MODE << 30U ) ;
		#ifdef DEF_BITNAME
			AD2CH7CONbits.TRG1SRC = ADC2_USER_CH7_TRG1SRC;
			AD2CH7CONbits.SAMC = ADC2_USER_CH7_SAMC;
			AD2CH7CONbits.NINSEL = ADC2_USER_CH7_NINSEL;
			AD2CH7CONbits.LEFT = ADC2_USER_CH7_LEFT;
			AD2CH7CONbits.PINSEL = ADC2_USER_CH7_PINSEL;
			AD2CH7CONbits.DIFF = ADC2_USER_CH7_DIFF;
			AD2CH7CONbits.CMPMOD = ADC2_USER_CH7_CMPMOD;
			AD2CH7CONbits.TRG2SRC = ADC2_USER_CH7_TRG2SRC;
			AD2CH7CONbits.EIEN = ADC2_USER_CH7_EIEN;
			AD2CH7CONbits.TRG1POL = ADC2_USER_CH7_TRG1POL;
			AD2CH7CONbits.ACCRO = ADC2_USER_CH7_ACCRO;
			AD2CH7CONbits.ACCBRST = ADC2_USER_CH7_ACCBRST;
			AD2CH7CONbits.ACCNUM = ADC2_USER_CH7_ACCNUM;
			AD2CH7CONbits.MODE = ADC2_USER_CH7_MODE;
		#endif 
	/*-----------------------------------------------------------------------*/
	/* AD2CH7DATAレジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CH7DATA = 0x00000000u;
	/*-----------------------------------------------------------------------*/
	/* AD2CH7CNTレジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CH7CNT = ADC2_USER_CH7_CNT;
		#ifdef DEF_BITNAME
			AD2CH7CNTbits.CNT = 0u;
			AD2CH7CNTbits.CNTSTAT = 0u;
		#endif 
	/*-----------------------------------------------------------------------*/
	/* AD2CH7CMPLOレジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CH7CMPLO = ADC2_USER_CH7_CMPLO;
	/*-----------------------------------------------------------------------*/
	/* AD2CH7CMPHIレジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CH7CMPHI = ADC2_USER_CH7_CMPHI;
	/*-----------------------------------------------------------------------*/
	/* AD2CH7ACCレジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CH7ACC = 0x00000000u;
		
	/*-----------------------------------------------------------------------*/
	/* AD2CH8CONレジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CH8CON = (ADC2_USER_CH8_TRG1SRC ) |
				(ADC2_USER_CH8_SAMC << 5U ) |
				(ADC2_USER_CH8_NINSEL << 8U ) |
				(ADC2_USER_CH8_LEFT << 10U ) |
				(ADC2_USER_CH8_PINSEL << 11U ) |
				(ADC2_USER_CH8_DIFF << 15U ) |
				(ADC2_USER_CH8_CMPMOD << 16U ) |
				(ADC2_USER_CH8_TRG2SRC << 19U ) |
				(ADC2_USER_CH8_EIEN << 24U ) |
				(ADC2_USER_CH8_TRG1POL << 25U ) |
				(ADC2_USER_CH8_ACCRO << 26U ) |
				(ADC2_USER_CH8_ACCBRST << 27U ) |
				(ADC2_USER_CH8_ACCNUM << 28U ) |
				(ADC2_USER_CH8_MODE << 30U ) ;
		#ifdef DEF_BITNAME
			AD2CH8CONbits.TRG1SRC = ADC2_USER_CH8_TRG1SRC;
			AD2CH8CONbits.SAMC = ADC2_USER_CH8_SAMC;
			AD2CH8CONbits.NINSEL = ADC2_USER_CH8_NINSEL;
			AD2CH8CONbits.LEFT = ADC2_USER_CH8_LEFT;
			AD2CH8CONbits.PINSEL = ADC2_USER_CH8_PINSEL;
			AD2CH8CONbits.DIFF = ADC2_USER_CH8_DIFF;
			AD2CH8CONbits.CMPMOD = ADC2_USER_CH8_CMPMOD;
			AD2CH8CONbits.TRG2SRC = ADC2_USER_CH8_TRG2SRC;
			AD2CH8CONbits.EIEN = ADC2_USER_CH8_EIEN;
			AD2CH8CONbits.TRG1POL = ADC2_USER_CH8_TRG1POL;
			AD2CH8CONbits.ACCRO = ADC2_USER_CH8_ACCRO;
			AD2CH8CONbits.ACCBRST = ADC2_USER_CH8_ACCBRST;
			AD2CH8CONbits.ACCNUM = ADC2_USER_CH8_ACCNUM;
			AD2CH8CONbits.MODE = ADC2_USER_CH8_MODE;
		#endif 
	/*-----------------------------------------------------------------------*/
	/* AD2CH8DATAレジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CH8DATA = 0x00000000u;
	/*-----------------------------------------------------------------------*/
	/* AD2CH8CNTレジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CH8CNT = ADC2_USER_CH8_CNT;
		#ifdef DEF_BITNAME
			AD2CH8CNTbits.CNT = 0u;
			AD2CH8CNTbits.CNTSTAT = 0u;
		#endif 
	/*-----------------------------------------------------------------------*/
	/* AD2CH8CMPLOレジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CH8CMPLO = ADC2_USER_CH8_CMPLO;
	/*-----------------------------------------------------------------------*/
	/* AD2CH8CMPHIレジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CH8CMPHI = ADC2_USER_CH8_CMPHI;
	/*-----------------------------------------------------------------------*/
	/* AD2CH8ACCレジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CH8ACC = 0x00000000u;

	/*-----------------------------------------------------------------------*/
	/* AD2CH9CONレジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CH9CON = (ADC2_USER_CH9_TRG1SRC ) |
				(ADC2_USER_CH9_SAMC << 5U ) |
				(ADC2_USER_CH9_NINSEL << 8U ) |
				(ADC2_USER_CH9_LEFT << 10U ) |
				(ADC2_USER_CH9_PINSEL << 11U ) |
				(ADC2_USER_CH9_DIFF << 15U ) |
				(ADC2_USER_CH9_CMPMOD << 16U ) |
				(ADC2_USER_CH9_TRG2SRC << 19U ) |
				(ADC2_USER_CH9_EIEN << 24U ) |
				(ADC2_USER_CH9_TRG1POL << 25U ) |
				(ADC2_USER_CH9_ACCRO << 26U ) |
				(ADC2_USER_CH9_ACCBRST << 27U ) |
				(ADC2_USER_CH9_ACCNUM << 28U ) |
				(ADC2_USER_CH9_MODE << 30U ) ;
		#ifdef DEF_BITNAME
			AD2CH9CONbits.TRG1SRC = ADC2_USER_CH9_TRG1SRC;
			AD2CH9CONbits.SAMC = ADC2_USER_CH9_SAMC;
			AD2CH9CONbits.NINSEL = ADC2_USER_CH9_NINSEL;
			AD2CH9CONbits.LEFT = ADC2_USER_CH9_LEFT;
			AD2CH9CONbits.PINSEL = ADC2_USER_CH9_PINSEL;
			AD2CH9CONbits.DIFF = ADC2_USER_CH9_DIFF;
			AD2CH9CONbits.CMPMOD = ADC2_USER_CH9_CMPMOD;
			AD2CH9CONbits.TRG2SRC = ADC2_USER_CH9_TRG2SRC;
			AD2CH9CONbits.EIEN = ADC2_USER_CH9_EIEN;
			AD2CH9CONbits.TRG1POL = ADC2_USER_CH9_TRG1POL;
			AD2CH9CONbits.ACCRO = ADC2_USER_CH9_ACCRO;
			AD2CH9CONbits.ACCBRST = ADC2_USER_CH9_ACCBRST;
			AD2CH9CONbits.ACCNUM = ADC2_USER_CH9_ACCNUM;
			AD2CH9CONbits.MODE = ADC2_USER_CH9_MODE;
		#endif 
	/*-----------------------------------------------------------------------*/
	/* AD2CH9DATAレジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CH9DATA = 0x00000000u;
	/*-----------------------------------------------------------------------*/
	/* AD2CH9CNTレジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CH9CNT = ADC2_USER_CH9_CNT;
		#ifdef DEF_BITNAME
			AD2CH9CNTbits.CNT = 0u;
			AD2CH9CNTbits.CNTSTAT = 0u;
		#endif 
	/*-----------------------------------------------------------------------*/
	/* AD2CH9CMPLOレジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CH9CMPLO = ADC2_USER_CH9_CMPLO;
	/*-----------------------------------------------------------------------*/
	/* AD2CH9CMPHIレジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CH9CMPHI = ADC2_USER_CH9_CMPHI;
	/*-----------------------------------------------------------------------*/
	/* AD2CH9ACCレジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CH9ACC = 0x00000000u;
		
	/*-----------------------------------------------------------------------*/
	/* AD2CH10CONレジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CH10CON = (ADC2_USER_CH10_TRG1SRC ) |
				(ADC2_USER_CH10_SAMC << 5U ) |
				(ADC2_USER_CH10_NINSEL << 8U ) |
				(ADC2_USER_CH10_LEFT << 10U ) |
				(ADC2_USER_CH10_PINSEL << 11U ) |
				(ADC2_USER_CH10_DIFF << 15U ) |
				(ADC2_USER_CH10_CMPMOD << 16U ) |
				(ADC2_USER_CH10_TRG2SRC << 19U ) |
				(ADC2_USER_CH10_EIEN << 24U ) |
				(ADC2_USER_CH10_TRG1POL << 25U ) |
				(ADC2_USER_CH10_ACCRO << 26U ) |
				(ADC2_USER_CH10_ACCBRST << 27U ) |
				(ADC2_USER_CH10_ACCNUM << 28U ) |
				(ADC2_USER_CH10_MODE << 30U ) ;
		#ifdef DEF_BITNAME
			AD2CH10CONbits.TRG1SRC = ADC2_USER_CH10_TRG1SRC;
			AD2CH10CONbits.SAMC = ADC2_USER_CH10_SAMC;
			AD2CH10CONbits.NINSEL = ADC2_USER_CH10_NINSEL;
			AD2CH10CONbits.LEFT = ADC2_USER_CH10_LEFT;
			AD2CH10CONbits.PINSEL = ADC2_USER_CH10_PINSEL;
			AD2CH10CONbits.DIFF = ADC2_USER_CH10_DIFF;
			AD2CH10CONbits.CMPMOD = ADC2_USER_CH10_CMPMOD;
			AD2CH10CONbits.TRG2SRC = ADC2_USER_CH10_TRG2SRC;
			AD2CH10CONbits.EIEN = ADC2_USER_CH10_EIEN;
			AD2CH10CONbits.TRG1POL = ADC2_USER_CH10_TRG1POL;
			AD2CH10CONbits.ACCRO = ADC2_USER_CH10_ACCRO;
			AD2CH10CONbits.ACCBRST = ADC2_USER_CH10_ACCBRST;
			AD2CH10CONbits.ACCNUM = ADC2_USER_CH10_ACCNUM;
			AD2CH10CONbits.MODE = ADC2_USER_CH10_MODE;
		#endif 
	/*-----------------------------------------------------------------------*/
	/* AD2CH10DATAレジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CH10DATA = 0x00000000u;
	/*-----------------------------------------------------------------------*/
	/* AD2CH10CNTレジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CH10CNT = ADC2_USER_CH10_CNT;
		#ifdef DEF_BITNAME
			AD2CH10CNTbits.CNT = 0u;
			AD2CH10CNTbits.CNTSTAT = 0u;
		#endif 
	/*-----------------------------------------------------------------------*/
	/* AD2CH10CMPLOレジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CH10CMPLO = ADC2_USER_CH10_CMPLO;
	/*-----------------------------------------------------------------------*/
	/* AD2CH10CMPHIレジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CH10CMPHI = ADC2_USER_CH10_CMPHI;
	/*-----------------------------------------------------------------------*/
	/* AD2CH10ACCレジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CH10ACC = 0x00000000u;

	/*-----------------------------------------------------------------------*/
	/* AD2CH11CONレジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CH11CON = (ADC2_USER_CH11_TRG1SRC ) |
				(ADC2_USER_CH11_SAMC << 5U ) |
				(ADC2_USER_CH11_NINSEL << 8U ) |
				(ADC2_USER_CH11_LEFT << 10U ) |
				(ADC2_USER_CH11_PINSEL << 11U ) |
				(ADC2_USER_CH11_DIFF << 15U ) |
				(ADC2_USER_CH11_CMPMOD << 16U ) |
				(ADC2_USER_CH11_TRG2SRC << 19U ) |
				(ADC2_USER_CH11_EIEN << 24U ) |
				(ADC2_USER_CH11_TRG1POL << 25U ) |
				(ADC2_USER_CH11_ACCRO << 26U ) |
				(ADC2_USER_CH11_ACCBRST << 27U ) |
				(ADC2_USER_CH11_ACCNUM << 28U ) |
				(ADC2_USER_CH11_MODE << 30U ) ;
		#ifdef DEF_BITNAME
			AD2CH11CONbits.TRG1SRC = ADC2_USER_CH11_TRG1SRC;
			AD2CH11CONbits.SAMC = ADC2_USER_CH11_SAMC;
			AD2CH11CONbits.NINSEL = ADC2_USER_CH11_NINSEL;
			AD2CH11CONbits.LEFT = ADC2_USER_CH11_LEFT;
			AD2CH11CONbits.PINSEL = ADC2_USER_CH11_PINSEL;
			AD2CH11CONbits.DIFF = ADC2_USER_CH11_DIFF;
			AD2CH11CONbits.CMPMOD = ADC2_USER_CH11_CMPMOD;
			AD2CH11CONbits.TRG2SRC = ADC2_USER_CH11_TRG2SRC;
			AD2CH11CONbits.EIEN = ADC2_USER_CH11_EIEN;
			AD2CH11CONbits.TRG1POL = ADC2_USER_CH11_TRG1POL;
			AD2CH11CONbits.ACCRO = ADC2_USER_CH11_ACCRO;
			AD2CH11CONbits.ACCBRST = ADC2_USER_CH11_ACCBRST;
			AD2CH11CONbits.ACCNUM = ADC2_USER_CH11_ACCNUM;
			AD2CH11CONbits.MODE = ADC2_USER_CH11_MODE;
		#endif 
	/*-----------------------------------------------------------------------*/
	/* AD2CH11DATAレジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CH11DATA = 0x00000000u;
	/*-----------------------------------------------------------------------*/
	/* AD2CH11CNTレジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CH11CNT = ADC2_USER_CH11_CNT;
		#ifdef DEF_BITNAME
			AD2CH11CNTbits.CNT = 0u;
			AD2CH11CNTbits.CNTSTAT = 0u;
		#endif 
	/*-----------------------------------------------------------------------*/
	/* AD2CH11CMPLOレジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CH11CMPLO = ADC2_USER_CH11_CMPLO;
	/*-----------------------------------------------------------------------*/
	/* AD2CH11CMPHIレジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CH11CMPHI = ADC2_USER_CH11_CMPHI;
	/*-----------------------------------------------------------------------*/
	/* AD2CH11ACCレジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CH11ACC = 0x00000000u;
		
	/*-----------------------------------------------------------------------*/
	/* AD2CH12CONレジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CH12CON = (ADC2_USER_CH12_TRG1SRC ) |
				(ADC2_USER_CH12_SAMC << 5U ) |
				(ADC2_USER_CH12_NINSEL << 8U ) |
				(ADC2_USER_CH12_LEFT << 10U ) |
				(ADC2_USER_CH12_PINSEL << 11U ) |
				(ADC2_USER_CH12_DIFF << 15U ) |
				(ADC2_USER_CH12_CMPMOD << 16U ) |
				(ADC2_USER_CH12_TRG2SRC << 19U ) |
				(ADC2_USER_CH12_EIEN << 24U ) |
				(ADC2_USER_CH12_TRG1POL << 25U ) |
				(ADC2_USER_CH12_ACCRO << 26U ) |
				(ADC2_USER_CH12_ACCBRST << 27U ) |
				(ADC2_USER_CH12_ACCNUM << 28U ) |
				(ADC2_USER_CH12_MODE << 30U ) ;
		#ifdef DEF_BITNAME
			AD2CH12CONbits.TRG1SRC = ADC2_USER_CH12_TRG1SRC;
			AD2CH12CONbits.SAMC = ADC2_USER_CH12_SAMC;
			AD2CH12CONbits.NINSEL = ADC2_USER_CH12_NINSEL;
			AD2CH12CONbits.LEFT = ADC2_USER_CH12_LEFT;
			AD2CH12CONbits.PINSEL = ADC2_USER_CH12_PINSEL;
			AD2CH12CONbits.DIFF = ADC2_USER_CH12_DIFF;
			AD2CH12CONbits.CMPMOD = ADC2_USER_CH12_CMPMOD;
			AD2CH12CONbits.TRG2SRC = ADC2_USER_CH12_TRG2SRC;
			AD2CH12CONbits.EIEN = ADC2_USER_CH12_EIEN;
			AD2CH12CONbits.TRG1POL = ADC2_USER_CH12_TRG1POL;
			AD2CH12CONbits.ACCRO = ADC2_USER_CH12_ACCRO;
			AD2CH12CONbits.ACCBRST = ADC2_USER_CH12_ACCBRST;
			AD2CH12CONbits.ACCNUM = ADC2_USER_CH12_ACCNUM;
			AD2CH12CONbits.MODE = ADC2_USER_CH12_MODE;
		#endif 
	/*-----------------------------------------------------------------------*/
	/* AD2CH12DATAレジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CH12DATA = 0x00000000u;
	/*-----------------------------------------------------------------------*/
	/* AD2CH12CNTレジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CH12CNT = ADC2_USER_CH12_CNT;
		#ifdef DEF_BITNAME
			AD2CH12CNTbits.CNT = 0u;
			AD2CH12CNTbits.CNTSTAT = 0u;
		#endif 
	/*-----------------------------------------------------------------------*/
	/* AD2CH12CMPLOレジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CH12CMPLO = ADC2_USER_CH12_CMPLO;
	/*-----------------------------------------------------------------------*/
	/* AD2CH12CMPHIレジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CH12CMPHI = ADC2_USER_CH12_CMPHI;
	/*-----------------------------------------------------------------------*/
	/* AD2CH12ACCレジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CH12ACC = 0x00000000u;

	/*-----------------------------------------------------------------------*/
	/* AD2CH13CONレジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CH13CON = (ADC2_USER_CH13_TRG1SRC ) |
				(ADC2_USER_CH13_SAMC << 5U ) |
				(ADC2_USER_CH13_NINSEL << 8U ) |
				(ADC2_USER_CH13_LEFT << 10U ) |
				(ADC2_USER_CH13_PINSEL << 11U ) |
				(ADC2_USER_CH13_DIFF << 15U ) |
				(ADC2_USER_CH13_CMPMOD << 16U ) |
				(ADC2_USER_CH13_TRG2SRC << 19U ) |
				(ADC2_USER_CH13_EIEN << 24U ) |
				(ADC2_USER_CH13_TRG1POL << 25U ) |
				(ADC2_USER_CH13_ACCRO << 26U ) |
				(ADC2_USER_CH13_ACCBRST << 27U ) |
				(ADC2_USER_CH13_ACCNUM << 28U ) |
				(ADC2_USER_CH13_MODE << 30U ) ;
		#ifdef DEF_BITNAME
			AD2CH13CONbits.TRG1SRC = ADC2_USER_CH13_TRG1SRC;
			AD2CH13CONbits.SAMC = ADC2_USER_CH13_SAMC;
			AD2CH13CONbits.NINSEL = ADC2_USER_CH13_NINSEL;
			AD2CH13CONbits.LEFT = ADC2_USER_CH13_LEFT;
			AD2CH13CONbits.PINSEL = ADC2_USER_CH13_PINSEL;
			AD2CH13CONbits.DIFF = ADC2_USER_CH13_DIFF;
			AD2CH13CONbits.CMPMOD = ADC2_USER_CH13_CMPMOD;
			AD2CH13CONbits.TRG2SRC = ADC2_USER_CH13_TRG2SRC;
			AD2CH13CONbits.EIEN = ADC2_USER_CH13_EIEN;
			AD2CH13CONbits.TRG1POL = ADC2_USER_CH13_TRG1POL;
			AD2CH13CONbits.ACCRO = ADC2_USER_CH13_ACCRO;
			AD2CH13CONbits.ACCBRST = ADC2_USER_CH13_ACCBRST;
			AD2CH13CONbits.ACCNUM = ADC2_USER_CH13_ACCNUM;
			AD2CH13CONbits.MODE = ADC2_USER_CH13_MODE;
		#endif 
	/*-----------------------------------------------------------------------*/
	/* AD2CH13DATAレジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CH13DATA = 0x00000000u;
	/*-----------------------------------------------------------------------*/
	/* AD2CH13CNTレジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CH13CNT = ADC2_USER_CH13_CNT;
		#ifdef DEF_BITNAME
			AD2CH13CNTbits.CNT = 0u;
			AD2CH13CNTbits.CNTSTAT = 0u;
		#endif 
	/*-----------------------------------------------------------------------*/
	/* AD2CH13CMPLOレジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CH13CMPLO = ADC2_USER_CH13_CMPLO;
	/*-----------------------------------------------------------------------*/
	/* AD2CH13CMPHIレジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CH13CMPHI = ADC2_USER_CH13_CMPHI;
	/*-----------------------------------------------------------------------*/
	/* AD2CH13ACCレジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CH13ACC = 0x00000000u;
		
	/*-----------------------------------------------------------------------*/
	/* AD2CH14CONレジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CH14CON = (ADC2_USER_CH14_TRG1SRC ) |
				(ADC2_USER_CH14_SAMC << 5U ) |
				(ADC2_USER_CH14_NINSEL << 8U ) |
				(ADC2_USER_CH14_LEFT << 10U ) |
				(ADC2_USER_CH14_PINSEL << 11U ) |
				(ADC2_USER_CH14_DIFF << 15U ) |
				(ADC2_USER_CH14_CMPMOD << 16U ) |
				(ADC2_USER_CH14_TRG2SRC << 19U ) |
				(ADC2_USER_CH14_EIEN << 24U ) |
				(ADC2_USER_CH14_TRG1POL << 25U ) |
				(ADC2_USER_CH14_ACCRO << 26U ) |
				(ADC2_USER_CH14_ACCBRST << 27U ) |
				(ADC2_USER_CH14_ACCNUM << 28U ) |
				(ADC2_USER_CH14_MODE << 30U ) ;
		#ifdef DEF_BITNAME
			AD2CH14CONbits.TRG1SRC = ADC2_USER_CH14_TRG1SRC;
			AD2CH14CONbits.SAMC = ADC2_USER_CH14_SAMC;
			AD2CH14CONbits.NINSEL = ADC2_USER_CH14_NINSEL;
			AD2CH14CONbits.LEFT = ADC2_USER_CH14_LEFT;
			AD2CH14CONbits.PINSEL = ADC2_USER_CH14_PINSEL;
			AD2CH14CONbits.DIFF = ADC2_USER_CH14_DIFF;
			AD2CH14CONbits.CMPMOD = ADC2_USER_CH14_CMPMOD;
			AD2CH14CONbits.TRG2SRC = ADC2_USER_CH14_TRG2SRC;
			AD2CH14CONbits.EIEN = ADC2_USER_CH14_EIEN;
			AD2CH14CONbits.TRG1POL = ADC2_USER_CH14_TRG1POL;
			AD2CH14CONbits.ACCRO = ADC2_USER_CH14_ACCRO;
			AD2CH14CONbits.ACCBRST = ADC2_USER_CH14_ACCBRST;
			AD2CH14CONbits.ACCNUM = ADC2_USER_CH14_ACCNUM;
			AD2CH14CONbits.MODE = ADC2_USER_CH14_MODE;
		#endif 
	/*-----------------------------------------------------------------------*/
	/* AD2CH14DATAレジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CH14DATA = 0x00000000u;
	/*-----------------------------------------------------------------------*/
	/* AD2CH14CNTレジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CH14CNT = ADC2_USER_CH14_CNT;
		#ifdef DEF_BITNAME
			AD2CH14CNTbits.CNT = 0u;
			AD2CH14CNTbits.CNTSTAT = 0u;
		#endif 
	/*-----------------------------------------------------------------------*/
	/* AD2CH14CMPLOレジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CH14CMPLO = ADC2_USER_CH14_CMPLO;
	/*-----------------------------------------------------------------------*/
	/* AD2CH14CMPHIレジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CH14CMPHI = ADC2_USER_CH14_CMPHI;
	/*-----------------------------------------------------------------------*/
	/* AD2CH14ACCレジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CH14ACC = 0x00000000u;

	/*-----------------------------------------------------------------------*/
	/* AD2CH15CONレジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CH15CON = (ADC2_USER_CH15_TRG1SRC ) |
				(ADC2_USER_CH15_SAMC << 5U ) |
				(ADC2_USER_CH15_NINSEL << 8U ) |
				(ADC2_USER_CH15_LEFT << 10U ) |
				(ADC2_USER_CH15_PINSEL << 11U ) |
				(ADC2_USER_CH15_DIFF << 15U ) |
				(ADC2_USER_CH15_CMPMOD << 16U ) |
				(ADC2_USER_CH15_TRG2SRC << 19U ) |
				(ADC2_USER_CH15_EIEN << 24U ) |
				(ADC2_USER_CH15_TRG1POL << 25U ) |
				(ADC2_USER_CH15_ACCRO << 26U ) |
				(ADC2_USER_CH15_ACCBRST << 27U ) |
				(ADC2_USER_CH15_ACCNUM << 28U ) |
				(ADC2_USER_CH15_MODE << 30U ) ;
		#ifdef DEF_BITNAME
			AD2CH15CONbits.TRG1SRC = ADC2_USER_CH15_TRG1SRC;
			AD2CH15CONbits.SAMC = ADC2_USER_CH15_SAMC;
			AD2CH15CONbits.NINSEL = ADC2_USER_CH15_NINSEL;
			AD2CH15CONbits.LEFT = ADC2_USER_CH15_LEFT;
			AD2CH15CONbits.PINSEL = ADC2_USER_CH15_PINSEL;
			AD2CH15CONbits.DIFF = ADC2_USER_CH15_DIFF;
			AD2CH15CONbits.CMPMOD = ADC2_USER_CH15_CMPMOD;
			AD2CH15CONbits.TRG2SRC = ADC2_USER_CH15_TRG2SRC;
			AD2CH15CONbits.EIEN = ADC2_USER_CH15_EIEN;
			AD2CH15CONbits.TRG1POL = ADC2_USER_CH15_TRG1POL;
			AD2CH15CONbits.ACCRO = ADC2_USER_CH15_ACCRO;
			AD2CH15CONbits.ACCBRST = ADC2_USER_CH15_ACCBRST;
			AD2CH15CONbits.ACCNUM = ADC2_USER_CH15_ACCNUM;
			AD2CH15CONbits.MODE = ADC2_USER_CH15_MODE;
		#endif 
	/*-----------------------------------------------------------------------*/
	/* AD2CH15DATAレジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CH15DATA = 0x00000000u;
	/*-----------------------------------------------------------------------*/
	/* AD2CH15CNTレジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CH15CNT = ADC2_USER_CH15_CNT;
		#ifdef DEF_BITNAME
			AD2CH15CNTbits.CNT = 0u;
			AD2CH15CNTbits.CNTSTAT = 0u;
		#endif 
	/*-----------------------------------------------------------------------*/
	/* AD2CH15CMPLOレジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CH15CMPLO = ADC2_USER_CH15_CMPLO;
	/*-----------------------------------------------------------------------*/
	/* AD2CH15CMPHIレジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CH15CMPHI = ADC2_USER_CH15_CMPHI;
	/*-----------------------------------------------------------------------*/
	/* AD2CH15ACCレジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CH15ACC = 0x00000000u;
		
	/*-----------------------------------------------------------------------*/
	/* AD2CH16CONレジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CH16CON = (ADC2_USER_CH16_TRG1SRC ) |
				(ADC2_USER_CH16_SAMC << 5U ) |
				(ADC2_USER_CH16_NINSEL << 8U ) |
				(ADC2_USER_CH16_LEFT << 10U ) |
				(ADC2_USER_CH16_PINSEL << 11U ) |
				(ADC2_USER_CH16_DIFF << 15U ) |
				(ADC2_USER_CH16_CMPMOD << 16U ) |
				(ADC2_USER_CH16_TRG2SRC << 19U ) |
				(ADC2_USER_CH16_EIEN << 24U ) |
				(ADC2_USER_CH16_TRG1POL << 25U ) |
				(ADC2_USER_CH16_ACCRO << 26U ) |
				(ADC2_USER_CH16_ACCBRST << 27U ) |
				(ADC2_USER_CH16_ACCNUM << 28U ) |
				(ADC2_USER_CH16_MODE << 30U ) ;
		#ifdef DEF_BITNAME
			AD2CH16CONbits.TRG1SRC = ADC2_USER_CH16_TRG1SRC;
			AD2CH16CONbits.SAMC = ADC2_USER_CH16_SAMC;
			AD2CH16CONbits.NINSEL = ADC2_USER_CH16_NINSEL;
			AD2CH16CONbits.LEFT = ADC2_USER_CH16_LEFT;
			AD2CH16CONbits.PINSEL = ADC2_USER_CH16_PINSEL;
			AD2CH16CONbits.DIFF = ADC2_USER_CH16_DIFF;
			AD2CH16CONbits.CMPMOD = ADC2_USER_CH16_CMPMOD;
			AD2CH16CONbits.TRG2SRC = ADC2_USER_CH16_TRG2SRC;
			AD2CH16CONbits.EIEN = ADC2_USER_CH16_EIEN;
			AD2CH16CONbits.TRG1POL = ADC2_USER_CH16_TRG1POL;
			AD2CH16CONbits.ACCRO = ADC2_USER_CH16_ACCRO;
			AD2CH16CONbits.ACCBRST = ADC2_USER_CH16_ACCBRST;
			AD2CH16CONbits.ACCNUM = ADC2_USER_CH16_ACCNUM;
			AD2CH16CONbits.MODE = ADC2_USER_CH16_MODE;
		#endif 
	/*-----------------------------------------------------------------------*/
	/* AD2CH16DATAレジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CH16DATA = 0x00000000u;
	/*-----------------------------------------------------------------------*/
	/* AD2CH16CNTレジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CH16CNT = ADC2_USER_CH16_CNT;
		#ifdef DEF_BITNAME
			AD2CH16CNTbits.CNT = 0u;
			AD2CH16CNTbits.CNTSTAT = 0u;
		#endif 
	/*-----------------------------------------------------------------------*/
	/* AD2CH16CMPLOレジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CH16CMPLO = ADC2_USER_CH16_CMPLO;
	/*-----------------------------------------------------------------------*/
	/* AD2CH16CMPHIレジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CH16CMPHI = ADC2_USER_CH16_CMPHI;
	/*-----------------------------------------------------------------------*/
	/* AD2CH16ACCレジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CH16ACC = 0x00000000u;

	/*-----------------------------------------------------------------------*/
	/* AD2CH17CONレジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CH17CON = (ADC2_USER_CH17_TRG1SRC ) |
				(ADC2_USER_CH17_SAMC << 5U ) |
				(ADC2_USER_CH17_NINSEL << 8U ) |
				(ADC2_USER_CH17_LEFT << 10U ) |
				(ADC2_USER_CH17_PINSEL << 11U ) |
				(ADC2_USER_CH17_DIFF << 15U ) |
				(ADC2_USER_CH17_CMPMOD << 16U ) |
				(ADC2_USER_CH17_TRG2SRC << 19U ) |
				(ADC2_USER_CH17_EIEN << 24U ) |
				(ADC2_USER_CH17_TRG1POL << 25U ) |
				(ADC2_USER_CH17_ACCRO << 26U ) |
				(ADC2_USER_CH17_ACCBRST << 27U ) |
				(ADC2_USER_CH17_ACCNUM << 28U ) |
				(ADC2_USER_CH17_MODE << 30U ) ;
		#ifdef DEF_BITNAME
			AD2CH17CONbits.TRG1SRC = ADC2_USER_CH17_TRG1SRC;
			AD2CH17CONbits.SAMC = ADC2_USER_CH17_SAMC;
			AD2CH17CONbits.NINSEL = ADC2_USER_CH17_NINSEL;
			AD2CH17CONbits.LEFT = ADC2_USER_CH17_LEFT;
			AD2CH17CONbits.PINSEL = ADC2_USER_CH17_PINSEL;
			AD2CH17CONbits.DIFF = ADC2_USER_CH17_DIFF;
			AD2CH17CONbits.CMPMOD = ADC2_USER_CH17_CMPMOD;
			AD2CH17CONbits.TRG2SRC = ADC2_USER_CH17_TRG2SRC;
			AD2CH17CONbits.EIEN = ADC2_USER_CH17_EIEN;
			AD2CH17CONbits.TRG1POL = ADC2_USER_CH17_TRG1POL;
			AD2CH17CONbits.ACCRO = ADC2_USER_CH17_ACCRO;
			AD2CH17CONbits.ACCBRST = ADC2_USER_CH17_ACCBRST;
			AD2CH17CONbits.ACCNUM = ADC2_USER_CH17_ACCNUM;
			AD2CH17CONbits.MODE = ADC2_USER_CH17_MODE;
		#endif 
	/*-----------------------------------------------------------------------*/
	/* AD2CH17DATAレジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CH17DATA = 0x00000000u;
	/*-----------------------------------------------------------------------*/
	/* AD2CH17CNTレジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CH17CNT = ADC2_USER_CH17_CNT;
		#ifdef DEF_BITNAME
			AD2CH17CNTbits.CNT = 0u;
			AD2CH17CNTbits.CNTSTAT = 0u;
		#endif 
	/*-----------------------------------------------------------------------*/
	/* AD2CH17CMPLOレジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CH17CMPLO = ADC2_USER_CH17_CMPLO;
	/*-----------------------------------------------------------------------*/
	/* AD2CH17CMPHIレジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CH17CMPHI = ADC2_USER_CH17_CMPHI;
	/*-----------------------------------------------------------------------*/
	/* AD2CH17ACCレジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CH17ACC = 0x00000000u;
		
	/*-----------------------------------------------------------------------*/
	/* AD2CH18CONレジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CH18CON = (ADC2_USER_CH18_TRG1SRC ) |
				(ADC2_USER_CH18_SAMC << 5U ) |
				(ADC2_USER_CH18_NINSEL << 8U ) |
				(ADC2_USER_CH18_LEFT << 10U ) |
				(ADC2_USER_CH18_PINSEL << 11U ) |
				(ADC2_USER_CH18_DIFF << 15U ) |
				(ADC2_USER_CH18_CMPMOD << 16U ) |
				(ADC2_USER_CH18_TRG2SRC << 19U ) |
				(ADC2_USER_CH18_EIEN << 24U ) |
				(ADC2_USER_CH18_TRG1POL << 25U ) |
				(ADC2_USER_CH18_ACCRO << 26U ) |
				(ADC2_USER_CH18_ACCBRST << 27U ) |
				(ADC2_USER_CH18_ACCNUM << 28U ) |
				(ADC2_USER_CH18_MODE << 30U ) ;
		#ifdef DEF_BITNAME
			AD2CH18CONbits.TRG1SRC = ADC2_USER_CH18_TRG1SRC;
			AD2CH18CONbits.SAMC = ADC2_USER_CH18_SAMC;
			AD2CH18CONbits.NINSEL = ADC2_USER_CH18_NINSEL;
			AD2CH18CONbits.LEFT = ADC2_USER_CH18_LEFT;
			AD2CH18CONbits.PINSEL = ADC2_USER_CH18_PINSEL;
			AD2CH18CONbits.DIFF = ADC2_USER_CH18_DIFF;
			AD2CH18CONbits.CMPMOD = ADC2_USER_CH18_CMPMOD;
			AD2CH18CONbits.TRG2SRC = ADC2_USER_CH18_TRG2SRC;
			AD2CH18CONbits.EIEN = ADC2_USER_CH18_EIEN;
			AD2CH18CONbits.TRG1POL = ADC2_USER_CH18_TRG1POL;
			AD2CH18CONbits.ACCRO = ADC2_USER_CH18_ACCRO;
			AD2CH18CONbits.ACCBRST = ADC2_USER_CH18_ACCBRST;
			AD2CH18CONbits.ACCNUM = ADC2_USER_CH18_ACCNUM;
			AD2CH18CONbits.MODE = ADC2_USER_CH18_MODE;
		#endif 
	/*-----------------------------------------------------------------------*/
	/* AD2CH18DATAレジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CH18DATA = 0x00000000u;
	/*-----------------------------------------------------------------------*/
	/* AD2CH18CNTレジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CH18CNT = ADC2_USER_CH18_CNT;
		#ifdef DEF_BITNAME
			AD2CH18CNTbits.CNT = 0u;
			AD2CH18CNTbits.CNTSTAT = 0u;
		#endif 
	/*-----------------------------------------------------------------------*/
	/* AD2CH18CMPLOレジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CH18CMPLO = ADC2_USER_CH18_CMPLO;
	/*-----------------------------------------------------------------------*/
	/* AD2CH18CMPHIレジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CH18CMPHI = ADC2_USER_CH18_CMPHI;
	/*-----------------------------------------------------------------------*/
	/* AD2CH18ACCレジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CH18ACC = 0x00000000u;

	/*-----------------------------------------------------------------------*/
	/* AD2CH19CONレジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CH19CON = (ADC2_USER_CH19_TRG1SRC ) |
				(ADC2_USER_CH19_SAMC << 5U ) |
				(ADC2_USER_CH19_NINSEL << 8U ) |
				(ADC2_USER_CH19_LEFT << 10U ) |
				(ADC2_USER_CH19_PINSEL << 11U ) |
				(ADC2_USER_CH19_DIFF << 15U ) |
				(ADC2_USER_CH19_CMPMOD << 16U ) |
				(ADC2_USER_CH19_TRG2SRC << 19U ) |
				(ADC2_USER_CH19_EIEN << 24U ) |
				(ADC2_USER_CH19_TRG1POL << 25U ) |
				(ADC2_USER_CH19_ACCRO << 26U ) |
				(ADC2_USER_CH19_ACCBRST << 27U ) |
				(ADC2_USER_CH19_ACCNUM << 28U ) |
				(ADC2_USER_CH19_MODE << 30U ) ;
		#ifdef DEF_BITNAME
			AD2CH19CONbits.TRG1SRC = ADC2_USER_CH19_TRG1SRC;
			AD2CH19CONbits.SAMC = ADC2_USER_CH19_SAMC;
			AD2CH19CONbits.NINSEL = ADC2_USER_CH19_NINSEL;
			AD2CH19CONbits.LEFT = ADC2_USER_CH19_LEFT;
			AD2CH19CONbits.PINSEL = ADC2_USER_CH19_PINSEL;
			AD2CH19CONbits.DIFF = ADC2_USER_CH19_DIFF;
			AD2CH19CONbits.CMPMOD = ADC2_USER_CH19_CMPMOD;
			AD2CH19CONbits.TRG2SRC = ADC2_USER_CH19_TRG2SRC;
			AD2CH19CONbits.EIEN = ADC2_USER_CH19_EIEN;
			AD2CH19CONbits.TRG1POL = ADC2_USER_CH19_TRG1POL;
			AD2CH19CONbits.ACCRO = ADC2_USER_CH19_ACCRO;
			AD2CH19CONbits.ACCBRST = ADC2_USER_CH19_ACCBRST;
			AD2CH19CONbits.ACCNUM = ADC2_USER_CH19_ACCNUM;
			AD2CH19CONbits.MODE = ADC2_USER_CH19_MODE;
		#endif 
	/*-----------------------------------------------------------------------*/
	/* AD2CH19DATAレジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CH19DATA = 0x00000000u;
	/*-----------------------------------------------------------------------*/
	/* AD2CH19CNTレジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CH19CNT = ADC2_USER_CH19_CNT;
		#ifdef DEF_BITNAME
			AD2CH19CNTbits.CNT = 0u;
			AD2CH19CNTbits.CNTSTAT = 0u;
		#endif 
	/*-----------------------------------------------------------------------*/
	/* AD2CH19CMPLOレジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CH19CMPLO = ADC2_USER_CH19_CMPLO;
	/*-----------------------------------------------------------------------*/
	/* AD2CH19CMPHIレジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CH19CMPHI = ADC2_USER_CH19_CMPHI;
	/*-----------------------------------------------------------------------*/
	/* AD2CH19ACCレジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CH19ACC = 0x00000000u;
#endif	
}
/*----------------------------------------------------------------------------*/
/*
* @fn        vdg_ADC1_Set_Power(uint16_t u4a_Enable)
* @brief     ADC1レジスタのパワーをセットします。
* @param	 0以外 = Off , 1 = On
* @return
* @detail 
 */
/*----------------------------------------------------------------------------*/
void vdg_ADC1_Set_Power(uint16_t u4a_Enable)
{
	if (u4a_Enable == 1U)
	{
		AD1CONbits.ON = 1U;   
		while(AD1CONbits.ADRDY == 0U)
		{
			;
		}
	}
	else
	{
		AD1CONbits.ON = 0U;
	}
	
}
/*----------------------------------------------------------------------------*/
/*
* @fn        vdg_ADC1_Calibrate(void) 
* @brief     ADC1のキャリブレーションを実行します。
* @param
* @return
* @detail 
 */
/*----------------------------------------------------------------------------*/
void vdg_ADC1_Calibrate(void)
{
    AD1CONbits.CALREQ = 1U;    
    while(AD1CONbits.CALRDY == 0U)
    {
    }  
}

/*----------------------------------------------------------------------------*/
/*
* @fn        vdg_ADC2_Set_Power(uint16_t u4a_Enable)
* @brief     ADC2レジスタのパワーをセットします。
* @param	 0以外 = Off , 1 = On
* @return
* @detail 
 */
/*----------------------------------------------------------------------------*/
void vdg_ADC2_Set_Power(uint16_t u4a_Enable)
{
	if (u4a_Enable == 1U)
	{
		AD2CONbits.ON = 1U;   
		while(AD2CONbits.ADRDY == 0U)
		{
			;
		}
	}
	else
	{
		AD2CONbits.ON = 0U;
	}
	
}
/*----------------------------------------------------------------------------*/
/*
* @fn        vdg_ADC2_Calibrate(void) 
* @brief     ADC2のキャリブレーションを実行します。
* @param
* @return
* @detail 
 */
/*----------------------------------------------------------------------------*/
void vdg_ADC2_Calibrate(void)
{
    AD2CONbits.CALREQ = 1U;    
    while(AD2CONbits.CALRDY == 0U)
    {
    }  
}

/*----------------------------------------------------------------------------*/
/*
* @fn        vdg_ADC_Set_Register(void) 
* @brief     全てのADCレジスタを初期化します 
* @param
* @return
* @detail 
 */
/*----------------------------------------------------------------------------*/
void vdg_ADC_Set_Register(void)
{
#if ( PMD_ADC1MD == PMD_MODULE_ENABLE )
    vdg_ADC1_Set_All_Register();
	
	vdg_ADC1_Set_Power(ADC1_USER_ON);
	if (ADC1_USER_ON == 1U)
	{
		vdg_ADC1_Calibrate();
	}

	
#endif
#if ( PMD_ADC2MD == PMD_MODULE_ENABLE )
    vdg_ADC2_Set_All_Register();
	
	vdg_ADC2_Set_Power(ADC2_USER_ON);
	if (ADC2_USER_ON == 1U)
	{
		vdg_ADC2_Calibrate();
	}
#endif
#if ( PMD_ADC3MD == PMD_MODULE_ENABLE )
    vdg_ADC3_Set_All_Register();
#endif
#if ( PMD_ADC4MD == PMD_MODULE_ENABLE )
    vdg_ADC4_Set_All_Register();
#endif
#if ( PMD_ADC5MD == PMD_MODULE_ENABLE )
    vdg_ADC5_Set_All_Register();
#endif
}