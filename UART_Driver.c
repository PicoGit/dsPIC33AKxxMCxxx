/*----------------------------------------------------------------------------*/
/*【FILE】UARTに関するドライバ関数*/
/*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*/
/*インクルードファイル*/
/*----------------------------------------------------------------------------*/
#include <xc.h>
#include "BoardSupportPackage.h"
#include "init_fix.h"
#include "typedef.h"
#include "uart_driver.h"
#include "uart_user.h"
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
* @fn        vdg_UART1_Set_Register(void)
* @brief        UART1レジスタを初期化します
* @param
* @return
* @detail 
 */
/*----------------------------------------------------------------------------*/
void vdg_UART1_Set_Register(void)
{
#if ( PMD_U1MD == PMD_MODULE_ENABLE ) 
	/*-----------------------------------------------------------------------*/
	/* U1CONレジスタ */
	/*-----------------------------------------------------------------------*/
		U1CON =  
			( UART_USER_U1MODE_MOD << 0u) |      
            ( UART_USER_U1MODE_URXEN << 4u) |     
            ( UART_USER_U1MODE_UTXEN << 5u) |     
            ( UART_USER_U1MODE_ABAUD << 6u) |    
            ( UART_USER_U1MODE_BRGS << 7u) |      
            ( UART_USER_U1MODE_SENDB << 8u) |	
            ( UART_USER_U1MODE_BRKOVR << 9u) |	
            ( UART_USER_U1MODE_RXBIMD << 11u) |	
            ( UART_USER_U1MODE_WUE << 12u) |    
            ( UART_USER_U1MODE_SIDL << 13u)|     
			( UART_USER_U1MODE_FLO << 16u) |	
			( UART_USER_U1MODE_TXPOL << 18u) |	
            ( UART_USER_U1MODE_C0EN << 19u) |
            ( UART_USER_U1MODE_STP << 4u) |
            ( UART_USER_U1MODE_RXPOL << 22u) |
			( UART_USER_U1MODE_RUNOVF << 23u) |
			( UART_USER_U1MODE_HALFDPLX << 24u) |	
            ( UART_USER_U1MODE_CLKSEL << 25u) |
            ( UART_USER_U1MODE_CLKMODE << 27u) |
			( UART_USER_U1MODE_SLPEN << 31u) ;
		#ifdef DEF_BITNAME
			U1CONbits.MODE = UART_USER_U1MODE_MOD;
			U1CONbits.RXEN = UART_USER_U1MODE_URXEN;
			U1CONbits.TXEN = UART_USER_U1MODE_UTXEN;
			U1CONbits.ABDEN = UART_USER_U1MODE_ABAUD;
			U1CONbits.BRGS = UART_USER_U1MODE_BRGS;
			U1CONbits.SENDB = UART_USER_U1MODE_SENDB;
			U1CONbits.BRKOVR = UART_USER_U1MODE_BRKOVR;
			U1CONbits.RXBIMD = UART_USER_U1MODE_RXBIMD;
			U1CONbits.WUE = UART_USER_U1MODE_WUE;
			U1CONbits.SIDL = UART_USER_U1MODE_SIDL;
			U1CONbits.ON = UART_USER_U1MODE_ON;
			U1CONbits.FLO = UART_USER_U1MODE_FLO;
			U1CONbits.TXPOL = UART_USER_U1MODE_TXPOL;
			U1CONbits.C0EN = UART_USER_U1MODE_C0EN;
			U1CONbits.STP = UART_USER_U1MODE_STP;
			U1CONbits.RXPOL = UART_USER_U1MODE_RXPOL;
			U1CONbits.RUNOVF = UART_USER_U1MODE_RUNOVF;
			U1CONbits.HALFDPLX = UART_USER_U1MODE_HALFDPLX;
			U1CONbits.CLKSEL = UART_USER_U1MODE_CLKSEL;
			U1CONbits.CLKMOD = UART_USER_U1MODE_CLKMODE;
			U1CONbits.ACTIVE = UART_USER_U1MODE_;
			U1CONbits.SLPEN = UART_USER_U1MODE_;
		#endif 
	/*-----------------------------------------------------------------------*/
	/* U1STATレジスタ */
	/*-----------------------------------------------------------------------*/
		U1STAT = 0x00000000u;
		#ifdef DEF_BITNAME
			U1STATbits.TXCIF = 0u;
			U1STATbits.RXFOIF = 0u;
			U1STATbits.RXBKIF = 0u;
			U1STATbits.FERIF = 0u;
			U1STATbits.CERIF = 0u;
			U1STATbits.ABDOVIF = 0u;
			U1STATbits.PERIF = 0u;
			U1STATbits.TXMTIF = 0u;
			U1STATbits.TXCIE = 0u;
			U1STATbits.RXFOIE = 0u;
			U1STATbits.RXBKIE = 0u;
			U1STATbits.FERIE = 0u;
			U1STATbits.CERIE = 0u;
			U1STATbits.ABDOVIE = 0u;
			U1STATbits.PERIE = 0u;
			U1STATbits.TXMTIE = 0u;
			U1STATbits.RXBF = 0u;
			U1STATbits.RXBE = 0u;
			U1STATbits.XON = 0u;
			U1STATbits.RCIDL = 0u;
			U1STATbits.TXBF = 0u;
			U1STATbits.TXBE = 0u;
			U1STATbits.STPMD = 0u;
			U1STATbits.TXWRE = 0u;
			U1STATbits.RXWM = 0u;
			U1STATbits.TXWM = 0u;
			U1STATbits.URXBF = 0u;
			U1STATbits.URXBE = 0u;
			U1STATbits.RIDLE = 0u;
			U1STATbits.UTXBF = 0u;
			U1STATbits.UTXBE = 0u;
			U1STATbits.URXISEL = 0u;
			U1STATbits.UTXISEL = 0u;
		#endif	

	/*-----------------------------------------------------------------------*/
	/* U1BRGレジスタ */
	/*-----------------------------------------------------------------------*/
		U1BRG = 0x00000000u;
		#ifdef DEF_BITNAME
			U1BRGbits.BRG = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* U1RXBレジスタ */
	/*-----------------------------------------------------------------------*/
		U1RXB = 0x00000000u;
		#ifdef DEF_BITNAME
			U1RXBbits.RXB = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* U1TXBレジスタ */
	/*-----------------------------------------------------------------------*/
		U1TXB = 0x00000000u;
		#ifdef DEF_BITNAME
			U1TXBbits.TXB = 0u;
			U1TXBbits.LAST = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* U1PAレジスタ */
	/*-----------------------------------------------------------------------*/
		U1PA = 0x00000000u;
		#ifdef DEF_BITNAME
			U1PAbits.P1 = 0u;
			U1PAbits.P2 = 0u;
			U1PAbits.WIP = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* U1PBレジスタ */
	/*-----------------------------------------------------------------------*/
		U1PB = 0x00000000u;
		#ifdef DEF_BITNAME
			U1PBbits.P3 = 0u;
			U1PBbits.WIP = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* U1CHKレジスタ */
	/*-----------------------------------------------------------------------*/
		U1CHK = 0x00000000u;
		#ifdef DEF_BITNAME
			U1CHKbits.TXCHK = 0u;
			U1CHKbits.RXCHK = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* U1SCCONレジスタ */
	/*-----------------------------------------------------------------------*/
		U1SCCON = 0x00000000u;
		#ifdef DEF_BITNAME
			U1SCCONbits.PRTCL = 0u;
			U1SCCONbits.T0PD = 0u;
			U1SCCONbits.CONV = 0u;
			U1SCCONbits.TXRPT = 0u;
			U1SCCONbits.GTCIE = 0u;
			U1SCCONbits.WTCIE = 0u;
			U1SCCONbits.BTCIE = 0u;
			U1SCCONbits.TXRPTIE = 0u;
			U1SCCONbits.RXRPTIE = 0u;
			U1SCCONbits.GTCIF = 0u;
			U1SCCONbits.WTCIF = 0u;
			U1SCCONbits.BTCIF = 0u;
			U1SCCONbits.TXRPTIF = 0u;
			U1SCCONbits.RXRPTIF = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* U1UIRレジスタ */
	/*-----------------------------------------------------------------------*/
		U1UIR = 0x00000000u;
		#ifdef DEF_BITNAME
			U1UIRbits.ABDIE = 0u;
			U1UIRbits.ABDIF = 0u;
			U1UIRbits.WUIF = 0u;
		#endif 
#endif
}
/*----------------------------------------------------------------------------*/
/*
* @fn        vdg_UART2_Set_Register(void) 
* @brief        UART2レジスタを初期化します
* @param
* @return
* @detail 
*/
/*----------------------------------------------------------------------------*/
void vdg_UART2_Set_Register(void)
{
#if ( PMD_U2MD == PMD_MODULE_ENABLE ) 	
	/*-----------------------------------------------------------------------*/
	/* U2CONレジスタ */
	/*-----------------------------------------------------------------------*/
		U2CON = 0x00000000u;
		#ifdef DEF_BITNAME
			U2CONbits.MODE = 0u;
			U2CONbits.RXEN = 0u;
			U2CONbits.TXEN = 0u;
			U2CONbits.ABDEN = 0u;
			U2CONbits.BRGS = 0u;
			U2CONbits.SENDB = 0u;
			U2CONbits.BRKOVR = 0u;
			U2CONbits.RXBIMD = 0u;
			U2CONbits.WUE = 0u;
			U2CONbits.SIDL = 0u;
			U2CONbits.ON = 0u;
			U2CONbits.FLO = 0u;
			U2CONbits.TXPOL = 0u;
			U2CONbits.C0EN = 0u;
			U2CONbits.STP = 0u;
			U2CONbits.RXPOL = 0u;
			U2CONbits.RUNOVF = 0u;
			U2CONbits.HALFDPLX = 0u;
			U2CONbits.CLKSEL = 0u;
			U2CONbits.CLKMOD = 0u;
			U2CONbits.ACTIVE = 0u;
			U2CONbits.SLPEN = 0u;
			U2CONbits.URXEN = 0u;
			U2CONbits.UTXEN = 0u;
			U2CONbits.ABAUD = 0u;
			U2CONbits.BRGH = 0u;
			U2CONbits.UTXBRK = 0u;
			U2CONbits.WAKE = 0u;
			U2CONbits.UARTEN = 0u;
			U2CONbits.UTXINV = 0u;
			U2CONbits.STSEL = 0u;
			U2CONbits.URXINV = 0u;
			U2CONbits.BCLKSEL = 0u;
			U2CONbits.BCLKMOD = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* U2MODEレジスタ */
	/*-----------------------------------------------------------------------*/
		U2MODE = 0x00000000u;
		#ifdef DEF_BITNAME
			U2MODEbits.MODE = 0u;
			U2MODEbits.RXEN = 0u;
			U2MODEbits.TXEN = 0u;
			U2MODEbits.ABDEN = 0u;
			U2MODEbits.BRGS = 0u;
			U2MODEbits.SENDB = 0u;
			U2MODEbits.BRKOVR = 0u;
			U2MODEbits.RXBIMD = 0u;
			U2MODEbits.WUE = 0u;
			U2MODEbits.SIDL = 0u;
			U2MODEbits.ON = 0u;
			U2MODEbits.FLO = 0u;
			U2MODEbits.TXPOL = 0u;
			U2MODEbits.C0EN = 0u;
			U2MODEbits.STP = 0u;
			U2MODEbits.RXPOL = 0u;
			U2MODEbits.RUNOVF = 0u;
			U2MODEbits.HALFDPLX = 0u;
			U2MODEbits.CLKSEL = 0u;
			U2MODEbits.CLKMOD = 0u;
			U2MODEbits.ACTIVE = 0u;
			U2MODEbits.SLPEN = 0u;
			U2MODEbits.URXEN = 0u;
			U2MODEbits.UTXEN = 0u;
			U2MODEbits.ABAUD = 0u;
			U2MODEbits.BRGH = 0u;
			U2MODEbits.UTXBRK = 0u;
			U2MODEbits.WAKE = 0u;
			U2MODEbits.UARTEN = 0u;
			U2MODEbits.UTXINV = 0u;
			U2MODEbits.STSEL = 0u;
			U2MODEbits.URXINV = 0u;
			U2MODEbits.BCLKSEL = 0u;
			U2MODEbits.BCLKMOD = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* U2STAレジスタ */
	/*-----------------------------------------------------------------------*/
		U2STA = 0x00000000u;
		#ifdef DEF_BITNAME
			U2STAbits.TXCIF = 0u;
			U2STAbits.RXFOIF = 0u;
			U2STAbits.RXBKIF = 0u;
			U2STAbits.FERIF = 0u;
			U2STAbits.CERIF = 0u;
			U2STAbits.ABDOVIF = 0u;
			U2STAbits.PERIF = 0u;
			U2STAbits.TXMTIF = 0u;
			U2STAbits.TXCIE = 0u;
			U2STAbits.RXFOIE = 0u;
			U2STAbits.RXBKIE = 0u;
			U2STAbits.FERIE = 0u;
			U2STAbits.CERIE = 0u;
			U2STAbits.ABDOVIE = 0u;
			U2STAbits.PERIE = 0u;
			U2STAbits.TXMTIE = 0u;
			U2STAbits.RXBF = 0u;
			U2STAbits.RXBE = 0u;
			U2STAbits.XON = 0u;
			U2STAbits.RCIDL = 0u;
			U2STAbits.TXBF = 0u;
			U2STAbits.TXBE = 0u;
			U2STAbits.STPMD = 0u;
			U2STAbits.TXWRE = 0u;
			U2STAbits.RXWM = 0u;
			U2STAbits.TXWM = 0u;
			U2STAbits.URXBF = 0u;
			U2STAbits.URXBE = 0u;
			U2STAbits.RIDLE = 0u;
			U2STAbits.UTXBF = 0u;
			U2STAbits.UTXBE = 0u;
			U2STAbits.URXISEL = 0u;
			U2STAbits.UTXISEL = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* U2STATレジスタ */
	/*-----------------------------------------------------------------------*/
		U2STAT = 0x00000000u;
		#ifdef DEF_BITNAME
			U2STATbits.TXCIF = 0u;
			U2STATbits.RXFOIF = 0u;
			U2STATbits.RXBKIF = 0u;
			U2STATbits.FERIF = 0u;
			U2STATbits.CERIF = 0u;
			U2STATbits.ABDOVIF = 0u;
			U2STATbits.PERIF = 0u;
			U2STATbits.TXMTIF = 0u;
			U2STATbits.TXCIE = 0u;
			U2STATbits.RXFOIE = 0u;
			U2STATbits.RXBKIE = 0u;
			U2STATbits.FERIE = 0u;
			U2STATbits.CERIE = 0u;
			U2STATbits.ABDOVIE = 0u;
			U2STATbits.PERIE = 0u;
			U2STATbits.TXMTIE = 0u;
			U2STATbits.RXBF = 0u;
			U2STATbits.RXBE = 0u;
			U2STATbits.XON = 0u;
			U2STATbits.RCIDL = 0u;
			U2STATbits.TXBF = 0u;
			U2STATbits.TXBE = 0u;
			U2STATbits.STPMD = 0u;
			U2STATbits.TXWRE = 0u;
			U2STATbits.RXWM = 0u;
			U2STATbits.TXWM = 0u;
			U2STATbits.URXBF = 0u;
			U2STATbits.URXBE = 0u;
			U2STATbits.RIDLE = 0u;
			U2STATbits.UTXBF = 0u;
			U2STATbits.UTXBE = 0u;
			U2STATbits.URXISEL = 0u;
			U2STATbits.UTXISEL = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* U2BRGレジスタ */
	/*-----------------------------------------------------------------------*/
		U2BRG = 0x00000000u;
		#ifdef DEF_BITNAME
			U2BRGbits.BRG = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* U2RXBレジスタ */
	/*-----------------------------------------------------------------------*/
		U2RXB = 0x00000000u;
		#ifdef DEF_BITNAME
			U2RXBbits.RXB = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* U2RXREGレジスタ */
	/*-----------------------------------------------------------------------*/
		U2RXREG = 0x00000000u;
		#ifdef DEF_BITNAME
			U2RXREGbits.RXB = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* U2TXBレジスタ */
	/*-----------------------------------------------------------------------*/
		U2TXB = 0x00000000u;
		#ifdef DEF_BITNAME
			U2TXBbits.TXB = 0u;
			U2TXBbits.LAST = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* U2TXREGレジスタ */
	/*-----------------------------------------------------------------------*/
		U2TXREG = 0x00000000u;
		#ifdef DEF_BITNAME
			U2TXREGbits.TXB = 0u;
			U2TXREGbits.LAST = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* U2PAレジスタ */
	/*-----------------------------------------------------------------------*/
		U2PA = 0x00000000u;
		#ifdef DEF_BITNAME
			U2PAbits.P1 = 0u;
			U2PAbits.P2 = 0u;
			U2PAbits.WIP = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* U2PBレジスタ */
	/*-----------------------------------------------------------------------*/
		U2PB = 0x00000000u;
		#ifdef DEF_BITNAME
			U2PBbits.P3 = 0u;
			U2PBbits.WIP = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* U2CHKレジスタ */
	/*-----------------------------------------------------------------------*/
		U2CHK = 0x00000000u;
		#ifdef DEF_BITNAME
			U2CHKbits.TXCHK = 0u;
			U2CHKbits.RXCHK = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* U2SCCONレジスタ */
	/*-----------------------------------------------------------------------*/
		U2SCCON = 0x00000000u;
		#ifdef DEF_BITNAME
			U2SCCONbits.PRTCL = 0u;
			U2SCCONbits.T0PD = 0u;
			U2SCCONbits.CONV = 0u;
			U2SCCONbits.TXRPT = 0u;
			U2SCCONbits.GTCIE = 0u;
			U2SCCONbits.WTCIE = 0u;
			U2SCCONbits.BTCIE = 0u;
			U2SCCONbits.TXRPTIE = 0u;
			U2SCCONbits.RXRPTIE = 0u;
			U2SCCONbits.GTCIF = 0u;
			U2SCCONbits.WTCIF = 0u;
			U2SCCONbits.BTCIF = 0u;
			U2SCCONbits.TXRPTIF = 0u;
			U2SCCONbits.RXRPTIF = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* U2UIRレジスタ */
	/*-----------------------------------------------------------------------*/
		U2UIR = 0x00000000u;
		#ifdef DEF_BITNAME
			U2UIRbits.ABDIE = 0u;
			U2UIRbits.ABDIF = 0u;
			U2UIRbits.WUIF = 0u;
		#endif 
#endif		

}
/*----------------------------------------------------------------------------*/
/*
* @fn        vdg_UART3_Set_Register(void)
* @brief        UART3レジスタを初期化します
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void vdg_UART3_Set_Register(void)
{
#if ( PMD_U3MD == PMD_MODULE_ENABLE ) 
	/*-----------------------------------------------------------------------*/
	/* U3CONレジスタ */
	/*-----------------------------------------------------------------------*/
		U3CON = 0x00000000u;
		#ifdef DEF_BITNAME
			U3CONbits.MODE = 0u;
			U3CONbits.RXEN = 0u;
			U3CONbits.TXEN = 0u;
			U3CONbits.ABDEN = 0u;
			U3CONbits.BRGS = 0u;
			U3CONbits.SENDB = 0u;
			U3CONbits.BRKOVR = 0u;
			U3CONbits.RXBIMD = 0u;
			U3CONbits.WUE = 0u;
			U3CONbits.SIDL = 0u;
			U3CONbits.ON = 0u;
			U3CONbits.FLO = 0u;
			U3CONbits.TXPOL = 0u;
			U3CONbits.C0EN = 0u;
			U3CONbits.STP = 0u;
			U3CONbits.RXPOL = 0u;
			U3CONbits.RUNOVF = 0u;
			U3CONbits.HALFDPLX = 0u;
			U3CONbits.CLKSEL = 0u;
			U3CONbits.CLKMOD = 0u;
			U3CONbits.ACTIVE = 0u;
			U3CONbits.SLPEN = 0u;
			U3CONbits.URXEN = 0u;
			U3CONbits.UTXEN = 0u;
			U3CONbits.ABAUD = 0u;
			U3CONbits.BRGH = 0u;
			U3CONbits.UTXBRK = 0u;
			U3CONbits.WAKE = 0u;
			U3CONbits.UARTEN = 0u;
			U3CONbits.UTXINV = 0u;
			U3CONbits.STSEL = 0u;
			U3CONbits.URXINV = 0u;
			U3CONbits.BCLKSEL = 0u;
			U3CONbits.BCLKMOD = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* U3MODEレジスタ */
	/*-----------------------------------------------------------------------*/
		U3MODE = 0x00000000u;
		#ifdef DEF_BITNAME
			U3MODEbits.MODE = 0u;
			U3MODEbits.RXEN = 0u;
			U3MODEbits.TXEN = 0u;
			U3MODEbits.ABDEN = 0u;
			U3MODEbits.BRGS = 0u;
			U3MODEbits.SENDB = 0u;
			U3MODEbits.BRKOVR = 0u;
			U3MODEbits.RXBIMD = 0u;
			U3MODEbits.WUE = 0u;
			U3MODEbits.SIDL = 0u;
			U3MODEbits.ON = 0u;
			U3MODEbits.FLO = 0u;
			U3MODEbits.TXPOL = 0u;
			U3MODEbits.C0EN = 0u;
			U3MODEbits.STP = 0u;
			U3MODEbits.RXPOL = 0u;
			U3MODEbits.RUNOVF = 0u;
			U3MODEbits.HALFDPLX = 0u;
			U3MODEbits.CLKSEL = 0u;
			U3MODEbits.CLKMOD = 0u;
			U3MODEbits.ACTIVE = 0u;
			U3MODEbits.SLPEN = 0u;
			U3MODEbits.URXEN = 0u;
			U3MODEbits.UTXEN = 0u;
			U3MODEbits.ABAUD = 0u;
			U3MODEbits.BRGH = 0u;
			U3MODEbits.UTXBRK = 0u;
			U3MODEbits.WAKE = 0u;
			U3MODEbits.UARTEN = 0u;
			U3MODEbits.UTXINV = 0u;
			U3MODEbits.STSEL = 0u;
			U3MODEbits.URXINV = 0u;
			U3MODEbits.BCLKSEL = 0u;
			U3MODEbits.BCLKMOD = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* U3STAレジスタ */
	/*-----------------------------------------------------------------------*/
		U3STA = 0x00000000u;
		#ifdef DEF_BITNAME
			U3STAbits.TXCIF = 0u;
			U3STAbits.RXFOIF = 0u;
			U3STAbits.RXBKIF = 0u;
			U3STAbits.FERIF = 0u;
			U3STAbits.CERIF = 0u;
			U3STAbits.ABDOVIF = 0u;
			U3STAbits.PERIF = 0u;
			U3STAbits.TXMTIF = 0u;
			U3STAbits.TXCIE = 0u;
			U3STAbits.RXFOIE = 0u;
			U3STAbits.RXBKIE = 0u;
			U3STAbits.FERIE = 0u;
			U3STAbits.CERIE = 0u;
			U3STAbits.ABDOVIE = 0u;
			U3STAbits.PERIE = 0u;
			U3STAbits.TXMTIE = 0u;
			U3STAbits.RXBF = 0u;
			U3STAbits.RXBE = 0u;
			U3STAbits.XON = 0u;
			U3STAbits.RCIDL = 0u;
			U3STAbits.TXBF = 0u;
			U3STAbits.TXBE = 0u;
			U3STAbits.STPMD = 0u;
			U3STAbits.TXWRE = 0u;
			U3STAbits.RXWM = 0u;
			U3STAbits.TXWM = 0u;
			U3STAbits.URXBF = 0u;
			U3STAbits.URXBE = 0u;
			U3STAbits.RIDLE = 0u;
			U3STAbits.UTXBF = 0u;
			U3STAbits.UTXBE = 0u;
			U3STAbits.URXISEL = 0u;
			U3STAbits.UTXISEL = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* U3STATレジスタ */
	/*-----------------------------------------------------------------------*/
		U3STAT = 0x00000000u;
		#ifdef DEF_BITNAME
			U3STATbits.TXCIF = 0u;
			U3STATbits.RXFOIF = 0u;
			U3STATbits.RXBKIF = 0u;
			U3STATbits.FERIF = 0u;
			U3STATbits.CERIF = 0u;
			U3STATbits.ABDOVIF = 0u;
			U3STATbits.PERIF = 0u;
			U3STATbits.TXMTIF = 0u;
			U3STATbits.TXCIE = 0u;
			U3STATbits.RXFOIE = 0u;
			U3STATbits.RXBKIE = 0u;
			U3STATbits.FERIE = 0u;
			U3STATbits.CERIE = 0u;
			U3STATbits.ABDOVIE = 0u;
			U3STATbits.PERIE = 0u;
			U3STATbits.TXMTIE = 0u;
			U3STATbits.RXBF = 0u;
			U3STATbits.RXBE = 0u;
			U3STATbits.XON = 0u;
			U3STATbits.RCIDL = 0u;
			U3STATbits.TXBF = 0u;
			U3STATbits.TXBE = 0u;
			U3STATbits.STPMD = 0u;
			U3STATbits.TXWRE = 0u;
			U3STATbits.RXWM = 0u;
			U3STATbits.TXWM = 0u;
			U3STATbits.URXBF = 0u;
			U3STATbits.URXBE = 0u;
			U3STATbits.RIDLE = 0u;
			U3STATbits.UTXBF = 0u;
			U3STATbits.UTXBE = 0u;
			U3STATbits.URXISEL = 0u;
			U3STATbits.UTXISEL = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* U3BRGレジスタ */
	/*-----------------------------------------------------------------------*/
		U3BRG = 0x00000000u;
		#ifdef DEF_BITNAME
			U3BRGbits.BRG = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* U3RXBレジスタ */
	/*-----------------------------------------------------------------------*/
		U3RXB = 0x00000000u;
		#ifdef DEF_BITNAME
			U3RXBbits.RXB = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* U3RXREGレジスタ */
	/*-----------------------------------------------------------------------*/
		U3RXREG = 0x00000000u;
		#ifdef DEF_BITNAME
			U3RXREGbits.RXB = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* U3TXBレジスタ */
	/*-----------------------------------------------------------------------*/
		U3TXB = 0x00000000u;
		#ifdef DEF_BITNAME
			U3TXBbits.TXB = 0u;
			U3TXBbits.LAST = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* U3TXREGレジスタ */
	/*-----------------------------------------------------------------------*/
		U3TXREG = 0x00000000u;
		#ifdef DEF_BITNAME
			U3TXREGbits.TXB = 0u;
			U3TXREGbits.LAST = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* U3PAレジスタ */
	/*-----------------------------------------------------------------------*/
		U3PA = 0x00000000u;
		#ifdef DEF_BITNAME
			U3PAbits.P1 = 0u;
			U3PAbits.P2 = 0u;
			U3PAbits.WIP = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* U3PBレジスタ */
	/*-----------------------------------------------------------------------*/
		U3PB = 0x00000000u;
		#ifdef DEF_BITNAME
			U3PBbits.P3 = 0u;
			U3PBbits.WIP = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* U3CHKレジスタ */
	/*-----------------------------------------------------------------------*/
		U3CHK = 0x00000000u;
		#ifdef DEF_BITNAME
			U3CHKbits.TXCHK = 0u;
			U3CHKbits.RXCHK = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* U3SCCONレジスタ */
	/*-----------------------------------------------------------------------*/
		U3SCCON = 0x00000000u;
		#ifdef DEF_BITNAME
			U3SCCONbits.PRTCL = 0u;
			U3SCCONbits.T0PD = 0u;
			U3SCCONbits.CONV = 0u;
			U3SCCONbits.TXRPT = 0u;
			U3SCCONbits.GTCIE = 0u;
			U3SCCONbits.WTCIE = 0u;
			U3SCCONbits.BTCIE = 0u;
			U3SCCONbits.TXRPTIE = 0u;
			U3SCCONbits.RXRPTIE = 0u;
			U3SCCONbits.GTCIF = 0u;
			U3SCCONbits.WTCIF = 0u;
			U3SCCONbits.BTCIF = 0u;
			U3SCCONbits.TXRPTIF = 0u;
			U3SCCONbits.RXRPTIF = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* U3UIRレジスタ */
	/*-----------------------------------------------------------------------*/
		U3UIR = 0x00000000u;
		#ifdef DEF_BITNAME
			U3UIRbits.ABDIE = 0u;
			U3UIRbits.ABDIF = 0u;
			U3UIRbits.WUIF = 0u;
		#endif 
#endif
}
/*----------------------------------------------------------------------------*/
/*
* @fn        vdg_UART_Set_Register(void)
* @brief        UART1,2のレジスタを初期化します
* @param
* @return
* @detail 
*/
/*----------------------------------------------------------------------------*/
void vdg_UART_Set_Register(void)
{
#if ( PMD_U1MD == PMD_MODULE_ENABLE ) 
    vdg_UART1_Set_Register();
#endif
#if ( PMD_U2MD == PMD_MODULE_ENABLE ) 
    vdg_UART2_Set_Register();
#endif
#if ( PMD_U3MD == PMD_MODULE_ENABLE ) 
    vdg_UART3_Set_Register();
#endif
}