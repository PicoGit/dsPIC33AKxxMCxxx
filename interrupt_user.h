
#ifndef INTERRUPT_USER_H
#define	INTERRUPT_USER_H

/*----------------------------------------------------------------------------*/
/*インクルードファイル*/
/*----------------------------------------------------------------------------*/
#include "interrupt_driver.h"
/*----------------------------------------------------------------------------*/
/*定数定義*/
/*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*/
/*変数定義*/
/*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*/
/*プロトタイプ宣言*/
/*----------------------------------------------------------------------------*/





#define IRPT_USER_ENABLE_IVTCIE		IRPT_DISABLE	/* CPUFPU割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_CPUFPUIE	IRPT_DISABLE	/* CPUFPU割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_XRAMECCIE	IRPT_DISABLE	/* XRAMECC割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_YRAMECCIE	IRPT_DISABLE	/* YRAMECC割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_PBERRIE	IRPT_DISABLE	/* PBERR割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_NVMECCIE	IRPT_DISABLE	/* NVMECC割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_NVMIE		IRPT_DISABLE	/* NVM割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_NVMCRCIE	IRPT_DISABLE	/* NVMCRC割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_CLKFAILIE	IRPT_DISABLE	/* CLKFAILIE割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_CLKERRIE	IRPT_DISABLE	/* CLKERR割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_C1FAILIE	IRPT_DISABLE	/* C1FAIL割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_C1MONIE	IRPT_DISABLE	/* C1MON割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_C1RDYIE	IRPT_DISABLE	/* C1RDY割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_C1WARNIE	IRPT_DISABLE	/* C1WARN割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_C2FAILIE	IRPT_DISABLE	/* C2FAIL割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_C2WARMIE	IRPT_DISABLE	/* C2WARM割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_C2MONIE	IRPT_DISABLE	/* C2MON割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_C2RDYIE	IRPT_DISABLE	/* C2RDY割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_C2WARNIE	IRPT_DISABLE	/* C2WARN割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_C3FAILIE	IRPT_DISABLE	/* C3FAIL3割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_C3WARMIE	IRPT_DISABLE	/* C3WARM割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_C3MONIE	IRPT_DISABLE	/* C3MON割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_C3RDYIE	IRPT_DISABLE	/* C3RDY割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_C3WARNIE	IRPT_DISABLE	/* C3WARN割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_C4FAILIE	IRPT_DISABLE	/* C4FAIL割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_C4WARMIE	IRPT_DISABLE	/* C4WARM割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_C4MONIE	IRPT_DISABLE	/* C4MON割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_C4RDYIE	IRPT_DISABLE	/* C4RDY割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_C4WARNIE	IRPT_DISABLE	/* C4WARN割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_WDTIE		IRPT_DISABLE	/* WDT割り込み有効化レジスタ */


/*----------------------------------------------------------------------------*/
/* INT割り込み有効化 */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_ENABLE_INT0IE		IRPT_DISABLE	/* INT0割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_INT1IE		IRPT_DISABLE	/* INT1割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_INT2IE		IRPT_DISABLE	/* INT2割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_INT3IE		IRPT_DISABLE	/* INT3割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_INT4IE		IRPT_DISABLE	/* INT4割り込み有効化レジスタ */

#define IRPT_USER_ENABLE_PEVTAIE	IRPT_DISABLE	/* PEVTA割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_PEVTBIE	IRPT_DISABLE	/* PEVTB割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_PEVTCIE	IRPT_DISABLE	/* PEVTC割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_PEVTDIE	IRPT_DISABLE	/* PEVTD割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_PEVTEIE	IRPT_DISABLE	/* PEVTE割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_PEVTFIE	IRPT_DISABLE	/* PEVTF割り込み有効化レジスタ */

/*----------------------------------------------------------------------------*/
/* Timer割り込み有効化 */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_ENABLE_T1IE     IRPT_DISABLE	/* T1割り込み有効化レジスタ */

/*----------------------------------------------------------------------------*/
/* CN割り込み有効化 */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_ENABLE_CNAIE	IRPT_DISABLE	/* CNA割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_CNBIE	IRPT_DISABLE	/* CNB割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_CNCIE	IRPT_DISABLE	/* CNC割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_CNDIE	IRPT_DISABLE	/* CND割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_CNEIE	IRPT_DISABLE	/* CNE割り込み有効化レジスタ */

/*----------------------------------------------------------------------------*/
/* DMA割り込み有効化 */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_ENABLE_DMA0IE	IRPT_DISABLE	/* DMA0割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_DMA1IE	IRPT_DISABLE	/* DMA1割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_DMA2IE	IRPT_DISABLE	/* DMA2割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_DMA3IE	IRPT_DISABLE	/* DMA3割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_DMA4IE	IRPT_DISABLE	/* DMA4割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_DMA5IE	IRPT_DISABLE	/* DMA5割り込み有効化レジスタ */

/*----------------------------------------------------------------------------*/
/* CCT,CCP割り込み有効化 */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_ENABLE_CCP1IE	IRPT_DISABLE	/* CCP1割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_CCT1IE	IRPT_DISABLE	/* CCT1割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_CCP2IE	IRPT_DISABLE	/* CCP2割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_CCT2IE	IRPT_DISABLE	/* CCT2割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_CCP3IE	IRPT_DISABLE	/* CCP3割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_CCT3IE	IRPT_DISABLE	/* CCT3割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_CCP4IE	IRPT_DISABLE	/* CCP4割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_CCT4IE	IRPT_DISABLE	/* CCT4割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_CCP5IE	IRPT_DISABLE	/* CCP5割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_CCT5IE	IRPT_DISABLE	/* CCT5割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_CCP6IE	IRPT_DISABLE	/* CCP6割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_CCT6IE	IRPT_DISABLE	/* CCT6割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_CCP7IE	IRPT_DISABLE	/* CCP7割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_CCT7IE	IRPT_DISABLE	/* CCT7割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_CCP8IE	IRPT_DISABLE	/* CCP8割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_CCT8IE	IRPT_DISABLE	/* CCT8割り込み有効化レジスタ */

/*----------------------------------------------------------------------------*/
/* SPI割り込み有効化 */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_ENABLE_SPI1EIE	IRPT_DISABLE	/* SPI1E割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_SPI1RXIE	IRPT_DISABLE	/* SPI1RX割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_SPI1TXIE	IRPT_DISABLE	/* SPI1TX割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_SPI2EIE	IRPT_DISABLE	/* SPI2E割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_SPI2RXIE	IRPT_DISABLE	/* SPI2RX割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_SPI2TXIE	IRPT_DISABLE	/* SPI2TX割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_SPI3EIE	IRPT_DISABLE	/* SPI3E割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_SPI3RXIE	IRPT_DISABLE	/* SPI3RX割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_SPI3TXIE	IRPT_DISABLE	/* SPI3TX割り込み有効化レジスタ */

/*----------------------------------------------------------------------------*/
/* UART割り込み有効化 */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_ENABLE_U1EVTIE	IRPT_DISABLE	/* U1EVT割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_U1RXIE		IRPT_DISABLE	/* U1RX割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_U1TXIE		IRPT_DISABLE	/* U1TX割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_U1EIE		IRPT_DISABLE	/* U1E割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_U2EVTIE	IRPT_DISABLE	/* U2EVT割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_U2RXIE		IRPT_DISABLE	/* U2RX割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_U2TXIE		IRPT_DISABLE	/* U2TX割り込み有効化レジスタ*/
#define IRPT_USER_ENABLE_U2EIE		IRPT_DISABLE	/* U2E割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_U3EVTIE	IRPT_DISABLE	/* U3EVT割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_U3RXIE		IRPT_DISABLE	/* U3RX割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_U3TXIE		IRPT_DISABLE	/* U3TX割り込み有効化レジスタ*/
#define IRPT_USER_ENABLE_U3EIE		IRPT_DISABLE	/* U3E割り込み有効化レジスタ */
/*----------------------------------------------------------------------------*/
/* ECC割り込み有効化 */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_ENABLE_ECCSBEIE	IRPT_DISABLE	/* ECCSBE割り込み有効化レジスタ */


/*----------------------------------------------------------------------------*/
/* BIss割り込み有効化 */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_ENABLE_BISS1IE	IRPT_DISABLE	/* BISS1割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_BISS1EIE	IRPT_DISABLE	/* BISSE1割り込み有効化レジスタ */
		
/*----------------------------------------------------------------------------*/
/* I2C割り込み有効化 */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_ENABLE_I2C1IE	IRPT_DISABLE	/* I2C1割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_I2C1EIE	IRPT_DISABLE	/* I2C1E割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_I2C1RXIE	IRPT_DISABLE	/* I2C1RX割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_I2C1TXIE	IRPT_DISABLE	/* I2C1TX割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_I2C2IE	IRPT_DISABLE	/* I2C2割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_I2C2EIE	IRPT_DISABLE	/* I2C2E割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_I2C2RXIE	IRPT_DISABLE	/* I2C2RX割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_I2C2TXIE	IRPT_DISABLE	/* I2C2TX割り込み有効化レジスタ */
/*----------------------------------------------------------------------------*/
/* CAN割り込み有効化 */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_ENABLE_C1IE     IRPT_DISABLE	/* C1割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_C1RXIE	IRPT_DISABLE	/* C1RX割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_C1TXIE	IRPT_DISABLE	/* C1TX割り込み有効化レジスタ */

/*----------------------------------------------------------------------------*/
/* DMT割り込み有効化 */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_ENABLE_DMTIE	IRPT_DISABLE	/* DMT割り込み有効化レジスタ */

/*----------------------------------------------------------------------------*/
/* QEI割り込み有効化 */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_ENABLE_QEI1IE	IRPT_DISABLE	/* QEI1割り込み有効化レジスタ */

/*----------------------------------------------------------------------------*/
/* CRC割り込み有効化 */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_ENABLE_CRCIE	IRPT_DISABLE	/* CRC割り込み有効化レジスタ */

/*----------------------------------------------------------------------------*/
/* Debug割り込み有効化 */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_ENABLE_ICDIE	IRPT_DISABLE	/* ICD割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_JTAGIE	IRPT_DISABLE	/* JTAG割り込み有効化レジスタ */

/*----------------------------------------------------------------------------*/
/* PWM割り込み有効化 */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_ENABLE_PWM1IE	IRPT_DISABLE	/* PWM1割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_PWM2IE	IRPT_DISABLE	/* PWM2割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_PWM3IE	IRPT_DISABLE	/* PWM3割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_PWM4IE	IRPT_DISABLE	/* PWM4割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_PWM5IE	IRPT_DISABLE	/* PWM5割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_PWM6IE	IRPT_DISABLE	/* PWM6割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_PWM7IE	IRPT_DISABLE	/* PWM7割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_PWM8IE	IRPT_DISABLE	/* PWM8割り込み有効化レジスタ */

/*----------------------------------------------------------------------------*/
/* CMP割り込み有効化 */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_ENABLE_CMP1IE	IRPT_DISABLE	/* CMP1割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_CMP2IE	IRPT_DISABLE	/* CMP2割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_CMP3IE	IRPT_DISABLE	/* CMP3割り込み有効化レジスタ */

/*----------------------------------------------------------------------------*/
/* PTG割り込み有効化 */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_ENABLE_PTGWDTIE	IRPT_DISABLE	/* PTGWDT割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_PTG0IE		IRPT_DISABLE	/* PTG0割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_PTG1IE		IRPT_DISABLE	/* PTG1割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_PTG2IE		IRPT_DISABLE	/* PTG2割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_PTG3IE		IRPT_DISABLE	/* PTG3割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_PTG4IE		IRPT_DISABLE	/* PTG4割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_PTG5IE		IRPT_DISABLE	/* PTG5割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_PTG6IE		IRPT_DISABLE	/* PTG6割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_PTG7IE		IRPT_DISABLE	/* PTG7割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_PTGSTEPIE	IRPT_DISABLE	/* PTGSTEP割り込み有効化レジスタ */

/*----------------------------------------------------------------------------*/
/* SENT割り込み有効化 */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_ENABLE_SENT1IE	IRPT_DISABLE	/* SENT1割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_SENT1EIE	IRPT_DISABLE	/* SENT1E割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_SENT2IE	IRPT_DISABLE	/* SENT2割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_SENT2EIE	IRPT_DISABLE	/* SENT2E割り込み有効化レジスタ */

/*----------------------------------------------------------------------------*/
/* ADC割り込み有効化 */
/*----------------------------------------------------------------------------*/
#define	IRPT_USER_ENABLE_AD1CH0IE	IRPT_DISABLE	/* AD1CH0IE割り込み有効化レジスタ */
#define	IRPT_USER_ENABLE_AD1CMP0IE	IRPT_DISABLE	/* AD1CMP0IE割り込み有効化レジスタ */
#define	IRPT_USER_ENABLE_AD1CH1IE	IRPT_DISABLE	/* AD1CH1IE割り込み有効化レジスタ */
#define	IRPT_USER_ENABLE_AD1CMP1IE	IRPT_DISABLE	/* AD1CMP1IE割り込み有効化レジスタ */
#define	IRPT_USER_ENABLE_AD1CH2IE	IRPT_DISABLE	/* AD1CH2IE割り込み有効化レジスタ */
#define	IRPT_USER_ENABLE_AD1CMP2IE	IRPT_DISABLE	/* AD1CMP2IE割り込み有効化レジスタ */
#define	IRPT_USER_ENABLE_AD1CH3IE	IRPT_DISABLE	/* AD1CH3IE割り込み有効化レジスタ */
#define	IRPT_USER_ENABLE_AD1CMP3IE	IRPT_DISABLE	/* AD1CMP3IE割り込み有効化レジスタ */
#define	IRPT_USER_ENABLE_AD1CH4IE	IRPT_DISABLE	/* AD1CH4IE割り込み有効化レジスタ */
#define	IRPT_USER_ENABLE_AD1CMP4IE	IRPT_DISABLE	/* AD1CMP4IE割り込み有効化レジスタ */
#define	IRPT_USER_ENABLE_AD1CH5IE	IRPT_DISABLE	/* AD1CH5IE割り込み有効化レジスタ */
#define	IRPT_USER_ENABLE_AD1CMP5IE	IRPT_DISABLE	/* AD1CMP5IE割り込み有効化レジスタ */
#define	IRPT_USER_ENABLE_AD1CH6IE	IRPT_DISABLE	/* AD1CH6IE割り込み有効化レジスタ */
#define	IRPT_USER_ENABLE_AD1CMP6IE	IRPT_DISABLE	/* AD1CMP6IE割り込み有効化レジスタ */
#define	IRPT_USER_ENABLE_AD1CH7IE	IRPT_DISABLE	/* AD1CH7IE割り込み有効化レジスタ */
#define	IRPT_USER_ENABLE_AD1CMP7IE	IRPT_DISABLE	/* AD1CMP7IE割り込み有効化レジスタ */
#define	IRPT_USER_ENABLE_AD1CH8IE	IRPT_DISABLE	/* AD1CH8IE割り込み有効化レジスタ */
#define	IRPT_USER_ENABLE_AD1CMP8IE	IRPT_DISABLE	/* AD1CMP8IE割り込み有効化レジスタ */
#define	IRPT_USER_ENABLE_AD1CH9IE	IRPT_DISABLE	/* AD1CH9IE割り込み有効化レジスタ */
#define	IRPT_USER_ENABLE_AD1CMP9IE	IRPT_DISABLE	/* AD1CMP9IE割り込み有効化レジスタ */
#define	IRPT_USER_ENABLE_AD1CH10IE	IRPT_DISABLE	/* AD1CH10IE割り込み有効化レジスタ */
#define	IRPT_USER_ENABLE_AD1CMP10IE	IRPT_DISABLE	/* AD1CMP10IE割り込み有効化レジスタ */
#define	IRPT_USER_ENABLE_AD1CH11IE	IRPT_DISABLE	/* AD1CH11IE割り込み有効化レジスタ */
#define	IRPT_USER_ENABLE_AD1CMP11IE	IRPT_DISABLE	/* AD1CMP11IE割り込み有効化レジスタ */
#define	IRPT_USER_ENABLE_AD1CH12IE	IRPT_DISABLE	/* AD1CH12IE割り込み有効化レジスタ */
#define	IRPT_USER_ENABLE_AD1CMP12IE	IRPT_DISABLE	/* AD1CMP12IE割り込み有効化レジスタ */
#define	IRPT_USER_ENABLE_AD1CH13IE	IRPT_DISABLE	/* AD1CH13IE割り込み有効化レジスタ */
#define	IRPT_USER_ENABLE_AD1CMP13IE	IRPT_DISABLE	/* AD1CMP13IE割り込み有効化レジスタ */
#define	IRPT_USER_ENABLE_AD1CH14IE	IRPT_DISABLE	/* AD1CH14IE割り込み有効化レジスタ */
#define	IRPT_USER_ENABLE_AD1CMP14IE	IRPT_DISABLE	/* AD1CMP14IE割り込み有効化レジスタ */
#define	IRPT_USER_ENABLE_AD1CH15IE	IRPT_DISABLE	/* AD1CH15IE割り込み有効化レジスタ */
#define	IRPT_USER_ENABLE_AD1CMP15IE	IRPT_DISABLE	/* AD1CMP15IE割り込み有効化レジスタ */
#define	IRPT_USER_ENABLE_AD1CH16IE	IRPT_DISABLE	/* AD1CH16IE割り込み有効化レジスタ */
#define	IRPT_USER_ENABLE_AD1CMP16IE	IRPT_DISABLE	/* AD1CMP16IE割り込み有効化レジスタ */
#define	IRPT_USER_ENABLE_AD1CH17IE	IRPT_DISABLE	/* AD1CH17IE割り込み有効化レジスタ */
#define	IRPT_USER_ENABLE_AD1CMP17IE	IRPT_DISABLE	/* AD1CMP17IE割り込み有効化レジスタ */
#define	IRPT_USER_ENABLE_AD1CH18IE	IRPT_DISABLE	/* AD1CH18IE割り込み有効化レジスタ */
#define	IRPT_USER_ENABLE_AD1CMP18IE	IRPT_DISABLE	/* AD1CMP18IE割り込み有効化レジスタ */
#define	IRPT_USER_ENABLE_AD1CH19IE	IRPT_DISABLE	/* AD1CH19IE割り込み有効化レジスタ */
#define	IRPT_USER_ENABLE_AD1CMP19IE	IRPT_DISABLE	/* AD1CMP19IE割り込み有効化レジスタ */

#define	IRPT_USER_ENABLE_AD2CH0IE	IRPT_DISABLE	/* AD2CH0IE割り込み有効化レジスタ */
#define	IRPT_USER_ENABLE_AD2CMP0IE	IRPT_DISABLE	/* AD2CMP0IE割り込み有効化レジスタ */
#define	IRPT_USER_ENABLE_AD2CH1IE	IRPT_DISABLE	/* AD2CH1IE割り込み有効化レジスタ */
#define	IRPT_USER_ENABLE_AD2CMP1IE	IRPT_DISABLE	/* AD2CMP1IE割り込み有効化レジスタ */
#define	IRPT_USER_ENABLE_AD2CH2IE	IRPT_DISABLE	/* AD2CH2IE割り込み有効化レジスタ */
#define	IRPT_USER_ENABLE_AD2CMP2IE	IRPT_DISABLE	/* AD2CMP2IE割り込み有効化レジスタ */
#define	IRPT_USER_ENABLE_AD2CH3IE	IRPT_DISABLE	/* AD2CH3IE割り込み有効化レジスタ */
#define	IRPT_USER_ENABLE_AD2CMP3IE	IRPT_DISABLE	/* AD2CMP3IE割り込み有効化レジスタ */
#define	IRPT_USER_ENABLE_AD2CH4IE	IRPT_DISABLE	/* AD2CH4IE割り込み有効化レジスタ */
#define	IRPT_USER_ENABLE_AD2CMP4IE	IRPT_DISABLE	/* AD2CMP4IE割り込み有効化レジスタ */
#define	IRPT_USER_ENABLE_AD2CH5IE	IRPT_DISABLE	/* AD2CH5IE割り込み有効化レジスタ */
#define	IRPT_USER_ENABLE_AD2CMP5IE	IRPT_DISABLE	/* AD2CMP5IE割り込み有効化レジスタ */
#define	IRPT_USER_ENABLE_AD2CH6IE	IRPT_DISABLE	/* AD2CH6IE割り込み有効化レジスタ */
#define	IRPT_USER_ENABLE_AD2CMP6IE	IRPT_DISABLE	/* AD2CMP6IE割り込み有効化レジスタ */
#define	IRPT_USER_ENABLE_AD2CH7IE	IRPT_DISABLE	/* AD2CH7IE割り込み有効化レジスタ */
#define	IRPT_USER_ENABLE_AD2CMP7IE	IRPT_DISABLE	/* AD2CMP7IE割り込み有効化レジスタ */
#define	IRPT_USER_ENABLE_AD2CH8IE	IRPT_DISABLE	/* AD2CH8IE割り込み有効化レジスタ */
#define	IRPT_USER_ENABLE_AD2CMP8IE	IRPT_DISABLE	/* AD2CMP8IE割り込み有効化レジスタ */
#define	IRPT_USER_ENABLE_AD2CH9IE	IRPT_DISABLE	/* AD2CH9IE割り込み有効化レジスタ */
#define	IRPT_USER_ENABLE_AD2CMP9IE	IRPT_DISABLE	/* AD2CMP9IE割り込み有効化レジスタ */
#define	IRPT_USER_ENABLE_AD2CH10IE	IRPT_DISABLE	/* AD2CH10IE割り込み有効化レジスタ */
#define	IRPT_USER_ENABLE_AD2CMP10IE	IRPT_DISABLE	/* AD2CMP10IE割り込み有効化レジスタ */
#define	IRPT_USER_ENABLE_AD2CH11IE	IRPT_DISABLE	/* AD2CH11IE割り込み有効化レジスタ */
#define	IRPT_USER_ENABLE_AD2CMP11IE	IRPT_DISABLE	/* AD2CMP11IE割り込み有効化レジスタ */
#define	IRPT_USER_ENABLE_AD2CH12IE	IRPT_DISABLE	/* AD2CH12IE割り込み有効化レジスタ */
#define	IRPT_USER_ENABLE_AD2CMP12IE	IRPT_DISABLE	/* AD2CMP12IE割り込み有効化レジスタ */
#define	IRPT_USER_ENABLE_AD2CH13IE	IRPT_DISABLE	/* AD2CH13IE割り込み有効化レジスタ */
#define	IRPT_USER_ENABLE_AD2CMP13IE	IRPT_DISABLE	/* AD2CMP13IE割り込み有効化レジスタ */
#define	IRPT_USER_ENABLE_AD2CH14IE	IRPT_DISABLE	/* AD2CH14IE割り込み有効化レジスタ */
#define	IRPT_USER_ENABLE_AD2CMP14IE	IRPT_DISABLE	/* AD2CMP14IE割り込み有効化レジスタ */
#define	IRPT_USER_ENABLE_AD2CH15IE	IRPT_DISABLE	/* AD2CH15IE割り込み有効化レジスタ */
#define	IRPT_USER_ENABLE_AD2CMP15IE	IRPT_DISABLE	/* AD2CMP15IE割り込み有効化レジスタ */
#define	IRPT_USER_ENABLE_AD2CH16IE	IRPT_DISABLE	/* AD2CH16IE割り込み有効化レジスタ */
#define	IRPT_USER_ENABLE_AD2CMP16IE	IRPT_DISABLE	/* AD2CMP16IE割り込み有効化レジスタ */
#define	IRPT_USER_ENABLE_AD2CH17IE	IRPT_DISABLE	/* AD2CH17IE割り込み有効化レジスタ */
#define	IRPT_USER_ENABLE_AD2CMP17IE	IRPT_DISABLE	/* AD2CMP17IE割り込み有効化レジスタ */
#define	IRPT_USER_ENABLE_AD2CH18IE	IRPT_DISABLE	/* AD2CH18IE割り込み有効化レジスタ */
#define	IRPT_USER_ENABLE_AD2CMP18IE	IRPT_DISABLE	/* AD2CMP18IE割り込み有効化レジスタ */
#define	IRPT_USER_ENABLE_AD2CH19IE	IRPT_DISABLE	/* AD2CH19IE割り込み有効化レジスタ */
#define	IRPT_USER_ENABLE_AD2CMP19IE	IRPT_DISABLE	/* AD2CMP19IE割り込み有効化レジスタ */
/*----------------------------------------------------------------------------*/
/* CLC割り込み有効化 */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_ENABLE_CLC1PIE	IRPT_DISABLE	/* CLC1P割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_CLC2PIE	IRPT_DISABLE	/* CLC2P割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_CLC3PIE	IRPT_DISABLE	/* CLC3P割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_CLC4PIE	IRPT_DISABLE	/* CLC4P割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_CLC1NIE	IRPT_DISABLE	/* CLC1N割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_CLC2NIE	IRPT_DISABLE	/* CLC2N割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_CLC3NIE	IRPT_DISABLE	/* CLC3N割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_CLC4NIE	IRPT_DISABLE	/* CLC4N割り込み有効化レジスタ */

/*----------------------------------------------------------------------------*/
/* IOMON有効化 */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_ENABLE_IOM1IE		IRPT_DISABLE	/* IOM1IE割り込み有効化レジスタ*/
#define IRPT_USER_ENABLE_IOM2IE		IRPT_DISABLE	/* IOM2IE割り込み有効化レジスタ*/
#define IRPT_USER_ENABLE_IOM3IE		IRPT_DISABLE	/* IOM3IE割り込み有効化レジスタ*/
#define IRPT_USER_ENABLE_IOM4IE		IRPT_DISABLE	/* IOM4IE割り込み有効化レジスタ*/
/*----------------------------------------------------------------------------*/
/* PEVT割り込み有効化 */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_ENABLE_PEVTAIE	IRPT_DISABLE	/* PEVTA割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_PEVTBIE	IRPT_DISABLE	/* PEVTB割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_PEVTCIE	IRPT_DISABLE	/* PEVTC割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_PEVTDIE	IRPT_DISABLE	/* PEVTD割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_PEVTEIE	IRPT_DISABLE	/* PEVTE割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_PEVTFIE	IRPT_DISABLE	/* PEVTF割り込み有効化レジスタ */





#define IRPT_USER_PRIORITY_IVTCIP		IRPT_PRIORITY_0	/* CPUFPU割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_CPUFPUIP		IRPT_PRIORITY_0	/* CPUFPU割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_XRAMECCIP	IRPT_PRIORITY_0	/* XRAMECC割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_YRAMECCIP	IRPT_PRIORITY_0	/* YRAMECC割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_PBERRIP		IRPT_PRIORITY_0	/* PBERR割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_NVMECCIP		IRPT_PRIORITY_0	/* NVMECC割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_NVMIP		IRPT_PRIORITY_0	/* NVM割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_NVMCRCIP		IRPT_PRIORITY_0	/* NVMCRC割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_CLKFAILIP	IRPT_PRIORITY_0	/* CLKFAILIP割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_CLKERRIP		IRPT_PRIORITY_0	/* CLKERR割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_C1FAILIP		IRPT_PRIORITY_0	/* C1FAIL割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_C1MONIP		IRPT_PRIORITY_0	/* C1MON割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_C1RDYIP		IRPT_PRIORITY_0	/* C1RDY割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_C1WARNIP		IRPT_PRIORITY_0	/* C1WARN割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_C2FAILIP		IRPT_PRIORITY_0	/* C2FAIL割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_C2WARMIP		IRPT_PRIORITY_0	/* C2WARM割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_C2MONIP		IRPT_PRIORITY_0	/* C2MON割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_C2RDYIP		IRPT_PRIORITY_0	/* C2RDY割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_C2WARNIP		IRPT_PRIORITY_0	/* C2WARN割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_C3FAILIP		IRPT_PRIORITY_0	/* C3FAIL3割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_C3WARMIP		IRPT_PRIORITY_0	/* C3WARM割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_C3MONIP		IRPT_PRIORITY_0	/* C3MON割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_C3RDYIP		IRPT_PRIORITY_0	/* C3RDY割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_C3WARNIP		IRPT_PRIORITY_0	/* C3WARN割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_C4FAILIP		IRPT_PRIORITY_0	/* C4FAIL割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_C4WARMIP		IRPT_PRIORITY_0	/* C4WARM割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_C4MONIP		IRPT_PRIORITY_0	/* C4MON割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_C4RDYIP		IRPT_PRIORITY_0	/* C4RDY割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_C4WARNIP		IRPT_PRIORITY_0	/* C4WARN割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_WDTIP		IRPT_PRIORITY_0	/* WDT割り込み優先度レジスタ */


/*----------------------------------------------------------------------------*/
/* INT割り込み優先度 */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_PRIORITY_INT0IP	IRPT_PRIORITY_0	/* INT0割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_INT1IP	IRPT_PRIORITY_0	/* INT1割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_INT2IP	IRPT_PRIORITY_0	/* INT2割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_INT3IP	IRPT_PRIORITY_0	/* INT3割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_INT4IP	IRPT_PRIORITY_0	/* INT4割り込み優先度レジスタ */

#define IRPT_USER_PRIORITY_PEVTAIP	IRPT_PRIORITY_0	/* PEVTA割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_PEVTBIP	IRPT_PRIORITY_0	/* PEVTB割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_PEVTCIP	IRPT_PRIORITY_0	/* PEVTC割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_PEVTDIP	IRPT_PRIORITY_0	/* PEVTD割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_PEVTEIP	IRPT_PRIORITY_0	/* PEVTE割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_PEVTFIP	IRPT_PRIORITY_0	/* PEVTF割り込み優先度レジスタ */

/*----------------------------------------------------------------------------*/
/* Timer割り込み優先度 */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_PRIORITY_T1IP     IRPT_PRIORITY_2	/* T1割り込み優先度レジスタ */

/*----------------------------------------------------------------------------*/
/* CN割り込み優先度 */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_PRIORITY_CNAIP	IRPT_PRIORITY_1	/* CNA割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_CNBIP	IRPT_PRIORITY_1	/* CNB割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_CNCIP	IRPT_PRIORITY_0	/* CNC割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_CNDIP	IRPT_PRIORITY_0	/* CND割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_CNEIP	IRPT_PRIORITY_0	/* CNE割り込み優先度レジスタ */

/*----------------------------------------------------------------------------*/
/* DMA割り込み優先度 */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_PRIORITY_DMA0IP	IRPT_PRIORITY_0	/* DMA0割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_DMA1IP	IRPT_PRIORITY_0	/* DMA1割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_DMA2IP	IRPT_PRIORITY_0	/* DMA2割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_DMA3IP	IRPT_PRIORITY_0	/* DMA3割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_DMA4IP	IRPT_PRIORITY_0	/* DMA4割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_DMA5IP	IRPT_PRIORITY_0	/* DMA5割り込み優先度レジスタ */

/*----------------------------------------------------------------------------*/
/* CCT,CCP割り込み優先度 */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_PRIORITY_CCP1IP	IRPT_PRIORITY_0	/* CCP1割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_CCT1IP	IRPT_PRIORITY_0	/* CCT1割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_CCP2IP	IRPT_PRIORITY_0	/* CCP2割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_CCT2IP	IRPT_PRIORITY_0	/* CCT2割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_CCP3IP	IRPT_PRIORITY_0	/* CCP3割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_CCT3IP	IRPT_PRIORITY_0	/* CCT3割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_CCP4IP	IRPT_PRIORITY_0	/* CCP4割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_CCT4IP	IRPT_PRIORITY_0	/* CCT4割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_CCP5IP	IRPT_PRIORITY_0	/* CCP5割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_CCT5IP	IRPT_PRIORITY_0	/* CCT5割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_CCP6IP	IRPT_PRIORITY_0	/* CCP6割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_CCT6IP	IRPT_PRIORITY_0	/* CCT6割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_CCP7IP	IRPT_PRIORITY_0	/* CCP7割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_CCT7IP	IRPT_PRIORITY_0	/* CCT7割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_CCP8IP	IRPT_PRIORITY_0	/* CCP8割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_CCT8IP	IRPT_PRIORITY_0	/* CCT8割り込み優先度レジスタ */

/*----------------------------------------------------------------------------*/
/* SPI割り込み優先度 */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_PRIORITY_SPI1EIP	IRPT_PRIORITY_0	/* SPI1E割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_SPI1RXIP	IRPT_PRIORITY_0	/* SPI1RX割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_SPI1TXIP	IRPT_PRIORITY_0	/* SPI1TX割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_SPI2EIP	IRPT_PRIORITY_0	/* SPI2E割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_SPI2RXIP	IRPT_PRIORITY_0	/* SPI2RX割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_SPI2TXIP	IRPT_PRIORITY_0	/* SPI2TX割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_SPI3EIP	IRPT_PRIORITY_0	/* SPI3E割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_SPI3RXIP	IRPT_PRIORITY_0	/* SPI3RX割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_SPI3TXIP	IRPT_PRIORITY_0	/* SPI3TX割り込み優先度レジスタ */

/*----------------------------------------------------------------------------*/
/* UART割り込み優先度 */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_PRIORITY_U1EVTIP	IRPT_PRIORITY_0	/* U1EVT割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_U1RXIP	IRPT_PRIORITY_0	/* U1RX割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_U1TXIP	IRPT_PRIORITY_0	/* U1TX割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_U1EIP	IRPT_PRIORITY_0	/* U1E割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_U2EVTIP	IRPT_PRIORITY_0	/* U2EVT割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_U2RXIP	IRPT_PRIORITY_0	/* U2RX割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_U2TXIP	IRPT_PRIORITY_0	/* U2TX割り込み優先度レジスタ*/
#define IRPT_USER_PRIORITY_U2EIP	IRPT_PRIORITY_0	/* U2E割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_U3EVTIP	IRPT_PRIORITY_0	/* U3EVT割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_U3RXIP	IRPT_PRIORITY_0	/* U3RX割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_U3TXIP	IRPT_PRIORITY_0	/* U3TX割り込み優先度レジスタ*/
#define IRPT_USER_PRIORITY_U3EIP	IRPT_PRIORITY_0	/* U3E割り込み優先度レジスタ */
/*----------------------------------------------------------------------------*/
/* ECC割り込み優先度 */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_PRIORITY_ECCSBEIP	IRPT_PRIORITY_0	/* ECCSBE割り込み優先度レジスタ */

/*----------------------------------------------------------------------------*/
/* NVM割り込み優先度 */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_PRIORITY_NVMIP	IRPT_PRIORITY_0	/* NVM割り込み優先度レジスタ */

/*----------------------------------------------------------------------------*/
/* BIss割り込み優先度 */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_PRIORITY_BISS1IP	IRPT_PRIORITY_0	/* BISS1割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_BISSE1IP	IRPT_PRIORITY_0	/* BISSE1割り込み優先度レジスタ */
		
/*----------------------------------------------------------------------------*/
/* I2C割り込み優先度 */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_PRIORITY_I2C1IP	IRPT_PRIORITY_0	/* I2C1割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_I2C1EIP	IRPT_PRIORITY_0	/* I2C1E割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_I2C1RXIP	IRPT_PRIORITY_0	/* I2C1RX割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_I2C1TXIP	IRPT_PRIORITY_0	/* I2C1TX割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_I2C2IP	IRPT_PRIORITY_0	/* I2C2割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_I2C2EIP	IRPT_PRIORITY_0	/* I2C2E割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_I2C2RXIP	IRPT_PRIORITY_0	/* I2C2RX割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_I2C2TXIP	IRPT_PRIORITY_0	/* I2C2TX割り込み優先度レジスタ */
/*----------------------------------------------------------------------------*/
/* CAN割り込み優先度 */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_PRIORITY_C1IP     IRPT_PRIORITY_0	/* C1割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_C1RXIP	IRPT_PRIORITY_0	/* C1RX割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_C1TXIP	IRPT_PRIORITY_0	/* C1TX割り込み優先度レジスタ */

/*----------------------------------------------------------------------------*/
/* DMT割り込み優先度 */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_PRIORITY_DMTIP	IRPT_PRIORITY_0	/* DMT割り込み優先度レジスタ */

/*----------------------------------------------------------------------------*/
/* QEI割り込み優先度 */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_PRIORITY_QEI1IP	IRPT_PRIORITY_0	/* QEI1割り込み優先度レジスタ */

/*----------------------------------------------------------------------------*/
/* CRC割り込み優先度 */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_PRIORITY_CRCIP	IRPT_PRIORITY_0	/* CRC割り込み優先度レジスタ */

/*----------------------------------------------------------------------------*/
/* Debug割り込み優先度 */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_PRIORITY_ICDIP	IRPT_PRIORITY_0	/* ICD割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_JTAGIP	IRPT_PRIORITY_0	/* JTAG割り込み優先度レジスタ */

/*----------------------------------------------------------------------------*/
/* PWM割り込み優先度 */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_PRIORITY_PWM1IP	IRPT_PRIORITY_0	/* PWM1割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_PWM2IP	IRPT_PRIORITY_0	/* PWM2割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_PWM3IP	IRPT_PRIORITY_0	/* PWM3割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_PWM4IP	IRPT_PRIORITY_0	/* PWM4割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_PWM5IP	IRPT_PRIORITY_0	/* PWM5割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_PWM6IP	IRPT_PRIORITY_0	/* PWM6割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_PWM7IP	IRPT_PRIORITY_0	/* PWM7割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_PWM8IP	IRPT_PRIORITY_0	/* PWM8割り込み優先度レジスタ */

/*----------------------------------------------------------------------------*/
/* CMP割り込み優先度 */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_PRIORITY_CMP1IP	IRPT_PRIORITY_0	/* CMP1割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_CMP2IP	IRPT_PRIORITY_0	/* CMP2割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_CMP3IP	IRPT_PRIORITY_0	/* CMP3割り込み優先度レジスタ */

/*----------------------------------------------------------------------------*/
/* PTG割り込み優先度 */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_PRIORITY_PTGWDTIP	IRPT_PRIORITY_0	/* PTGWDT割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_PTG0IP	IRPT_PRIORITY_0	/* PTG0割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_PTG1IP	IRPT_PRIORITY_0	/* PTG1割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_PTG2IP	IRPT_PRIORITY_0	/* PTG2割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_PTG3IP	IRPT_PRIORITY_0	/* PTG3割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_PTG4IP	IRPT_PRIORITY_0	/* PTG4割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_PTG5IP	IRPT_PRIORITY_0	/* PTG5割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_PTG6IP	IRPT_PRIORITY_0	/* PTG6割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_PTG7IP	IRPT_PRIORITY_0	/* PTG7割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_PTGSTPIP	IRPT_PRIORITY_0	/* PTGSTEP割り込み優先度レジスタ */

/*----------------------------------------------------------------------------*/
/* SENT割り込み優先度 */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_PRIORITY_SENT1IP	IRPT_PRIORITY_0	/* SENT1割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_SENT1EIP	IRPT_PRIORITY_0	/* SENT1E割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_SENT2IP	IRPT_PRIORITY_0	/* SENT2割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_SENT2EIP	IRPT_PRIORITY_0	/* SENT2E割り込み優先度レジスタ */

/*----------------------------------------------------------------------------*/
/* ADC割り込み優先度 */
/*----------------------------------------------------------------------------*/
#define	IRPT_USER_PRIORITY_AD1CH0IP		IRPT_PRIORITY_0	/* AD1CH0IP割り込み優先度レジスタ */
#define	IRPT_USER_PRIORITY_AD1CMP0IP	IRPT_PRIORITY_0	/* AD1CMP0IP割り込み優先度レジスタ */
#define	IRPT_USER_PRIORITY_AD1CH1IP		IRPT_PRIORITY_0	/* AD1CH1IP割り込み優先度レジスタ */
#define	IRPT_USER_PRIORITY_AD1CMP1IP	IRPT_PRIORITY_0	/* AD1CMP1IP割り込み優先度レジスタ */
#define	IRPT_USER_PRIORITY_AD1CH2IP		IRPT_PRIORITY_0	/* AD1CH2IP割り込み優先度レジスタ */
#define	IRPT_USER_PRIORITY_AD1CMP2IP	IRPT_PRIORITY_0	/* AD1CMP2IP割り込み優先度レジスタ */
#define	IRPT_USER_PRIORITY_AD1CH3IP		IRPT_PRIORITY_0	/* AD1CH3IP割り込み優先度レジスタ */
#define	IRPT_USER_PRIORITY_AD1CMP3IP	IRPT_PRIORITY_0	/* AD1CMP3IP割り込み優先度レジスタ */
#define	IRPT_USER_PRIORITY_AD1CH4IP		IRPT_PRIORITY_0	/* AD1CH4IP割り込み優先度レジスタ */
#define	IRPT_USER_PRIORITY_AD1CMP4IP	IRPT_PRIORITY_0	/* AD1CMP4IP割り込み優先度レジスタ */
#define	IRPT_USER_PRIORITY_AD1CH5IP		IRPT_PRIORITY_0	/* AD1CH5IP割り込み優先度レジスタ */
#define	IRPT_USER_PRIORITY_AD1CMP5IP	IRPT_PRIORITY_0	/* AD1CMP5IP割り込み優先度レジスタ */
#define	IRPT_USER_PRIORITY_AD1CH6IP		IRPT_PRIORITY_0	/* AD1CH6IP割り込み優先度レジスタ */
#define	IRPT_USER_PRIORITY_AD1CMP6IP	IRPT_PRIORITY_0	/* AD1CMP6IP割り込み優先度レジスタ */
#define	IRPT_USER_PRIORITY_AD1CH7IP		IRPT_PRIORITY_0	/* AD1CH7IP割り込み優先度レジスタ */
#define	IRPT_USER_PRIORITY_AD1CMP7IP	IRPT_PRIORITY_0	/* AD1CMP7IP割り込み優先度レジスタ */
#define	IRPT_USER_PRIORITY_AD1CH8IP		IRPT_PRIORITY_0	/* AD1CH8IP割り込み優先度レジスタ */
#define	IRPT_USER_PRIORITY_AD1CMP8IP	IRPT_PRIORITY_0	/* AD1CMP8IP割り込み優先度レジスタ */
#define	IRPT_USER_PRIORITY_AD1CH9IP		IRPT_PRIORITY_0	/* AD1CH9IP割り込み優先度レジスタ */
#define	IRPT_USER_PRIORITY_AD1CMP9IP	IRPT_PRIORITY_0	/* AD1CMP9IP割り込み優先度レジスタ */
#define	IRPT_USER_PRIORITY_AD1CH10IP	IRPT_PRIORITY_0	/* AD1CH10IP割り込み優先度レジスタ */
#define	IRPT_USER_PRIORITY_AD1CMP10IP	IRPT_PRIORITY_0	/* AD1CMP10IP割り込み優先度レジスタ */
#define	IRPT_USER_PRIORITY_AD1CH11IP	IRPT_PRIORITY_0	/* AD1CH11IP割り込み優先度レジスタ */
#define	IRPT_USER_PRIORITY_AD1CMP11IP	IRPT_PRIORITY_0	/* AD1CMP11IP割り込み優先度レジスタ */
#define	IRPT_USER_PRIORITY_AD1CH12IP	IRPT_PRIORITY_0	/* AD1CH12IP割り込み優先度レジスタ */
#define	IRPT_USER_PRIORITY_AD1CMP12IP	IRPT_PRIORITY_0	/* AD1CMP12IP割り込み優先度レジスタ */
#define	IRPT_USER_PRIORITY_AD1CH13IP	IRPT_PRIORITY_0	/* AD1CH13IP割り込み優先度レジスタ */
#define	IRPT_USER_PRIORITY_AD1CMP13IP	IRPT_PRIORITY_0	/* AD1CMP13IP割り込み優先度レジスタ */
#define	IRPT_USER_PRIORITY_AD1CH14IP	IRPT_PRIORITY_0	/* AD1CH14IP割り込み優先度レジスタ */
#define	IRPT_USER_PRIORITY_AD1CMP14IP	IRPT_PRIORITY_0	/* AD1CMP14IP割り込み優先度レジスタ */
#define	IRPT_USER_PRIORITY_AD1CH15IP	IRPT_PRIORITY_0	/* AD1CH15IP割り込み優先度レジスタ */
#define	IRPT_USER_PRIORITY_AD1CMP15IP	IRPT_PRIORITY_0	/* AD1CMP15IP割り込み優先度レジスタ */
#define	IRPT_USER_PRIORITY_AD1CH16IP	IRPT_PRIORITY_0	/* AD1CH16IP割り込み優先度レジスタ */
#define	IRPT_USER_PRIORITY_AD1CMP16IP	IRPT_PRIORITY_0	/* AD1CMP16IP割り込み優先度レジスタ */
#define	IRPT_USER_PRIORITY_AD1CH17IP	IRPT_PRIORITY_0	/* AD1CH17IP割り込み優先度レジスタ */
#define	IRPT_USER_PRIORITY_AD1CMP17IP	IRPT_PRIORITY_0	/* AD1CMP17IP割り込み優先度レジスタ */
#define	IRPT_USER_PRIORITY_AD1CH18IP	IRPT_PRIORITY_0	/* AD1CH18IP割り込み優先度レジスタ */
#define	IRPT_USER_PRIORITY_AD1CMP18IP	IRPT_PRIORITY_0	/* AD1CMP18IP割り込み優先度レジスタ */
#define	IRPT_USER_PRIORITY_AD1CH19IP	IRPT_PRIORITY_0	/* AD1CH19IP割り込み優先度レジスタ */
#define	IRPT_USER_PRIORITY_AD1CMP19IP	IRPT_PRIORITY_0	/* AD1CMP19IP割り込み優先度レジスタ */

#define	IRPT_USER_PRIORITY_AD2CH0IP		IRPT_PRIORITY_0	/* AD2CH0IP割り込み優先度レジスタ */
#define	IRPT_USER_PRIORITY_AD2CMP0IP	IRPT_PRIORITY_0	/* AD2CMP0IP割り込み優先度レジスタ */
#define	IRPT_USER_PRIORITY_AD2CH1IP		IRPT_PRIORITY_0	/* AD2CH1IP割り込み優先度レジスタ */
#define	IRPT_USER_PRIORITY_AD2CMP1IP	IRPT_PRIORITY_0	/* AD2CMP1IP割り込み優先度レジスタ */
#define	IRPT_USER_PRIORITY_AD2CH2IP		IRPT_PRIORITY_0	/* AD2CH2IP割り込み優先度レジスタ */
#define	IRPT_USER_PRIORITY_AD2CMP2IP	IRPT_PRIORITY_0	/* AD2CMP2IP割り込み優先度レジスタ */
#define	IRPT_USER_PRIORITY_AD2CH3IP		IRPT_PRIORITY_0	/* AD2CH3IP割り込み優先度レジスタ */
#define	IRPT_USER_PRIORITY_AD2CMP3IP	IRPT_PRIORITY_0	/* AD2CMP3IP割り込み優先度レジスタ */
#define	IRPT_USER_PRIORITY_AD2CH4IP		IRPT_PRIORITY_0	/* AD2CH4IP割り込み優先度レジスタ */
#define	IRPT_USER_PRIORITY_AD2CMP4IP	IRPT_PRIORITY_0	/* AD2CMP4IP割り込み優先度レジスタ */
#define	IRPT_USER_PRIORITY_AD2CH5IP		IRPT_PRIORITY_0	/* AD2CH5IP割り込み優先度レジスタ */
#define	IRPT_USER_PRIORITY_AD2CMP5IP	IRPT_PRIORITY_0	/* AD2CMP5IP割り込み優先度レジスタ */
#define	IRPT_USER_PRIORITY_AD2CH6IP		IRPT_PRIORITY_0	/* AD2CH6IP割り込み優先度レジスタ */
#define	IRPT_USER_PRIORITY_AD2CMP6IP	IRPT_PRIORITY_0	/* AD2CMP6IP割り込み優先度レジスタ */
#define	IRPT_USER_PRIORITY_AD2CH7IP		IRPT_PRIORITY_0	/* AD2CH7IP割り込み優先度レジスタ */
#define	IRPT_USER_PRIORITY_AD2CMP7IP	IRPT_PRIORITY_0	/* AD2CMP7IP割り込み優先度レジスタ */
#define	IRPT_USER_PRIORITY_AD2CH8IP		IRPT_PRIORITY_0	/* AD2CH8IP割り込み優先度レジスタ */
#define	IRPT_USER_PRIORITY_AD2CMP8IP	IRPT_PRIORITY_0	/* AD2CMP8IP割り込み優先度レジスタ */
#define	IRPT_USER_PRIORITY_AD2CH9IP		IRPT_PRIORITY_0	/* AD2CH9IP割り込み優先度レジスタ */
#define	IRPT_USER_PRIORITY_AD2CMP9IP	IRPT_PRIORITY_0	/* AD2CMP9IP割り込み優先度レジスタ */
#define	IRPT_USER_PRIORITY_AD2CH10IP	IRPT_PRIORITY_0	/* AD2CH10IP割り込み優先度レジスタ */
#define	IRPT_USER_PRIORITY_AD2CMP10IP	IRPT_PRIORITY_0	/* AD2CMP10IP割り込み優先度レジスタ */
#define	IRPT_USER_PRIORITY_AD2CH11IP	IRPT_PRIORITY_0	/* AD2CH11IP割り込み優先度レジスタ */
#define	IRPT_USER_PRIORITY_AD2CMP11IP	IRPT_PRIORITY_0	/* AD2CMP11IP割り込み優先度レジスタ */
#define	IRPT_USER_PRIORITY_AD2CH12IP	IRPT_PRIORITY_0	/* AD2CH12IP割り込み優先度レジスタ */
#define	IRPT_USER_PRIORITY_AD2CMP12IP	IRPT_PRIORITY_0	/* AD2CMP12IP割り込み優先度レジスタ */
#define	IRPT_USER_PRIORITY_AD2CH13IP	IRPT_PRIORITY_0	/* AD2CH13IP割り込み優先度レジスタ */
#define	IRPT_USER_PRIORITY_AD2CMP13IP	IRPT_PRIORITY_0	/* AD2CMP13IP割り込み優先度レジスタ */
#define	IRPT_USER_PRIORITY_AD2CH14IP	IRPT_PRIORITY_0	/* AD2CH14IP割り込み優先度レジスタ */
#define	IRPT_USER_PRIORITY_AD2CMP14IP	IRPT_PRIORITY_0	/* AD2CMP14IP割り込み優先度レジスタ */
#define	IRPT_USER_PRIORITY_AD2CH15IP	IRPT_PRIORITY_0	/* AD2CH15IP割り込み優先度レジスタ */
#define	IRPT_USER_PRIORITY_AD2CMP15IP	IRPT_PRIORITY_0	/* AD2CMP15IP割り込み優先度レジスタ */
#define	IRPT_USER_PRIORITY_AD2CH16IP	IRPT_PRIORITY_0	/* AD2CH16IP割り込み優先度レジスタ */
#define	IRPT_USER_PRIORITY_AD2CMP16IP	IRPT_PRIORITY_0	/* AD2CMP16IP割り込み優先度レジスタ */
#define	IRPT_USER_PRIORITY_AD2CH17IP	IRPT_PRIORITY_0	/* AD2CH17IP割り込み優先度レジスタ */
#define	IRPT_USER_PRIORITY_AD2CMP17IP	IRPT_PRIORITY_0	/* AD2CMP17IP割り込み優先度レジスタ */
#define	IRPT_USER_PRIORITY_AD2CH18IP	IRPT_PRIORITY_0	/* AD2CH18IP割り込み優先度レジスタ */
#define	IRPT_USER_PRIORITY_AD2CMP18IP	IRPT_PRIORITY_0	/* AD2CMP18IP割り込み優先度レジスタ */
#define	IRPT_USER_PRIORITY_AD2CH19IP	IRPT_PRIORITY_0	/* AD2CH19IP割り込み優先度レジスタ */
#define	IRPT_USER_PRIORITY_AD2CMP19IP	IRPT_PRIORITY_0	/* AD2CMP19IP割り込み優先度レジスタ */
/*----------------------------------------------------------------------------*/
/* CLC割り込み優先度 */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_PRIORITY_CLC1PIP		IRPT_PRIORITY_0	/* CLC1P割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_CLC2PIP		IRPT_PRIORITY_0	/* CLC2P割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_CLC3PIP		IRPT_PRIORITY_0	/* CLC3P割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_CLC4PIP		IRPT_PRIORITY_0	/* CLC4P割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_CLC1NIP		IRPT_PRIORITY_0	/* CLC1N割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_CLC2NIP		IRPT_PRIORITY_0	/* CLC2N割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_CLC3NIP		IRPT_PRIORITY_0	/* CLC3N割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_CLC4NIP		IRPT_PRIORITY_0	/* CLC4N割り込み優先度レジスタ */

/*----------------------------------------------------------------------------*/
/* IOMON優先度 */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_PRIORITY_IOM1IP	IRPT_PRIORITY_0	/* IOM1IP割り込み優先度レジスタ*/
#define IRPT_USER_PRIORITY_IOM2IP	IRPT_PRIORITY_0	/* IOM2IP割り込み優先度レジスタ*/
#define IRPT_USER_PRIORITY_IOM3IP	IRPT_PRIORITY_0	/* IOM3IP割り込み優先度レジスタ*/
#define IRPT_USER_PRIORITY_IOM4IP	IRPT_PRIORITY_0	/* IOM4IP割り込み優先度レジスタ*/
/*----------------------------------------------------------------------------*/
/* PEVT割り込み優先度 */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_PRIORITY_PEVTAIP	IRPT_PRIORITY_0	/* PEVTA割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_PEVTBIP	IRPT_PRIORITY_0	/* PEVTB割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_PEVTCIP	IRPT_PRIORITY_0	/* PEVTC割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_PEVTDIP	IRPT_PRIORITY_0	/* PEVTD割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_PEVTEIP	IRPT_PRIORITY_0	/* PEVTE割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_PEVTFIP	IRPT_PRIORITY_0	/* PEVTF割り込み優先度レジスタ */



#endif	/* INTERRUPT_USER_H */

