
#ifndef DMA_USER_H
#define	DMA_USER_H

/*----------------------------------------------------------------------------*/
/*インクルードファイル*/
/*----------------------------------------------------------------------------*/
#include "dma_driver.h"
/*----------------------------------------------------------------------------*/
/*定数定義*/
/*----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------*/
/* DMACON*/
/*----------------------------------------------------------------------------*/
#define DMA_USER_DMACON_ON			( DMA_DMACON_POWER_OFF)
#define DMA_USER_DMACON_SIDL		( DMA_DMACON_SIDL_CONTINUES )
#define DMA_USER_DMACON_PRIORITY	( DMA_DMACON_PRIORITY_FIXED )
/*----------------------------------------------------------------------------*/
/* DMALLOW/HIGH */
/*----------------------------------------------------------------------------*/
#define DMA_USER_DMALLOW			( 0x4000 )
#define DMA_USER_DMALHIGH			( 0x7FFF )

/*----------------------------------------------------------------------------*/
/* DMA0CH*/
/*----------------------------------------------------------------------------*/
#define DMA_USER_DMA0CH_CHEN		( DMA_DMAXCH_CHEN_ENABLE)
#define DMA_USER_DMA0CH_HALFEN		( DMA_DMAXCH_HALFEN_DISABLE )
#define DMA_USER_DMA0CH_MATEN		( DMA_DMAXCH_MATEN_DISABLE)
#define DMA_USER_DMA0CH_INTOEN		( DMA_DMAXCH_INTOEN_DISABLE )
#define DMA_USER_DMA0CH_CHREQ		( DMA_DMAXCH_CHREQ_OFF)
#define DMA_USER_DMA0CH_SIZE		( DMA_DMAXCH_SIZE_32BIT )
#define DMA_USER_DMA0CH_FLWCON		( DMA_DMAXCH_FLWCON_DEFAULT)
#define DMA_USER_DMA0CH_TRMODE		( DMA_DMAXCH_TRMODE_UNCHANGE )
#define DMA_USER_DMA0CH_DAMODE		( DMA_DMAXCH_DAMODE_UNCHANGE )
#define DMA_USER_DMA0CH_SAMODE		( DMA_DMAXCH_SAMODE_UNCHANGE)
#define DMA_USER_DMA0CH_RETEN		( DMA_DMAXCH_RETEN_DISABLE )
#define DMA_USER_DMA0CH_RELOADS		( DMA_DMAXCH_RELOADS_DISABLE )
#define DMA_USER_DMA0CH_RELOADD		( DMA_DMAXCH_RELOADD_DISABLE)
#define DMA_USER_DMA0CH_RELOADC		( DMA_DMAXCH_RELOADC_DISABLE )
#define DMA_USER_DMA0CH_PCHAEN		( DMA_DMAXCH_PCHAEN_DISABLE)
#define DMA_USER_DMA0CH_PPEN		( DMA_DMAXCH_PPEN_DISABLE)

/*----------------------------------------------------------------------------*/
/* DMA0SEL*/
/*----------------------------------------------------------------------------*/
#define DMA_USER_DMA0SEL			( DMA_DMAXSEL_TRIG_INT0 )

/*----------------------------------------------------------------------------*/
/* DMA0SRC*/
/*----------------------------------------------------------------------------*/
#define DMA_USER_DMA0SRC			( 0x000000U )

/*----------------------------------------------------------------------------*/
/* DMA0DST*/
/*----------------------------------------------------------------------------*/
#define DMA_USER_DMA0DST			( 0x000000U )

/*----------------------------------------------------------------------------*/
/* DMA0CNT*/
/*----------------------------------------------------------------------------*/
#define DMA_USER_DMA0CNT			( 0x000000U )

/*----------------------------------------------------------------------------*/
/* DMA0CLR*/
/*----------------------------------------------------------------------------*/
#define DMA_USER_DMA0CLR			( 0x000000U )

/*----------------------------------------------------------------------------*/
/* DMA0SET*/
/*----------------------------------------------------------------------------*/
#define DMA_USER_DMA0SET			( 0x000000U )

/*----------------------------------------------------------------------------*/
/* DMA0INV*/
/*----------------------------------------------------------------------------*/
#define DMA_USER_DMA0INV			( 0x000000U )

/*----------------------------------------------------------------------------*/
/* DMA0IMSK*/
/*----------------------------------------------------------------------------*/
#define DMA_USER_DMA0MSK			( 0x000000U )

/*----------------------------------------------------------------------------*/
/* DMA0IPAT*/
/*----------------------------------------------------------------------------*/
#define DMA_USER_DMA0PAT			( 0x000000U )

/*----------------------------------------------------------------------------*/
/* DMA1CH*/
/*----------------------------------------------------------------------------*/
#define DMA_USER_DMA1CH_CHEN		( DMA_DMAXCH_CHEN_ENABLE)
#define DMA_USER_DMA1CH_HALFEN		( DMA_DMAXCH_HALFEN_DISABLE )
#define DMA_USER_DMA1CH_MATEN		( DMA_DMAXCH_MATEN_DISABLE)
#define DMA_USER_DMA1CH_INTOEN		( DMA_DMAXCH_INTOEN_DISABLE )
#define DMA_USER_DMA1CH_CHREQ		( DMA_DMAXCH_CHREQ_OFF)
#define DMA_USER_DMA1CH_SIZE		( DMA_DMAXCH_SIZE_32BIT )
#define DMA_USER_DMA1CH_FLWCON		( DMA_DMAXCH_FLWCON_DEFAULT)
#define DMA_USER_DMA1CH_TRMODE		( DMA_DMAXCH_TRMODE_UNCHANGE )
#define DMA_USER_DMA1CH_DAMODE		( DMA_DMAXCH_DAMODE_UNCHANGE )
#define DMA_USER_DMA1CH_SAMODE		( DMA_DMAXCH_SAMODE_UNCHANGE)
#define DMA_USER_DMA1CH_RETEN		( DMA_DMAXCH_RETEN_DISABLE )
#define DMA_USER_DMA1CH_RELOADS		( DMA_DMAXCH_RELOADS_DISABLE )
#define DMA_USER_DMA1CH_RELOADD		( DMA_DMAXCH_RELOADD_DISABLE)
#define DMA_USER_DMA1CH_RELOADC		( DMA_DMAXCH_RELOADC_DISABLE )
#define DMA_USER_DMA1CH_PCHAEN		( DMA_DMAXCH_PCHAEN_DISABLE)
#define DMA_USER_DMA1CH_PPEN		( DMA_DMAXCH_PPEN_DISABLE)

/*----------------------------------------------------------------------------*/
/* DMA1SEL*/
/*----------------------------------------------------------------------------*/
#define DMA_USER_DMA1SEL			( DMA_DMAXSEL_TRIG_INT0 )

/*----------------------------------------------------------------------------*/
/* DMA1SRC*/
/*----------------------------------------------------------------------------*/
#define DMA_USER_DMA1SRC			( 0x000000U )

/*----------------------------------------------------------------------------*/
/* DMA1DST*/
/*----------------------------------------------------------------------------*/
#define DMA_USER_DMA1DST			( 0x000000U )

/*----------------------------------------------------------------------------*/
/* DMA1CNT*/
/*----------------------------------------------------------------------------*/
#define DMA_USER_DMA1CNT			( 0x000000U )

/*----------------------------------------------------------------------------*/
/* DMA1CLR*/
/*----------------------------------------------------------------------------*/
#define DMA_USER_DMA1CLR			( 0x000000U )

/*----------------------------------------------------------------------------*/
/* DMA1SET*/
/*----------------------------------------------------------------------------*/
#define DMA_USER_DMA1SET			( 0x000000U )

/*----------------------------------------------------------------------------*/
/* DMA1INV*/
/*----------------------------------------------------------------------------*/
#define DMA_USER_DMA1INV			( 0x000000U )

/*----------------------------------------------------------------------------*/
/* DMA1IMSK*/
/*----------------------------------------------------------------------------*/
#define DMA_USER_DMA1MSK			( 0x000000U )

/*----------------------------------------------------------------------------*/
/* DMA1IPAT*/
/*----------------------------------------------------------------------------*/
#define DMA_USER_DMA1PAT			( 0x000000U )

/*----------------------------------------------------------------------------*/
/* DMA2CH*/
/*----------------------------------------------------------------------------*/
#define DMA_USER_DMA2CH_CHEN		( DMA_DMAXCH_CHEN_ENABLE)
#define DMA_USER_DMA2CH_HALFEN		( DMA_DMAXCH_HALFEN_DISABLE )
#define DMA_USER_DMA2CH_MATEN		( DMA_DMAXCH_MATEN_DISABLE)
#define DMA_USER_DMA2CH_INTOEN		( DMA_DMAXCH_INTOEN_DISABLE )
#define DMA_USER_DMA2CH_CHREQ		( DMA_DMAXCH_CHREQ_OFF)
#define DMA_USER_DMA2CH_SIZE		( DMA_DMAXCH_SIZE_32BIT )
#define DMA_USER_DMA2CH_FLWCON		( DMA_DMAXCH_FLWCON_DEFAULT)
#define DMA_USER_DMA2CH_TRMODE		( DMA_DMAXCH_TRMODE_UNCHANGE )
#define DMA_USER_DMA2CH_DAMODE		( DMA_DMAXCH_DAMODE_UNCHANGE )
#define DMA_USER_DMA2CH_SAMODE		( DMA_DMAXCH_SAMODE_UNCHANGE)
#define DMA_USER_DMA2CH_RETEN		( DMA_DMAXCH_RETEN_DISABLE )
#define DMA_USER_DMA2CH_RELOADS		( DMA_DMAXCH_RELOADS_DISABLE )
#define DMA_USER_DMA2CH_RELOADD		( DMA_DMAXCH_RELOADD_DISABLE)
#define DMA_USER_DMA2CH_RELOADC		( DMA_DMAXCH_RELOADC_DISABLE )
#define DMA_USER_DMA2CH_PCHAEN		( DMA_DMAXCH_PCHAEN_DISABLE)
#define DMA_USER_DMA2CH_PPEN		( DMA_DMAXCH_PPEN_DISABLE)

/*----------------------------------------------------------------------------*/
/* DMA2SEL*/
/*----------------------------------------------------------------------------*/
#define DMA_USER_DMA2SEL			( DMA_DMAXSEL_TRIG_INT0 )

/*----------------------------------------------------------------------------*/
/* DMA2SRC*/
/*----------------------------------------------------------------------------*/
#define DMA_USER_DMA2SRC			( 0x000000U )

/*----------------------------------------------------------------------------*/
/* DMA2DST*/
/*----------------------------------------------------------------------------*/
#define DMA_USER_DMA2DST			( 0x000000U )

/*----------------------------------------------------------------------------*/
/* DMA2CNT*/
/*----------------------------------------------------------------------------*/
#define DMA_USER_DMA2CNT			( 0x000000U )

/*----------------------------------------------------------------------------*/
/* DMA2CLR*/
/*----------------------------------------------------------------------------*/
#define DMA_USER_DMA2CLR			( 0x000000U )

/*----------------------------------------------------------------------------*/
/* DMA2SET*/
/*----------------------------------------------------------------------------*/
#define DMA_USER_DMA2SET			( 0x000000U )

/*----------------------------------------------------------------------------*/
/* DMA2INV*/
/*----------------------------------------------------------------------------*/
#define DMA_USER_DMA2INV			( 0x000000U )

/*----------------------------------------------------------------------------*/
/* DMA2IMSK*/
/*----------------------------------------------------------------------------*/
#define DMA_USER_DMA2MSK			( 0x000000U )

/*----------------------------------------------------------------------------*/
/* DMA2IPAT*/
/*----------------------------------------------------------------------------*/
#define DMA_USER_DMA2PAT			( 0x000000U )

/*----------------------------------------------------------------------------*/
/* DMA3CH*/
/*----------------------------------------------------------------------------*/
#define DMA_USER_DMA3CH_CHEN		( DMA_DMAXCH_CHEN_ENABLE)
#define DMA_USER_DMA3CH_HALFEN		( DMA_DMAXCH_HALFEN_DISABLE )
#define DMA_USER_DMA3CH_MATEN		( DMA_DMAXCH_MATEN_DISABLE)
#define DMA_USER_DMA3CH_INTOEN		( DMA_DMAXCH_INTOEN_DISABLE )
#define DMA_USER_DMA3CH_CHREQ		( DMA_DMAXCH_CHREQ_OFF)
#define DMA_USER_DMA3CH_SIZE		( DMA_DMAXCH_SIZE_32BIT )
#define DMA_USER_DMA3CH_FLWCON		( DMA_DMAXCH_FLWCON_DEFAULT)
#define DMA_USER_DMA3CH_TRMODE		( DMA_DMAXCH_TRMODE_UNCHANGE )
#define DMA_USER_DMA3CH_DAMODE		( DMA_DMAXCH_DAMODE_UNCHANGE )
#define DMA_USER_DMA3CH_SAMODE		( DMA_DMAXCH_SAMODE_UNCHANGE)
#define DMA_USER_DMA3CH_RETEN		( DMA_DMAXCH_RETEN_DISABLE )
#define DMA_USER_DMA3CH_RELOADS		( DMA_DMAXCH_RELOADS_DISABLE )
#define DMA_USER_DMA3CH_RELOADD		( DMA_DMAXCH_RELOADD_DISABLE)
#define DMA_USER_DMA3CH_RELOADC		( DMA_DMAXCH_RELOADC_DISABLE )
#define DMA_USER_DMA3CH_PCHAEN		( DMA_DMAXCH_PCHAEN_DISABLE)
#define DMA_USER_DMA3CH_PPEN		( DMA_DMAXCH_PPEN_DISABLE)

/*----------------------------------------------------------------------------*/
/* DMA3SEL*/
/*----------------------------------------------------------------------------*/
#define DMA_USER_DMA3SEL			( DMA_DMAXSEL_TRIG_INT0 )

/*----------------------------------------------------------------------------*/
/* DMA3SRC*/
/*----------------------------------------------------------------------------*/
#define DMA_USER_DMA3SRC			( 0x000000U )

/*----------------------------------------------------------------------------*/
/* DMA3DST*/
/*----------------------------------------------------------------------------*/
#define DMA_USER_DMA3DST			( 0x000000U )

/*----------------------------------------------------------------------------*/
/* DMA3CNT*/
/*----------------------------------------------------------------------------*/
#define DMA_USER_DMA3CNT			( 0x000000U )

/*----------------------------------------------------------------------------*/
/* DMA3CLR*/
/*----------------------------------------------------------------------------*/
#define DMA_USER_DMA3CLR			( 0x000000U )

/*----------------------------------------------------------------------------*/
/* DMA3SET*/
/*----------------------------------------------------------------------------*/
#define DMA_USER_DMA3SET			( 0x000000U )

/*----------------------------------------------------------------------------*/
/* DMA3INV*/
/*----------------------------------------------------------------------------*/
#define DMA_USER_DMA3INV			( 0x000000U )

/*----------------------------------------------------------------------------*/
/* DMA3IMSK*/
/*----------------------------------------------------------------------------*/
#define DMA_USER_DMA3MSK			( 0x000000U )

/*----------------------------------------------------------------------------*/
/* DMA3IPAT*/
/*----------------------------------------------------------------------------*/
#define DMA_USER_DMA3PAT			( 0x000000U )

/*----------------------------------------------------------------------------*/
/* DMA4CH*/
/*----------------------------------------------------------------------------*/
#define DMA_USER_DMA4CH_CHEN		( DMA_DMAXCH_CHEN_ENABLE)
#define DMA_USER_DMA4CH_HALFEN		( DMA_DMAXCH_HALFEN_DISABLE )
#define DMA_USER_DMA4CH_MATEN		( DMA_DMAXCH_MATEN_DISABLE)
#define DMA_USER_DMA4CH_INTOEN		( DMA_DMAXCH_INTOEN_DISABLE )
#define DMA_USER_DMA4CH_CHREQ		( DMA_DMAXCH_CHREQ_OFF)
#define DMA_USER_DMA4CH_SIZE		( DMA_DMAXCH_SIZE_32BIT )
#define DMA_USER_DMA4CH_FLWCON		( DMA_DMAXCH_FLWCON_DEFAULT)
#define DMA_USER_DMA4CH_TRMODE		( DMA_DMAXCH_TRMODE_UNCHANGE )
#define DMA_USER_DMA4CH_DAMODE		( DMA_DMAXCH_DAMODE_UNCHANGE )
#define DMA_USER_DMA4CH_SAMODE		( DMA_DMAXCH_SAMODE_UNCHANGE)
#define DMA_USER_DMA4CH_RETEN		( DMA_DMAXCH_RETEN_DISABLE )
#define DMA_USER_DMA4CH_RELOADS		( DMA_DMAXCH_RELOADS_DISABLE )
#define DMA_USER_DMA4CH_RELOADD		( DMA_DMAXCH_RELOADD_DISABLE)
#define DMA_USER_DMA4CH_RELOADC		( DMA_DMAXCH_RELOADC_DISABLE )
#define DMA_USER_DMA4CH_PCHAEN		( DMA_DMAXCH_PCHAEN_DISABLE)
#define DMA_USER_DMA4CH_PPEN		( DMA_DMAXCH_PPEN_DISABLE)

/*----------------------------------------------------------------------------*/
/* DMA4SEL*/
/*----------------------------------------------------------------------------*/
#define DMA_USER_DMA4SEL			( DMA_DMAXSEL_TRIG_INT0 )

/*----------------------------------------------------------------------------*/
/* DMA4SRC*/
/*----------------------------------------------------------------------------*/
#define DMA_USER_DMA4SRC			( 0x000000U )

/*----------------------------------------------------------------------------*/
/* DMA4DST*/
/*----------------------------------------------------------------------------*/
#define DMA_USER_DMA4DST			( 0x000000U )

/*----------------------------------------------------------------------------*/
/* DMA4CNT*/
/*----------------------------------------------------------------------------*/
#define DMA_USER_DMA4CNT			( 0x000000U )

/*----------------------------------------------------------------------------*/
/* DMA4CLR*/
/*----------------------------------------------------------------------------*/
#define DMA_USER_DMA4CLR			( 0x000000U )

/*----------------------------------------------------------------------------*/
/* DMA4SET*/
/*----------------------------------------------------------------------------*/
#define DMA_USER_DMA4SET			( 0x000000U )

/*----------------------------------------------------------------------------*/
/* DMA4INV*/
/*----------------------------------------------------------------------------*/
#define DMA_USER_DMA4INV			( 0x000000U )

/*----------------------------------------------------------------------------*/
/* DMA4IMSK*/
/*----------------------------------------------------------------------------*/
#define DMA_USER_DMA4MSK			( 0x000000U )

/*----------------------------------------------------------------------------*/
/* DMA4IPAT*/
/*----------------------------------------------------------------------------*/
#define DMA_USER_DMA4PAT			( 0x000000U )


/*----------------------------------------------------------------------------*/
/* DMA5CH*/
/*----------------------------------------------------------------------------*/
#define DMA_USER_DMA5CH_CHEN		( DMA_DMAXCH_CHEN_ENABLE)
#define DMA_USER_DMA5CH_HALFEN		( DMA_DMAXCH_HALFEN_DISABLE )
#define DMA_USER_DMA5CH_MATEN		( DMA_DMAXCH_MATEN_DISABLE)
#define DMA_USER_DMA5CH_INTOEN		( DMA_DMAXCH_INTOEN_DISABLE )
#define DMA_USER_DMA5CH_CHREQ		( DMA_DMAXCH_CHREQ_OFF)
#define DMA_USER_DMA5CH_SIZE		( DMA_DMAXCH_SIZE_32BIT )
#define DMA_USER_DMA5CH_FLWCON		( DMA_DMAXCH_FLWCON_DEFAULT)
#define DMA_USER_DMA5CH_TRMODE		( DMA_DMAXCH_TRMODE_UNCHANGE )
#define DMA_USER_DMA5CH_DAMODE		( DMA_DMAXCH_DAMODE_UNCHANGE )
#define DMA_USER_DMA5CH_SAMODE		( DMA_DMAXCH_SAMODE_UNCHANGE)
#define DMA_USER_DMA5CH_RETEN		( DMA_DMAXCH_RETEN_DISABLE )
#define DMA_USER_DMA5CH_RELOADS		( DMA_DMAXCH_RELOADS_DISABLE )
#define DMA_USER_DMA5CH_RELOADD		( DMA_DMAXCH_RELOADD_DISABLE)
#define DMA_USER_DMA5CH_RELOADC		( DMA_DMAXCH_RELOADC_DISABLE )
#define DMA_USER_DMA5CH_PCHAEN		( DMA_DMAXCH_PCHAEN_DISABLE)
#define DMA_USER_DMA5CH_PPEN		( DMA_DMAXCH_PPEN_DISABLE)

/*----------------------------------------------------------------------------*/
/* DMA5SEL*/
/*----------------------------------------------------------------------------*/
#define DMA_USER_DMA5SEL			( DMA_DMAXSEL_TRIG_INT0 )

/*----------------------------------------------------------------------------*/
/* DMA5SRC*/
/*----------------------------------------------------------------------------*/
#define DMA_USER_DMA5SRC			( 0x000000U )

/*----------------------------------------------------------------------------*/
/* DMA5DST*/
/*----------------------------------------------------------------------------*/
#define DMA_USER_DMA5DST			( 0x000000U )

/*----------------------------------------------------------------------------*/
/* DMA5CNT*/
/*----------------------------------------------------------------------------*/
#define DMA_USER_DMA5CNT			( 0x000000U )

/*----------------------------------------------------------------------------*/
/* DMA5CLR*/
/*----------------------------------------------------------------------------*/
#define DMA_USER_DMA5CLR			( 0x000000U )

/*----------------------------------------------------------------------------*/
/* DMA5SET*/
/*----------------------------------------------------------------------------*/
#define DMA_USER_DMA5SET			( 0x000000U )

/*----------------------------------------------------------------------------*/
/* DMA5INV*/
/*----------------------------------------------------------------------------*/
#define DMA_USER_DMA5INV			( 0x000000U )

/*----------------------------------------------------------------------------*/
/* DMA5IMSK*/
/*----------------------------------------------------------------------------*/
#define DMA_USER_DMA5MSK			( 0x000000U )

/*----------------------------------------------------------------------------*/
/* DMA5IPAT*/
/*----------------------------------------------------------------------------*/
#define DMA_USER_DMA5PAT			( 0x000000U )


/*----------------------------------------------------------------------------*/
/*変数定義*/
/*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*/
/*プロトタイプ宣言*/
/*----------------------------------------------------------------------------*/

#endif	/* CLC_USER_H */

