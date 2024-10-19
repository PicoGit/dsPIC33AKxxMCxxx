/*----------------------------------------------------------------------------*/
/**
* @file		DMA_Driver.c
* @brief	DMAモジュールに関するドライバ関数
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
#include "dma_driver.h"
#include "dma_user.h"
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
* @fn        vdg_DMACOM_Set_Register(void) 
* @brief     DMA共通レジスタを初期化します
* @param
* @return
* @detail 
 */
/*----------------------------------------------------------------------------*/
void vdg_DMACOM_Set_Register(void)
{
	/*-----------------------------------------------------------------------*/
	/* DMACONレジスタ */
	/*-----------------------------------------------------------------------*/
		DMACON = ( DMA_USER_DMACON_PRIORITY << 0U ) |
				(  DMA_USER_DMACON_SIDL << 13U ) |
				(  DMA_USER_DMACON_ON << 15U )  ;
		#ifdef DEF_BITNAME
			DMACONbits.PRIORITY = DMA_USER_DMACON_PRIORITY;
			DMACONbits.SIDL = DMA_USER_DMACON_SIDL;
			DMACONbits.ON = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* DMABUFレジスタ */
	/*-----------------------------------------------------------------------*/
		DMABUF = 0x00000000u;

	/*-----------------------------------------------------------------------*/
	/* DMALOWレジスタ */
	/*-----------------------------------------------------------------------*/
		DMALOW = DMA_USER_DMALLOW;
		#ifdef DEF_BITNAME
			DMALOWbits.LADDR = DMA_USER_DMALLOW;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* DMAHIGHレジスタ */
	/*-----------------------------------------------------------------------*/
		DMAHIGH = DMA_USER_DMALHIGH;
		#ifdef DEF_BITNAME
			DMAHIGHbits.HADDR = DMA_USER_DMALHIGH;
		#endif 
		#ifdef DEF_BITNAME
			DMACONbits.ON = DMA_USER_DMACON_ON;
		#endif 
}
/*----------------------------------------------------------------------------*/
/*
* @fn        vdg_DMA0_Set_Register(void) 
* @brief        DMA0レジスタを初期化します 
* @param
* @return
* @detail 
*/
/*----------------------------------------------------------------------------*/
void vdg_DMA0_Set_Register(void)
{
#if (PMD_DMA0MD == PMD_MODULE_ENABLE)
	/*-----------------------------------------------------------------------*/
	/* DMA0CHレジスタ */
	/*-----------------------------------------------------------------------*/
		DMA0CH =( DMA_USER_DMA1CH_HALFEN << 1U ) |
				( DMA_USER_DMA1CH_MATEN << 2U ) |
				( DMA_USER_DMA1CH_INTOEN << 3U ) |
				( DMA_USER_DMA1CH_CHREQ << 4U ) |
				( DMA_USER_DMA1CH_SIZE << 6U ) |
				( DMA_USER_DMA1CH_FLWCON << 8U ) |
				( DMA_USER_DMA1CH_TRMODE << 10U ) |
				( DMA_USER_DMA1CH_DAMODE << 12U ) |
				( DMA_USER_DMA1CH_SAMODE << 14U ) |
				( DMA_USER_DMA1CH_RETEN << 16U ) |
				( DMA_USER_DMA1CH_RELOADS << 24U ) |
				( DMA_USER_DMA1CH_RELOADD << 25U ) |
				( DMA_USER_DMA1CH_RELOADC << 26U ) |
				( DMA_USER_DMA1CH_PCHAEN << 28U ) |
				( DMA_USER_DMA1CH_PPEN << 29U )  ;
		
		#ifdef DEF_BITNAME
			DMA0CHbits.CHEN = 0U;
			DMA0CHbits.HALFEN = DMA_USER_DMA1CH_HALFEN;
			DMA0CHbits.MATEN = DMA_USER_DMA1CH_MATEN;
			DMA0CHbits.INTOEN = DMA_USER_DMA1CH_INTOEN;
			DMA0CHbits.CHREQ = DMA_USER_DMA1CH_CHREQ;
			DMA0CHbits.SIZE = DMA_USER_DMA1CH_SIZE;
			DMA0CHbits.FLWCON =  DMA_USER_DMA1CH_FLWCON;
			DMA0CHbits.TRMODE = DMA_USER_DMA1CH_TRMODE;
			DMA0CHbits.DAMODE = DMA_USER_DMA1CH_DAMODE;
			DMA0CHbits.SAMODE = DMA_USER_DMA1CH_SAMODE;
			DMA0CHbits.RETEN = DMA_USER_DMA1CH_RETEN;
			DMA0CHbits.RELOADS = DMA_USER_DMA1CH_RELOADS;
			DMA0CHbits.RELOADD = DMA_USER_DMA1CH_RELOADD;
			DMA0CHbits.RELOADC = DMA_USER_DMA1CH_RELOADC;
			DMA0CHbits.PCHAEN = DMA_USER_DMA1CH_PCHAEN;
			DMA0CHbits.PPEN = DMA_USER_DMA1CH_PPEN;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* DMA0SELレジスタ */
	/*-----------------------------------------------------------------------*/
		DMA0SEL = DMA_USER_DMA0SEL;

	/*-----------------------------------------------------------------------*/
	/* DMA0STATレジスタ */
	/*-----------------------------------------------------------------------*/
		DMA0STAT = 0x00000000u;
		#ifdef DEF_BITNAME
			DMA0STATbits.DBUFWF = 0u;
			DMA0STATbits.MATCH = 0u;
			DMA0STATbits.OVERRUN = 0u;
			DMA0STATbits.HALF = 0u;
			DMA0STATbits.DONE = 0u;
			DMA0STATbits.DMAFLT = 0u;
			DMA0STATbits.DMAFLT2 = 0u;
			DMA0STATbits.DMAFLT3 = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* DMA0SRCレジスタ */
	/*-----------------------------------------------------------------------*/
		DMA0SRC = DMA_USER_DMA0SRC;

	/*-----------------------------------------------------------------------*/
	/* DMA0DSTレジスタ */
	/*-----------------------------------------------------------------------*/
		DMA0DST = DMA_USER_DMA0DST;

	/*-----------------------------------------------------------------------*/
	/* DMA0CNTレジスタ */
	/*-----------------------------------------------------------------------*/
		DMA0CNT = DMA_USER_DMA0CNT;

	/*-----------------------------------------------------------------------*/
	/* DMA0CLRレジスタ */
	/*-----------------------------------------------------------------------*/
		DMA0CLR = DMA_USER_DMA0CLR;

	/*-----------------------------------------------------------------------*/
	/* DMA0SETレジスタ */
	/*-----------------------------------------------------------------------*/
		DMA0SET = DMA_USER_DMA0SET;

	/*-----------------------------------------------------------------------*/
	/* DMA0INVレジスタ */
	/*-----------------------------------------------------------------------*/
		DMA0INV = DMA_USER_DMA0INV;

	/*-----------------------------------------------------------------------*/
	/* DMA0MSKレジスタ */
	/*-----------------------------------------------------------------------*/
		DMA0MSK = DMA_USER_DMA0MSK;

	/*-----------------------------------------------------------------------*/
	/* DMA0PATレジスタ */
	/*-----------------------------------------------------------------------*/
		DMA0PAT = DMA_USER_DMA0PAT;
		
		DMA0CHbits.CHEN = DMA_USER_DMA1CH_CHEN;
#endif
}
/*----------------------------------------------------------------------------*/
/*
* @fn        vdg_DMA1_Set_Register(void) 
* @brief        DMA1レジスタを初期化します 
* @param
* @return
* @detail 
*/
/*----------------------------------------------------------------------------*/
void vdg_DMA1_Set_Register(void)
{
#if (PMD_DMA1MD == PMD_MODULE_ENABLE)
	/*-----------------------------------------------------------------------*/
	/* DMA1CHレジスタ */
	/*-----------------------------------------------------------------------*/
		DMA1CH =( DMA_USER_DMA1CH_HALFEN << 1U ) |
				( DMA_USER_DMA1CH_MATEN << 2U ) |
				( DMA_USER_DMA1CH_INTOEN << 3U ) |
				( DMA_USER_DMA1CH_CHREQ << 4U ) |
				( DMA_USER_DMA1CH_SIZE << 6U ) |
				( DMA_USER_DMA1CH_FLWCON << 8U ) |
				( DMA_USER_DMA1CH_TRMODE << 10U ) |
				( DMA_USER_DMA1CH_DAMODE << 12U ) |
				( DMA_USER_DMA1CH_SAMODE << 14U ) |
				( DMA_USER_DMA1CH_RETEN << 16U ) |
				( DMA_USER_DMA1CH_RELOADS << 24U ) |
				( DMA_USER_DMA1CH_RELOADD << 25U ) |
				( DMA_USER_DMA1CH_RELOADC << 26U ) |
				( DMA_USER_DMA1CH_PCHAEN << 28U ) |
				( DMA_USER_DMA1CH_PPEN << 29U )  ;
		
		#ifdef DEF_BITNAME
			DMA1CHbits.CHEN = 0U;
			DMA1CHbits.HALFEN = DMA_USER_DMA1CH_HALFEN;
			DMA1CHbits.MATEN = DMA_USER_DMA1CH_MATEN;
			DMA1CHbits.INTOEN = DMA_USER_DMA1CH_INTOEN;
			DMA1CHbits.CHREQ = DMA_USER_DMA1CH_CHREQ;
			DMA1CHbits.SIZE = DMA_USER_DMA1CH_SIZE;
			DMA1CHbits.FLWCON =  DMA_USER_DMA1CH_FLWCON;
			DMA1CHbits.TRMODE = DMA_USER_DMA1CH_TRMODE;
			DMA1CHbits.DAMODE = DMA_USER_DMA1CH_DAMODE;
			DMA1CHbits.SAMODE = DMA_USER_DMA1CH_SAMODE;
			DMA1CHbits.RETEN = DMA_USER_DMA1CH_RETEN;
			DMA1CHbits.RELOADS = DMA_USER_DMA1CH_RELOADS;
			DMA1CHbits.RELOADD = DMA_USER_DMA1CH_RELOADD;
			DMA1CHbits.RELOADC = DMA_USER_DMA1CH_RELOADC;
			DMA1CHbits.PCHAEN = DMA_USER_DMA1CH_PCHAEN;
			DMA1CHbits.PPEN = DMA_USER_DMA1CH_PPEN;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* DMA1SELレジスタ */
	/*-----------------------------------------------------------------------*/
		DMA1SEL = DMA_USER_DMA1SEL;

	/*-----------------------------------------------------------------------*/
	/* DMA1STATレジスタ */
	/*-----------------------------------------------------------------------*/
		DMA1STAT = 0x00000000u;
		#ifdef DEF_BITNAME
			DMA1STATbits.DBUFWF = 0u;
			DMA1STATbits.MATCH = 0u;
			DMA1STATbits.OVERRUN = 0u;
			DMA1STATbits.HALF = 0u;
			DMA1STATbits.DONE = 0u;
			DMA1STATbits.DMAFLT = 0u;
			DMA1STATbits.DMAFLT2 = 0u;
			DMA1STATbits.DMAFLT3 = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* DMA1SRCレジスタ */
	/*-----------------------------------------------------------------------*/
		DMA1SRC = DMA_USER_DMA1SRC;

	/*-----------------------------------------------------------------------*/
	/* DMA1DSTレジスタ */
	/*-----------------------------------------------------------------------*/
		DMA1DST = DMA_USER_DMA1DST;

	/*-----------------------------------------------------------------------*/
	/* DMA1CNTレジスタ */
	/*-----------------------------------------------------------------------*/
		DMA1CNT = DMA_USER_DMA1CNT;

	/*-----------------------------------------------------------------------*/
	/* DMA1CLRレジスタ */
	/*-----------------------------------------------------------------------*/
		DMA1CLR = DMA_USER_DMA1CLR;

	/*-----------------------------------------------------------------------*/
	/* DMA1SETレジスタ */
	/*-----------------------------------------------------------------------*/
		DMA1SET = DMA_USER_DMA1SET;

	/*-----------------------------------------------------------------------*/
	/* DMA1INVレジスタ */
	/*-----------------------------------------------------------------------*/
		DMA1INV = DMA_USER_DMA1INV;

	/*-----------------------------------------------------------------------*/
	/* DMA1MSKレジスタ */
	/*-----------------------------------------------------------------------*/
		DMA1MSK = DMA_USER_DMA1MSK;

	/*-----------------------------------------------------------------------*/
	/* DMA1PATレジスタ */
	/*-----------------------------------------------------------------------*/
		DMA1PAT = DMA_USER_DMA1PAT;
		
		DMA1CHbits.CHEN = DMA_USER_DMA1CH_CHEN;
#endif
}
/*----------------------------------------------------------------------------*/
/*
* @fn        vdg_DMA2_Set_Register(void)
* @brief        DMA2レジスタを初期化します
* @param
* @return
* @detail 
 */
/*----------------------------------------------------------------------------*/
void vdg_DMA2_Set_Register(void)
{
#if (PMD_DMA2MD == PMD_MODULE_ENABLE)
		/*-----------------------------------------------------------------------*/
	/* DMA2CHレジスタ */
	/*-----------------------------------------------------------------------*/
		DMA2CH =( DMA_USER_DMA2CH_HALFEN << 1U ) |
				( DMA_USER_DMA2CH_MATEN << 2U ) |
				( DMA_USER_DMA2CH_INTOEN << 3U ) |
				( DMA_USER_DMA2CH_CHREQ << 4U ) |
				( DMA_USER_DMA2CH_SIZE << 6U ) |
				( DMA_USER_DMA2CH_FLWCON << 8U ) |
				( DMA_USER_DMA2CH_TRMODE << 10U ) |
				( DMA_USER_DMA2CH_DAMODE << 12U ) |
				( DMA_USER_DMA2CH_SAMODE << 14U ) |
				( DMA_USER_DMA2CH_RETEN << 16U ) |
				( DMA_USER_DMA2CH_RELOADS << 24U ) |
				( DMA_USER_DMA2CH_RELOADD << 25U ) |
				( DMA_USER_DMA2CH_RELOADC << 26U ) |
				( DMA_USER_DMA2CH_PCHAEN << 28U ) |
				( DMA_USER_DMA2CH_PPEN << 29U )  ;
		
		#ifdef DEF_BITNAME
			DMA2CHbits.CHEN = 0U;
			DMA2CHbits.HALFEN = DMA_USER_DMA2CH_HALFEN;
			DMA2CHbits.MATEN = DMA_USER_DMA2CH_MATEN;
			DMA2CHbits.INTOEN = DMA_USER_DMA2CH_INTOEN;
			DMA2CHbits.CHREQ = DMA_USER_DMA2CH_CHREQ;
			DMA2CHbits.SIZE = DMA_USER_DMA2CH_SIZE;
			DMA2CHbits.FLWCON =  DMA_USER_DMA2CH_FLWCON;
			DMA2CHbits.TRMODE = DMA_USER_DMA2CH_TRMODE;
			DMA2CHbits.DAMODE = DMA_USER_DMA2CH_DAMODE;
			DMA2CHbits.SAMODE = DMA_USER_DMA2CH_SAMODE;
			DMA2CHbits.RETEN = DMA_USER_DMA2CH_RETEN;
			DMA2CHbits.RELOADS = DMA_USER_DMA2CH_RELOADS;
			DMA2CHbits.RELOADD = DMA_USER_DMA2CH_RELOADD;
			DMA2CHbits.RELOADC = DMA_USER_DMA2CH_RELOADC;
			DMA2CHbits.PCHAEN = DMA_USER_DMA2CH_PCHAEN;
			DMA2CHbits.PPEN = DMA_USER_DMA2CH_PPEN;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* DMA2SELレジスタ */
	/*-----------------------------------------------------------------------*/
		DMA2SEL = DMA_USER_DMA2SEL;

	/*-----------------------------------------------------------------------*/
	/* DMA2STATレジスタ */
	/*-----------------------------------------------------------------------*/
		DMA2STAT = 0x00000000u;
		#ifdef DEF_BITNAME
			DMA2STATbits.DBUFWF = 0u;
			DMA2STATbits.MATCH = 0u;
			DMA2STATbits.OVERRUN = 0u;
			DMA2STATbits.HALF = 0u;
			DMA2STATbits.DONE = 0u;
			DMA2STATbits.DMAFLT = 0u;
			DMA2STATbits.DMAFLT2 = 0u;
			DMA2STATbits.DMAFLT3 = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* DMA2SRCレジスタ */
	/*-----------------------------------------------------------------------*/
		DMA2SRC = DMA_USER_DMA2SRC;

	/*-----------------------------------------------------------------------*/
	/* DMA2DSTレジスタ */
	/*-----------------------------------------------------------------------*/
		DMA2DST = DMA_USER_DMA2DST;

	/*-----------------------------------------------------------------------*/
	/* DMA2CNTレジスタ */
	/*-----------------------------------------------------------------------*/
		DMA2CNT = DMA_USER_DMA2CNT;

	/*-----------------------------------------------------------------------*/
	/* DMA2CLRレジスタ */
	/*-----------------------------------------------------------------------*/
		DMA2CLR = DMA_USER_DMA2CLR;

	/*-----------------------------------------------------------------------*/
	/* DMA2SETレジスタ */
	/*-----------------------------------------------------------------------*/
		DMA2SET = DMA_USER_DMA2SET;

	/*-----------------------------------------------------------------------*/
	/* DMA2INVレジスタ */
	/*-----------------------------------------------------------------------*/
		DMA2INV = DMA_USER_DMA2INV;

	/*-----------------------------------------------------------------------*/
	/* DMA2MSKレジスタ */
	/*-----------------------------------------------------------------------*/
		DMA2MSK = DMA_USER_DMA2MSK;

	/*-----------------------------------------------------------------------*/
	/* DMA2PATレジスタ */
	/*-----------------------------------------------------------------------*/
		DMA2PAT = DMA_USER_DMA2PAT;
		
		DMA2CHbits.CHEN = DMA_USER_DMA2CH_CHEN;
#endif
}
/*----------------------------------------------------------------------------*/
/*
* @fn        vdg_DMA3_Set_Register(void)
* @brief        DMA3レジスタを初期化します
* @param
* @return
* @detail 
*/
/*----------------------------------------------------------------------------*/
void vdg_DMA3_Set_Register(void)
{
#if (PMD_DMA3MD == PMD_MODULE_ENABLE)
		/*-----------------------------------------------------------------------*/
	/* DMA3CHレジスタ */
	/*-----------------------------------------------------------------------*/
		DMA3CH =( DMA_USER_DMA3CH_HALFEN << 1U ) |
				( DMA_USER_DMA3CH_MATEN << 2U ) |
				( DMA_USER_DMA3CH_INTOEN << 3U ) |
				( DMA_USER_DMA3CH_CHREQ << 4U ) |
				( DMA_USER_DMA3CH_SIZE << 6U ) |
				( DMA_USER_DMA3CH_FLWCON << 8U ) |
				( DMA_USER_DMA3CH_TRMODE << 10U ) |
				( DMA_USER_DMA3CH_DAMODE << 12U ) |
				( DMA_USER_DMA3CH_SAMODE << 14U ) |
				( DMA_USER_DMA3CH_RETEN << 16U ) |
				( DMA_USER_DMA3CH_RELOADS << 24U ) |
				( DMA_USER_DMA3CH_RELOADD << 25U ) |
				( DMA_USER_DMA3CH_RELOADC << 26U ) |
				( DMA_USER_DMA3CH_PCHAEN << 28U ) |
				( DMA_USER_DMA3CH_PPEN << 29U )  ;
		
		#ifdef DEF_BITNAME
			DMA3CHbits.CHEN = 0U;
			DMA3CHbits.HALFEN = DMA_USER_DMA3CH_HALFEN;
			DMA3CHbits.MATEN = DMA_USER_DMA3CH_MATEN;
			DMA3CHbits.INTOEN = DMA_USER_DMA3CH_INTOEN;
			DMA3CHbits.CHREQ = DMA_USER_DMA3CH_CHREQ;
			DMA3CHbits.SIZE = DMA_USER_DMA3CH_SIZE;
			DMA3CHbits.FLWCON =  DMA_USER_DMA3CH_FLWCON;
			DMA3CHbits.TRMODE = DMA_USER_DMA3CH_TRMODE;
			DMA3CHbits.DAMODE = DMA_USER_DMA3CH_DAMODE;
			DMA3CHbits.SAMODE = DMA_USER_DMA3CH_SAMODE;
			DMA3CHbits.RETEN = DMA_USER_DMA3CH_RETEN;
			DMA3CHbits.RELOADS = DMA_USER_DMA3CH_RELOADS;
			DMA3CHbits.RELOADD = DMA_USER_DMA3CH_RELOADD;
			DMA3CHbits.RELOADC = DMA_USER_DMA3CH_RELOADC;
			DMA3CHbits.PCHAEN = DMA_USER_DMA3CH_PCHAEN;
			DMA3CHbits.PPEN = DMA_USER_DMA3CH_PPEN;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* DMA3SELレジスタ */
	/*-----------------------------------------------------------------------*/
		DMA3SEL = DMA_USER_DMA3SEL;

	/*-----------------------------------------------------------------------*/
	/* DMA3STATレジスタ */
	/*-----------------------------------------------------------------------*/
		DMA3STAT = 0x00000000u;
		#ifdef DEF_BITNAME
			DMA3STATbits.DBUFWF = 0u;
			DMA3STATbits.MATCH = 0u;
			DMA3STATbits.OVERRUN = 0u;
			DMA3STATbits.HALF = 0u;
			DMA3STATbits.DONE = 0u;
			DMA3STATbits.DMAFLT = 0u;
			DMA3STATbits.DMAFLT2 = 0u;
			DMA3STATbits.DMAFLT3 = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* DMA3SRCレジスタ */
	/*-----------------------------------------------------------------------*/
		DMA3SRC = DMA_USER_DMA3SRC;

	/*-----------------------------------------------------------------------*/
	/* DMA3DSTレジスタ */
	/*-----------------------------------------------------------------------*/
		DMA3DST = DMA_USER_DMA3DST;

	/*-----------------------------------------------------------------------*/
	/* DMA3CNTレジスタ */
	/*-----------------------------------------------------------------------*/
		DMA3CNT = DMA_USER_DMA3CNT;

	/*-----------------------------------------------------------------------*/
	/* DMA3CLRレジスタ */
	/*-----------------------------------------------------------------------*/
		DMA3CLR = DMA_USER_DMA3CLR;

	/*-----------------------------------------------------------------------*/
	/* DMA3SETレジスタ */
	/*-----------------------------------------------------------------------*/
		DMA3SET = DMA_USER_DMA3SET;

	/*-----------------------------------------------------------------------*/
	/* DMA3INVレジスタ */
	/*-----------------------------------------------------------------------*/
		DMA3INV = DMA_USER_DMA3INV;

	/*-----------------------------------------------------------------------*/
	/* DMA3MSKレジスタ */
	/*-----------------------------------------------------------------------*/
		DMA3MSK = DMA_USER_DMA3MSK;

	/*-----------------------------------------------------------------------*/
	/* DMA3PATレジスタ */
	/*-----------------------------------------------------------------------*/
		DMA3PAT = DMA_USER_DMA3PAT;
		
		DMA3CHbits.CHEN = DMA_USER_DMA3CH_CHEN;
#endif
}
/*----------------------------------------------------------------------------*/
/*
* @fn        vdg_DMA4_Set_Register(void) 
* @brief        DMA4レジスタを初期化します 
* @param
* @return
* @detail 
*/
/*----------------------------------------------------------------------------*/
void vdg_DMA4_Set_Register(void)
{
#if (PMD_DMA4MD == PMD_MODULE_ENABLE)
		/*-----------------------------------------------------------------------*/
	/* DMA4CHレジスタ */
	/*-----------------------------------------------------------------------*/
		DMA4CH =( DMA_USER_DMA4CH_HALFEN << 1U ) |
				( DMA_USER_DMA4CH_MATEN << 2U ) |
				( DMA_USER_DMA4CH_INTOEN << 3U ) |
				( DMA_USER_DMA4CH_CHREQ << 4U ) |
				( DMA_USER_DMA4CH_SIZE << 6U ) |
				( DMA_USER_DMA4CH_FLWCON << 8U ) |
				( DMA_USER_DMA4CH_TRMODE << 10U ) |
				( DMA_USER_DMA4CH_DAMODE << 12U ) |
				( DMA_USER_DMA4CH_SAMODE << 14U ) |
				( DMA_USER_DMA4CH_RETEN << 16U ) |
				( DMA_USER_DMA4CH_RELOADS << 24U ) |
				( DMA_USER_DMA4CH_RELOADD << 25U ) |
				( DMA_USER_DMA4CH_RELOADC << 26U ) |
				( DMA_USER_DMA4CH_PCHAEN << 28U ) |
				( DMA_USER_DMA4CH_PPEN << 29U )  ;
		
		#ifdef DEF_BITNAME
			DMA4CHbits.CHEN = 0U;
			DMA4CHbits.HALFEN = DMA_USER_DMA4CH_HALFEN;
			DMA4CHbits.MATEN = DMA_USER_DMA4CH_MATEN;
			DMA4CHbits.INTOEN = DMA_USER_DMA4CH_INTOEN;
			DMA4CHbits.CHREQ = DMA_USER_DMA4CH_CHREQ;
			DMA4CHbits.SIZE = DMA_USER_DMA4CH_SIZE;
			DMA4CHbits.FLWCON =  DMA_USER_DMA4CH_FLWCON;
			DMA4CHbits.TRMODE = DMA_USER_DMA4CH_TRMODE;
			DMA4CHbits.DAMODE = DMA_USER_DMA4CH_DAMODE;
			DMA4CHbits.SAMODE = DMA_USER_DMA4CH_SAMODE;
			DMA4CHbits.RETEN = DMA_USER_DMA4CH_RETEN;
			DMA4CHbits.RELOADS = DMA_USER_DMA4CH_RELOADS;
			DMA4CHbits.RELOADD = DMA_USER_DMA4CH_RELOADD;
			DMA4CHbits.RELOADC = DMA_USER_DMA4CH_RELOADC;
			DMA4CHbits.PCHAEN = DMA_USER_DMA4CH_PCHAEN;
			DMA4CHbits.PPEN = DMA_USER_DMA4CH_PPEN;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* DMA4SELレジスタ */
	/*-----------------------------------------------------------------------*/
		DMA4SEL = DMA_USER_DMA4SEL;

	/*-----------------------------------------------------------------------*/
	/* DMA4STATレジスタ */
	/*-----------------------------------------------------------------------*/
		DMA4STAT = 0x00000000u;
		#ifdef DEF_BITNAME
			DMA4STATbits.DBUFWF = 0u;
			DMA4STATbits.MATCH = 0u;
			DMA4STATbits.OVERRUN = 0u;
			DMA4STATbits.HALF = 0u;
			DMA4STATbits.DONE = 0u;
			DMA4STATbits.DMAFLT = 0u;
			DMA4STATbits.DMAFLT2 = 0u;
			DMA4STATbits.DMAFLT3 = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* DMA4SRCレジスタ */
	/*-----------------------------------------------------------------------*/
		DMA4SRC = DMA_USER_DMA4SRC;

	/*-----------------------------------------------------------------------*/
	/* DMA4DSTレジスタ */
	/*-----------------------------------------------------------------------*/
		DMA4DST = DMA_USER_DMA4DST;

	/*-----------------------------------------------------------------------*/
	/* DMA4CNTレジスタ */
	/*-----------------------------------------------------------------------*/
		DMA4CNT = DMA_USER_DMA4CNT;

	/*-----------------------------------------------------------------------*/
	/* DMA4CLRレジスタ */
	/*-----------------------------------------------------------------------*/
		DMA4CLR = DMA_USER_DMA4CLR;

	/*-----------------------------------------------------------------------*/
	/* DMA4SETレジスタ */
	/*-----------------------------------------------------------------------*/
		DMA4SET = DMA_USER_DMA4SET;

	/*-----------------------------------------------------------------------*/
	/* DMA4INVレジスタ */
	/*-----------------------------------------------------------------------*/
		DMA4INV = DMA_USER_DMA4INV;

	/*-----------------------------------------------------------------------*/
	/* DMA4MSKレジスタ */
	/*-----------------------------------------------------------------------*/
		DMA4MSK = DMA_USER_DMA4MSK;

	/*-----------------------------------------------------------------------*/
	/* DMA4PATレジスタ */
	/*-----------------------------------------------------------------------*/
		DMA4PAT = DMA_USER_DMA4PAT;
		
		DMA4CHbits.CHEN = DMA_USER_DMA4CH_CHEN;
	
#endif
}
/*----------------------------------------------------------------------------*/
/*
* @fn        vdg_DMA5_Set_Register(void)
* @brief        DMA5レジスタを初期化します
* @param
* @return
* @detail 
*/
/*----------------------------------------------------------------------------*/
void vdg_DMA5_Set_Register(void)
{
#if (PMD_DMA5MD == PMD_MODULE_ENABLE)
   	/*-----------------------------------------------------------------------*/
	/* DMA5CHレジスタ */
	/*-----------------------------------------------------------------------*/
		DMA5CH =( DMA_USER_DMA5CH_HALFEN << 1U ) |
				( DMA_USER_DMA5CH_MATEN << 2U ) |
				( DMA_USER_DMA5CH_INTOEN << 3U ) |
				( DMA_USER_DMA5CH_CHREQ << 4U ) |
				( DMA_USER_DMA5CH_SIZE << 6U ) |
				( DMA_USER_DMA5CH_FLWCON << 8U ) |
				( DMA_USER_DMA5CH_TRMODE << 10U ) |
				( DMA_USER_DMA5CH_DAMODE << 12U ) |
				( DMA_USER_DMA5CH_SAMODE << 14U ) |
				( DMA_USER_DMA5CH_RETEN << 16U ) |
				( DMA_USER_DMA5CH_RELOADS << 24U ) |
				( DMA_USER_DMA5CH_RELOADD << 25U ) |
				( DMA_USER_DMA5CH_RELOADC << 26U ) |
				( DMA_USER_DMA5CH_PCHAEN << 28U ) |
				( DMA_USER_DMA5CH_PPEN << 29U )  ;
		
		#ifdef DEF_BITNAME
			DMA5CHbits.CHEN = 0U;
			DMA5CHbits.HALFEN = DMA_USER_DMA5CH_HALFEN;
			DMA5CHbits.MATEN = DMA_USER_DMA5CH_MATEN;
			DMA5CHbits.INTOEN = DMA_USER_DMA5CH_INTOEN;
			DMA5CHbits.CHREQ = DMA_USER_DMA5CH_CHREQ;
			DMA5CHbits.SIZE = DMA_USER_DMA5CH_SIZE;
			DMA5CHbits.FLWCON =  DMA_USER_DMA5CH_FLWCON;
			DMA5CHbits.TRMODE = DMA_USER_DMA5CH_TRMODE;
			DMA5CHbits.DAMODE = DMA_USER_DMA5CH_DAMODE;
			DMA5CHbits.SAMODE = DMA_USER_DMA5CH_SAMODE;
			DMA5CHbits.RETEN = DMA_USER_DMA5CH_RETEN;
			DMA5CHbits.RELOADS = DMA_USER_DMA5CH_RELOADS;
			DMA5CHbits.RELOADD = DMA_USER_DMA5CH_RELOADD;
			DMA5CHbits.RELOADC = DMA_USER_DMA5CH_RELOADC;
			DMA5CHbits.PCHAEN = DMA_USER_DMA5CH_PCHAEN;
			DMA5CHbits.PPEN = DMA_USER_DMA5CH_PPEN;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* DMA5SELレジスタ */
	/*-----------------------------------------------------------------------*/
		DMA5SEL = DMA_USER_DMA5SEL;

	/*-----------------------------------------------------------------------*/
	/* DMA5STATレジスタ */
	/*-----------------------------------------------------------------------*/
		DMA5STAT = 0x00000000u;
		#ifdef DEF_BITNAME
			DMA5STATbits.DBUFWF = 0u;
			DMA5STATbits.MATCH = 0u;
			DMA5STATbits.OVERRUN = 0u;
			DMA5STATbits.HALF = 0u;
			DMA5STATbits.DONE = 0u;
			DMA5STATbits.DMAFLT = 0u;
			DMA5STATbits.DMAFLT2 = 0u;
			DMA5STATbits.DMAFLT3 = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* DMA5SRCレジスタ */
	/*-----------------------------------------------------------------------*/
		DMA5SRC = DMA_USER_DMA5SRC;

	/*-----------------------------------------------------------------------*/
	/* DMA5DSTレジスタ */
	/*-----------------------------------------------------------------------*/
		DMA5DST = DMA_USER_DMA5DST;

	/*-----------------------------------------------------------------------*/
	/* DMA5CNTレジスタ */
	/*-----------------------------------------------------------------------*/
		DMA5CNT = DMA_USER_DMA5CNT;

	/*-----------------------------------------------------------------------*/
	/* DMA5CLRレジスタ */
	/*-----------------------------------------------------------------------*/
		DMA5CLR = DMA_USER_DMA5CLR;

	/*-----------------------------------------------------------------------*/
	/* DMA5SETレジスタ */
	/*-----------------------------------------------------------------------*/
		DMA5SET = DMA_USER_DMA5SET;

	/*-----------------------------------------------------------------------*/
	/* DMA5INVレジスタ */
	/*-----------------------------------------------------------------------*/
		DMA5INV = DMA_USER_DMA5INV;

	/*-----------------------------------------------------------------------*/
	/* DMA5MSKレジスタ */
	/*-----------------------------------------------------------------------*/
		DMA5MSK = DMA_USER_DMA5MSK;

	/*-----------------------------------------------------------------------*/
	/* DMA5PATレジスタ */
	/*-----------------------------------------------------------------------*/
		DMA5PAT = DMA_USER_DMA5PAT;
		
		DMA5CHbits.CHEN = DMA_USER_DMA5CH_CHEN;
#endif
}
/*----------------------------------------------------------------------------*/
/*
* @fn        vdg_DMA_Set_Register(void) 
* @brief     全てのDMAレジスタを初期化します 
* @param
* @return
* @detail 
*/
/*----------------------------------------------------------------------------*/
void vdg_DMA_Set_Register(void)
{
    vdg_DMACOM_Set_Register();
#if (PMD_DMA0MD == PMD_MODULE_ENABLE)
    vdg_DMA0_Set_Register();
#endif
#if (PMD_DMA1MD == PMD_MODULE_ENABLE)
    vdg_DMA1_Set_Register();
#endif
#if (PMD_DMA2MD == PMD_MODULE_ENABLE)
    vdg_DMA2_Set_Register();
#endif
#if (PMD_DMA3MD == PMD_MODULE_ENABLE)
    vdg_DMA3_Set_Register();
#endif
#if (PMD_DMA4MD == PMD_MODULE_ENABLE)
    vdg_DMA4_Set_Register();
#endif
#if (PMD_DMA5MD == PMD_MODULE_ENABLE)
    vdg_DMA5_Set_Register();
#endif
}
