/*----------------------------------------------------------------------------*/
/*【FILE】PGAに関するドライバ関数*/
/*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*/
/*インクルードファイル*/
/*----------------------------------------------------------------------------*/
#include <xc.h>
#include "BoardSupportPackage.h"
#include "init_fix.h"
#include "typedef.h"
#include "pga_driver.h"
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
* @fn           vdg_PGA1_Set_Register(void)
* @brief           PGA1レジスタを初期化します 
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void vdg_PGA1_Set_Register(void)
{
#if ( PMD_PGA1MD == PMD_MODULE_ENABLE )	
    /*----------------------------------------------------------------------------*/	
    /*PGAx制御レジスタ*/		
    /*----------------------------------------------------------------------------*/
        PGA1CON	= 0x0000u;	
#if 0   /*コード量削減の為、ビット毎のクリアを無効化にする*/
            PGA1CONbits.GAIN	= 0u;	/* PGAx ゲイン選択ビット */
            PGA1CONbits.HIGAIN	= 0u;	/* PGAx Hiゲイン選択ビット */
            PGA1CONbits.SELNI	= 0u;	/* PGAx 反転入力選択ビット */
            PGA1CONbits.SELPI	= 0u;	/* PGAx 非反転入力選択ビット */
            PGA1CONbits.PGAOEN	= 0u;	/* PGAx 出力イネーブルビット */
            PGA1CONbits.PGAEN	= 0u;	/* PGAx イネーブルビット */
#endif /* コード量削減 */
	/*----------------------------------------------------------------------------*/
    /*PGAxキャリブレーションレジスタ*/		
    /*----------------------------------------------------------------------------*/
        PGA1CAL	= 0x0000u;	
#if 0   /*コード量削減の為、ビット毎のクリアを無効化にする*/
            PGA1CALbits.PGATRIM	= 0u;	/* PGA調整ビット */
#endif /* コード量削減 */
#endif
}
/*----------------------------------------------------------------------------*/
/*
* @fn           vdg_PGA2_Set_Register(void)
* @brief           PGA2レジスタを初期化します 
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void vdg_PGA2_Set_Register(void)
{
#if ( PMD_PGA2MD == PMD_MODULE_ENABLE )		
    /*----------------------------------------------------------------------------*/    
    /*PGAx制御レジスタ*/
    /*----------------------------------------------------------------------------*/    
        PGA2CON	= 0x0000u;	
#if 0   /*コード量削減の為、ビット毎のクリアを無効化にする*/
        PGA2CONbits.GAIN	= 0u;	/* PGAx ゲイン選択ビット */
        PGA2CONbits.HIGAIN	= 0u;	/* PGAx Hiゲイン選択ビット */
        PGA2CONbits.SELNI	= 0u;	/* PGAx 反転入力選択ビット */
        PGA2CONbits.SELPI	= 0u;	/* PGAx 非反転入力選択ビット */
        PGA2CONbits.PGAOEN	= 0u;	/* PGAx 出力イネーブルビット */
        PGA2CONbits.PGAEN	= 0u;	/* PGAx イネーブルビット */
#endif /* コード量削減 */
    /*----------------------------------------------------------------------------*/  
    /*PGAxキャリブレーションレジスタ*/	
    /*----------------------------------------------------------------------------*/  
        PGA2CAL	= 0x0000u;	
#if 0   /*コード量削減の為、ビット毎のクリアを無効化にする*/
            PGA2CALbits.PGATRIM	= 0u;	/* PGA調整ビット */
#endif /* コード量削減 */
#endif
}
/*----------------------------------------------------------------------------*/
/*
* @fn           vdg_PGA3_Set_Register(void)
* @brief           PGA3レジスタを初期化します
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void vdg_PGA3_Set_Register(void)
{
#if ( PMD_PGA3MD == PMD_MODULE_ENABLE )	
    /*----------------------------------------------------------------------------*/
    /*PGAx制御レジスタ*/		
    /*----------------------------------------------------------------------------*/
        PGA3CON	= 0x0000u;	
#if 0   /*コード量削減の為、ビット毎のクリアを無効化にする*/
        PGA3CONbits.GAIN	= 0u;	/* PGAx ゲイン選択ビット */
        PGA3CONbits.HIGAIN	= 0u;	/* PGAx Hiゲイン選択ビット */
        PGA3CONbits.SELNI	= 0u;	/* PGAx 反転入力選択ビット */
        PGA3CONbits.SELPI	= 0u;	/* PGAx 非反転入力選択ビット */
        PGA3CONbits.PGAOEN	= 0u;	/* PGAx 出力イネーブルビット */
        PGA3CONbits.PGAEN	= 0u;	/* PGAx イネーブルビット */
#endif /* コード量削減 */
    /*----------------------------------------------------------------------------*/  
    /*PGAxキャリブレーションレジスタ*/
    /*----------------------------------------------------------------------------*/  
        PGA3CAL	= 0x0000u;	
#if 0   /*コード量削減の為、ビット毎のクリアを無効化にする*/
        PGA3CALbits.PGATRIM	= 0u;	/* PGA調整ビット */
#endif /* コード量削減 */
#endif
}
/*----------------------------------------------------------------------------*/
/*
* @fn           vdg_PGA_Set_Register(void)
* @brief           全てのPGAレジスタを初期化します 
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void vdg_PGA_Set_Register(void)
{
#if ( PMD_PGA1MD == PMD_MODULE_ENABLE )	
    vdg_PGA1_Set_Register();
#endif
#if ( PMD_PGA2MD == PMD_MODULE_ENABLE )	
    vdg_PGA2_Set_Register();
#endif
#if ( PMD_PGA3MD == PMD_MODULE_ENABLE )	
    vdg_PGA3_Set_Register();
#endif
}
