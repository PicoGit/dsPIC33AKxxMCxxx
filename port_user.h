
#ifndef PORT_USER_H
#define	PORT_USER_H

/*----------------------------------------------------------------------------*/
/*インクルードファイル*/
/*----------------------------------------------------------------------------*/
#include "BoardSupportPackage.h"
#include "port_driver.h"
#include "remappin_driver.h"
/*----------------------------------------------------------------------------*/
/*定数定義*/
/*----------------------------------------------------------------------------*/
#if (BOARD_TYPE	== BOARD_EV68M17A_EV74H48A)

/*----------------------------------------------------------------------------*/		
/* CPU Pin = 1 */ 		
/*----------------------------------------------------------------------------*/		
#define PORT_USER_ANSEL_A0		PORT_ANSEL_DIGITAL
#define PORT_USER_TRIS_A0		PORT_TRIS_INPUT
#define PORT_USER_LAT_A0		PORT_LAT_LOW
#define PORT_USER_ODC_A0		PORT_ODC_DISABLE
#define PORT_USER_CNPU_A0		PORT_CNPU_DISABLE
#define PORT_USER_CNPD_A0		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0_A0		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1_A0		PORT_CNEN_DISABLE
#define PORT_USER_RPO_A0		RPO_DEFAULT_PORT
/*----------------------------------------------------------------------------*/		
/* CPU Pin = 2 */  		
/*----------------------------------------------------------------------------*/		
#define PORT_USER_ANSEL_A7		PORT_ANSEL_ANALOG
#define PORT_USER_TRIS_A7		PORT_TRIS_INPUT
#define PORT_USER_LAT_A7		PORT_LAT_LOW
#define PORT_USER_ODC_A7		PORT_ODC_DISABLE
#define PORT_USER_CNPU_A7		PORT_CNPU_DISABLE
#define PORT_USER_CNPD_A7		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0_A7		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1_A7		PORT_CNEN_DISABLE
#define PORT_USER_RPO_A7		RPO_DEFAULT_PORT
/*----------------------------------------------------------------------------*/		
/* CPU Pin = 3 */ 		
/*----------------------------------------------------------------------------*/		
#define PORT_USER_ANSEL_A1		PORT_ANSEL_DIGITAL
#define PORT_USER_TRIS_A1		PORT_TRIS_INPUT
#define PORT_USER_LAT_A1		PORT_LAT_LOW
#define PORT_USER_ODC_A1		PORT_ODC_DISABLE
#define PORT_USER_CNPU_A1		PORT_CNPU_DISABLE
#define PORT_USER_CNPD_A1		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0_A1		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1_A1		PORT_CNEN_DISABLE
#define PORT_USER_RPO_A1		RPO_DEFAULT_PORT

/*----------------------------------------------------------------------------*/		
/* CPU Pin = 6 */  		
/*----------------------------------------------------------------------------*/		
#define PORT_USER_ANSEL_A11		PORT_ANSEL_DIGITAL
#define PORT_USER_TRIS_A11		PORT_TRIS_INPUT
#define PORT_USER_LAT_A11		PORT_LAT_LOW
#define PORT_USER_ODC_A11		PORT_ODC_DISABLE
#define PORT_USER_CNPU_A11		PORT_CNPU_DISABLE
#define PORT_USER_CNPD_A11		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0_A11		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1_A11		PORT_CNEN_DISABLE
#define PORT_USER_RPO_A11		RPO_DEFAULT_PORT
/*----------------------------------------------------------------------------*/		
/* CPU Pin = 7 */  		
/*----------------------------------------------------------------------------*/		
#define PORT_USER_ANSEL_A8		PORT_ANSEL_DIGITAL
#define PORT_USER_TRIS_A8		PORT_TRIS_INPUT
#define PORT_USER_LAT_A8		PORT_LAT_LOW
#define PORT_USER_ODC_A8		PORT_ODC_DISABLE
#define PORT_USER_CNPU_A8		PORT_CNPU_DISABLE
#define PORT_USER_CNPD_A8		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0_A8		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1_A8		PORT_CNEN_DISABLE
#define PORT_USER_RPO_A8		RPO_DEFAULT_PORT
/*----------------------------------------------------------------------------*/		
/* CPU Pin = 8 */  		
/*----------------------------------------------------------------------------*/		
#define PORT_USER_ANSEL_A9		PORT_ANSEL_DIGITAL
#define PORT_USER_TRIS_A9		PORT_TRIS_INPUT
#define PORT_USER_LAT_A9		PORT_LAT_LOW
#define PORT_USER_ODC_A9		PORT_ODC_DISABLE
#define PORT_USER_CNPU_A9		PORT_CNPU_DISABLE
#define PORT_USER_CNPD_A9		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0_A9		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1_A9		PORT_CNEN_DISABLE
#define PORT_USER_RPO_A9		RPO_DEFAULT_PORT
/*----------------------------------------------------------------------------*/		
/* CPU Pin = 9 */  		
/*----------------------------------------------------------------------------*/		
#define PORT_USER_ANSEL_A10		PORT_ANSEL_DIGITAL
#define PORT_USER_TRIS_A10		PORT_TRIS_INPUT
#define PORT_USER_LAT_A10		PORT_LAT_LOW
#define PORT_USER_ODC_A10		PORT_ODC_DISABLE
#define PORT_USER_CNPU_A10		PORT_CNPU_DISABLE
#define PORT_USER_CNPD_A10		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0_A10		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1_A10		PORT_CNEN_DISABLE
#define PORT_USER_RPO_A10		RPO_DEFAULT_PORT

/*----------------------------------------------------------------------------*/		
/* CPU Pin = 12 */  		
/*----------------------------------------------------------------------------*/		
#define PORT_USER_ANSEL_A2		PORT_ANSEL_DIGITAL
#define PORT_USER_TRIS_A2		PORT_TRIS_INPUT
#define PORT_USER_LAT_A2		PORT_LAT_LOW
#define PORT_USER_ODC_A2		PORT_ODC_DISABLE
#define PORT_USER_CNPU_A2		PORT_CNPU_DISABLE
#define PORT_USER_CNPD_A2		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0_A2		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1_A2		PORT_CNEN_DISABLE
#define PORT_USER_RPO_A2		RPO_DEFAULT_PORT
/*----------------------------------------------------------------------------*/		
/* CPU Pin = 13 */  		
/*----------------------------------------------------------------------------*/		
#define PORT_USER_ANSEL_A3		PORT_ANSEL_DIGITAL
#define PORT_USER_TRIS_A3		PORT_TRIS_INPUT
#define PORT_USER_LAT_A3		PORT_LAT_LOW
#define PORT_USER_ODC_A3		PORT_ODC_DISABLE
#define PORT_USER_CNPU_A3		PORT_CNPU_DISABLE
#define PORT_USER_CNPD_A3		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0_A3		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1_A3		PORT_CNEN_DISABLE
#define PORT_USER_RPO_A3		RPO_DEFAULT_PORT
/*----------------------------------------------------------------------------*/		
/* CPU Pin = 14 */  		
/*----------------------------------------------------------------------------*/		
#define PORT_USER_ANSEL_A4		PORT_ANSEL_DIGITAL
#define PORT_USER_TRIS_A4		PORT_TRIS_INPUT
#define PORT_USER_LAT_A4		PORT_LAT_LOW
#define PORT_USER_ODC_A4		PORT_ODC_DISABLE
#define PORT_USER_CNPU_A4		PORT_CNPU_DISABLE
#define PORT_USER_CNPD_A4		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0_A4		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1_A4		PORT_CNEN_DISABLE
#define PORT_USER_RPO_A4		RPO_DEFAULT_PORT
/*----------------------------------------------------------------------------*/		
/* CPU Pin = 15 */  		
/*----------------------------------------------------------------------------*/		
#define PORT_USER_ANSEL_A5		PORT_ANSEL_DIGITAL
#define PORT_USER_TRIS_A5		PORT_TRIS_INPUT
#define PORT_USER_LAT_A5		PORT_LAT_LOW
#define PORT_USER_ODC_A5		PORT_ODC_DISABLE
#define PORT_USER_CNPU_A5		PORT_CNPU_DISABLE
#define PORT_USER_CNPD_A5		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0_A5		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1_A5		PORT_CNEN_DISABLE
#define PORT_USER_RPO_A5		RPO_DEFAULT_PORT
/*----------------------------------------------------------------------------*/		
/* CPU Pin = 16 */  		
/*----------------------------------------------------------------------------*/		
#define PORT_USER_ANSEL_A6		PORT_ANSEL_DIGITAL
#define PORT_USER_TRIS_A6		PORT_TRIS_INPUT
#define PORT_USER_LAT_A6		PORT_LAT_LOW
#define PORT_USER_ODC_A6		PORT_ODC_DISABLE
#define PORT_USER_CNPU_A6		PORT_CNPU_DISABLE
#define PORT_USER_CNPD_A6		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0_A6		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1_A6		PORT_CNEN_DISABLE
#define PORT_USER_RPO_A6		RPO_DEFAULT_PORT

/*----------------------------------------------------------------------------*/		
/* CPU Pin = 20 */ 		
/*----------------------------------------------------------------------------*/		
#define PORT_USER_ANSEL_B0		PORT_ANSEL_DIGITAL
#define PORT_USER_TRIS_B0		PORT_TRIS_INPUT
#define PORT_USER_LAT_B0		PORT_LAT_LOW
#define PORT_USER_ODC_B0		PORT_ODC_DISABLE
#define PORT_USER_CNPU_B0		PORT_CNPU_DISABLE
#define PORT_USER_CNPD_B0		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0_B0		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1_B0		PORT_CNEN_DISABLE
#define PORT_USER_RPO_B0		RPO_DEFAULT_PORT
/*----------------------------------------------------------------------------*/		
/* CPU Pin = 21 */  		
/*----------------------------------------------------------------------------*/		
#define PORT_USER_ANSEL_B1		PORT_ANSEL_DIGITAL
#define PORT_USER_TRIS_B1		PORT_TRIS_INPUT
#define PORT_USER_LAT_B1		PORT_LAT_LOW
#define PORT_USER_ODC_B1		PORT_ODC_DISABLE
#define PORT_USER_CNPU_B1		PORT_CNPU_DISABLE
#define PORT_USER_CNPD_B1		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0_B1		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1_B1		PORT_CNEN_DISABLE
#define PORT_USER_RPO_B1		RPO_DEFAULT_PORT
/*----------------------------------------------------------------------------*/		
/* CPU Pin = 22 */  		
/*----------------------------------------------------------------------------*/		
#define PORT_USER_ANSEL_B2		PORT_ANSEL_DIGITAL
#define PORT_USER_TRIS_B2		PORT_TRIS_INPUT
#define PORT_USER_LAT_B2		PORT_LAT_LOW
#define PORT_USER_ODC_B2		PORT_ODC_DISABLE
#define PORT_USER_CNPU_B2		PORT_CNPU_DISABLE
#define PORT_USER_CNPD_B2		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0_B2		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1_B2		PORT_CNEN_DISABLE
#define PORT_USER_RPO_B2		RPO_DEFAULT_PORT
/*----------------------------------------------------------------------------*/		
/* CPU Pin = 23 */ 		
/*----------------------------------------------------------------------------*/		
#define PORT_USER_ANSEL_B3		PORT_ANSEL_DIGITAL
#define PORT_USER_TRIS_B3		PORT_TRIS_INPUT
#define PORT_USER_LAT_B3		PORT_LAT_LOW
#define PORT_USER_ODC_B3		PORT_ODC_DISABLE
#define PORT_USER_CNPU_B3		PORT_CNPU_DISABLE
#define PORT_USER_CNPD_B3		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0_B3		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1_B3		PORT_CNEN_DISABLE
#define PORT_USER_RPO_B3		RPO_DEFAULT_PORT
/*----------------------------------------------------------------------------*/		
/* CPU Pin = 28 */ 		
/*----------------------------------------------------------------------------*/		
#define PORT_USER_ANSEL_B4		PORT_ANSEL_DIGITAL
#define PORT_USER_TRIS_B4		PORT_TRIS_INPUT
#define PORT_USER_LAT_B4		PORT_LAT_LOW
#define PORT_USER_ODC_B4		PORT_ODC_DISABLE
#define PORT_USER_CNPU_B4		PORT_CNPU_DISABLE
#define PORT_USER_CNPD_B4		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0_B4		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1_B4		PORT_CNEN_DISABLE
#define PORT_USER_RPO_B4		RPO_DEFAULT_PORT

/*----------------------------------------------------------------------------*/		
/* CPU Pin = 29 */		
/*----------------------------------------------------------------------------*/		
#define PORT_USER_ANSEL_B6		PORT_ANSEL_DIGITAL
#define PORT_USER_TRIS_B6		PORT_TRIS_INPUT
#define PORT_USER_LAT_B6		PORT_LAT_LOW
#define PORT_USER_ODC_B6		PORT_ODC_DISABLE
#define PORT_USER_CNPU_B6		PORT_CNPU_DISABLE
#define PORT_USER_CNPD_B6		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0_B6		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1_B6		PORT_CNEN_DISABLE
#define PORT_USER_RPO_B6		RPO_DEFAULT_PORT
/*----------------------------------------------------------------------------*/		
/* CPU Pin = 30 */		
/*----------------------------------------------------------------------------*/		
#define PORT_USER_ANSEL_B7		PORT_ANSEL_DIGITAL
#define PORT_USER_TRIS_B7		PORT_TRIS_INPUT
#define PORT_USER_LAT_B7		PORT_LAT_LOW
#define PORT_USER_ODC_B7		PORT_ODC_DISABLE
#define PORT_USER_CNPU_B7		PORT_CNPU_DISABLE
#define PORT_USER_CNPD_B7		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0_B7		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1_B7		PORT_CNEN_DISABLE
#define PORT_USER_RPO_B7		RPO_DEFAULT_PORT
/*----------------------------------------------------------------------------*/		
/* CPU Pin = 23 */ 		
/*----------------------------------------------------------------------------*/		
#define PORT_USER_ANSEL_B8		PORT_ANSEL_DIGITAL
#define PORT_USER_TRIS_B8		PORT_TRIS_INPUT
#define PORT_USER_LAT_B8		PORT_LAT_LOW
#define PORT_USER_ODC_B8		PORT_ODC_DISABLE
#define PORT_USER_CNPU_B8		PORT_CNPU_DISABLE
#define PORT_USER_CNPD_B8		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0_B8		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1_B8		PORT_CNEN_DISABLE
#define PORT_USER_RPO_B8		RPO_DEFAULT_PORT
/*----------------------------------------------------------------------------*/		
/* CPU Pin = 24 */ 		
/*----------------------------------------------------------------------------*/		
#define PORT_USER_ANSEL_B9		PORT_ANSEL_DIGITAL
#define PORT_USER_TRIS_B9		PORT_TRIS_INPUT
#define PORT_USER_LAT_B9		PORT_LAT_LOW
#define PORT_USER_ODC_B9		PORT_ODC_DISABLE
#define PORT_USER_CNPU_B9		PORT_CNPU_DISABLE
#define PORT_USER_CNPD_B9		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0_B9		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1_B9		PORT_CNEN_DISABLE
#define PORT_USER_RPO_B9		RPO_DEFAULT_PORT
/*----------------------------------------------------------------------------*/		
/* CPU Pin = 31 */  		
/*----------------------------------------------------------------------------*/		
#define PORT_USER_ANSEL_B10		PORT_ANSEL_DIGITAL
#define PORT_USER_TRIS_B10		PORT_TRIS_INPUT
#define PORT_USER_LAT_B10		PORT_LAT_LOW
#define PORT_USER_ODC_B10		PORT_ODC_DISABLE
#define PORT_USER_CNPU_B10		PORT_CNPU_DISABLE
#define PORT_USER_CNPD_B10		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0_B10		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1_B10		PORT_CNEN_DISABLE
#define PORT_USER_RPO_B10		RPO_DEFAULT_PORT
/*----------------------------------------------------------------------------*/		
/* CPU Pin = 32 */  		
/*----------------------------------------------------------------------------*/		
#define PORT_USER_ANSEL_B11		PORT_ANSEL_DIGITAL
#define PORT_USER_TRIS_B11		PORT_TRIS_INPUT
#define PORT_USER_LAT_B11		PORT_LAT_LOW
#define PORT_USER_ODC_B11		PORT_ODC_DISABLE
#define PORT_USER_CNPU_B11		PORT_CNPU_DISABLE
#define PORT_USER_CNPD_B11		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0_B11		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1_B11		PORT_CNEN_DISABLE
#define PORT_USER_RPO_B11		RPO_DEFAULT_PORT

/*----------------------------------------------------------------------------*/		
/* CPU Pin = 33 */ 		
/*----------------------------------------------------------------------------*/		
#define PORT_USER_ANSEL_C8		PORT_ANSEL_DIGITAL
#define PORT_USER_TRIS_C8		PORT_TRIS_INPUT
#define PORT_USER_LAT_C8		PORT_LAT_LOW
#define PORT_USER_ODC_C8		PORT_ODC_DISABLE
#define PORT_USER_CNPU_C8		PORT_CNPU_DISABLE
#define PORT_USER_CNPD_C8		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0_C8		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1_C8		PORT_CNEN_DISABLE
#define PORT_USER_RPO_C8		RPO_DEFAULT_PORT
/*----------------------------------------------------------------------------*/		
/* CPU Pin = 34 */ 		
/*----------------------------------------------------------------------------*/		
#define PORT_USER_ANSEL_C9		PORT_ANSEL_DIGITAL
#define PORT_USER_TRIS_C9		PORT_TRIS_INPUT
#define PORT_USER_LAT_C9		PORT_LAT_LOW
#define PORT_USER_ODC_C9		PORT_ODC_DISABLE
#define PORT_USER_CNPU_C9		PORT_CNPU_DISABLE
#define PORT_USER_CNPD_C9		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0_C9		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1_C9		PORT_CNEN_DISABLE
#define PORT_USER_RPO_C9		RPO_DEFAULT_PORT
/*----------------------------------------------------------------------------*/		
/* CPU Pin = 35 */ 		
/*----------------------------------------------------------------------------*/		
#define PORT_USER_ANSEL_C6		PORT_ANSEL_DIGITAL
#define PORT_USER_TRIS_C6		PORT_TRIS_INPUT
#define PORT_USER_LAT_C6		PORT_LAT_LOW
#define PORT_USER_ODC_C6		PORT_ODC_DISABLE
#define PORT_USER_CNPU_C6		PORT_CNPU_DISABLE
#define PORT_USER_CNPD_C6		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0_C6		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1_C6		PORT_CNEN_DISABLE
#define PORT_USER_RPO_C6		RPO_DEFAULT_PORT
/*----------------------------------------------------------------------------*/		
/* CPU Pin = 36 */ 		
/*----------------------------------------------------------------------------*/		
#define PORT_USER_ANSEL_C7		PORT_ANSEL_DIGITAL
#define PORT_USER_TRIS_C7		PORT_TRIS_INPUT
#define PORT_USER_LAT_C7		PORT_LAT_LOW
#define PORT_USER_ODC_C7		PORT_ODC_DISABLE
#define PORT_USER_CNPU_C7		PORT_CNPU_DISABLE
#define PORT_USER_CNPD_C7		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0_C7		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1_C7		PORT_CNEN_DISABLE
#define PORT_USER_RPO_C7		RPO_DEFAULT_PORT
/*----------------------------------------------------------------------------*/		
/* CPU Pin = 37 */ 		
/*----------------------------------------------------------------------------*/		
#define PORT_USER_ANSEL_C0		PORT_ANSEL_DIGITAL
#define PORT_USER_TRIS_C0		PORT_TRIS_INPUT
#define PORT_USER_LAT_C0		PORT_LAT_LOW
#define PORT_USER_ODC_C0		PORT_ODC_DISABLE
#define PORT_USER_CNPU_C0		PORT_CNPU_DISABLE
#define PORT_USER_CNPD_C0		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0_C0		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1_C0		PORT_CNEN_DISABLE
#define PORT_USER_RPO_C0		RPO_DEFAULT_PORT
/*----------------------------------------------------------------------------*/		
/* CPU Pin = 38 */  		
/*----------------------------------------------------------------------------*/		
#define PORT_USER_ANSEL_C1		PORT_ANSEL_DIGITAL
#define PORT_USER_TRIS_C1		PORT_TRIS_INPUT
#define PORT_USER_LAT_C1		PORT_LAT_LOW
#define PORT_USER_ODC_C1		PORT_ODC_DISABLE
#define PORT_USER_CNPU_C1		PORT_CNPU_DISABLE
#define PORT_USER_CNPD_C1		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0_C1		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1_C1		PORT_CNEN_DISABLE
#define PORT_USER_RPO_C1		RPO_DEFAULT_PORT
/*----------------------------------------------------------------------------*/		
/* CPU Pin = 41 */  		
/*----------------------------------------------------------------------------*/		
#define PORT_USER_ANSEL_C2		PORT_ANSEL_DIGITAL
#define PORT_USER_TRIS_C2		PORT_TRIS_INPUT
#define PORT_USER_LAT_C2		PORT_LAT_LOW
#define PORT_USER_ODC_C2		PORT_ODC_DISABLE
#define PORT_USER_CNPU_C2		PORT_CNPU_DISABLE
#define PORT_USER_CNPD_C2		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0_C2		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1_C2		PORT_CNEN_DISABLE
#define PORT_USER_RPO_C2		RPO_DEFAULT_PORT
/*----------------------------------------------------------------------------*/		
/* CPU Pin = 42 */ 		
/*----------------------------------------------------------------------------*/		
#define PORT_USER_ANSEL_C5		PORT_ANSEL_DIGITAL
#define PORT_USER_TRIS_C5		PORT_TRIS_INPUT
#define PORT_USER_LAT_C5		PORT_LAT_LOW
#define PORT_USER_ODC_C5		PORT_ODC_DISABLE
#define PORT_USER_CNPU_C5		PORT_CNPU_DISABLE
#define PORT_USER_CNPD_C5		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0_C5		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1_C5		PORT_CNEN_DISABLE
#define PORT_USER_RPO_C5		RPO_DEFAULT_PORT
/*----------------------------------------------------------------------------*/		
/* CPU Pin = 43 */ 		
/*----------------------------------------------------------------------------*/		
#define PORT_USER_ANSEL_C3		PORT_ANSEL_DIGITAL
#define PORT_USER_TRIS_C3		PORT_TRIS_INPUT
#define PORT_USER_LAT_C3		PORT_LAT_LOW
#define PORT_USER_ODC_C3		PORT_ODC_DISABLE
#define PORT_USER_CNPU_C3		PORT_CNPU_DISABLE
#define PORT_USER_CNPD_C3		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0_C3		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1_C3		PORT_CNEN_DISABLE
#define PORT_USER_RPO_C3		RPO_DEFAULT_PORT
/*----------------------------------------------------------------------------*/		
/* CPU Pin = 44 */ 		
/*----------------------------------------------------------------------------*/		
#define PORT_USER_ANSEL_C4		PORT_ANSEL_DIGITAL
#define PORT_USER_TRIS_C4		PORT_TRIS_INPUT
#define PORT_USER_LAT_C4		PORT_LAT_LOW
#define PORT_USER_ODC_C4		PORT_ODC_DISABLE
#define PORT_USER_CNPU_C4		PORT_CNPU_DISABLE
#define PORT_USER_CNPD_C4		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0_C4		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1_C4		PORT_CNEN_DISABLE
#define PORT_USER_RPO_C4		RPO_DEFAULT_PORT
/*----------------------------------------------------------------------------*/		
/* CPU Pin = 45 */  		
/*----------------------------------------------------------------------------*/		
#define PORT_USER_ANSEL_C10		PORT_ANSEL_DIGITAL
#define PORT_USER_TRIS_C10		PORT_TRIS_INPUT
#define PORT_USER_LAT_C10		PORT_LAT_LOW
#define PORT_USER_ODC_C10		PORT_ODC_DISABLE
#define PORT_USER_CNPU_C10		PORT_CNPU_DISABLE
#define PORT_USER_CNPD_C10		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0_C10		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1_C10		PORT_CNEN_DISABLE
#define PORT_USER_RPO_C10		RPO_DEFAULT_PORT
/*----------------------------------------------------------------------------*/		
/* CPU Pin = 46 */ 		
/*----------------------------------------------------------------------------*/		
#define PORT_USER_ANSEL_C11		PORT_ANSEL_DIGITAL
#define PORT_USER_TRIS_C11		PORT_TRIS_INPUT
#define PORT_USER_LAT_C11		PORT_LAT_LOW
#define PORT_USER_ODC_C11		PORT_ODC_DISABLE
#define PORT_USER_CNPU_C11		PORT_CNPU_DISABLE
#define PORT_USER_CNPD_C11		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0_C11		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1_C11		PORT_CNEN_DISABLE
#define PORT_USER_RPO_C11		RPO_DEFAULT_PORT

/*----------------------------------------------------------------------------*/		
/* CPU Pin = 49 */ 		
/*----------------------------------------------------------------------------*/		
#define PORT_USER_ANSEL_D9		PORT_ANSEL_DIGITAL
#define PORT_USER_TRIS_D9		PORT_TRIS_INPUT
#define PORT_USER_LAT_D9		PORT_LAT_LOW
#define PORT_USER_ODC_D9		PORT_ODC_DISABLE
#define PORT_USER_CNPU_D9		PORT_CNPU_DISABLE
#define PORT_USER_CNPD_D9		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0_D9		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1_D9		PORT_CNEN_DISABLE
#define PORT_USER_RPO_D9		RPO_DEFAULT_PORT
/*----------------------------------------------------------------------------*/		
/* CPU Pin = 50 */ 		
/*----------------------------------------------------------------------------*/		
#define PORT_USER_ANSEL_D10		PORT_ANSEL_DIGITAL
#define PORT_USER_TRIS_D10		PORT_TRIS_INPUT
#define PORT_USER_LAT_D10		PORT_LAT_LOW
#define PORT_USER_ODC_D10		PORT_ODC_DISABLE
#define PORT_USER_CNPU_D10		PORT_CNPU_DISABLE
#define PORT_USER_CNPD_D10		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0_D10		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1_D10		PORT_CNEN_DISABLE
#define PORT_USER_RPO_D10		RPO_DEFAULT_PORT
/*----------------------------------------------------------------------------*/		
/* CPU Pin = 51 */ 		
/*----------------------------------------------------------------------------*/		
#define PORT_USER_ANSEL_D0		PORT_ANSEL_DIGITAL
#define PORT_USER_TRIS_D0		PORT_TRIS_INPUT
#define PORT_USER_LAT_D0		PORT_LAT_LOW
#define PORT_USER_ODC_D0		PORT_ODC_DISABLE
#define PORT_USER_CNPU_D0		PORT_CNPU_DISABLE
#define PORT_USER_CNPD_D0		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0_D0		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1_D0		PORT_CNEN_DISABLE
#define PORT_USER_RPO_D0		RPO_DEFAULT_PORT
/*----------------------------------------------------------------------------*/		
/* CPU Pin = 52 */ 		
/*----------------------------------------------------------------------------*/		
#define PORT_USER_ANSEL_D1		PORT_ANSEL_DIGITAL
#define PORT_USER_TRIS_D1		PORT_TRIS_INPUT
#define PORT_USER_LAT_D1		PORT_LAT_LOW
#define PORT_USER_ODC_D1		PORT_ODC_DISABLE
#define PORT_USER_CNPU_D1		PORT_CNPU_DISABLE
#define PORT_USER_CNPD_D1		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0_D1		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1_D1		PORT_CNEN_DISABLE
#define PORT_USER_RPO_D1		RPO_DEFAULT_PORT
/*----------------------------------------------------------------------------*/		
/* CPU Pin = 53 */ 		
/*----------------------------------------------------------------------------*/		
#define PORT_USER_ANSEL_D2		PORT_ANSEL_DIGITAL
#define PORT_USER_TRIS_D2		PORT_TRIS_INPUT
#define PORT_USER_LAT_D2		PORT_LAT_LOW
#define PORT_USER_ODC_D2		PORT_ODC_DISABLE
#define PORT_USER_CNPU_D2		PORT_CNPU_DISABLE
#define PORT_USER_CNPD_D2		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0_D2		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1_D2		PORT_CNEN_DISABLE
#define PORT_USER_RPO_D2		RPO_DEFAULT_PORT
/*----------------------------------------------------------------------------*/		
/* CPU Pin = 54 */ 		
/*----------------------------------------------------------------------------*/		
#define PORT_USER_ANSEL_D3		PORT_ANSEL_DIGITAL
#define PORT_USER_TRIS_D3		PORT_TRIS_INPUT
#define PORT_USER_LAT_D3		PORT_LAT_LOW
#define PORT_USER_ODC_D3		PORT_ODC_DISABLE
#define PORT_USER_CNPU_D3		PORT_CNPU_DISABLE
#define PORT_USER_CNPD_D3		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0_D3		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1_D3		PORT_CNEN_DISABLE
#define PORT_USER_RPO_D3		RPO_DEFAULT_PORT
/*----------------------------------------------------------------------------*/		
/* CPU Pin = 55 */ 		
/*----------------------------------------------------------------------------*/		
#define PORT_USER_ANSEL_D5		PORT_ANSEL_DIGITAL
#define PORT_USER_TRIS_D5		PORT_TRIS_INPUT
#define PORT_USER_LAT_D5		PORT_LAT_LOW
#define PORT_USER_ODC_D5		PORT_ODC_DISABLE
#define PORT_USER_CNPU_D5		PORT_CNPU_DISABLE
#define PORT_USER_CNPD_D5		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0_D5		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1_D5		PORT_CNEN_DISABLE
#define PORT_USER_RPO_D5		RPO_DEFAULT_PORT
/*----------------------------------------------------------------------------*/		
/* CPU Pin = 56 */ 		
/*----------------------------------------------------------------------------*/		
#define PORT_USER_ANSEL_D6		PORT_ANSEL_DIGITAL
#define PORT_USER_TRIS_D6		PORT_TRIS_INPUT
#define PORT_USER_LAT_D6		PORT_LAT_LOW
#define PORT_USER_ODC_D6		PORT_ODC_DISABLE
#define PORT_USER_CNPU_D6		PORT_CNPU_DISABLE
#define PORT_USER_CNPD_D6		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0_D6		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1_D6		PORT_CNEN_DISABLE
#define PORT_USER_RPO_D6		RPO_DEFAULT_PORT
/*----------------------------------------------------------------------------*/		
/* CPU Pin = 57 */ 		
/*----------------------------------------------------------------------------*/		
#define PORT_USER_ANSEL_D7		PORT_ANSEL_DIGITAL
#define PORT_USER_TRIS_D7		PORT_TRIS_INPUT
#define PORT_USER_LAT_D7		PORT_LAT_LOW
#define PORT_USER_ODC_D7		PORT_ODC_DISABLE
#define PORT_USER_CNPU_D7		PORT_CNPU_DISABLE
#define PORT_USER_CNPD_D7		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0_D7		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1_D7		PORT_CNEN_DISABLE
#define PORT_USER_RPO_D7		RPO_DEFAULT_PORT
/*----------------------------------------------------------------------------*/		
/* CPU Pin = 58 */ 		
/*----------------------------------------------------------------------------*/		
#define PORT_USER_ANSEL_D8		PORT_ANSEL_DIGITAL
#define PORT_USER_TRIS_D8		PORT_TRIS_INPUT
#define PORT_USER_LAT_D8		PORT_LAT_LOW
#define PORT_USER_ODC_D8		PORT_ODC_DISABLE
#define PORT_USER_CNPU_D8		PORT_CNPU_DISABLE
#define PORT_USER_CNPD_D8		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0_D8		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1_D8		PORT_CNEN_DISABLE
#define PORT_USER_RPO_D8		RPO_DEFAULT_PORT
/*----------------------------------------------------------------------------*/		
/* CPU Pin = 61 */ 		
/*----------------------------------------------------------------------------*/		
#define PORT_USER_ANSEL_D4		PORT_ANSEL_DIGITAL
#define PORT_USER_TRIS_D4		PORT_TRIS_INPUT
#define PORT_USER_LAT_D4		PORT_LAT_LOW
#define PORT_USER_ODC_D4		PORT_ODC_DISABLE
#define PORT_USER_CNPU_D4		PORT_CNPU_DISABLE
#define PORT_USER_CNPD_D4		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0_D4		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1_D4		PORT_CNEN_DISABLE
#define PORT_USER_RPO_D4		RPO_DEFAULT_PORT
/*----------------------------------------------------------------------------*/		
/* CPU Pin = 62 */ 		
/*----------------------------------------------------------------------------*/		
#define PORT_USER_ANSEL_D11		PORT_ANSEL_DIGITAL
#define PORT_USER_TRIS_D11		PORT_TRIS_INPUT
#define PORT_USER_LAT_D11		PORT_LAT_LOW
#define PORT_USER_ODC_D11		PORT_ODC_DISABLE
#define PORT_USER_CNPU_D11		PORT_CNPU_DISABLE
#define PORT_USER_CNPD_D11		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0_D11		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1_D11		PORT_CNEN_DISABLE
#define PORT_USER_RPO_D11		RPO_DEFAULT_PORT
/*----------------------------------------------------------------------------*/		
/* CPU Pin = 63 */ 		
/*----------------------------------------------------------------------------*/		
#define PORT_USER_ANSEL_D12		PORT_ANSEL_DIGITAL
#define PORT_USER_TRIS_D12		PORT_TRIS_INPUT
#define PORT_USER_LAT_D12		PORT_LAT_LOW
#define PORT_USER_ODC_D12		PORT_ODC_DISABLE
#define PORT_USER_CNPU_D12		PORT_CNPU_DISABLE
#define PORT_USER_CNPD_D12		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0_D12		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1_D12		PORT_CNEN_DISABLE
#define PORT_USER_RPO_D12		RPO_DEFAULT_PORT



/*----------------------------------------------------------------------------*/		
/* CPU Pin = no Assign */  		
/*----------------------------------------------------------------------------*/		
#define PORT_USER_ANSEL_A12		PORT_ANSEL_DIGITAL
#define PORT_USER_TRIS_A12		PORT_TRIS_INPUT
#define PORT_USER_LAT_A12		PORT_LAT_LOW
#define PORT_USER_ODC_A12		PORT_ODC_DISABLE
#define PORT_USER_CNPU_A12		PORT_CNPU_DISABLE
#define PORT_USER_CNPD_A12		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0_A12		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1_A12		PORT_CNEN_DISABLE
#define PORT_USER_RPO_A12		RPO_DEFAULT_PORT
/*----------------------------------------------------------------------------*/		
/* CPU Pin = no Assign */  		
/*----------------------------------------------------------------------------*/		
#define PORT_USER_ANSEL_A13		PORT_ANSEL_DIGITAL
#define PORT_USER_TRIS_A13		PORT_TRIS_INPUT
#define PORT_USER_LAT_A13		PORT_LAT_LOW
#define PORT_USER_ODC_A13		PORT_ODC_DISABLE
#define PORT_USER_CNPU_A13		PORT_CNPU_DISABLE
#define PORT_USER_CNPD_A13		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0_A13		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1_A13		PORT_CNEN_DISABLE
#define PORT_USER_RPO_A13		RPO_DEFAULT_PORT
/*----------------------------------------------------------------------------*/		
/* CPU Pin = no Assign */  		
/*----------------------------------------------------------------------------*/		
#define PORT_USER_ANSEL_A14		PORT_ANSEL_DIGITAL
#define PORT_USER_TRIS_A14		PORT_TRIS_INPUT
#define PORT_USER_LAT_A14		PORT_LAT_LOW
#define PORT_USER_ODC_A14		PORT_ODC_DISABLE
#define PORT_USER_CNPU_A14		PORT_CNPU_DISABLE
#define PORT_USER_CNPD_A14		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0_A14		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1_A14		PORT_CNEN_DISABLE
#define PORT_USER_RPO_A14		RPO_DEFAULT_PORT
/*----------------------------------------------------------------------------*/		
/* CPU Pin = no Assign */  		
/*----------------------------------------------------------------------------*/		
#define PORT_USER_ANSEL_A15		PORT_ANSEL_DIGITAL
#define PORT_USER_TRIS_A15		PORT_TRIS_INPUT
#define PORT_USER_LAT_A15		PORT_LAT_LOW
#define PORT_USER_ODC_A15		PORT_ODC_DISABLE
#define PORT_USER_CNPU_A15		PORT_CNPU_DISABLE
#define PORT_USER_CNPD_A15		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0_A15		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1_A15		PORT_CNEN_DISABLE
#define PORT_USER_RPO_A15		RPO_DEFAULT_PORT
/*----------------------------------------------------------------------------*/		
/* CPU Pin = no Assign 	 */  	
/*----------------------------------------------------------------------------*/		
#define PORT_USER_ANSEL_B5		PORT_ANSEL_DIGITAL
#define PORT_USER_TRIS_B5		PORT_TRIS_INPUT
#define PORT_USER_LAT_B5		PORT_LAT_LOW
#define PORT_USER_ODC_B5		PORT_ODC_DISABLE
#define PORT_USER_CNPU_B5		PORT_CNPU_DISABLE
#define PORT_USER_CNPD_B5		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0_B5		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1_B5		PORT_CNEN_DISABLE
#define PORT_USER_RPO_B5		RPO_DEFAULT_PORT

/*----------------------------------------------------------------------------*/		
/* CPU Pin = no Assign 	 */  	
/*----------------------------------------------------------------------------*/		
#define PORT_USER_ANSEL_B12		PORT_ANSEL_DIGITAL
#define PORT_USER_TRIS_B12		PORT_TRIS_INPUT
#define PORT_USER_LAT_B12		PORT_LAT_LOW
#define PORT_USER_ODC_B12		PORT_ODC_DISABLE
#define PORT_USER_CNPU_B12		PORT_CNPU_DISABLE
#define PORT_USER_CNPD_B12		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0_B12		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1_B12		PORT_CNEN_DISABLE
#define PORT_USER_RPO_B12		RPO_DEFAULT_PORT

/*----------------------------------------------------------------------------*/		
/* CPU Pin = no Assign */   		
/*----------------------------------------------------------------------------*/		
#define PORT_USER_ANSEL_B13		PORT_ANSEL_DIGITAL
#define PORT_USER_TRIS_B13		PORT_TRIS_INPUT
#define PORT_USER_LAT_B13		PORT_LAT_LOW
#define PORT_USER_ODC_B13		PORT_ODC_DISABLE
#define PORT_USER_CNPU_B13		PORT_CNPU_DISABLE
#define PORT_USER_CNPD_B13		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0_B13		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1_B13		PORT_CNEN_DISABLE
#define PORT_USER_RPO_B13		RPO_DEFAULT_PORT

/*----------------------------------------------------------------------------*/		
/* CPU Pin = no Assign */   		
/*----------------------------------------------------------------------------*/		
#define PORT_USER_ANSEL_B14		PORT_ANSEL_DIGITAL
#define PORT_USER_TRIS_B14		PORT_TRIS_INPUT
#define PORT_USER_LAT_B14		PORT_LAT_LOW
#define PORT_USER_ODC_B14		PORT_ODC_DISABLE
#define PORT_USER_CNPU_B14		PORT_CNPU_DISABLE
#define PORT_USER_CNPD_B14		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0_B14		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1_B14		PORT_CNEN_DISABLE
#define PORT_USER_RPO_B14		RPO_DEFAULT_PORT

/*----------------------------------------------------------------------------*/		
/* CPU Pin = no Assign */   		
/*----------------------------------------------------------------------------*/		
#define PORT_USER_ANSEL_B15		PORT_ANSEL_DIGITAL
#define PORT_USER_TRIS_B15		PORT_TRIS_INPUT
#define PORT_USER_LAT_B15		PORT_LAT_LOW
#define PORT_USER_ODC_B15		PORT_ODC_DISABLE
#define PORT_USER_CNPU_B15		PORT_CNPU_DISABLE
#define PORT_USER_CNPD_B15		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0_B15		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1_B15		PORT_CNEN_DISABLE
#define PORT_USER_RPO_B15		RPO_DEFAULT_PORT

/*----------------------------------------------------------------------------*/		
/* CPU Pin = no Assign */  		
/*----------------------------------------------------------------------------*/		
#define PORT_USER_ANSEL_C12		PORT_ANSEL_DIGITAL
#define PORT_USER_TRIS_C12		PORT_TRIS_INPUT
#define PORT_USER_LAT_C12		PORT_LAT_LOW
#define PORT_USER_ODC_C12		PORT_ODC_DISABLE
#define PORT_USER_CNPU_C12		PORT_CNPU_DISABLE
#define PORT_USER_CNPD_C12		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0_C12		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1_C12		PORT_CNEN_DISABLE
#define PORT_USER_RPO_C12		RPO_DEFAULT_PORT
/*----------------------------------------------------------------------------*/		
/* CPU Pin = no Assign */  		
/*----------------------------------------------------------------------------*/	
#define PORT_USER_ANSEL_C13		PORT_ANSEL_DIGITAL
#define PORT_USER_TRIS_C13		PORT_TRIS_INPUT
#define PORT_USER_LAT_C13		PORT_LAT_LOW
#define PORT_USER_ODC_C13		PORT_ODC_DISABLE
#define PORT_USER_CNPU_C13		PORT_CNPU_DISABLE
#define PORT_USER_CNPD_C13		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0_C13		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1_C13		PORT_CNEN_DISABLE
#define PORT_USER_RPO_C13		RPO_DEFAULT_PORT
/*----------------------------------------------------------------------------*/		
/* CPU Pin = no Assign */  		
/*----------------------------------------------------------------------------*/	
#define PORT_USER_ANSEL_C14		PORT_ANSEL_DIGITAL
#define PORT_USER_TRIS_C14		PORT_TRIS_INPUT
#define PORT_USER_LAT_C14		PORT_LAT_LOW
#define PORT_USER_ODC_C14		PORT_ODC_DISABLE
#define PORT_USER_CNPU_C14		PORT_CNPU_DISABLE
#define PORT_USER_CNPD_C14		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0_C14		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1_C14		PORT_CNEN_DISABLE
#define PORT_USER_RPO_C14		RPO_DEFAULT_PORT
/*----------------------------------------------------------------------------*/		
/* CPU Pin = no Assign */  		
/*----------------------------------------------------------------------------*/	
#define PORT_USER_ANSEL_C15		PORT_ANSEL_DIGITAL
#define PORT_USER_TRIS_C15		PORT_TRIS_INPUT
#define PORT_USER_LAT_C15		PORT_LAT_LOW
#define PORT_USER_ODC_C15		PORT_ODC_DISABLE
#define PORT_USER_CNPU_C15		PORT_CNPU_DISABLE
#define PORT_USER_CNPD_C15		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0_C15		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1_C15		PORT_CNEN_DISABLE
#define PORT_USER_RPO_C15		RPO_DEFAULT_PORT

/*----------------------------------------------------------------------------*/
/* [状態変化通知設定] */
/*   PORT_CNCON_ON_DISABLE =    状態変化通知無効 */
/*   PORT_CNCON_ON_ENABLE =     状態変化通知有効 */
/*----------------------------------------------------------------------------*/
#define PORT_USER_CNCONA_ON     PORT_CNCON_ON_DISABLE
#define PORT_USER_CNCONB_ON     PORT_CNCON_ON_DISABLE
#define PORT_USER_CNCONC_ON     PORT_CNCON_ON_DISABLE
#define PORT_USER_CNCOND_ON     PORT_CNCON_ON_DISABLE
#define PORT_USER_CNCONE_ON     PORT_CNCON_ON_DISABLE
/*----------------------------------------------------------------------------*/
/* [] */
/*   PORT_CNCON_STYLE_0 =     */
/*   PORT_CNCON_STYLE_1 =      */
/*----------------------------------------------------------------------------*/
#define PORT_USER_CNCONA_STYLE  PORT_CNCON_STYLE_0
#define PORT_USER_CNCONB_STYLE  PORT_CNCON_STYLE_0
#define PORT_USER_CNCONC_STYLE  PORT_CNCON_STYLE_0
#define PORT_USER_CNCOND_STYLE  PORT_CNCON_STYLE_0
#define PORT_USER_CNCONE_STYLE  PORT_CNCON_STYLE_0

#else
/*----------------------------------------------------------------------------*/
/* [アナログ入力設定] */
/*   PORT_ANSEL_DIGITAL = デジタル入力 */
/*   PORT_ANSEL_ANALOG = アナログ入力 */
/*----------------------------------------------------------------------------*/
/****** ポートA ******/
#define PORT_USER_ANSEL_A0   PORT_ANSEL_DIGITAL
#define PORT_USER_ANSEL_A1   PORT_ANSEL_DIGITAL
#define PORT_USER_ANSEL_A2   PORT_ANSEL_DIGITAL
#define PORT_USER_ANSEL_A3   PORT_ANSEL_DIGITAL
#define PORT_USER_ANSEL_A4   PORT_ANSEL_DIGITAL
#define PORT_USER_ANSEL_A5   PORT_ANSEL_DIGITAL
#define PORT_USER_ANSEL_A6   PORT_ANSEL_DIGITAL
#define PORT_USER_ANSEL_A7   PORT_ANSEL_DIGITAL
#define PORT_USER_ANSEL_A8   PORT_ANSEL_DIGITAL
#define PORT_USER_ANSEL_A9   PORT_ANSEL_DIGITAL
#define PORT_USER_ANSEL_A10  PORT_ANSEL_DIGITAL
#define PORT_USER_ANSEL_A11  PORT_ANSEL_DIGITAL
#define PORT_USER_ANSEL_A12  PORT_ANSEL_DIGITAL
#define PORT_USER_ANSEL_A13  PORT_ANSEL_DIGITAL
#define PORT_USER_ANSEL_A14  PORT_ANSEL_DIGITAL
#define PORT_USER_ANSEL_A15  PORT_ANSEL_DIGITAL

/****** ポートB ******/
#define PORT_USER_ANSEL_B0    PORT_ANSEL_DIGITAL
#define PORT_USER_ANSEL_B1    PORT_ANSEL_DIGITAL
#define PORT_USER_ANSEL_B2    PORT_ANSEL_DIGITAL
#define PORT_USER_ANSEL_B3    PORT_ANSEL_DIGITAL
#define PORT_USER_ANSEL_B4    PORT_ANSEL_DIGITAL
#define PORT_USER_ANSEL_B5    PORT_ANSEL_DIGITAL
#define PORT_USER_ANSEL_B6    PORT_ANSEL_DIGITAL
#define PORT_USER_ANSEL_B7    PORT_ANSEL_DIGITAL
#define PORT_USER_ANSEL_B8    PORT_ANSEL_DIGITAL
#define PORT_USER_ANSEL_B9    PORT_ANSEL_DIGITAL
#define PORT_USER_ANSEL_B10   PORT_ANSEL_DIGITAL
#define PORT_USER_ANSEL_B11   PORT_ANSEL_DIGITAL
#define PORT_USER_ANSEL_B12   PORT_ANSEL_DIGITAL
#define PORT_USER_ANSEL_B13   PORT_ANSEL_DIGITAL
#define PORT_USER_ANSEL_B14   PORT_ANSEL_DIGITAL
#define PORT_USER_ANSEL_B15   PORT_ANSEL_DIGITAL

/****** ポートC ******/
#define PORT_USER_ANSEL_C0    PORT_ANSEL_DIGITAL
#define PORT_USER_ANSEL_C1    PORT_ANSEL_DIGITAL
#define PORT_USER_ANSEL_C2    PORT_ANSEL_DIGITAL
#define PORT_USER_ANSEL_C3    PORT_ANSEL_DIGITAL
#define PORT_USER_ANSEL_C4    PORT_ANSEL_DIGITAL
#define PORT_USER_ANSEL_C5    PORT_ANSEL_DIGITAL
#define PORT_USER_ANSEL_C6    PORT_ANSEL_DIGITAL
#define PORT_USER_ANSEL_C7    PORT_ANSEL_DIGITAL
#define PORT_USER_ANSEL_C8    PORT_ANSEL_DIGITAL
#define PORT_USER_ANSEL_C9    PORT_ANSEL_DIGITAL
#define PORT_USER_ANSEL_C10   PORT_ANSEL_DIGITAL
#define PORT_USER_ANSEL_C11   PORT_ANSEL_DIGITAL
#define PORT_USER_ANSEL_C12   PORT_ANSEL_DIGITAL
#define PORT_USER_ANSEL_C13   PORT_ANSEL_DIGITAL
#define PORT_USER_ANSEL_C14   PORT_ANSEL_DIGITAL
#define PORT_USER_ANSEL_C15   PORT_ANSEL_DIGITAL
/****** ポートD ******/
#define PORT_USER_ANSEL_D0    PORT_ANSEL_DIGITAL
#define PORT_USER_ANSEL_D1    PORT_ANSEL_DIGITAL
#define PORT_USER_ANSEL_D2    PORT_ANSEL_DIGITAL
#define PORT_USER_ANSEL_D3    PORT_ANSEL_DIGITAL
#define PORT_USER_ANSEL_D4    PORT_ANSEL_DIGITAL
#define PORT_USER_ANSEL_D5    PORT_ANSEL_DIGITAL
#define PORT_USER_ANSEL_D6    PORT_ANSEL_DIGITAL
#define PORT_USER_ANSEL_D7    PORT_ANSEL_DIGITAL
#define PORT_USER_ANSEL_D8    PORT_ANSEL_DIGITAL
#define PORT_USER_ANSEL_D9    PORT_ANSEL_DIGITAL
#define PORT_USER_ANSEL_D10   PORT_ANSEL_DIGITAL
#define PORT_USER_ANSEL_D11   PORT_ANSEL_DIGITAL
#define PORT_USER_ANSEL_D12   PORT_ANSEL_DIGITAL
#define PORT_USER_ANSEL_D13   PORT_ANSEL_DIGITAL
#define PORT_USER_ANSEL_D14   PORT_ANSEL_DIGITAL
#define PORT_USER_ANSEL_D15   PORT_ANSEL_DIGITAL

/****** ポートE ******/

#define PORT_USER_ANSEL_E0    PORT_ANSEL_DIGITAL
#define PORT_USER_ANSEL_E1    PORT_ANSEL_DIGITAL
#define PORT_USER_ANSEL_E2    PORT_ANSEL_DIGITAL
#define PORT_USER_ANSEL_E3    PORT_ANSEL_DIGITAL
#define PORT_USER_ANSEL_E4    PORT_ANSEL_DIGITAL
#define PORT_USER_ANSEL_E5    PORT_ANSEL_DIGITAL
#define PORT_USER_ANSEL_E6    PORT_ANSEL_DIGITAL
#define PORT_USER_ANSEL_E7    PORT_ANSEL_DIGITAL
#define PORT_USER_ANSEL_E8    PORT_ANSEL_DIGITAL
#define PORT_USER_ANSEL_E9    PORT_ANSEL_DIGITAL
#define PORT_USER_ANSEL_E10   PORT_ANSEL_DIGITAL
#define PORT_USER_ANSEL_E11   PORT_ANSEL_DIGITAL
#define PORT_USER_ANSEL_E12   PORT_ANSEL_DIGITAL
#define PORT_USER_ANSEL_E13   PORT_ANSEL_DIGITAL
#define PORT_USER_ANSEL_E14   PORT_ANSEL_DIGITAL
#define PORT_USER_ANSEL_E15   PORT_ANSEL_DIGITAL

/*----------------------------------------------------------------------------*/
/* [入出力方向設定] */
/*   PORT_TRIS_INPUT = 入力ピン */
/*   PORT_TRIS_OUTPUT = 出力ピン */
/*----------------------------------------------------------------------------*/
/****** ポートA ******/
#define PORT_USER_TRIS_A0    PORT_TRIS_INPUT
#define PORT_USER_TRIS_A1    PORT_TRIS_INPUT
#define PORT_USER_TRIS_A2    PORT_TRIS_INPUT
#define PORT_USER_TRIS_A3    PORT_TRIS_INPUT
#define PORT_USER_TRIS_A4    PORT_TRIS_INPUT
#define PORT_USER_TRIS_A5    PORT_TRIS_INPUT
#define PORT_USER_TRIS_A6    PORT_TRIS_INPUT
#define PORT_USER_TRIS_A7    PORT_TRIS_INPUT
#define PORT_USER_TRIS_A8    PORT_TRIS_INPUT
#define PORT_USER_TRIS_A9    PORT_TRIS_INPUT
#define PORT_USER_TRIS_A10   PORT_TRIS_INPUT
#define PORT_USER_TRIS_A11   PORT_TRIS_INPUT
#define PORT_USER_TRIS_A12   PORT_TRIS_INPUT
#define PORT_USER_TRIS_A13   PORT_TRIS_INPUT
#define PORT_USER_TRIS_A14   PORT_TRIS_INPUT
#define PORT_USER_TRIS_A15   PORT_TRIS_INPUT

/****** ポートB ******/
#define PORT_USER_TRIS_B0    PORT_TRIS_INPUT
#define PORT_USER_TRIS_B1    PORT_TRIS_INPUT
#define PORT_USER_TRIS_B2    PORT_TRIS_INPUT
#define PORT_USER_TRIS_B3    PORT_TRIS_INPUT
#define PORT_USER_TRIS_B4    PORT_TRIS_INPUT
#define PORT_USER_TRIS_B5    PORT_TRIS_INPUT
#define PORT_USER_TRIS_B6    PORT_TRIS_INPUT
#define PORT_USER_TRIS_B7    PORT_TRIS_INPUT
#define PORT_USER_TRIS_B8    PORT_TRIS_INPUT
#define PORT_USER_TRIS_B9    PORT_TRIS_INPUT
#define PORT_USER_TRIS_B10   PORT_TRIS_INPUT
#define PORT_USER_TRIS_B11   PORT_TRIS_INPUT
#define PORT_USER_TRIS_B12   PORT_TRIS_INPUT
#define PORT_USER_TRIS_B13   PORT_TRIS_INPUT
#define PORT_USER_TRIS_B14   PORT_TRIS_INPUT
#define PORT_USER_TRIS_B15   PORT_TRIS_INPUT

/****** ポートC ******/
#define PORT_USER_TRIS_C0    PORT_TRIS_INPUT
#define PORT_USER_TRIS_C1    PORT_TRIS_INPUT
#define PORT_USER_TRIS_C2    PORT_TRIS_INPUT
#define PORT_USER_TRIS_C3    PORT_TRIS_INPUT
#define PORT_USER_TRIS_C4    PORT_TRIS_INPUT
#define PORT_USER_TRIS_C5    PORT_TRIS_INPUT
#define PORT_USER_TRIS_C6    PORT_TRIS_INPUT
#define PORT_USER_TRIS_C7    PORT_TRIS_INPUT
#define PORT_USER_TRIS_C8    PORT_TRIS_INPUT
#define PORT_USER_TRIS_C9    PORT_TRIS_INPUT
#define PORT_USER_TRIS_C10   PORT_TRIS_INPUT
#define PORT_USER_TRIS_C11   PORT_TRIS_INPUT
#define PORT_USER_TRIS_C12   PORT_TRIS_INPUT
#define PORT_USER_TRIS_C13   PORT_TRIS_INPUT
#define PORT_USER_TRIS_C14   PORT_TRIS_INPUT
#define PORT_USER_TRIS_C15   PORT_TRIS_INPUT

/****** ポートD ******/
#define PORT_USER_TRIS_D0    PORT_TRIS_INPUT
#define PORT_USER_TRIS_D1    PORT_TRIS_INPUT
#define PORT_USER_TRIS_D2    PORT_TRIS_INPUT
#define PORT_USER_TRIS_D3    PORT_TRIS_INPUT
#define PORT_USER_TRIS_D4    PORT_TRIS_INPUT
#define PORT_USER_TRIS_D5    PORT_TRIS_INPUT
#define PORT_USER_TRIS_D6    PORT_TRIS_INPUT
#define PORT_USER_TRIS_D7    PORT_TRIS_INPUT
#define PORT_USER_TRIS_D8    PORT_TRIS_INPUT
#define PORT_USER_TRIS_D9    PORT_TRIS_INPUT
#define PORT_USER_TRIS_D10   PORT_TRIS_INPUT
#define PORT_USER_TRIS_D11   PORT_TRIS_INPUT
#define PORT_USER_TRIS_D12   PORT_TRIS_INPUT
#define PORT_USER_TRIS_D13   PORT_TRIS_INPUT
#define PORT_USER_TRIS_D14   PORT_TRIS_INPUT
#define PORT_USER_TRIS_D15   PORT_TRIS_INPUT

/****** ポートE ******/
#define PORT_USER_TRIS_E0    PORT_TRIS_INPUT
#define PORT_USER_TRIS_E1    PORT_TRIS_INPUT
#define PORT_USER_TRIS_E2    PORT_TRIS_INPUT
#define PORT_USER_TRIS_E3    PORT_TRIS_INPUT
#define PORT_USER_TRIS_E4    PORT_TRIS_INPUT
#define PORT_USER_TRIS_E5    PORT_TRIS_INPUT
#define PORT_USER_TRIS_E6    PORT_TRIS_INPUT
#define PORT_USER_TRIS_E7    PORT_TRIS_INPUT
#define PORT_USER_TRIS_E8    PORT_TRIS_INPUT
#define PORT_USER_TRIS_E9    PORT_TRIS_INPUT
#define PORT_USER_TRIS_E10   PORT_TRIS_INPUT
#define PORT_USER_TRIS_E11   PORT_TRIS_INPUT
#define PORT_USER_TRIS_E12   PORT_TRIS_INPUT
#define PORT_USER_TRIS_E13   PORT_TRIS_INPUT
#define PORT_USER_TRIS_E14   PORT_TRIS_INPUT
#define PORT_USER_TRIS_E15   PORT_TRIS_INPUT

/*----------------------------------------------------------------------------*/
/* [出力ピン初期値設定] */
/*   PORT_LAT_LOW = Lowレベル */
/*   PORT_LAT_High = Highレベル */
/*----------------------------------------------------------------------------*/
/****** ポートA ******/
#define PORT_USER_LAT_A0    PORT_LAT_LOW
#define PORT_USER_LAT_A1    PORT_LAT_LOW
#define PORT_USER_LAT_A2    PORT_LAT_LOW
#define PORT_USER_LAT_A3    PORT_LAT_LOW
#define PORT_USER_LAT_A4    PORT_LAT_LOW
#define PORT_USER_LAT_A5    PORT_LAT_LOW
#define PORT_USER_LAT_A6    PORT_LAT_LOW
#define PORT_USER_LAT_A7    PORT_LAT_LOW
#define PORT_USER_LAT_A8    PORT_LAT_LOW
#define PORT_USER_LAT_A9    PORT_LAT_LOW
#define PORT_USER_LAT_A10   PORT_LAT_LOW
#define PORT_USER_LAT_A11   PORT_LAT_LOW
#define PORT_USER_LAT_A12   PORT_LAT_LOW
#define PORT_USER_LAT_A13   PORT_LAT_LOW
#define PORT_USER_LAT_A14   PORT_LAT_LOW
#define PORT_USER_LAT_A15   PORT_LAT_LOW

/****** ポートB ******/
#define PORT_USER_LAT_B0    PORT_LAT_LOW
#define PORT_USER_LAT_B1    PORT_LAT_LOW
#define PORT_USER_LAT_B2    PORT_LAT_LOW
#define PORT_USER_LAT_B3    PORT_LAT_LOW
#define PORT_USER_LAT_B4    PORT_LAT_LOW
#define PORT_USER_LAT_B5    PORT_LAT_LOW
#define PORT_USER_LAT_B6    PORT_LAT_LOW
#define PORT_USER_LAT_B7    PORT_LAT_LOW
#define PORT_USER_LAT_B8    PORT_LAT_LOW
#define PORT_USER_LAT_B9    PORT_LAT_LOW
#define PORT_USER_LAT_B10   PORT_LAT_LOW
#define PORT_USER_LAT_B11   PORT_LAT_LOW
#define PORT_USER_LAT_B12   PORT_LAT_LOW
#define PORT_USER_LAT_B13   PORT_LAT_LOW
#define PORT_USER_LAT_B14   PORT_LAT_LOW
#define PORT_USER_LAT_B15   PORT_LAT_LOW

/****** ポートC ******/
#define PORT_USER_LAT_C0    PORT_LAT_LOW
#define PORT_USER_LAT_C1    PORT_LAT_LOW
#define PORT_USER_LAT_C2    PORT_LAT_LOW
#define PORT_USER_LAT_C3    PORT_LAT_LOW
#define PORT_USER_LAT_C4    PORT_LAT_LOW
#define PORT_USER_LAT_C5    PORT_LAT_LOW
#define PORT_USER_LAT_C6    PORT_LAT_LOW
#define PORT_USER_LAT_C7    PORT_LAT_LOW
#define PORT_USER_LAT_C8    PORT_LAT_LOW
#define PORT_USER_LAT_C9    PORT_LAT_LOW
#define PORT_USER_LAT_C10   PORT_LAT_LOW
#define PORT_USER_LAT_C11   PORT_LAT_LOW
#define PORT_USER_LAT_C12   PORT_LAT_LOW
#define PORT_USER_LAT_C13   PORT_LAT_LOW
#define PORT_USER_LAT_C14   PORT_LAT_LOW
#define PORT_USER_LAT_C15   PORT_LAT_LOW

/****** ポートD ******/
#define PORT_USER_LAT_D0    PORT_LAT_LOW
#define PORT_USER_LAT_D1    PORT_LAT_LOW
#define PORT_USER_LAT_D2    PORT_LAT_LOW
#define PORT_USER_LAT_D3    PORT_LAT_LOW
#define PORT_USER_LAT_D4    PORT_LAT_LOW
#define PORT_USER_LAT_D5    PORT_LAT_LOW
#define PORT_USER_LAT_D6    PORT_LAT_LOW
#define PORT_USER_LAT_D7    PORT_LAT_LOW
#define PORT_USER_LAT_D8    PORT_LAT_LOW
#define PORT_USER_LAT_D9    PORT_LAT_LOW
#define PORT_USER_LAT_D10   PORT_LAT_LOW
#define PORT_USER_LAT_D11   PORT_LAT_LOW
#define PORT_USER_LAT_D12   PORT_LAT_LOW
#define PORT_USER_LAT_D13   PORT_LAT_LOW
#define PORT_USER_LAT_D14   PORT_LAT_LOW
#define PORT_USER_LAT_D15   PORT_LAT_LOW

/****** ポートE ******/
#define PORT_USER_LAT_E0    PORT_LAT_LOW
#define PORT_USER_LAT_E1    PORT_LAT_LOW
#define PORT_USER_LAT_E2    PORT_LAT_LOW
#define PORT_USER_LAT_E3    PORT_LAT_LOW
#define PORT_USER_LAT_E4    PORT_LAT_LOW
#define PORT_USER_LAT_E5    PORT_LAT_LOW
#define PORT_USER_LAT_E6    PORT_LAT_LOW
#define PORT_USER_LAT_E7    PORT_LAT_LOW
#define PORT_USER_LAT_E8    PORT_LAT_LOW
#define PORT_USER_LAT_E9    PORT_LAT_LOW
#define PORT_USER_LAT_E10   PORT_LAT_LOW
#define PORT_USER_LAT_E11   PORT_LAT_LOW
#define PORT_USER_LAT_E12   PORT_LAT_LOW
#define PORT_USER_LAT_E13   PORT_LAT_LOW
#define PORT_USER_LAT_E14   PORT_LAT_LOW
#define PORT_USER_LAT_E15   PORT_LAT_LOW

/*----------------------------------------------------------------------------*/
/* [オープンドレイン設定] */
/*   PORT_ODC_DISABLE = オープンドレイン無効 */
/*   PORT_ODC_ENABLE = オープンドレイン有効 */
/*----------------------------------------------------------------------------*/
/****** ポートA ******/
#define PORT_USER_ODC_A0    PORT_ODC_DISABLE
#define PORT_USER_ODC_A1    PORT_ODC_DISABLE
#define PORT_USER_ODC_A2    PORT_ODC_DISABLE
#define PORT_USER_ODC_A3    PORT_ODC_DISABLE
#define PORT_USER_ODC_A4    PORT_ODC_DISABLE
#define PORT_USER_ODC_A5    PORT_ODC_DISABLE
#define PORT_USER_ODC_A6    PORT_ODC_DISABLE
#define PORT_USER_ODC_A7    PORT_ODC_DISABLE
#define PORT_USER_ODC_A8    PORT_ODC_DISABLE
#define PORT_USER_ODC_A9    PORT_ODC_DISABLE
#define PORT_USER_ODC_A10   PORT_ODC_DISABLE
#define PORT_USER_ODC_A11   PORT_ODC_DISABLE
#define PORT_USER_ODC_A12   PORT_ODC_DISABLE
#define PORT_USER_ODC_A13   PORT_ODC_DISABLE
#define PORT_USER_ODC_A14   PORT_ODC_DISABLE
#define PORT_USER_ODC_A15   PORT_ODC_DISABLE

/****** ポートB ******/
#define PORT_USER_ODC_B0    PORT_ODC_DISABLE
#define PORT_USER_ODC_B1    PORT_ODC_DISABLE
#define PORT_USER_ODC_B2    PORT_ODC_DISABLE
#define PORT_USER_ODC_B3    PORT_ODC_DISABLE
#define PORT_USER_ODC_B4    PORT_ODC_DISABLE
#define PORT_USER_ODC_B5    PORT_ODC_DISABLE
#define PORT_USER_ODC_B6    PORT_ODC_DISABLE
#define PORT_USER_ODC_B7    PORT_ODC_DISABLE
#define PORT_USER_ODC_B8    PORT_ODC_DISABLE
#define PORT_USER_ODC_B9    PORT_ODC_DISABLE
#define PORT_USER_ODC_B10   PORT_ODC_DISABLE
#define PORT_USER_ODC_B11   PORT_ODC_DISABLE
#define PORT_USER_ODC_B12   PORT_ODC_DISABLE
#define PORT_USER_ODC_B13   PORT_ODC_DISABLE
#define PORT_USER_ODC_B14   PORT_ODC_DISABLE
#define PORT_USER_ODC_B15   PORT_ODC_DISABLE

/****** ポートC ******/
#define PORT_USER_ODC_C0    PORT_ODC_DISABLE
#define PORT_USER_ODC_C1    PORT_ODC_DISABLE
#define PORT_USER_ODC_C2    PORT_ODC_DISABLE
#define PORT_USER_ODC_C3    PORT_ODC_DISABLE
#define PORT_USER_ODC_C4    PORT_ODC_DISABLE
#define PORT_USER_ODC_C5    PORT_ODC_DISABLE
#define PORT_USER_ODC_C6    PORT_ODC_DISABLE
#define PORT_USER_ODC_C7    PORT_ODC_DISABLE
#define PORT_USER_ODC_C8    PORT_ODC_DISABLE
#define PORT_USER_ODC_C9    PORT_ODC_DISABLE
#define PORT_USER_ODC_C10   PORT_ODC_DISABLE
#define PORT_USER_ODC_C11   PORT_ODC_DISABLE
#define PORT_USER_ODC_C12   PORT_ODC_DISABLE
#define PORT_USER_ODC_C13   PORT_ODC_DISABLE
#define PORT_USER_ODC_C14   PORT_ODC_DISABLE
#define PORT_USER_ODC_C15   PORT_ODC_DISABLE

/****** ポートD ******/
#define PORT_USER_ODC_D0    PORT_ODC_DISABLE
#define PORT_USER_ODC_D1    PORT_ODC_DISABLE
#define PORT_USER_ODC_D2    PORT_ODC_DISABLE
#define PORT_USER_ODC_D3    PORT_ODC_DISABLE
#define PORT_USER_ODC_D4    PORT_ODC_DISABLE
#define PORT_USER_ODC_D5    PORT_ODC_DISABLE
#define PORT_USER_ODC_D6    PORT_ODC_DISABLE
#define PORT_USER_ODC_D7    PORT_ODC_DISABLE
#define PORT_USER_ODC_D8    PORT_ODC_DISABLE
#define PORT_USER_ODC_D9    PORT_ODC_DISABLE
#define PORT_USER_ODC_D10   PORT_ODC_DISABLE
#define PORT_USER_ODC_D11   PORT_ODC_DISABLE
#define PORT_USER_ODC_D12   PORT_ODC_DISABLE
#define PORT_USER_ODC_D13   PORT_ODC_DISABLE
#define PORT_USER_ODC_D14   PORT_ODC_DISABLE
#define PORT_USER_ODC_D15   PORT_ODC_DISABLE

/****** ポートE ******/
#define PORT_USER_ODC_E0    PORT_ODC_DISABLE
#define PORT_USER_ODC_E1    PORT_ODC_DISABLE
#define PORT_USER_ODC_E2    PORT_ODC_DISABLE
#define PORT_USER_ODC_E3    PORT_ODC_DISABLE
#define PORT_USER_ODC_E4    PORT_ODC_DISABLE
#define PORT_USER_ODC_E5    PORT_ODC_DISABLE
#define PORT_USER_ODC_E6    PORT_ODC_DISABLE
#define PORT_USER_ODC_E7    PORT_ODC_DISABLE
#define PORT_USER_ODC_E8    PORT_ODC_DISABLE
#define PORT_USER_ODC_E9    PORT_ODC_DISABLE
#define PORT_USER_ODC_E10   PORT_ODC_DISABLE
#define PORT_USER_ODC_E11   PORT_ODC_DISABLE
#define PORT_USER_ODC_E12   PORT_ODC_DISABLE
#define PORT_USER_ODC_E13   PORT_ODC_DISABLE
#define PORT_USER_ODC_E14   PORT_ODC_DISABLE
#define PORT_USER_ODC_E15   PORT_ODC_DISABLE
/*----------------------------------------------------------------------------*/
/* [プルアップピン設定] */
/*   PORT_CNPU_DISABLE = プルアップ無効 */
/*   PORT_CNPU_ENABLE = プルアップ有効 */
/*----------------------------------------------------------------------------*/
/****** ポートA ******/
#define PORT_USER_CNPU_A0    PORT_CNPU_DISABLE
#define PORT_USER_CNPU_A1    PORT_CNPU_DISABLE
#define PORT_USER_CNPU_A2    PORT_CNPU_DISABLE
#define PORT_USER_CNPU_A3    PORT_CNPU_DISABLE
#define PORT_USER_CNPU_A4    PORT_CNPU_DISABLE
#define PORT_USER_CNPU_A5    PORT_CNPU_DISABLE
#define PORT_USER_CNPU_A6    PORT_CNPU_DISABLE
#define PORT_USER_CNPU_A7    PORT_CNPU_DISABLE
#define PORT_USER_CNPU_A8    PORT_CNPU_DISABLE
#define PORT_USER_CNPU_A9    PORT_CNPU_DISABLE
#define PORT_USER_CNPU_A10   PORT_CNPU_DISABLE
#define PORT_USER_CNPU_A11   PORT_CNPU_DISABLE
#define PORT_USER_CNPU_A12   PORT_CNPU_DISABLE
#define PORT_USER_CNPU_A13   PORT_CNPU_DISABLE
#define PORT_USER_CNPU_A14   PORT_CNPU_DISABLE
#define PORT_USER_CNPU_A15   PORT_CNPU_DISABLE

/****** ポートB ******/
#define PORT_USER_CNPU_B0    PORT_CNPU_DISABLE
#define PORT_USER_CNPU_B1    PORT_CNPU_DISABLE
#define PORT_USER_CNPU_B2    PORT_CNPU_DISABLE
#define PORT_USER_CNPU_B3    PORT_CNPU_DISABLE
#define PORT_USER_CNPU_B4    PORT_CNPU_DISABLE
#define PORT_USER_CNPU_B5    PORT_CNPU_DISABLE
#define PORT_USER_CNPU_B6    PORT_CNPU_DISABLE
#define PORT_USER_CNPU_B7    PORT_CNPU_DISABLE
#define PORT_USER_CNPU_B8    PORT_CNPU_DISABLE
#define PORT_USER_CNPU_B9    PORT_CNPU_DISABLE
#define PORT_USER_CNPU_B10   PORT_CNPU_DISABLE
#define PORT_USER_CNPU_B11   PORT_CNPU_DISABLE
#define PORT_USER_CNPU_B12   PORT_CNPU_DISABLE
#define PORT_USER_CNPU_B13   PORT_CNPU_DISABLE
#define PORT_USER_CNPU_B14   PORT_CNPU_DISABLE
#define PORT_USER_CNPU_B15   PORT_CNPU_DISABLE

/****** ポートC ******/
#define PORT_USER_CNPU_C0    PORT_CNPU_DISABLE
#define PORT_USER_CNPU_C1    PORT_CNPU_DISABLE
#define PORT_USER_CNPU_C2    PORT_CNPU_DISABLE
#define PORT_USER_CNPU_C3    PORT_CNPU_DISABLE
#define PORT_USER_CNPU_C4    PORT_CNPU_DISABLE
#define PORT_USER_CNPU_C5    PORT_CNPU_DISABLE
#define PORT_USER_CNPU_C6    PORT_CNPU_DISABLE
#define PORT_USER_CNPU_C7    PORT_CNPU_DISABLE
#define PORT_USER_CNPU_C8    PORT_CNPU_DISABLE
#define PORT_USER_CNPU_C9    PORT_CNPU_DISABLE
#define PORT_USER_CNPU_C10   PORT_CNPU_DISABLE
#define PORT_USER_CNPU_C11   PORT_CNPU_DISABLE
#define PORT_USER_CNPU_C12   PORT_CNPU_DISABLE
#define PORT_USER_CNPU_C13   PORT_CNPU_DISABLE
#define PORT_USER_CNPU_C14   PORT_CNPU_DISABLE
#define PORT_USER_CNPU_C15   PORT_CNPU_DISABLE

/****** ポートD ******/
#define PORT_USER_CNPU_D0    PORT_CNPU_DISABLE
#define PORT_USER_CNPU_D1    PORT_CNPU_DISABLE
#define PORT_USER_CNPU_D2    PORT_CNPU_DISABLE
#define PORT_USER_CNPU_D3    PORT_CNPU_DISABLE
#define PORT_USER_CNPU_D4    PORT_CNPU_DISABLE
#define PORT_USER_CNPU_D5    PORT_CNPU_DISABLE
#define PORT_USER_CNPU_D6    PORT_CNPU_DISABLE
#define PORT_USER_CNPU_D7    PORT_CNPU_DISABLE
#define PORT_USER_CNPU_D8    PORT_CNPU_DISABLE
#define PORT_USER_CNPU_D9    PORT_CNPU_DISABLE
#define PORT_USER_CNPU_D10   PORT_CNPU_DISABLE
#define PORT_USER_CNPU_D11   PORT_CNPU_DISABLE
#define PORT_USER_CNPU_D12   PORT_CNPU_DISABLE
#define PORT_USER_CNPU_D13   PORT_CNPU_DISABLE
#define PORT_USER_CNPU_D14   PORT_CNPU_DISABLE
#define PORT_USER_CNPU_D15   PORT_CNPU_DISABLE

/****** ポートE ******/
#define PORT_USER_CNPU_E0    PORT_CNPU_DISABLE
#define PORT_USER_CNPU_E1    PORT_CNPU_DISABLE
#define PORT_USER_CNPU_E2    PORT_CNPU_DISABLE
#define PORT_USER_CNPU_E3    PORT_CNPU_DISABLE
#define PORT_USER_CNPU_E4    PORT_CNPU_DISABLE
#define PORT_USER_CNPU_E5    PORT_CNPU_DISABLE
#define PORT_USER_CNPU_E6    PORT_CNPU_DISABLE
#define PORT_USER_CNPU_E7    PORT_CNPU_DISABLE
#define PORT_USER_CNPU_E8    PORT_CNPU_DISABLE
#define PORT_USER_CNPU_E9    PORT_CNPU_DISABLE
#define PORT_USER_CNPU_E10   PORT_CNPU_DISABLE
#define PORT_USER_CNPU_E11   PORT_CNPU_DISABLE
#define PORT_USER_CNPU_E12   PORT_CNPU_DISABLE
#define PORT_USER_CNPU_E13   PORT_CNPU_DISABLE
#define PORT_USER_CNPU_E14   PORT_CNPU_DISABLE
#define PORT_USER_CNPU_E15   PORT_CNPU_DISABLE

/*----------------------------------------------------------------------------*/
/* [プルダウンピン設定] */
/*   PORT_CNPD_DISABLE = プルダウン無効 */
/*   PORT_CNPD_ENABLE = プルダウン有効 */
/*----------------------------------------------------------------------------*/
/****** ポートA ******/
#define PORT_USER_CNPD_A0    PORT_CNPD_DISABLE
#define PORT_USER_CNPD_A1    PORT_CNPD_DISABLE
#define PORT_USER_CNPD_A2    PORT_CNPD_DISABLE
#define PORT_USER_CNPD_A3    PORT_CNPD_DISABLE
#define PORT_USER_CNPD_A4    PORT_CNPD_DISABLE
#define PORT_USER_CNPD_A5    PORT_CNPD_DISABLE
#define PORT_USER_CNPD_A6    PORT_CNPD_DISABLE
#define PORT_USER_CNPD_A7    PORT_CNPD_DISABLE
#define PORT_USER_CNPD_A8    PORT_CNPD_DISABLE
#define PORT_USER_CNPD_A9    PORT_CNPD_DISABLE
#define PORT_USER_CNPD_A10   PORT_CNPD_DISABLE
#define PORT_USER_CNPD_A11   PORT_CNPD_DISABLE
#define PORT_USER_CNPD_A12   PORT_CNPD_DISABLE
#define PORT_USER_CNPD_A13   PORT_CNPD_DISABLE
#define PORT_USER_CNPD_A14   PORT_CNPD_DISABLE
#define PORT_USER_CNPD_A15   PORT_CNPD_DISABLE

/****** ポートB ******/
#define PORT_USER_CNPD_B0    PORT_CNPD_DISABLE
#define PORT_USER_CNPD_B1    PORT_CNPD_DISABLE
#define PORT_USER_CNPD_B2    PORT_CNPD_DISABLE
#define PORT_USER_CNPD_B3    PORT_CNPD_DISABLE
#define PORT_USER_CNPD_B4    PORT_CNPD_DISABLE
#define PORT_USER_CNPD_B5    PORT_CNPD_DISABLE
#define PORT_USER_CNPD_B6    PORT_CNPD_DISABLE
#define PORT_USER_CNPD_B7    PORT_CNPD_DISABLE
#define PORT_USER_CNPD_B8    PORT_CNPD_DISABLE
#define PORT_USER_CNPD_B9    PORT_CNPD_DISABLE
#define PORT_USER_CNPD_B10   PORT_CNPD_DISABLE
#define PORT_USER_CNPD_B11   PORT_CNPD_DISABLE
#define PORT_USER_CNPD_B12   PORT_CNPD_DISABLE
#define PORT_USER_CNPD_B13   PORT_CNPD_DISABLE
#define PORT_USER_CNPD_B14   PORT_CNPD_DISABLE
#define PORT_USER_CNPD_B15   PORT_CNPD_DISABLE

/****** ポートC ******/
#define PORT_USER_CNPD_C0    PORT_CNPD_DISABLE
#define PORT_USER_CNPD_C1    PORT_CNPD_DISABLE
#define PORT_USER_CNPD_C2    PORT_CNPD_DISABLE
#define PORT_USER_CNPD_C3    PORT_CNPD_DISABLE
#define PORT_USER_CNPD_C4    PORT_CNPD_DISABLE
#define PORT_USER_CNPD_C5    PORT_CNPD_DISABLE
#define PORT_USER_CNPD_C6    PORT_CNPD_DISABLE
#define PORT_USER_CNPD_C7    PORT_CNPD_DISABLE
#define PORT_USER_CNPD_C8    PORT_CNPD_DISABLE
#define PORT_USER_CNPD_C9    PORT_CNPD_DISABLE
#define PORT_USER_CNPD_C10   PORT_CNPD_DISABLE
#define PORT_USER_CNPD_C11   PORT_CNPD_DISABLE
#define PORT_USER_CNPD_C12   PORT_CNPD_DISABLE
#define PORT_USER_CNPD_C13   PORT_CNPD_DISABLE
#define PORT_USER_CNPD_C14   PORT_CNPD_DISABLE
#define PORT_USER_CNPD_C15   PORT_CNPD_DISABLE

/****** ポートD ******/
#define PORT_USER_CNPD_D0    PORT_CNPD_DISABLE
#define PORT_USER_CNPD_D1    PORT_CNPD_DISABLE
#define PORT_USER_CNPD_D2    PORT_CNPD_DISABLE
#define PORT_USER_CNPD_D3    PORT_CNPD_DISABLE
#define PORT_USER_CNPD_D4    PORT_CNPD_DISABLE
#define PORT_USER_CNPD_D5    PORT_CNPD_DISABLE
#define PORT_USER_CNPD_D6    PORT_CNPD_DISABLE
#define PORT_USER_CNPD_D7    PORT_CNPD_DISABLE
#define PORT_USER_CNPD_D8    PORT_CNPD_DISABLE
#define PORT_USER_CNPD_D9    PORT_CNPD_DISABLE
#define PORT_USER_CNPD_D10   PORT_CNPD_DISABLE
#define PORT_USER_CNPD_D11   PORT_CNPD_DISABLE
#define PORT_USER_CNPD_D12   PORT_CNPD_DISABLE
#define PORT_USER_CNPD_D13   PORT_CNPD_DISABLE
#define PORT_USER_CNPD_D14   PORT_CNPD_DISABLE
#define PORT_USER_CNPD_D15   PORT_CNPD_DISABLE

/****** ポートE ******/
#define PORT_USER_CNPD_E0    PORT_CNPD_DISABLE
#define PORT_USER_CNPD_E1    PORT_CNPD_DISABLE
#define PORT_USER_CNPD_E2    PORT_CNPD_DISABLE
#define PORT_USER_CNPD_E3    PORT_CNPD_DISABLE
#define PORT_USER_CNPD_E4    PORT_CNPD_DISABLE
#define PORT_USER_CNPD_E5    PORT_CNPD_DISABLE
#define PORT_USER_CNPD_E6    PORT_CNPD_DISABLE
#define PORT_USER_CNPD_E7    PORT_CNPD_DISABLE
#define PORT_USER_CNPD_E8    PORT_CNPD_DISABLE
#define PORT_USER_CNPD_E9    PORT_CNPD_DISABLE
#define PORT_USER_CNPD_E10   PORT_CNPD_DISABLE
#define PORT_USER_CNPD_E11   PORT_CNPD_DISABLE
#define PORT_USER_CNPD_E12   PORT_CNPD_DISABLE
#define PORT_USER_CNPD_E13   PORT_CNPD_DISABLE
#define PORT_USER_CNPD_E14   PORT_CNPD_DISABLE
#define PORT_USER_CNPD_E15   PORT_CNPD_DISABLE
/*----------------------------------------------------------------------------*/
/* [状態変化割り込み0有効化設定] */
/*   PORT_CNEN_DISABLE =    状態変化割り込み無効 */
/*   PORT_CNEN_ENABLE =     状態変化割り込み有効 */
/*----------------------------------------------------------------------------*/
/****** ポートA ******/
#define PORT_USER_CNEN0_A0    PORT_CNEN_DISABLE
#define PORT_USER_CNEN0_A1    PORT_CNEN_DISABLE
#define PORT_USER_CNEN0_A2    PORT_CNEN_DISABLE
#define PORT_USER_CNEN0_A3    PORT_CNEN_DISABLE
#define PORT_USER_CNEN0_A4    PORT_CNEN_DISABLE
#define PORT_USER_CNEN0_A5    PORT_CNEN_DISABLE
#define PORT_USER_CNEN0_A6    PORT_CNEN_DISABLE
#define PORT_USER_CNEN0_A7    PORT_CNEN_DISABLE
#define PORT_USER_CNEN0_A8    PORT_CNEN_DISABLE
#define PORT_USER_CNEN0_A9    PORT_CNEN_DISABLE
#define PORT_USER_CNEN0_A10   PORT_CNEN_DISABLE
#define PORT_USER_CNEN0_A11   PORT_CNEN_DISABLE
#define PORT_USER_CNEN0_A12   PORT_CNEN_DISABLE
#define PORT_USER_CNEN0_A13   PORT_CNEN_DISABLE
#define PORT_USER_CNEN0_A14   PORT_CNEN_DISABLE
#define PORT_USER_CNEN0_A15   PORT_CNEN_DISABLE

/****** ポートB ******/
#define PORT_USER_CNEN0_B0    PORT_CNEN_DISABLE
#define PORT_USER_CNEN0_B1    PORT_CNEN_DISABLE
#define PORT_USER_CNEN0_B2    PORT_CNEN_DISABLE
#define PORT_USER_CNEN0_B3    PORT_CNEN_DISABLE
#define PORT_USER_CNEN0_B4    PORT_CNEN_DISABLE
#define PORT_USER_CNEN0_B5    PORT_CNEN_DISABLE
#define PORT_USER_CNEN0_B6    PORT_CNEN_DISABLE
#define PORT_USER_CNEN0_B7    PORT_CNEN_DISABLE
#define PORT_USER_CNEN0_B8    PORT_CNEN_DISABLE
#define PORT_USER_CNEN0_B9    PORT_CNEN_DISABLE
#define PORT_USER_CNEN0_B10   PORT_CNEN_DISABLE
#define PORT_USER_CNEN0_B11   PORT_CNEN_DISABLE
#define PORT_USER_CNEN0_B12   PORT_CNEN_DISABLE
#define PORT_USER_CNEN0_B13   PORT_CNEN_DISABLE
#define PORT_USER_CNEN0_B14   PORT_CNEN_DISABLE
#define PORT_USER_CNEN0_B15   PORT_CNEN_DISABLE

/****** ポートC ******/
#define PORT_USER_CNEN0_C0    PORT_CNEN_DISABLE
#define PORT_USER_CNEN0_C1    PORT_CNEN_DISABLE
#define PORT_USER_CNEN0_C2    PORT_CNEN_DISABLE
#define PORT_USER_CNEN0_C3    PORT_CNEN_DISABLE
#define PORT_USER_CNEN0_C4    PORT_CNEN_DISABLE
#define PORT_USER_CNEN0_C5    PORT_CNEN_DISABLE
#define PORT_USER_CNEN0_C6    PORT_CNEN_DISABLE
#define PORT_USER_CNEN0_C7    PORT_CNEN_DISABLE
#define PORT_USER_CNEN0_C8    PORT_CNEN_DISABLE
#define PORT_USER_CNEN0_C9    PORT_CNEN_DISABLE
#define PORT_USER_CNEN0_C10   PORT_CNEN_DISABLE
#define PORT_USER_CNEN0_C11   PORT_CNEN_DISABLE
#define PORT_USER_CNEN0_C12   PORT_CNEN_DISABLE
#define PORT_USER_CNEN0_C13   PORT_CNEN_DISABLE
#define PORT_USER_CNEN0_C14   PORT_CNEN_DISABLE
#define PORT_USER_CNEN0_C15   PORT_CNEN_DISABLE

/****** ポートD ******/
#define PORT_USER_CNEN0_D0    PORT_CNEN_DISABLE
#define PORT_USER_CNEN0_D1    PORT_CNEN_DISABLE
#define PORT_USER_CNEN0_D2    PORT_CNEN_DISABLE
#define PORT_USER_CNEN0_D3    PORT_CNEN_DISABLE
#define PORT_USER_CNEN0_D4    PORT_CNEN_DISABLE
#define PORT_USER_CNEN0_D5    PORT_CNEN_DISABLE
#define PORT_USER_CNEN0_D6    PORT_CNEN_DISABLE
#define PORT_USER_CNEN0_D7    PORT_CNEN_DISABLE
#define PORT_USER_CNEN0_D8    PORT_CNEN_DISABLE
#define PORT_USER_CNEN0_D9    PORT_CNEN_DISABLE
#define PORT_USER_CNEN0_D10   PORT_CNEN_DISABLE
#define PORT_USER_CNEN0_D11   PORT_CNEN_DISABLE
#define PORT_USER_CNEN0_D12   PORT_CNEN_DISABLE
#define PORT_USER_CNEN0_D13   PORT_CNEN_DISABLE
#define PORT_USER_CNEN0_D14   PORT_CNEN_DISABLE
#define PORT_USER_CNEN0_D15   PORT_CNEN_DISABLE

/****** ポートE ******/
#define PORT_USER_CNEN0_E0    PORT_CNEN_DISABLE
#define PORT_USER_CNEN0_E1    PORT_CNEN_DISABLE
#define PORT_USER_CNEN0_E2    PORT_CNEN_DISABLE
#define PORT_USER_CNEN0_E3    PORT_CNEN_DISABLE
#define PORT_USER_CNEN0_E4    PORT_CNEN_DISABLE
#define PORT_USER_CNEN0_E5    PORT_CNEN_DISABLE
#define PORT_USER_CNEN0_E6    PORT_CNEN_DISABLE
#define PORT_USER_CNEN0_E7    PORT_CNEN_DISABLE
#define PORT_USER_CNEN0_E8    PORT_CNEN_DISABLE
#define PORT_USER_CNEN0_E9    PORT_CNEN_DISABLE
#define PORT_USER_CNEN0_E10   PORT_CNEN_DISABLE
#define PORT_USER_CNEN0_E11   PORT_CNEN_DISABLE
#define PORT_USER_CNEN0_E12   PORT_CNEN_DISABLE
#define PORT_USER_CNEN0_E13   PORT_CNEN_DISABLE
#define PORT_USER_CNEN0_E14   PORT_CNEN_DISABLE
#define PORT_USER_CNEN0_E15   PORT_CNEN_DISABLE

/*----------------------------------------------------------------------------*/
/* [状態変化割り込み1有効化設定] */
/*   PORT_CNEN_DISABLE =    状態変化割り込み無効 */
/*   PORT_CNEN_ENABLE =     状態変化割り込み有効 */
/*----------------------------------------------------------------------------*/
#define PORT_USER_CNEN1_A0    PORT_CNEN_DISABLE
#define PORT_USER_CNEN1_A1    PORT_CNEN_DISABLE
#define PORT_USER_CNEN1_A2    PORT_CNEN_DISABLE
#define PORT_USER_CNEN1_A3    PORT_CNEN_DISABLE
#define PORT_USER_CNEN1_A4    PORT_CNEN_DISABLE
#define PORT_USER_CNEN1_A5    PORT_CNEN_DISABLE
#define PORT_USER_CNEN1_A6    PORT_CNEN_DISABLE
#define PORT_USER_CNEN1_A7    PORT_CNEN_DISABLE
#define PORT_USER_CNEN1_A8    PORT_CNEN_DISABLE
#define PORT_USER_CNEN1_A9    PORT_CNEN_DISABLE
#define PORT_USER_CNEN1_A10   PORT_CNEN_DISABLE
#define PORT_USER_CNEN1_A11   PORT_CNEN_DISABLE
#define PORT_USER_CNEN1_A12   PORT_CNEN_DISABLE
#define PORT_USER_CNEN1_A13   PORT_CNEN_DISABLE
#define PORT_USER_CNEN1_A14   PORT_CNEN_DISABLE
#define PORT_USER_CNEN1_A15   PORT_CNEN_DISABLE

/****** ポートB ******/
#define PORT_USER_CNEN1_B0    PORT_CNEN_DISABLE
#define PORT_USER_CNEN1_B1    PORT_CNEN_DISABLE
#define PORT_USER_CNEN1_B2    PORT_CNEN_DISABLE
#define PORT_USER_CNEN1_B3    PORT_CNEN_DISABLE
#define PORT_USER_CNEN1_B4    PORT_CNEN_DISABLE
#define PORT_USER_CNEN1_B5    PORT_CNEN_DISABLE
#define PORT_USER_CNEN1_B6    PORT_CNEN_DISABLE
#define PORT_USER_CNEN1_B7    PORT_CNEN_DISABLE
#define PORT_USER_CNEN1_B8    PORT_CNEN_DISABLE
#define PORT_USER_CNEN1_B9    PORT_CNEN_DISABLE
#define PORT_USER_CNEN1_B10   PORT_CNEN_DISABLE
#define PORT_USER_CNEN1_B11   PORT_CNEN_DISABLE
#define PORT_USER_CNEN1_B12   PORT_CNEN_DISABLE
#define PORT_USER_CNEN1_B13   PORT_CNEN_DISABLE
#define PORT_USER_CNEN1_B14   PORT_CNEN_DISABLE
#define PORT_USER_CNEN1_B15   PORT_CNEN_DISABLE

/****** ポートC ******/
#define PORT_USER_CNEN1_C0    PORT_CNEN_DISABLE
#define PORT_USER_CNEN1_C1    PORT_CNEN_DISABLE
#define PORT_USER_CNEN1_C2    PORT_CNEN_DISABLE
#define PORT_USER_CNEN1_C3    PORT_CNEN_DISABLE
#define PORT_USER_CNEN1_C4    PORT_CNEN_DISABLE
#define PORT_USER_CNEN1_C5    PORT_CNEN_DISABLE
#define PORT_USER_CNEN1_C6    PORT_CNEN_DISABLE
#define PORT_USER_CNEN1_C7    PORT_CNEN_DISABLE
#define PORT_USER_CNEN1_C8    PORT_CNEN_DISABLE
#define PORT_USER_CNEN1_C9    PORT_CNEN_DISABLE
#define PORT_USER_CNEN1_C10   PORT_CNEN_DISABLE
#define PORT_USER_CNEN1_C11   PORT_CNEN_DISABLE
#define PORT_USER_CNEN1_C12   PORT_CNEN_DISABLE
#define PORT_USER_CNEN1_C13   PORT_CNEN_DISABLE
#define PORT_USER_CNEN1_C14   PORT_CNEN_DISABLE
#define PORT_USER_CNEN1_C15   PORT_CNEN_DISABLE

/****** ポートD ******/
#define PORT_USER_CNEN1_D0    PORT_CNEN_DISABLE
#define PORT_USER_CNEN1_D1    PORT_CNEN_DISABLE
#define PORT_USER_CNEN1_D2    PORT_CNEN_DISABLE
#define PORT_USER_CNEN1_D3    PORT_CNEN_DISABLE
#define PORT_USER_CNEN1_D4    PORT_CNEN_DISABLE
#define PORT_USER_CNEN1_D5    PORT_CNEN_DISABLE
#define PORT_USER_CNEN1_D6    PORT_CNEN_DISABLE
#define PORT_USER_CNEN1_D7    PORT_CNEN_DISABLE
#define PORT_USER_CNEN1_D8    PORT_CNEN_DISABLE
#define PORT_USER_CNEN1_D9    PORT_CNEN_DISABLE
#define PORT_USER_CNEN1_D10   PORT_CNEN_DISABLE
#define PORT_USER_CNEN1_D11   PORT_CNEN_DISABLE
#define PORT_USER_CNEN1_D12   PORT_CNEN_DISABLE
#define PORT_USER_CNEN1_D13   PORT_CNEN_DISABLE
#define PORT_USER_CNEN1_D14   PORT_CNEN_DISABLE
#define PORT_USER_CNEN1_D15   PORT_CNEN_DISABLE

/****** ポートE ******/
#define PORT_USER_CNEN1_E0    PORT_CNEN_DISABLE
#define PORT_USER_CNEN1_E1    PORT_CNEN_DISABLE
#define PORT_USER_CNEN1_E2    PORT_CNEN_DISABLE
#define PORT_USER_CNEN1_E3    PORT_CNEN_DISABLE
#define PORT_USER_CNEN1_E4    PORT_CNEN_DISABLE
#define PORT_USER_CNEN1_E5    PORT_CNEN_DISABLE
#define PORT_USER_CNEN1_E6    PORT_CNEN_DISABLE
#define PORT_USER_CNEN1_E7    PORT_CNEN_DISABLE
#define PORT_USER_CNEN1_E8    PORT_CNEN_DISABLE
#define PORT_USER_CNEN1_E9    PORT_CNEN_DISABLE
#define PORT_USER_CNEN1_E10   PORT_CNEN_DISABLE
#define PORT_USER_CNEN1_E11   PORT_CNEN_DISABLE
#define PORT_USER_CNEN1_E12   PORT_CNEN_DISABLE
#define PORT_USER_CNEN1_E13   PORT_CNEN_DISABLE
#define PORT_USER_CNEN1_E14   PORT_CNEN_DISABLE
#define PORT_USER_CNEN1_E15   PORT_CNEN_DISABLE

/*----------------------------------------------------------------------------*/
/* [状態変化通知設定] */
/*   PORT_CNCON_ON_DISABLE =    状態変化通知無効 */
/*   PORT_CNCON_ON_ENABLE =     状態変化通知有効 */
/*----------------------------------------------------------------------------*/
#define PORT_USER_CNCONA_ON     PORT_CNCON_ON_DISABLE
#define PORT_USER_CNCONB_ON     PORT_CNCON_ON_DISABLE
#define PORT_USER_CNCONC_ON     PORT_CNCON_ON_DISABLE
#define PORT_USER_CNCOND_ON     PORT_CNCON_ON_DISABLE
#define PORT_USER_CNCONE_ON     PORT_CNCON_ON_DISABLE
/*----------------------------------------------------------------------------*/
/* [] */
/*   PORT_CNCON_STYLE_0 =     */
/*   PORT_CNCON_STYLE_1 =      */
/*----------------------------------------------------------------------------*/
#define PORT_USER_CNCONA_STYLE  PORT_CNCON_STYLE_0
#define PORT_USER_CNCONB_STYLE  PORT_CNCON_STYLE_0
#define PORT_USER_CNCONC_STYLE  PORT_CNCON_STYLE_0
#define PORT_USER_CNCOND_STYLE  PORT_CNCON_STYLE_0
#define PORT_USER_CNCONE_STYLE  PORT_CNCON_STYLE_0
#endif
/*----------------------------------------------------------------------------*/
/*変数定義*/
/*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*/
/*プロトタイプ宣言*/
/*----------------------------------------------------------------------------*/

#endif	/* PORT_USER_H */

