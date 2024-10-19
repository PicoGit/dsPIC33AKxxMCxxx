
#ifndef ADC_DRIVER_H
#define	ADC_DRIVER_H

/*----------------------------------------------------------------------------*/
/*インクルードファイル*/
/*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*/
/*定数定義*/
/*----------------------------------------------------------------------------*/
#define ADC_POWER_DISABLE		( 0u )
#define ADC_POWER_ENABLE        ( 1u )


#define ADC_STANDBY_DISABLE     ( 0u )
#define ADC_STANDBY_ENABLE      ( 1u )

#define ADC_ACALEN_DISABLE		( 0u )
#define ADC_ACALEN_ENABLE		( 1u )

#define ADC_CALRATE_1SEC		( 0u )
#define ADC_CALRATE_64SEC		( 1u )
#define ADC_CALRATE_1024SEC		( 2u )
#define ADC_CALRATE_4096SEC		( 3u )

#define ADC_CALCNT_2CLK			( 0u )
#define ADC_CALCNT_4CLK			( 1u )
#define ADC_CALCNT_8CLK			( 2u )
#define ADC_CALCNT_16CLK		( 3u )

#define ADC_MODE_SINGLE			( 0u )
#define ADC_MODE_WINDOW			( 1u )
#define ADC_MODE_INTEGRATION	( 2u )
#define ADC_MODE_OVERSAMPLING	( 3u )

#define ADC_ACCNUM_X4			( 0u )
#define ADC_ACCNUM_X16			( 1u )
#define ADC_ACCNUM_X64			( 2u )
#define ADC_ACCNUM_X256			( 3u )

#define ADC_ACCBRST_DISABLE		( 0u )
#define ADC_ACCBRST_ENABLE		( 1u )

#define ADC_ACCRO_DISABLE		( 0u )
#define ADC_ACCRO_ENABLE		( 1u )

#define ADC_TRG1POL_HIGH		( 0u )
#define ADC_TRG1POL_LOW			( 1u )

#define ADC_EIEN_DISABLE		( 0u )
#define ADC_EIEN_ENABLE			( 1u )

#define ADC_CMPMOD_DISABLE			( 0u )
#define ADC_CMPMOD_OUT_CMPHI_LO		( 1u )
#define ADC_CMPMOD_IN_CMPHI_LO		( 2u )
#define ADC_CMPMOD_GREATER_CMPHI	( 3u )
#define ADC_CMPMOD_LESS_EQ_CMPLO	( 4u )

#define ADC_DIFF_SINGLE			( 0u )
#define ADC_DIFF_DIFF			( 1u )

#define ADC_LEFT_ALI_RIGHT		( 0u )
#define ADC_LEFT_ARI_LEFT		( 1u )

#define	ADC_PINSEL_ADXAN0		( 0U )
#define	ADC_PINSEL_ADXAN1		( 1U )
#define	ADC_PINSEL_ADXAN2		( 2U )
#define	ADC_PINSEL_ADXAN3		( 3U )
#define	ADC_PINSEL_ADXAN4		( 4U )
#define	ADC_PINSEL_ADXAN5		( 5U )
#define	ADC_PINSEL_ADXAN6		( 6U )
#define	ADC_PINSEL_ADXAN7		( 7U )
#define	ADC_PINSEL_ADXAN8		( 8U )
#define	ADC_PINSEL_ADXAN9		( 9U )
#define	ADC_PINSEL_ADXAN10		( 10U )
#define	ADC_PINSEL_ADXAN11		( 11U )
#define	ADC_PINSEL_ADXAN12		( 12U )
#define	ADC_PINSEL_ADXAN13		( 13U )
#define	ADC_PINSEL_ADXAN14		( 14U )
#define	ADC_PINSEL_ADXAN15		( 15U )


#define	ADC_NINSEL_GND			( 0U )
#define	ADC_NINSEL_ADXANN1		( 1U )
#define	ADC_NINSEL_ADXANN2		( 2U )
#define	ADC_NINSEL_ADXANN3		( 3U )

#define	ADC_SAMC_0p5TAD			( 0U )
#define	ADC_SAMC_2p5TAD			( 1U )
#define	ADC_SAMC_4p5TAD			( 2U )
#define	ADC_SAMC_6p5TAD			( 3U )
#define	ADC_SAMC_8p5TAD			( 4U )
#define	ADC_SAMC_10p5TAD		( 5U )
#define	ADC_SAMC_12p5TAD		( 6U )
#define	ADC_SAMC_14p5TAD		( 7U )

#define	ADC_TRGSRC1_DISABLE		( 0U )
#define	ADC_TRGSRC1_SOFTWARE	( 1U )
#define	ADC_TRGSRC1_PWM1_T1		( 4U )
#define	ADC_TRGSRC1_PWM1_T2		( 5U )
#define	ADC_TRGSRC1_PWM2_T1		( 6U )
#define	ADC_TRGSRC1_PWM2_T2		( 7U )
#define	ADC_TRGSRC1_PWM3_T1		( 8U )
#define	ADC_TRGSRC1_PWM3_T2		( 9U )
#define	ADC_TRGSRC1_PWM4_T1		( 10U )
#define	ADC_TRGSRC1_PWM4_T2		( 11U )
#define	ADC_TRGSRC1_SCCP1		( 12U )
#define	ADC_TRGSRC1_SCCP2		( 13U )
#define	ADC_TRGSRC1_SCCP3		( 14U )
#define	ADC_TRGSRC1_SCCP4		( 15U )
#define	ADC_TRGSRC1_CLC3		( 17U )
#define	ADC_TRGSRC1_CLC4		( 18U )
#define	ADC_TRGSRC1_SCCP1_OCIC	( 20U )
#define	ADC_TRGSRC1_SCCP2_OCIC	( 21U )
#define	ADC_TRGSRC1_SCCP3_OCIC	( 22U )
#define	ADC_TRGSRC1_SCCP4_OCIC	( 23U )
#define	ADC_TRGSRC1_CLC1		( 28U )
#define	ADC_TRGSRC1_CLC2		( 29U )
#define	ADC_TRGSRC1_PTG_TRG12	( 30U )
#define	ADC_TRGSRC1_ADTRG31		( 31U )

#define	ADC_TRGSRC2_DISABLE		( 0U )
#define	ADC_TRGSRC2_SOFTWARE	( 1U )
#define	ADC_TRGSRC2_RETRIG		( 2U )
#define	ADC_TRGSRC2_REP_TIMER	( 3U )
#define	ADC_TRGSRC2_PWM1_T1		( 4U )
#define	ADC_TRGSRC2_PWM1_T2		( 5U )
#define	ADC_TRGSRC2_PWM2_T1		( 6U )
#define	ADC_TRGSRC2_PWM2_T2		( 7U )
#define	ADC_TRGSRC2_PWM3_T1		( 8U )
#define	ADC_TRGSRC2_PWM3_T2		( 9U )
#define	ADC_TRGSRC2_PWM4_T1		( 10U )
#define	ADC_TRGSRC2_PWM4_T2		( 11U )
#define	ADC_TRGSRC2_SCCP1		( 12U )
#define	ADC_TRGSRC2_SCCP2		( 13U )
#define	ADC_TRGSRC2_SCCP3		( 14U )
#define	ADC_TRGSRC2_SCCP4		( 15U )
#define	ADC_TRGSRC2_CLC3		( 17U )
#define	ADC_TRGSRC2_CLC4		( 18U )
#define	ADC_TRGSRC2_SCCP1_OCIC	( 20U )
#define	ADC_TRGSRC2_SCCP2_OCIC	( 21U )
#define	ADC_TRGSRC2_SCCP3_OCIC	( 22U )
#define	ADC_TRGSRC2_SCCP4_OCIC	( 23U )
#define	ADC_TRGSRC2_CLC1		( 28U )
#define	ADC_TRGSRC2_CLC2		( 29U )
#define	ADC_TRGSRC2_PTG_TRG12	( 30U )
#define	ADC_TRGSRC2_ADTRG31		( 31U )


/*----------------------------------------------------------------------------*/
/*変数定義*/
/*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*/
/*プロトタイプ宣言*/
/*----------------------------------------------------------------------------*/
void vdg_ADC_Set_Register(void);
void vdg_ADC1_Set_All_Register();
void vdg_ADC1_Set_Power(uint16_t u4a_Enable);
void vdg_ADC1_Calibrate(void);
void vdg_ADC2_Set_All_Register();
void vdg_ADC2_Set_Power(uint16_t u4a_Enable);
void vdg_ADC2_Calibrate(void);
#endif	/* ADC_DRIVER_H */

