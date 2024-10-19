/*----------------------------------------------------------------------------*/
/**
* @file		Clock_Driver.c
* @brief	Clockモジュールに関するドライバ関数
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
#include "clock_driver.h"
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
* @fn        vdg_Clock_Set_Register(void)
* @brief     クロックの設定をします
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void vdg_Clock_Set_Register(void)
{
#if 0
	/*-----------------------------------------------------------------------*/
	/* OSCCTRLレジスタ */
	/*-----------------------------------------------------------------------*/
		OSCCTRL = 0x00000000u;
		#ifdef DEF_BITNAME
			OSCCTRLbits.FRCEN = 0u;
			OSCCTRLbits.BFRCEN = 0u;
			OSCCTRLbits.POSCEN = 0u;
			OSCCTRLbits.LPRCEN = 0u;
			OSCCTRLbits.PLL1EN = 0u;
			OSCCTRLbits.PLL2EN = 0u;
			OSCCTRLbits.FRCRDY = 0u;
			OSCCTRLbits.BFRCRDY = 0u;
			OSCCTRLbits.POSCRDY = 0u;
			OSCCTRLbits.LPRCRDY = 0u;
			OSCCTRLbits.PLL1RDY = 0u;
			OSCCTRLbits.PLL2RDY = 0u;
			OSCCTRLbits.CLKLOCK = 0u;
			OSCCTRLbits.DIAGLOCK = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* OSCCFGレジスタ */
	/*-----------------------------------------------------------------------*/
		OSCCFG = 0x00000000u;
		#ifdef DEF_BITNAME
			OSCCFGbits.POSCMD = 0u;
			OSCCFGbits.PXTALCFG = 0u;
			OSCCFGbits.POSCIOFNC = 0u;
			OSCCFGbits.FRCLPWR = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CLKFAILレジスタ */
	/*-----------------------------------------------------------------------*/
		CLKFAIL = 0x00000000u;
		#ifdef DEF_BITNAME
			CLKFAILbits.CLKFAIL1 = 0u;
			CLKFAILbits.CLKFAIL2 = 0u;
			CLKFAILbits.CLKFAIL3 = 0u;
			CLKFAILbits.CLKFAIL4 = 0u;
			CLKFAILbits.CLKFAIL5 = 0u;
			CLKFAILbits.CLKFAIL6 = 0u;
			CLKFAILbits.CLKFAIL7 = 0u;
			CLKFAILbits.CLKFAIL8 = 0u;
			CLKFAILbits.CLKFAIL9 = 0u;
			CLKFAILbits.CLKFAIL10 = 0u;
			CLKFAILbits.CLKFAIL11 = 0u;
			CLKFAILbits.CLKFAIL12 = 0u;
			CLKFAILbits.CLKFAIL13 = 0u;
			CLKFAILbits.PLL1FAIL = 0u;
			CLKFAILbits.PLL2FAIL = 0u;
			CLKFAILbits.SCSMCH = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* SCSFAILレジスタ */
	/*-----------------------------------------------------------------------*/
		SCSFAIL = 0x00000000u;
		#ifdef DEF_BITNAME
			SCSFAILbits.CLKSCS1 = 0u;
			SCSFAILbits.CLKSCS2 = 0u;
			SCSFAILbits.CLKSCS3 = 0u;
			SCSFAILbits.CLKSCS4 = 0u;
			SCSFAILbits.CLKSCS5 = 0u;
			SCSFAILbits.CLKSCS6 = 0u;
			SCSFAILbits.CLKSCS7 = 0u;
			SCSFAILbits.CLKSCS8 = 0u;
			SCSFAILbits.CLKSCS9 = 0u;
			SCSFAILbits.CLKSCS10 = 0u;
			SCSFAILbits.CLKSCS11 = 0u;
			SCSFAILbits.CLKSCS12 = 0u;
			SCSFAILbits.CLKSCS13 = 0u;
			SCSFAILbits.PLL1SCS = 0u;
			SCSFAILbits.PLL2SCS = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CLK1CONレジスタ */
	/*-----------------------------------------------------------------------*/
		CLK1CON = 0x00000000u;
		#ifdef DEF_BITNAME
			CLK1CONbits.COSC = 0u;
			CLK1CONbits.NOSC = 0u;
			CLK1CONbits.OE = 0u;
			CLK1CONbits.SIDL = 0u;
			CLK1CONbits.ON = 0u;
			CLK1CONbits.BOSC = 0u;
			CLK1CONbits.FSCMEN = 0u;
			CLK1CONbits.DIVSWEN = 0u;
			CLK1CONbits.OSWEN = 0u;
			CLK1CONbits.EXTCFSEL = 0u;
			CLK1CONbits.EXTCFEN = 0u;
			CLK1CONbits.RIS = 0u;
			CLK1CONbits.CLKRDY = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CLK1DIVレジスタ */
	/*-----------------------------------------------------------------------*/
		CLK1DIV = 0x00000000u;
		#ifdef DEF_BITNAME
			CLK1DIVbits.FRACDIV = 0u;
			CLK1DIVbits.INTDIV = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CLK2CONレジスタ */
	/*-----------------------------------------------------------------------*/
		CLK2CON = 0x00000000u;
		#ifdef DEF_BITNAME
			CLK2CONbits.COSC = 0u;
			CLK2CONbits.NOSC = 0u;
			CLK2CONbits.OE = 0u;
			CLK2CONbits.SIDL = 0u;
			CLK2CONbits.ON = 0u;
			CLK2CONbits.BOSC = 0u;
			CLK2CONbits.FSCMEN = 0u;
			CLK2CONbits.DIVSWEN = 0u;
			CLK2CONbits.OSWEN = 0u;
			CLK2CONbits.EXTCFSEL = 0u;
			CLK2CONbits.EXTCFEN = 0u;
			CLK2CONbits.RIS = 0u;
			CLK2CONbits.CLKRDY = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CLK2DIVレジスタ */
	/*-----------------------------------------------------------------------*/
		CLK2DIV = 0x00000000u;
		#ifdef DEF_BITNAME
			CLK2DIVbits.FRACDIV = 0u;
			CLK2DIVbits.INTDIV = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CLK3CONレジスタ */
	/*-----------------------------------------------------------------------*/
		CLK3CON = 0x00000000u;
		#ifdef DEF_BITNAME
			CLK3CONbits.COSC = 0u;
			CLK3CONbits.NOSC = 0u;
			CLK3CONbits.OE = 0u;
			CLK3CONbits.SIDL = 0u;
			CLK3CONbits.ON = 0u;
			CLK3CONbits.BOSC = 0u;
			CLK3CONbits.FSCMEN = 0u;
			CLK3CONbits.DIVSWEN = 0u;
			CLK3CONbits.OSWEN = 0u;
			CLK3CONbits.EXTCFSEL = 0u;
			CLK3CONbits.EXTCFEN = 0u;
			CLK3CONbits.RIS = 0u;
			CLK3CONbits.CLKRDY = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CLK3DIVレジスタ */
	/*-----------------------------------------------------------------------*/
		CLK3DIV = 0x00000000u;
		#ifdef DEF_BITNAME
			CLK3DIVbits.FRACDIV = 0u;
			CLK3DIVbits.INTDIV = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CLK4CONレジスタ */
	/*-----------------------------------------------------------------------*/
		CLK4CON = 0x00000000u;
		#ifdef DEF_BITNAME
			CLK4CONbits.COSC = 0u;
			CLK4CONbits.NOSC = 0u;
			CLK4CONbits.OE = 0u;
			CLK4CONbits.SIDL = 0u;
			CLK4CONbits.ON = 0u;
			CLK4CONbits.BOSC = 0u;
			CLK4CONbits.FSCMEN = 0u;
			CLK4CONbits.DIVSWEN = 0u;
			CLK4CONbits.OSWEN = 0u;
			CLK4CONbits.EXTCFSEL = 0u;
			CLK4CONbits.EXTCFEN = 0u;
			CLK4CONbits.RIS = 0u;
			CLK4CONbits.CLKRDY = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CLK4DIVレジスタ */
	/*-----------------------------------------------------------------------*/
		CLK4DIV = 0x00000000u;
		#ifdef DEF_BITNAME
			CLK4DIVbits.FRACDIV = 0u;
			CLK4DIVbits.INTDIV = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CLK5CONレジスタ */
	/*-----------------------------------------------------------------------*/
		CLK5CON = 0x00000000u;
		#ifdef DEF_BITNAME
			CLK5CONbits.COSC = 0u;
			CLK5CONbits.NOSC = 0u;
			CLK5CONbits.OE = 0u;
			CLK5CONbits.SIDL = 0u;
			CLK5CONbits.ON = 0u;
			CLK5CONbits.BOSC = 0u;
			CLK5CONbits.FSCMEN = 0u;
			CLK5CONbits.DIVSWEN = 0u;
			CLK5CONbits.OSWEN = 0u;
			CLK5CONbits.EXTCFSEL = 0u;
			CLK5CONbits.EXTCFEN = 0u;
			CLK5CONbits.RIS = 0u;
			CLK5CONbits.CLKRDY = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CLK5DIVレジスタ */
	/*-----------------------------------------------------------------------*/
		CLK5DIV = 0x00000000u;
		#ifdef DEF_BITNAME
			CLK5DIVbits.FRACDIV = 0u;
			CLK5DIVbits.INTDIV = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CLK6CONレジスタ */
	/*-----------------------------------------------------------------------*/
		CLK6CON = 0x00000000u;
		#ifdef DEF_BITNAME
			CLK6CONbits.COSC = 0u;
			CLK6CONbits.NOSC = 0u;
			CLK6CONbits.OE = 0u;
			CLK6CONbits.SIDL = 0u;
			CLK6CONbits.ON = 0u;
			CLK6CONbits.BOSC = 0u;
			CLK6CONbits.FSCMEN = 0u;
			CLK6CONbits.DIVSWEN = 0u;
			CLK6CONbits.OSWEN = 0u;
			CLK6CONbits.EXTCFSEL = 0u;
			CLK6CONbits.EXTCFEN = 0u;
			CLK6CONbits.RIS = 0u;
			CLK6CONbits.CLKRDY = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CLK6DIVレジスタ */
	/*-----------------------------------------------------------------------*/
		CLK6DIV = 0x00000000u;
		#ifdef DEF_BITNAME
			CLK6DIVbits.FRACDIV = 0u;
			CLK6DIVbits.INTDIV = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CLK7CONレジスタ */
	/*-----------------------------------------------------------------------*/
		CLK7CON = 0x00000000u;
		#ifdef DEF_BITNAME
			CLK7CONbits.COSC = 0u;
			CLK7CONbits.NOSC = 0u;
			CLK7CONbits.OE = 0u;
			CLK7CONbits.SIDL = 0u;
			CLK7CONbits.ON = 0u;
			CLK7CONbits.BOSC = 0u;
			CLK7CONbits.FSCMEN = 0u;
			CLK7CONbits.DIVSWEN = 0u;
			CLK7CONbits.OSWEN = 0u;
			CLK7CONbits.EXTCFSEL = 0u;
			CLK7CONbits.EXTCFEN = 0u;
			CLK7CONbits.RIS = 0u;
			CLK7CONbits.CLKRDY = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CLK7DIVレジスタ */
	/*-----------------------------------------------------------------------*/
		CLK7DIV = 0x00000000u;
		#ifdef DEF_BITNAME
			CLK7DIVbits.FRACDIV = 0u;
			CLK7DIVbits.INTDIV = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CLK8CONレジスタ */
	/*-----------------------------------------------------------------------*/
		CLK8CON = 0x00000000u;
		#ifdef DEF_BITNAME
			CLK8CONbits.COSC = 0u;
			CLK8CONbits.NOSC = 0u;
			CLK8CONbits.OE = 0u;
			CLK8CONbits.SIDL = 0u;
			CLK8CONbits.ON = 0u;
			CLK8CONbits.BOSC = 0u;
			CLK8CONbits.FSCMEN = 0u;
			CLK8CONbits.DIVSWEN = 0u;
			CLK8CONbits.OSWEN = 0u;
			CLK8CONbits.EXTCFSEL = 0u;
			CLK8CONbits.EXTCFEN = 0u;
			CLK8CONbits.RIS = 0u;
			CLK8CONbits.CLKRDY = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CLK8DIVレジスタ */
	/*-----------------------------------------------------------------------*/
		CLK8DIV = 0x00000000u;
		#ifdef DEF_BITNAME
			CLK8DIVbits.FRACDIV = 0u;
			CLK8DIVbits.INTDIV = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CLK9CONレジスタ */
	/*-----------------------------------------------------------------------*/
		CLK9CON = 0x00000000u;
		#ifdef DEF_BITNAME
			CLK9CONbits.COSC = 0u;
			CLK9CONbits.NOSC = 0u;
			CLK9CONbits.OE = 0u;
			CLK9CONbits.SIDL = 0u;
			CLK9CONbits.ON = 0u;
			CLK9CONbits.BOSC = 0u;
			CLK9CONbits.FSCMEN = 0u;
			CLK9CONbits.DIVSWEN = 0u;
			CLK9CONbits.OSWEN = 0u;
			CLK9CONbits.EXTCFSEL = 0u;
			CLK9CONbits.EXTCFEN = 0u;
			CLK9CONbits.RIS = 0u;
			CLK9CONbits.CLKRDY = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CLK9DIVレジスタ */
	/*-----------------------------------------------------------------------*/
		CLK9DIV = 0x00000000u;
		#ifdef DEF_BITNAME
			CLK9DIVbits.FRACDIV = 0u;
			CLK9DIVbits.INTDIV = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CLK10CONレジスタ */
	/*-----------------------------------------------------------------------*/
		CLK10CON = 0x00000000u;
		#ifdef DEF_BITNAME
			CLK10CONbits.COSC = 0u;
			CLK10CONbits.NOSC = 0u;
			CLK10CONbits.OE = 0u;
			CLK10CONbits.SIDL = 0u;
			CLK10CONbits.ON = 0u;
			CLK10CONbits.BOSC = 0u;
			CLK10CONbits.FSCMEN = 0u;
			CLK10CONbits.DIVSWEN = 0u;
			CLK10CONbits.OSWEN = 0u;
			CLK10CONbits.EXTCFSEL = 0u;
			CLK10CONbits.EXTCFEN = 0u;
			CLK10CONbits.RIS = 0u;
			CLK10CONbits.CLKRDY = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CLK10DIVレジスタ */
	/*-----------------------------------------------------------------------*/
		CLK10DIV = 0x00000000u;
		#ifdef DEF_BITNAME
			CLK10DIVbits.FRACDIV = 0u;
			CLK10DIVbits.INTDIV = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CLK11CONレジスタ */
	/*-----------------------------------------------------------------------*/
		CLK11CON = 0x00000000u;
		#ifdef DEF_BITNAME
			CLK11CONbits.COSC = 0u;
			CLK11CONbits.NOSC = 0u;
			CLK11CONbits.OE = 0u;
			CLK11CONbits.SIDL = 0u;
			CLK11CONbits.ON = 0u;
			CLK11CONbits.BOSC = 0u;
			CLK11CONbits.FSCMEN = 0u;
			CLK11CONbits.DIVSWEN = 0u;
			CLK11CONbits.OSWEN = 0u;
			CLK11CONbits.EXTCFSEL = 0u;
			CLK11CONbits.EXTCFEN = 0u;
			CLK11CONbits.RIS = 0u;
			CLK11CONbits.CLKRDY = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CLK11DIVレジスタ */
	/*-----------------------------------------------------------------------*/
		CLK11DIV = 0x00000000u;
		#ifdef DEF_BITNAME
			CLK11DIVbits.FRACDIV = 0u;
			CLK11DIVbits.INTDIV = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CLK12CONレジスタ */
	/*-----------------------------------------------------------------------*/
		CLK12CON = 0x00000000u;
		#ifdef DEF_BITNAME
			CLK12CONbits.COSC = 0u;
			CLK12CONbits.NOSC = 0u;
			CLK12CONbits.OE = 0u;
			CLK12CONbits.SIDL = 0u;
			CLK12CONbits.ON = 0u;
			CLK12CONbits.BOSC = 0u;
			CLK12CONbits.FSCMEN = 0u;
			CLK12CONbits.DIVSWEN = 0u;
			CLK12CONbits.OSWEN = 0u;
			CLK12CONbits.EXTCFSEL = 0u;
			CLK12CONbits.EXTCFEN = 0u;
			CLK12CONbits.RIS = 0u;
			CLK12CONbits.CLKRDY = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CLK12DIVレジスタ */
	/*-----------------------------------------------------------------------*/
		CLK12DIV = 0x00000000u;
		#ifdef DEF_BITNAME
			CLK12DIVbits.FRACDIV = 0u;
			CLK12DIVbits.INTDIV = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CLK13CONレジスタ */
	/*-----------------------------------------------------------------------*/
		CLK13CON = 0x00000000u;
		#ifdef DEF_BITNAME
			CLK13CONbits.COSC = 0u;
			CLK13CONbits.NOSC = 0u;
			CLK13CONbits.OE = 0u;
			CLK13CONbits.SIDL = 0u;
			CLK13CONbits.ON = 0u;
			CLK13CONbits.BOSC = 0u;
			CLK13CONbits.FSCMEN = 0u;
			CLK13CONbits.DIVSWEN = 0u;
			CLK13CONbits.OSWEN = 0u;
			CLK13CONbits.EXTCFSEL = 0u;
			CLK13CONbits.EXTCFEN = 0u;
			CLK13CONbits.RIS = 0u;
			CLK13CONbits.CLKRDY = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CLK13DIVレジスタ */
	/*-----------------------------------------------------------------------*/
		CLK13DIV = 0x00000000u;
		#ifdef DEF_BITNAME
			CLK13DIVbits.FRACDIV = 0u;
			CLK13DIVbits.INTDIV = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* PLL1CONレジスタ */
	/*-----------------------------------------------------------------------*/
		PLL1CON = 0x00000000u;
		#ifdef DEF_BITNAME
			PLL1CONbits.COSC = 0u;
			PLL1CONbits.NOSC = 0u;
			PLL1CONbits.OE = 0u;
			PLL1CONbits.SIDL = 0u;
			PLL1CONbits.ON = 0u;
			PLL1CONbits.BOSC = 0u;
			PLL1CONbits.FSCMEN = 0u;
			PLL1CONbits.DIVSWEN = 0u;
			PLL1CONbits.OSWEN = 0u;
			PLL1CONbits.EXTCFSEL = 0u;
			PLL1CONbits.EXTCFEN = 0u;
			PLL1CONbits.FOUTSWEN = 0u;
			PLL1CONbits.RIS = 0u;
			PLL1CONbits.PLLSWEN = 0u;
			PLL1CONbits.CLKRDY = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* PLL1DIVレジスタ */
	/*-----------------------------------------------------------------------*/
		PLL1DIV = 0x00000000u;
		#ifdef DEF_BITNAME
			PLL1DIVbits.POSTDIV2 = 0u;
			PLL1DIVbits.POSTDIV1 = 0u;
			PLL1DIVbits.PLLFBDIV = 0u;
			PLL1DIVbits.PLLPRE = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* VCO1DIVレジスタ */
	/*-----------------------------------------------------------------------*/
		VCO1DIV = 0x00000000u;
		#ifdef DEF_BITNAME
			VCO1DIVbits.INTDIV = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* PLL2CONレジスタ */
	/*-----------------------------------------------------------------------*/
		PLL2CON = 0x00000000u;
		#ifdef DEF_BITNAME
			PLL2CONbits.COSC = 0u;
			PLL2CONbits.NOSC = 0u;
			PLL2CONbits.OE = 0u;
			PLL2CONbits.SIDL = 0u;
			PLL2CONbits.ON = 0u;
			PLL2CONbits.BOSC = 0u;
			PLL2CONbits.FSCMEN = 0u;
			PLL2CONbits.DIVSWEN = 0u;
			PLL2CONbits.OSWEN = 0u;
			PLL2CONbits.EXTCFSEL = 0u;
			PLL2CONbits.EXTCFEN = 0u;
			PLL2CONbits.FOUTSWEN = 0u;
			PLL2CONbits.RIS = 0u;
			PLL2CONbits.PLLSWEN = 0u;
			PLL2CONbits.CLKRDY = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* PLL2DIVレジスタ */
	/*-----------------------------------------------------------------------*/
		PLL2DIV = 0x00000000u;
		#ifdef DEF_BITNAME
			PLL2DIVbits.POSTDIV2 = 0u;
			PLL2DIVbits.POSTDIV1 = 0u;
			PLL2DIVbits.PLLFBDIV = 0u;
			PLL2DIVbits.PLLPRE = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* VCO2DIVレジスタ */
	/*-----------------------------------------------------------------------*/
		VCO2DIV = 0x00000000u;
		#ifdef DEF_BITNAME
			VCO2DIVbits.INTDIV = 0u;
		#endif 
	/*-----------------------------------------------------------------------*/
	/* CLKDIAGレジスタ */
	/*-----------------------------------------------------------------------*/
		CLKDIAG = 0x00000000u;
		#ifdef DEF_BITNAME
			CLKDIAGbits.STOPGEN1 = 0u;
			CLKDIAGbits.STOPGEN2 = 0u;
			CLKDIAGbits.STOPGEN3 = 0u;
			CLKDIAGbits.STOPGEN4 = 0u;
			CLKDIAGbits.STOPGEN5 = 0u;
			CLKDIAGbits.STOPGEN6 = 0u;
			CLKDIAGbits.STOPGEN7 = 0u;
			CLKDIAGbits.STOPGEN8 = 0u;
			CLKDIAGbits.STOPGEN9 = 0u;
			CLKDIAGbits.STOPGEN10 = 0u;
			CLKDIAGbits.STOPGEN11 = 0u;
			CLKDIAGbits.SCSFLTDATA = 0u;
			CLKDIAGbits.GENSEL = 0u;
			CLKDIAGbits.STOPPLL1 = 0u;
			CLKDIAGbits.STOPPLL2 = 0u;
			CLKDIAGbits.FLTIJEN = 0u;
		#endif

	/*-----------------------------------------------------------------------*/
	/* FRCTUNレジスタ */
	/*-----------------------------------------------------------------------*/
		FRCTUN = 0x00000000u;
		#ifdef DEF_BITNAME
			FRCTUNbits.TUN = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* BFRCTUNレジスタ */
	/*-----------------------------------------------------------------------*/
		BFRCTUN = 0x00000000u;
		#ifdef DEF_BITNAME
			BFRCTUNbits.TUN = 0u;
		#endif 
#endif
			
	/*-----------------------------------------------------------------------*/
	/* クロックの設定 */
	/*-----------------------------------------------------------------------*/	
	  
	//システムクロックソース                            :  PLL1 Out出力
	//システム/ジェネレータ 1 の周波数 (Fosc)            :  200 MHz
	//クロックジェネレータ 2 の周波数                     : 8 MHz
	//クロックジェネレータ 3 の周波数                     : 8 MHz
	//クロックジェネレータ 5 の周波数                     : 400 MHz
	//クロックジェネレータ 6 の周波数                     : 200 MHz
	//クロックジェネレータ 7 の周波数                     : 400 MHz
	//クロックジェネレータ 8 の周波数                     : 200 MHz
	//クロックジェネレータ 9 の周波数                     : 4 MHz
	//クロックジェネレータ 10 の周波数                    : 400 MHz
	//クロックジェネレータ 12 の周波数                    : 200 MHz
	//クロックジェネレータ 13 の周波数                    : 200 MHz
	//PLL 1 の周波数                                    : 400 MHz
	//PLL 1 VCO 出力周波数                              : 800 MHz
	/*-----------------------------------------------------------------------*/
	/* プライマリオシレータの設定と有効化 */
	/*-----------------------------------------------------------------------*/	
		// プライマリオシレータの選択		
		OSCCFGbits.POSCMD = 0x2u;
		OSCCFGbits.POSCIOFNC = 0u;
		OSCCTRLbits.POSCEN = 1U;
		while(OSCCTRLbits.POSCRDY == 0U){};
		
	/*-----------------------------------------------------------------------*/
	/* PLL1の設定と有効化 */
	/*-----------------------------------------------------------------------*/	
		// NOSC プライマリオシレータ; OE 有効; SIDL 無効; ON 有効; BOSC シリアルテストモードクロック (PGC); FSCMEN 無効; DIVSWEN 無効; OSWEN 無効; EXTCFSEL 無効; EXTCFEN 無効; FOUTSWEN 無効; RIS 無効; PLLSWEN 無効; 
		PLL1CON = 0x9300UL;
		// POSTDIV2 1x 分周; POSTDIV1 4x 分周; PLLFBDIV 200; PLLPRE 1; 
		PLL1DIV = 0x100C821UL;
		// PLL 入力およびフィードバック分周の更新を有効化
		PLL1CONbits.PLLSWEN = 1U;
		while (PLL1CONbits.PLLSWEN == 1){};
		PLL1CONbits.FOUTSWEN = 1U;
		while (PLL1CONbits.FOUTSWEN == 1U){};
		// クロックスイッチングを有効化
		PLL1CONbits.OSWEN = 1U; 
		// スイッチング待ち
		while(PLL1CONbits.OSWEN == 1U){}; 
		// クロックが準備完了するのを待つ
		while(OSCCTRLbits.PLL1RDY == 0U){};    
    
		// VCO 分周器の設定
		// INTDIV 1; 
		VCO1DIV = 0x10000UL;
		// PLL VCO 分周器を有効化
		PLL1CONbits.DIVSWEN = 1U; 
		// セットアップ完了待ち
		while(PLL1CONbits.DIVSWEN == 1U){}; 
	/*-----------------------------------------------------------------------*/
	/* クロックジェネレータ1の設定と有効化 */
	/*-----------------------------------------------------------------------*/	
		// NOSC PLL1 Out 出力; OE 有効; SIDL 無効; ON 有効; BOSC FRC オシレータ; FSCMEN 無効; DIVSWEN 無効; OSWEN 無効; EXTCFSEL 外部クロック故障検出モジュール #1; EXTCFEN 無効; RIS 無効; 
		CLK1CON = 0x19500UL;
		// FRACDIV 0; INTDIV 1; 
		CLK1DIV = 0x10000UL;
		// 分周ファクターを有効化
		CLK1CONbits.DIVSWEN = 1U; 
		// 分周ファクターの更新を待つ
		while(CLK1CONbits.DIVSWEN == 1U){};
		// クロックスイッチングを有効化
		CLK1CONbits.OSWEN = 1U; 
		// クロックスイッチング完了待ち
		while(CLK1CONbits.OSWEN == 1U){};
		
	/*-----------------------------------------------------------------------*/
	/* クロックジェネレータ2の設定と有効化 */
	/*-----------------------------------------------------------------------*/	
		// NOSC FRC オシレータ; OE 有効; SIDL 無効; ON 有効; BOSC シリアルテストモードクロック (PGC); FSCMEN 無効; DIVSWEN 無効; OSWEN 無効; EXTCFSEL 外部クロック故障検出モジュール #1; EXTCFEN 無効; RIS 無効; 
		CLK2CON = 0x9101UL;
		// クロックスイッチングを有効化
		CLK2CONbits.OSWEN = 1U; 
		// クロックスイッチング完了待ち
		while(CLK2CONbits.OSWEN == 1U){};
		
	/*-----------------------------------------------------------------------*/
	/* クロックジェネレータ3の設定と有効化 */
	/*-----------------------------------------------------------------------*/	
		// NOSC バックアップ FRC オシレータ; OE 有効; SIDL 無効; ON 有効; BOSC シリアルテストモードクロック (PGC); FSCMEN 無効; DIVSWEN 無効; OSWEN 無効; EXTCFSEL 外部クロック故障検出モジュール #1; EXTCFEN 無効; RIS 無効; 
		CLK3CON = 0x9202UL;
		// クロックスイッチングを有効化
		CLK3CONbits.OSWEN = 1U; 
		// クロックスイッチング完了待ち
		while(CLK3CONbits.OSWEN == 1U){};

		
	/*-----------------------------------------------------------------------*/
	/* クロックジェネレータ5の設定と有効化 */
	/*-----------------------------------------------------------------------*/	
		// NOSC PLL1 VCO 分周出力; OE 有効; SIDL 無効; ON 有効; BOSC シリアルテストモードクロック (PGC); FSCMEN 無効; DIVSWEN 無効; OSWEN 無効; EXTCFSEL 外部クロック故障検出モジュール #1; EXTCFEN 無効; RIS 無効; 
		CLK5CON = 0x9700UL;
		// FRACDIV 0; INTDIV 1; 
		CLK5DIV = 0x10000UL;
		// 分周ファクターを有効化
		CLK5CONbits.DIVSWEN = 1U; 
		// 分周ファクターの更新を待つ
		while(CLK5CONbits.DIVSWEN == 1U){};
		// クロックスイッチングを有効化
		CLK5CONbits.OSWEN = 1U; 
		// クロックスイッチング完了待ち
		while(CLK5CONbits.OSWEN == 1U){};

	/*-----------------------------------------------------------------------*/
	/* クロックジェネレータ6の設定と有効化 */
	/*-----------------------------------------------------------------------*/	
		// NOSC PLL1 VCO 分周出力; OE 有効; SIDL 無効; ON 有効; BOSC シリアルテストモードクロック (PGC); FSCMEN 無効; DIVSWEN 無効; OSWEN 無効; EXTCFSEL 外部クロック故障検出モジュール #1; EXTCFEN 無効; RIS 無効; 
		CLK6CON = 0x9700UL;
		// FRACDIV 0; INTDIV 2; 
		CLK6DIV = 0x20000UL;
		// 分周ファクターを有効化
		CLK6CONbits.DIVSWEN = 1U; 
		// 分周ファクターの更新を待つ
		while(CLK6CONbits.DIVSWEN == 1U){};
		// クロックスイッチングを有効化
		CLK6CONbits.OSWEN = 1U; 
		// クロックスイッチング完了待ち
		while(CLK6CONbits.OSWEN == 1U){};

	/*-----------------------------------------------------------------------*/
	/* クロックジェネレータ7の設定と有効化 */
	/*-----------------------------------------------------------------------*/	
		// NOSC PLL1 Out 出力; OE 有効; SIDL 無効; ON 有効; BOSC シリアルテストモードクロック (PGC); FSCMEN 無効; DIVSWEN 無効; OSWEN 無効; EXTCFSEL 外部クロック故障検出モジュール #1; EXTCFEN 無効; RIS 無効; 
		CLK7CON = 0x9500UL;
		// FRACDIV 0x0; INTDIV 0x0; 
		CLK7DIV = 0x0UL;
		// クロックスイッチングを有効化
		CLK7CONbits.OSWEN = 1U; 
		// クロックスイッチング完了待ち
		while(CLK7CONbits.OSWEN == 1U){};

	/*-----------------------------------------------------------------------*/
	/* クロックジェネレータ8の設定と有効化 */
	/*-----------------------------------------------------------------------*/	
		// NOSC PLL1 Out 出力; OE 有効; SIDL 無効; ON 有効; BOSC シリアルテストモードクロック (PGC); FSCMEN 無効; DIVSWEN 無効; OSWEN 無効; EXTCFSEL 外部クロック故障検出モジュール #1; EXTCFEN 無効; RIS 無効; 
		CLK8CON = 0x9500UL;
		// FRACDIV 0; INTDIV 1; 
		CLK8DIV = 0x10000UL;
		// 分周ファクターを有効化
		CLK8CONbits.DIVSWEN = 1U; 
		// 分周ファクターの更新を待つ
		while(CLK8CONbits.DIVSWEN == 1U){};
		// クロックスイッチングを有効化
		CLK8CONbits.OSWEN = 1U; 
		// クロックスイッチング完了待ち
		while(CLK8CONbits.OSWEN == 1U){};

	/*-----------------------------------------------------------------------*/
	/* クロックジェネレータ9の設定と有効化 */
	/*-----------------------------------------------------------------------*/	
		// NOSC PLL1 Out 出力; OE 有効; SIDL 無効; ON 有効; BOSC シリアルテストモードクロック (PGC); FSCMEN 無効; DIVSWEN 無効; OSWEN 無効; EXTCFSEL 外部クロック故障検出モジュール #1; EXTCFEN 無効; RIS 無効; 
		CLK9CON = 0x9500UL;
		// FRACDIV 0; INTDIV 50; 
		CLK9DIV = 0x320000UL;
		// 分周ファクターを有効化
		CLK9CONbits.DIVSWEN = 1U; 
		// 分周ファクターの更新を待つ
		while(CLK9CONbits.DIVSWEN == 1U){};
		// クロックスイッチングを有効化
		CLK9CONbits.OSWEN = 1U; 
		// クロックスイッチング完了待ち
		while(CLK9CONbits.OSWEN == 1U){};
		
	/*-----------------------------------------------------------------------*/
	/* クロックジェネレータ10の設定と有効化 */
	/*-----------------------------------------------------------------------*/	
		// NOSC PLL1 VCO 分周出力; OE 有効; SIDL 無効; ON 有効; BOSC シリアルテストモードクロック (PGC); FSCMEN 無効; DIVSWEN 無効; OSWEN 無効; EXTCFSEL 外部クロック故障検出モジュール #1; EXTCFEN 無効; RIS 無効; 
		CLK10CON = 0x9700UL;
		// FRACDIV 0; INTDIV 1; 
		CLK10DIV = 0x10000UL;
		// 分周ファクターを有効化
		CLK10CONbits.DIVSWEN = 1U; 
		// 分周ファクターの更新を待つ
		while(CLK10CONbits.DIVSWEN == 1U){};
		// クロックスイッチングを有効化
		CLK10CONbits.OSWEN = 1U; 
		// クロックスイッチング完了待ち
		while(CLK10CONbits.OSWEN == 1U){};
		
	/*-----------------------------------------------------------------------*/
	/* クロックジェネレータ12の設定と有効化 */
	/*-----------------------------------------------------------------------*/	
		// NOSC PLL1 Out 出力; OE 有効; SIDL 無効; ON 有効; BOSC シリアルテストモードクロック (PGC); FSCMEN 無効; DIVSWEN 無効; OSWEN 無効; EXTCFSEL 外部クロック故障検出モジュール #1; EXTCFEN 無効; RIS 無効; 
		CLK12CON = 0x9500UL;
		// FRACDIV 0; INTDIV 1; 
		CLK12DIV = 0x10000UL;
		// 分周ファクターを有効化
		CLK12CONbits.DIVSWEN = 1U; 
		// 分周ファクターの更新を待つ
		while(CLK12CONbits.DIVSWEN == 1U){};
		// クロックスイッチングを有効化
		CLK12CONbits.OSWEN = 1U; 
		// クロックスイッチング完了待ち
		while(CLK12CONbits.OSWEN == 1U){};
		
	/*-----------------------------------------------------------------------*/
	/* クロックジェネレータ13の設定と有効化 */
	/*-----------------------------------------------------------------------*/	
		// NOSC PLL1 Out 出力; OE 有効; SIDL 無効; ON 有効; BOSC シリアルテストモードクロック (PGC); FSCMEN 無効; DIVSWEN 無効; OSWEN 無効; EXTCFSEL 外部クロック故障検出モジュール #1; EXTCFEN 無効; RIS 無効; 
		CLK13CON = 0x9500UL;
		// FRACDIV 0; INTDIV 1; 
		CLK13DIV = 0x10000UL;
		// 分周ファクターを有効化
		CLK13CONbits.DIVSWEN = 1U; 
		// 分周ファクターの更新を待つ
		while(CLK13CONbits.DIVSWEN == 1U){};
		// クロックスイッチングを有効化
		CLK13CONbits.OSWEN = 1U; 
		// クロックスイッチング完了待ち
		while(CLK13CONbits.OSWEN == 1U){};

}

