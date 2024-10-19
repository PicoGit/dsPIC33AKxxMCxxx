
#ifndef REMAPPIN_DRIVER_H
#define	REMAPPIN_DRIVER_H

/*----------------------------------------------------------------------------*/
/*インクルードファイル*/
/*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*/
/*定数定義*/
/*----------------------------------------------------------------------------*/

#define RPI_NO_USE  ( 0U )
#define	RPI_RP1R	( 1U )	//RA0
#define	RPI_RP2R	( 2U )	//RA1
#define	RPI_RP3R	( 3U )	//RA2
#define	RPI_RP4R	( 4U )	//RA3
#define	RPI_RP5R	( 5U )	//RA4
#define	RPI_RP6R	( 6U )	//RA5
#define	RPI_RP7R	( 7U )	//RA6
#define	RPI_RP8R	( 8U )	//RA7
#define	RPI_RP9R	( 9U )	//RA8
#define	RPI_RP10R	( 10U )	//RA9
#define	RPI_RP11R	( 11U )	//RA10
#define	RPI_RP12R	( 12U )	//RA11
#define	RPI_RP13R	( 13U )	
#define	RPI_RP14R	( 14U )	
#define	RPI_RP15R	( 15U )	
#define	RPI_RP16R	( 16U )	
#define	RPI_RP17R	( 17U )	//RB0
#define	RPI_RP18R	( 18U )	//RB1
#define	RPI_RP19R	( 19U )	//RB2
#define	RPI_RP20R	( 20U )	//RB3
#define	RPI_RP21R	( 21U )	//RB4
#define	RPI_RP22R	( 22U )	//RB5
#define	RPI_RP23R	( 23U )	//RB6
#define	RPI_RP24R	( 24U )	//RB7
#define	RPI_RP25R	( 25U )	//RB8
#define	RPI_RP26R	( 26U )	//RB9
#define	RPI_RP27R	( 27U )	//RB10
#define	RPI_RP28R	( 28U )	//RB11
#define	RPI_RP29R	( 29U )	
#define	RPI_RP30R	( 30U )	
#define	RPI_RP31R	( 31U )	
#define	RPI_RP32R	( 32U )	
#define	RPI_RP33R	( 33U )	//RC0
#define	RPI_RP34R	( 34U )	//RC1
#define	RPI_RP35R	( 35U )	//RC2
#define	RPI_RP36R	( 36U )	//RC3
#define	RPI_RP37R	( 37U )	//RC4
#define	RPI_RP38R	( 38U )	//RC5
#define	RPI_RP39R	( 39U )	//RC6
#define	RPI_RP40R	( 40U )	//RC7
#define	RPI_RP41R	( 41U )	//RC8
#define	RPI_RP42R	( 42U )	//RC9
#define	RPI_RP43R	( 43U )	//RC10
#define	RPI_RP44R	( 44U )	//RC11
#define	RPI_RP45R	( 45U )	
#define	RPI_RP46R	( 46U )	
#define	RPI_RP47R	( 47U )	
#define	RPI_RP48R	( 48U )	
#define	RPI_RP49R	( 49U )	//RD0
#define	RPI_RP50R	( 50U )	//RD1
#define	RPI_RP51R	( 51U )	//RD2
#define	RPI_RP52R	( 52U )	//RD3
#define	RPI_RP53R	( 53U )	//RD4
#define	RPI_RP54R	( 54U )	//RD5
#define	RPI_RP55R	( 55U )	//RD6
#define	RPI_RP56R	( 56U )	//RD7
#define	RPI_RP57R	( 57U )	//RD8
#define	RPI_RP58R	( 58U )	//RD9
#define	RPI_RP59R	( 59U )	//RD10
#define	RPI_RP60R	( 60U )	//RD11
#define	RPI_RP61R	( 61U )	//RD12
#define	RPI_RP161R	( 161U )	//CMP1
#define	RPI_RP162R	( 162U )	//CMP2
#define	RPI_RP163R	( 163U )	//CMP3
#define	RPI_RP164R	( 164U )	
#define	RPI_RP165R	( 165U )	
#define	RPI_RP166R	( 166U )	
#define	RPI_RP167R	( 167U )	//PTG TRIG[26]
#define	RPI_RP168R	( 168U )	//PTG TRIG[27]
#define	RPI_RP169R	( 169U )	//PEVTD
#define	RPI_RP170R	( 170U )	//PEVTE
#define	RPI_RP171R	( 171U )	//PEVTF
#define	RPI_RP172R	( 172U )	//DAC1 pwm_req_on
#define	RPI_RP173R	( 173U )	//DAC1 pwm_req_off
#define	RPI_RP174R	( 174U )	//DAC2 pwm_req_on
#define	RPI_RP175R	( 175U )	//DAC2 pwm_req_off
#define	RPI_RP176R	( 176U )	//DAC3 pwm_req_on
#define	RPI_RP177R	( 177U )	//DAC3 pwm_req_off
#define	RPI_RP178R	( 178U )	//RPV0
#define	RPI_RP179R	( 179U )	//RPV1
#define	RPI_RP180R	( 180U )	//RPV2
#define	RPI_RP181R	( 181U )	//RPV3
#define	RPI_RP182R	( 182U )	//RPV4
#define	RPI_RP183R	( 183U )	//RPV5
#define	RPI_RP184R	( 184U )	//RPV6
#define	RPI_RP185R	( 185U )	//RPV7
#define	RPI_RP186R	( 186U )	//RPV8
#define	RPI_RP187R	( 187U )	//RPV9
#define	RPI_RP188R	( 188U )	//RPV10
#define	RPI_RP189R	( 189U )	//RPV11
#define	RPI_RP190R	( 190U )	//RPV12
#define	RPI_RP191R	( 191U )	//RPV13
#define	RPI_RP192R	( 192U )	//RPV14
#define	RPI_RP193R	( 193U )	//RPV15

    
#define RPO_DEFAULT_PORT ( 0U )	//	RPn tied to Default pin
#define RPO_PWM1H		( 1U )	//	RPn tied to PWM1H Output    
#define RPO_PWM1L		( 2U )	//	RPn tied to PWM1L Output    
#define RPO_PWM2H		( 3U )	//	RPn tied to PWM2H Output    
#define RPO_PWM2L		( 4U )	//	RPn tied to PWM2L Output    
#define RPO_PWM3H		( 5U )	//	RPn tied to PWM3H Output    
#define RPO_PWM3L		( 6U )	//	RPn tied to PWM3L Output    
#define RPO_PWM4H		( 7U )	//	RPn tied to PWM4H Output    
#define RPO_PWM4L		( 8U )	//	RPn tied to PWM4L Output    
#define RPO_U1TX		( 9U )	//	RPn tied to UART1 Transmit    
#define RPO_U1RTS		( 10U )	//	RPn tied to UART1 Request-to-Send    
#define RPO_U2TX		( 11U )	//	RPn tied to UART2 Transmit    
#define RPO_U2RTS		( 12U )	//	RPn tied to UART2 Request-to-Send    
#define RPO_SDO1		( 13U )	//	RPn tied to SPI1 Data Output   
#define RPO_SCK1OUT		( 14U )	//	RPn tied to SPI1 Clock Output   
#define RPO_SS1OUT		( 15U )	//	RPn tied to SPI1 Client Select   
#define RPO_SDO2		( 16U )	//	RPn tied to SPI2 Data Output   
#define RPO_SCK2OUT		( 17U )	//	RPn tied to SPI2 Clock Output   
#define RPO_SS2OUT		( 18U )	//	RPn tied to SPI2 Client Select   
#define RPO_SDO3		( 19U )	//	RPn tied to SPI3 Data Output   
#define RPO_SCK3OUT		( 20U )	//	RPn tied to SPI3 Clock Output   
#define RPO_SS3OUT		( 21U )	//	RPn tied to SPI3 Client Select   
#define RPO_REFO1		( 22U )	//	RPn tied to Reference Clock 1 Output  
#define RPO_REFO2		( 23U )	//	RPn tied to Reference Clock 2 Output  
#define RPO_OCM1		( 24U )	//	RPn tied to CCP1 Output Compare Event  
#define RPO_OCM2		( 25U )	//	RPn tied to CCP2 Output Compare Event  
#define RPO_OCM3		( 26U )	//	RPn tied to CCP3 Output Compare Event  
#define RPO_OCM4		( 27U )	//	RPn tied to CCP4 Enable Output Compare Event 
#define RPO_CMP1		( 32U )	//	RPn tied to Comparator 1 Output   
#define RPO_CMP2		( 33U )	//	RPn tied to Comparator 2 Output   
#define RPO_CMP3		( 34U )	//	RPn tied to Comparator 2 Output   
#define RPO_U3TX		( 36U )	//	RPn tied to UART3 Transmit    
#define RPO_U3RTS		( 37U )	//	RPn tied to UART Request-to-Send    
#define RPO_PEVTA		( 43U )	//	RPn tied to PWM Event A Output  
#define RPO_PEVTB		( 44U )	//	RPn tied to PWM Event B output  
#define RPO_QEICMP1		( 45U )	//	RPn tied to QEI Comparator 1 Output  
#define RPO_CLC1OUT		( 47U )	//	RPn tied to CLC1 Output    
#define RPO_CLC2OUT		( 48U )	//	RPn tied to CLC2 Output    
#define RPO_PEVTC		( 51U )	//	RPn tied to PWM Event C Output  
#define RPO_PEVTD		( 52U )	//	RPn tied to PWM Event D Output  
#define RPO_PEVTE		( 53U )	//	RPn tied to PWM Event E Output  
#define RPO_PEVTF		( 54U )	//	RPn tied to PWM Event F Output  
#define RPO_PTG_TRIG_24	( 55U )	//	 55 RPn tied to PTG Trigger 24 Output
#define RPO_PTG_TRIG_25	( 56U )	//	 56 RPn tied to PTG Trigger 25 Output
#define RPO_SENT1OUT	( 57U )	//	RPn tied to SENT1 Output    
#define RPO_SENT2OUT	( 58U )	//	RPn tied to SENT2 Output    
#define RPO_BISS1MO		( 63U )	//	RPn tied to BiSS Output    
#define RPO_BISS1MA		( 64U )	//	RPn tied to BiSS CLK    
#define RPO_CLC3OUT		( 65U )	//	RPn tied to CLC3 Output    
#define RPO_CLC4OUT		( 66U )	//	RPn tied to CLC4 Output    
#define RPO_U1DTRn		( 67U )	//	RPn tied to UART1 Data Terminal Ready Output 
#define RPO_U2DTRn		( 68U )	//	RPn tied to UART2 Data Terminal Ready Output 
#define RPO_U3DTRn		( 69U )	//	RPn tied to UART3 Data Terminal Ready Output 

/*----------------------------------------------------------------------------*/
/*変数定義*/
/*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*/
/*プロトタイプ宣言*/
/*----------------------------------------------------------------------------*/
void vdg_RemapPin_Set_All_Register(void);
void vdg_RemapPin_Set_Input_Register(void);
void vdg_RemapPin_Set_Output_Register(void);

#endif	/* REMAPPIN_DRIVER_H */

