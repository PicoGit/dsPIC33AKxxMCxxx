/*----------------------------------------------------------------------------*/
/**
* @file		CCP_Driver.c
* @brief	CCPモジュールに関するドライバ関数
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
#include "ccp_driver.h"
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
* @fn        vdg_CCP1_Set_Register(void)
* @brief     CCP1レジスタを初期化します
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void vdg_CCP1_Set_Register(void)
{
#if ( PMD_CCP1MD == PMD_MODULE_ENABLE )
  	/*-----------------------------------------------------------------------*/
	/* CCP1CON1レジスタ */
	/*-----------------------------------------------------------------------*/
		CCP1CON1 = 0x00000000u;
		#ifdef DEF_BITNAME
			CCP1CON1bits.MOD = 0u;
			CCP1CON1bits.CCSEL = 0u;
			CCP1CON1bits.T32 = 0u;
			CCP1CON1bits.TMRPS = 0u;
			CCP1CON1bits.CLKSEL = 0u;
			CCP1CON1bits.TMRSYNC = 0u;
			CCP1CON1bits.SLPEN = 0u;
			CCP1CON1bits.SIDL = 0u;
			CCP1CON1bits.ON = 0u;
			CCP1CON1bits.SYNC = 0u;
			CCP1CON1bits.ALTSYNC = 0u;
			CCP1CON1bits.ONESHOT = 0u;
			CCP1CON1bits.TRIGEN = 0u;
			CCP1CON1bits.OPS = 0u;
			CCP1CON1bits.RTRGEN = 0u;
			CCP1CON1bits.OPSSRC = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CCP1CON2レジスタ */
	/*-----------------------------------------------------------------------*/
	CCP1CON2 = 0x00000000u;
		#ifdef DEF_BITNAME
			CCP1CON2bits.ASDG = 0u;
			CCP1CON2bits.SSDG = 0u;
			CCP1CON2bits.ASDGM = 0u;
			CCP1CON2bits.PWMRSEN = 0u;
			CCP1CON2bits.ICS = 0u;
			CCP1CON2bits.AUXOUT = 0u;
			CCP1CON2bits.ICGSM = 0u;
			CCP1CON2bits.OCAEN = 0u;
			CCP1CON2bits.OENSYNC = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CCP1CON3レジスタ */
	/*-----------------------------------------------------------------------*/
	CCP1CON3 = 0x00000000u;
		#ifdef DEF_BITNAME
			CCP1CON3bits.PSSACE = 0u;
			CCP1CON3bits.POLACE = 0u;
			CCP1CON3bits.OSCNT = 0u;
			CCP1CON3bits.OETRIG = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CCP1STATレジスタ */
	/*-----------------------------------------------------------------------*/
	CCP1STAT = 0x00000000u;
		#ifdef DEF_BITNAME
			CCP1STATbits.ICBNE = 0u;
			CCP1STATbits.ICOV = 0u;
			CCP1STATbits.ICDIS = 0u;
			CCP1STATbits.SCEVT = 0u;
			CCP1STATbits.ASEVT = 0u;
			CCP1STATbits.TRCLR = 0u;
			CCP1STATbits.TRSET = 0u;
			CCP1STATbits.CCPTRIG = 0u;
			CCP1STATbits.ICGARM = 0u;
			CCP1STATbits.RAWIP = 0u;
			CCP1STATbits.RBWIP = 0u;
			CCP1STATbits.TMRLWIP = 0u;
			CCP1STATbits.TMRHWIP = 0u;
			CCP1STATbits.PRLWIP = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CCP1TMRレジスタ */
	/*-----------------------------------------------------------------------*/
		CCP1TMR = 0x00000000u;
		#ifdef DEF_BITNAME
			CCP1TMRbits.TMRL = 0u;
			CCP1TMRbits.TMRH = 0u;
			CCP1TMRbits.TMR = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CCP1PRレジスタ */
	/*-----------------------------------------------------------------------*/
		CCP1PR = 0x00000000u;
		#ifdef DEF_BITNAME
			CCP1PRbits.PRL = 0u;
			CCP1PRbits.PRH = 0u;
			CCP1PRbits.PR = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CCP1RAレジスタ */
	/*-----------------------------------------------------------------------*/
		CCP1RA = 0x00000000u;
		#ifdef DEF_BITNAME
			CCP1RAbits.CMPA = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CCP1RBレジスタ */
	/*-----------------------------------------------------------------------*/
		CCP1RB = 0x00000000u;
		#ifdef DEF_BITNAME
			CCP1RBbits.CMPB = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CCP1BUFレジスタ */
	/*-----------------------------------------------------------------------*/
		CCP1BUF = 0x00000000u;
		#ifdef DEF_BITNAME
			CCP1BUFbits.BUFL = 0u;
			CCP1BUFbits.BUFH = 0u;
			CCP1BUFbits.BUF = 0u;
		#endif 
#endif
}
/*----------------------------------------------------------------------------*/
/*
* @fn        vdg_CCP2_Set_Register(void)
* @brief        CCP2レジスタを初期化します 
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void vdg_CCP2_Set_Register(void)
{
#if ( PMD_CCP2MD == PMD_MODULE_ENABLE )
  	/*-----------------------------------------------------------------------*/
	/* CCP2CON1レジスタ */
	/*-----------------------------------------------------------------------*/
		CCP2CON1 = 0x00000000u;
		#ifdef DEF_BITNAME
			CCP2CON1bits.MOD = 0u;
			CCP2CON1bits.CCSEL = 0u;
			CCP2CON1bits.T32 = 0u;
			CCP2CON1bits.TMRPS = 0u;
			CCP2CON1bits.CLKSEL = 0u;
			CCP2CON1bits.TMRSYNC = 0u;
			CCP2CON1bits.SLPEN = 0u;
			CCP2CON1bits.SIDL = 0u;
			CCP2CON1bits.ON = 0u;
			CCP2CON1bits.SYNC = 0u;
			CCP2CON1bits.ALTSYNC = 0u;
			CCP2CON1bits.ONESHOT = 0u;
			CCP2CON1bits.TRIGEN = 0u;
			CCP2CON1bits.OPS = 0u;
			CCP2CON1bits.RTRGEN = 0u;
			CCP2CON1bits.OPSSRC = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CCP2CON2レジスタ */
	/*-----------------------------------------------------------------------*/
	CCP2CON2 = 0x00000000u;
		#ifdef DEF_BITNAME
			CCP2CON2bits.ASDG = 0u;
			CCP2CON2bits.SSDG = 0u;
			CCP2CON2bits.ASDGM = 0u;
			CCP2CON2bits.PWMRSEN = 0u;
			CCP2CON2bits.ICS = 0u;
			CCP2CON2bits.AUXOUT = 0u;
			CCP2CON2bits.ICGSM = 0u;
			CCP2CON2bits.OCAEN = 0u;
			CCP2CON2bits.OENSYNC = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CCP2CON3レジスタ */
	/*-----------------------------------------------------------------------*/
	CCP2CON3 = 0x00000000u;
		#ifdef DEF_BITNAME
			CCP2CON3bits.PSSACE = 0u;
			CCP2CON3bits.POLACE = 0u;
			CCP2CON3bits.OSCNT = 0u;
			CCP2CON3bits.OETRIG = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CCP2STATレジスタ */
	/*-----------------------------------------------------------------------*/
	CCP2STAT = 0x00000000u;
		#ifdef DEF_BITNAME
			CCP2STATbits.ICBNE = 0u;
			CCP2STATbits.ICOV = 0u;
			CCP2STATbits.ICDIS = 0u;
			CCP2STATbits.SCEVT = 0u;
			CCP2STATbits.ASEVT = 0u;
			CCP2STATbits.TRCLR = 0u;
			CCP2STATbits.TRSET = 0u;
			CCP2STATbits.CCPTRIG = 0u;
			CCP2STATbits.ICGARM = 0u;
			CCP2STATbits.RAWIP = 0u;
			CCP2STATbits.RBWIP = 0u;
			CCP2STATbits.TMRLWIP = 0u;
			CCP2STATbits.TMRHWIP = 0u;
			CCP2STATbits.PRLWIP = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CCP2TMRレジスタ */
	/*-----------------------------------------------------------------------*/
		CCP2TMR = 0x00000000u;
		#ifdef DEF_BITNAME
			CCP2TMRbits.TMRL = 0u;
			CCP2TMRbits.TMRH = 0u;
			CCP2TMRbits.TMR = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CCP2PRレジスタ */
	/*-----------------------------------------------------------------------*/
		CCP2PR = 0x00000000u;
		#ifdef DEF_BITNAME
			CCP2PRbits.PRL = 0u;
			CCP2PRbits.PRH = 0u;
			CCP2PRbits.PR = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CCP2RAレジスタ */
	/*-----------------------------------------------------------------------*/
		CCP2RA = 0x00000000u;
		#ifdef DEF_BITNAME
			CCP2RAbits.CMPA = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CCP2RBレジスタ */
	/*-----------------------------------------------------------------------*/
		CCP2RB = 0x00000000u;
		#ifdef DEF_BITNAME
			CCP2RBbits.CMPB = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CCP2BUFレジスタ */
	/*-----------------------------------------------------------------------*/
		CCP2BUF = 0x00000000u;
		#ifdef DEF_BITNAME
			CCP2BUFbits.BUFL = 0u;
			CCP2BUFbits.BUFH = 0u;
			CCP2BUFbits.BUF = 0u;
		#endif 
#endif
}
/*----------------------------------------------------------------------------*/
/*
* @fn        vdg_CCP3_Set_Register(void)
* @brief     CCP3レジスタを初期化します
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void vdg_CCP3_Set_Register(void)
{
#if ( PMD_CCP3MD == PMD_MODULE_ENABLE )
 	/*-----------------------------------------------------------------------*/
	/* CCP3CON1レジスタ */
	/*-----------------------------------------------------------------------*/
		CCP3CON1 = 0x00000000u;
		#ifdef DEF_BITNAME
			CCP3CON1bits.MOD = 0u;
			CCP3CON1bits.CCSEL = 0u;
			CCP3CON1bits.T32 = 0u;
			CCP3CON1bits.TMRPS = 0u;
			CCP3CON1bits.CLKSEL = 0u;
			CCP3CON1bits.TMRSYNC = 0u;
			CCP3CON1bits.SLPEN = 0u;
			CCP3CON1bits.SIDL = 0u;
			CCP3CON1bits.ON = 0u;
			CCP3CON1bits.SYNC = 0u;
			CCP3CON1bits.ALTSYNC = 0u;
			CCP3CON1bits.ONESHOT = 0u;
			CCP3CON1bits.TRIGEN = 0u;
			CCP3CON1bits.OPS = 0u;
			CCP3CON1bits.RTRGEN = 0u;
			CCP3CON1bits.OPSSRC = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CCP3CON2レジスタ */
	/*-----------------------------------------------------------------------*/
	CCP3CON2 = 0x00000000u;
		#ifdef DEF_BITNAME
			CCP3CON2bits.ASDG = 0u;
			CCP3CON2bits.SSDG = 0u;
			CCP3CON2bits.ASDGM = 0u;
			CCP3CON2bits.PWMRSEN = 0u;
			CCP3CON2bits.ICS = 0u;
			CCP3CON2bits.AUXOUT = 0u;
			CCP3CON2bits.ICGSM = 0u;
			CCP3CON2bits.OCAEN = 0u;
			CCP3CON2bits.OENSYNC = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CCP3CON3レジスタ */
	/*-----------------------------------------------------------------------*/
	CCP3CON3 = 0x00000000u;
		#ifdef DEF_BITNAME
			CCP3CON3bits.PSSACE = 0u;
			CCP3CON3bits.POLACE = 0u;
			CCP3CON3bits.OSCNT = 0u;
			CCP3CON3bits.OETRIG = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CCP3STATレジスタ */
	/*-----------------------------------------------------------------------*/
	CCP3STAT = 0x00000000u;
		#ifdef DEF_BITNAME
			CCP3STATbits.ICBNE = 0u;
			CCP3STATbits.ICOV = 0u;
			CCP3STATbits.ICDIS = 0u;
			CCP3STATbits.SCEVT = 0u;
			CCP3STATbits.ASEVT = 0u;
			CCP3STATbits.TRCLR = 0u;
			CCP3STATbits.TRSET = 0u;
			CCP3STATbits.CCPTRIG = 0u;
			CCP3STATbits.ICGARM = 0u;
			CCP3STATbits.RAWIP = 0u;
			CCP3STATbits.RBWIP = 0u;
			CCP3STATbits.TMRLWIP = 0u;
			CCP3STATbits.TMRHWIP = 0u;
			CCP3STATbits.PRLWIP = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CCP3TMRレジスタ */
	/*-----------------------------------------------------------------------*/
		CCP3TMR = 0x00000000u;
		#ifdef DEF_BITNAME
			CCP3TMRbits.TMRL = 0u;
			CCP3TMRbits.TMRH = 0u;
			CCP3TMRbits.TMR = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CCP3PRレジスタ */
	/*-----------------------------------------------------------------------*/
		CCP3PR = 0x00000000u;
		#ifdef DEF_BITNAME
			CCP3PRbits.PRL = 0u;
			CCP3PRbits.PRH = 0u;
			CCP3PRbits.PR = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CCP3RAレジスタ */
	/*-----------------------------------------------------------------------*/
		CCP3RA = 0x00000000u;
		#ifdef DEF_BITNAME
			CCP3RAbits.CMPA = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CCP3RBレジスタ */
	/*-----------------------------------------------------------------------*/
		CCP3RB = 0x00000000u;
		#ifdef DEF_BITNAME
			CCP3RBbits.CMPB = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CCP3BUFレジスタ */
	/*-----------------------------------------------------------------------*/
		CCP3BUF = 0x00000000u;
		#ifdef DEF_BITNAME
			CCP3BUFbits.BUFL = 0u;
			CCP3BUFbits.BUFH = 0u;
			CCP3BUFbits.BUF = 0u;
		#endif 
#endif
}
/*----------------------------------------------------------------------------*/
/*
* @fn        vdg_CCP4_Set_Register(void)
* @brief        CCP4レジスタを初期化します
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void vdg_CCP4_Set_Register(void)
{
#if ( PMD_CCP4MD == PMD_MODULE_ENABLE )
 	/*-----------------------------------------------------------------------*/
	/* CCP4CON1レジスタ */
	/*-----------------------------------------------------------------------*/
		CCP4CON1 = 0x00000000u;
		#ifdef DEF_BITNAME
			CCP4CON1bits.MOD = 0u;
			CCP4CON1bits.CCSEL = 0u;
			CCP4CON1bits.T32 = 0u;
			CCP4CON1bits.TMRPS = 0u;
			CCP4CON1bits.CLKSEL = 0u;
			CCP4CON1bits.TMRSYNC = 0u;
			CCP4CON1bits.SLPEN = 0u;
			CCP4CON1bits.SIDL = 0u;
			CCP4CON1bits.ON = 0u;
			CCP4CON1bits.SYNC = 0u;
			CCP4CON1bits.ALTSYNC = 0u;
			CCP4CON1bits.ONESHOT = 0u;
			CCP4CON1bits.TRIGEN = 0u;
			CCP4CON1bits.OPS = 0u;
			CCP4CON1bits.RTRGEN = 0u;
			CCP4CON1bits.OPSSRC = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CCP4CON2レジスタ */
	/*-----------------------------------------------------------------------*/
	CCP4CON2 = 0x00000000u;
		#ifdef DEF_BITNAME
			CCP4CON2bits.ASDG = 0u;
			CCP4CON2bits.SSDG = 0u;
			CCP4CON2bits.ASDGM = 0u;
			CCP4CON2bits.PWMRSEN = 0u;
			CCP4CON2bits.ICS = 0u;
			CCP4CON2bits.AUXOUT = 0u;
			CCP4CON2bits.ICGSM = 0u;
			CCP4CON2bits.OCAEN = 0u;
			CCP4CON2bits.OENSYNC = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CCP4CON3レジスタ */
	/*-----------------------------------------------------------------------*/
	CCP4CON3 = 0x00000000u;
		#ifdef DEF_BITNAME
			CCP4CON3bits.PSSACE = 0u;
			CCP4CON3bits.POLACE = 0u;
			CCP4CON3bits.OSCNT = 0u;
			CCP4CON3bits.OETRIG = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CCP4STATレジスタ */
	/*-----------------------------------------------------------------------*/
	CCP4STAT = 0x00000000u;
		#ifdef DEF_BITNAME
			CCP4STATbits.ICBNE = 0u;
			CCP4STATbits.ICOV = 0u;
			CCP4STATbits.ICDIS = 0u;
			CCP4STATbits.SCEVT = 0u;
			CCP4STATbits.ASEVT = 0u;
			CCP4STATbits.TRCLR = 0u;
			CCP4STATbits.TRSET = 0u;
			CCP4STATbits.CCPTRIG = 0u;
			CCP4STATbits.ICGARM = 0u;
			CCP4STATbits.RAWIP = 0u;
			CCP4STATbits.RBWIP = 0u;
			CCP4STATbits.TMRLWIP = 0u;
			CCP4STATbits.TMRHWIP = 0u;
			CCP4STATbits.PRLWIP = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CCP4TMRレジスタ */
	/*-----------------------------------------------------------------------*/
		CCP4TMR = 0x00000000u;
		#ifdef DEF_BITNAME
			CCP4TMRbits.TMRL = 0u;
			CCP4TMRbits.TMRH = 0u;
			CCP4TMRbits.TMR = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CCP4PRレジスタ */
	/*-----------------------------------------------------------------------*/
		CCP4PR = 0x00000000u;
		#ifdef DEF_BITNAME
			CCP4PRbits.PRL = 0u;
			CCP4PRbits.PRH = 0u;
			CCP4PRbits.PR = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CCP4RAレジスタ */
	/*-----------------------------------------------------------------------*/
		CCP4RA = 0x00000000u;
		#ifdef DEF_BITNAME
			CCP4RAbits.CMPA = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CCP4RBレジスタ */
	/*-----------------------------------------------------------------------*/
		CCP4RB = 0x00000000u;
		#ifdef DEF_BITNAME
			CCP4RBbits.CMPB = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CCP4BUFレジスタ */
	/*-----------------------------------------------------------------------*/
		CCP4BUF = 0x00000000u;
		#ifdef DEF_BITNAME
			CCP4BUFbits.BUFL = 0u;
			CCP4BUFbits.BUFH = 0u;
			CCP4BUFbits.BUF = 0u;
		#endif 
#endif
}
/*----------------------------------------------------------------------------*/
/*
* @fn        vdg_CCP5_Set_Register(void)
* @brief        CCP5レジスタを初期化します
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void vdg_CCP5_Set_Register(void)
{
#if ( PMD_CCP5MD == PMD_MODULE_ENABLE )
	/*-----------------------------------------------------------------------*/
	/* CCP5CON1レジスタ */
	/*-----------------------------------------------------------------------*/
		CCP5CON1 = 0x00000000u;
		#ifdef DEF_BITNAME
			CCP5CON1bits.MOD = 0u;
			CCP5CON1bits.CCSEL = 0u;
			CCP5CON1bits.T32 = 0u;
			CCP5CON1bits.TMRPS = 0u;
			CCP5CON1bits.CLKSEL = 0u;
			CCP5CON1bits.TMRSYNC = 0u;
			CCP5CON1bits.SLPEN = 0u;
			CCP5CON1bits.SIDL = 0u;
			CCP5CON1bits.ON = 0u;
			CCP5CON1bits.SYNC = 0u;
			CCP5CON1bits.ALTSYNC = 0u;
			CCP5CON1bits.ONESHOT = 0u;
			CCP5CON1bits.TRIGEN = 0u;
			CCP5CON1bits.OPS = 0u;
			CCP5CON1bits.RTRGEN = 0u;
			CCP5CON1bits.OPSSRC = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CCP5CON2レジスタ */
	/*-----------------------------------------------------------------------*/
	CCP5CON2 = 0x00000000u;
		#ifdef DEF_BITNAME
			CCP5CON2bits.ASDG = 0u;
			CCP5CON2bits.SSDG = 0u;
			CCP5CON2bits.ASDGM = 0u;
			CCP5CON2bits.PWMRSEN = 0u;
			CCP5CON2bits.ICS = 0u;
			CCP5CON2bits.AUXOUT = 0u;
			CCP5CON2bits.ICGSM = 0u;
			CCP5CON2bits.OCAEN = 0u;
			CCP5CON2bits.OENSYNC = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CCP5CON3レジスタ */
	/*-----------------------------------------------------------------------*/
	CCP5CON3 = 0x00000000u;
		#ifdef DEF_BITNAME
			CCP5CON3bits.PSSACE = 0u;
			CCP5CON3bits.POLACE = 0u;
			CCP5CON3bits.OSCNT = 0u;
			CCP5CON3bits.OETRIG = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CCP5STATレジスタ */
	/*-----------------------------------------------------------------------*/
	CCP5STAT = 0x00000000u;
		#ifdef DEF_BITNAME
			CCP5STATbits.ICBNE = 0u;
			CCP5STATbits.ICOV = 0u;
			CCP5STATbits.ICDIS = 0u;
			CCP5STATbits.SCEVT = 0u;
			CCP5STATbits.ASEVT = 0u;
			CCP5STATbits.TRCLR = 0u;
			CCP5STATbits.TRSET = 0u;
			CCP5STATbits.CCPTRIG = 0u;
			CCP5STATbits.ICGARM = 0u;
			CCP5STATbits.RAWIP = 0u;
			CCP5STATbits.RBWIP = 0u;
			CCP5STATbits.TMRLWIP = 0u;
			CCP5STATbits.TMRHWIP = 0u;
			CCP5STATbits.PRLWIP = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CCP5TMRレジスタ */
	/*-----------------------------------------------------------------------*/
		CCP5TMR = 0x00000000u;
		#ifdef DEF_BITNAME
			CCP5TMRbits.TMRL = 0u;
			CCP5TMRbits.TMRH = 0u;
			CCP5TMRbits.TMR = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CCP5PRレジスタ */
	/*-----------------------------------------------------------------------*/
		CCP5PR = 0x00000000u;
		#ifdef DEF_BITNAME
			CCP5PRbits.PRL = 0u;
			CCP5PRbits.PRH = 0u;
			CCP5PRbits.PR = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CCP5RAレジスタ */
	/*-----------------------------------------------------------------------*/
		CCP5RA = 0x00000000u;
		#ifdef DEF_BITNAME
			CCP5RAbits.CMPA = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CCP5RBレジスタ */
	/*-----------------------------------------------------------------------*/
		CCP5RB = 0x00000000u;
		#ifdef DEF_BITNAME
			CCP5RBbits.CMPB = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CCP5BUFレジスタ */
	/*-----------------------------------------------------------------------*/
		CCP5BUF = 0x00000000u;
		#ifdef DEF_BITNAME
			CCP5BUFbits.BUFL = 0u;
			CCP5BUFbits.BUFH = 0u;
			CCP5BUFbits.BUF = 0u;
		#endif 
#endif
}
/*----------------------------------------------------------------------------*/
/*
* @fn        vdg_CCP6_Set_Register(void)
* @brief        CCP6レジスタを初期化します
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void vdg_CCP6_Set_Register(void)
{
#if ( PMD_CCP6MD == PMD_MODULE_ENABLE )
	/*-----------------------------------------------------------------------*/
	/* CCP6CON1レジスタ */
	/*-----------------------------------------------------------------------*/
		CCP6CON1 = 0x00000000u;
		#ifdef DEF_BITNAME
			CCP6CON1bits.MOD = 0u;
			CCP6CON1bits.CCSEL = 0u;
			CCP6CON1bits.T32 = 0u;
			CCP6CON1bits.TMRPS = 0u;
			CCP6CON1bits.CLKSEL = 0u;
			CCP6CON1bits.TMRSYNC = 0u;
			CCP6CON1bits.SLPEN = 0u;
			CCP6CON1bits.SIDL = 0u;
			CCP6CON1bits.ON = 0u;
			CCP6CON1bits.SYNC = 0u;
			CCP6CON1bits.ALTSYNC = 0u;
			CCP6CON1bits.ONESHOT = 0u;
			CCP6CON1bits.TRIGEN = 0u;
			CCP6CON1bits.OPS = 0u;
			CCP6CON1bits.RTRGEN = 0u;
			CCP6CON1bits.OPSSRC = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CCP6CON2レジスタ */
	/*-----------------------------------------------------------------------*/
	CCP6CON2 = 0x00000000u;
		#ifdef DEF_BITNAME
			CCP6CON2bits.ASDG = 0u;
			CCP6CON2bits.SSDG = 0u;
			CCP6CON2bits.ASDGM = 0u;
			CCP6CON2bits.PWMRSEN = 0u;
			CCP6CON2bits.ICS = 0u;
			CCP6CON2bits.AUXOUT = 0u;
			CCP6CON2bits.ICGSM = 0u;
			CCP6CON2bits.OCAEN = 0u;
			CCP6CON2bits.OENSYNC = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CCP6CON3レジスタ */
	/*-----------------------------------------------------------------------*/
	CCP6CON3 = 0x00000000u;
		#ifdef DEF_BITNAME
			CCP6CON3bits.PSSACE = 0u;
			CCP6CON3bits.POLACE = 0u;
			CCP6CON3bits.OSCNT = 0u;
			CCP6CON3bits.OETRIG = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CCP6STATレジスタ */
	/*-----------------------------------------------------------------------*/
	CCP6STAT = 0x00000000u;
		#ifdef DEF_BITNAME
			CCP6STATbits.ICBNE = 0u;
			CCP6STATbits.ICOV = 0u;
			CCP6STATbits.ICDIS = 0u;
			CCP6STATbits.SCEVT = 0u;
			CCP6STATbits.ASEVT = 0u;
			CCP6STATbits.TRCLR = 0u;
			CCP6STATbits.TRSET = 0u;
			CCP6STATbits.CCPTRIG = 0u;
			CCP6STATbits.ICGARM = 0u;
			CCP6STATbits.RAWIP = 0u;
			CCP6STATbits.RBWIP = 0u;
			CCP6STATbits.TMRLWIP = 0u;
			CCP6STATbits.TMRHWIP = 0u;
			CCP6STATbits.PRLWIP = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CCP6TMRレジスタ */
	/*-----------------------------------------------------------------------*/
		CCP6TMR = 0x00000000u;
		#ifdef DEF_BITNAME
			CCP6TMRbits.TMRL = 0u;
			CCP6TMRbits.TMRH = 0u;
			CCP6TMRbits.TMR = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CCP6PRレジスタ */
	/*-----------------------------------------------------------------------*/
		CCP6PR = 0x00000000u;
		#ifdef DEF_BITNAME
			CCP6PRbits.PRL = 0u;
			CCP6PRbits.PRH = 0u;
			CCP6PRbits.PR = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CCP6RAレジスタ */
	/*-----------------------------------------------------------------------*/
		CCP6RA = 0x00000000u;
		#ifdef DEF_BITNAME
			CCP6RAbits.CMPA = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CCP6RBレジスタ */
	/*-----------------------------------------------------------------------*/
		CCP6RB = 0x00000000u;
		#ifdef DEF_BITNAME
			CCP6RBbits.CMPB = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CCP6BUFレジスタ */
	/*-----------------------------------------------------------------------*/
		CCP6BUF = 0x00000000u;
		#ifdef DEF_BITNAME
			CCP6BUFbits.BUFL = 0u;
			CCP6BUFbits.BUFH = 0u;
			CCP6BUFbits.BUF = 0u;
		#endif 
#endif
}
/*----------------------------------------------------------------------------*/
/*
* @fn        vdg_CCP7_Set_Register(void)
* @brief        CCP7レジスタを初期化します
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void vdg_CCP7_Set_Register(void)
{
#if ( PMD_CCP7MD == PMD_MODULE_ENABLE )
	/*-----------------------------------------------------------------------*/
	/* CCP7CON1レジスタ */
	/*-----------------------------------------------------------------------*/
		CCP7CON1 = 0x00000000u;
		#ifdef DEF_BITNAME
			CCP7CON1bits.MOD = 0u;
			CCP7CON1bits.CCSEL = 0u;
			CCP7CON1bits.T32 = 0u;
			CCP7CON1bits.TMRPS = 0u;
			CCP7CON1bits.CLKSEL = 0u;
			CCP7CON1bits.TMRSYNC = 0u;
			CCP7CON1bits.SLPEN = 0u;
			CCP7CON1bits.SIDL = 0u;
			CCP7CON1bits.ON = 0u;
			CCP7CON1bits.SYNC = 0u;
			CCP7CON1bits.ALTSYNC = 0u;
			CCP7CON1bits.ONESHOT = 0u;
			CCP7CON1bits.TRIGEN = 0u;
			CCP7CON1bits.OPS = 0u;
			CCP7CON1bits.RTRGEN = 0u;
			CCP7CON1bits.OPSSRC = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CCP7CON2レジスタ */
	/*-----------------------------------------------------------------------*/
	CCP7CON2 = 0x00000000u;
		#ifdef DEF_BITNAME
			CCP7CON2bits.ASDG = 0u;
			CCP7CON2bits.SSDG = 0u;
			CCP7CON2bits.ASDGM = 0u;
			CCP7CON2bits.PWMRSEN = 0u;
			CCP7CON2bits.ICS = 0u;
			CCP7CON2bits.AUXOUT = 0u;
			CCP7CON2bits.ICGSM = 0u;
			CCP7CON2bits.OCAEN = 0u;
			CCP7CON2bits.OENSYNC = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CCP7CON3レジスタ */
	/*-----------------------------------------------------------------------*/
	CCP7CON3 = 0x00000000u;
		#ifdef DEF_BITNAME
			CCP7CON3bits.PSSACE = 0u;
			CCP7CON3bits.POLACE = 0u;
			CCP7CON3bits.OSCNT = 0u;
			CCP7CON3bits.OETRIG = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CCP7STATレジスタ */
	/*-----------------------------------------------------------------------*/
	CCP7STAT = 0x00000000u;
		#ifdef DEF_BITNAME
			CCP7STATbits.ICBNE = 0u;
			CCP7STATbits.ICOV = 0u;
			CCP7STATbits.ICDIS = 0u;
			CCP7STATbits.SCEVT = 0u;
			CCP7STATbits.ASEVT = 0u;
			CCP7STATbits.TRCLR = 0u;
			CCP7STATbits.TRSET = 0u;
			CCP7STATbits.CCPTRIG = 0u;
			CCP7STATbits.ICGARM = 0u;
			CCP7STATbits.RAWIP = 0u;
			CCP7STATbits.RBWIP = 0u;
			CCP7STATbits.TMRLWIP = 0u;
			CCP7STATbits.TMRHWIP = 0u;
			CCP7STATbits.PRLWIP = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CCP7TMRレジスタ */
	/*-----------------------------------------------------------------------*/
		CCP7TMR = 0x00000000u;
		#ifdef DEF_BITNAME
			CCP7TMRbits.TMRL = 0u;
			CCP7TMRbits.TMRH = 0u;
			CCP7TMRbits.TMR = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CCP7PRレジスタ */
	/*-----------------------------------------------------------------------*/
		CCP7PR = 0x00000000u;
		#ifdef DEF_BITNAME
			CCP7PRbits.PRL = 0u;
			CCP7PRbits.PRH = 0u;
			CCP7PRbits.PR = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CCP7RAレジスタ */
	/*-----------------------------------------------------------------------*/
		CCP7RA = 0x00000000u;
		#ifdef DEF_BITNAME
			CCP7RAbits.CMPA = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CCP7RBレジスタ */
	/*-----------------------------------------------------------------------*/
		CCP7RB = 0x00000000u;
		#ifdef DEF_BITNAME
			CCP7RBbits.CMPB = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CCP7BUFレジスタ */
	/*-----------------------------------------------------------------------*/
		CCP7BUF = 0x00000000u;
		#ifdef DEF_BITNAME
			CCP7BUFbits.BUFL = 0u;
			CCP7BUFbits.BUFH = 0u;
			CCP7BUFbits.BUF = 0u;
		#endif 
#endif
}
/*----------------------------------------------------------------------------*/
/*
* @fn        vdg_CCP8_Set_Register(void)
* @brief     CCP8レジスタを初期化します
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void vdg_CCP8_Set_Register(void)
{
#if ( PMD_CCP8MD == PMD_MODULE_ENABLE )
	/*-----------------------------------------------------------------------*/
	/* CCP8CON1レジスタ */
	/*-----------------------------------------------------------------------*/
		CCP8CON1 = 0x00000000u;
		#ifdef DEF_BITNAME
			CCP8CON1bits.MOD = 0u;
			CCP8CON1bits.CCSEL = 0u;
			CCP8CON1bits.T32 = 0u;
			CCP8CON1bits.TMRPS = 0u;
			CCP8CON1bits.CLKSEL = 0u;
			CCP8CON1bits.TMRSYNC = 0u;
			CCP8CON1bits.SLPEN = 0u;
			CCP8CON1bits.SIDL = 0u;
			CCP8CON1bits.ON = 0u;
			CCP8CON1bits.SYNC = 0u;
			CCP8CON1bits.ALTSYNC = 0u;
			CCP8CON1bits.ONESHOT = 0u;
			CCP8CON1bits.TRIGEN = 0u;
			CCP8CON1bits.OPS = 0u;
			CCP8CON1bits.RTRGEN = 0u;
			CCP8CON1bits.OPSSRC = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CCP8CON2レジスタ */
	/*-----------------------------------------------------------------------*/
	CCP8CON2 = 0x00000000u;
		#ifdef DEF_BITNAME
			CCP8CON2bits.ASDG = 0u;
			CCP8CON2bits.SSDG = 0u;
			CCP8CON2bits.ASDGM = 0u;
			CCP8CON2bits.PWMRSEN = 0u;
			CCP8CON2bits.ICS = 0u;
			CCP8CON2bits.AUXOUT = 0u;
			CCP8CON2bits.ICGSM = 0u;
			CCP8CON2bits.OCAEN = 0u;
			CCP8CON2bits.OENSYNC = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CCP8CON3レジスタ */
	/*-----------------------------------------------------------------------*/
	CCP8CON3 = 0x00000000u;
		#ifdef DEF_BITNAME
			CCP8CON3bits.PSSACE = 0u;
			CCP8CON3bits.POLACE = 0u;
			CCP8CON3bits.OSCNT = 0u;
			CCP8CON3bits.OETRIG = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CCP8STATレジスタ */
	/*-----------------------------------------------------------------------*/
	CCP8STAT = 0x00000000u;
		#ifdef DEF_BITNAME
			CCP8STATbits.ICBNE = 0u;
			CCP8STATbits.ICOV = 0u;
			CCP8STATbits.ICDIS = 0u;
			CCP8STATbits.SCEVT = 0u;
			CCP8STATbits.ASEVT = 0u;
			CCP8STATbits.TRCLR = 0u;
			CCP8STATbits.TRSET = 0u;
			CCP8STATbits.CCPTRIG = 0u;
			CCP8STATbits.ICGARM = 0u;
			CCP8STATbits.RAWIP = 0u;
			CCP8STATbits.RBWIP = 0u;
			CCP8STATbits.TMRLWIP = 0u;
			CCP8STATbits.TMRHWIP = 0u;
			CCP8STATbits.PRLWIP = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CCP8TMRレジスタ */
	/*-----------------------------------------------------------------------*/
		CCP8TMR = 0x00000000u;
		#ifdef DEF_BITNAME
			CCP8TMRbits.TMRL = 0u;
			CCP8TMRbits.TMRH = 0u;
			CCP8TMRbits.TMR = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CCP8PRレジスタ */
	/*-----------------------------------------------------------------------*/
		CCP8PR = 0x00000000u;
		#ifdef DEF_BITNAME
			CCP8PRbits.PRL = 0u;
			CCP8PRbits.PRH = 0u;
			CCP8PRbits.PR = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CCP8RAレジスタ */
	/*-----------------------------------------------------------------------*/
		CCP8RA = 0x00000000u;
		#ifdef DEF_BITNAME
			CCP8RAbits.CMPA = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CCP8RBレジスタ */
	/*-----------------------------------------------------------------------*/
		CCP8RB = 0x00000000u;
		#ifdef DEF_BITNAME
			CCP8RBbits.CMPB = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CCP8BUFレジスタ */
	/*-----------------------------------------------------------------------*/
		CCP8BUF = 0x00000000u;
		#ifdef DEF_BITNAME
			CCP8BUFbits.BUFL = 0u;
			CCP8BUFbits.BUFH = 0u;
			CCP8BUFbits.BUF = 0u;
		#endif 

#endif
}
/*----------------------------------------------------------------------------*/
/*
* @fn        vdg_CCP_Set_Register(void) 
* @brief        全てのCCPレジスタを初期化します 
* @param
* @return
* @detail 
*/
/*----------------------------------------------------------------------------*/
void vdg_CCP_Set_Register(void)
{
#if ( PMD_CCP1MD == PMD_MODULE_ENABLE )
    vdg_CCP1_Set_Register();
#endif
#if ( PMD_CCP2MD == PMD_MODULE_ENABLE )
    vdg_CCP2_Set_Register();
#endif
#if ( PMD_CCP3MD == PMD_MODULE_ENABLE )
    vdg_CCP3_Set_Register();
#endif
#if ( PMD_CCP4MD == PMD_MODULE_ENABLE )
    vdg_CCP4_Set_Register();
#endif
#if ( PMD_CCP5MD == PMD_MODULE_ENABLE )
    vdg_CCP5_Set_Register();
#endif
#if ( PMD_CCP6MD == PMD_MODULE_ENABLE )
    vdg_CCP6_Set_Register();
#endif
#if ( PMD_CCP7MD == PMD_MODULE_ENABLE )
    vdg_CCP7_Set_Register();
#endif
#if ( PMD_CCP8MD == PMD_MODULE_ENABLE )
    vdg_CCP8_Set_Register();
#endif
}