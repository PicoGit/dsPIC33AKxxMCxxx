
#ifndef DMA_DRIVER_H
#define	DMA_DRIVER_H

/*----------------------------------------------------------------------------*/
/*インクルードファイル*/
/*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*/
/*定数定義*/
/*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*/
/*変数定義*/
/*----------------------------------------------------------------------------*/


#define DMA_DMACON_POWER_OFF			( 0U )
#define DMA_DMACON_POWER_ON				( 1U )

#define DMA_DMACON_SIDL_CONTINUES		( 0U )
#define DMA_DMACON_SIDL_DISCONTINUES	( 1U )

#define DMA_DMACON_PRIORITY_FIXED		( 0U )
#define DMA_DMACON_PRIORITY_ROUND_ROBIN	( 1U )

#define DMA_DMAXCH_CHEN_DISABLE			( 0U )
#define DMA_DMAXCH_CHEN_ENABLE			( 1U )

#define DMA_DMAXCH_HALFEN_DISABLE		( 0U )
#define DMA_DMAXCH_HALFEN_ENABLE		( 1U )

#define DMA_DMAXCH_MATEN_DISABLE		( 0U )
#define DMA_DMAXCH_MATEN_ENABLE			( 1U )

#define DMA_DMAXCH_INTOEN_DISABLE		( 0U )
#define DMA_DMAXCH_INTOEN_ENABLE		( 1U )

#define DMA_DMAXCH_CHREQ_OFF			( 0U )
#define DMA_DMAXCH_CHREQ_ON				( 1U )

#define DMA_DMAXCH_SIZE_8BIT			( 0U )
#define DMA_DMAXCH_SIZE_16BIT			( 1U )
#define DMA_DMAXCH_SIZE_32BIT			( 2U )

#define DMA_DMAXCH_FLWCON_DEFAULT		( 0U )
#define DMA_DMAXCH_FLWCON_NULL_WRITE	( 1U )
#define DMA_DMAXCH_FLWCON_READ_ONLY		( 2U )

#define DMA_DMAXCH_TRMODE_UNCHANGE		( 0U )
#define DMA_DMAXCH_TRMODE_INCREMENT		( 1U )
#define DMA_DMAXCH_TRMODE_DECREMENT		( 2U )

#define DMA_DMAXCH_DAMODE_UNCHANGE		( 0U )
#define DMA_DMAXCH_DAMODE_INCREMENT		( 1U )
#define DMA_DMAXCH_DAMODE_DECREMENT		( 2U )

#define DMA_DMAXCH_SAMODE_UNCHANGE		( 0U )
#define DMA_DMAXCH_SAMODE_INCREMENT		( 1U )
#define DMA_DMAXCH_SAMODE_DECREMENT		( 2U )

#define DMA_DMAXCH_RETEN_DISABLE		( 0U )
#define DMA_DMAXCH_RETEN_ENABLE			( 1U )

#define DMA_DMAXCH_RELOADS_DISABLE		( 0U )
#define DMA_DMAXCH_RELOADS_ENABLE		( 1U )

#define DMA_DMAXCH_RELOADD_DISABLE		( 0U )
#define DMA_DMAXCH_RELOADD_ENABLE		( 1U )

#define DMA_DMAXCH_RELOADC_DISABLE		( 0U )
#define DMA_DMAXCH_RELOADC_ENABLE		( 1U )

#define DMA_DMAXCH_PCHAEN_DISABLE		( 0U )
#define DMA_DMAXCH_PCHAEN_ENABLE		( 1U )

#define DMA_DMAXCH_PPEN_DISABLE			( 0U )
#define DMA_DMAXCH_PPEN_ENABLE			( 1U )


#define DMA_DMAXSEL_TRIG_INT0		( 0U )
#define DMA_DMAXSEL_TRIG_INT1		( 1U )
#define DMA_DMAXSEL_TRIG_INT2		( 2U )
#define DMA_DMAXSEL_TRIG_NVM		( 3U )
#define DMA_DMAXSEL_TRIG_CRC		( 4U )
#define DMA_DMAXSEL_TRIG_TMR1		( 5U )
#define DMA_DMAXSEL_TRIG_SPI1RX		( 6U )
#define DMA_DMAXSEL_TRIG_SPI1TX		( 7U )
#define DMA_DMAXSEL_TRIG_SPI2RX		( 8U )
#define DMA_DMAXSEL_TRIG_SPI2TX		( 9U )
#define DMA_DMAXSEL_TRIG_SPI3RX		( 0xAU )
#define DMA_DMAXSEL_TRIG_SPI3TX		( 0xBU )
#define DMA_DMAXSEL_TRIG_U1RX		( 0xFU )
#define DMA_DMAXSEL_TRIG_U1TX		( 0x10U )
#define DMA_DMAXSEL_TRIG_U2RX		( 0x11U )
#define DMA_DMAXSEL_TRIG_U2TX		( 0x12U )
#define DMA_DMAXSEL_TRIG_U3RX		( 0x13U )
#define DMA_DMAXSEL_TRIG_U3TX		( 0x14U )
#define DMA_DMAXSEL_TRIG_U4RX		( 0x15U )
#define DMA_DMAXSEL_TRIG_U4TX		( 0x16U )
#define DMA_DMAXSEL_TRIG_CCP1		( 0x18U )
#define DMA_DMAXSEL_TRIG_CCP2		( 0x19U )
#define DMA_DMAXSEL_TRIG_CCP3		( 0x1AU )
#define DMA_DMAXSEL_TRIG_CCP4		( 0x1BU )
#define DMA_DMAXSEL_TRIG_CCP5		( 0x1CU )
#define DMA_DMAXSEL_TRIG_CCP6		( 0x1DU )
#define DMA_DMAXSEL_TRIG_CCP7		( 0x1EU )
#define DMA_DMAXSEL_TRIG_CCP8		( 0x1F )
#define DMA_DMAXSEL_TRIG_PWM_EVA	( 0x21U )
#define DMA_DMAXSEL_TRIG_PWM_EVB	( 0x22U )
#define DMA_DMAXSEL_TRIG_PCG2		( 0x24U )
#define DMA_DMAXSEL_TRIG_PCG1		( 0x23U )
#define DMA_DMAXSEL_TRIG_PCG2		( 0x24U )
#define DMA_DMAXSEL_TRIG_PCG3		( 0x25U )
#define DMA_DMAXSEL_TRIG_PCG4		( 0x26U )
#define DMA_DMAXSEL_TRIG_SENT1		( 0x28U )
#define DMA_DMAXSEL_TRIG_SENT2		( 0x29U )
#define DMA_DMAXSEL_TRIG_BISS		( 0x2AU )
#define DMA_DMAXSEL_TRIG_ADC1AN0	( 0x2BU )
#define DMA_DMAXSEL_TRIG_ADC1AN1	( 0x2CU )
#define DMA_DMAXSEL_TRIG_ADC1AN2	( 0x2DU )
#define DMA_DMAXSEL_TRIG_ADC1AN3	( 0x2EU )
#define DMA_DMAXSEL_TRIG_ADC1AN4	( 0x2FU )
#define DMA_DMAXSEL_TRIG_ADC1AN5	( 0x30U )
#define DMA_DMAXSEL_TRIG_ADC1AN6	( 0x31U )
#define DMA_DMAXSEL_TRIG_ADC1AN7	( 0x32U )
#define DMA_DMAXSEL_TRIG_ADC1AN8	( 0x33U )
#define DMA_DMAXSEL_TRIG_ADC1AN9	( 0x34U )
#define DMA_DMAXSEL_TRIG_ADC1A010	( 0x35U )
#define DMA_DMAXSEL_TRIG_ADC1AN11	( 0x36U )
#define DMA_DMAXSEL_TRIG_ADC1AN12	( 0x37U )
#define DMA_DMAXSEL_TRIG_ADC1AN13	( 0x38U )
#define DMA_DMAXSEL_TRIG_ADC1AN14	( 0x39U )
#define DMA_DMAXSEL_TRIG_ADC1AN15	( 0x3AU )
#define DMA_DMAXSEL_TRIG_ADC1AN16	( 0x3BU )
#define DMA_DMAXSEL_TRIG_ADC1AN17	( 0x3CU )
#define DMA_DMAXSEL_TRIG_ADC1AN18	( 0x3DU )
#define DMA_DMAXSEL_TRIG_ADC1AN19	( 0x3EU )
#define DMA_DMAXSEL_TRIG_ADC2AN0	( 0x40U )
#define DMA_DMAXSEL_TRIG_ADC2AN1	( 0x41U )
#define DMA_DMAXSEL_TRIG_ADC2AN2	( 0x42U )
#define DMA_DMAXSEL_TRIG_ADC2AN3	( 0x43U )
#define DMA_DMAXSEL_TRIG_ADC2AN4	( 0x44U )
#define DMA_DMAXSEL_TRIG_ADC2AN5	( 0x45U )
#define DMA_DMAXSEL_TRIG_ADC2AN6	( 0x46U )
#define DMA_DMAXSEL_TRIG_ADC2AN7	( 0x47U )
#define DMA_DMAXSEL_TRIG_ADC2AN8	( 0x48U )
#define DMA_DMAXSEL_TRIG_ADC2AN9	( 0x49U )
#define DMA_DMAXSEL_TRIG_ADC2A010	( 0x4AU )
#define DMA_DMAXSEL_TRIG_ADC2AN11	( 0x4BU )
#define DMA_DMAXSEL_TRIG_ADC2AN12	( 0x4CU )
#define DMA_DMAXSEL_TRIG_ADC2AN13	( 0x4DU )
#define DMA_DMAXSEL_TRIG_ADC2AN14	( 0x4EU )
#define DMA_DMAXSEL_TRIG_ADC2AN15	( 0x4FU )
#define DMA_DMAXSEL_TRIG_ADC2AN16	( 0x50U )
#define DMA_DMAXSEL_TRIG_ADC2AN17	( 0x51U )
#define DMA_DMAXSEL_TRIG_ADC2AN18	( 0x52U )
#define DMA_DMAXSEL_TRIG_ADC2AN19	( 0x53U )
#define DMA_DMAXSEL_TRIG_DMA0		( 0x5BU )
#define DMA_DMAXSEL_TRIG_DMA1		( 0x5CBU )
#define DMA_DMAXSEL_TRIG_DMA2		( 0x5DU )
#define DMA_DMAXSEL_TRIG_DMA3		( 0x5EU )
#define DMA_DMAXSEL_TRIG_DMA4		( 0x5FU )
#define DMA_DMAXSEL_TRIG_DMA5		( 0x60U )

#define DMA_DMAXSEL_TRIG_I2C1G		( 0x6BU )
#define DMA_DMAXSEL_TRIG_I2C1RX		( 0x6CU )
#define DMA_DMAXSEL_TRIG_I2C1TX		( 0x6DU )
#define DMA_DMAXSEL_TRIG_I2C2G		( 0x6EU )
#define DMA_DMAXSEL_TRIG_I2C2RX		( 0x6FU )
#define DMA_DMAXSEL_TRIG_I2C2TX		( 0x70U )
/*----------------------------------------------------------------------------*/
/*プロトタイプ宣言*/
/*----------------------------------------------------------------------------*/
void vdg_DMA_Set_Register(void);
void vdg_DMACOM_Set_Register(void);
void vdg_DMA0_Set_Register(void);
void vdg_DMA1_Set_Register(void);
void vdg_DMA2_Set_Register(void);
void vdg_DMA3_Set_Register(void);
void vdg_DMA4_Set_Register(void);
void vdg_DMA5_Set_Register(void);

#endif	/* DMA_DRIVER_H */

