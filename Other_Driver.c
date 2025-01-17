/*----------------------------------------------------------------------------*/
/*【FILE】その他のレジスタに関するドライバ関数*/
/*----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------*/
/*インクルードファイル*/
/*----------------------------------------------------------------------------*/
#include <xc.h>
#include "BoardSupportPackage.h"
#include "init_fix.h"
#include "typedef.h"
#include "other_driver.h"
/*----------------------------------------------------------------------------*/
/*定数定義*/
/*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*/
/*変数定義*/
/*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*/
/*プロトタイプ宣言*/
/*----------------------------------------------------------------------------*/
void vdg_Other_Set_Register(void)
{
#if 0
    /*----------------------------------------------------------------------------*/
    /*レジスタ説明*/		
    /*----------------------------------------------------------------------------*/
        PCTRAPL	= 0x0000u;	
    /*----------------------------------------------------------------------------*/
    /*レジスタ説明*/		
    /*----------------------------------------------------------------------------*/	
        PCTRAPH	= 0x0000u;	
            PCTRAPHbits.PCTRAPH	= 0u;	/* ビット説明 */

#if (CORE_TYPE == CORE_MASTER)		
    /*----------------------------------------------------------------------------*/
    /*レジスタ説明*/		
    /*----------------------------------------------------------------------------*/	
        PCTRAPL	= 0x0000u;	
    /*----------------------------------------------------------------------------*/
    /*レジスタ説明*/		
    /*----------------------------------------------------------------------------*/	
        PCTRAPH	= 0x0000u;	
        PCTRAPHbits.PCTRAPH	= 0u;	/* ビット説明 */
    /*----------------------------------------------------------------------------*/
    /*レジスタ説明*/		
    /*----------------------------------------------------------------------------*/			
        FEXL	= 0x0000u;	
    /*----------------------------------------------------------------------------*/
    /*レジスタ説明*/		
    /*----------------------------------------------------------------------------*/		
        FEXH	= 0x0000u;	
            FEXHbits.FEXL	= 0u;	/* ビット説明 */
    /*----------------------------------------------------------------------------*/
    /*レジスタ説明*/		
    /*----------------------------------------------------------------------------*/			
        FEX2L	= 0x0000u;	
    /*----------------------------------------------------------------------------*/
    /*レジスタ説明*/		
    /*----------------------------------------------------------------------------*/		
        FEX2H	= 0x0000u;	
            FEX2Hbits.FEX2H	= 0u;	/* ビット説明 */
    /*----------------------------------------------------------------------------*/
    /*レジスタ説明*/		
    /*----------------------------------------------------------------------------*/		
        VISI	= 0x0000u;	
    /*----------------------------------------------------------------------------*/
    /*レジスタ説明*/		
    /*----------------------------------------------------------------------------*/			
        DPCL	= 0x0000u;	
    /*----------------------------------------------------------------------------*/
    /*レジスタ説明*/		
    /*----------------------------------------------------------------------------*/		
        DPCH	= 0x0000u;	
#if 0   /*コード量削減の為、ビット毎のクリアを無効化にする*/
            DPCHbits.DPCH	= 0u;	/* ビット説明 */
#endif
    /*----------------------------------------------------------------------------*/
    /*レジスタ説明*/		
    /*----------------------------------------------------------------------------*/			
        APPO	= 0x0000u;	
    /*----------------------------------------------------------------------------*/
    /*レジスタ説明*/		
    /*----------------------------------------------------------------------------*/		
        APPI	= 0x0000u;	
    /*----------------------------------------------------------------------------*/
    /*レジスタ説明*/		
    /*----------------------------------------------------------------------------*/		
        APPS	= 0x0000u;	
#if 0   /*コード量削減の為、ビット毎のクリアを無効化にする*/
            APPSbits.APIFUL	= 0u;	/* ビット説明 */
            APPSbits.APIOV	= 0u;	/* ビット説明 */
            APPSbits.APOFUL	= 0u;	/* ビット説明 */
            APPSbits.APOOV	= 0u;	/* ビット説明 */
            APPSbits.STRFUL	= 0u;	/* ビット説明 */
#endif /* コード量削減 */
    /*----------------------------------------------------------------------------*/
    /*レジスタ説明*/		
    /*----------------------------------------------------------------------------*/			
        STROUTL	= 0x0000u;	
    /*----------------------------------------------------------------------------*/
    /*レジスタ説明*/		
    /*----------------------------------------------------------------------------*/			
        STROUTH	= 0x0000u;	
    /*----------------------------------------------------------------------------*/
    /*レジスタ説明*/		
    /*----------------------------------------------------------------------------*/			
        STROVCNT = 0x0000u;	
#endif		
#endif
}