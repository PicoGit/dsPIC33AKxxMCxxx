
#ifndef CLC_DRIVER_H
#define	CLC_DRIVER_H

/*----------------------------------------------------------------------------*/
/*インクルードファイル*/
/*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*/
/*定数定義*/
/*----------------------------------------------------------------------------*/
#define CLC_POWER_DISABLE		( 0u )
#define CLC_POWER_ENABLE        ( 1u )

#define CLC_GXPOL_NOT_INVERT	( 0U )
#define CLC_GXPOL_INVERT		( 1U )

#define CLC_MODE_AND_OR			( 0u )
#define CLC_MODE_OR_XOR			( 1u )
#define CLC_MODE_FOUR_AND		( 2u )
#define CLC_MODE_SR_LATCH		( 3u )
#define CLC_MODE_DFF_SR			( 4u )
#define CLC_MODE_DFF_R			( 5u )
#define CLC_MODE_JK_R			( 6u )
#define CLC_MODE_TR_SR			( 7u )

#define CLC_OUTPUT_DISABLE		( 0u )
#define CLC_OUTPUT_ENABLE       ( 1u )

#define CLC_NEG_IRPT_DISABLE	( 0u )
#define CLC_NEG_IRPT_ENABLE     ( 1u )

#define CLC_POS_IRPT_DISABLE	( 0u )
#define CLC_POS_IRPT_ENABLE     ( 1u )

#define CLC_SEL_DS1_CLCINA		( 0u )
#define CLC_SEL_DS1_SLOW_CLK	( 1u )
#define CLC_SEL_DS1_CLC3OUT		( 2u )
#define CLC_SEL_DS1_INTRC_CLK	( 3u )
#define CLC_SEL_DS1_REFO_CLK	( 4u )
#define CLC_SEL_DS1_CLKGEN13	( 5u )
#define CLC_SEL_DS1_SCCP2_AUX	( 6u )
#define CLC_SEL_DS1_SCCP4_AUX	( 7u )

#define CLC_SEL_DS2_CLCINB		( 0u )
#define CLC_SEL_DS2_CLC2OUT		( 1u )
#define CLC_SEL_DS2_CMP1OUT		( 2u )
#define CLC_SEL_DS2_U1TX		( 3u )
#define CLC_SEL_DS2_SCCP1_TRG	( 4u )
#define CLC_SEL_DS2_SCCP2_TRG	( 5u )
#define CLC_SEL_DS2_SCCP1_OC	( 6u )
#define CLC_SEL_DS2_SCCP2_OC	( 7u )

#define CLC_SEL_DS3_CLCINC		( 0u )
#define CLC_SEL_DS3_CLC1OUT		( 1u )
#define CLC_SEL_DS3_CMP2OUT		( 2u )
#define CLC_SEL_DS3_SDO1		( 3u )
#define CLC_SEL_DS3_U1RX		( 4u )
#define CLC_SEL_DS3_CLC4OUT		( 5u )
#define CLC_SEL_DS3_SCCP3_OC	( 6u )
#define CLC_SEL_DS3_SCCP4_OC	( 7u )

#define CLC_SEL_DS4_PWM_EVA		( 0u )
#define CLC_SEL_DS4_CLC2OUT		( 1u )
#define CLC_SEL_DS4_CMP3OUT		( 2u )
#define CLC_SEL_DS4_SDI1		( 3u )
#define CLC_SEL_DS4_RESERVED	( 4u )
#define CLC_SEL_DS4_CLCIND		( 5u )
#define CLC_SEL_DS4_SCCP1_AUX	( 6u )
#define CLC_SEL_DS4_SCCP3_AUX	( 7u )

#define CLC_GLS_DISABLE			( 0u )
#define CLC_GLS_ENABLE			( 1u )
/*----------------------------------------------------------------------------*/
/*変数定義*/
/*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*/
/*プロトタイプ宣言*/
/*----------------------------------------------------------------------------*/

void vdg_CLC1_Set_Register(void);
void vdg_CLC2_Set_Register(void);
void vdg_CLC3_Set_Register(void);
void vdg_CLC4_Set_Register(void);
void vdg_CLC_Set_Register(void);
#endif	/* CLC_DRIVER_H */

