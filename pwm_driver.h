
#ifndef PWM_DRIVER_H
#define	PWM_DRIVER_H

/*----------------------------------------------------------------------------*/
/*インクルードファイル*/
/*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*/
/*定数定義*/
/*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*/
/*変数定義*/
/*----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------*/
/*PCLKCON*/
/*----------------------------------------------------------------------------*/
#define PWM_DRV_PCLKCON_LOCK_UNLOCK		( 0u )
#define PWM_DRV_PCLKCON_LOCK_LOCK		( 1u )

#define PWM_DRV_PCLKCON_DIVSEL_2X		( 0u )
#define PWM_DRV_PCLKCON_DIVSEL_4X		( 1u )
#define PWM_DRV_PCLKCON_DIVSEL_8X		( 2u )
#define PWM_DRV_PCLKCON_DIVSEL_16X		( 3u )

#define PWM_DRV_PCLKCON_MCLKSEL_STD_SPEED	( 0u )
#define PWM_DRV_PCLKCON_MCLKSEL_CLKGEN5		( 1u )

/*----------------------------------------------------------------------------*/
/*CMBTRIG*/
/*----------------------------------------------------------------------------*/

#define PWM_DRV_CMBTRIG_DISABLE		( 0u )
#define PWM_DRV_CMBTRIG_ENABLE		( 1u )

/*----------------------------------------------------------------------------*/
/*LOGCON*/
/*----------------------------------------------------------------------------*/
#define PWM_DRV_LOGCON_SOURCE_PWM1H     ( 0u )
#define PWM_DRV_LOGCON_SOURCE_PWM1L     ( 1u )
#define PWM_DRV_LOGCON_SOURCE_PWM2H     ( 2u )
#define PWM_DRV_LOGCON_SOURCE_PWM2L     ( 3u )
#define PWM_DRV_LOGCON_SOURCE_PWM3H     ( 4u )
#define PWM_DRV_LOGCON_SOURCE_PWM3L     ( 5u )
#define PWM_DRV_LOGCON_SOURCE_PWM4H     ( 6u )
#define PWM_DRV_LOGCON_SOURCE_PWM4L     ( 7u )
#define PWM_DRV_LOGCON_SOURCE_PWM5H     ( 8u )
#define PWM_DRV_LOGCON_SOURCE_PWM5L     ( 9u )
#define PWM_DRV_LOGCON_SOURCE_PWM6H     ( 10u )
#define PWM_DRV_LOGCON_SOURCE_PWM6L     ( 11u )
#define PWM_DRV_LOGCON_SOURCE_PWM7H     ( 12u )
#define PWM_DRV_LOGCON_SOURCE_PWM7L     ( 13u )
#define PWM_DRV_LOGCON_SOURCE_PWM8H     ( 14u )
#define PWM_DRV_LOGCON_SOURCE_PWM8L     ( 15u )

#define PWM_DRV_LOGCON_SOURCE_POL_NORMAL    ( 0u )
#define PWM_DRV_LOGCON_SOURCE_POL_INVERT    ( 1u )

#define PWM_DRV_LOGCON_FUNCTION_OR      ( 0u )
#define PWM_DRV_LOGCON_FUNCTION_AND     ( 1u )
#define PWM_DRV_LOGCON_FUNCTION_EXOR    ( 2u )

#define PWM_DRV_LOGCON_DISTINATION_DISABLE  ( 0u )
#define PWM_DRV_LOGCON_DISTINATION_PWM2  ( 1u )
#define PWM_DRV_LOGCON_DISTINATION_PWM3  ( 2u )
#define PWM_DRV_LOGCON_DISTINATION_PWM4  ( 3u )
#define PWM_DRV_LOGCON_DISTINATION_PWM5  ( 4u )
#define PWM_DRV_LOGCON_DISTINATION_PWM6  ( 5u )
#define PWM_DRV_LOGCON_DISTINATION_PWM7  ( 6u )
#define PWM_DRV_LOGCON_DISTINATION_PWM8  ( 7u )


/*----------------------------------------------------------------------------*/
/*PWMEVT*/
/*----------------------------------------------------------------------------*/
#define PWM_DRV_PWMEVT_EVTOEN_DISABLE    ( 0u )
#define PWM_DRV_PWMEVT_EVTOEN_ENABLE     ( 1u )

#define PWM_DRV_PWMEVT_EVTPOL_ACTIVE_H    ( 0u )
#define PWM_DRV_PWMEVT_EVTPOL_ACTIVE_L    ( 1u )

#define PWM_DRV_PWMEVT_EVTSTRD_8CLOCK    ( 0u )
#define PWM_DRV_PWMEVT_EVTSTRD_DISABLE	( 1u )

#define PWM_DRV_PWMEVT_EVTSYNC_OFF    ( 0u )
#define PWM_DRV_PWMEVT_EVTSYNC_ON	  ( 1u )

#define PWM_DRV_PWMEVT_EVTSEL_PGTRGSEL     ( 0u )
#define PWM_DRV_PWMEVT_EVTSEL_PWMGEN	   ( 1u )
#define PWM_DRV_PWMEVT_EVTSEL_PCI_SYNC    ( 2u )
#define PWM_DRV_PWMEVT_EVTSEL_PCI_FF	   ( 3u )
#define PWM_DRV_PWMEVT_EVTSEL_PCI_CL      ( 4u )
#define PWM_DRV_PWMEVT_EVTSEL_PCI_FL	   ( 5u )
#define PWM_DRV_PWMEVT_EVTSEL_CAHALF      ( 6u )
#define PWM_DRV_PWMEVT_EVTSEL_STEER		( 7u )
#define PWM_DRV_PWMEVT_EVTSEL_ADCTRIG1    ( 8u )
#define PWM_DRV_PWMEVT_EVTSEL_ADCTRIG2	   ( 9u )

#define PWM_DRV_PWMEVT_EVTSEL_PWM1 ( 0u )
#define PWM_DRV_PWMEVT_EVTSEL_PWM2  ( 1u )
#define PWM_DRV_PWMEVT_EVTSEL_PWM3  ( 2u )
#define PWM_DRV_PWMEVT_EVTSEL_PWM4  ( 3u )
#define PWM_DRV_PWMEVT_EVTSEL_PWM5  ( 4u )
#define PWM_DRV_PWMEVT_EVTSEL_PWM6  ( 5u )
#define PWM_DRV_PWMEVT_EVTSEL_PWM7  ( 6u )
#define PWM_DRV_PWMEVT_EVTSEL_PWM8  ( 7u )

/*----------------------------------------------------------------------------*/
/*PGxCON*/
/*----------------------------------------------------------------------------*/
#define PWM_DRV_PGCON_MDCSEL_PGDC		( 0u ) //
#define PWM_DRV_PGCON_MDCSEL_MDC		( 1u ) //

#define PWM_DRV_PGCON_MPERSEL_PGPER		( 0u ) //
#define PWM_DRV_PGCON_MPERSEL_MPER		( 1u ) //

#define PWM_DRV_PGCON_MPHSEL_PGPHASE    ( 0u ) //
#define PWM_DRV_PGCON_MPHSEL_MPHASE     ( 1u ) //

#define PWM_DRV_PGCON_MSTEN_DISABLE    ( 0u ) //UPDREQをブロードキャストしない
#define PWM_DRV_PGCON_MSTEN_ENABLE     ( 1u ) //UPDREQをブロードキャストする

#define PWM_DRV_PGCON_UPDMOD_SOC				( 0u ) //
#define PWM_DRV_PGCON_UPDMOD_IMMEDIATE			( 1u ) //
#define PWM_DRV_PGCON_UPDMOD_CLIENT_SOC			( 2u ) //
#define PWM_DRV_PGCON_UPDMOD_CLIENT_IMMEDIATE   ( 3u ) //

#define PWM_DRV_PGCON_TRGMOD_SINGLE_TRIGGER		( 0u ) //PWM Generator operates in Single Trigger mode
#define PWM_DRV_PGCON_TRGMOD_RETRIGGER			( 1u ) //PWM Generator operates in Retriggerable mode

#define PWM_DRV_PGCON_SOCS_LOCAL_EOC		( 0u ) //Local EOC – PWM Generator is self-triggered
#define PWM_DRV_PGCON_SOCS_PG1_PG5			( 1u ) //Trigger output selected by PG1 or PG5 PGTRGSEL[2:0] bits (PGxEVT[2:0])
#define PWM_DRV_PGCON_SOCS_PG2_PG6			( 2u ) //Trigger output selected by PG2 or PG6 PGTRGSEL[2:0] bits (PGxEVT[2:0])
#define PWM_DRV_PGCON_SOCS_PG3_PG7			( 3u ) //Trigger output selected by PG3 or PG7 PGTRGSEL[2:0] bits (PGxEVT[2:0])
#define PWM_DRV_PGCON_SOCS_PG4_PG8			( 4u ) //Trigger output selected by PG4 or PG8 PGTRGSEL[2:0] bits (PGxEVT[2:0])
#define PWM_DRV_PGCON_SOCS_TRIGBIT_SYNC		( 15u ) //TRIG bit or PCI Sync function only (no hardware trigger source is selected)

#define PWM_DRV_PGCON_ON_DISABLE		( 0u ) //
#define PWM_DRV_PGCON_ON_ENABLE			( 1u ) //

#define PWM_DRV_PGCON_TRGCNT_1CYCLE		( 0u ) //
#define PWM_DRV_PGCON_TRGCNT_2CYCLES	( 1u ) //
#define PWM_DRV_PGCON_TRGCNT_3CYCLES	( 2u ) //
#define PWM_DRV_PGCON_TRGCNT_4CYCLES	( 3u ) //
#define PWM_DRV_PGCON_TRGCNT_5CYCLES	( 4u ) //
#define PWM_DRV_PGCON_TRGCNT_6CYCLES	( 5u ) //
#define PWM_DRV_PGCON_TRGCNT_7CYCLES	( 6u ) //
#define PWM_DRV_PGCON_TRGCNT_8CYCLES	( 7u ) //

#define PWM_DRV_PGCON_CLKSEL_NO_CLOCK	( 0u ) //No clock selected, PWM Generator is in the lowest power state (default)
#define PWM_DRV_PGCON_CLKSEL_MCLKSEL	( 1u ) //PWM Generator uses the master clock selected by the MCLKSEL (PCLKCON[0]) control bits
#define PWM_DRV_PGCON_CLKSEL_DIVIDE		( 2u ) //PWM Generator uses the master clock divided by the clock divider circuit
#define PWM_DRV_PGCON_CLKSEL_FREQ_SCALE	( 3u ) //PWM Generator uses the master clock scaled by the frequency scaling circuit

#define PWM_DRV_PGCON_MODSEL_INDEPENDENT_EDGE		( 0u ) //Independent Edge PWM mode
#define PWM_DRV_PGCON_MODSEL_VARIABLE_PHASE			( 1u ) //Variable Phase PWM mode
#define PWM_DRV_PGCON_MODSEL_INDEPENDENT_EDGE_DO	( 2u ) //Independent Edge PWM mode, dual output
#define PWM_DRV_PGCON_MODSEL_CENTER_ALIGEND			( 4u ) //Center-Aligned PWM mode
#define PWM_DRV_PGCON_MODSEL_DU_CENTER_ALIGEND		( 5u ) //Double Update Center-Aligned PWM mode
#define PWM_DRV_PGCON_MODSEL_DE_CENTER_ALIGEND1		( 6u ) //Dual Edge Center-Aligned PWM mode
#define PWM_DRV_PGCON_MODSEL_DE_CENTER_ALIGEND2		( 7u ) //Dual Edge Center-Aligned PWM mode

/*----------------------------------------------------------------------------*/
/*PGxIOCON*/
/*----------------------------------------------------------------------------*/
#define PWM_DRV_PGIOCON_CAPSRC_SOFTWARE		( 0u ) //No hardware source selected for time base capture – software only
#define PWM_DRV_PGIOCON_CAPSRC_PCI_SYNC		( 1u ) //Capture time base value at assertion of selected PCI Sync signal
#define PWM_DRV_PGIOCON_CAPSRC_PCI_FF		( 2u ) //Capture time base value at assertion of selected PCI Feed-Forward signal
#define PWM_DRV_PGIOCON_CAPSRC_PCI_CL		( 3u ) //Capture time base value at assertion of selected PCI Current Limit signal
#define PWM_DRV_PGIOCON_CAPSRC_PCI_FAULT	( 4u ) //Capture time base value at assertion of selected PCI Fault signal


#define PWM_DRV_PGIOCON_PPSEN_DISABLE		( 0u ) //Peripheral pin select disabled, as a result, PWM outputs are hard-mapped to pins
#define PWM_DRV_PGIOCON_PPSEN_ENABLE		( 1u ) //Peripheral pin select enabled

#define PWM_DRV_PGIOCON_DTCMPSEL_PCI_SYNC	( 0u ) //Dead-time compensation is controlled by PCI feed-forward limit logic
#define PWM_DRV_PGIOCON_DTCMPSEL_PCI_FF		( 1u ) //Dead-time compensation is controlled by PCI Sync logic

#define PWM_DRV_PGIOCON_PMOD_COMPLEMENTARY	( 0u ) //PWM Generator outputs operate in Complementary mode
#define PWM_DRV_PGIOCON_PMOD_INDEPENDENT	( 1u ) //PWM Generator outputs operate in Independent mode
#define PWM_DRV_PGIOCON_PMOD_PUSH_PULL		( 2u ) //PWM Generator outputs operate in Push-Pull mode

#define PWM_DRV_PGIOCON_PENH_DISABLE		( 0u ) //PWM Generator does not control the PWMxH output pin
#define PWM_DRV_PGIOCON_PENH_ENABLE			( 1u ) //PWM Generator controls the PWMxH output pin

#define PWM_DRV_PGIOCON_PENL_DISABLE		( 0u ) //PWM Generator does not control the PWMxL output pin
#define PWM_DRV_PGIOCON_PENL_ENABLE			( 1u ) //PWM Generator controls the PWMxL output pin

#define PWM_DRV_PGIOCON_POLH_ACTIVE_HIGH	( 0u ) //Output pin is active-high
#define PWM_DRV_PGIOCON_POLH_ACTIVE_LOW		( 1u ) //Output pin is active-low

#define PWM_DRV_PGIOCON_POLL_ACTIVE_HIGH	( 0u ) //Output pin is active-high
#define PWM_DRV_PGIOCON_POLL_ACTIVE_LOW		( 1u ) //Output pin is active-low

#define PWM_DRV_PGIOCON_CLMOD_CLDAT			( 0u ) //If PCI current limit is active, then the CLDAT[1:0] bits define the PWM output levels
#define PWM_DRV_PGIOCON_CLMOD_INVERT		( 1u ) //If PCI current limit is active, then the PWMxH and PWMxL output signals are inverted (bit flipping), and the
													//CLDAT[1:0] bits are not used

#define PWM_DRV_PGIOCON_SWAP_DISABLE		( 0u ) //PWMxH/L signals are mapped to their respective pins
#define PWM_DRV_PGIOCON_SWAP_ENABLE			( 1u ) //The PWMxH signal is connected to the PWMxL pin and the PWMxL signal is connected to the PWMxH pin

#define PWM_DRV_PGIOCON_OVRENH_DISABLE		( 0u ) //PWM Generator provides data for the PWMxH pin
#define PWM_DRV_PGIOCON_OVRENH_ENABLE		( 1u ) //OVRDAT[1] provides data for output on the PWMxH pin

#define PWM_DRV_PGIOCON_OVRENL_DISABLE		( 0u ) //PWM Generator provides data for the PWMxL pin
#define PWM_DRV_PGIOCON_OVRENL_ENABLE		( 1u ) //OVRDAT[0] provides data for output on the PWMxL pin

#define PWM_DRV_PGIOCON_OVRDAT_HL_LL		( 0u ) //PWMxH = Low / PWMxL = Low
#define PWM_DRV_PGIOCON_OVRDAT_HL_LH		( 1u ) //PWMxH = Low / PWMxL = High
#define PWM_DRV_PGIOCON_OVRDAT_HH_LL		( 2u ) //PWMxH = High / PWMxL = Low
#define PWM_DRV_PGIOCON_OVRDAT_HH_LH	    ( 3u ) //PWMxH = High / PWMxL = High

#define PWM_DRV_PGIOCON_OSYNC_TIMEBASE		( 0u )	//User output overrides via the SWAP, OVRENL/H and OVRDAT[1:0] bits are synchronized to the local PWM time
													//base (next start of cycle)
#define PWM_DRV_PGIOCON_OSYNC_IMMEDIATE		( 1u )	//User output overrides via the SWAP, OVRENL/H and OVRDAT[1:0] bits occur immediately (as soon as possible)
#define PWM_DRV_PGIOCON_OSYNC_UPMODE		( 2u )	//User output overrides via the SWAP, OVRENL/H and OVRDAT[1:0] bits occur when specified by the UPMOD[2:0]
													//bits in the PGxCON register
#define PWM_DRV_PGIOCON_OSYNC_SELECT_PWM	( 3u ) //User output overrides via the SWAP, OVRENL/H, and OVRDAT[1:0] bits are synchronized to the data buffer
													//update of the selected PWM mode. This makes this setting equivalent to setting 10 when UPDMOD[2:0] = 000
													//with UPDREQ properly set manually

#define PWM_DRV_PGIOCON_FLTDAT_HL_LL		( 0u ) //PWMxH = Low / PWMxL = Low
#define PWM_DRV_PGIOCON_FLTDAT_HL_LH		( 1u ) //PWMxH = Low / PWMxL = High
#define PWM_DRV_PGIOCON_FLTDAT_HH_LL		( 2u ) //PWMxH = High / PWMxL = Low
#define PWM_DRV_PGIOCON_FLTDAT_HH_LH		( 3u ) //PWMxH = High / PWMxL = High

#define PWM_DRV_PGIOCON_CLDAT_HL_LL			( 0u ) //PWMxH = Low / PWMxL = Low
#define PWM_DRV_PGIOCON_CLDAT_HL_LH			( 1u ) //PWMxH = Low / PWMxL = High
#define PWM_DRV_PGIOCON_CLDAT_HH_LL			( 2u ) //PWMxH = High / PWMxL = Low
#define PWM_DRV_PGIOCON_CLDAT_HH_LH			( 3u ) //PWMxH = High / PWMxL = High

#define PWM_DRV_PGIOCON_FFDAT_HL_LL			( 0u ) //PWMxH = Low / PWMxL = Low
#define PWM_DRV_PGIOCON_FFDAT_HL_LH			( 1u ) //PWMxH = Low / PWMxL = High
#define PWM_DRV_PGIOCON_FFDAT_HH_LL			( 2u ) //PWMxH = High / PWMxL = Low
#define PWM_DRV_PGIOCON_FFDAT_HH_LH			( 3u ) //PWMxH = High / PWMxL = High

#define PWM_DRV_PGIOCON_DBDAT_HL_LL			( 0u ) //PWMxH = Low / PWMxL = Low
#define PWM_DRV_PGIOCON_DBDAT_HL_LH			( 1u ) //PWMxH = Low / PWMxL = High
#define PWM_DRV_PGIOCON_DBDAT_HH_LL			( 2u ) //PWMxH = High / PWMxL = Low
#define PWM_DRV_PGIOCON_DBDAT_HH_LH			( 3u ) //PWMxH = High / PWMxL = High

/*----------------------------------------------------------------------------*/
/*PGxEVT*/
/*----------------------------------------------------------------------------*/

#define PWM_DRV_PGEVT_ADTR1EN1_DISABLE    ( 0u ) //PGxTRIGAレジスタコンペアイベントをADCトリガ1向け信号源として無効にする
#define PWM_DRV_PGEVT_ADTR1EN1_ENABLE     ( 1u ) //PGxTRIGAレジスタコンペアイベントをADCトリガ1向け信号源として無効にする

#define PWM_DRV_PGEVT_ADTR1EN2_DISABLE    ( 0u ) //PGxTRIGBレジスタコンペアイベントをADCトリガ1向け信号源として無効にする
#define PWM_DRV_PGEVT_ADTR1EN2_ENABLE     ( 1u ) //PGxTRIGBレジスタコンペアイベントをADCトリガ1向け信号源として無効にする

#define PWM_DRV_PGEVT_ADTR1EN3_DISABLE    ( 0u ) //PGxTRIGCレジスタコンペアイベントをADCトリガ1向け信号源として無効にする
#define PWM_DRV_PGEVT_ADTR1EN3_ENABLE     ( 1u ) //PGxTRIGCレジスタコンペアイベントをADCトリガ1向け信号源として無効にする

#define PWM_DRV_PGEVT_PWMPCI_PWMGEN1		( 0u ) //
#define PWM_DRV_PGEVT_PWMPCI_PWMGEN2		( 1u ) //
#define PWM_DRV_PGEVT_PWMPCI_PWMGEN3		( 2u ) //
#define PWM_DRV_PGEVT_PWMPCI_PWMGEN4		( 3u ) //
#define PWM_DRV_PGEVT_PWMPCI_PWMGEN5		( 4u ) //
#define PWM_DRV_PGEVT_PWMPCI_PWMGEN6		( 5u ) //
#define PWM_DRV_PGEVT_PWMPCI_PWMGEN7		( 6u ) //
#define PWM_DRV_PGEVT_PWMPCI_PWMGEN8		( 7u ) //

#define PWM_DRV_PGEVT_ADTR1OFS_NO_OFFSET	( 0u )
#define PWM_DRV_PGEVT_ADTR1OFS_OFFSET1		( 1u )
#define PWM_DRV_PGEVT_ADTR1OFS_OFFSET2		( 2u )
#define PWM_DRV_PGEVT_ADTR1OFS_OFFSET3		( 3u )
#define PWM_DRV_PGEVT_ADTR1OFS_OFFSET4		( 4u )
#define PWM_DRV_PGEVT_ADTR1OFS_OFFSET5		( 5u )
#define PWM_DRV_PGEVT_ADTR1OFS_OFFSET6		( 6u )
#define PWM_DRV_PGEVT_ADTR1OFS_OFFSET7		( 7u )
#define PWM_DRV_PGEVT_ADTR1OFS_OFFSET8		( 8u )
#define PWM_DRV_PGEVT_ADTR1OFS_OFFSET9		( 9u )
#define PWM_DRV_PGEVT_ADTR1OFS_OFFSET10		( 10u )
#define PWM_DRV_PGEVT_ADTR1OFS_OFFSET11		( 11u )
#define PWM_DRV_PGEVT_ADTR1OFS_OFFSET12		( 12u )
#define PWM_DRV_PGEVT_ADTR1OFS_OFFSET13		( 13u )
#define PWM_DRV_PGEVT_ADTR1OFS_OFFSET14		( 14u )
#define PWM_DRV_PGEVT_ADTR1OFS_OFFSET15		( 15u )
#define PWM_DRV_PGEVT_ADTR1OFS_OFFSET16		( 16u )
#define PWM_DRV_PGEVT_ADTR1OFS_OFFSET17		( 17u )
#define PWM_DRV_PGEVT_ADTR1OFS_OFFSET18		( 18u )
#define PWM_DRV_PGEVT_ADTR1OFS_OFFSET19		( 19u )
#define PWM_DRV_PGEVT_ADTR1OFS_OFFSET20		( 20u )
#define PWM_DRV_PGEVT_ADTR1OFS_OFFSET21		( 21u )
#define PWM_DRV_PGEVT_ADTR1OFS_OFFSET22		( 22u )
#define PWM_DRV_PGEVT_ADTR1OFS_OFFSET23		( 23u )
#define PWM_DRV_PGEVT_ADTR1OFS_OFFSET24		( 24u )
#define PWM_DRV_PGEVT_ADTR1OFS_OFFSET25		( 25u )
#define PWM_DRV_PGEVT_ADTR1OFS_OFFSET26		( 26u )
#define PWM_DRV_PGEVT_ADTR1OFS_OFFSET27		( 27u )
#define PWM_DRV_PGEVT_ADTR1OFS_OFFSET28		( 28u )
#define PWM_DRV_PGEVT_ADTR1OFS_OFFSET29		( 29u )
#define PWM_DRV_PGEVT_ADTR1OFS_OFFSET30		( 30u )
#define PWM_DRV_PGEVT_ADTR1OFS_OFFSET31		( 31u )

#define PWM_DRV_PGEVT_UPDTRG_MANUAL       ( 0u ) //ユーザが手動でUPDREQビット(PGxSTAT<3>)をセットする必要がある
#define PWM_DRV_PGEVT_UPDTRG_PGXDC        ( 1u ) //PGxDCレジスタの書き込み時に自動的にUPDREQビットをセットする
#define PWM_DRV_PGEVT_UPDTRG_PGXPHASE     ( 2u ) //PGxPHASEレジスタの書き込み時に自動的にUPDREQビットをセットする
#define PWM_DRV_PGEVT_UPDTRG_PGXTRIGA     ( 3u ) //PGxTRIGAレジスタの書き込み時に自動的にUPDREQビットをセットする

#define PWM_DRV_PGEVT_PGTRGSEL_EOC       ( 0u ) //EOCイベントがPWMジェネレータトリガ
#define PWM_DRV_PGEVT_PGTRGSEL_PGXTRIGA  ( 1u ) //PGxTRIGAコンペアイベントがPWMジェネレータトリガ
#define PWM_DRV_PGEVT_PGTRGSEL_PGXTRIGB  ( 2u ) //PGxTRIGBコンペアイベントがPWMジェネレータトリガ
#define PWM_DRV_PGEVT_PGTRGSEL_PGXTRIGC  ( 3u ) //PGxTRIGCコンペアイベントがPWMジェネレータトリガ

#define PWM_DRV_PGEVT_FLTIEN_DISABLE     ( 0u ) //フォルト割り込み無効
#define PWM_DRV_PGEVT_FLTIEN_ENABLE      ( 1u ) //フォルト割り込み有効

#define PWM_DRV_PGEVT_CLIEN_DISABLE      ( 0u ) //電流制限割り込み無効
#define PWM_DRV_PGEVT_CLIEN_ENABLE       ( 1u ) //電流制限割り込み有効

#define PWM_DRV_PGEVT_FFIEN_DISABLE      ( 0u ) //フィードフォワード割り込み無効
#define PWM_DRV_PGEVT_FFIEN_ENABLE       ( 1u ) //フィードフォワード割り込み有効

#define PWM_DRV_PGEVT_SIEN_DISABLE       ( 0u ) //同期割り込み無効
#define PWM_DRV_PGEVT_SIEN_ENABLE        ( 1u ) //同期割り込み有効

#define PWM_DRV_PGEVT_IEVTSEL_EOC         ( 0u ) //EOC時にCPUに割り込む
#define PWM_DRV_PGEVT_IEVTSEL_TRIGA       ( 1u ) //TRIGAコンペアイベント時にCPUに割り込む
#define PWM_DRV_PGEVT_IEVTSEL_ADC1        ( 2u ) //ADCトリガ1イベント時にCPUに割り込む
#define PWM_DRV_PGEVT_IEVTSEL_TB_DISABLE  ( 3u ) //タイムベース割り込みを無効にする

#define PWM_DRV_PGEVT_ADTR2EN1_DISABLE    ( 0u ) //PGxTRIGAレジスタコンペアイベントをADCトリガ2向け信号源として無効にする
#define PWM_DRV_PGEVT_ADTR2EN1_ENABLE     ( 1u ) //PGxTRIGAレジスタコンペアイベントをADCトリガ2向け信号源として無効にする

#define PWM_DRV_PGEVT_ADTR2EN2_DISABLE    ( 0u ) //PGxTRIGBレジスタコンペアイベントをADCトリガ2向け信号源として無効にする
#define PWM_DRV_PGEVT_ADTR2EN2_ENABLE     ( 1u ) //PGxTRIGBレジスタコンペアイベントをADCトリガ2向け信号源として無効にする

#define PWM_DRV_PGEVT_ADTR2EN3_DISABLE    ( 0u ) //PGxTRIGCレジスタコンペアイベントをADCトリガ2向け信号源として無効にする
#define PWM_DRV_PGEVT_ADTR2EN3_ENABLE     ( 1u ) //PGxTRIGCレジスタコンペアイベントをADCトリガ2向け信号源として無効にする


/*----------------------------------------------------------------------------*/
/*PGxyPCI*/
/*----------------------------------------------------------------------------*/

#define PWM_DRV_PGPCI_TSYNCDIS_PWM_EOC   ( 0u )
#define PWM_DRV_PGPCI_TSYNCDIS_PWM_IMMED ( 1u )

#define PWM_DRV_PGPCI_TERM_MANUAL        ( 0u )
#define PWM_DRV_PGPCI_TERM_AUTO          ( 1u )
#define PWM_DRV_PGPCI_TERM_TRIGA         ( 2u )
#define PWM_DRV_PGPCI_TERM_TRIGB         ( 3u )
#define PWM_DRV_PGPCI_TERM_TRIGC         ( 4u )
#define PWM_DRV_PGPCI_TERM_PCI1          ( 5u )
#define PWM_DRV_PGPCI_TERM_PCI8          ( 6u )
#define PWM_DRV_PGPCI_TERM_PCI9          ( 7u )

#define PWM_DRV_PGPCI_AQPS_NOT_INVERT    ( 0u )
#define PWM_DRV_PGPCI_AQPS_INVERT        ( 1u )

#define PWM_DRV_PGPCI_AQSS_1			 ( 0u )
#define PWM_DRV_PGPCI_AQSS_DUTY_ACTIVE   ( 1u )
#define PWM_DRV_PGPCI_AQSS_LEB_ACTIVE    ( 2u )
#define PWM_DRV_PGPCI_AQSS_PWM_GEN_TRIG  ( 3u )
#define PWM_DRV_PGPCI_AQSS_PCI1          ( 4u )
#define PWM_DRV_PGPCI_AQSS_PCI8          ( 5u )
#define PWM_DRV_PGPCI_AQSS_PCI9          ( 6u )
#define PWM_DRV_PGPCI_AQSS_SWPCI         ( 7u )

#define PWM_DRV_PGPCI_PSYNC_NOT_PWM_EOC  ( 0u )
#define PWM_DRV_PGPCI_PSYNC_PWM_EOC      ( 1u )

#define PWM_DRV_PGPCI_PPS_NOT_INVERT    ( 0u )
#define PWM_DRV_PGPCI_PPS_INVERT        ( 1u )


#define PWM_DRV_PGPCI_PSS_0              ( 0u )
#define PWM_DRV_PGPCI_PSS_PWMPCI_MUX     ( 1u )
#define PWM_DRV_PGPCI_PSS_COMBO_TRIGA    ( 2u )
#define PWM_DRV_PGPCI_PSS_COMBO_TRIGB    ( 3u )
#define PWM_DRV_PGPCI_PSS_PCI8R          ( 8u )
#define PWM_DRV_PGPCI_PSS_PCI9R          ( 8u )
#define PWM_DRV_PGPCI_PSS_PCI10R         ( 10u )
#define PWM_DRV_PGPCI_PSS_PCI11R         ( 11u )
#define PWM_DRV_PGPCI_PSS_PCI12R         ( 12u )
#define PWM_DRV_PGPCI_PSS_PCI13R         ( 13u )
#define PWM_DRV_PGPCI_PSS_PCI14R         ( 14u )
#define PWM_DRV_PGPCI_PSS_PCI15R         ( 15u )
#define PWM_DRV_PGPCI_PSS_PCI16R         ( 16u )
#define PWM_DRV_PGPCI_PSS_PCI17R         ( 17u )
#define PWM_DRV_PGPCI_PSS_PCI18R         ( 18u )
#define PWM_DRV_PGPCI_PSS_PCI19R         ( 19u )
#define PWM_DRV_PGPCI_PSS_PCI20R         ( 20u )
#define PWM_DRV_PGPCI_PSS_PCI21R         ( 21u )
#define PWM_DRV_PGPCI_PSS_PCI22R         ( 22u )
#define PWM_DRV_PGPCI_PSS_PWMSEVENT_C    ( 23u )
#define PWM_DRV_PGPCI_PSS_PWMSEVENT_D    ( 24u )
#define PWM_DRV_PGPCI_PSS_PWMSEVENT_E    ( 25u )
#define PWM_DRV_PGPCI_PSS_PWMSEVENT_F    ( 26u )
#define PWM_DRV_PGPCI_PSS_MCOMP1         ( 27u )
#define PWM_DRV_PGPCI_PSS_SCOMP1         ( 28u )
#define PWM_DRV_PGPCI_PSS_SCOMP2         ( 29u )
#define PWM_DRV_PGPCI_PSS_SCOMP3         ( 30u )
#define PWM_DRV_PGPCI_PSS_CLC1           ( 31u )

#define PWM_DRV_PGPCI_BPEN_DISABLE       ( 0u )
#define PWM_DRV_PGPCI_BPEN_ENABLE        ( 1u )

#define PWM_DRV_PGPCI_BPSEL_PWM1         ( 0u )
#define PWM_DRV_PGPCI_BPSEL_PWM2         ( 1u )
#define PWM_DRV_PGPCI_BPSEL_PWM3         ( 2u )
#define PWM_DRV_PGPCI_BPSEL_PWM4         ( 3u )
#define PWM_DRV_PGPCI_BPSEL_PWM5         ( 4u )
#define PWM_DRV_PGPCI_BPSEL_PWM6         ( 5u )
#define PWM_DRV_PGPCI_BPSEL_PWM7         ( 6u )
#define PWM_DRV_PGPCI_BPSEL_PWM8         ( 7u )

#define PWM_DRV_PGPCI_ACP_LEVEL         ( 0u )
#define PWM_DRV_PGPCI_ACP_RISE_EDGE     ( 1u )
#define PWM_DRV_PGPCI_ACP_ANY_EDGE      ( 2u )
#define PWM_DRV_PGPCI_ACP_LATCH         ( 3u )
#define PWM_DRV_PGPCI_ACP_LATCH_RISE_EDGE     ( 4u )
#define PWM_DRV_PGPCI_ACP_LATCH_ANY_EDGE      ( 5u )

#define PWM_DRV_PGPCI_SWPCI_DISABLE    ( 0u )
#define PWM_DRV_PGPCI_SWPCI_ENABLE     ( 1u )

#define PWM_DRV_PGPCI_SWPCIM_PCI_ACCPT      ( 0u )
#define PWM_DRV_PGPCI_SWPCIM_ACCPT_QUAL     ( 1u )
#define PWM_DRV_PGPCI_SWPCIM_TERM_QUAL      ( 2u )

#define PWM_DRV_PGPCI_LATMODE_SET_DOMI    ( 0u )
#define PWM_DRV_PGPCI_LATMODE_RESET_DOMI  ( 1u )

#define PWM_DRV_PGPCI_TQPS_NOT_INVERT    ( 0u )
#define PWM_DRV_PGPCI_TQPS_INVERT        ( 1u )

#define PWM_DRV_PGPCI_TQSS_1			 ( 0u )
#define PWM_DRV_PGPCI_TQSS_DUTY_ACTIVE   ( 1u )
#define PWM_DRV_PGPCI_TQSS_LEB_ACTIVE    ( 2u )
#define PWM_DRV_PGPCI_TQSS_PWM_GEN_TRIG  ( 3u )
#define PWM_DRV_PGPCI_TQSS_PCI1          ( 4u )
#define PWM_DRV_PGPCI_TQSS_PCI8          ( 5u )
#define PWM_DRV_PGPCI_TQSS_PCI9          ( 6u )
#define PWM_DRV_PGPCI_TQSS_SWPCI         ( 7u )

#define PWM_DRV_PGPCI_TERMPS_NOT_INVERT    ( 0u )
#define PWM_DRV_PGPCI_TERMPS_INVERT        ( 1u )

#define PWM_DRV_PGLEB_DISABLE		      ( 0u )
#define PWM_DRV_PGLEB_ENABLE		      ( 1u )

#define PWM_DRV_PGTRIG_FIRST		      ( 0u )
#define PWM_DRV_PGTRIG_SECOND		      ( 1u )


/*----------------------------------------------------------------------------*/
/*プロトタイプ宣言*/
/*----------------------------------------------------------------------------*/
void vdg_PWMCommon_Set_Register(void);
void vdg_PWM1_Set_Register(void);
void vdg_PWM2_Set_Register(void);
void vdg_PWM3_Set_Register(void);
void vdg_PWM4_Set_Register(void);
void vdg_PWM5_Set_Register(void);
void vdg_PWM6_Set_Register(void);
void vdg_PWM7_Set_Register(void);
void vdg_PWM8_Set_Register(void);
void vdg_PWM_Set_Register(void);
#endif	/* PWM_DRIVER_H */

