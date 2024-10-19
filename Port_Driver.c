/*----------------------------------------------------------------------------*/
/**
* @file		Port_Driver.c
* @brief	Portに関するドライバ関数
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
#include "port_driver.h"
#include "port_user.h"
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
* @fn        vdg_Port_Set_A_Register(void)
* @brief     ポートAレジスタを初期化します
* @param
* @return
* @detail 
*/
/*----------------------------------------------------------------------------*/
void vdg_Port_Set_A_Register(void)
{
    /*----------------------------------------------------------------------------*/
    /* チャンネルアナログ入力選択レジスタ */
    /*----------------------------------------------------------------------------*/
        ANSELA	= ( PORT_USER_ANSEL_A0 << 0u) |
                  ( PORT_USER_ANSEL_A1 << 1u) |
                  ( PORT_USER_ANSEL_A2 << 2u) |
                  ( PORT_USER_ANSEL_A3 << 3u) |
                  ( PORT_USER_ANSEL_A4 << 4u) |
				  ( PORT_USER_ANSEL_A5 << 5u) |
                  ( PORT_USER_ANSEL_A6 << 6u) |
                  ( PORT_USER_ANSEL_A7 << 7u) |
                  ( PORT_USER_ANSEL_A8 << 8u) |
		          ( PORT_USER_ANSEL_A9 << 9u) |
                  ( PORT_USER_ANSEL_A10 << 10u) |
                  ( PORT_USER_ANSEL_A11 << 11u) |
                  ( PORT_USER_ANSEL_A12 << 12u) |
                  ( PORT_USER_ANSEL_A13 << 13u) |
		          ( PORT_USER_ANSEL_A14 << 14u) |
                  ( PORT_USER_ANSEL_A15 << 15u);
    /*----------------------------------------------------------------------------*/        
    /* チャンネルポート入出力方向レジスタ */		
    /*----------------------------------------------------------------------------*/
        TRISA	= ( PORT_USER_TRIS_A0 << 0u) |
                  ( PORT_USER_TRIS_A1 << 1u) |
                  ( PORT_USER_TRIS_A2 << 2u) |
                  ( PORT_USER_TRIS_A3 << 3u) |
                  ( PORT_USER_TRIS_A4 << 4u) |
                  ( PORT_USER_TRIS_A5 << 5u) |
                  ( PORT_USER_TRIS_A6 << 6u) |
                  ( PORT_USER_TRIS_A7 << 7u) |
                  ( PORT_USER_TRIS_A8 << 8u) |
                  ( PORT_USER_TRIS_A9 << 9u) |
                  ( PORT_USER_TRIS_A10 << 10u) |
                  ( PORT_USER_TRIS_A11 << 11u) |
                  ( PORT_USER_TRIS_A12 << 12u) |
                  ( PORT_USER_TRIS_A13 << 13u) |
                  ( PORT_USER_TRIS_A14 << 14u) |
                  ( PORT_USER_TRIS_A15 << 15u) ;

    /*----------------------------------------------------------------------------*/
    /* チャンネルポートレジスタ(Read Only) */		
    /*----------------------------------------------------------------------------*/        
        PORTA	= 0x0000u;	
    /*----------------------------------------------------------------------------*/
    /* チャンネルラッチレジスタ */	
    /*----------------------------------------------------------------------------*/        
        LATA	= ( PORT_USER_LAT_A0 << 0u) |
                  ( PORT_USER_LAT_A1 << 1u) |
                  ( PORT_USER_LAT_A2 << 2u) |
                  ( PORT_USER_LAT_A3 << 3u) |
                  ( PORT_USER_LAT_A4 << 4u) |
				  ( PORT_USER_LAT_A5 << 5u) |
                  ( PORT_USER_LAT_A6 << 6u) |
                  ( PORT_USER_LAT_A7 << 7u) |
                  ( PORT_USER_LAT_A8 << 8u) |
                  ( PORT_USER_LAT_A9 << 9u) |
				  ( PORT_USER_LAT_A10 << 10u) |
                  ( PORT_USER_LAT_A11 << 11u) |
                  ( PORT_USER_LAT_A12 << 12u) |
                  ( PORT_USER_LAT_A13 << 13u) |
				  ( PORT_USER_LAT_A14 << 14u) |
                  ( PORT_USER_LAT_A15 << 15u) ;
    /*----------------------------------------------------------------------------*/        
    /* チャンネルオープンドレイン制御レジスタ */
    /*----------------------------------------------------------------------------*/        
        ODCA	= ( PORT_USER_ODC_A0 << 0u) |
                  ( PORT_USER_ODC_A1 << 1u) |
                  ( PORT_USER_ODC_A2 << 2u) |
                  ( PORT_USER_ODC_A3 << 3u) |
                  ( PORT_USER_ODC_A4 << 4u) |
                  ( PORT_USER_ODC_A5 << 5u) |
                  ( PORT_USER_ODC_A6 << 6u) |
                  ( PORT_USER_ODC_A7 << 7u) |
                  ( PORT_USER_ODC_A8 << 8u) |
                  ( PORT_USER_ODC_A9 << 9u) |
                  ( PORT_USER_ODC_A10 << 10u) |
                  ( PORT_USER_ODC_A11 << 11u) |
                  ( PORT_USER_ODC_A12 << 12u) |
                  ( PORT_USER_ODC_A13 << 13u) |
                  ( PORT_USER_ODC_A14 << 14u) |
                  ( PORT_USER_ODC_A15 << 15u) ;
    /*----------------------------------------------------------------------------*/        
    /* チャンネルプルアップレジスタ */
    /*----------------------------------------------------------------------------*/        	
        CNPUA	= ( PORT_USER_CNPU_A0 << 0u) |
                  ( PORT_USER_CNPU_A1 << 1u) |
                  ( PORT_USER_CNPU_A2 << 2u) |
                  ( PORT_USER_CNPU_A3 << 3u) |
                  ( PORT_USER_CNPU_A4 << 4u) |
                  ( PORT_USER_CNPU_A5 << 5u) |
                  ( PORT_USER_CNPU_A6 << 6u) |
                  ( PORT_USER_CNPU_A7 << 7u) |
                  ( PORT_USER_CNPU_A8 << 8u) |
                  ( PORT_USER_CNPU_A9 << 9u) |
                  ( PORT_USER_CNPU_A10 << 10u) |
                  ( PORT_USER_CNPU_A11 << 11u) |
                  ( PORT_USER_CNPU_A12 << 12u) |
                  ( PORT_USER_CNPU_A13 << 13u) |
                  ( PORT_USER_CNPU_A14 << 14u) |
                  ( PORT_USER_CNPU_A15 << 15u) ;
    /*----------------------------------------------------------------------------*/
    /* チャンネルプルダウンレジスタ */
    /*----------------------------------------------------------------------------*/    		
        CNPDA	= ( PORT_USER_CNPD_A0 << 0u) |
                  ( PORT_USER_CNPD_A1 << 1u) |
                  ( PORT_USER_CNPD_A2 << 2u) |
                  ( PORT_USER_CNPD_A3 << 3u) |
                  ( PORT_USER_CNPD_A4 << 4u) |
                  ( PORT_USER_CNPD_A5 << 5u) |
                  ( PORT_USER_CNPD_A6 << 6u) |
                  ( PORT_USER_CNPD_A7 << 7u) |
                  ( PORT_USER_CNPD_A8 << 8u) |
                  ( PORT_USER_CNPD_A9 << 9u) |
                  ( PORT_USER_CNPD_A10 << 10u) |
                  ( PORT_USER_CNPD_A11 << 11u) |
                  ( PORT_USER_CNPD_A12 << 12u) |
                  ( PORT_USER_CNPD_A13 << 13u) |
                  ( PORT_USER_CNPD_A14 << 14u) |
                  ( PORT_USER_CNPD_A15 << 15u) ;

    /*----------------------------------------------------------------------------*/        
    /* チャンネル変化割り込み制御レジスタ */
    /*----------------------------------------------------------------------------*/        
        CNCONA	= ( PORT_USER_CNCONA_ON << 15u ) | ( PORT_USER_CNCONA_STYLE << 11u);	
    /*----------------------------------------------------------------------------*/
    /* チャンネル変化割り込み有効レジスタ0 */	
    /*----------------------------------------------------------------------------*/        
        CNEN0A	= ( PORT_USER_CNEN0_A0 << 0u) |
                  ( PORT_USER_CNEN0_A1 << 1u) |
                  ( PORT_USER_CNEN0_A2 << 2u) |
                  ( PORT_USER_CNEN0_A3 << 3u) |
                  ( PORT_USER_CNEN0_A4 << 4u) |
                  ( PORT_USER_CNEN0_A5 << 5u) |
                  ( PORT_USER_CNEN0_A6 << 6u) |
                  ( PORT_USER_CNEN0_A7 << 7u) |
                  ( PORT_USER_CNEN0_A8 << 8u) |
                  ( PORT_USER_CNEN0_A9 << 9u) |
                  ( PORT_USER_CNEN0_A10 << 10u) |
                  ( PORT_USER_CNEN0_A11 << 11u) |
                  ( PORT_USER_CNEN0_A12 << 12u) |
                  ( PORT_USER_CNEN0_A13 << 13u) |
                  ( PORT_USER_CNEN0_A14 << 14u) |
                  ( PORT_USER_CNEN0_A15 << 15u) ;
    /*----------------------------------------------------------------------------*/
    /* チャンネル変化ステータスレジスタ */	
    /*----------------------------------------------------------------------------*/        
        CNSTATA	= 0x0000u;
    /*----------------------------------------------------------------------------*/
    /* チャンネル変化割り込み有効レジスタ1 */	
    /*----------------------------------------------------------------------------*/        
        CNEN1A	= ( PORT_USER_CNEN1_A0 << 0u) |
                  ( PORT_USER_CNEN1_A1 << 1u) |
                  ( PORT_USER_CNEN1_A2 << 2u) |
                  ( PORT_USER_CNEN1_A3 << 3u) |
                  ( PORT_USER_CNEN1_A4 << 4u) |
                  ( PORT_USER_CNEN1_A5 << 5u) |
                  ( PORT_USER_CNEN1_A6 << 6u) |
                  ( PORT_USER_CNEN1_A7 << 7u) |
                  ( PORT_USER_CNEN1_A8 << 8u) |
                  ( PORT_USER_CNEN1_A9 << 9u) |
                  ( PORT_USER_CNEN1_A10 << 10u) |
                  ( PORT_USER_CNEN1_A11 << 11u) |
                  ( PORT_USER_CNEN1_A12 << 12u) |
                  ( PORT_USER_CNEN1_A13 << 13u) |
                  ( PORT_USER_CNEN1_A14 << 14u) |
                  ( PORT_USER_CNEN1_A15 << 15u) ;
    /*----------------------------------------------------------------------------*/
    /* チャンネル変化割り込みフラグレジスタ */	
    /*----------------------------------------------------------------------------*/        
        CNFA	= 0x0000u;	
}
/*----------------------------------------------------------------------------*/
/*
* @fn        vdg_Port_Set_B_Register(void) 
* @brief     ポートBレジスタを初期化します
* @param
* @return
* @detail 
*/
/*----------------------------------------------------------------------------*/
void vdg_Port_Set_B_Register(void)
{
    /*----------------------------------------------------------------------------*/
    /* チャンネルアナログ入力選択レジスタ */
    /*----------------------------------------------------------------------------*/	
        ANSELB	= ( PORT_USER_ANSEL_B0 << 0u) |
                  ( PORT_USER_ANSEL_B1 << 1u) |
                  ( PORT_USER_ANSEL_B2 << 2u) |
                  ( PORT_USER_ANSEL_B3 << 3u) |
                  ( PORT_USER_ANSEL_B4 << 4u) |
				  ( PORT_USER_ANSEL_B5 << 5u) |
                  ( PORT_USER_ANSEL_B6 << 6u) |
                  ( PORT_USER_ANSEL_B7 << 7u) |
                  ( PORT_USER_ANSEL_B8 << 8u) |
		          ( PORT_USER_ANSEL_B9 << 9u) |
                  ( PORT_USER_ANSEL_B10 << 10u) |
                  ( PORT_USER_ANSEL_B11 << 11u) |
                  ( PORT_USER_ANSEL_B12 << 12u) |
                  ( PORT_USER_ANSEL_B13 << 13u) |
		          ( PORT_USER_ANSEL_B14 << 14u) |
                  ( PORT_USER_ANSEL_B15 << 15u);
    /*----------------------------------------------------------------------------*/        
    /* チャンネルポート入出力方向レジスタ */		
    /*----------------------------------------------------------------------------*/
        TRISB	= ( PORT_USER_TRIS_B0 << 0u) |
                  ( PORT_USER_TRIS_B1 << 1u) |
                  ( PORT_USER_TRIS_B2 << 2u) |
                  ( PORT_USER_TRIS_B3 << 3u) |
                  ( PORT_USER_TRIS_B4 << 4u) |
                  ( PORT_USER_TRIS_B5 << 5u) |
                  ( PORT_USER_TRIS_B6 << 6u) |
                  ( PORT_USER_TRIS_B7 << 7u) |
                  ( PORT_USER_TRIS_B8 << 8u) |
                  ( PORT_USER_TRIS_B9 << 9u) |
                  ( PORT_USER_TRIS_B10 << 10u) |
                  ( PORT_USER_TRIS_B11 << 11u) |
                  ( PORT_USER_TRIS_B12 << 12u) |
                  ( PORT_USER_TRIS_B13 << 13u) |
                  ( PORT_USER_TRIS_B14 << 14u) |
                  ( PORT_USER_TRIS_B15 << 15u) ;

    /*----------------------------------------------------------------------------*/
    /* チャンネルポートレジスタ(Read Only) */		
    /*----------------------------------------------------------------------------*/    
        PORTB	= 0x0000u;	
    /*----------------------------------------------------------------------------*/
    /* チャンネルラッチレジスタ */	
    /*----------------------------------------------------------------------------*/ 	
        LATB	= ( PORT_USER_LAT_B0 << 0u) |
                  ( PORT_USER_LAT_B1 << 1u) |
                  ( PORT_USER_LAT_B2 << 2u) |
                  ( PORT_USER_LAT_B3 << 3u) |
                  ( PORT_USER_LAT_B4 << 4u) |
                  ( PORT_USER_LAT_B5 << 5u) |
                  ( PORT_USER_LAT_B6 << 6u) |
                  ( PORT_USER_LAT_B7 << 7u) |
                  ( PORT_USER_LAT_B8 << 8u) |
                  ( PORT_USER_LAT_B9 << 9u) |
                  ( PORT_USER_LAT_B10 << 10u) |
                  ( PORT_USER_LAT_B11 << 11u) |
                  ( PORT_USER_LAT_B12 << 12u) |
                  ( PORT_USER_LAT_B13 << 13u) |
                  ( PORT_USER_LAT_B14 << 14u) |
                  ( PORT_USER_LAT_B15 << 15u) ;
    /*----------------------------------------------------------------------------*/        
    /* チャンネルオープンドレイン制御レジスタ */
    /*----------------------------------------------------------------------------*/	
        ODCB	= ( PORT_USER_ODC_B0 << 0u) |
                  ( PORT_USER_ODC_B1 << 1u) |
                  ( PORT_USER_ODC_B2 << 2u) |
                  ( PORT_USER_ODC_B3 << 3u) |
                  ( PORT_USER_ODC_B4 << 4u) |
                  ( PORT_USER_ODC_B5 << 5u) |
                  ( PORT_USER_ODC_B6 << 6u) |
                  ( PORT_USER_ODC_B7 << 7u) |
                  ( PORT_USER_ODC_B8 << 8u) |
                  ( PORT_USER_ODC_B9 << 9u) |
                  ( PORT_USER_ODC_B10 << 10u) |
                  ( PORT_USER_ODC_B11 << 11u) |
                  ( PORT_USER_ODC_B12 << 12u) |
                  ( PORT_USER_ODC_B13 << 13u) |
                  ( PORT_USER_ODC_B14 << 14u) |
                  ( PORT_USER_ODC_B15 << 15u) ;
    /*----------------------------------------------------------------------------*/        
    /* チャンネルプルアップレジスタ */
    /*----------------------------------------------------------------------------*/        	
        CNPUB	= ( PORT_USER_CNPU_B0 << 0u) |
                  ( PORT_USER_CNPU_B1 << 1u) |
                  ( PORT_USER_CNPU_B2 << 2u) |
                  ( PORT_USER_CNPU_B3 << 3u) |
                  ( PORT_USER_CNPU_B4 << 4u) |
                  ( PORT_USER_CNPU_B5 << 5u) |
                  ( PORT_USER_CNPU_B6 << 6u) |
                  ( PORT_USER_CNPU_B7 << 7u) |
                  ( PORT_USER_CNPU_B8 << 8u) |
                  ( PORT_USER_CNPU_B9 << 9u) |
                  ( PORT_USER_CNPU_B10 << 10u) |
                  ( PORT_USER_CNPU_B11 << 11u) |
                  ( PORT_USER_CNPU_B12 << 12u) |
                  ( PORT_USER_CNPU_B13 << 13u) |
                  ( PORT_USER_CNPU_B14 << 14u) |
                  ( PORT_USER_CNPU_B15 << 15u) ;
    /*----------------------------------------------------------------------------*/
    /* チャンネルプルダウンレジスタ */
    /*----------------------------------------------------------------------------*/    		
        CNPDB	= ( PORT_USER_CNPD_B0 << 0u) |
                  ( PORT_USER_CNPD_B1 << 1u) |
                  ( PORT_USER_CNPD_B2 << 2u) |
                  ( PORT_USER_CNPD_B3 << 3u) |
                  ( PORT_USER_CNPD_B4 << 4u) |
                  ( PORT_USER_CNPD_B5 << 5u) |
                  ( PORT_USER_CNPD_B6 << 6u) |
                  ( PORT_USER_CNPD_B7 << 7u) |
                  ( PORT_USER_CNPD_B8 << 8u) |
                  ( PORT_USER_CNPD_B9 << 9u) |
                  ( PORT_USER_CNPD_B10 << 10u) |
                  ( PORT_USER_CNPD_B11 << 11u) |
                  ( PORT_USER_CNPD_B12 << 12u) |
                  ( PORT_USER_CNPD_B13 << 13u) |
                  ( PORT_USER_CNPD_B14 << 14u) |
                  ( PORT_USER_CNPD_B15 << 15u) ;
    /*----------------------------------------------------------------------------*/        
    /* チャンネル変化割り込み制御レジスタ */
    /*----------------------------------------------------------------------------*/ 
        CNCONB	= ( PORT_USER_CNCONB_ON << 15u ) | ( PORT_USER_CNCONB_STYLE << 11u);
#if 0   /*コード量削減の為、ビット毎のクリアを無効化にする*/
            CNCONBbits.CNSTYLE	= 0u;	/* 状態変化通知モード */
            CNCONBbits.ON	= 0u;       /* 状態変化通知 (CN) 制御 ON ビット */
#endif /* コード量削減 */
    /*----------------------------------------------------------------------------*/
    /* チャンネル変化割り込み有効レジスタ0 */	
    /*----------------------------------------------------------------------------*/   		
        CNEN0B	= ( PORT_USER_CNEN0_B0 << 0u) |
                  ( PORT_USER_CNEN0_B1 << 1u) |
                  ( PORT_USER_CNEN0_B2 << 2u) |
                  ( PORT_USER_CNEN0_B3 << 3u) |
                  ( PORT_USER_CNEN0_B4 << 4u) |
                  ( PORT_USER_CNEN0_B5 << 5u) |
                  ( PORT_USER_CNEN0_B6 << 6u) |
                  ( PORT_USER_CNEN0_B7 << 7u) |
                  ( PORT_USER_CNEN0_B8 << 8u) |
                  ( PORT_USER_CNEN0_B9 << 9u) |
                  ( PORT_USER_CNEN0_B10 << 10u) |
                  ( PORT_USER_CNEN0_B11 << 11u) |
                  ( PORT_USER_CNEN0_B12 << 12u) |
                  ( PORT_USER_CNEN0_B13 << 13u) |
                  ( PORT_USER_CNEN0_B14 << 14u) |
                  ( PORT_USER_CNEN0_B15 << 15u) ;
    /*----------------------------------------------------------------------------*/
    /* チャンネル変化ステータスレジスタ */	
    /*----------------------------------------------------------------------------*/  
        CNSTATB	= 0x0000u;	
    /*----------------------------------------------------------------------------*/
    /* チャンネル変化割り込み有効レジスタ1 */	
    /*----------------------------------------------------------------------------*/   		
        CNEN1B	= ( PORT_USER_CNEN1_B0 << 0u) |
                  ( PORT_USER_CNEN1_B1 << 1u) |
                  ( PORT_USER_CNEN1_B2 << 2u) |
                  ( PORT_USER_CNEN1_B3 << 3u) |
                  ( PORT_USER_CNEN1_B4 << 4u) |
                  ( PORT_USER_CNEN1_B5 << 5u) |
                  ( PORT_USER_CNEN1_B6 << 6u) |
                  ( PORT_USER_CNEN1_B7 << 7u) |
                  ( PORT_USER_CNEN1_B8 << 8u) |
                  ( PORT_USER_CNEN1_B9 << 9u) |
                  ( PORT_USER_CNEN1_B10 << 10u) |
                  ( PORT_USER_CNEN1_B11 << 11u) |
                  ( PORT_USER_CNEN1_B12 << 12u) |
                  ( PORT_USER_CNEN1_B13 << 13u) |
                  ( PORT_USER_CNEN1_B14 << 14u) |
                  ( PORT_USER_CNEN1_B15 << 15u) ;
    /*----------------------------------------------------------------------------*/
    /* チャンネル変化割り込みフラグレジスタ */	
    /*----------------------------------------------------------------------------*/ 	
        CNFB	= 0x0000u;
}
/*----------------------------------------------------------------------------*/
/*
* @fn        vdg_Port_Set_C_Register(void)
* @brief        ポートCレジスタを初期化します
* @param
* @return
* @detail 
*/
/*----------------------------------------------------------------------------*/
void vdg_Port_Set_C_Register(void)
{
    /*----------------------------------------------------------------------------*/
    /* チャンネルアナログ入力選択レジスタ */
    /*----------------------------------------------------------------------------*/	
        ANSELC	= ( PORT_USER_ANSEL_C0 << 0u) |
                  ( PORT_USER_ANSEL_C1 << 1u) |
                  ( PORT_USER_ANSEL_C2 << 2u) |
                  ( PORT_USER_ANSEL_C3 << 3u) |
                  ( PORT_USER_ANSEL_C4 << 4u) |
				  ( PORT_USER_ANSEL_C5 << 5u) |
                  ( PORT_USER_ANSEL_C6 << 6u) |
                  ( PORT_USER_ANSEL_C7 << 7u) |
                  ( PORT_USER_ANSEL_C8 << 8u) |
		          ( PORT_USER_ANSEL_C9 << 9u) |
                  ( PORT_USER_ANSEL_C10 << 10u) |
                  ( PORT_USER_ANSEL_C11 << 11u) |
                  ( PORT_USER_ANSEL_C12 << 12u) |
                  ( PORT_USER_ANSEL_C13 << 13u) |
		          ( PORT_USER_ANSEL_C14 << 14u) |
                  ( PORT_USER_ANSEL_C15 << 15u);

    /*----------------------------------------------------------------------------*/        
    /* チャンネルポート入出力方向レジスタ */		
    /*----------------------------------------------------------------------------*/
        TRISC	= ( PORT_USER_TRIS_C0 << 0u) |
                  ( PORT_USER_TRIS_C1 << 1u) |
                  ( PORT_USER_TRIS_C2 << 2u) |
                  ( PORT_USER_TRIS_C3 << 3u) |
                  ( PORT_USER_TRIS_C4 << 4u) |
                  ( PORT_USER_TRIS_C5 << 5u) |
                  ( PORT_USER_TRIS_C6 << 6u) |
                  ( PORT_USER_TRIS_C7 << 7u) |
                  ( PORT_USER_TRIS_C8 << 8u) |
                  ( PORT_USER_TRIS_C9 << 9u) |
                  ( PORT_USER_TRIS_C10 << 10u) |
                  ( PORT_USER_TRIS_C11 << 11u) |
                  ( PORT_USER_TRIS_C12 << 12u) |
                  ( PORT_USER_TRIS_C13 << 13u) |
                  ( PORT_USER_TRIS_C14 << 14u) |
                  ( PORT_USER_TRIS_C15 << 15u) ;
    /*----------------------------------------------------------------------------*/
    /* チャンネルポートレジスタ(Read Only) */		
    /*----------------------------------------------------------------------------*/    
        PORTC	= 0x0000u;	
    /*----------------------------------------------------------------------------*/
    /* チャンネルラッチレジスタ */	
    /*----------------------------------------------------------------------------*/ 	
        LATC	= ( PORT_USER_LAT_C0 << 0u) |
                  ( PORT_USER_LAT_C1 << 1u) |
                  ( PORT_USER_LAT_C2 << 2u) |
                  ( PORT_USER_LAT_C3 << 3u) |
                  ( PORT_USER_LAT_C4 << 4u) |
                  ( PORT_USER_LAT_C5 << 5u) |
                  ( PORT_USER_LAT_C6 << 6u) |
                  ( PORT_USER_LAT_C7 << 7u) |
                  ( PORT_USER_LAT_C8 << 8u) |
                  ( PORT_USER_LAT_C9 << 9u) |
                  ( PORT_USER_LAT_C10 << 10u) |
                  ( PORT_USER_LAT_C11 << 11u) |
                  ( PORT_USER_LAT_C12 << 12u) |
                  ( PORT_USER_LAT_C13 << 13u) |
                  ( PORT_USER_LAT_C14 << 14u) |
                  ( PORT_USER_LAT_C15 << 15u) ;
    /*----------------------------------------------------------------------------*/        
    /* チャンネルオープンドレイン制御レジスタ */
    /*----------------------------------------------------------------------------*/
        ODCC	= ( PORT_USER_ODC_C0 << 0u) |
                  ( PORT_USER_ODC_C1 << 1u) |
                  ( PORT_USER_ODC_C2 << 2u) |
                  ( PORT_USER_ODC_C3 << 3u) |
                  ( PORT_USER_ODC_C4 << 4u) |
                  ( PORT_USER_ODC_C5 << 5u) |
                  ( PORT_USER_ODC_C6 << 6u) |
                  ( PORT_USER_ODC_C7 << 7u) |
                  ( PORT_USER_ODC_C8 << 8u) |
                  ( PORT_USER_ODC_C9 << 9u) |
                  ( PORT_USER_ODC_C10 << 10u) |
                  ( PORT_USER_ODC_C11 << 11u) |
                  ( PORT_USER_ODC_C12 << 12u) |
                  ( PORT_USER_ODC_C13 << 13u) |
                  ( PORT_USER_ODC_C14 << 14u) |
                  ( PORT_USER_ODC_C15 << 15u) ;
    /*----------------------------------------------------------------------------*/        
    /* チャンネルプルアップレジスタ */
    /*----------------------------------------------------------------------------*/        	
        CNPUC	= ( PORT_USER_CNPU_C0 << 0u) |
                  ( PORT_USER_CNPU_C1 << 1u) |
                  ( PORT_USER_CNPU_C2 << 2u) |
                  ( PORT_USER_CNPU_C3 << 3u) |
                  ( PORT_USER_CNPU_C4 << 4u) |
                  ( PORT_USER_CNPU_C5 << 5u) |
                  ( PORT_USER_CNPU_C6 << 6u) |
                  ( PORT_USER_CNPU_C7 << 7u) |
                  ( PORT_USER_CNPU_C8 << 8u) |
                  ( PORT_USER_CNPU_C9 << 9u) |
                  ( PORT_USER_CNPU_C10 << 10u) |
                  ( PORT_USER_CNPU_C11 << 11u) |
                  ( PORT_USER_CNPU_C12 << 12u) |
                  ( PORT_USER_CNPU_C13 << 13u) |
                  ( PORT_USER_CNPU_C14 << 14u) |
                  ( PORT_USER_CNPU_C15 << 15u) ;
    /*----------------------------------------------------------------------------*/
    /* チャンネルプルダウンレジスタ */
    /*----------------------------------------------------------------------------*/    	
        CNPDC	= ( PORT_USER_CNPD_C0 << 0u) |
                  ( PORT_USER_CNPD_C1 << 1u) |
                  ( PORT_USER_CNPD_C2 << 2u) |
                  ( PORT_USER_CNPD_C3 << 3u) |
                  ( PORT_USER_CNPD_C4 << 4u) |
                  ( PORT_USER_CNPD_C5 << 5u) |
                  ( PORT_USER_CNPD_C6 << 6u) |
                  ( PORT_USER_CNPD_C7 << 7u) |
                  ( PORT_USER_CNPD_C8 << 8u) |
                  ( PORT_USER_CNPD_C9 << 9u) |
                  ( PORT_USER_CNPD_C10 << 10u) |
                  ( PORT_USER_CNPD_C11 << 11u) |
                  ( PORT_USER_CNPD_C12 << 12u) |
                  ( PORT_USER_CNPD_C13 << 13u) |
                  ( PORT_USER_CNPD_C14 << 14u) |
                  ( PORT_USER_CNPD_C15 << 15u) ;
    /*----------------------------------------------------------------------------*/        
    /* チャンネル変化割り込み制御レジスタ */
    /*----------------------------------------------------------------------------*/ 	
        CNCONC	= ( PORT_USER_CNCONC_ON << 15u ) | ( PORT_USER_CNCONC_STYLE << 11u);
    /*----------------------------------------------------------------------------*/
    /* チャンネル変化割り込み有効レジスタ0 */	
    /*----------------------------------------------------------------------------*/   		
        CNEN0C	= ( PORT_USER_CNEN0_C0 << 0u) |
                  ( PORT_USER_CNEN0_C1 << 1u) |
                  ( PORT_USER_CNEN0_C2 << 2u) |
                  ( PORT_USER_CNEN0_C3 << 3u) |
                  ( PORT_USER_CNEN0_C4 << 4u) |
                  ( PORT_USER_CNEN0_C5 << 5u) |
                  ( PORT_USER_CNEN0_C6 << 6u) |
                  ( PORT_USER_CNEN0_C7 << 7u) |
                  ( PORT_USER_CNEN0_C8 << 8u) |
                  ( PORT_USER_CNEN0_C9 << 9u) |
                  ( PORT_USER_CNEN0_C10 << 10u) |
                  ( PORT_USER_CNEN0_C11 << 11u) |
                  ( PORT_USER_CNEN0_C12 << 12u) |
                  ( PORT_USER_CNEN0_C13 << 13u) |
                  ( PORT_USER_CNEN0_C14 << 14u) |
                  ( PORT_USER_CNEN0_C15 << 15u) ;
    /*----------------------------------------------------------------------------*/
    /* チャンネル変化ステータスレジスタ */	
    /*----------------------------------------------------------------------------*/  		
        CNSTATC	= 0x0000u;	
    /*----------------------------------------------------------------------------*/
    /* チャンネル変化割り込み有効レジスタ1 */	
    /*----------------------------------------------------------------------------*/   		
        CNEN1C	= ( PORT_USER_CNEN1_C0 << 0u) |
                  ( PORT_USER_CNEN1_C1 << 1u) |
                  ( PORT_USER_CNEN1_C2 << 2u) |
                  ( PORT_USER_CNEN1_C3 << 3u) |
                  ( PORT_USER_CNEN1_C4 << 4u) |
                  ( PORT_USER_CNEN1_C5 << 5u) |
                  ( PORT_USER_CNEN1_C6 << 6u) |
                  ( PORT_USER_CNEN1_C7 << 7u) |
                  ( PORT_USER_CNEN1_C8 << 8u) |
                  ( PORT_USER_CNEN1_C9 << 9u) |
                  ( PORT_USER_CNEN1_C10 << 10u) |
                  ( PORT_USER_CNEN1_C11 << 11u) |
                  ( PORT_USER_CNEN1_C12 << 12u) |
                  ( PORT_USER_CNEN1_C13 << 13u) |
                  ( PORT_USER_CNEN1_C14 << 14u) |
                  ( PORT_USER_CNEN1_C15 << 15u) ;
    /*----------------------------------------------------------------------------*/
    /* チャンネル変化割り込みフラグレジスタ */	
    /*----------------------------------------------------------------------------*/ 		
        CNFC	= 0x0000u;	
}
/*----------------------------------------------------------------------------*/
/*
* @fn        vdg_Port_Set_D_Register(void)
* @brief     ポートDレジスタを初期化します
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void vdg_Port_Set_D_Register(void)
{
#if (CPU_PIN_NUM > CPU_PIN36)
    /*----------------------------------------------------------------------------*/
    /* チャンネルアナログ入力選択レジスタ */
    /*----------------------------------------------------------------------------*/		
        ANSELD	= ( PORT_USER_ANSEL_D0 << 0u) |
                  ( PORT_USER_ANSEL_D1 << 1u) |
                  ( PORT_USER_ANSEL_D2 << 2u) |
                  ( PORT_USER_ANSEL_D3 << 3u) |
                  ( PORT_USER_ANSEL_D4 << 4u) |
				  ( PORT_USER_ANSEL_D5 << 5u) |
                  ( PORT_USER_ANSEL_D6 << 6u) |
                  ( PORT_USER_ANSEL_D7 << 7u) |
                  ( PORT_USER_ANSEL_D8 << 8u) |
		          ( PORT_USER_ANSEL_D9 << 9u) |
                  ( PORT_USER_ANSEL_D10 << 10u) |
                  ( PORT_USER_ANSEL_D11 << 11u) |
                  ( PORT_USER_ANSEL_D12 << 12u) |
                  ( PORT_USER_ANSEL_D13 << 13u) |
		          ( PORT_USER_ANSEL_D14 << 14u) |
                  ( PORT_USER_ANSEL_D15 << 15u);
    /*----------------------------------------------------------------------------*/        
    /* チャンネルポート入出力方向レジスタ */		
    /*----------------------------------------------------------------------------*/
        TRISD	= ( PORT_USER_TRIS_D0 << 0u) |
                  ( PORT_USER_TRIS_D1 << 1u) |
                  ( PORT_USER_TRIS_D2 << 2u) |
                  ( PORT_USER_TRIS_D3 << 3u) |
                  ( PORT_USER_TRIS_D4 << 4u) |
                  ( PORT_USER_TRIS_D5 << 5u) |
                  ( PORT_USER_TRIS_D6 << 6u) |
                  ( PORT_USER_TRIS_D7 << 7u) |
                  ( PORT_USER_TRIS_D8 << 8u) |
                  ( PORT_USER_TRIS_D9 << 9u) |
                  ( PORT_USER_TRIS_D10 << 10u) |
                  ( PORT_USER_TRIS_D11 << 11u) |
                  ( PORT_USER_TRIS_D12 << 12u) |
                  ( PORT_USER_TRIS_D13 << 13u) |
                  ( PORT_USER_TRIS_D14 << 14u) |
                  ( PORT_USER_TRIS_D15 << 15u) ;
#if 0   /*コード量削減の為、ビット毎のクリアを無効化にする*/ 
#if (CPU_PIN_NUM >= CPU_PIN64)
            TRISDbits.TRISD0	= PORT_USER_TRIS_D0;	/* チャンネルD0入出力方向ビット */
            TRISDbits.TRISD1	= PORT_USER_TRIS_D1;	/* チャンネルD1入出力方向ビット */
            TRISDbits.TRISD2	= PORT_USER_TRIS_D2;	/* チャンネルD2入出力方向ビット */
            TRISDbits.TRISD3	= PORT_USER_TRIS_D3;	/* チャンネルD3入出力方向ビット */
            TRISDbits.TRISD4	= PORT_USER_TRIS_D4;	/* チャンネルD4入出力方向ビット */
            TRISDbits.TRISD5	= PORT_USER_TRIS_D5;	/* チャンネルD5入出力方向ビット */
            TRISDbits.TRISD6	= PORT_USER_TRIS_D6;	/* チャンネルD6入出力方向ビット */
            TRISDbits.TRISD7	= PORT_USER_TRIS_D7;	/* チャンネルD7入出力方向ビット */
            TRISDbits.TRISD8	= PORT_USER_TRIS_D8;	/* チャンネルD8入出力方向ビット */
            TRISDbits.TRISD9	= PORT_USER_TRIS_D9;	/* チャンネルD9入出力方向ビット */
            TRISDbits.TRISD10	= PORT_USER_TRIS_D10;	/* チャンネルD10入出力方向ビット */
            TRISDbits.TRISD11	= PORT_USER_TRIS_D11;	/* チャンネルD11入出力方向ビット */
            TRISDbits.TRISD12	= PORT_USER_TRIS_D12;	/* チャンネルD12入出力方向ビット */
            TRISDbits.TRISD13	= PORT_USER_TRIS_D13;	/* チャンネルD13入出力方向ビット */
            TRISDbits.TRISD14	= PORT_USER_TRIS_D14;	/* チャンネルD14入出力方向ビット */
            TRISDbits.TRISD15	= PORT_USER_TRIS_D15;	/* チャンネルD15入出力方向ビット */
#else
            TRISDbits.TRISD1	= PORT_USER_TRIS_D1;	/* チャンネルD1入出力方向ビット */
            TRISDbits.TRISD8	= PORT_USER_TRIS_D8;	/* チャンネルD8入出力方向ビット */
            TRISDbits.TRISD10	= PORT_USER_TRIS_D10;	/* チャンネルD10入出力方向ビット */
            TRISDbits.TRISD13	= PORT_USER_TRIS_D13;	/* チャンネルD13入出力方向ビット */ 
#endif
#endif /* コード量削減 */
    /*----------------------------------------------------------------------------*/
    /* チャンネルポートレジスタ(Read Only) */		
    /*----------------------------------------------------------------------------*/    
        PORTD	= 0x0000u;	
#if 0   /*コード量削減の為、ビット毎のクリアを無効化にする*/ 
#if (CPU_PIN_NUM >= CPU_PIN64)
            PORTDbits.RD0	= 0u;	/* チャンネルD0データビット(Read Only) */
            PORTDbits.RD1	= 0u;	/* チャンネルD1データビット(Read Only) */
            PORTDbits.RD2	= 0u;	/* チャンネルD2データビット(Read Only) */
            PORTDbits.RD3	= 0u;	/* チャンネルD3データビット(Read Only) */
            PORTDbits.RD4	= 0u;	/* チャンネルD4データビット(Read Only) */
            PORTDbits.RD5	= 0u;	/* チャンネルD5データビット(Read Only) */
            PORTDbits.RD6	= 0u;	/* チャンネルD6データビット(Read Only) */
            PORTDbits.RD7	= 0u;	/* チャンネルD7データビット(Read Only) */
            PORTDbits.RD8	= 0u;	/* チャンネルD8データビット(Read Only) */
            PORTDbits.RD9	= 0u;	/* チャンネルD9データビット(Read Only) */
            PORTDbits.RD10	= 0u;	/* チャンネルD10データビット(Read Only) */
            PORTDbits.RD11	= 0u;	/* チャンネルD11データビット(Read Only) */
            PORTDbits.RD12	= 0u;	/* チャンネルD12データビット(Read Only) */
            PORTDbits.RD13	= 0u;	/* チャンネルD13データビット(Read Only) */
            PORTDbits.RD14	= 0u;	/* チャンネルD14データビット(Read Only) */
            PORTDbits.RD15	= 0u;	/* チャンネルD15データビット(Read Only) */
#else
            PORTDbits.RD1	= 0u;	/* チャンネルD1データビット(Read Only) *//
            PORTDbits.RD8	= 0u;	/* チャンネルD8データビット(Read Only) */
            PORTDbits.RD10	= 0u;	/* チャンネルD10データビット(Read Only) */
            PORTDbits.RD13	= 0u;	/* チャンネルD13データビット(Read Only) */     
#endif
#endif /* コード量削減 */
    /*----------------------------------------------------------------------------*/
    /* チャンネルラッチレジスタ */	
    /*----------------------------------------------------------------------------*/ 	
        LATD	= ( PORT_USER_LAT_D0 << 0u) |
                  ( PORT_USER_LAT_D1 << 1u) |
                  ( PORT_USER_LAT_D2 << 2u) |
                  ( PORT_USER_LAT_D3 << 3u) |
                  ( PORT_USER_LAT_D4 << 4u) |
                  ( PORT_USER_LAT_D5 << 5u) |
                  ( PORT_USER_LAT_D6 << 6u) |
                  ( PORT_USER_LAT_D7 << 7u) |
                  ( PORT_USER_LAT_D8 << 8u) |
                  ( PORT_USER_LAT_D9 << 9u) |
                  ( PORT_USER_LAT_D10 << 10u) |
                  ( PORT_USER_LAT_D11 << 11u) |
                  ( PORT_USER_LAT_D12 << 12u) |
                  ( PORT_USER_LAT_D13 << 13u) |
                  ( PORT_USER_LAT_D14 << 14u) |
                  ( PORT_USER_LAT_D15 << 15u) ;
#if 0   /*コード量削減の為、ビット毎のクリアを無効化にする*/ 
#if (CPU_PIN_NUM >= CPU_PIN64)
            LATDbits.LATD1	= PORT_USER_LAT_D1;	/* チャンネルD1ラッチビット */
            LATDbits.LATD2	= PORT_USER_LAT_D2;	/* チャンネルD2ラッチビット */
            LATDbits.LATD3	= PORT_USER_LAT_D3;	/* チャンネルD3ラッチビット */
            LATDbits.LATD4	= PORT_USER_LAT_D4;	/* チャンネルD4ラッチビット */
            LATDbits.LATD5	= PORT_USER_LAT_D5;	/* チャンネルD5ラッチビット */
            LATDbits.LATD6	= PORT_USER_LAT_D6;	/* チャンネルD6ラッチビット */
            LATDbits.LATD7	= PORT_USER_LAT_D7;	/* チャンネルD7ラッチビット */
            LATDbits.LATD8	= PORT_USER_LAT_D8;	/* チャンネルD8ラッチビット */
            LATDbits.LATD9	= PORT_USER_LAT_D9;	/* チャンネルD9ラッチビット */
            LATDbits.LATD10	= PORT_USER_LAT_D10;	/* チャンネルD10ラッチビット */
            LATDbits.LATD11	= PORT_USER_LAT_D11;	/* チャンネルD11ラッチビット */
            LATDbits.LATD12	= PORT_USER_LAT_D12;	/* チャンネルD12ラッチビット */
            LATDbits.LATD13	= PORT_USER_LAT_D13;	/* チャンネルD13ラッチビット */
            LATDbits.LATD14	= PORT_USER_LAT_D14;	/* チャンネルD14ラッチビット */
            LATDbits.LATD15	= PORT_USER_LAT_D15;	/* チャンネルD15ラッチビット */
#else
            LATDbits.LATD1	= PORT_USER_LAT_D1;	/* チャンネルD1ラッチビット */
            LATDbits.LATD8	= PORT_USER_LAT_D8;	/* チャンネルD8ラッチビット */
            LATDbits.LATD10	= PORT_USER_LAT_D10;	/* チャンネルD10ラッチビット */
            LATDbits.LATD13	= PORT_USER_LAT_D13;	/* チャンネルD13ラッチビット */     
#endif
#endif /* コード量削減 */
    /*----------------------------------------------------------------------------*/        
    /* チャンネルオープンドレイン制御レジスタ */
    /*----------------------------------------------------------------------------*/	
        ODCD	= ( PORT_USER_ODC_D0 << 0u) |
                  ( PORT_USER_ODC_D1 << 1u) |
                  ( PORT_USER_ODC_D2 << 2u) |
                  ( PORT_USER_ODC_D3 << 3u) |
                  ( PORT_USER_ODC_D4 << 4u) |
                  ( PORT_USER_ODC_D5 << 5u) |
                  ( PORT_USER_ODC_D6 << 6u) |
                  ( PORT_USER_ODC_D7 << 7u) |
                  ( PORT_USER_ODC_D8 << 8u) |
                  ( PORT_USER_ODC_D9 << 9u) |
                  ( PORT_USER_ODC_D10 << 10u) |
                  ( PORT_USER_ODC_D11 << 11u) |
                  ( PORT_USER_ODC_D12 << 12u) |
                  ( PORT_USER_ODC_D13 << 13u) |
                  ( PORT_USER_ODC_D14 << 14u) |
                  ( PORT_USER_ODC_D15 << 15u) ;
#if 0   /*コード量削減の為、ビット毎のクリアを無効化にする*/ 
#if (CPU_PIN_NUM >= CPU_PIN64)
            ODCDbits.ODCD0	= 0u;	/* チャンネルD0オープンドレインビット */
            ODCDbits.ODCD1	= 0u;	/* チャンネルD1オープンドレインビット */
            ODCDbits.ODCD2	= 0u;	/* チャンネルD2オープンドレインビット */
            ODCDbits.ODCD3	= 0u;	/* チャンネルD3オープンドレインビット */
            ODCDbits.ODCD4	= 0u;	/* チャンネルD4オープンドレインビット */
            ODCDbits.ODCD5	= 0u;	/* チャンネルD5オープンドレインビット */
            ODCDbits.ODCD6	= 0u;	/* チャンネルD6オープンドレインビット */
            ODCDbits.ODCD7	= 0u;	/* チャンネルD7オープンドレインビット */
            ODCDbits.ODCD8	= 0u;	/* チャンネルD8オープンドレインビット */
            ODCDbits.ODCD9	= 0u;	/* チャンネルD9オープンドレインビット */
            ODCDbits.ODCD10	= 0u;	/* チャンネルD10オープンドレインビット */
            ODCDbits.ODCD11	= 0u;	/* チャンネルD11オープンドレインビット */
            ODCDbits.ODCD12	= 0u;	/* チャンネルD12オープンドレインビット */
            ODCDbits.ODCD13	= 0u;	/* チャンネルD13オープンドレインビット */
            ODCDbits.ODCD14	= 0u;	/* チャンネルD14オープンドレインビット */
            ODCDbits.ODCD15	= 0u;	/* チャンネルD15オープンドレインビット */
#else
            ODCDbits.ODCD1	= 0u;	/* チャンネルD1オープンドレインビット */
            ODCDbits.ODCD8	= 0u;	/* チャンネルD8オープンドレインビット */
            ODCDbits.ODCD10	= 0u;	/* チャンネルD10オープンドレインビット */
            ODCDbits.ODCD13	= 0u;	/* チャンネルD13オープンドレインビット */
#endif
#endif /* コード量削減 */
    /*----------------------------------------------------------------------------*/        
    /* チャンネルプルアップレジスタ */
    /*----------------------------------------------------------------------------*/        		
        CNPUD	= ( PORT_USER_CNPU_D0 << 0u) |
                  ( PORT_USER_CNPU_D1 << 1u) |
                  ( PORT_USER_CNPU_D2 << 2u) |
                  ( PORT_USER_CNPU_D3 << 3u) |
                  ( PORT_USER_CNPU_D4 << 4u) |
                  ( PORT_USER_CNPU_D5 << 5u) |
                  ( PORT_USER_CNPU_D6 << 6u) |
                  ( PORT_USER_CNPU_D7 << 7u) |
                  ( PORT_USER_CNPU_D8 << 8u) |
                  ( PORT_USER_CNPU_D9 << 9u) |
                  ( PORT_USER_CNPU_D10 << 10u) |
                  ( PORT_USER_CNPU_D11 << 11u) |
                  ( PORT_USER_CNPU_D12 << 12u) |
                  ( PORT_USER_CNPU_D13 << 13u) |
                  ( PORT_USER_CNPU_D14 << 14u) |
                  ( PORT_USER_CNPU_D15 << 15u) ;
#if 0   /*コード量削減の為、ビット毎のクリアを無効化にする*/ 
#if (CPU_PIN_NUM >= CPU_PIN64)
            CNPUDbits.CNPUD0	= 0u;	/* チャンネルD0プルアップ有効ビット */
            CNPUDbits.CNPUD1	= 0u;	/* チャンネルD1プルアップ有効ビット */
            CNPUDbits.CNPUD2	= 0u;	/* チャンネルD2プルアップ有効ビット */
            CNPUDbits.CNPUD3	= 0u;	/* チャンネルD3プルアップ有効ビット */
            CNPUDbits.CNPUD4	= 0u;	/* チャンネルD4プルアップ有効ビット */
            CNPUDbits.CNPUD5	= 0u;	/* チャンネルD5プルアップ有効ビット */
            CNPUDbits.CNPUD6	= 0u;	/* チャンネルD6プルアップ有効ビット */
            CNPUDbits.CNPUD7	= 0u;	/* チャンネルD7プルアップ有効ビット */
            CNPUDbits.CNPUD8	= 0u;	/* チャンネルD8プルアップ有効ビット */
            CNPUDbits.CNPUD9	= 0u;	/* チャンネルD9プルアップ有効ビット */
            CNPUDbits.CNPUD10	= 0u;	/* チャンネルD10プルアップ有効ビット */
            CNPUDbits.CNPUD11	= 0u;	/* チャンネルD11プルアップ有効ビット */
            CNPUDbits.CNPUD12	= 0u;	/* チャンネルD12プルアップ有効ビット */
            CNPUDbits.CNPUD13	= 0u;	/* チャンネルD13プルアップ有効ビット */
            CNPUDbits.CNPUD14	= 0u;	/* チャンネルD14プルアップ有効ビット */
            CNPUDbits.CNPUD15	= 0u;	/* チャンネルD15プルアップ有効ビット */
#else
            CNPUDbits.CNPUD1	= 0u;	/* チャンネルD1プルアップ有効ビット */
            CNPUDbits.CNPUD8	= 0u;	/* チャンネルD8プルアップ有効ビット */
            CNPUDbits.CNPUD10	= 0u;	/* チャンネルD10プルアップ有効ビット */
            CNPUDbits.CNPUD13	= 0u;	/* チャンネルD13プルアップ有効ビット */
#endif
#endif /* コード量削減 */
    /*----------------------------------------------------------------------------*/
    /* チャンネルプルダウンレジスタ */
    /*----------------------------------------------------------------------------*/    	
        CNPDD	= ( PORT_USER_CNPD_D0 << 0u) |
                  ( PORT_USER_CNPD_D1 << 1u) |
                  ( PORT_USER_CNPD_D2 << 2u) |
                  ( PORT_USER_CNPD_D3 << 3u) |
                  ( PORT_USER_CNPD_D4 << 4u) |
                  ( PORT_USER_CNPD_D5 << 5u) |
                  ( PORT_USER_CNPD_D6 << 6u) |
                  ( PORT_USER_CNPD_D7 << 7u) |
                  ( PORT_USER_CNPD_D8 << 8u) |
                  ( PORT_USER_CNPD_D9 << 9u) |
                  ( PORT_USER_CNPD_D10 << 10u) |
                  ( PORT_USER_CNPD_D11 << 11u) |
                  ( PORT_USER_CNPD_D12 << 12u) |
                  ( PORT_USER_CNPD_D13 << 13u) |
                  ( PORT_USER_CNPD_D14 << 14u) |
                  ( PORT_USER_CNPD_D15 << 15u) ;
#if 0   /*コード量削減の為、ビット毎のクリアを無効化にする*/ 
#if (CPU_PIN_NUM >= CPU_PIN64)
            CNPDDbits.CNPDD0	= 0u;	/* チャンネルD0プルダウン有効ビット */
            CNPDDbits.CNPDD1	= 0u;	/* チャンネルD1プルダウン有効ビット */
            CNPDDbits.CNPDD2	= 0u;	/* チャンネルD2プルダウン有効ビット */
            CNPDDbits.CNPDD3	= 0u;	/* チャンネルD3プルダウン有効ビット */
            CNPDDbits.CNPDD4	= 0u;	/* チャンネルD4プルダウン有効ビット */
            CNPDDbits.CNPDD5	= 0u;	/* チャンネルD5プルダウン有効ビット */
            CNPDDbits.CNPDD6	= 0u;	/* チャンネルD6プルダウン有効ビット */
            CNPDDbits.CNPDD7	= 0u;	/* チャンネルD7プルダウン有効ビット */
            CNPDDbits.CNPDD8	= 0u;	/* チャンネルD8プルダウン有効ビット */
            CNPDDbits.CNPDD9	= 0u;	/* チャンネルD9プルダウン有効ビット */
            CNPDDbits.CNPDD10	= 0u;	/* チャンネルD10プルダウン有効ビット */
            CNPDDbits.CNPDD11	= 0u;	/* チャンネルD11プルダウン有効ビット */
            CNPDDbits.CNPDD12	= 0u;	/* チャンネルD12プルダウン有効ビット */
            CNPDDbits.CNPDD13	= 0u;	/* チャンネルD13プルダウン有効ビット */
            CNPDDbits.CNPDD14	= 0u;	/* チャンネルD14プルダウン有効ビット */
            CNPDDbits.CNPDD15	= 0u;	/* チャンネルD15プルダウン有効ビット */
#else
            CNPDDbits.CNPDD1	= 0u;	/* チャンネルD1プルダウン有効ビット */
            CNPDDbits.CNPDD8	= 0u;	/* チャンネルD8プルダウン有効ビット */
            CNPDDbits.CNPDD10	= 0u;	/* チャンネルD10プルダウン有効ビット */
            CNPDDbits.CNPDD13	= 0u;	/* チャンネルD13プルダウン有効ビット */
#endif
#endif /* コード量削減 */
    /*----------------------------------------------------------------------------*/        
    /* チャンネル変化割り込み制御レジスタ */
    /*----------------------------------------------------------------------------*/ 		
        CNCOND	= ( PORT_USER_CNCOND_ON << 15u ) | ( PORT_USER_CNCOND_STYLE << 11u);	
#if 0   /*コード量削減の為、ビット毎のクリアを無効化にする*/ 
            CNCONDbits.CNSTYLE	= 0u;	/* 状態変化通知モード */
            CNCONDbits.ON	= 0u;       /* 状態変化通知 (CN) 制御 ON ビット */
#endif /* コード量削減 */
    /*----------------------------------------------------------------------------*/
    /* チャンネル変化割り込み有効レジスタ0 */	
    /*----------------------------------------------------------------------------*/   		
        CNEN0D	= ( PORT_USER_CNEN0_D0 << 0u) |
                  ( PORT_USER_CNEN0_D1 << 1u) |
                  ( PORT_USER_CNEN0_D2 << 2u) |
                  ( PORT_USER_CNEN0_D3 << 3u) |
                  ( PORT_USER_CNEN0_D4 << 4u) |
                  ( PORT_USER_CNEN0_D5 << 5u) |
                  ( PORT_USER_CNEN0_D6 << 6u) |
                  ( PORT_USER_CNEN0_D7 << 7u) |
                  ( PORT_USER_CNEN0_D8 << 8u) |
                  ( PORT_USER_CNEN0_D9 << 9u) |
                  ( PORT_USER_CNEN0_D10 << 10u) |
                  ( PORT_USER_CNEN0_D11 << 11u) |
                  ( PORT_USER_CNEN0_D12 << 12u) |
                  ( PORT_USER_CNEN0_D13 << 13u) |
                  ( PORT_USER_CNEN0_D14 << 14u) |
                  ( PORT_USER_CNEN0_D15 << 15u) ;
#if 0   /*コード量削減の為、ビット毎のクリアを無効化にする*/ 
#if (CPU_PIN_NUM >= CPU_PIN64)
            CNEN0Dbits.CNEN0D0	= 0u;	/* チャンネルD0入力変化割り込み有効化ビット */
            CNEN0Dbits.CNEN0D1	= 0u;	/* チャンネルD1入力変化割り込み有効化ビット */
            CNEN0Dbits.CNEN0D2	= 0u;	/* チャンネルD2入力変化割り込み有効化ビット */
            CNEN0Dbits.CNEN0D3	= 0u;	/* チャンネルD3入力変化割り込み有効化ビット */
            CNEN0Dbits.CNEN0D4	= 0u;	/* チャンネルD4入力変化割り込み有効化ビット */
            CNEN0Dbits.CNEN0D5	= 0u;	/* チャンネルD5入力変化割り込み有効化ビット */
            CNEN0Dbits.CNEN0D6	= 0u;	/* チャンネルD6入力変化割り込み有効化ビット */
            CNEN0Dbits.CNEN0D7	= 0u;	/* チャンネルD7入力変化割り込み有効化ビット */
            CNEN0Dbits.CNEN0D8	= 0u;	/* チャンネルD8入力変化割り込み有効化ビット */
            CNEN0Dbits.CNEN0D9	= 0u;	/* チャンネルD9入力変化割り込み有効化ビット */
            CNEN0Dbits.CNEN0D10	= 0u;	/* チャンネルD10入力変化割り込み有効化ビット */
            CNEN0Dbits.CNEN0D11	= 0u;	/* チャンネルD11入力変化割り込み有効化ビット */
            CNEN0Dbits.CNEN0D12	= 0u;	/* チャンネルD12入力変化割り込み有効化ビット */
            CNEN0Dbits.CNEN0D13	= 0u;	/* チャンネルD13入力変化割り込み有効化ビット */
            CNEN0Dbits.CNEN0D14	= 0u;	/* チャンネルD14入力変化割り込み有効化ビット */
            CNEN0Dbits.CNEN0D15	= 0u;	/* チャンネルD15入力変化割り込み有効化ビット */
#else
            CNEN0Dbits.CNEN0D1	= 0u;	/* チャンネルD1入力変化割り込み有効化ビット */
            CNEN0Dbits.CNEN0D8	= 0u;	/* チャンネルD8入力変化割り込み有効化ビット */
            CNEN0Dbits.CNEN0D10	= 0u;	/* チャンネルD10入力変化割り込み有効化ビット */
            CNEN0Dbits.CNEN0D13	= 0u;	/* チャンネルD13入力変化割り込み有効化ビット */
#endif
#endif /* コード量削減 */
    /*----------------------------------------------------------------------------*/
    /* チャンネル変化ステータスレジスタ */	
    /*----------------------------------------------------------------------------*/  	
        CNSTATD	= 0x0000u;
#if 0   /*コード量削減の為、ビット毎のクリアを無効化にする*/ 
#if (CPU_PIN_NUM >= CPU_PIN64)
            CNSTATDbits.CNSTATD0	= 0u;	/* チャンネルD0入力変化割り込みステータスビット */
            CNSTATDbits.CNSTATD1	= 0u;	/* チャンネルD1入力変化割り込みステータスビット */
            CNSTATDbits.CNSTATD2	= 0u;	/* チャンネルD2入力変化割り込みステータスビット */
            CNSTATDbits.CNSTATD3	= 0u;	/* チャンネルD3入力変化割り込みステータスビット */
            CNSTATDbits.CNSTATD4	= 0u;	/* チャンネルD4入力変化割り込みステータスビット */
            CNSTATDbits.CNSTATD5	= 0u;	/* チャンネルD5入力変化割り込みステータスビット */
            CNSTATDbits.CNSTATD6	= 0u;	/* チャンネルD6入力変化割り込みステータスビット */
            CNSTATDbits.CNSTATD7	= 0u;	/* チャンネルD7入力変化割り込みステータスビット */
            CNSTATDbits.CNSTATD8	= 0u;	/* チャンネルD8入力変化割り込みステータスビット */
            CNSTATDbits.CNSTATD9	= 0u;	/* チャンネルD9入力変化割り込みステータスビット */
            CNSTATDbits.CNSTATD10	= 0u;	/* チャンネルD10入力変化割り込みステータスビット */
            CNSTATDbits.CNSTATD11	= 0u;	/* チャンネルD11入力変化割り込みステータスビット */
            CNSTATDbits.CNSTATD12	= 0u;	/* チャンネルD12入力変化割り込みステータスビット */
            CNSTATDbits.CNSTATD13	= 0u;	/* チャンネルD13入力変化割り込みステータスビット */
            CNSTATDbits.CNSTATD14	= 0u;	/* チャンネルD14入力変化割り込みステータスビット */
            CNSTATDbits.CNSTATD15	= 0u;	/* チャンネルD15入力変化割り込みステータスビット */
#else
            CNSTATDbits.CNSTATD1	= 0u;	/* チャンネルD1入力変化割り込みステータスビット */
            CNSTATDbits.CNSTATD8	= 0u;	/* チャンネルD8入力変化割り込みステータスビット */
            CNSTATDbits.CNSTATD10	= 0u;	/* チャンネルD10入力変化割り込みステータスビット */
            CNSTATDbits.CNSTATD13	= 0u;	/* チャンネルD13入力変化割り込みステータスビット */
#endif
#endif /* コード量削減 */
    /*----------------------------------------------------------------------------*/
    /* チャンネル変化割り込み有効レジスタ1 */	
    /*----------------------------------------------------------------------------*/   		
        CNEN1D	= ( PORT_USER_CNEN1_D0 << 0u) |
                  ( PORT_USER_CNEN1_D1 << 1u) |
                  ( PORT_USER_CNEN1_D2 << 2u) |
                  ( PORT_USER_CNEN1_D3 << 3u) |
                  ( PORT_USER_CNEN1_D4 << 4u) |
                  ( PORT_USER_CNEN1_D5 << 5u) |
                  ( PORT_USER_CNEN1_D6 << 6u) |
                  ( PORT_USER_CNEN1_D7 << 7u) |
                  ( PORT_USER_CNEN1_D8 << 8u) |
                  ( PORT_USER_CNEN1_D9 << 9u) |
                  ( PORT_USER_CNEN1_D10 << 10u) |
                  ( PORT_USER_CNEN1_D11 << 11u) |
                  ( PORT_USER_CNEN1_D12 << 12u) |
                  ( PORT_USER_CNEN1_D13 << 13u) |
                  ( PORT_USER_CNEN1_D14 << 14u) |
                  ( PORT_USER_CNEN1_D15 << 15u) ;
#if 0   /*コード量削減の為、ビット毎のクリアを無効化にする*/ 
#if (CPU_PIN_NUM >= CPU_PIN64)
            CNEN1Dbits.CNEN1D0	= 0u;	/* チャンネルD0入力変化割り込み有効化ビット */
            CNEN1Dbits.CNEN1D1	= 0u;	/* チャンネルD1入力変化割り込み有効化ビット */
            CNEN1Dbits.CNEN1D2	= 0u;	/* チャンネルD2入力変化割り込み有効化ビット */
            CNEN1Dbits.CNEN1D3	= 0u;	/* チャンネルD3入力変化割り込み有効化ビット */
            CNEN1Dbits.CNEN1D4	= 0u;	/* チャンネルD4入力変化割り込み有効化ビット */
            CNEN1Dbits.CNEN1D5	= 0u;	/* チャンネルD5入力変化割り込み有効化ビット */
            CNEN1Dbits.CNEN1D6	= 0u;	/* チャンネルD6入力変化割り込み有効化ビット */
            CNEN1Dbits.CNEN1D7	= 0u;	/* チャンネルD7入力変化割り込み有効化ビット */
            CNEN1Dbits.CNEN1D8	= 0u;	/* チャンネルD8入力変化割り込み有効化ビット */
            CNEN1Dbits.CNEN1D9	= 0u;	/* チャンネルD9入力変化割り込み有効化ビット */
            CNEN1Dbits.CNEN1D10	= 0u;	/* チャンネルD10入力変化割り込み有効化ビット */
            CNEN1Dbits.CNEN1D11	= 0u;	/* チャンネルD11入力変化割り込み有効化ビット */
            CNEN1Dbits.CNEN1D12	= 0u;	/* チャンネルD12入力変化割り込み有効化ビット */
            CNEN1Dbits.CNEN1D13	= 0u;	/* チャンネルD13入力変化割り込み有効化ビット */
            CNEN1Dbits.CNEN1D14	= 0u;	/* チャンネルD14入力変化割り込み有効化ビット */
            CNEN1Dbits.CNEN1D15	= 0u;	/* チャンネルD15入力変化割り込み有効化ビット */
#else
            CNEN1Dbits.CNEN1D1	= 0u;	/* チャンネルD1入力変化割り込み有効化ビット */
            CNEN1Dbits.CNEN1D8	= 0u;	/* チャンネルD8入力変化割り込み有効化ビット */
            CNEN1Dbits.CNEN1D10	= 0u;	/* チャンネルD10入力変化割り込み有効化ビット */
            CNEN1Dbits.CNEN1D13	= 0u;	/* チャンネルD13入力変化割り込み有効化ビット */
#endif
#endif /* コード量削減 */
    /*----------------------------------------------------------------------------*/
    /* チャンネル変化割り込みフラグレジスタ */	
    /*----------------------------------------------------------------------------*/ 
        CNFD	= 0x0000u;
#if 0   /*コード量削減の為、ビット毎のクリアを無効化にする*/ 	
#if (CPU_PIN_NUM >= CPU_PIN64)
            CNFDbits.CNFD0	= 0u;	/* チャンネルD0入力変化割り込みフラグビット */
            CNFDbits.CNFD1	= 0u;	/* チャンネルD1入力変化割り込みフラグビット */
            CNFDbits.CNFD2	= 0u;	/* チャンネルD2入力変化割り込みフラグビット */
            CNFDbits.CNFD3	= 0u;	/* チャンネルD3入力変化割り込みフラグビット */
            CNFDbits.CNFD4	= 0u;	/* チャンネルD4入力変化割り込みフラグビット */
            CNFDbits.CNFD5	= 0u;	/* チャンネルD5入力変化割り込みフラグビット */
            CNFDbits.CNFD6	= 0u;	/* チャンネルD6入力変化割り込みフラグビット */
            CNFDbits.CNFD7	= 0u;	/* チャンネルD7入力変化割り込みフラグビット */
            CNFDbits.CNFD8	= 0u;	/* チャンネルD8入力変化割り込みフラグビット */
            CNFDbits.CNFD9	= 0u;	/* チャンネルD9入力変化割り込みフラグビット */
            CNFDbits.CNFD10	= 0u;	/* チャンネルD10入力変化割り込みフラグビット */
            CNFDbits.CNFD11	= 0u;	/* チャンネルD11入力変化割り込みフラグビット */
            CNFDbits.CNFD12	= 0u;	/* チャンネルD12入力変化割り込みフラグビット */
            CNFDbits.CNFD13	= 0u;	/* チャンネルD13入力変化割り込みフラグビット */
            CNFDbits.CNFD14	= 0u;	/* チャンネルD14入力変化割り込みフラグビット */
            CNFDbits.CNFD15	= 0u;	/* チャンネルD15入力変化割り込みフラグビット */
#else
            CNFDbits.CNFD1	= 0u;	/* チャンネルD1入力変化割り込みフラグビット */
            CNFDbits.CNFD8	= 0u;	/* チャンネルD8入力変化割り込みフラグビット */
            CNFDbits.CNFD10	= 0u;	/* チャンネルD10入力変化割り込みフラグビット */
            CNFDbits.CNFD13	= 0u;	/* チャンネルD13入力変化割り込みフラグビット */
#endif
#endif /* コード量削減 */
#endif
}
/*----------------------------------------------------------------------------*/
/*
* @fn        vdg_Port_Set_E_Register(void) 
* @brief     ポートEレジスタを初期化します 
* @param
* @return
* @detail 
*/
/*----------------------------------------------------------------------------*/
void vdg_Port_Set_E_Register(void)
{
#if (0)
    /*----------------------------------------------------------------------------*/
    /* チャンネルアナログ入力選択レジスタ */
    /*----------------------------------------------------------------------------*/	
#if (CORE_TYPE == CORE_SLAVE)			
        ANSELE	= ( PORT_USER_ANSEL_E6 << 6u) ;	
#if 0   /*コード量削減の為、ビット毎のクリアを無効化にする*/ 
            ANSELEbits.ANSELE6	= PORT_USER_ANSEL_E6;	/* チャンネルE6アナログ選択ビット */
#endif /* コード量削減 */
#endif		
		
    /*----------------------------------------------------------------------------*/        
    /* チャンネルポート入出力方向レジスタ */		
    /*----------------------------------------------------------------------------*/	
        TRISE	= ( PORT_USER_TRIS_E0 << 0u) |
                  ( PORT_USER_TRIS_E1 << 1u) |
                  ( PORT_USER_TRIS_E2 << 2u) |
                  ( PORT_USER_TRIS_E3 << 3u) |
                  ( PORT_USER_TRIS_E4 << 4u) |
                  ( PORT_USER_TRIS_E5 << 5u) |
                  ( PORT_USER_TRIS_E6 << 6u) |
                  ( PORT_USER_TRIS_E7 << 7u) |
                  ( PORT_USER_TRIS_E8 << 8u) |
                  ( PORT_USER_TRIS_E9 << 9u) |
                  ( PORT_USER_TRIS_E10 << 10u) |
                  ( PORT_USER_TRIS_E11 << 11u) |
                  ( PORT_USER_TRIS_E12 << 12u) |
                  ( PORT_USER_TRIS_E13 << 13u) |
                  ( PORT_USER_TRIS_E14 << 14u) |
                  ( PORT_USER_TRIS_E15 << 15u) ;
#if 0   /*コード量削減の為、ビット毎のクリアを無効化にする*/ 
            TRISEbits.TRISE0	= PORT_USER_TRIS_E0;	/* チャンネルE0入出力方向ビット */
            TRISEbits.TRISE1	= PORT_USER_TRIS_E1;	/* チャンネルE1入出力方向ビット */
            TRISEbits.TRISE2	= PORT_USER_TRIS_E2;	/* チャンネルE2入出力方向ビット */
            TRISEbits.TRISE3	= PORT_USER_TRIS_E3;	/* チャンネルE3入出力方向ビット */
            TRISEbits.TRISE4	= PORT_USER_TRIS_E4;	/* チャンネルE4入出力方向ビット */
            TRISEbits.TRISE5	= PORT_USER_TRIS_E5;	/* チャンネルE5入出力方向ビット */
            TRISEbits.TRISE6	= PORT_USER_TRIS_E6;	/* チャンネルE6入出力方向ビット */
            TRISEbits.TRISE7	= PORT_USER_TRIS_E7;	/* チャンネルE7入出力方向ビット */
            TRISEbits.TRISE8	= PORT_USER_TRIS_E8;	/* チャンネルE8入出力方向ビット */
            TRISEbits.TRISE9	= PORT_USER_TRIS_E9;	/* チャンネルE9入出力方向ビット */
            TRISEbits.TRISE10	= PORT_USER_TRIS_E10;	/* チャンネルE10入出力方向ビット */
            TRISEbits.TRISE11	= PORT_USER_TRIS_E11;	/* チャンネルE11入出力方向ビット */
            TRISEbits.TRISE12	= PORT_USER_TRIS_E12;	/* チャンネルE12入出力方向ビット */
            TRISEbits.TRISE13	= PORT_USER_TRIS_E13;	/* チャンネルE13入出力方向ビット */
            TRISEbits.TRISE14	= PORT_USER_TRIS_E14;	/* チャンネルE14入出力方向ビット */
            TRISEbits.TRISE15	= PORT_USER_TRIS_E15;	/* チャンネルE15入出力方向ビット */
#endif /* コード量削減 */
    /*----------------------------------------------------------------------------*/
    /* チャンネルポートレジスタ(Read Only) */		
    /*----------------------------------------------------------------------------*/    	
        PORTE	= 0x0000u;	
#if 0   /*コード量削減の為、ビット毎のクリアを無効化にする*/ 
            PORTEbits.RE0	= 0u;	/* チャンネルE0データビット(Read Only) */
            PORTEbits.RE1	= 0u;	/* チャンネルE1データビット(Read Only) */
            PORTEbits.RE2	= 0u;	/* チャンネルE2データビット(Read Only) */
            PORTEbits.RE3	= 0u;	/* チャンネルE3データビット(Read Only) */
            PORTEbits.RE4	= 0u;	/* チャンネルE4データビット(Read Only) */
            PORTEbits.RE5	= 0u;	/* チャンネルE5データビット(Read Only) */
            PORTEbits.RE6	= 0u;	/* チャンネルE6データビット(Read Only) */
            PORTEbits.RE7	= 0u;	/* チャンネルE7データビット(Read Only) */
            PORTEbits.RE8	= 0u;	/* チャンネルE8データビット(Read Only) */
            PORTEbits.RE9	= 0u;	/* チャンネルE9データビット(Read Only) */
            PORTEbits.RE10	= 0u;	/* チャンネルE10データビット(Read Only) */
            PORTEbits.RE11	= 0u;	/* チャンネルE11データビット(Read Only) */
            PORTEbits.RE12	= 0u;	/* チャンネルE12データビット(Read Only) */
            PORTEbits.RE13	= 0u;	/* チャンネルE13データビット(Read Only) */
            PORTEbits.RE14	= 0u;	/* チャンネルE14データビット(Read Only) */
            PORTEbits.RE15	= 0u;	/* チャンネルE15データビット(Read Only) */
#endif /* コード量削減 */
    /*----------------------------------------------------------------------------*/
    /* チャンネルラッチレジスタ */	
    /*----------------------------------------------------------------------------*/ 
        LATE	= ( PORT_USER_LAT_E0 << 0u) |
                  ( PORT_USER_LAT_E1 << 1u) |
                  ( PORT_USER_LAT_E2 << 2u) |
                  ( PORT_USER_LAT_E3 << 3u) |
                  ( PORT_USER_LAT_E4 << 4u) |
                  ( PORT_USER_LAT_E5 << 5u) |
                  ( PORT_USER_LAT_E6 << 6u) |
                  ( PORT_USER_LAT_E7 << 7u) |
                  ( PORT_USER_LAT_E8 << 8u) |
                  ( PORT_USER_LAT_E9 << 9u) |
                  ( PORT_USER_LAT_E10 << 10u) |
                  ( PORT_USER_LAT_E11 << 11u) |
                  ( PORT_USER_LAT_E12 << 12u) |
                  ( PORT_USER_LAT_E13 << 13u) |
                  ( PORT_USER_LAT_E14 << 14u) |
                  ( PORT_USER_LAT_E15 << 15u) ;
#if 0   /*コード量削減の為、ビット毎のクリアを無効化にする*/ 
            LATEbits.LATE0	= PORT_USER_LAT_E0;	/* チャンネルE0ラッチビット */
            LATEbits.LATE1	= PORT_USER_LAT_E1;	/* チャンネルE1ラッチビット */
            LATEbits.LATE2	= PORT_USER_LAT_E2;	/* チャンネルE2ラッチビット */
            LATEbits.LATE3	= PORT_USER_LAT_E3;	/* チャンネルE3ラッチビット */
            LATEbits.LATE4	= PORT_USER_LAT_E4;	/* チャンネルE4ラッチビット */
            LATEbits.LATE5	= PORT_USER_LAT_E5;	/* チャンネルE5ラッチビット */
            LATEbits.LATE6	= PORT_USER_LAT_E6;	/* チャンネルE6ラッチビット */
            LATEbits.LATE7	= PORT_USER_LAT_E7;	/* チャンネルE7ラッチビット */
            LATEbits.LATE8	= PORT_USER_LAT_E8;	/* チャンネルE8ラッチビット */
            LATEbits.LATE9	= PORT_USER_LAT_E9;	/* チャンネルE9ラッチビット */
            LATEbits.LATE10	= PORT_USER_LAT_E10;	/* チャンネルE10ラッチビット */
            LATEbits.LATE11	= PORT_USER_LAT_E11;	/* チャンネルE11ラッチビット */
            LATEbits.LATE12	= PORT_USER_LAT_E12;	/* チャンネルE12ラッチビット */
            LATEbits.LATE13	= PORT_USER_LAT_E13;	/* チャンネルE13ラッチビット */
            LATEbits.LATE14	= PORT_USER_LAT_E14;	/* チャンネルE14ラッチビット */
            LATEbits.LATE15	= PORT_USER_LAT_E15;	/* チャンネルE15ラッチビット */
#endif /* コード量削減 */
    /*----------------------------------------------------------------------------*/        
    /* チャンネルオープンドレイン制御レジスタ */
    /*----------------------------------------------------------------------------*/	
        ODCE	= ( PORT_USER_ODC_E0 << 0u) |
                  ( PORT_USER_ODC_E1 << 1u) |
                  ( PORT_USER_ODC_E2 << 2u) |
                  ( PORT_USER_ODC_E3 << 3u) |
                  ( PORT_USER_ODC_E4 << 4u) |
                  ( PORT_USER_ODC_E5 << 5u) |
                  ( PORT_USER_ODC_E6 << 6u) |
                  ( PORT_USER_ODC_E7 << 7u) |
                  ( PORT_USER_ODC_E8 << 8u) |
                  ( PORT_USER_ODC_E9 << 9u) |
                  ( PORT_USER_ODC_E10 << 10u) |
                  ( PORT_USER_ODC_E11 << 11u) |
                  ( PORT_USER_ODC_E12 << 12u) |
                  ( PORT_USER_ODC_E13 << 13u) |
                  ( PORT_USER_ODC_E14 << 14u) |
                  ( PORT_USER_ODC_E15 << 15u) ;
#if 0   /*コード量削減の為、ビット毎のクリアを無効化にする*/ 
            ODCEbits.ODCE0	= 0u;	/* チャンネルE0オープンドレインビット */
            ODCEbits.ODCE1	= 0u;	/* チャンネルE1オープンドレインビット */
            ODCEbits.ODCE2	= 0u;	/* チャンネルE2オープンドレインビット */
            ODCEbits.ODCE3	= 0u;	/* チャンネルE3オープンドレインビット */
            ODCEbits.ODCE4	= 0u;	/* チャンネルE4オープンドレインビット */
            ODCEbits.ODCE5	= 0u;	/* チャンネルE5オープンドレインビット */
            ODCEbits.ODCE6	= 0u;	/* チャンネルE6オープンドレインビット */
            ODCEbits.ODCE7	= 0u;	/* チャンネルE7オープンドレインビット */
            ODCEbits.ODCE8	= 0u;	/* チャンネルE8オープンドレインビット */
            ODCEbits.ODCE9	= 0u;	/* チャンネルE9オープンドレインビット */
            ODCEbits.ODCE10	= 0u;	/* チャンネルE10オープンドレインビット */
            ODCEbits.ODCE11	= 0u;	/* チャンネルE11オープンドレインビット */
            ODCEbits.ODCE12	= 0u;	/* チャンネルE12オープンドレインビット */
            ODCEbits.ODCE13	= 0u;	/* チャンネルE13オープンドレインビット */
            ODCEbits.ODCE14	= 0u;	/* チャンネルE14オープンドレインビット */
            ODCEbits.ODCE15	= 0u;	/* チャンネルE15オープンドレインビット */
#endif /* コード量削減 */
    /*----------------------------------------------------------------------------*/        
    /* チャンネルプルアップレジスタ */
    /*----------------------------------------------------------------------------*/        		
        CNPUE	= ( PORT_USER_CNPU_E0 << 0u) |
                  ( PORT_USER_CNPU_E1 << 1u) |
                  ( PORT_USER_CNPU_E2 << 2u) |
                  ( PORT_USER_CNPU_E3 << 3u) |
                  ( PORT_USER_CNPU_E4 << 4u) |
                  ( PORT_USER_CNPU_E5 << 5u) |
                  ( PORT_USER_CNPU_E6 << 6u) |
                  ( PORT_USER_CNPU_E7 << 7u) |
                  ( PORT_USER_CNPU_E8 << 8u) |
                  ( PORT_USER_CNPU_E9 << 9u) |
                  ( PORT_USER_CNPU_E10 << 10u) |
                  ( PORT_USER_CNPU_E11 << 11u) |
                  ( PORT_USER_CNPU_E12 << 12u) |
                  ( PORT_USER_CNPU_E13 << 13u) |
                  ( PORT_USER_CNPU_E14 << 14u) |
                  ( PORT_USER_CNPU_E15 << 15u) ;
#if 0   /*コード量削減の為、ビット毎のクリアを無効化にする*/ 
            CNPUEbits.CNPUE0	= 0u;	/* チャンネルE0プルアップ有効ビット */
            CNPUEbits.CNPUE1	= 0u;	/* チャンネルE1プルアップ有効ビット */
            CNPUEbits.CNPUE2	= 0u;	/* チャンネルE2プルアップ有効ビット */
            CNPUEbits.CNPUE3	= 0u;	/* チャンネルE3プルアップ有効ビット */
            CNPUEbits.CNPUE4	= 0u;	/* チャンネルE4プルアップ有効ビット */
            CNPUEbits.CNPUE5	= 0u;	/* チャンネルE5プルアップ有効ビット */
            CNPUEbits.CNPUE6	= 0u;	/* チャンネルE6プルアップ有効ビット */
            CNPUEbits.CNPUE7	= 0u;	/* チャンネルE7プルアップ有効ビット */
            CNPUEbits.CNPUE8	= 0u;	/* チャンネルE8プルアップ有効ビット */
            CNPUEbits.CNPUE9	= 0u;	/* チャンネルE9プルアップ有効ビット */
            CNPUEbits.CNPUE10	= 0u;	/* チャンネルE10プルアップ有効ビット */
            CNPUEbits.CNPUE11	= 0u;	/* チャンネルE11プルアップ有効ビット */
            CNPUEbits.CNPUE12	= 0u;	/* チャンネルE12プルアップ有効ビット */
            CNPUEbits.CNPUE13	= 0u;	/* チャンネルE13プルアップ有効ビット */
            CNPUEbits.CNPUE14	= 0u;	/* チャンネルE14プルアップ有効ビット */
            CNPUEbits.CNPUE15	= 0u;	/* チャンネルE15プルアップ有効ビット */
#endif /* コード量削減 */
    /*----------------------------------------------------------------------------*/
    /* チャンネルプルダウンレジスタ */
    /*----------------------------------------------------------------------------*/    		
        CNPDE	= ( PORT_USER_CNPD_E0 << 0u) |
                  ( PORT_USER_CNPD_E1 << 1u) |
                  ( PORT_USER_CNPD_E2 << 2u) |
                  ( PORT_USER_CNPD_E3 << 3u) |
                  ( PORT_USER_CNPD_E4 << 4u) |
                  ( PORT_USER_CNPD_E5 << 5u) |
                  ( PORT_USER_CNPD_E6 << 6u) |
                  ( PORT_USER_CNPD_E7 << 7u) |
                  ( PORT_USER_CNPD_E8 << 8u) |
                  ( PORT_USER_CNPD_E9 << 9u) |
                  ( PORT_USER_CNPD_E10 << 10u) |
                  ( PORT_USER_CNPD_E11 << 11u) |
                  ( PORT_USER_CNPD_E12 << 12u) |
                  ( PORT_USER_CNPD_E13 << 13u) |
                  ( PORT_USER_CNPD_E14 << 14u) |
                  ( PORT_USER_CNPD_E15 << 15u) ;
#if 0   /*コード量削減の為、ビット毎のクリアを無効化にする*/ 	
            CNPDEbits.CNPDE0	= 0u;	/* チャンネルE0プルダウン有効ビット */
            CNPDEbits.CNPDE1	= 0u;	/* チャンネルE1プルダウン有効ビット */
            CNPDEbits.CNPDE2	= 0u;	/* チャンネルE2プルダウン有効ビット */
            CNPDEbits.CNPDE3	= 0u;	/* チャンネルE3プルダウン有効ビット */
            CNPDEbits.CNPDE4	= 0u;	/* チャンネルE4プルダウン有効ビット */
            CNPDEbits.CNPDE5	= 0u;	/* チャンネルE5プルダウン有効ビット */
            CNPDEbits.CNPDE6	= 0u;	/* チャンネルE6プルダウン有効ビット */
            CNPDEbits.CNPDE7	= 0u;	/* チャンネルE7プルダウン有効ビット */
            CNPDEbits.CNPDE8	= 0u;	/* チャンネルE8プルダウン有効ビット */
            CNPDEbits.CNPDE9	= 0u;	/* チャンネルE9プルダウン有効ビット */
            CNPDEbits.CNPDE10	= 0u;	/* チャンネルE10プルダウン有効ビット */
            CNPDEbits.CNPDE11	= 0u;	/* チャンネルE11プルダウン有効ビット */
            CNPDEbits.CNPDE12	= 0u;	/* チャンネルE12プルダウン有効ビット */
            CNPDEbits.CNPDE13	= 0u;	/* チャンネルE13プルダウン有効ビット */
            CNPDEbits.CNPDE14	= 0u;	/* チャンネルE14プルダウン有効ビット */
            CNPDEbits.CNPDE15	= 0u;	/* チャンネルE15プルダウン有効ビット */
#endif /* コード量削減 */
    /*----------------------------------------------------------------------------*/        
    /* チャンネル変化割り込み制御レジスタ */
    /*----------------------------------------------------------------------------*/ 	
        CNCONE	= ( PORT_USER_CNCONE_ON << 15u ) | ( PORT_USER_CNCONE_STYLE << 11u);	
#if 0   /*コード量削減の為、ビット毎のクリアを無効化にする*/ 
            CNCONEbits.CNSTYLE	= 0u;	/* 状態変化通知モード */
            CNCONEbits.ON	= 0u;       /* 状態変化通知 (CN) 制御 ON ビット */
#endif /* コード量削減 */
    /*----------------------------------------------------------------------------*/
    /* チャンネル変化割り込み有効レジスタ0 */	
    /*----------------------------------------------------------------------------*/   	
        CNEN0E	= ( PORT_USER_CNEN0_E0 << 0u) |
                  ( PORT_USER_CNEN0_E1 << 1u) |
                  ( PORT_USER_CNEN0_E2 << 2u) |
                  ( PORT_USER_CNEN0_E3 << 3u) |
                  ( PORT_USER_CNEN0_E4 << 4u) |
                  ( PORT_USER_CNEN0_E5 << 5u) |
                  ( PORT_USER_CNEN0_E6 << 6u) |
                  ( PORT_USER_CNEN0_E7 << 7u) |
                  ( PORT_USER_CNEN0_E8 << 8u) |
                  ( PORT_USER_CNEN0_E9 << 9u) |
                  ( PORT_USER_CNEN0_E10 << 10u) |
                  ( PORT_USER_CNEN0_E11 << 11u) |
                  ( PORT_USER_CNEN0_E12 << 12u) |
                  ( PORT_USER_CNEN0_E13 << 13u) |
                  ( PORT_USER_CNEN0_E14 << 14u) |
                  ( PORT_USER_CNEN0_E15 << 15u) ;
#if 0   /*コード量削減の為、ビット毎のクリアを無効化にする*/ 
            CNEN0Ebits.CNEN0E0	= 0u;	/* チャンネルE0入力変化割り込み有効化ビット */
            CNEN0Ebits.CNEN0E1	= 0u;	/* チャンネルE1入力変化割り込み有効化ビット */
            CNEN0Ebits.CNEN0E2	= 0u;	/* チャンネルE2入力変化割り込み有効化ビット */
            CNEN0Ebits.CNEN0E3	= 0u;	/* チャンネルE3入力変化割り込み有効化ビット */
            CNEN0Ebits.CNEN0E4	= 0u;	/* チャンネルE4入力変化割り込み有効化ビット */
            CNEN0Ebits.CNEN0E5	= 0u;	/* チャンネルE5入力変化割り込み有効化ビット */
            CNEN0Ebits.CNEN0E6	= 0u;	/* チャンネルE6入力変化割り込み有効化ビット */
            CNEN0Ebits.CNEN0E7	= 0u;	/* チャンネルE7入力変化割り込み有効化ビット */
            CNEN0Ebits.CNEN0E8	= 0u;	/* チャンネルE8入力変化割り込み有効化ビット */
            CNEN0Ebits.CNEN0E9	= 0u;	/* チャンネルE9入力変化割り込み有効化ビット */
            CNEN0Ebits.CNEN0E10	= 0u;	/* チャンネルE10入力変化割り込み有効化ビット */
            CNEN0Ebits.CNEN0E11	= 0u;	/* チャンネルE11入力変化割り込み有効化ビット */
            CNEN0Ebits.CNEN0E12	= 0u;	/* チャンネルE12入力変化割り込み有効化ビット */
            CNEN0Ebits.CNEN0E13	= 0u;	/* チャンネルE13入力変化割り込み有効化ビット */
            CNEN0Ebits.CNEN0E14	= 0u;	/* チャンネルE14入力変化割り込み有効化ビット */
            CNEN0Ebits.CNEN0E15	= 0u;	/* チャンネルE15入力変化割り込み有効化ビット */
#endif /* コード量削減 */
    /*----------------------------------------------------------------------------*/
    /* チャンネル変化ステータスレジスタ */	
    /*----------------------------------------------------------------------------*/  	
        CNSTATE	= 0x0000u;	
#if 0   /*コード量削減の為、ビット毎のクリアを無効化にする*/ 
            CNSTATEbits.CNSTATE0	= 0u;	/* チャンネルE0入力変化割り込みステータスビット */
            CNSTATEbits.CNSTATE1	= 0u;	/* チャンネルE1入力変化割り込みステータスビット */
            CNSTATEbits.CNSTATE2	= 0u;	/* チャンネルE2入力変化割り込みステータスビット */
            CNSTATEbits.CNSTATE3	= 0u;	/* チャンネルE3入力変化割り込みステータスビット */
            CNSTATEbits.CNSTATE4	= 0u;	/* チャンネルE4入力変化割り込みステータスビット */
            CNSTATEbits.CNSTATE5	= 0u;	/* チャンネルE5入力変化割り込みステータスビット */
            CNSTATEbits.CNSTATE6	= 0u;	/* チャンネルE6入力変化割り込みステータスビット */
            CNSTATEbits.CNSTATE7	= 0u;	/* チャンネルE7入力変化割り込みステータスビット */
            CNSTATEbits.CNSTATE8	= 0u;	/* チャンネルE8入力変化割り込みステータスビット */
            CNSTATEbits.CNSTATE9	= 0u;	/* チャンネルE9入力変化割り込みステータスビット */
            CNSTATEbits.CNSTATE10	= 0u;	/* チャンネルE10入力変化割り込みステータスビット */
            CNSTATEbits.CNSTATE11	= 0u;	/* チャンネルE11入力変化割り込みステータスビット */
            CNSTATEbits.CNSTATE12	= 0u;	/* チャンネルE12入力変化割り込みステータスビット */
            CNSTATEbits.CNSTATE13	= 0u;	/* チャンネルE13入力変化割り込みステータスビット */
            CNSTATEbits.CNSTATE14	= 0u;	/* チャンネルE14入力変化割り込みステータスビット */
            CNSTATEbits.CNSTATE15	= 0u;	/* チャンネルE15入力変化割り込みステータスビット */
#endif /* コード量削減 */
    /*----------------------------------------------------------------------------*/
    /* チャンネル変化割り込み有効レジスタ1 */	
    /*----------------------------------------------------------------------------*/   	
        CNEN1E	= ( PORT_USER_CNEN1_E0 << 0u) |
                  ( PORT_USER_CNEN1_E1 << 1u) |
                  ( PORT_USER_CNEN1_E2 << 2u) |
                  ( PORT_USER_CNEN1_E3 << 3u) |
                  ( PORT_USER_CNEN1_E4 << 4u) |
                  ( PORT_USER_CNEN1_E5 << 5u) |
                  ( PORT_USER_CNEN1_E6 << 6u) |
                  ( PORT_USER_CNEN1_E7 << 7u) |
                  ( PORT_USER_CNEN1_E8 << 8u) |
                  ( PORT_USER_CNEN1_E9 << 9u) |
                  ( PORT_USER_CNEN1_E10 << 10u) |
                  ( PORT_USER_CNEN1_E11 << 11u) |
                  ( PORT_USER_CNEN1_E12 << 12u) |
                  ( PORT_USER_CNEN1_E13 << 13u) |
                  ( PORT_USER_CNEN1_E14 << 14u) |
                  ( PORT_USER_CNEN1_E15 << 15u) ;
#if 0   /*コード量削減の為、ビット毎のクリアを無効化にする*/ 
            CNEN1Ebits.CNEN1E0	= 0u;	/* チャンネルE0入力変化割り込み有効化ビット */
            CNEN1Ebits.CNEN1E1	= 0u;	/* チャンネルE1入力変化割り込み有効化ビット */
            CNEN1Ebits.CNEN1E2	= 0u;	/* チャンネルE2入力変化割り込み有効化ビット */
            CNEN1Ebits.CNEN1E3	= 0u;	/* チャンネルE3入力変化割り込み有効化ビット */
            CNEN1Ebits.CNEN1E4	= 0u;	/* チャンネルE4入力変化割り込み有効化ビット */
            CNEN1Ebits.CNEN1E5	= 0u;	/* チャンネルE5入力変化割り込み有効化ビット */
            CNEN1Ebits.CNEN1E6	= 0u;	/* チャンネルE6入力変化割り込み有効化ビット */
            CNEN1Ebits.CNEN1E7	= 0u;	/* チャンネルE7入力変化割り込み有効化ビット */
            CNEN1Ebits.CNEN1E8	= 0u;	/* チャンネルE8入力変化割り込み有効化ビット */
            CNEN1Ebits.CNEN1E9	= 0u;	/* チャンネルE9入力変化割り込み有効化ビット */
            CNEN1Ebits.CNEN1E10	= 0u;	/* チャンネルE10入力変化割り込み有効化ビット */
            CNEN1Ebits.CNEN1E11	= 0u;	/* チャンネルE11入力変化割り込み有効化ビット */
            CNEN1Ebits.CNEN1E12	= 0u;	/* チャンネルE12入力変化割り込み有効化ビット */
            CNEN1Ebits.CNEN1E13	= 0u;	/* チャンネルE13入力変化割り込み有効化ビット */
            CNEN1Ebits.CNEN1E14	= 0u;	/* チャンネルE14入力変化割り込み有効化ビット */
            CNEN1Ebits.CNEN1E15	= 0u;	/* チャンネルE15入力変化割り込み有効化ビット */
#endif /* コード量削減 */
    /*----------------------------------------------------------------------------*/
    /* チャンネル変化割り込みフラグレジスタ */	
    /*----------------------------------------------------------------------------*/ 		
        CNFE	= 0x0000u;	
#if 0   /*コード量削減の為、ビット毎のクリアを無効化にする*/ 
            CNFEbits.CNFE0	= 0u;	/* チャンネルE0入力変化割り込みフラグビット */
            CNFEbits.CNFE1	= 0u;	/* チャンネルE1入力変化割り込みフラグビット */
            CNFEbits.CNFE2	= 0u;	/* チャンネルE2入力変化割り込みフラグビット */
            CNFEbits.CNFE3	= 0u;	/* チャンネルE3入力変化割り込みフラグビット */
            CNFEbits.CNFE4	= 0u;	/* チャンネルE4入力変化割り込みフラグビット */
            CNFEbits.CNFE5	= 0u;	/* チャンネルE5入力変化割り込みフラグビット */
            CNFEbits.CNFE6	= 0u;	/* チャンネルE6入力変化割り込みフラグビット */
            CNFEbits.CNFE7	= 0u;	/* チャンネルE7入力変化割り込みフラグビット */
            CNFEbits.CNFE8	= 0u;	/* チャンネルE8入力変化割り込みフラグビット */
            CNFEbits.CNFE9	= 0u;	/* チャンネルE9入力変化割り込みフラグビット */
            CNFEbits.CNFE10	= 0u;	/* チャンネルE10入力変化割り込みフラグビット */
            CNFEbits.CNFE11	= 0u;	/* チャンネルE11入力変化割り込みフラグビット */
            CNFEbits.CNFE12	= 0u;	/* チャンネルE12入力変化割り込みフラグビット */
            CNFEbits.CNFE13	= 0u;	/* チャンネルE13入力変化割り込みフラグビット */
            CNFEbits.CNFE14	= 0u;	/* チャンネルE14入力変化割り込みフラグビット */
            CNFEbits.CNFE15	= 0u;	/* チャンネルE15入力変化割り込みフラグビット */
#endif /* コード量削減 */
#endif
}
/*----------------------------------------------------------------------------*/
/*
* @fn        void vdg_Port_Set_All_Register(void)
* @brief        全てのポートレジスタを初期化します
* @param
* @return
* @detail 
*/
/*----------------------------------------------------------------------------*/
void vdg_Port_Set_All_Register(void)
{
    vdg_Port_Set_A_Register();
    vdg_Port_Set_B_Register();
    vdg_Port_Set_C_Register();
    vdg_Port_Set_D_Register();
    vdg_Port_Set_E_Register();
}
