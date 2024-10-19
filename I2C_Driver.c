/*----------------------------------------------------------------------------*/
/**
* @file		I2C_Driver.c
* @brief	I2Cモジュールに関するドライバ関数
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
#include "i2c_driver.h"
/*----------------------------------------------------------------------------*/
/*定数定義*/
/*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*/
/*変数定義*/
/*----------------------------------------------------------------------------*/
struct
{
    _u2 u2l_Timer;
}s_I2C1_Drv,s_I2C2_Drv;
/*----------------------------------------------------------------------------*/
/*プロトタイプ宣言*/
/*----------------------------------------------------------------------------*/

#define I2C_DRV_START_TIMEOUT   10
#define I2C_DRV_RESTART_TIMEOUT 10
#define I2C_DRV_STOP_TIMEOUT    10
#define I2C_DRV_WRITE_TIMEOUT   100
#define I2C_DRV_READ_TIMEOUT    100
#define I2C_DRV_ACK_TIMEOUT     10
/*----------------------------------------------------------------------------*/
/*
* @fn        vdg_I2C1_Set_Register(void)
* @brief        I2C1レジスタを初期化します
* @param
* @return
* @detail 
*/
/*----------------------------------------------------------------------------*/
void vdg_I2C1_Set_Register(void)
{
#if ( PMD_I2C1MD == PMD_MODULE_ENABLE )
	/*-----------------------------------------------------------------------*/
	/* I2C1CON1レジスタ */
	/*-----------------------------------------------------------------------*/
		I2C1CON1 = 0x00000000u;
		#ifdef DEF_BITNAME
			I2C1CON1bits.SEN = 0u;
			I2C1CON1bits.RSEN = 0u;
			I2C1CON1bits.PEN = 0u;
			I2C1CON1bits.RCEN = 0u;
			I2C1CON1bits.ACKEN = 0u;
			I2C1CON1bits.ACKDT = 0u;
			I2C1CON1bits.STREN = 0u;
			I2C1CON1bits.GCEN = 0u;
			I2C1CON1bits.DISSLW = 0u;
			I2C1CON1bits.A10M = 0u;
			I2C1CON1bits.STRICT = 0u;
			I2C1CON1bits.SCLREL = 0u;
			I2C1CON1bits.SIDL = 0u;
			I2C1CON1bits.ON = 0u;
			I2C1CON1bits.DHEN = 0u;
			I2C1CON1bits.AHEN = 0u;
			I2C1CON1bits.SBCDE = 0u;
			I2C1CON1bits.SDAHT = 0u;
			I2C1CON1bits.BOEN = 0u;
			I2C1CON1bits.SCIE = 0u;
			I2C1CON1bits.PCIE = 0u;
			I2C1CON1bits.SMBEN = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* I2C1STAT1レジスタ */
	/*-----------------------------------------------------------------------*/
		I2C1STAT1 = 0x00000000u;
		#ifdef DEF_BITNAME
			I2C1STAT1bits.TBF = 0u;
			I2C1STAT1bits.RBF = 0u;
			I2C1STAT1bits.R_W = 0u;
			I2C1STAT1bits.S = 0u;
			I2C1STAT1bits.P = 0u;
			I2C1STAT1bits.D_A = 0u;
			I2C1STAT1bits.I2COV = 0u;
			I2C1STAT1bits.IWCOL = 0u;
			I2C1STAT1bits.ADD10 = 0u;
			I2C1STAT1bits.GCSTAT = 0u;
			I2C1STAT1bits.BCL = 0u;
			I2C1STAT1bits.ACKTIM = 0u;
			I2C1STAT1bits.TRSTAT = 0u;
			I2C1STAT1bits.ACKSTAT = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* I2C1ADDレジスタ */
	/*-----------------------------------------------------------------------*/
		I2C1ADD = 0x00000000u;
		#ifdef DEF_BITNAME
			I2C1ADDbits.I2CADD = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* I2C1MSKレジスタ */
	/*-----------------------------------------------------------------------*/
		I2C1MSK = 0x00000000u;
		#ifdef DEF_BITNAME
			I2C1MSKbits.I2CMSK = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* I2C1HBRGレジスタ */
	/*-----------------------------------------------------------------------*/
		I2C1HBRG = 0x00000000u;
		#ifdef DEF_BITNAME
			I2C1HBRGbits.I2CHBRG = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* I2C1TRNレジスタ */
	/*-----------------------------------------------------------------------*/
		I2C1TRN = 0x00000000u;
		#ifdef DEF_BITNAME
			I2C1TRNbits.I2CTRN = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* I2C1RCVレジスタ */
	/*-----------------------------------------------------------------------*/
		I2C1RCV = 0x00000000u;
		#ifdef DEF_BITNAME
			I2C1RCVbits.I2CRCV = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* I2C1CON2レジスタ */
	/*-----------------------------------------------------------------------*/
		I2C1CON2 = 0x00000000u;
		#ifdef DEF_BITNAME
			I2C1CON2bits.PSZ = 0u;
			I2C1CON2bits.BITE = 0u;
			I2C1CON2bits.SMEN = 0u;
			I2C1CON2bits.NDA = 0u;
			I2C1CON2bits.EOPSC = 0u;
			I2C1CON2bits.HNACKIGN = 0u;
			I2C1CON2bits.ACKC = 0u;
			I2C1CON2bits.EPSZE = 0u;
			I2C1CON2bits.CBCTE = 0u;
			I2C1CON2bits.HBCTE = 0u;
			I2C1CON2bits.BSCLTE = 0u;
			I2C1CON2bits.PECC = 0u;
			I2C1CON2bits.AMODE = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* I2C1LBRGレジスタ */
	/*-----------------------------------------------------------------------*/
		I2C1LBRG = 0x00000000u;
		#ifdef DEF_BITNAME
			I2C1LBRGbits.I2CLBRG = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* I2C1INTCレジスタ */
	/*-----------------------------------------------------------------------*/
		I2C1INTC = 0x00000000u;
		#ifdef DEF_BITNAME
			I2C1INTCbits.HDRXIE = 0u;
			I2C1INTCbits.HDTXIE = 0u;
			I2C1INTCbits.CDTXIE = 0u;
			I2C1INTCbits.CDRXIE = 0u;
			I2C1INTCbits.TXIE = 0u;
			I2C1INTCbits.RXIE = 0u;
			I2C1INTCbits.CADDRIE = 0u;
			I2C1INTCbits.HACKSIE = 0u;
			I2C1INTCbits.CLTIE = 0u;
			I2C1INTCbits.HSTIE = 0u;
			I2C1INTCbits.HSBCLIE = 0u;
			I2C1INTCbits.BCLIE = 0u;
			I2C1INTCbits.CRCIE = 0u;
			I2C1INTCbits.NACKIE = 0u;
			I2C1INTCbits.FRMEIE = 0u;
			I2C1INTCbits.BITIE = 0u;
			I2C1INTCbits.CBCTIE = 0u;
			I2C1INTCbits.HBCTIE = 0u;
			I2C1INTCbits.BSCLTIE = 0u;
			I2C1INTCbits.EOPIE = 0u;
			I2C1INTCbits.HBCLIE = 0u;
			I2C1INTCbits.HSCIE = 0u;
			I2C1INTCbits.HPCIE = 0u;
			I2C1INTCbits.CBCLIE = 0u;
			I2C1INTCbits.I2CEIE = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* I2C1STAT2レジスタ */
	/*-----------------------------------------------------------------------*/
		I2C1STAT2 = 0x00000000u;
		#ifdef DEF_BITNAME
			I2C1STAT2bits.SCLCNT = 0u;
			I2C1STAT2bits.ERR = 0u;
			I2C1STAT2bits.CLTIF = 0u;
			I2C1STAT2bits.HSTIF = 0u;
			I2C1STAT2bits.STARTE = 0u;
			I2C1STAT2bits.STOPE = 0u;
			I2C1STAT2bits.CRCE = 0u;
			I2C1STAT2bits.NACKE = 0u;
			I2C1STAT2bits.FRME = 0u;
			I2C1STAT2bits.BITO = 0u;
			I2C1STAT2bits.CBCLTO = 0u;
			I2C1STAT2bits.HBCLTO = 0u;
			I2C1STAT2bits.BSCLTO = 0u;
			I2C1STAT2bits.EOP = 0u;
			I2C1STAT2bits.HSBCL = 0u;
			I2C1STAT2bits.HSTACT = 0u;
			I2C1STAT2bits.CLTACT = 0u;
			I2C1STAT2bits.SSPND = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* I2C1PECレジスタ */
	/*-----------------------------------------------------------------------*/
		I2C1PEC = 0x00000000u;
		#ifdef DEF_BITNAME
			I2C1PECbits.RCRC = 0u;
			I2C1PECbits.CCRC = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* I2C1BTOレジスタ */
	/*-----------------------------------------------------------------------*/
		I2C1BTO = 0x00000000u;
		#ifdef DEF_BITNAME
			I2C1BTObits.BTOPR = 0u;
			I2C1BTObits.BTOCLK = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* I2C1HBCTOレジスタ */
	/*-----------------------------------------------------------------------*/
		I2C1HBCTO = 0x00000000u;
		#ifdef DEF_BITNAME
			I2C1HBCTObits.HBCTOTMR = 0u;
			I2C1HBCTObits.HBCTOCLK = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* I2C1CBCTOレジスタ */
	/*-----------------------------------------------------------------------*/
		I2C1CBCTO = 0x00000000u;
		#ifdef DEF_BITNAME
			I2C1CBCTObits.CBCTOTMR = 0u;
			I2C1CBCTObits.CBCTOCLK = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* I2C1BITOレジスタ */
	/*-----------------------------------------------------------------------*/
		I2C1BITO = 0x00000000u;
		#ifdef DEF_BITNAME
			I2C1BITObits.BITOTMR = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* I2C1SDASUTレジスタ */
	/*-----------------------------------------------------------------------*/
		I2C1SDASUT = 0x00000000u;
		#ifdef DEF_BITNAME
			I2C1SDASUTbits.SDASUT = 0u;
			I2C1SDASUTbits.SDASUTEN = 0u;
		#endif 
#endif
}
/*----------------------------------------------------------------------------*/
/*
* @fn        vdg_I2C2_Set_Register(void)
* @brief     I2C2レジスタを初期化します
* @param
* @return
* @detail 
*/
/*----------------------------------------------------------------------------*/
void vdg_I2C2_Set_Register(void)
{
#if ( PMD_I2C2MD == PMD_MODULE_ENABLE )	
	/*-----------------------------------------------------------------------*/
	/* I2C2CON1レジスタ */
	/*-----------------------------------------------------------------------*/
		I2C2CON1 = 0x00000000u;
		#ifdef DEF_BITNAME
			I2C2CON1bits.SEN = 0u;
			I2C2CON1bits.RSEN = 0u;
			I2C2CON1bits.PEN = 0u;
			I2C2CON1bits.RCEN = 0u;
			I2C2CON1bits.ACKEN = 0u;
			I2C2CON1bits.ACKDT = 0u;
			I2C2CON1bits.STREN = 0u;
			I2C2CON1bits.GCEN = 0u;
			I2C2CON1bits.DISSLW = 0u;
			I2C2CON1bits.A10M = 0u;
			I2C2CON1bits.STRICT = 0u;
			I2C2CON1bits.SCLREL = 0u;
			I2C2CON1bits.SIDL = 0u;
			I2C2CON1bits.ON = 0u;
			I2C2CON1bits.DHEN = 0u;
			I2C2CON1bits.AHEN = 0u;
			I2C2CON1bits.SBCDE = 0u;
			I2C2CON1bits.SDAHT = 0u;
			I2C2CON1bits.BOEN = 0u;
			I2C2CON1bits.SCIE = 0u;
			I2C2CON1bits.PCIE = 0u;
			I2C2CON1bits.SMBEN = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* I2C2STAT1レジスタ */
	/*-----------------------------------------------------------------------*/
		I2C2STAT1 = 0x00000000u;
		#ifdef DEF_BITNAME
			I2C2STAT1bits.TBF = 0u;
			I2C2STAT1bits.RBF = 0u;
			I2C2STAT1bits.R_W = 0u;
			I2C2STAT1bits.S = 0u;
			I2C2STAT1bits.P = 0u;
			I2C2STAT1bits.D_A = 0u;
			I2C2STAT1bits.I2COV = 0u;
			I2C2STAT1bits.IWCOL = 0u;
			I2C2STAT1bits.ADD10 = 0u;
			I2C2STAT1bits.GCSTAT = 0u;
			I2C2STAT1bits.BCL = 0u;
			I2C2STAT1bits.ACKTIM = 0u;
			I2C2STAT1bits.TRSTAT = 0u;
			I2C2STAT1bits.ACKSTAT = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* I2C2ADDレジスタ */
	/*-----------------------------------------------------------------------*/
		I2C2ADD = 0x00000000u;
		#ifdef DEF_BITNAME
			I2C2ADDbits.I2CADD = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* I2C2MSKレジスタ */
	/*-----------------------------------------------------------------------*/
		I2C2MSK = 0x00000000u;
		#ifdef DEF_BITNAME
			I2C2MSKbits.I2CMSK = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* I2C2HBRGレジスタ */
	/*-----------------------------------------------------------------------*/
		I2C2HBRG = 0x00000000u;
		#ifdef DEF_BITNAME
			I2C2HBRGbits.I2CHBRG = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* I2C2TRNレジスタ */
	/*-----------------------------------------------------------------------*/
		I2C2TRN = 0x00000000u;
		#ifdef DEF_BITNAME
			I2C2TRNbits.I2CTRN = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* I2C2RCVレジスタ */
	/*-----------------------------------------------------------------------*/
		I2C2RCV = 0x00000000u;
		#ifdef DEF_BITNAME
			I2C2RCVbits.I2CRCV = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* I2C2CON2レジスタ */
	/*-----------------------------------------------------------------------*/
		I2C2CON2 = 0x00000000u;
		#ifdef DEF_BITNAME
			I2C2CON2bits.PSZ = 0u;
			I2C2CON2bits.BITE = 0u;
			I2C2CON2bits.SMEN = 0u;
			I2C2CON2bits.NDA = 0u;
			I2C2CON2bits.EOPSC = 0u;
			I2C2CON2bits.HNACKIGN = 0u;
			I2C2CON2bits.ACKC = 0u;
			I2C2CON2bits.EPSZE = 0u;
			I2C2CON2bits.CBCTE = 0u;
			I2C2CON2bits.HBCTE = 0u;
			I2C2CON2bits.BSCLTE = 0u;
			I2C2CON2bits.PECC = 0u;
			I2C2CON2bits.AMODE = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* I2C2LBRGレジスタ */
	/*-----------------------------------------------------------------------*/
		I2C2LBRG = 0x00000000u;
		#ifdef DEF_BITNAME
			I2C2LBRGbits.I2CLBRG = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* I2C2INTCレジスタ */
	/*-----------------------------------------------------------------------*/
		I2C2INTC = 0x00000000u;
		#ifdef DEF_BITNAME
			I2C2INTCbits.HDRXIE = 0u;
			I2C2INTCbits.HDTXIE = 0u;
			I2C2INTCbits.CDTXIE = 0u;
			I2C2INTCbits.CDRXIE = 0u;
			I2C2INTCbits.TXIE = 0u;
			I2C2INTCbits.RXIE = 0u;
			I2C2INTCbits.CADDRIE = 0u;
			I2C2INTCbits.HACKSIE = 0u;
			I2C2INTCbits.CLTIE = 0u;
			I2C2INTCbits.HSTIE = 0u;
			I2C2INTCbits.HSBCLIE = 0u;
			I2C2INTCbits.BCLIE = 0u;
			I2C2INTCbits.CRCIE = 0u;
			I2C2INTCbits.NACKIE = 0u;
			I2C2INTCbits.FRMEIE = 0u;
			I2C2INTCbits.BITIE = 0u;
			I2C2INTCbits.CBCTIE = 0u;
			I2C2INTCbits.HBCTIE = 0u;
			I2C2INTCbits.BSCLTIE = 0u;
			I2C2INTCbits.EOPIE = 0u;
			I2C2INTCbits.HBCLIE = 0u;
			I2C2INTCbits.HSCIE = 0u;
			I2C2INTCbits.HPCIE = 0u;
			I2C2INTCbits.CBCLIE = 0u;
			I2C2INTCbits.I2CEIE = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* I2C2STAT2レジスタ */
	/*-----------------------------------------------------------------------*/
		I2C2STAT2 = 0x00000000u;
		#ifdef DEF_BITNAME
			I2C2STAT2bits.SCLCNT = 0u;
			I2C2STAT2bits.ERR = 0u;
			I2C2STAT2bits.CLTIF = 0u;
			I2C2STAT2bits.HSTIF = 0u;
			I2C2STAT2bits.STARTE = 0u;
			I2C2STAT2bits.STOPE = 0u;
			I2C2STAT2bits.CRCE = 0u;
			I2C2STAT2bits.NACKE = 0u;
			I2C2STAT2bits.FRME = 0u;
			I2C2STAT2bits.BITO = 0u;
			I2C2STAT2bits.CBCLTO = 0u;
			I2C2STAT2bits.HBCLTO = 0u;
			I2C2STAT2bits.BSCLTO = 0u;
			I2C2STAT2bits.EOP = 0u;
			I2C2STAT2bits.HSBCL = 0u;
			I2C2STAT2bits.HSTACT = 0u;
			I2C2STAT2bits.CLTACT = 0u;
			I2C2STAT2bits.SSPND = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* I2C2PECレジスタ */
	/*-----------------------------------------------------------------------*/
		I2C2PEC = 0x00000000u;
		#ifdef DEF_BITNAME
			I2C2PECbits.RCRC = 0u;
			I2C2PECbits.CCRC = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* I2C2BTOレジスタ */
	/*-----------------------------------------------------------------------*/
		I2C2BTO = 0x00000000u;
		#ifdef DEF_BITNAME
			I2C2BTObits.BTOPR = 0u;
			I2C2BTObits.BTOCLK = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* I2C2HBCTOレジスタ */
	/*-----------------------------------------------------------------------*/
	I2C2HBCTO = 0x00000000u;
		#ifdef DEF_BITNAME
			I2C2HBCTObits.HBCTOTMR = 0u;
			I2C2HBCTObits.HBCTOCLK = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* I2C2CBCTOレジスタ */
	/*-----------------------------------------------------------------------*/
	I2C2CBCTO = 0x00000000u;
		#ifdef DEF_BITNAME
			I2C2CBCTObits.CBCTOTMR = 0u;
			I2C2CBCTObits.CBCTOCLK = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* I2C2BITOレジスタ */
	/*-----------------------------------------------------------------------*/
		I2C2BITO = 0x00000000u;
		#ifdef DEF_BITNAME
			I2C2BITObits.BITOTMR = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* I2C2SDASUTレジスタ */
	/*-----------------------------------------------------------------------*/
		I2C2SDASUT = 0x00000000u;
		#ifdef DEF_BITNAME
			I2C2SDASUTbits.SDASUT = 0u;
			I2C2SDASUTbits.SDASUTEN = 0u;
		#endif 
#endif	
}
/*----------------------------------------------------------------------------*/
/*
* @fn        vdg_I2C3_Set_Register(void)
* @brief     I2C3レジスタを初期化します
* @param
* @return
* @detail 
*/
/*----------------------------------------------------------------------------*/
void vdg_I2C3_Set_Register(void)
{
#if ( PMD_I2C3MD == PMD_MODULE_ENABLE )	
	/*-----------------------------------------------------------------------*/
	/* I2C3CON1レジスタ */
	/*-----------------------------------------------------------------------*/
		I2C3CON1 = 0x00000000u;
		#ifdef DEF_BITNAME
			I2C3CON1bits.SEN = 0u;
			I2C3CON1bits.RSEN = 0u;
			I2C3CON1bits.PEN = 0u;
			I2C3CON1bits.RCEN = 0u;
			I2C3CON1bits.ACKEN = 0u;
			I2C3CON1bits.ACKDT = 0u;
			I2C3CON1bits.STREN = 0u;
			I2C3CON1bits.GCEN = 0u;
			I2C3CON1bits.DISSLW = 0u;
			I2C3CON1bits.A10M = 0u;
			I2C3CON1bits.STRICT = 0u;
			I2C3CON1bits.SCLREL = 0u;
			I2C3CON1bits.SIDL = 0u;
			I2C3CON1bits.ON = 0u;
			I2C3CON1bits.DHEN = 0u;
			I2C3CON1bits.AHEN = 0u;
			I2C3CON1bits.SBCDE = 0u;
			I2C3CON1bits.SDAHT = 0u;
			I2C3CON1bits.BOEN = 0u;
			I2C3CON1bits.SCIE = 0u;
			I2C3CON1bits.PCIE = 0u;
			I2C3CON1bits.SMBEN = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* I2C3STAT1レジスタ */
	/*-----------------------------------------------------------------------*/
		I2C3STAT1 = 0x00000000u;
		#ifdef DEF_BITNAME
			I2C3STAT1bits.TBF = 0u;
			I2C3STAT1bits.RBF = 0u;
			I2C3STAT1bits.R_W = 0u;
			I2C3STAT1bits.S = 0u;
			I2C3STAT1bits.P = 0u;
			I2C3STAT1bits.D_A = 0u;
			I2C3STAT1bits.I2COV = 0u;
			I2C3STAT1bits.IWCOL = 0u;
			I2C3STAT1bits.ADD10 = 0u;
			I2C3STAT1bits.GCSTAT = 0u;
			I2C3STAT1bits.BCL = 0u;
			I2C3STAT1bits.ACKTIM = 0u;
			I2C3STAT1bits.TRSTAT = 0u;
			I2C3STAT1bits.ACKSTAT = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* I2C3ADDレジスタ */
	/*-----------------------------------------------------------------------*/
		I2C3ADD = 0x00000000u;
		#ifdef DEF_BITNAME
			I2C3ADDbits.I2CADD = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* I2C3MSKレジスタ */
	/*-----------------------------------------------------------------------*/
		I2C3MSK = 0x00000000u;
		#ifdef DEF_BITNAME
			I2C3MSKbits.I2CMSK = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* I2C3HBRGレジスタ */
	/*-----------------------------------------------------------------------*/
		I2C3HBRG = 0x00000000u;
		#ifdef DEF_BITNAME
			I2C3HBRGbits.I2CHBRG = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* I2C3TRNレジスタ */
	/*-----------------------------------------------------------------------*/
		I2C3TRN = 0x00000000u;
		#ifdef DEF_BITNAME
			I2C3TRNbits.I2CTRN = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* I2C3RCVレジスタ */
	/*-----------------------------------------------------------------------*/
		I2C3RCV = 0x00000000u;
		#ifdef DEF_BITNAME
			I2C3RCVbits.I2CRCV = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* I2C3CON2レジスタ */
	/*-----------------------------------------------------------------------*/
		I2C3CON2 = 0x00000000u;
		#ifdef DEF_BITNAME
			I2C3CON2bits.PSZ = 0u;
			I2C3CON2bits.BITE = 0u;
			I2C3CON2bits.SMEN = 0u;
			I2C3CON2bits.NDA = 0u;
			I2C3CON2bits.EOPSC = 0u;
			I2C3CON2bits.HNACKIGN = 0u;
			I2C3CON2bits.ACKC = 0u;
			I2C3CON2bits.EPSZE = 0u;
			I2C3CON2bits.CBCTE = 0u;
			I2C3CON2bits.HBCTE = 0u;
			I2C3CON2bits.BSCLTE = 0u;
			I2C3CON2bits.PECC = 0u;
			I2C3CON2bits.AMODE = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* I2C3LBRGレジスタ */
	/*-----------------------------------------------------------------------*/
		I2C3LBRG = 0x00000000u;
		#ifdef DEF_BITNAME
			I2C3LBRGbits.I2CLBRG = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* I2C3INTCレジスタ */
	/*-----------------------------------------------------------------------*/
		I2C3INTC = 0x00000000u;
		#ifdef DEF_BITNAME
			I2C3INTCbits.HDRXIE = 0u;
			I2C3INTCbits.HDTXIE = 0u;
			I2C3INTCbits.CDTXIE = 0u;
			I2C3INTCbits.CDRXIE = 0u;
			I2C3INTCbits.TXIE = 0u;
			I2C3INTCbits.RXIE = 0u;
			I2C3INTCbits.CADDRIE = 0u;
			I2C3INTCbits.HACKSIE = 0u;
			I2C3INTCbits.CLTIE = 0u;
			I2C3INTCbits.HSTIE = 0u;
			I2C3INTCbits.HSBCLIE = 0u;
			I2C3INTCbits.BCLIE = 0u;
			I2C3INTCbits.CRCIE = 0u;
			I2C3INTCbits.NACKIE = 0u;
			I2C3INTCbits.FRMEIE = 0u;
			I2C3INTCbits.BITIE = 0u;
			I2C3INTCbits.CBCTIE = 0u;
			I2C3INTCbits.HBCTIE = 0u;
			I2C3INTCbits.BSCLTIE = 0u;
			I2C3INTCbits.EOPIE = 0u;
			I2C3INTCbits.HBCLIE = 0u;
			I2C3INTCbits.HSCIE = 0u;
			I2C3INTCbits.HPCIE = 0u;
			I2C3INTCbits.CBCLIE = 0u;
			I2C3INTCbits.I2CEIE = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* I2C3STAT2レジスタ */
	/*-----------------------------------------------------------------------*/
		I2C3STAT2 = 0x00000000u;
		#ifdef DEF_BITNAME
			I2C3STAT2bits.SCLCNT = 0u;
			I2C3STAT2bits.ERR = 0u;
			I2C3STAT2bits.CLTIF = 0u;
			I2C3STAT2bits.HSTIF = 0u;
			I2C3STAT2bits.STARTE = 0u;
			I2C3STAT2bits.STOPE = 0u;
			I2C3STAT2bits.CRCE = 0u;
			I2C3STAT2bits.NACKE = 0u;
			I2C3STAT2bits.FRME = 0u;
			I2C3STAT2bits.BITO = 0u;
			I2C3STAT2bits.CBCLTO = 0u;
			I2C3STAT2bits.HBCLTO = 0u;
			I2C3STAT2bits.BSCLTO = 0u;
			I2C3STAT2bits.EOP = 0u;
			I2C3STAT2bits.HSBCL = 0u;
			I2C3STAT2bits.HSTACT = 0u;
			I2C3STAT2bits.CLTACT = 0u;
			I2C3STAT2bits.SSPND = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* I2C3PECレジスタ */
	/*-----------------------------------------------------------------------*/
		I2C3PEC = 0x00000000u;
		#ifdef DEF_BITNAME
			I2C3PECbits.RCRC = 0u;
			I2C3PECbits.CCRC = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* I2C3BTOレジスタ */
	/*-----------------------------------------------------------------------*/
		I2C3BTO = 0x00000000u;
		#ifdef DEF_BITNAME
			I2C3BTObits.BTOPR = 0u;
			I2C3BTObits.BTOCLK = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* I2C3HBCTOレジスタ */
	/*-----------------------------------------------------------------------*/
	I2C3HBCTO = 0x00000000u;
		#ifdef DEF_BITNAME
			I2C3HBCTObits.HBCTOTMR = 0u;
			I2C3HBCTObits.HBCTOCLK = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* I2C3CBCTOレジスタ */
	/*-----------------------------------------------------------------------*/
	I2C3CBCTO = 0x00000000u;
		#ifdef DEF_BITNAME
			I2C3CBCTObits.CBCTOTMR = 0u;
			I2C3CBCTObits.CBCTOCLK = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* I2C3BITOレジスタ */
	/*-----------------------------------------------------------------------*/
		I2C3BITO = 0x00000000u;
		#ifdef DEF_BITNAME
			I2C3BITObits.BITOTMR = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* I2C3SDASUTレジスタ */
	/*-----------------------------------------------------------------------*/
		I2C3SDASUT = 0x00000000u;
		#ifdef DEF_BITNAME
			I2C3SDASUTbits.SDASUT = 0u;
			I2C3SDASUTbits.SDASUTEN = 0u;
		#endif 
#endif	
}
/*----------------------------------------------------------------------------*/
/*
* @fn        vdg_I2C_Set_Register(void) 
* @brief     I2Cレジスタを初期化します 
* @param
* @return
* @detail 
*/
/*----------------------------------------------------------------------------*/
void vdg_I2C_Set_Register(void)
{
#if ( PMD_I2C1MD == PMD_MODULE_ENABLE )
    vdg_I2C1_Set_Register();
#endif
#if ( PMD_I2C2MD == PMD_MODULE_ENABLE )
    vdg_I2C2_Set_Register();
#endif
#if ( PMD_I2C3MD == PMD_MODULE_ENABLE )
    vdg_I2C3_Set_Register();
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn			u2g_I2C1_Initiates_StartBit(void) 
* @brief        I2C1のスタートビットを発行します 
* @param
* @return       I2Cコンディション
* @detail 
*/
/*----------------------------------------------------------------------------*/
I2C_DRV_RET u2g_I2C1_Initiates_StartBit(void)
{
#if ( PMD_I2C1MD == PMD_MODULE_ENABLE )
    /*----------------------------------------------------------------------------*/
    /*【****】タイムアウト時間設定*/
    /*----------------------------------------------------------------------------*/
        s_I2C1_Drv.u2l_Timer = I2C_DRV_START_TIMEOUT;
    /*----------------------------------------------------------------------------*/
    /*【****】スタートビット発行*/
    /*----------------------------------------------------------------------------*/
        I2C1CON1bits.SEN = 1u;
    /*----------------------------------------------------------------------------*/
    /*【****】スタートビット発行チェック*/
    /*----------------------------------------------------------------------------*/
        while(I2C1STAT1bits.S == 0u)
        {
            if (s_I2C1_Drv.u2l_Timer > 0u)
            {
                return (I2C_DRV_RET_TIMEOUT);
            }
            else
            {
                s_I2C1_Drv.u2l_Timer --;
            }
        }
        return (I2C_DRV_RET_OK);
#else
        return (I2C_DRV_RET_MODULE_INVARID);
#endif
}
/*----------------------------------------------------------------------------*/
/*
* @fn        u2g_I2C1_Initiates_ReStartBit(void)
* @brief     I2C1のリスタートビットを発行します
* @param
* @return     I2Cコンディション
* @detail 
*/
/*----------------------------------------------------------------------------*/
I2C_DRV_RET u2g_I2C1_Initiates_ReStartBit(void)
{
#if ( PMD_I2C1MD == PMD_MODULE_ENABLE )
    /*----------------------------------------------------------------------------*/
    /*【****】タイムアウト時間設定*/
    /*----------------------------------------------------------------------------*/
        s_I2C1_Drv.u2l_Timer = I2C_DRV_RESTART_TIMEOUT;
    /*----------------------------------------------------------------------------*/
    /*【****】リスタートビット発行*/
    /*----------------------------------------------------------------------------*/
        I2C1CON1bits.RSEN = 1u;
    /*----------------------------------------------------------------------------*/
    /*【****】スタートビット発行チェック*/
    /*----------------------------------------------------------------------------*/
        while(I2C1STAT1bits.S == 0u)
        {
            if (s_I2C1_Drv.u2l_Timer > 0u)
            {
                return (I2C_DRV_RET_TIMEOUT);
            }
            else
            {
                s_I2C1_Drv.u2l_Timer --;
            }
        }
        return (I2C_DRV_RET_OK);
#else
        return (I2C_DRV_RET_MODULE_INVARID);
#endif
}
/*----------------------------------------------------------------------------*/
/*
* @fn        u2g_I2C1_Initiates_StopBit(void)
* @brief     I2C1のストップビットを発行します 
* @param
* @return    I2Cコンディション
* @detail
*/
/*----------------------------------------------------------------------------*/
I2C_DRV_RET u2g_I2C1_Initiates_StopBit(void)
{
#if ( PMD_I2C1MD == PMD_MODULE_ENABLE )
    /*----------------------------------------------------------------------------*/
    /*【****】タイムアウト時間設定*/
    /*----------------------------------------------------------------------------*/
        s_I2C1_Drv.u2l_Timer = I2C_DRV_STOP_TIMEOUT;
    /*----------------------------------------------------------------------------*/
    /*【****】ストップビット発行*/
    /*----------------------------------------------------------------------------*/
        I2C1CON1bits.PEN = 1u;
    /*----------------------------------------------------------------------------*/
    /*【****】ストップビット発行チェック*/
    /*----------------------------------------------------------------------------*/
        while(I2C1STAT1bits.P == 0u)
        {
            if (s_I2C1_Drv.u2l_Timer > 0u)
            {
                return (I2C_DRV_RET_TIMEOUT);
            }
            else
            {
                s_I2C1_Drv.u2l_Timer --;
            }
        }
        return (I2C_DRV_RET_OK);
#else
        return (I2C_DRV_RET_MODULE_INVARID);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn        u2g_I2C1_Write_Byte(_u1 u1a_Data) 
* @brief        I2C1に1Byte送信します 
* @param           u1a_Data：送信データ
* @return         I2Cコンディション
* @detail 
*/
/*----------------------------------------------------------------------------*/
I2C_DRV_RET u2g_I2C1_Write_Byte(_u1 u1a_Data)
{
#if ( PMD_I2C1MD == PMD_MODULE_ENABLE )
    /*----------------------------------------------------------------------------*/
    /*【****】タイムアウト時間設定*/
    /*----------------------------------------------------------------------------*/
        s_I2C1_Drv.u2l_Timer = I2C_DRV_WRITE_TIMEOUT;
    /*----------------------------------------------------------------------------*/
    /*【****】データ送信発行*/
    /*----------------------------------------------------------------------------*/
        I2C1TRN = u1a_Data;
    /*----------------------------------------------------------------------------*/
    /*【****】データ送信チェック*/
    /*----------------------------------------------------------------------------*/
        while(I2C1STAT1bits.TRSTAT == 1u)
        {
            if (s_I2C1_Drv.u2l_Timer > 0u)
            {
                return (I2C_DRV_RET_TIMEOUT);
            }
            else
            {
                s_I2C1_Drv.u2l_Timer --;
            }
        }
    /*----------------------------------------------------------------------------*/
    /*【****】ACKチェック*/
    /*----------------------------------------------------------------------------*/
        if (I2C1STAT1bits.ACKSTAT == 0u)
        {
            return (I2C_DRV_RET_ACK);
        }
        else
        {
            return (I2C_DRV_RET_NACK);
        }
#else
        return (I2C_DRV_RET_MODULE_INVARID);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn        u2g_I2C1_Read_Byte(_u1 *u1pa_Data,_u1 u1a_ACK) 
* @brief        I2C1から1Byte受信します 
* @param           u1a_Data：受信データアドレス
* @param           u1a_ACK：受信できた場合のACKビット(0 = ACK , 1 = NACK)
* @return         I2Cコンディション
* @detail 
*/
/*----------------------------------------------------------------------------*/
I2C_DRV_RET u2g_I2C1_Read_Byte(_u1 *u1pa_Data,_u1 u1a_ACK)
{
#if ( PMD_I2C1MD == PMD_MODULE_ENABLE )
    /*----------------------------------------------------------------------------*/
    /*【****】引数チェック*/
    /*----------------------------------------------------------------------------*/
        if (u1a_ACK > 1u){return (I2C_DRV_RET_INVARID_INPUT);}
    /*----------------------------------------------------------------------------*/
    /*【****】タイムアウト時間設定*/
    /*----------------------------------------------------------------------------*/
        s_I2C1_Drv.u2l_Timer = I2C_DRV_READ_TIMEOUT;
    /*----------------------------------------------------------------------------*/
    /*【****】データ受信開始*/
    /*----------------------------------------------------------------------------*/
        I2C1CON1bits.RCEN = 1u;
    /*----------------------------------------------------------------------------*/
    /*【****】データ送信チェック*/
    /*----------------------------------------------------------------------------*/
        while(I2C1STAT1bits.RBF == 0u)
        {
            if (s_I2C1_Drv.u2l_Timer > 0u)
            {
                return (I2C_DRV_RET_TIMEOUT);
            }
            else
            {
                s_I2C1_Drv.u2l_Timer --;
            }
        }
    /*----------------------------------------------------------------------------*/
    /*【****】ACK発行*/
    /*----------------------------------------------------------------------------*/
#if 0   /* if文で代入した方が早くメモリも少ない？*/
        I2C1CON1bits.ACKDT = u1a_ACK & 0x01u;
        I2C1CON1bits.ACKDT = (u1a_ACK == 0u) ? 0u:1u;
#else
        if (u1a_ACK == 0u)
        {
            I2C1CON1bits.ACKDT = 0u;
        }
        else
        {
            I2C1CON1bits.ACKDT = 1u;
        }
#endif
        I2C1CON1bits.ACKEN = 1u;
    /*----------------------------------------------------------------------------*/
    /*【****】タイムアウト時間設定*/
    /*----------------------------------------------------------------------------*/
        s_I2C1_Drv.u2l_Timer = I2C_DRV_ACK_TIMEOUT;
    /*----------------------------------------------------------------------------*/
    /*【****】ACK発行チェック*/
    /*----------------------------------------------------------------------------*/
        while(I2C1CON1bits.ACKEN == 1u)
        {
            if (s_I2C1_Drv.u2l_Timer > 0u)
            {
                return (I2C_DRV_RET_TIMEOUT);
            }
            else
            {
                s_I2C1_Drv.u2l_Timer --;
            }
        }
        
        *u1pa_Data = I2C1RCV;
        return (I2C_DRV_RET_OK);
#else
        return (I2C_DRV_RET_MODULE_INVARID);  
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn			u2g_I2C2_Initiates_StartBit(void) 
* @brief        I2C2のスタートビットを発行します 
* @param
* @return       I2Cコンディション
* @detail 
*/
/*----------------------------------------------------------------------------*/
I2C_DRV_RET u2g_I2C2_Initiates_StartBit(void)
{
#if ( PMD_I2C2MD == PMD_MODULE_ENABLE )
    /*----------------------------------------------------------------------------*/
    /*【****】タイムアウト時間設定*/
    /*----------------------------------------------------------------------------*/
        s_I2C2_Drv.u2l_Timer = I2C_DRV_START_TIMEOUT;
    /*----------------------------------------------------------------------------*/
    /*【****】スタートビット発行*/
    /*----------------------------------------------------------------------------*/
        I2C2CON1bits.SEN = 1u;
    /*----------------------------------------------------------------------------*/
    /*【****】スタートビット発行チェック*/
    /*----------------------------------------------------------------------------*/
        while(I2C2STAT1bits.S == 0u)
        {
            if (s_I2C2_Drv.u2l_Timer > 0u)
            {
                return (I2C_DRV_RET_TIMEOUT);
            }
            else
            {
                s_I2C2_Drv.u2l_Timer --;
            }
        }
        return (I2C_DRV_RET_OK);
#else
        return (I2C_DRV_RET_MODULE_INVARID);
#endif
}
/*----------------------------------------------------------------------------*/
/*
* @fn        u2g_I2C2_Initiates_ReStartBit(void) 
* @brief        I2C2のリスタートビットを発行します 
* @param
* @return         I2Cコンディション
* @detail 
*/
/*----------------------------------------------------------------------------*/
I2C_DRV_RET u2g_I2C2_Initiates_ReStartBit(void)
{
#if ( PMD_I2C2MD == PMD_MODULE_ENABLE )
    /*----------------------------------------------------------------------------*/
    /*【****】タイムアウト時間設定*/
    /*----------------------------------------------------------------------------*/
        s_I2C2_Drv.u2l_Timer = I2C_DRV_RESTART_TIMEOUT;
    /*----------------------------------------------------------------------------*/
    /*【****】リスタートビット発行*/
    /*----------------------------------------------------------------------------*/
        I2C2CON1bits.RSEN = 1u;
    /*----------------------------------------------------------------------------*/
    /*【****】スタートビット発行チェック*/
    /*----------------------------------------------------------------------------*/
        while(I2C2STAT1bits.S == 0u)
        {
            if (s_I2C2_Drv.u2l_Timer > 0u)
            {
                return (I2C_DRV_RET_TIMEOUT);
            }
            else
            {
                s_I2C2_Drv.u2l_Timer --;
            }
        }
        return (I2C_DRV_RET_OK);
#else
        return (I2C_DRV_RET_MODULE_INVARID);
#endif
}
/*----------------------------------------------------------------------------*/
/*
* @fn        u2g_I2C2_Initiates_StopBit(void)
* @brief     I2C2のストップビットを発行します
* @param
* @return    I2Cコンディション
* @detail
*/
/*----------------------------------------------------------------------------*/
I2C_DRV_RET u2g_I2C2_Initiates_StopBit(void)
{
#if ( PMD_I2C2MD == PMD_MODULE_ENABLE )
    /*----------------------------------------------------------------------------*/
    /*【****】タイムアウト時間設定*/
    /*----------------------------------------------------------------------------*/
        s_I2C2_Drv.u2l_Timer = I2C_DRV_STOP_TIMEOUT;
    /*----------------------------------------------------------------------------*/
    /*【****】ストップビット発行*/
    /*----------------------------------------------------------------------------*/
        I2C2CON1bits.PEN = 1u;
    /*----------------------------------------------------------------------------*/
    /*【****】ストップビット発行チェック*/
    /*----------------------------------------------------------------------------*/
        while(I2C2STAT1bits.P == 0u)
        {
            if (s_I2C2_Drv.u2l_Timer > 0u)
            {
                return (I2C_DRV_RET_TIMEOUT);
            }
            else
            {
                s_I2C2_Drv.u2l_Timer --;
            }
        }
        return (I2C_DRV_RET_OK);
#else
        return (I2C_DRV_RET_MODULE_INVARID);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn        u2g_I2C2_Write_Byte(_u1 u1a_Data) 
* @brief     I2C2に1Byte送信します
* @param     u1a_Data：送信データ
* @return    I2Cコンディション
* @detail 
*/
/*----------------------------------------------------------------------------*/
I2C_DRV_RET u2g_I2C2_Write_Byte(_u1 u1a_Data)
{
#if ( PMD_I2C2MD == PMD_MODULE_ENABLE )
    /*----------------------------------------------------------------------------*/
    /*【****】タイムアウト時間設定*/
    /*----------------------------------------------------------------------------*/
        s_I2C2_Drv.u2l_Timer = I2C_DRV_WRITE_TIMEOUT;
    /*----------------------------------------------------------------------------*/
    /*【****】データ送信発行*/
    /*----------------------------------------------------------------------------*/
        I2C2TRN = u1a_Data;
    /*----------------------------------------------------------------------------*/
    /*【****】データ送信チェック*/
    /*----------------------------------------------------------------------------*/
        while(I2C2STAT1bits.TRSTAT == 1u)
        {
            if (s_I2C2_Drv.u2l_Timer > 0u)
            {
                return (I2C_DRV_RET_TIMEOUT);
            }
            else
            {
                s_I2C2_Drv.u2l_Timer --;
            }
        }
    /*----------------------------------------------------------------------------*/
    /*【****】ACKチェック*/
    /*----------------------------------------------------------------------------*/
        if (I2C2STAT1bits.ACKSTAT == 0u)
        {
            return (I2C_DRV_RET_ACK);
        }
        else
        {
            return (I2C_DRV_RET_NACK);
        }
#else
        return (I2C_DRV_RET_MODULE_INVARID);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn        u2g_I2C2_Read_Byte(_u1 *u1pa_Data,_u1 u1a_ACK) 
* @brief     I2C2から1Byte受信します 
* @param     u1a_Data：受信データアドレス
* @param     u1a_ACK：受信できた場合のACKビット(0 = ACK , 1 = NACK)
* @return    I2Cコンディション
* @detail 
*/
/*----------------------------------------------------------------------------*/
I2C_DRV_RET u2g_I2C2_Read_Byte(_u1 *u1pa_Data,_u1 u1a_ACK)
{
#if ( PMD_I2C2MD == PMD_MODULE_ENABLE )
    /*----------------------------------------------------------------------------*/
    /*【****】引数チェック*/
    /*----------------------------------------------------------------------------*/
        if (u1a_ACK > 1u){return (I2C_DRV_RET_INVARID_INPUT);}
    /*----------------------------------------------------------------------------*/
    /*【****】タイムアウト時間設定*/
    /*----------------------------------------------------------------------------*/
        s_I2C2_Drv.u2l_Timer = I2C_DRV_READ_TIMEOUT;
    /*----------------------------------------------------------------------------*/
    /*【****】データ受信開始*/
    /*----------------------------------------------------------------------------*/
        I2C2CON1bits.RCEN = 1u;
    /*----------------------------------------------------------------------------*/
    /*【****】データ送信チェック*/
    /*----------------------------------------------------------------------------*/
        while(I2C2STAT1bits.RBF == 0u)
        {
            if (s_I2C2_Drv.u2l_Timer > 0u)
            {
                return (I2C_DRV_RET_TIMEOUT);
            }
            else
            {
                s_I2C2_Drv.u2l_Timer --;
            }
        }
    /*----------------------------------------------------------------------------*/
    /*【****】ACK発行*/
    /*----------------------------------------------------------------------------*/
        I2C2CON1bits.ACKDT = u1a_ACK;
        I2C2CON1bits.ACKEN = 1u;
    /*----------------------------------------------------------------------------*/
    /*【****】タイムアウト時間設定*/
    /*----------------------------------------------------------------------------*/
        s_I2C2_Drv.u2l_Timer = I2C_DRV_ACK_TIMEOUT;
    /*----------------------------------------------------------------------------*/
    /*【****】ACK発行チェック*/
    /*----------------------------------------------------------------------------*/
        while(I2C2CON1bits.ACKEN == 1u)
        {
            if (s_I2C2_Drv.u2l_Timer > 0u)
            {
                return (I2C_DRV_RET_TIMEOUT);
            }
            else
            {
                s_I2C2_Drv.u2l_Timer --;
            }
        }
        
        *u1pa_Data = I2C2RCV;
        return (I2C_DRV_RET_OK);
#else
        return (I2C_DRV_RET_MODULE_INVARID);
#endif
}