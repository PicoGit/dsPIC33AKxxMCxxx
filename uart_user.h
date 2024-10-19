#ifndef UART_USER_H
#define	UART_USER_H

/*----------------------------------------------------------------------------------*/
/*【INC】インクルードファイル*/
/*----------------------------------------------------------------------------------*/
#include "uart_driver.h"
/*----------------------------------------------------------------------------------*/
/*定数定義*/
/*----------------------------------------------------------------------------------*/
#define UART_PC_CMD_NG                -1
#define UART_PC_CMD_OK                0
#define UART_PC_CMD_BUFF_FULL         1
#define UART_PC_CMD_INVALID_INPUT     2

#define UART_PC_TX_BUFF_SIZE        64
#define UART_PC_RX_BUFF_SIZE        64

#define UART_PC_TXBUFF_FULL         U1STAHbits.UTXBF
#define UART_PC_TXREG               U1TXREG
#define UART_PC_RXREG               U1RXREG

#if ( PMD_U1MD == PMD_MODULE_ENABLE ) 
/*----------------------------------------------------------------------------------*/
/* 【U1MODE】*/
/*----------------------------------------------------------------------------------*/
#define UART_USER_U1MODE_MOD        ( UART_DRV_MOD_ASYNC_8BIT )
#define UART_USER_U1MODE_URXEN      ( UART_DRV_URXEN_ENABLE )
#define UART_USER_U1MODE_UTXEN      ( UART_DRV_UTXEN_ENABLE )
#define UART_USER_U1MODE_ABAUD      ( UART_DRV_ABAUD_DISABLE )
#define UART_USER_U1MODE_BRGS       ( UART_DRV_BRGH_HIGH_SPEED )
#define UART_USER_U1MODE_SENDB      ( UART_DRV_BRKOVR_NOEFFECT )
#define UART_USER_U1MODE_BRKOVR     ( UART_DRV_BRKOVR_NOEFFECT )
#define UART_USER_U1MODE_RXBIMD     ( UART_DRV_RXBIMD_LOW2HIGH )
#define UART_USER_U1MODE_WUE        ( UART_DRV_WAKE_DISABLE )
#define UART_USER_U1MODE_SIDL       ( UART_DRV_USIDL_RUN )
#define UART_USER_U1MODE_ON         ( UART_DRV_UARTEN_ENABLE )

#define UART_USER_U1MODE_FLO        ( UART_DRV_FLO_OFF )
#define UART_USER_U1MODE_TXPOL      ( UART_DRV_TXPOL_NORMAL )
#define UART_USER_U1MODE_C0EN       ( UART_DRV_C0EN_MODE0 )
#define UART_USER_U1MODE_STP        ( UART_DRV_STP_1TX_1RX )
#define UART_USER_U1MODE_RXPOL      ( UART_DRV_RXPOL_NORMAL )
#define UART_USER_U1MODE_RUNOVF     ( UART_DRV_RUNOVF_LEGACY )
#define UART_USER_U1MODE_HALFDPLX   ( UART_DRV_HALFDPLX_FULL )
#define UART_USER_U1MODE_CLKSEL     ( UART_DRV_CLKSEL_STANDARD_SPEED )
#define UART_USER_U1MODE_CLKMODE    ( UART_DRV_CLKMOD_LAGACY )
#define UART_USER_U1MODE_SLPEN      ( UART_DRV_SLPEN_CLOCK_OFF )

/*----------------------------------------------------------------------------------*/
/* 【U1STA】*/
/*----------------------------------------------------------------------------------*/
#define UART_USER_U1STAT_TXMTIE      ( UART_DRV_TXMTIE_DISABLE )
#define UART_USER_U1STAT_PERIE       ( UART_DRV_PERIE_DISABLE )
#define UART_USER_U1STAT_ABDOVE      ( UART_DRV_ABDOVE_DISABLE )
#define UART_USER_U1STAT_CERIE       ( UART_DRV_CERIE_DISABLE )
#define UART_USER_U1STAT_FERIE       ( UART_DRV_FERIE_DISABLE )
#define UART_USER_U1STAT_RXBKIE      ( UART_DRV_RXBKIE_DISABLE )
#define UART_USER_U1STAT_OERIE       ( UART_DRV_OERIE_DISABLE )
#define UART_USER_U1STAT_TXCIE       ( UART_DRV_TXCIE_DISABLE )
#define UART_USER_U1STAT_UTXISEL     ( UART_DRV_UTXISEL_8EMPTY )
#define UART_USER_U1STAT_URXISEL     ( UART_DRV_URXISEL_8WORD )
#define UART_USER_U1STAT_STPMD       ( UART_DRV_STPMD_FIRST_STOPBIT )
/*----------------------------------------------------------------------------------*/
/* 【U1BRG】*/
/*----------------------------------------------------------------------------------*/
#define UART_USER_BRG1_BAUDRATE          115200L
/*----------------------------------------------------------------------------------*/
/* 【U1TXCHK,U1RXCHK】*/
/*----------------------------------------------------------------------------------*/
#define UART_USER_U1TXCHK          ( 0x0000u )
#define UART_USER_U1RXCHK          ( 0x0000u )
/*----------------------------------------------------------------------------------*/
/* 【UxSCCON】*/
/*----------------------------------------------------------------------------------*/
#define UART_USER_U1SCCON_TXRPT    ( UART_DRV_TXRPT_ONCE )
#define UART_USER_U1SCCON_CONV     ( UART_DRV_CONV_DIRECT )
#define UART_USER_U1SCCON_T0PD     ( UART_DRV_T0PD_1ETU )
#define UART_USER_U1SCCON_PRTCL    ( UART_DRV_PRTCL_T0 )
/*----------------------------------------------------------------------------------*/
/* 【UxSCINT】*/
/*----------------------------------------------------------------------------------*/
#define UART_USER_U1SCINT_RXRPTIE  ( UART_DRV_RXRPTIE_DISABLE )
#define UART_USER_U1SCINT_TXRPTIE  ( UART_DRV_TXRPTIE_DISABLE )
#define UART_USER_U1SCINT_BTCIE    ( UART_DRV_BTCIE_DISABLE )
#define UART_USER_U1SCINT_WTCIE    ( UART_DRV_WTCIE_DISABLE )
#define UART_USER_U1SCINT_GTCIE    ( UART_DRV_GTCIE_DISABLE )
/*----------------------------------------------------------------------------------*/
/* 【UxINT】*/
/*----------------------------------------------------------------------------------*/
#define UART_USER_U1INT_ABDIE       ( UART_DRV_ABDIE_DISABLE )
#endif

#if ( PMD_U2MD == PMD_MODULE_ENABLE ) 
/*----------------------------------------------------------------------------------*/
/* 【U2MODE】*/
/*----------------------------------------------------------------------------------*/
#define UART_USER_U2MODE_MOD        ( UART_DRV_MOD_ASYNC_8BIT )
#define UART_USER_U2MODE_URXEN      ( UART_DRV_URXEN_ENABLE )
#define UART_USER_U2MODE_UTXEN      ( UART_DRV_UTXEN_ENABLE )
#define UART_USER_U2MODE_ABAUD      ( UART_DRV_ABAUD_DISABLE )
#define UART_USER_U2MODE_BRGH       ( UART_DRV_BRGH_HIGH_SPEED )
#define UART_USER_U2MODE_UTXBRK     ( UART_DRV_BRKOVR_NOEFFECT )
#define UART_USER_U2MODE_BRKOVR     ( UART_DRV_BRKOVR_NOEFFECT )
#define UART_USER_U2MODE_RXBIMD     ( UART_DRV_RXBIMD_LOW2HIGH )
#define UART_USER_U2MODE_WAKE       ( UART_DRV_WAKE_DISABLE )
#define UART_USER_U2MODE_USIDL      ( UART_DRV_USIDL_RUN )
#define UART_USER_U2MODE_UARTEN     ( UART_DRV_UARTEN_ENABLE )
/*----------------------------------------------------------------------------------*/
/* 【U2MODEH】*/
/*----------------------------------------------------------------------------------*/
#define UART_USER_U2MODEH_SLPEN     ( UART_DRV_SLPEN_CLOCK_OFF )
#define UART_USER_U2MODEH_BCLKMOD   ( UART_DRV_BCLKMOD_LAGACY )
#define UART_USER_U2MODEH_BCLKSEL   ( UART_DRV_BCLKSEL_FP )
#define UART_USER_U2MODEH_HALFDPLX  ( UART_DRV_HALFDPLX_FULL )
#define UART_USER_U2MODEH_RUNOVF    ( UART_DRV_RUNOVF_LEGACY )
#define UART_USER_U2MODEH_URXINV    ( UART_DRV_URXINV_NORMAL )
#define UART_USER_U2MODEH_STSEL     ( UART_DRV_STSEL_1TX_1RX )
#define UART_USER_U2MODEH_C0EN      ( UART_DRV_C0EN_MODE0 )
#define UART_USER_U2MODEH_UTXINV    ( UART_DRV_UTXINV_NORMAL )
#define UART_USER_U2MODEH_FLO       ( UART_DRV_FLO_OFF )
/*----------------------------------------------------------------------------------*/
/* 【U2STA】*/
/*----------------------------------------------------------------------------------*/
#define UART_USER_U2STA_TXMTIE      ( UART_DRV_TXMTIE_DISABLE )
#define UART_USER_U2STA_PERIE       ( UART_DRV_PERIE_DISABLE )
#define UART_USER_U2STA_ABDOVE      ( UART_DRV_ABDOVE_DISABLE )
#define UART_USER_U2STA_CERIE       ( UART_DRV_CERIE_DISABLE )
#define UART_USER_U2STA_FERIE       ( UART_DRV_FERIE_DISABLE )
#define UART_USER_U2STA_RXBKIE      ( UART_DRV_RXBKIE_DISABLE )
#define UART_USER_U2STA_OERIE       ( UART_DRV_OERIE_DISABLE )
#define UART_USER_U2STA_TXCIE       ( UART_DRV_TXCIE_DISABLE )
/*----------------------------------------------------------------------------------*/
/* 【U2STAH】*/
/*----------------------------------------------------------------------------------*/
#define UART_USER_U2STAH_UTXISEL    ( UART_DRV_UTXISEL_8EMPTY )
#define UART_USER_U2STAH_URXISEL    ( UART_DRV_URXISEL_8WORD )
#define UART_USER_U2STAH_STPMD      ( UART_DRV_STPMD_FIRST_STOPBIT )
/*----------------------------------------------------------------------------------*/
/* 【U2BRG】*/
/*----------------------------------------------------------------------------------*/
#define UART_USER_BRG1_BAUDRATE          115200L
/*----------------------------------------------------------------------------------*/
/* 【U2TXCHK,U2RXCHK】*/
/*----------------------------------------------------------------------------------*/
#define UART_USER_U2TXCHK          ( 0x0000u )
#define UART_USER_U2RXCHK          ( 0x0000u )
/*----------------------------------------------------------------------------------*/
/* 【UxSCCON】*/
/*----------------------------------------------------------------------------------*/
#define UART_USER_U2SCCON_TXRPT    ( UART_DRV_TXRPT_ONCE )
#define UART_USER_U2SCCON_CONV     ( UART_DRV_CONV_DIRECT )
#define UART_USER_U2SCCON_T0PD     ( UART_DRV_T0PD_1ETU )
#define UART_USER_U2SCCON_PRTCL    ( UART_DRV_PRTCL_T0 )
/*----------------------------------------------------------------------------------*/
/* 【UxSCINT】*/
/*----------------------------------------------------------------------------------*/
#define UART_USER_U2SCINT_RXRPTIE  ( UART_DRV_RXRPTIE_DISABLE )
#define UART_USER_U2SCINT_TXRPTIE  ( UART_DRV_TXRPTIE_DISABLE )
#define UART_USER_U2SCINT_BTCIE    ( UART_DRV_BTCIE_DISABLE )
#define UART_USER_U2SCINT_WTCIE    ( UART_DRV_WTCIE_DISABLE )
#define UART_USER_U2SCINT_GTCIE    ( UART_DRV_GTCIE_DISABLE )
/*----------------------------------------------------------------------------------*/
/* 【UxINT】*/
/*----------------------------------------------------------------------------------*/
#define UART_USER_U2INT_ABDIE       ( UART_DRV_ABDIE_DISABLE )
#endif
/*----------------------------------------------------------------------------------*/
/*変数定義*/
/*----------------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------------*/
/*【PROTO】プロトタイプ宣言*/
/*----------------------------------------------------------------------------------*/
void vdg_Uart_PC_Clear_TxData(void);
void vdg_Uart_PC_Clear_RxData(void);
void vdg_Uart_PC_Enque_TxData(_c1 *c1a_Str);
void vdg_Uart_PC_Deque_TxData(void);
void vdg_Uart_PC_Enque_RxData(void);
_u2 u2g_Uart_PC_Get_RxData_Num(void);
_c1 c1g_Uart_PC_Deque_RxByte(_c1 *c1pa_Str);
_c1 c1g_Uart_PC_Deque_RxStr(_c1 *c1pa_Str,_u2 u2a_Length);
void vdg_Uart_PC_Send_Message(_c1 *c1a_Str);
void vdg_Uart_PC_Timing_Handler(void);
#endif	/* ADC_USER_H */

