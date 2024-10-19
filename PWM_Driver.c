/*----------------------------------------------------------------------------*/
/**
* @file		PWM_Driver.c
* @brief	高速PWMに関するドライバ関数
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
#include "pmd_user.h"
#include "pwm_user.h"
/*----------------------------------------------------------------------------*/
/*定数定義*/
/*----------------------------------------------------------------------------*/
#define DEF_BITNAME
/*----------------------------------------------------------------------------*/
/*変数定義*/
/*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*/
/*プロトタイプ宣言*/
/*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*/
/*
* @fn        vdg_PWMCommon_Set_Register(void)
* @brief        PWMの共通レジスタを初期化します
* @param
* @return
* @detail */
/*----------------------------------------------------------------------------*/
void vdg_PWMCommon_Set_Register(void)
{
#if ( PMD_PWMMD == PMD_MODULE_ENABLE )	
	/*-----------------------------------------------------------------------*/
	/* PCLKCONレジスタ */
	/*-----------------------------------------------------------------------*/
		PCLKCON = (PWM_USER_PCLKCON_MCLKSEL << 0u) |
				(PWM_USER_PCLKCON_DIVSEL << 4u) |
				(PWM_USER_PCLKCON_LOCK << 8u);
		#ifdef DEF_BITNAME
			PCLKCONbits.MCLKSEL = PWM_USER_PCLKCON_MCLKSEL;
			PCLKCONbits.DIVSEL = PWM_USER_PCLKCON_DIVSEL;
			PCLKCONbits.LOCK = PWM_USER_PCLKCON_LOCK;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* FSCLレジスタ */
	/*-----------------------------------------------------------------------*/
		FSCL = PWM_USER_FSCL;
	/*-----------------------------------------------------------------------*/
	/* FSMINPERレジスタ */
	/*-----------------------------------------------------------------------*/
		FSMINPER = PWM_USER_FSMINPER; 
	/*-----------------------------------------------------------------------*/
	/* MPHASEレジスタ */
	/*-----------------------------------------------------------------------*/
		MPHASE = PWM_USER_MPHASE;
	/*-----------------------------------------------------------------------*/
	/* MDCレジスタ */
	/*-----------------------------------------------------------------------*/
		MDC = PWM_USER_MDC;
	/*-----------------------------------------------------------------------*/
	/* MPERレジスタ */
	/*-----------------------------------------------------------------------*/
		MPER = PWM_USER_MPER;
	/*-----------------------------------------------------------------------*/
	/* LFSRレジスタ */
	/*-----------------------------------------------------------------------*/
		LFSR = PWM_USER_LFSR;
	/*-----------------------------------------------------------------------*/
	/* CMBTRIGレジスタ */
	/*-----------------------------------------------------------------------*/
		CMBTRIG = ( PWM_USER_CMBTRIG_CTA1EN << 0u) |
			( PWM_USER_CMBTRIG_CTA2EN << 1u) |
			( PWM_USER_CMBTRIG_CTA3EN << 2u) |
			( PWM_USER_CMBTRIG_CTA4EN << 3u) |
			( PWM_USER_CMBTRIG_CTA5EN << 4u) |
			( PWM_USER_CMBTRIG_CTA6EN << 5u) |
			( PWM_USER_CMBTRIG_CTA7EN << 6u) |
			( PWM_USER_CMBTRIG_CTA8EN << 7u) |
			( PWM_USER_CMBTRIG_CTB1EN << 16u) |
			( PWM_USER_CMBTRIG_CTB2EN << 17u) |
			( PWM_USER_CMBTRIG_CTB3EN << 18u) |
			( PWM_USER_CMBTRIG_CTB4EN << 19u) |
			( PWM_USER_CMBTRIG_CTB5EN << 20u) |
			( PWM_USER_CMBTRIG_CTB6EN << 21u) |
			( PWM_USER_CMBTRIG_CTB7EN << 22u) |
			( PWM_USER_CMBTRIG_CTB8EN << 23u) ;
		
		
		#ifdef DEF_BITNAME
			CMBTRIGbits.CTA1EN = PWM_USER_CMBTRIG_CTA1EN;
			CMBTRIGbits.CTA2EN = PWM_USER_CMBTRIG_CTA2EN;
			CMBTRIGbits.CTA3EN = PWM_USER_CMBTRIG_CTA3EN;
			CMBTRIGbits.CTA4EN = PWM_USER_CMBTRIG_CTA4EN;
			CMBTRIGbits.CTA5EN = PWM_USER_CMBTRIG_CTA5EN;
			CMBTRIGbits.CTA6EN = PWM_USER_CMBTRIG_CTA6EN;
			CMBTRIGbits.CTA7EN = PWM_USER_CMBTRIG_CTA7EN;
			CMBTRIGbits.CTA8EN = PWM_USER_CMBTRIG_CTA8EN;
			CMBTRIGbits.CTB1EN = PWM_USER_CMBTRIG_CTB1EN;
			CMBTRIGbits.CTB2EN = PWM_USER_CMBTRIG_CTB2EN;
			CMBTRIGbits.CTB3EN = PWM_USER_CMBTRIG_CTB3EN;
			CMBTRIGbits.CTB4EN = PWM_USER_CMBTRIG_CTB4EN;
			CMBTRIGbits.CTB5EN = PWM_USER_CMBTRIG_CTB5EN;
			CMBTRIGbits.CTB6EN = PWM_USER_CMBTRIG_CTB6EN;
			CMBTRIGbits.CTB7EN = PWM_USER_CMBTRIG_CTB7EN;
			CMBTRIGbits.CTB8EN = PWM_USER_CMBTRIG_CTB8EN;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* LOGCONAレジスタ */
	/*-----------------------------------------------------------------------*/
		LOGCONA = ( PWM_USER_LOGCONA_PWMLFAD << 0u) |
			( PWM_USER_LOGCONA_PWMLFA << 4u) |
			( PWM_USER_LOGCONA_S2APOL << 6u) |
			( PWM_USER_LOGCONA_S1APOL << 7u) |
			( PWM_USER_LOGCONA_PWMS2A << 8u) |
			( PWM_USER_LOGCONA_PWMS1A << 12u) ;
		#ifdef DEF_BITNAME
			LOGCONAbits.PWMLFAD = PWM_USER_LOGCONA_PWMLFAD;
			LOGCONAbits.PWMLFA = PWM_USER_LOGCONA_PWMLFA;
			LOGCONAbits.S2APOL = PWM_USER_LOGCONA_S2APOL;
			LOGCONAbits.S1APOL = PWM_USER_LOGCONA_S1APOL;
			LOGCONAbits.PWMS2A = PWM_USER_LOGCONA_PWMS2A;
			LOGCONAbits.PWMS1A = PWM_USER_LOGCONA_PWMS1A;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* LOGCONBレジスタ */
	/*-----------------------------------------------------------------------*/
		LOGCONB = ( PWM_USER_LOGCONB_PWMLFBD << 0u) |
			( PWM_USER_LOGCONB_PWMLFB << 4u) |
			( PWM_USER_LOGCONB_S2BPOL << 6u) |
			( PWM_USER_LOGCONB_S1BPOL << 7u) |
			( PWM_USER_LOGCONB_PWMS2B << 8u) |
			( PWM_USER_LOGCONB_PWMS1B << 12u) ;
		#ifdef DEF_BITNAME
			LOGCONBbits.PWMLFBD = PWM_USER_LOGCONB_PWMLFBD;
			LOGCONBbits.PWMLFB = PWM_USER_LOGCONB_PWMLFB;
			LOGCONBbits.S2BPOL = PWM_USER_LOGCONB_S2BPOL;
			LOGCONBbits.S1BPOL = PWM_USER_LOGCONB_S1BPOL;
			LOGCONBbits.PWMS2B = PWM_USER_LOGCONB_PWMS2B;
			LOGCONBbits.PWMS1B = PWM_USER_LOGCONB_PWMS1B;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* LOGCONCレジスタ */
	/*-----------------------------------------------------------------------*/
		LOGCONC = ( PWM_USER_LOGCONC_PWMLFCD << 0u) |
			( PWM_USER_LOGCONC_PWMLFC << 4u) |
			( PWM_USER_LOGCONC_S2CPOL << 6u) |
			( PWM_USER_LOGCONC_S1CPOL << 7u) |
			( PWM_USER_LOGCONC_PWMS2C << 8u) |
			( PWM_USER_LOGCONC_PWMS1C << 12u) ;
		#ifdef DEF_BITNAME
			LOGCONCbits.PWMLFCD = PWM_USER_LOGCONC_PWMLFCD;
			LOGCONCbits.PWMLFC = PWM_USER_LOGCONC_PWMLFC;
			LOGCONCbits.S2CPOL = PWM_USER_LOGCONC_S2CPOL;
			LOGCONCbits.S1CPOL = PWM_USER_LOGCONC_S1CPOL;
			LOGCONCbits.PWMS2C = PWM_USER_LOGCONC_PWMS2C;
			LOGCONCbits.PWMS1C = PWM_USER_LOGCONC_PWMS1C;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* LOGCONDレジスタ */
	/*-----------------------------------------------------------------------*/
		LOGCOND = ( PWM_USER_LOGCOND_PWMLFDD << 0u) |
			( PWM_USER_LOGCOND_PWMLFD << 4u) |
			( PWM_USER_LOGCOND_S2DPOL << 6u) |
			( PWM_USER_LOGCOND_S1DPOL << 7u) |
			( PWM_USER_LOGCOND_PWMS2D << 8u) |
			( PWM_USER_LOGCOND_PWMS1D << 12u) ;
		#ifdef DEF_BITNAME
			LOGCONDbits.PWMLFDD = PWM_USER_LOGCOND_PWMLFDD;
			LOGCONDbits.PWMLFD = PWM_USER_LOGCOND_PWMLFD;
			LOGCONDbits.S2DPOL = PWM_USER_LOGCOND_S2DPOL;
			LOGCONDbits.S1DPOL = PWM_USER_LOGCOND_S1DPOL;
			LOGCONDbits.PWMS2D = PWM_USER_LOGCOND_PWMS2D;
			LOGCONDbits.PWMS1D = PWM_USER_LOGCOND_PWMS1D;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* LOGCONEレジスタ */
	/*-----------------------------------------------------------------------*/
		LOGCONE = ( PWM_USER_LOGCONE_PWMLFED << 0u) |
			( PWM_USER_LOGCONE_PWMLFE << 4u) |
			( PWM_USER_LOGCONE_S2EPOL << 6u) |
			( PWM_USER_LOGCONE_S1EPOL << 7u) |
			( PWM_USER_LOGCONE_PWMS2E << 8u) |
			( PWM_USER_LOGCONE_PWMS1E << 12u) ;
		#ifdef DEF_BITNAME
			LOGCONEbits.PWMLFED = PWM_USER_LOGCONE_PWMLFED;
			LOGCONEbits.PWMLFE = PWM_USER_LOGCONE_PWMLFE;
			LOGCONEbits.S2EPOL = PWM_USER_LOGCONE_S2EPOL;
			LOGCONEbits.S1EPOL = PWM_USER_LOGCONE_S1EPOL;
			LOGCONEbits.PWMS2E = PWM_USER_LOGCONE_PWMS2E;
			LOGCONEbits.PWMS1E = PWM_USER_LOGCONE_PWMS1E;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* LOGCONFレジスタ */
	/*-----------------------------------------------------------------------*/
		LOGCONF = ( PWM_USER_LOGCONF_PWMLFFD << 0u) |
			( PWM_USER_LOGCONF_PWMLFF << 4u) |
			( PWM_USER_LOGCONF_S2FPOL << 6u) |
			( PWM_USER_LOGCONF_S1FPOL << 7u) |
			( PWM_USER_LOGCONF_PWMS2F << 8u) |
			( PWM_USER_LOGCONF_PWMS1F << 12u) ;
		#ifdef DEF_BITNAME
			LOGCONFbits.PWMLFFD = PWM_USER_LOGCONF_PWMLFFD;
			LOGCONFbits.PWMLFF = PWM_USER_LOGCONF_PWMLFF;
			LOGCONFbits.S2FPOL = PWM_USER_LOGCONF_S2FPOL;
			LOGCONFbits.S1FPOL = PWM_USER_LOGCONF_S1FPOL;
			LOGCONFbits.PWMS2F = PWM_USER_LOGCONF_PWMS2F;
			LOGCONFbits.PWMS1F = PWM_USER_LOGCONF_PWMS1F;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* PWMEVTAレジスタ */
	/*-----------------------------------------------------------------------*/
		PWMEVTA = ( PWM_USER_PWMEVTA_EVTAPGS << 0u) |
			( PWM_USER_PWMEVTA_EVTASEL << 4u) |
			( PWM_USER_PWMEVTA_EVTASYNC << 12u) |
			( PWM_USER_PWMEVTA_EVTASTRD << 13u) |
			( PWM_USER_PWMEVTA_EVTAPOL << 14u) |
			( PWM_USER_PWMEVTA_EVTAOEN << 15u) ;
		#ifdef DEF_BITNAME
			PWMEVTAbits.EVTAPGS = PWM_USER_PWMEVTA_EVTAPGS;
			PWMEVTAbits.EVTASEL = PWM_USER_PWMEVTA_EVTASEL;
			PWMEVTAbits.EVTASYNC = PWM_USER_PWMEVTA_EVTASYNC;
			PWMEVTAbits.EVTASTRD = PWM_USER_PWMEVTA_EVTASTRD;
			PWMEVTAbits.EVTAPOL = PWM_USER_PWMEVTA_EVTAPOL;
			PWMEVTAbits.EVTAOEN = PWM_USER_PWMEVTA_EVTAOEN;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* PWMEVTBレジスタ */
	/*-----------------------------------------------------------------------*/
		PWMEVTB = ( PWM_USER_PWMEVTB_EVTBPGS << 0u) |
			( PWM_USER_PWMEVTB_EVTBSEL << 4u) |
			( PWM_USER_PWMEVTB_EVTBSYNC << 12u) |
			( PWM_USER_PWMEVTB_EVTBSTRD << 13u) |
			( PWM_USER_PWMEVTB_EVTBPOL << 14u) |
			( PWM_USER_PWMEVTB_EVTBOEN << 15u) ;
		#ifdef DEF_BITNAME
			PWMEVTBbits.EVTBPGS = PWM_USER_PWMEVTB_EVTBPGS;
			PWMEVTBbits.EVTBSEL = PWM_USER_PWMEVTB_EVTBSEL;
			PWMEVTBbits.EVTBSYNC = PWM_USER_PWMEVTB_EVTBSYNC;
			PWMEVTBbits.EVTBSTRD = PWM_USER_PWMEVTB_EVTBSTRD;
			PWMEVTBbits.EVTBPOL = PWM_USER_PWMEVTB_EVTBPOL;
			PWMEVTBbits.EVTBOEN = PWM_USER_PWMEVTB_EVTBOEN;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* PWMEVTCレジスタ */
	/*-----------------------------------------------------------------------*/
		PWMEVTC = ( PWM_USER_PWMEVTC_EVTCPGS << 0u) |
			( PWM_USER_PWMEVTC_EVTCSEL << 4u) |
			( PWM_USER_PWMEVTC_EVTCSYNC << 12u) |
			( PWM_USER_PWMEVTC_EVTCSTRD << 13u) |
			( PWM_USER_PWMEVTC_EVTCPOL << 14u) |
			( PWM_USER_PWMEVTC_EVTCOEN << 15u) ;
		#ifdef DEF_BITNAME
			PWMEVTCbits.EVTCPGS = PWM_USER_PWMEVTC_EVTCPGS;
			PWMEVTCbits.EVTCSEL = PWM_USER_PWMEVTC_EVTCSEL;
			PWMEVTCbits.EVTCSYNC = PWM_USER_PWMEVTC_EVTCSYNC;
			PWMEVTCbits.EVTCSTRD = PWM_USER_PWMEVTC_EVTCSTRD;
			PWMEVTCbits.EVTCPOL = PWM_USER_PWMEVTC_EVTCPOL;
			PWMEVTCbits.EVTCOEN = PWM_USER_PWMEVTC_EVTCOEN;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* PWMEVTDレジスタ */
	/*-----------------------------------------------------------------------*/
		PWMEVTD = ( PWM_USER_PWMEVTD_EVTDPGS << 0u) |
			( PWM_USER_PWMEVTD_EVTDSEL << 4u) |
			( PWM_USER_PWMEVTD_EVTDSYNC << 12u) |
			( PWM_USER_PWMEVTD_EVTDSTRD << 13u) |
			( PWM_USER_PWMEVTD_EVTDPOL << 14u) |
			( PWM_USER_PWMEVTD_EVTDOEN << 15u) ;
		#ifdef DEF_BITNAME
			PWMEVTDbits.EVTDPGS = PWM_USER_PWMEVTD_EVTDPGS;
			PWMEVTDbits.EVTDSEL = PWM_USER_PWMEVTD_EVTDSEL;
			PWMEVTDbits.EVTDSYNC = PWM_USER_PWMEVTD_EVTDSYNC;
			PWMEVTDbits.EVTDSTRD = PWM_USER_PWMEVTD_EVTDSTRD;
			PWMEVTDbits.EVTDPOL = PWM_USER_PWMEVTD_EVTDPOL;
			PWMEVTDbits.EVTDOEN = PWM_USER_PWMEVTD_EVTDOEN;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* PWMEVTEレジスタ */
	/*-----------------------------------------------------------------------*/
		PWMEVTE = ( PWM_USER_PWMEVTE_EVTEPGS << 0u) |
			( PWM_USER_PWMEVTE_EVTESEL << 4u) |
			( PWM_USER_PWMEVTE_EVTESYNC << 12u) |
			( PWM_USER_PWMEVTE_EVTESTRD << 13u) |
			( PWM_USER_PWMEVTE_EVTEPOL << 14u) |
			( PWM_USER_PWMEVTE_EVTEOEN << 15u) ;
		#ifdef DEF_BITNAME
			PWMEVTEbits.EVTEPGS = PWM_USER_PWMEVTE_EVTEPGS;
			PWMEVTEbits.EVTESEL = PWM_USER_PWMEVTE_EVTESEL;
			PWMEVTEbits.EVTESYNC = PWM_USER_PWMEVTE_EVTESYNC;
			PWMEVTEbits.EVTESTRD = PWM_USER_PWMEVTE_EVTESTRD;
			PWMEVTEbits.EVTEPOL = PWM_USER_PWMEVTE_EVTEPOL;
			PWMEVTEbits.EVTEOEN = PWM_USER_PWMEVTE_EVTEOEN;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* PWMEVTFレジスタ */
	/*-----------------------------------------------------------------------*/
		PWMEVTF = ( PWM_USER_PWMEVTF_EVTFPGS << 0u) |
			( PWM_USER_PWMEVTF_EVTFSEL << 4u) |
			( PWM_USER_PWMEVTF_EVTFSYNC << 12u) |
			( PWM_USER_PWMEVTF_EVTFSTRD << 13u) |
			( PWM_USER_PWMEVTF_EVTFPOL << 14u) |
			( PWM_USER_PWMEVTF_EVTFOEN << 15u) ;
		#ifdef DEF_BITNAME
			PWMEVTFbits.EVTFPGS = PWM_USER_PWMEVTF_EVTFPGS;
			PWMEVTFbits.EVTFSEL = PWM_USER_PWMEVTF_EVTFSEL;
			PWMEVTFbits.EVTFSYNC = PWM_USER_PWMEVTF_EVTFSYNC;
			PWMEVTFbits.EVTFSTRD = PWM_USER_PWMEVTF_EVTFSTRD;
			PWMEVTFbits.EVTFPOL = PWM_USER_PWMEVTF_EVTFPOL;
			PWMEVTFbits.EVTFOEN = PWM_USER_PWMEVTF_EVTFOEN;
		#endif 

#endif
}
/*----------------------------------------------------------------------------*/
/*
* @fn        vdg_PWM1_Set_Register(void) 
* @brief        PG1レジスタを初期化します 
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void vdg_PWM1_Set_Register(void)
{
#if (( PMD_PWMMD == PMD_MODULE_ENABLE ) && ( PMD_PWM1MD == PMD_MODULE_ENABLE ))
	/*-----------------------------------------------------------------------*/
	/* PG1CONレジスタ */
	/*-----------------------------------------------------------------------*/
		PG1CON = ( PWM_USER_PG1CON_MODSEL << 0u) |
			( PWM_USER_PG1CON_CLKSEL << 3u) |
			( PWM_USER_PG1CON_TRGCNT << 8u) |
			( PWM_USER_PG1CON_ON << 15u) |
			( PWM_USER_PG1CON_SOCS << 16u) |
			( PWM_USER_PG1CON_TRGMOD << 22u) |
			( PWM_USER_PG1CON_UPDMOD << 24u) |
			( PWM_USER_PG1CON_MSTEN << 27u) |
			( PWM_USER_PG1CON_MPHSEL << 29u) |
			( PWM_USER_PG1CON_MPERSEL << 30u) |
			( PWM_USER_PG1CON_MDCSEL << 31u)  ;
		
		#ifdef DEF_BITNAME
			PG1CONbits.MODSEL = PWM_USER_PG1CON_MODSEL;
			PG1CONbits.CLKSEL = PWM_USER_PG1CON_CLKSEL;
			PG1CONbits.TRGCNT = PWM_USER_PG1CON_TRGCNT;
			PG1CONbits.ON = PWM_USER_PG1CON_ON;
			PG1CONbits.SOCS = PWM_USER_PG1CON_SOCS;
			PG1CONbits.TRGMOD = PWM_USER_PG1CON_TRGMOD;
			PG1CONbits.UPDMOD = PWM_USER_PG1CON_UPDMOD;
			PG1CONbits.MSTEN = PWM_USER_PG1CON_MSTEN;
			PG1CONbits.MPHSEL = PWM_USER_PG1CON_MPHSEL;
			PG1CONbits.MPERSEL = PWM_USER_PG1CON_MPERSEL;
			PG1CONbits.MDCSEL = PWM_USER_PG1CON_MDCSEL;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* PG1STATレジスタ */
	/*-----------------------------------------------------------------------*/
		PG1STAT = 0x00000000u;
		#ifdef DEF_BITNAME
			PG1STATbits.TRIG = 0u;
			PG1STATbits.CAHALF = 0u;
			PG1STATbits.STEER = 0u;
			PG1STATbits.UPDREQ = 0u;
			PG1STATbits.UPDATE = 0u;
			PG1STATbits.CAP = 0u;
			PG1STATbits.TRCLR = 0u;
			PG1STATbits.TRSET = 0u;
			PG1STATbits.FFACT = 0u;
			PG1STATbits.CLACT = 0u;
			PG1STATbits.FLTACT = 0u;
			PG1STATbits.SACT = 0u;
			PG1STATbits.FFEVT = 0u;
			PG1STATbits.CLEVT = 0u;
			PG1STATbits.FLTEVT = 0u;
			PG1STATbits.SEVT = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* PG1IOCONレジスタ */
	/*-----------------------------------------------------------------------*/
		PG1IOCON = ( PWM_USER_PG1IOCON_DBDAT << 0u) |
			( PWM_USER_PG1IOCON_FFDAT << 2u) |
			( PWM_USER_PG1IOCON_CLDAT << 4u) |
			( PWM_USER_PG1IOCON_FLTDAT << 6u) |
			( PWM_USER_PG1IOCON_OSYNC << 8u) |
			( PWM_USER_PG1IOCON_OVRDAT << 10u) |
			( PWM_USER_PG1IOCON_OVRENL << 12u) |
			( PWM_USER_PG1IOCON_OVRENH << 13u) |
			( PWM_USER_PG1IOCON_SWAP << 14u) |
			( PWM_USER_PG1IOCON_CLMOD << 15u) |
			( PWM_USER_PG1IOCON_POLL << 16u) |
			( PWM_USER_PG1IOCON_POLH << 17u) |
			( PWM_USER_PG1IOCON_PENL << 18u) |
			( PWM_USER_PG1IOCON_PENH << 19u) |
			( PWM_USER_PG1IOCON_PMOD << 20u) |
			( PWM_USER_PG1IOCON_DTCMPSEL << 24u) |
			( PWM_USER_PG1IOCON_PPSEN << 25u) |
			( PWM_USER_PG1IOCON_CAPSRC << 28u)  ;
		#ifdef DEF_BITNAME
			PG1IOCONbits.DBDAT = PWM_USER_PG1IOCON_DBDAT;
			PG1IOCONbits.FFDAT = PWM_USER_PG1IOCON_FFDAT;
			PG1IOCONbits.CLDAT = PWM_USER_PG1IOCON_CLDAT;
			PG1IOCONbits.FLTDAT = PWM_USER_PG1IOCON_FLTDAT;
			PG1IOCONbits.OSYNC = PWM_USER_PG1IOCON_OSYNC;
			PG1IOCONbits.OVRDAT = PWM_USER_PG1IOCON_OVRDAT;
			PG1IOCONbits.OVRENL = PWM_USER_PG1IOCON_OVRENL;
			PG1IOCONbits.OVRENH = PWM_USER_PG1IOCON_OVRENH;
			PG1IOCONbits.SWAP = PWM_USER_PG1IOCON_SWAP;
			PG1IOCONbits.CLMOD = PWM_USER_PG1IOCON_CLMOD;
			PG1IOCONbits.POLL = PWM_USER_PG1IOCON_POLL;
			PG1IOCONbits.POLH = PWM_USER_PG1IOCON_POLH;
			PG1IOCONbits.PENL = PWM_USER_PG1IOCON_PENL;
			PG1IOCONbits.PENH = PWM_USER_PG1IOCON_PENH;
			PG1IOCONbits.PMOD = PWM_USER_PG1IOCON_PMOD;
			PG1IOCONbits.DTCMPSEL = PWM_USER_PG1IOCON_DTCMPSEL;
			PG1IOCONbits.PPSEN = PWM_USER_PG1IOCON_PPSEN;
			PG1IOCONbits.CAPSRC = PWM_USER_PG1IOCON_CAPSRC;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* PG1EVTレジスタ */
	/*-----------------------------------------------------------------------*/
		PG1EVT = ( PWM_USER_PG1EVT_PGTRGSEL << 0u) |
			( PWM_USER_PG1EVT_UPDTRG << 3u) |
			( PWM_USER_PG1EVT_PWMPCI << 5u) |
			( PWM_USER_PG1EVT_ADTR1EN1 << 8u) |
			( PWM_USER_PG1EVT_ADTR1EN2 << 9u) |
			( PWM_USER_PG1EVT_ADTR1EN3 << 10u) |
			( PWM_USER_PG1EVT_ADTR1PS << 11u) |
			( PWM_USER_PG1EVT_ADTR1OFS << 16u) |
			( PWM_USER_PG1EVT_ADTR2EN1 << 21u) |
			( PWM_USER_PG1EVT_ADTR2EN2 << 22u) |
			( PWM_USER_PG1EVT_ADTR2EN3 << 23u) |
			( PWM_USER_PG1EVT_IEVTSEL << 24u) |
			( PWM_USER_PG1EVT_SIEN << 28u) |
			( PWM_USER_PG1EVT_FFIEN << 29u) |
			( PWM_USER_PG1EVT_CLIEN << 30u) |
			( PWM_USER_PG1EVT_FLTIEN << 31u)  ;
		#ifdef DEF_BITNAME
			PG1EVTbits.PGTRGSEL = PWM_USER_PG1EVT_PGTRGSEL;
			PG1EVTbits.UPDTRG = PWM_USER_PG1EVT_UPDTRG;
			PG1EVTbits.PWMPCI = PWM_USER_PG1EVT_PWMPCI;
			PG1EVTbits.ADTR1EN1 = PWM_USER_PG1EVT_ADTR1EN1;
			PG1EVTbits.ADTR1EN2 = PWM_USER_PG1EVT_ADTR1EN2;
			PG1EVTbits.ADTR1EN3 = PWM_USER_PG1EVT_ADTR1EN3;
			PG1EVTbits.ADTR1PS = PWM_USER_PG1EVT_ADTR1PS;
			PG1EVTbits.ADTR1OFS = PWM_USER_PG1EVT_ADTR1OFS;
			PG1EVTbits.ADTR2EN1 = PWM_USER_PG1EVT_ADTR2EN1;
			PG1EVTbits.ADTR2EN2 = PWM_USER_PG1EVT_ADTR2EN2;
			PG1EVTbits.ADTR2EN3 = PWM_USER_PG1EVT_ADTR2EN3;
			PG1EVTbits.IEVTSEL = PWM_USER_PG1EVT_IEVTSEL;
			PG1EVTbits.SIEN = PWM_USER_PG1EVT_SIEN;
			PG1EVTbits.FFIEN = PWM_USER_PG1EVT_FFIEN;
			PG1EVTbits.CLIEN = PWM_USER_PG1EVT_CLIEN;
			PG1EVTbits.FLTIEN = PWM_USER_PG1EVT_FLTIEN;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* PG1FPCIレジスタ */
	/*-----------------------------------------------------------------------*/
		PG1FPCI = ( PWM_USER_PG1FPCI_PSS << 0u) |
			( PWM_USER_PG1FPCI_PPS << 5u) |
			( PWM_USER_PG1FPCI_PSYNC << 6u) |
			( PWM_USER_PG1FPCI_SWTERM << 7u) |
			( PWM_USER_PG1FPCI_AQSS << 8u) |
			( PWM_USER_PG1FPCI_AQPS << 11u) |
			( PWM_USER_PG1FPCI_TERM << 12u) |
			( PWM_USER_PG1FPCI_TSYNCDIS << 15u) |
			( PWM_USER_PG1FPCI_TQSS << 16u) |
			( PWM_USER_PG1FPCI_TQPS << 19u) |
			( PWM_USER_PG1FPCI_LATMOD << 20u) |
			( PWM_USER_PG1FPCI_SWPCIM << 21u) |
			( PWM_USER_PG1FPCI_SWPCI << 23u) |
			( PWM_USER_PG1FPCI_ACP << 24u) |
			( PWM_USER_PG1FPCI_TERMPS << 27u) |
			( PWM_USER_PG1FPCI_BPSEL << 28u) |
			( PWM_USER_PG1FPCI_BPEN << 31u)  ;
		#ifdef DEF_BITNAME
			PG1FPCIbits.PSS = PWM_USER_PG1FPCI_PSS;
			PG1FPCIbits.PPS = PWM_USER_PG1FPCI_PPS;
			PG1FPCIbits.PSYNC = PWM_USER_PG1FPCI_PSYNC;
			PG1FPCIbits.SWTERM = PWM_USER_PG1FPCI_SWTERM;
			PG1FPCIbits.AQSS = PWM_USER_PG1FPCI_AQSS;
			PG1FPCIbits.AQPS = PWM_USER_PG1FPCI_AQPS;
			PG1FPCIbits.TERM = PWM_USER_PG1FPCI_TERM;
			PG1FPCIbits.TSYNCDIS = PWM_USER_PG1FPCI_TSYNCDIS;
			PG1FPCIbits.TQSS = PWM_USER_PG1FPCI_TQSS;
			PG1FPCIbits.TQPS = PWM_USER_PG1FPCI_TQPS;
			PG1FPCIbits.LATMOD = PWM_USER_PG1FPCI_LATMOD;
			PG1FPCIbits.SWPCIM = PWM_USER_PG1FPCI_SWPCIM;
			PG1FPCIbits.SWPCI = PWM_USER_PG1FPCI_SWPCI;
			PG1FPCIbits.ACP = PWM_USER_PG1FPCI_ACP;
			PG1FPCIbits.TERMPS = PWM_USER_PG1FPCI_TERMPS;
			PG1FPCIbits.BPSEL = PWM_USER_PG1FPCI_BPSEL;
			PG1FPCIbits.BPEN = PWM_USER_PG1FPCI_BPEN;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* PG1CLPCIレジスタ */
	/*-----------------------------------------------------------------------*/
		PG1CLPCI = ( PWM_USER_PG1CLPCI_PSS << 0u) |
			( PWM_USER_PG1CLPCI_PPS << 5u) |
			( PWM_USER_PG1CLPCI_PSYNC << 6u) |
			( PWM_USER_PG1CLPCI_SWTERM << 7u) |
			( PWM_USER_PG1CLPCI_AQSS << 8u) |
			( PWM_USER_PG1CLPCI_AQPS << 11u) |
			( PWM_USER_PG1CLPCI_TERM << 12u) |
			( PWM_USER_PG1CLPCI_TSYNCDIS << 15u) |
			( PWM_USER_PG1CLPCI_TQSS << 16u) |
			( PWM_USER_PG1CLPCI_TQPS << 19u) |
			( PWM_USER_PG1CLPCI_LATMOD << 20u) |
			( PWM_USER_PG1CLPCI_SWPCIM << 21u) |
			( PWM_USER_PG1CLPCI_SWPCI << 23u) |
			( PWM_USER_PG1CLPCI_ACP << 24u) |
			( PWM_USER_PG1CLPCI_TERMPS << 27u) |
			( PWM_USER_PG1CLPCI_BPSEL << 28u) |
			( PWM_USER_PG1CLPCI_BPEN << 31u)  ;
		#ifdef DEF_BITNAME
			PG1CLPCIbits.PSS = PWM_USER_PG1CLPCI_PSS;
			PG1CLPCIbits.PPS = PWM_USER_PG1CLPCI_PPS;
			PG1CLPCIbits.PSYNC = PWM_USER_PG1CLPCI_PSYNC;
			PG1CLPCIbits.SWTERM = PWM_USER_PG1CLPCI_SWTERM;
			PG1CLPCIbits.AQSS = PWM_USER_PG1CLPCI_AQSS;
			PG1CLPCIbits.AQPS = PWM_USER_PG1CLPCI_AQPS;
			PG1CLPCIbits.TERM = PWM_USER_PG1CLPCI_TERM;
			PG1CLPCIbits.TSYNCDIS = PWM_USER_PG1CLPCI_TSYNCDIS;
			PG1CLPCIbits.TQSS = PWM_USER_PG1CLPCI_TQSS;
			PG1CLPCIbits.TQPS = PWM_USER_PG1CLPCI_TQPS;
			PG1CLPCIbits.LATMOD = PWM_USER_PG1CLPCI_LATMOD;
			PG1CLPCIbits.SWPCIM = PWM_USER_PG1CLPCI_SWPCIM;
			PG1CLPCIbits.SWPCI = PWM_USER_PG1CLPCI_SWPCI;
			PG1CLPCIbits.ACP = PWM_USER_PG1CLPCI_ACP;
			PG1CLPCIbits.TERMPS = PWM_USER_PG1CLPCI_TERMPS;
			PG1CLPCIbits.BPSEL = PWM_USER_PG1CLPCI_BPSEL;
			PG1CLPCIbits.BPEN = PWM_USER_PG1CLPCI_BPEN;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* PG1FFPCIレジスタ */
	/*-----------------------------------------------------------------------*/
		PG1FFPCI = ( PWM_USER_PG1FFPCI_PSS << 0u) |
			( PWM_USER_PG1FFPCI_PPS << 5u) |
			( PWM_USER_PG1FFPCI_PSYNC << 6u) |
			( PWM_USER_PG1FFPCI_SWTERM << 7u) |
			( PWM_USER_PG1FFPCI_AQSS << 8u) |
			( PWM_USER_PG1FFPCI_AQPS << 11u) |
			( PWM_USER_PG1FFPCI_TERM << 12u) |
			( PWM_USER_PG1FFPCI_TSYNCDIS << 15u) |
			( PWM_USER_PG1FFPCI_TQSS << 16u) |
			( PWM_USER_PG1FFPCI_TQPS << 19u) |
			( PWM_USER_PG1FFPCI_LATMOD << 20u) |
			( PWM_USER_PG1FFPCI_SWPCIM << 21u) |
			( PWM_USER_PG1FFPCI_SWPCI << 23u) |
			( PWM_USER_PG1FFPCI_ACP << 24u) |
			( PWM_USER_PG1FFPCI_TERMPS << 27u) |
			( PWM_USER_PG1FFPCI_BPSEL << 28u) |
			( PWM_USER_PG1FFPCI_BPEN << 31u)  ;
		#ifdef DEF_BITNAME
			PG1FFPCIbits.PSS = PWM_USER_PG1FFPCI_PSS;
			PG1FFPCIbits.PPS = PWM_USER_PG1FFPCI_PPS;
			PG1FFPCIbits.PSYNC = PWM_USER_PG1FFPCI_PSYNC;
			PG1FFPCIbits.SWTERM = PWM_USER_PG1FFPCI_SWTERM;
			PG1FFPCIbits.AQSS = PWM_USER_PG1FFPCI_AQSS;
			PG1FFPCIbits.AQPS = PWM_USER_PG1FFPCI_AQPS;
			PG1FFPCIbits.TERM = PWM_USER_PG1FFPCI_TERM;
			PG1FFPCIbits.TSYNCDIS = PWM_USER_PG1FFPCI_TSYNCDIS;
			PG1FFPCIbits.TQSS = PWM_USER_PG1FFPCI_TQSS;
			PG1FFPCIbits.TQPS = PWM_USER_PG1FFPCI_TQPS;
			PG1FFPCIbits.LATMOD = PWM_USER_PG1FFPCI_LATMOD;
			PG1FFPCIbits.SWPCIM = PWM_USER_PG1FFPCI_SWPCIM;
			PG1FFPCIbits.SWPCI = PWM_USER_PG1FFPCI_SWPCI;
			PG1FFPCIbits.ACP = PWM_USER_PG1FFPCI_ACP;
			PG1FFPCIbits.TERMPS = PWM_USER_PG1FFPCI_TERMPS;
			PG1FFPCIbits.BPSEL = PWM_USER_PG1FFPCI_BPSEL;
			PG1FFPCIbits.BPEN = PWM_USER_PG1FFPCI_BPEN;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* PG1SPCIレジスタ */
	/*-----------------------------------------------------------------------*/
		PG1SPCI = ( PWM_USER_PG1SPCI_PSS << 0u) |
			( PWM_USER_PG1SPCI_PPS << 5u) |
			( PWM_USER_PG1SPCI_PSYNC << 6u) |
			( PWM_USER_PG1SPCI_SWTERM << 7u) |
			( PWM_USER_PG1SPCI_AQSS << 8u) |
			( PWM_USER_PG1SPCI_AQPS << 11u) |
			( PWM_USER_PG1SPCI_TERM << 12u) |
			( PWM_USER_PG1SPCI_TSYNCDIS << 15u) |
			( PWM_USER_PG1SPCI_TQSS << 16u) |
			( PWM_USER_PG1SPCI_TQPS << 19u) |
			( PWM_USER_PG1SPCI_LATMOD << 20u) |
			( PWM_USER_PG1SPCI_SWPCIM << 21u) |
			( PWM_USER_PG1SPCI_SWPCI << 23u) |
			( PWM_USER_PG1SPCI_ACP << 24u) |
			( PWM_USER_PG1SPCI_TERMPS << 27u) |
			( PWM_USER_PG1SPCI_BPSEL << 28u) |
			( PWM_USER_PG1SPCI_BPEN << 31u)  ;
		#ifdef DEF_BITNAME
			PG1SPCIbits.PSS = PWM_USER_PG1SPCI_PSS;
			PG1SPCIbits.PPS = PWM_USER_PG1SPCI_PPS;
			PG1SPCIbits.PSYNC = PWM_USER_PG1SPCI_PSYNC;
			PG1SPCIbits.SWTERM = PWM_USER_PG1SPCI_SWTERM;
			PG1SPCIbits.AQSS = PWM_USER_PG1SPCI_AQSS;
			PG1SPCIbits.AQPS = PWM_USER_PG1SPCI_AQPS;
			PG1SPCIbits.TERM = PWM_USER_PG1SPCI_TERM;
			PG1SPCIbits.TSYNCDIS = PWM_USER_PG1SPCI_TSYNCDIS;
			PG1SPCIbits.TQSS = PWM_USER_PG1SPCI_TQSS;
			PG1SPCIbits.TQPS = PWM_USER_PG1SPCI_TQPS;
			PG1SPCIbits.LATMOD = PWM_USER_PG1SPCI_LATMOD;
			PG1SPCIbits.SWPCIM = PWM_USER_PG1SPCI_SWPCIM;
			PG1SPCIbits.SWPCI = PWM_USER_PG1SPCI_SWPCI;
			PG1SPCIbits.ACP = PWM_USER_PG1SPCI_ACP;
			PG1SPCIbits.TERMPS = PWM_USER_PG1SPCI_TERMPS;
			PG1SPCIbits.BPSEL = PWM_USER_PG1SPCI_BPSEL;
			PG1SPCIbits.BPEN = PWM_USER_PG1SPCI_BPEN;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* PG1LEBレジスタ */
	/*-----------------------------------------------------------------------*/
		PG1LEB = ( PWM_USER_PG1LEB_LEB << 0u) |
			( PWM_USER_PG1LEB_PLF << 16u) |
			( PWM_USER_PG1LEB_PLR << 17u) |
			( PWM_USER_PG1LEB_PHF << 18u) |
			( PWM_USER_PG1LEB_PHR << 19u) ;
		#ifdef DEF_BITNAME
			PG1LEBbits.LEB = PWM_USER_PG1LEB_LEB;
			PG1LEBbits.PLF = PWM_USER_PG1LEB_PLF;
			PG1LEBbits.PLR = PWM_USER_PG1LEB_PLR;
			PG1LEBbits.PHF = PWM_USER_PG1LEB_PHF;
			PG1LEBbits.PHR = PWM_USER_PG1LEB_PHR;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* PG1PHASEレジスタ */
	/*-----------------------------------------------------------------------*/
		PG1PHASE = PWM_USER_PG1PHASE;
	/*-----------------------------------------------------------------------*/
	/* PG1DCレジスタ */
	/*-----------------------------------------------------------------------*/
		PG1DC = PWM_USER_PG1DC; 
	/*-----------------------------------------------------------------------*/
	/* PG1DCAレジスタ */
	/*-----------------------------------------------------------------------*/
		PG1DCA = PWM_USER_PG1DCA;
	/*-----------------------------------------------------------------------*/
	/* PG1PERレジスタ */
	/*-----------------------------------------------------------------------*/
		PG1PER = PWM_USER_PG1PER;
	/*-----------------------------------------------------------------------*/
	/* PG1TRIGAレジスタ */
	/*-----------------------------------------------------------------------*/
		PG1TRIGA = ( PWM_USER_PG1TRIGA_TRIGA << 0u) |
			( PWM_USER_PG1TRIGA_CAHALF << 31u) ;
		#ifdef DEF_BITNAME
			PG1TRIGAbits.TRIGA = PWM_USER_PG1TRIGA_TRIGA;
			PG1TRIGAbits.CAHALF = PWM_USER_PG1TRIGA_CAHALF;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* PG1TRIGBレジスタ */
	/*-----------------------------------------------------------------------*/
		PG1TRIGB = ( PWM_USER_PG1TRIGB_TRIGB << 0u) |
			( PWM_USER_PG1TRIGB_CAHALF << 31u) ;
		#ifdef DEF_BITNAME
			PG1TRIGAbits.TRIGA = PWM_USER_PG1TRIGB_TRIGB;
			PG1TRIGAbits.CAHALF = PWM_USER_PG1TRIGB_CAHALF;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* PG1TRIGCレジスタ */
	/*-----------------------------------------------------------------------*/
		PG1TRIGC = ( PWM_USER_PG1TRIGC_TRIGC << 0u) |
			( PWM_USER_PG1TRIGC_CAHALF << 31u) ;
		#ifdef DEF_BITNAME
			PG1TRIGAbits.TRIGA = PWM_USER_PG1TRIGC_TRIGC;
			PG1TRIGAbits.CAHALF = PWM_USER_PG1TRIGC_CAHALF;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* PG1DTレジスタ */
	/*-----------------------------------------------------------------------*/
		PG1DT = ( PWM_USER_PG1DC_DTL << 0u) |
			( PWM_USER_PG1DC_DTH << 16u) ;
		#ifdef DEF_BITNAME
			PG1DTbits.DTL = PWM_USER_PG1DC_DTL;
			PG1DTbits.DTH = PWM_USER_PG1DC_DTH;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* PG1CAPレジスタ */
	/*-----------------------------------------------------------------------*/
		PG1CAP = 0x00000000u;

#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn        vdg_PWM2_Set_Register(void) 
* @brief        PG2レジスタを初期化します 
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void vdg_PWM2_Set_Register(void)
{
#if (( PMD_PWMMD == PMD_MODULE_ENABLE ) && ( PMD_PWM2MD == PMD_MODULE_ENABLE ))
	/*-----------------------------------------------------------------------*/
	/* PG2CONレジスタ */
	/*-----------------------------------------------------------------------*/
		PG2CON = ( PWM_USER_PG2CON_MODSEL << 0u) |
			( PWM_USER_PG2CON_CLKSEL << 3u) |
			( PWM_USER_PG2CON_TRGCNT << 8u) |
			( PWM_USER_PG2CON_ON << 15u) |
			( PWM_USER_PG2CON_SOCS << 16u) |
			( PWM_USER_PG2CON_TRGMOD << 22u) |
			( PWM_USER_PG2CON_UPDMOD << 24u) |
			( PWM_USER_PG2CON_MSTEN << 27u) |
			( PWM_USER_PG2CON_MPHSEL << 29u) |
			( PWM_USER_PG2CON_MPERSEL << 30u) |
			( PWM_USER_PG2CON_MDCSEL << 31u)  ;
		
		#ifdef DEF_BITNAME
			PG2CONbits.MODSEL = PWM_USER_PG2CON_MODSEL;
			PG2CONbits.CLKSEL = PWM_USER_PG2CON_CLKSEL;
			PG2CONbits.TRGCNT = PWM_USER_PG2CON_TRGCNT;
			PG2CONbits.ON = PWM_USER_PG2CON_ON;
			PG2CONbits.SOCS = PWM_USER_PG2CON_SOCS;
			PG2CONbits.TRGMOD = PWM_USER_PG2CON_TRGMOD;
			PG2CONbits.UPDMOD = PWM_USER_PG2CON_UPDMOD;
			PG2CONbits.MSTEN = PWM_USER_PG2CON_MSTEN;
			PG2CONbits.MPHSEL = PWM_USER_PG2CON_MPHSEL;
			PG2CONbits.MPERSEL = PWM_USER_PG2CON_MPERSEL;
			PG2CONbits.MDCSEL = PWM_USER_PG2CON_MDCSEL;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* PG2STATレジスタ */
	/*-----------------------------------------------------------------------*/
		PG2STAT = 0x00000000u;
		#ifdef DEF_BITNAME
			PG2STATbits.TRIG = 0u;
			PG2STATbits.CAHALF = 0u;
			PG2STATbits.STEER = 0u;
			PG2STATbits.UPDREQ = 0u;
			PG2STATbits.UPDATE = 0u;
			PG2STATbits.CAP = 0u;
			PG2STATbits.TRCLR = 0u;
			PG2STATbits.TRSET = 0u;
			PG2STATbits.FFACT = 0u;
			PG2STATbits.CLACT = 0u;
			PG2STATbits.FLTACT = 0u;
			PG2STATbits.SACT = 0u;
			PG2STATbits.FFEVT = 0u;
			PG2STATbits.CLEVT = 0u;
			PG2STATbits.FLTEVT = 0u;
			PG2STATbits.SEVT = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* PG2IOCONレジスタ */
	/*-----------------------------------------------------------------------*/
		PG2IOCON = ( PWM_USER_PG2IOCON_DBDAT << 0u) |
			( PWM_USER_PG2IOCON_FFDAT << 2u) |
			( PWM_USER_PG2IOCON_CLDAT << 4u) |
			( PWM_USER_PG2IOCON_FLTDAT << 6u) |
			( PWM_USER_PG2IOCON_OSYNC << 8u) |
			( PWM_USER_PG2IOCON_OVRDAT << 10u) |
			( PWM_USER_PG2IOCON_OVRENL << 12u) |
			( PWM_USER_PG2IOCON_OVRENH << 13u) |
			( PWM_USER_PG2IOCON_SWAP << 14u) |
			( PWM_USER_PG2IOCON_CLMOD << 15u) |
			( PWM_USER_PG2IOCON_POLL << 16u) |
			( PWM_USER_PG2IOCON_POLH << 17u) |
			( PWM_USER_PG2IOCON_PENL << 18u) |
			( PWM_USER_PG2IOCON_PENH << 19u) |
			( PWM_USER_PG2IOCON_PMOD << 20u) |
			( PWM_USER_PG2IOCON_DTCMPSEL << 24u) |
			( PWM_USER_PG2IOCON_PPSEN << 25u) |
			( PWM_USER_PG2IOCON_CAPSRC << 28u)  ;
		#ifdef DEF_BITNAME
			PG2IOCONbits.DBDAT = PWM_USER_PG2IOCON_DBDAT;
			PG2IOCONbits.FFDAT = PWM_USER_PG2IOCON_FFDAT;
			PG2IOCONbits.CLDAT = PWM_USER_PG2IOCON_CLDAT;
			PG2IOCONbits.FLTDAT = PWM_USER_PG2IOCON_FLTDAT;
			PG2IOCONbits.OSYNC = PWM_USER_PG2IOCON_OSYNC;
			PG2IOCONbits.OVRDAT = PWM_USER_PG2IOCON_OVRDAT;
			PG2IOCONbits.OVRENL = PWM_USER_PG2IOCON_OVRENL;
			PG2IOCONbits.OVRENH = PWM_USER_PG2IOCON_OVRENH;
			PG2IOCONbits.SWAP = PWM_USER_PG2IOCON_SWAP;
			PG2IOCONbits.CLMOD = PWM_USER_PG2IOCON_CLMOD;
			PG2IOCONbits.POLL = PWM_USER_PG2IOCON_POLL;
			PG2IOCONbits.POLH = PWM_USER_PG2IOCON_POLH;
			PG2IOCONbits.PENL = PWM_USER_PG2IOCON_PENL;
			PG2IOCONbits.PENH = PWM_USER_PG2IOCON_PENH;
			PG2IOCONbits.PMOD = PWM_USER_PG2IOCON_PMOD;
			PG2IOCONbits.DTCMPSEL = PWM_USER_PG2IOCON_DTCMPSEL;
			PG2IOCONbits.PPSEN = PWM_USER_PG2IOCON_PPSEN;
			PG2IOCONbits.CAPSRC = PWM_USER_PG2IOCON_CAPSRC;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* PG2EVTレジスタ */
	/*-----------------------------------------------------------------------*/
		PG2EVT = ( PWM_USER_PG2EVT_PGTRGSEL << 0u) |
			( PWM_USER_PG2EVT_UPDTRG << 3u) |
			( PWM_USER_PG2EVT_PWMPCI << 5u) |
			( PWM_USER_PG2EVT_ADTR1EN1 << 8u) |
			( PWM_USER_PG2EVT_ADTR1EN2 << 9u) |
			( PWM_USER_PG2EVT_ADTR1EN3 << 10u) |
			( PWM_USER_PG2EVT_ADTR1PS << 11u) |
			( PWM_USER_PG2EVT_ADTR1OFS << 16u) |
			( PWM_USER_PG2EVT_ADTR2EN1 << 21u) |
			( PWM_USER_PG2EVT_ADTR2EN2 << 22u) |
			( PWM_USER_PG2EVT_ADTR2EN3 << 23u) |
			( PWM_USER_PG2EVT_IEVTSEL << 24u) |
			( PWM_USER_PG2EVT_SIEN << 28u) |
			( PWM_USER_PG2EVT_FFIEN << 29u) |
			( PWM_USER_PG2EVT_CLIEN << 30u) |
			( PWM_USER_PG2EVT_FLTIEN << 31u)  ;
		#ifdef DEF_BITNAME
			PG2EVTbits.PGTRGSEL = PWM_USER_PG2EVT_PGTRGSEL;
			PG2EVTbits.UPDTRG = PWM_USER_PG2EVT_UPDTRG;
			PG2EVTbits.PWMPCI = PWM_USER_PG2EVT_PWMPCI;
			PG2EVTbits.ADTR1EN1 = PWM_USER_PG2EVT_ADTR1EN1;
			PG2EVTbits.ADTR1EN2 = PWM_USER_PG2EVT_ADTR1EN2;
			PG2EVTbits.ADTR1EN3 = PWM_USER_PG2EVT_ADTR1EN3;
			PG2EVTbits.ADTR1PS = PWM_USER_PG2EVT_ADTR1PS;
			PG2EVTbits.ADTR1OFS = PWM_USER_PG2EVT_ADTR1OFS;
			PG2EVTbits.ADTR2EN1 = PWM_USER_PG2EVT_ADTR2EN1;
			PG2EVTbits.ADTR2EN2 = PWM_USER_PG2EVT_ADTR2EN2;
			PG2EVTbits.ADTR2EN3 = PWM_USER_PG2EVT_ADTR2EN3;
			PG2EVTbits.IEVTSEL = PWM_USER_PG2EVT_IEVTSEL;
			PG2EVTbits.SIEN = PWM_USER_PG2EVT_SIEN;
			PG2EVTbits.FFIEN = PWM_USER_PG2EVT_FFIEN;
			PG2EVTbits.CLIEN = PWM_USER_PG2EVT_CLIEN;
			PG2EVTbits.FLTIEN = PWM_USER_PG2EVT_FLTIEN;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* PG2FPCIレジスタ */
	/*-----------------------------------------------------------------------*/
		PG2FPCI = ( PWM_USER_PG2FPCI_PSS << 0u) |
			( PWM_USER_PG2FPCI_PPS << 5u) |
			( PWM_USER_PG2FPCI_PSYNC << 6u) |
			( PWM_USER_PG2FPCI_SWTERM << 7u) |
			( PWM_USER_PG2FPCI_AQSS << 8u) |
			( PWM_USER_PG2FPCI_AQPS << 11u) |
			( PWM_USER_PG2FPCI_TERM << 12u) |
			( PWM_USER_PG2FPCI_TSYNCDIS << 15u) |
			( PWM_USER_PG2FPCI_TQSS << 16u) |
			( PWM_USER_PG2FPCI_TQPS << 19u) |
			( PWM_USER_PG2FPCI_LATMOD << 20u) |
			( PWM_USER_PG2FPCI_SWPCIM << 21u) |
			( PWM_USER_PG2FPCI_SWPCI << 23u) |
			( PWM_USER_PG2FPCI_ACP << 24u) |
			( PWM_USER_PG2FPCI_TERMPS << 27u) |
			( PWM_USER_PG2FPCI_BPSEL << 28u) |
			( PWM_USER_PG2FPCI_BPEN << 31u)  ;
		#ifdef DEF_BITNAME
			PG2FPCIbits.PSS = PWM_USER_PG2FPCI_PSS;
			PG2FPCIbits.PPS = PWM_USER_PG2FPCI_PPS;
			PG2FPCIbits.PSYNC = PWM_USER_PG2FPCI_PSYNC;
			PG2FPCIbits.SWTERM = PWM_USER_PG2FPCI_SWTERM;
			PG2FPCIbits.AQSS = PWM_USER_PG2FPCI_AQSS;
			PG2FPCIbits.AQPS = PWM_USER_PG2FPCI_AQPS;
			PG2FPCIbits.TERM = PWM_USER_PG2FPCI_TERM;
			PG2FPCIbits.TSYNCDIS = PWM_USER_PG2FPCI_TSYNCDIS;
			PG2FPCIbits.TQSS = PWM_USER_PG2FPCI_TQSS;
			PG2FPCIbits.TQPS = PWM_USER_PG2FPCI_TQPS;
			PG2FPCIbits.LATMOD = PWM_USER_PG2FPCI_LATMOD;
			PG2FPCIbits.SWPCIM = PWM_USER_PG2FPCI_SWPCIM;
			PG2FPCIbits.SWPCI = PWM_USER_PG2FPCI_SWPCI;
			PG2FPCIbits.ACP = PWM_USER_PG2FPCI_ACP;
			PG2FPCIbits.TERMPS = PWM_USER_PG2FPCI_TERMPS;
			PG2FPCIbits.BPSEL = PWM_USER_PG2FPCI_BPSEL;
			PG2FPCIbits.BPEN = PWM_USER_PG2FPCI_BPEN;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* PG2CLPCIレジスタ */
	/*-----------------------------------------------------------------------*/
		PG2CLPCI = ( PWM_USER_PG2CLPCI_PSS << 0u) |
			( PWM_USER_PG2CLPCI_PPS << 5u) |
			( PWM_USER_PG2CLPCI_PSYNC << 6u) |
			( PWM_USER_PG2CLPCI_SWTERM << 7u) |
			( PWM_USER_PG2CLPCI_AQSS << 8u) |
			( PWM_USER_PG2CLPCI_AQPS << 11u) |
			( PWM_USER_PG2CLPCI_TERM << 12u) |
			( PWM_USER_PG2CLPCI_TSYNCDIS << 15u) |
			( PWM_USER_PG2CLPCI_TQSS << 16u) |
			( PWM_USER_PG2CLPCI_TQPS << 19u) |
			( PWM_USER_PG2CLPCI_LATMOD << 20u) |
			( PWM_USER_PG2CLPCI_SWPCIM << 21u) |
			( PWM_USER_PG2CLPCI_SWPCI << 23u) |
			( PWM_USER_PG2CLPCI_ACP << 24u) |
			( PWM_USER_PG2CLPCI_TERMPS << 27u) |
			( PWM_USER_PG2CLPCI_BPSEL << 28u) |
			( PWM_USER_PG2CLPCI_BPEN << 31u)  ;
		#ifdef DEF_BITNAME
			PG2CLPCIbits.PSS = PWM_USER_PG2CLPCI_PSS;
			PG2CLPCIbits.PPS = PWM_USER_PG2CLPCI_PPS;
			PG2CLPCIbits.PSYNC = PWM_USER_PG2CLPCI_PSYNC;
			PG2CLPCIbits.SWTERM = PWM_USER_PG2CLPCI_SWTERM;
			PG2CLPCIbits.AQSS = PWM_USER_PG2CLPCI_AQSS;
			PG2CLPCIbits.AQPS = PWM_USER_PG2CLPCI_AQPS;
			PG2CLPCIbits.TERM = PWM_USER_PG2CLPCI_TERM;
			PG2CLPCIbits.TSYNCDIS = PWM_USER_PG2CLPCI_TSYNCDIS;
			PG2CLPCIbits.TQSS = PWM_USER_PG2CLPCI_TQSS;
			PG2CLPCIbits.TQPS = PWM_USER_PG2CLPCI_TQPS;
			PG2CLPCIbits.LATMOD = PWM_USER_PG2CLPCI_LATMOD;
			PG2CLPCIbits.SWPCIM = PWM_USER_PG2CLPCI_SWPCIM;
			PG2CLPCIbits.SWPCI = PWM_USER_PG2CLPCI_SWPCI;
			PG2CLPCIbits.ACP = PWM_USER_PG2CLPCI_ACP;
			PG2CLPCIbits.TERMPS = PWM_USER_PG2CLPCI_TERMPS;
			PG2CLPCIbits.BPSEL = PWM_USER_PG2CLPCI_BPSEL;
			PG2CLPCIbits.BPEN = PWM_USER_PG2CLPCI_BPEN;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* PG2FFPCIレジスタ */
	/*-----------------------------------------------------------------------*/
		PG2FFPCI = ( PWM_USER_PG2FFPCI_PSS << 0u) |
			( PWM_USER_PG2FFPCI_PPS << 5u) |
			( PWM_USER_PG2FFPCI_PSYNC << 6u) |
			( PWM_USER_PG2FFPCI_SWTERM << 7u) |
			( PWM_USER_PG2FFPCI_AQSS << 8u) |
			( PWM_USER_PG2FFPCI_AQPS << 11u) |
			( PWM_USER_PG2FFPCI_TERM << 12u) |
			( PWM_USER_PG2FFPCI_TSYNCDIS << 15u) |
			( PWM_USER_PG2FFPCI_TQSS << 16u) |
			( PWM_USER_PG2FFPCI_TQPS << 19u) |
			( PWM_USER_PG2FFPCI_LATMOD << 20u) |
			( PWM_USER_PG2FFPCI_SWPCIM << 21u) |
			( PWM_USER_PG2FFPCI_SWPCI << 23u) |
			( PWM_USER_PG2FFPCI_ACP << 24u) |
			( PWM_USER_PG2FFPCI_TERMPS << 27u) |
			( PWM_USER_PG2FFPCI_BPSEL << 28u) |
			( PWM_USER_PG2FFPCI_BPEN << 31u)  ;
		#ifdef DEF_BITNAME
			PG2FFPCIbits.PSS = PWM_USER_PG2FFPCI_PSS;
			PG2FFPCIbits.PPS = PWM_USER_PG2FFPCI_PPS;
			PG2FFPCIbits.PSYNC = PWM_USER_PG2FFPCI_PSYNC;
			PG2FFPCIbits.SWTERM = PWM_USER_PG2FFPCI_SWTERM;
			PG2FFPCIbits.AQSS = PWM_USER_PG2FFPCI_AQSS;
			PG2FFPCIbits.AQPS = PWM_USER_PG2FFPCI_AQPS;
			PG2FFPCIbits.TERM = PWM_USER_PG2FFPCI_TERM;
			PG2FFPCIbits.TSYNCDIS = PWM_USER_PG2FFPCI_TSYNCDIS;
			PG2FFPCIbits.TQSS = PWM_USER_PG2FFPCI_TQSS;
			PG2FFPCIbits.TQPS = PWM_USER_PG2FFPCI_TQPS;
			PG2FFPCIbits.LATMOD = PWM_USER_PG2FFPCI_LATMOD;
			PG2FFPCIbits.SWPCIM = PWM_USER_PG2FFPCI_SWPCIM;
			PG2FFPCIbits.SWPCI = PWM_USER_PG2FFPCI_SWPCI;
			PG2FFPCIbits.ACP = PWM_USER_PG2FFPCI_ACP;
			PG2FFPCIbits.TERMPS = PWM_USER_PG2FFPCI_TERMPS;
			PG2FFPCIbits.BPSEL = PWM_USER_PG2FFPCI_BPSEL;
			PG2FFPCIbits.BPEN = PWM_USER_PG2FFPCI_BPEN;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* PG2SPCIレジスタ */
	/*-----------------------------------------------------------------------*/
		PG2SPCI = ( PWM_USER_PG2SPCI_PSS << 0u) |
			( PWM_USER_PG2SPCI_PPS << 5u) |
			( PWM_USER_PG2SPCI_PSYNC << 6u) |
			( PWM_USER_PG2SPCI_SWTERM << 7u) |
			( PWM_USER_PG2SPCI_AQSS << 8u) |
			( PWM_USER_PG2SPCI_AQPS << 11u) |
			( PWM_USER_PG2SPCI_TERM << 12u) |
			( PWM_USER_PG2SPCI_TSYNCDIS << 15u) |
			( PWM_USER_PG2SPCI_TQSS << 16u) |
			( PWM_USER_PG2SPCI_TQPS << 19u) |
			( PWM_USER_PG2SPCI_LATMOD << 20u) |
			( PWM_USER_PG2SPCI_SWPCIM << 21u) |
			( PWM_USER_PG2SPCI_SWPCI << 23u) |
			( PWM_USER_PG2SPCI_ACP << 24u) |
			( PWM_USER_PG2SPCI_TERMPS << 27u) |
			( PWM_USER_PG2SPCI_BPSEL << 28u) |
			( PWM_USER_PG2SPCI_BPEN << 31u)  ;
		#ifdef DEF_BITNAME
			PG2SPCIbits.PSS = PWM_USER_PG2SPCI_PSS;
			PG2SPCIbits.PPS = PWM_USER_PG2SPCI_PPS;
			PG2SPCIbits.PSYNC = PWM_USER_PG2SPCI_PSYNC;
			PG2SPCIbits.SWTERM = PWM_USER_PG2SPCI_SWTERM;
			PG2SPCIbits.AQSS = PWM_USER_PG2SPCI_AQSS;
			PG2SPCIbits.AQPS = PWM_USER_PG2SPCI_AQPS;
			PG2SPCIbits.TERM = PWM_USER_PG2SPCI_TERM;
			PG2SPCIbits.TSYNCDIS = PWM_USER_PG2SPCI_TSYNCDIS;
			PG2SPCIbits.TQSS = PWM_USER_PG2SPCI_TQSS;
			PG2SPCIbits.TQPS = PWM_USER_PG2SPCI_TQPS;
			PG2SPCIbits.LATMOD = PWM_USER_PG2SPCI_LATMOD;
			PG2SPCIbits.SWPCIM = PWM_USER_PG2SPCI_SWPCIM;
			PG2SPCIbits.SWPCI = PWM_USER_PG2SPCI_SWPCI;
			PG2SPCIbits.ACP = PWM_USER_PG2SPCI_ACP;
			PG2SPCIbits.TERMPS = PWM_USER_PG2SPCI_TERMPS;
			PG2SPCIbits.BPSEL = PWM_USER_PG2SPCI_BPSEL;
			PG2SPCIbits.BPEN = PWM_USER_PG2SPCI_BPEN;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* PG2LEBレジスタ */
	/*-----------------------------------------------------------------------*/
		PG2LEB = ( PWM_USER_PG2LEB_LEB << 0u) |
			( PWM_USER_PG2LEB_PLF << 16u) |
			( PWM_USER_PG2LEB_PLR << 17u) |
			( PWM_USER_PG2LEB_PHF << 18u) |
			( PWM_USER_PG2LEB_PHR << 19u) ;
		#ifdef DEF_BITNAME
			PG2LEBbits.LEB = PWM_USER_PG2LEB_LEB;
			PG2LEBbits.PLF = PWM_USER_PG2LEB_PLF;
			PG2LEBbits.PLR = PWM_USER_PG2LEB_PLR;
			PG2LEBbits.PHF = PWM_USER_PG2LEB_PHF;
			PG2LEBbits.PHR = PWM_USER_PG2LEB_PHR;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* PG2PHASEレジスタ */
	/*-----------------------------------------------------------------------*/
		PG2PHASE = PWM_USER_PG2PHASE;
	/*-----------------------------------------------------------------------*/
	/* PG2DCレジスタ */
	/*-----------------------------------------------------------------------*/
		PG2DC = PWM_USER_PG2DC; 
	/*-----------------------------------------------------------------------*/
	/* PG2DCAレジスタ */
	/*-----------------------------------------------------------------------*/
		PG2DCA = PWM_USER_PG2DCA;
	/*-----------------------------------------------------------------------*/
	/* PG2PERレジスタ */
	/*-----------------------------------------------------------------------*/
		PG2PER = PWM_USER_PG2PER;
	/*-----------------------------------------------------------------------*/
	/* PG2TRIGAレジスタ */
	/*-----------------------------------------------------------------------*/
		PG2TRIGA = ( PWM_USER_PG2TRIGA_TRIGA << 0u) |
			( PWM_USER_PG2TRIGA_CAHALF << 31u) ;
		#ifdef DEF_BITNAME
			PG2TRIGAbits.TRIGA = PWM_USER_PG2TRIGA_TRIGA;
			PG2TRIGAbits.CAHALF = PWM_USER_PG2TRIGA_CAHALF;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* PG2TRIGBレジスタ */
	/*-----------------------------------------------------------------------*/
		PG2TRIGB = ( PWM_USER_PG2TRIGB_TRIGB << 0u) |
			( PWM_USER_PG2TRIGB_CAHALF << 31u) ;
		#ifdef DEF_BITNAME
			PG2TRIGAbits.TRIGA = PWM_USER_PG2TRIGB_TRIGB;
			PG2TRIGAbits.CAHALF = PWM_USER_PG2TRIGB_CAHALF;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* PG2TRIGCレジスタ */
	/*-----------------------------------------------------------------------*/
		PG2TRIGC = ( PWM_USER_PG2TRIGC_TRIGC << 0u) |
			( PWM_USER_PG2TRIGC_CAHALF << 31u) ;
		#ifdef DEF_BITNAME
			PG2TRIGAbits.TRIGA = PWM_USER_PG2TRIGC_TRIGC;
			PG2TRIGAbits.CAHALF = PWM_USER_PG2TRIGC_CAHALF;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* PG2DTレジスタ */
	/*-----------------------------------------------------------------------*/
		PG2DT = ( PWM_USER_PG2DC_DTL << 0u) |
			( PWM_USER_PG2DC_DTH << 16u) ;
		#ifdef DEF_BITNAME
			PG2DTbits.DTL = PWM_USER_PG2DC_DTL;
			PG2DTbits.DTH = PWM_USER_PG2DC_DTH;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* PG2CAPレジスタ */
	/*-----------------------------------------------------------------------*/
		PG2CAP = 0x00000000u;
#endif
}
/*----------------------------------------------------------------------------*/
/*
* @fn        vdg_PWM3_Set_Register(void) 
* @brief        PG3レジスタを初期化します 
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void vdg_PWM3_Set_Register(void)
{
#if (( PMD_PWMMD == PMD_MODULE_ENABLE ) && ( PMD_PWM3MD == PMD_MODULE_ENABLE ))
 	/*-----------------------------------------------------------------------*/
	/* PG3CONレジスタ */
	/*-----------------------------------------------------------------------*/
		PG3CON = ( PWM_USER_PG3CON_MODSEL << 0u) |
			( PWM_USER_PG3CON_CLKSEL << 3u) |
			( PWM_USER_PG3CON_TRGCNT << 8u) |
			( PWM_USER_PG3CON_ON << 15u) |
			( PWM_USER_PG3CON_SOCS << 16u) |
			( PWM_USER_PG3CON_TRGMOD << 22u) |
			( PWM_USER_PG3CON_UPDMOD << 24u) |
			( PWM_USER_PG3CON_MSTEN << 27u) |
			( PWM_USER_PG3CON_MPHSEL << 29u) |
			( PWM_USER_PG3CON_MPERSEL << 30u) |
			( PWM_USER_PG3CON_MDCSEL << 31u)  ;
		
		#ifdef DEF_BITNAME
			PG3CONbits.MODSEL = PWM_USER_PG3CON_MODSEL;
			PG3CONbits.CLKSEL = PWM_USER_PG3CON_CLKSEL;
			PG3CONbits.TRGCNT = PWM_USER_PG3CON_TRGCNT;
			PG3CONbits.ON = PWM_USER_PG3CON_ON;
			PG3CONbits.SOCS = PWM_USER_PG3CON_SOCS;
			PG3CONbits.TRGMOD = PWM_USER_PG3CON_TRGMOD;
			PG3CONbits.UPDMOD = PWM_USER_PG3CON_UPDMOD;
			PG3CONbits.MSTEN = PWM_USER_PG3CON_MSTEN;
			PG3CONbits.MPHSEL = PWM_USER_PG3CON_MPHSEL;
			PG3CONbits.MPERSEL = PWM_USER_PG3CON_MPERSEL;
			PG3CONbits.MDCSEL = PWM_USER_PG3CON_MDCSEL;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* PG3STATレジスタ */
	/*-----------------------------------------------------------------------*/
		PG3STAT = 0x00000000u;
		#ifdef DEF_BITNAME
			PG3STATbits.TRIG = 0u;
			PG3STATbits.CAHALF = 0u;
			PG3STATbits.STEER = 0u;
			PG3STATbits.UPDREQ = 0u;
			PG3STATbits.UPDATE = 0u;
			PG3STATbits.CAP = 0u;
			PG3STATbits.TRCLR = 0u;
			PG3STATbits.TRSET = 0u;
			PG3STATbits.FFACT = 0u;
			PG3STATbits.CLACT = 0u;
			PG3STATbits.FLTACT = 0u;
			PG3STATbits.SACT = 0u;
			PG3STATbits.FFEVT = 0u;
			PG3STATbits.CLEVT = 0u;
			PG3STATbits.FLTEVT = 0u;
			PG3STATbits.SEVT = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* PG3IOCONレジスタ */
	/*-----------------------------------------------------------------------*/
		PG3IOCON = ( PWM_USER_PG3IOCON_DBDAT << 0u) |
			( PWM_USER_PG3IOCON_FFDAT << 2u) |
			( PWM_USER_PG3IOCON_CLDAT << 4u) |
			( PWM_USER_PG3IOCON_FLTDAT << 6u) |
			( PWM_USER_PG3IOCON_OSYNC << 8u) |
			( PWM_USER_PG3IOCON_OVRDAT << 10u) |
			( PWM_USER_PG3IOCON_OVRENL << 12u) |
			( PWM_USER_PG3IOCON_OVRENH << 13u) |
			( PWM_USER_PG3IOCON_SWAP << 14u) |
			( PWM_USER_PG3IOCON_CLMOD << 15u) |
			( PWM_USER_PG3IOCON_POLL << 16u) |
			( PWM_USER_PG3IOCON_POLH << 17u) |
			( PWM_USER_PG3IOCON_PENL << 18u) |
			( PWM_USER_PG3IOCON_PENH << 19u) |
			( PWM_USER_PG3IOCON_PMOD << 20u) |
			( PWM_USER_PG3IOCON_DTCMPSEL << 24u) |
			( PWM_USER_PG3IOCON_PPSEN << 25u) |
			( PWM_USER_PG3IOCON_CAPSRC << 28u)  ;
		#ifdef DEF_BITNAME
			PG3IOCONbits.DBDAT = PWM_USER_PG3IOCON_DBDAT;
			PG3IOCONbits.FFDAT = PWM_USER_PG3IOCON_FFDAT;
			PG3IOCONbits.CLDAT = PWM_USER_PG3IOCON_CLDAT;
			PG3IOCONbits.FLTDAT = PWM_USER_PG3IOCON_FLTDAT;
			PG3IOCONbits.OSYNC = PWM_USER_PG3IOCON_OSYNC;
			PG3IOCONbits.OVRDAT = PWM_USER_PG3IOCON_OVRDAT;
			PG3IOCONbits.OVRENL = PWM_USER_PG3IOCON_OVRENL;
			PG3IOCONbits.OVRENH = PWM_USER_PG3IOCON_OVRENH;
			PG3IOCONbits.SWAP = PWM_USER_PG3IOCON_SWAP;
			PG3IOCONbits.CLMOD = PWM_USER_PG3IOCON_CLMOD;
			PG3IOCONbits.POLL = PWM_USER_PG3IOCON_POLL;
			PG3IOCONbits.POLH = PWM_USER_PG3IOCON_POLH;
			PG3IOCONbits.PENL = PWM_USER_PG3IOCON_PENL;
			PG3IOCONbits.PENH = PWM_USER_PG3IOCON_PENH;
			PG3IOCONbits.PMOD = PWM_USER_PG3IOCON_PMOD;
			PG3IOCONbits.DTCMPSEL = PWM_USER_PG3IOCON_DTCMPSEL;
			PG3IOCONbits.PPSEN = PWM_USER_PG3IOCON_PPSEN;
			PG3IOCONbits.CAPSRC = PWM_USER_PG3IOCON_CAPSRC;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* PG3EVTレジスタ */
	/*-----------------------------------------------------------------------*/
		PG3EVT = ( PWM_USER_PG3EVT_PGTRGSEL << 0u) |
			( PWM_USER_PG3EVT_UPDTRG << 3u) |
			( PWM_USER_PG3EVT_PWMPCI << 5u) |
			( PWM_USER_PG3EVT_ADTR1EN1 << 8u) |
			( PWM_USER_PG3EVT_ADTR1EN2 << 9u) |
			( PWM_USER_PG3EVT_ADTR1EN3 << 10u) |
			( PWM_USER_PG3EVT_ADTR1PS << 11u) |
			( PWM_USER_PG3EVT_ADTR1OFS << 16u) |
			( PWM_USER_PG3EVT_ADTR2EN1 << 21u) |
			( PWM_USER_PG3EVT_ADTR2EN2 << 22u) |
			( PWM_USER_PG3EVT_ADTR2EN3 << 23u) |
			( PWM_USER_PG3EVT_IEVTSEL << 24u) |
			( PWM_USER_PG3EVT_SIEN << 28u) |
			( PWM_USER_PG3EVT_FFIEN << 29u) |
			( PWM_USER_PG3EVT_CLIEN << 30u) |
			( PWM_USER_PG3EVT_FLTIEN << 31u)  ;
		#ifdef DEF_BITNAME
			PG3EVTbits.PGTRGSEL = PWM_USER_PG3EVT_PGTRGSEL;
			PG3EVTbits.UPDTRG = PWM_USER_PG3EVT_UPDTRG;
			PG3EVTbits.PWMPCI = PWM_USER_PG3EVT_PWMPCI;
			PG3EVTbits.ADTR1EN1 = PWM_USER_PG3EVT_ADTR1EN1;
			PG3EVTbits.ADTR1EN2 = PWM_USER_PG3EVT_ADTR1EN2;
			PG3EVTbits.ADTR1EN3 = PWM_USER_PG3EVT_ADTR1EN3;
			PG3EVTbits.ADTR1PS = PWM_USER_PG3EVT_ADTR1PS;
			PG3EVTbits.ADTR1OFS = PWM_USER_PG3EVT_ADTR1OFS;
			PG3EVTbits.ADTR2EN1 = PWM_USER_PG3EVT_ADTR2EN1;
			PG3EVTbits.ADTR2EN2 = PWM_USER_PG3EVT_ADTR2EN2;
			PG3EVTbits.ADTR2EN3 = PWM_USER_PG3EVT_ADTR2EN3;
			PG3EVTbits.IEVTSEL = PWM_USER_PG3EVT_IEVTSEL;
			PG3EVTbits.SIEN = PWM_USER_PG3EVT_SIEN;
			PG3EVTbits.FFIEN = PWM_USER_PG3EVT_FFIEN;
			PG3EVTbits.CLIEN = PWM_USER_PG3EVT_CLIEN;
			PG3EVTbits.FLTIEN = PWM_USER_PG3EVT_FLTIEN;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* PG3FPCIレジスタ */
	/*-----------------------------------------------------------------------*/
		PG3FPCI = ( PWM_USER_PG3FPCI_PSS << 0u) |
			( PWM_USER_PG3FPCI_PPS << 5u) |
			( PWM_USER_PG3FPCI_PSYNC << 6u) |
			( PWM_USER_PG3FPCI_SWTERM << 7u) |
			( PWM_USER_PG3FPCI_AQSS << 8u) |
			( PWM_USER_PG3FPCI_AQPS << 11u) |
			( PWM_USER_PG3FPCI_TERM << 12u) |
			( PWM_USER_PG3FPCI_TSYNCDIS << 15u) |
			( PWM_USER_PG3FPCI_TQSS << 16u) |
			( PWM_USER_PG3FPCI_TQPS << 19u) |
			( PWM_USER_PG3FPCI_LATMOD << 20u) |
			( PWM_USER_PG3FPCI_SWPCIM << 21u) |
			( PWM_USER_PG3FPCI_SWPCI << 23u) |
			( PWM_USER_PG3FPCI_ACP << 24u) |
			( PWM_USER_PG3FPCI_TERMPS << 27u) |
			( PWM_USER_PG3FPCI_BPSEL << 28u) |
			( PWM_USER_PG3FPCI_BPEN << 31u)  ;
		#ifdef DEF_BITNAME
			PG3FPCIbits.PSS = PWM_USER_PG3FPCI_PSS;
			PG3FPCIbits.PPS = PWM_USER_PG3FPCI_PPS;
			PG3FPCIbits.PSYNC = PWM_USER_PG3FPCI_PSYNC;
			PG3FPCIbits.SWTERM = PWM_USER_PG3FPCI_SWTERM;
			PG3FPCIbits.AQSS = PWM_USER_PG3FPCI_AQSS;
			PG3FPCIbits.AQPS = PWM_USER_PG3FPCI_AQPS;
			PG3FPCIbits.TERM = PWM_USER_PG3FPCI_TERM;
			PG3FPCIbits.TSYNCDIS = PWM_USER_PG3FPCI_TSYNCDIS;
			PG3FPCIbits.TQSS = PWM_USER_PG3FPCI_TQSS;
			PG3FPCIbits.TQPS = PWM_USER_PG3FPCI_TQPS;
			PG3FPCIbits.LATMOD = PWM_USER_PG3FPCI_LATMOD;
			PG3FPCIbits.SWPCIM = PWM_USER_PG3FPCI_SWPCIM;
			PG3FPCIbits.SWPCI = PWM_USER_PG3FPCI_SWPCI;
			PG3FPCIbits.ACP = PWM_USER_PG3FPCI_ACP;
			PG3FPCIbits.TERMPS = PWM_USER_PG3FPCI_TERMPS;
			PG3FPCIbits.BPSEL = PWM_USER_PG3FPCI_BPSEL;
			PG3FPCIbits.BPEN = PWM_USER_PG3FPCI_BPEN;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* PG3CLPCIレジスタ */
	/*-----------------------------------------------------------------------*/
		PG3CLPCI = ( PWM_USER_PG3CLPCI_PSS << 0u) |
			( PWM_USER_PG3CLPCI_PPS << 5u) |
			( PWM_USER_PG3CLPCI_PSYNC << 6u) |
			( PWM_USER_PG3CLPCI_SWTERM << 7u) |
			( PWM_USER_PG3CLPCI_AQSS << 8u) |
			( PWM_USER_PG3CLPCI_AQPS << 11u) |
			( PWM_USER_PG3CLPCI_TERM << 12u) |
			( PWM_USER_PG3CLPCI_TSYNCDIS << 15u) |
			( PWM_USER_PG3CLPCI_TQSS << 16u) |
			( PWM_USER_PG3CLPCI_TQPS << 19u) |
			( PWM_USER_PG3CLPCI_LATMOD << 20u) |
			( PWM_USER_PG3CLPCI_SWPCIM << 21u) |
			( PWM_USER_PG3CLPCI_SWPCI << 23u) |
			( PWM_USER_PG3CLPCI_ACP << 24u) |
			( PWM_USER_PG3CLPCI_TERMPS << 27u) |
			( PWM_USER_PG3CLPCI_BPSEL << 28u) |
			( PWM_USER_PG3CLPCI_BPEN << 31u)  ;
		#ifdef DEF_BITNAME
			PG3CLPCIbits.PSS = PWM_USER_PG3CLPCI_PSS;
			PG3CLPCIbits.PPS = PWM_USER_PG3CLPCI_PPS;
			PG3CLPCIbits.PSYNC = PWM_USER_PG3CLPCI_PSYNC;
			PG3CLPCIbits.SWTERM = PWM_USER_PG3CLPCI_SWTERM;
			PG3CLPCIbits.AQSS = PWM_USER_PG3CLPCI_AQSS;
			PG3CLPCIbits.AQPS = PWM_USER_PG3CLPCI_AQPS;
			PG3CLPCIbits.TERM = PWM_USER_PG3CLPCI_TERM;
			PG3CLPCIbits.TSYNCDIS = PWM_USER_PG3CLPCI_TSYNCDIS;
			PG3CLPCIbits.TQSS = PWM_USER_PG3CLPCI_TQSS;
			PG3CLPCIbits.TQPS = PWM_USER_PG3CLPCI_TQPS;
			PG3CLPCIbits.LATMOD = PWM_USER_PG3CLPCI_LATMOD;
			PG3CLPCIbits.SWPCIM = PWM_USER_PG3CLPCI_SWPCIM;
			PG3CLPCIbits.SWPCI = PWM_USER_PG3CLPCI_SWPCI;
			PG3CLPCIbits.ACP = PWM_USER_PG3CLPCI_ACP;
			PG3CLPCIbits.TERMPS = PWM_USER_PG3CLPCI_TERMPS;
			PG3CLPCIbits.BPSEL = PWM_USER_PG3CLPCI_BPSEL;
			PG3CLPCIbits.BPEN = PWM_USER_PG3CLPCI_BPEN;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* PG3FFPCIレジスタ */
	/*-----------------------------------------------------------------------*/
		PG3FFPCI = ( PWM_USER_PG3FFPCI_PSS << 0u) |
			( PWM_USER_PG3FFPCI_PPS << 5u) |
			( PWM_USER_PG3FFPCI_PSYNC << 6u) |
			( PWM_USER_PG3FFPCI_SWTERM << 7u) |
			( PWM_USER_PG3FFPCI_AQSS << 8u) |
			( PWM_USER_PG3FFPCI_AQPS << 11u) |
			( PWM_USER_PG3FFPCI_TERM << 12u) |
			( PWM_USER_PG3FFPCI_TSYNCDIS << 15u) |
			( PWM_USER_PG3FFPCI_TQSS << 16u) |
			( PWM_USER_PG3FFPCI_TQPS << 19u) |
			( PWM_USER_PG3FFPCI_LATMOD << 20u) |
			( PWM_USER_PG3FFPCI_SWPCIM << 21u) |
			( PWM_USER_PG3FFPCI_SWPCI << 23u) |
			( PWM_USER_PG3FFPCI_ACP << 24u) |
			( PWM_USER_PG3FFPCI_TERMPS << 27u) |
			( PWM_USER_PG3FFPCI_BPSEL << 28u) |
			( PWM_USER_PG3FFPCI_BPEN << 31u)  ;
		#ifdef DEF_BITNAME
			PG3FFPCIbits.PSS = PWM_USER_PG3FFPCI_PSS;
			PG3FFPCIbits.PPS = PWM_USER_PG3FFPCI_PPS;
			PG3FFPCIbits.PSYNC = PWM_USER_PG3FFPCI_PSYNC;
			PG3FFPCIbits.SWTERM = PWM_USER_PG3FFPCI_SWTERM;
			PG3FFPCIbits.AQSS = PWM_USER_PG3FFPCI_AQSS;
			PG3FFPCIbits.AQPS = PWM_USER_PG3FFPCI_AQPS;
			PG3FFPCIbits.TERM = PWM_USER_PG3FFPCI_TERM;
			PG3FFPCIbits.TSYNCDIS = PWM_USER_PG3FFPCI_TSYNCDIS;
			PG3FFPCIbits.TQSS = PWM_USER_PG3FFPCI_TQSS;
			PG3FFPCIbits.TQPS = PWM_USER_PG3FFPCI_TQPS;
			PG3FFPCIbits.LATMOD = PWM_USER_PG3FFPCI_LATMOD;
			PG3FFPCIbits.SWPCIM = PWM_USER_PG3FFPCI_SWPCIM;
			PG3FFPCIbits.SWPCI = PWM_USER_PG3FFPCI_SWPCI;
			PG3FFPCIbits.ACP = PWM_USER_PG3FFPCI_ACP;
			PG3FFPCIbits.TERMPS = PWM_USER_PG3FFPCI_TERMPS;
			PG3FFPCIbits.BPSEL = PWM_USER_PG3FFPCI_BPSEL;
			PG3FFPCIbits.BPEN = PWM_USER_PG3FFPCI_BPEN;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* PG3SPCIレジスタ */
	/*-----------------------------------------------------------------------*/
		PG3SPCI = ( PWM_USER_PG3SPCI_PSS << 0u) |
			( PWM_USER_PG3SPCI_PPS << 5u) |
			( PWM_USER_PG3SPCI_PSYNC << 6u) |
			( PWM_USER_PG3SPCI_SWTERM << 7u) |
			( PWM_USER_PG3SPCI_AQSS << 8u) |
			( PWM_USER_PG3SPCI_AQPS << 11u) |
			( PWM_USER_PG3SPCI_TERM << 12u) |
			( PWM_USER_PG3SPCI_TSYNCDIS << 15u) |
			( PWM_USER_PG3SPCI_TQSS << 16u) |
			( PWM_USER_PG3SPCI_TQPS << 19u) |
			( PWM_USER_PG3SPCI_LATMOD << 20u) |
			( PWM_USER_PG3SPCI_SWPCIM << 21u) |
			( PWM_USER_PG3SPCI_SWPCI << 23u) |
			( PWM_USER_PG3SPCI_ACP << 24u) |
			( PWM_USER_PG3SPCI_TERMPS << 27u) |
			( PWM_USER_PG3SPCI_BPSEL << 28u) |
			( PWM_USER_PG3SPCI_BPEN << 31u)  ;
		#ifdef DEF_BITNAME
			PG3SPCIbits.PSS = PWM_USER_PG3SPCI_PSS;
			PG3SPCIbits.PPS = PWM_USER_PG3SPCI_PPS;
			PG3SPCIbits.PSYNC = PWM_USER_PG3SPCI_PSYNC;
			PG3SPCIbits.SWTERM = PWM_USER_PG3SPCI_SWTERM;
			PG3SPCIbits.AQSS = PWM_USER_PG3SPCI_AQSS;
			PG3SPCIbits.AQPS = PWM_USER_PG3SPCI_AQPS;
			PG3SPCIbits.TERM = PWM_USER_PG3SPCI_TERM;
			PG3SPCIbits.TSYNCDIS = PWM_USER_PG3SPCI_TSYNCDIS;
			PG3SPCIbits.TQSS = PWM_USER_PG3SPCI_TQSS;
			PG3SPCIbits.TQPS = PWM_USER_PG3SPCI_TQPS;
			PG3SPCIbits.LATMOD = PWM_USER_PG3SPCI_LATMOD;
			PG3SPCIbits.SWPCIM = PWM_USER_PG3SPCI_SWPCIM;
			PG3SPCIbits.SWPCI = PWM_USER_PG3SPCI_SWPCI;
			PG3SPCIbits.ACP = PWM_USER_PG3SPCI_ACP;
			PG3SPCIbits.TERMPS = PWM_USER_PG3SPCI_TERMPS;
			PG3SPCIbits.BPSEL = PWM_USER_PG3SPCI_BPSEL;
			PG3SPCIbits.BPEN = PWM_USER_PG3SPCI_BPEN;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* PG3LEBレジスタ */
	/*-----------------------------------------------------------------------*/
		PG3LEB = ( PWM_USER_PG3LEB_LEB << 0u) |
			( PWM_USER_PG3LEB_PLF << 16u) |
			( PWM_USER_PG3LEB_PLR << 17u) |
			( PWM_USER_PG3LEB_PHF << 18u) |
			( PWM_USER_PG3LEB_PHR << 19u) ;
		#ifdef DEF_BITNAME
			PG3LEBbits.LEB = PWM_USER_PG3LEB_LEB;
			PG3LEBbits.PLF = PWM_USER_PG3LEB_PLF;
			PG3LEBbits.PLR = PWM_USER_PG3LEB_PLR;
			PG3LEBbits.PHF = PWM_USER_PG3LEB_PHF;
			PG3LEBbits.PHR = PWM_USER_PG3LEB_PHR;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* PG3PHASEレジスタ */
	/*-----------------------------------------------------------------------*/
		PG3PHASE = PWM_USER_PG3PHASE;
	/*-----------------------------------------------------------------------*/
	/* PG3DCレジスタ */
	/*-----------------------------------------------------------------------*/
		PG3DC = PWM_USER_PG3DC; 
	/*-----------------------------------------------------------------------*/
	/* PG3DCAレジスタ */
	/*-----------------------------------------------------------------------*/
		PG3DCA = PWM_USER_PG3DCA;
	/*-----------------------------------------------------------------------*/
	/* PG3PERレジスタ */
	/*-----------------------------------------------------------------------*/
		PG3PER = PWM_USER_PG3PER;
	/*-----------------------------------------------------------------------*/
	/* PG3TRIGAレジスタ */
	/*-----------------------------------------------------------------------*/
		PG3TRIGA = ( PWM_USER_PG3TRIGA_TRIGA << 0u) |
			( PWM_USER_PG3TRIGA_CAHALF << 31u) ;
		#ifdef DEF_BITNAME
			PG3TRIGAbits.TRIGA = PWM_USER_PG3TRIGA_TRIGA;
			PG3TRIGAbits.CAHALF = PWM_USER_PG3TRIGA_CAHALF;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* PG3TRIGBレジスタ */
	/*-----------------------------------------------------------------------*/
		PG3TRIGB = ( PWM_USER_PG3TRIGB_TRIGB << 0u) |
			( PWM_USER_PG3TRIGB_CAHALF << 31u) ;
		#ifdef DEF_BITNAME
			PG3TRIGAbits.TRIGA = PWM_USER_PG3TRIGB_TRIGB;
			PG3TRIGAbits.CAHALF = PWM_USER_PG3TRIGB_CAHALF;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* PG3TRIGCレジスタ */
	/*-----------------------------------------------------------------------*/
		PG3TRIGC = ( PWM_USER_PG3TRIGC_TRIGC << 0u) |
			( PWM_USER_PG3TRIGC_CAHALF << 31u) ;
		#ifdef DEF_BITNAME
			PG3TRIGAbits.TRIGA = PWM_USER_PG3TRIGC_TRIGC;
			PG3TRIGAbits.CAHALF = PWM_USER_PG3TRIGC_CAHALF;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* PG3DTレジスタ */
	/*-----------------------------------------------------------------------*/
		PG3DT = ( PWM_USER_PG3DC_DTL << 0u) |
			( PWM_USER_PG3DC_DTH << 16u) ;
		#ifdef DEF_BITNAME
			PG3DTbits.DTL = PWM_USER_PG3DC_DTL;
			PG3DTbits.DTH = PWM_USER_PG3DC_DTH;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* PG3CAPレジスタ */
	/*-----------------------------------------------------------------------*/
		PG3CAP = 0x00000000u;
#endif
}
/*----------------------------------------------------------------------------*/
/*
* @fn        vdg_PWM4_Set_Register(void) 
* @brief        PG4レジスタを初期化します 
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void vdg_PWM4_Set_Register(void)
{
#if (( PMD_PWMMD == PMD_MODULE_ENABLE ) && ( PMD_PWM4MD == PMD_MODULE_ENABLE ))
  	/*-----------------------------------------------------------------------*/
	/* PG4CONレジスタ */
	/*-----------------------------------------------------------------------*/
		PG4CON = ( PWM_USER_PG4CON_MODSEL << 0u) |
			( PWM_USER_PG4CON_CLKSEL << 3u) |
			( PWM_USER_PG4CON_TRGCNT << 8u) |
			( PWM_USER_PG4CON_ON << 15u) |
			( PWM_USER_PG4CON_SOCS << 16u) |
			( PWM_USER_PG4CON_TRGMOD << 22u) |
			( PWM_USER_PG4CON_UPDMOD << 24u) |
			( PWM_USER_PG4CON_MSTEN << 27u) |
			( PWM_USER_PG4CON_MPHSEL << 29u) |
			( PWM_USER_PG4CON_MPERSEL << 30u) |
			( PWM_USER_PG4CON_MDCSEL << 31u)  ;
		
		#ifdef DEF_BITNAME
			PG4CONbits.MODSEL = PWM_USER_PG4CON_MODSEL;
			PG4CONbits.CLKSEL = PWM_USER_PG4CON_CLKSEL;
			PG4CONbits.TRGCNT = PWM_USER_PG4CON_TRGCNT;
			PG4CONbits.ON = PWM_USER_PG4CON_ON;
			PG4CONbits.SOCS = PWM_USER_PG4CON_SOCS;
			PG4CONbits.TRGMOD = PWM_USER_PG4CON_TRGMOD;
			PG4CONbits.UPDMOD = PWM_USER_PG4CON_UPDMOD;
			PG4CONbits.MSTEN = PWM_USER_PG4CON_MSTEN;
			PG4CONbits.MPHSEL = PWM_USER_PG4CON_MPHSEL;
			PG4CONbits.MPERSEL = PWM_USER_PG4CON_MPERSEL;
			PG4CONbits.MDCSEL = PWM_USER_PG4CON_MDCSEL;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* PG4STATレジスタ */
	/*-----------------------------------------------------------------------*/
		PG4STAT = 0x00000000u;
		#ifdef DEF_BITNAME
			PG4STATbits.TRIG = 0u;
			PG4STATbits.CAHALF = 0u;
			PG4STATbits.STEER = 0u;
			PG4STATbits.UPDREQ = 0u;
			PG4STATbits.UPDATE = 0u;
			PG4STATbits.CAP = 0u;
			PG4STATbits.TRCLR = 0u;
			PG4STATbits.TRSET = 0u;
			PG4STATbits.FFACT = 0u;
			PG4STATbits.CLACT = 0u;
			PG4STATbits.FLTACT = 0u;
			PG4STATbits.SACT = 0u;
			PG4STATbits.FFEVT = 0u;
			PG4STATbits.CLEVT = 0u;
			PG4STATbits.FLTEVT = 0u;
			PG4STATbits.SEVT = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* PG4IOCONレジスタ */
	/*-----------------------------------------------------------------------*/
		PG4IOCON = ( PWM_USER_PG4IOCON_DBDAT << 0u) |
			( PWM_USER_PG4IOCON_FFDAT << 2u) |
			( PWM_USER_PG4IOCON_CLDAT << 4u) |
			( PWM_USER_PG4IOCON_FLTDAT << 6u) |
			( PWM_USER_PG4IOCON_OSYNC << 8u) |
			( PWM_USER_PG4IOCON_OVRDAT << 10u) |
			( PWM_USER_PG4IOCON_OVRENL << 12u) |
			( PWM_USER_PG4IOCON_OVRENH << 13u) |
			( PWM_USER_PG4IOCON_SWAP << 14u) |
			( PWM_USER_PG4IOCON_CLMOD << 15u) |
			( PWM_USER_PG4IOCON_POLL << 16u) |
			( PWM_USER_PG4IOCON_POLH << 17u) |
			( PWM_USER_PG4IOCON_PENL << 18u) |
			( PWM_USER_PG4IOCON_PENH << 19u) |
			( PWM_USER_PG4IOCON_PMOD << 20u) |
			( PWM_USER_PG4IOCON_DTCMPSEL << 24u) |
			( PWM_USER_PG4IOCON_PPSEN << 25u) |
			( PWM_USER_PG4IOCON_CAPSRC << 28u)  ;
		#ifdef DEF_BITNAME
			PG4IOCONbits.DBDAT = PWM_USER_PG4IOCON_DBDAT;
			PG4IOCONbits.FFDAT = PWM_USER_PG4IOCON_FFDAT;
			PG4IOCONbits.CLDAT = PWM_USER_PG4IOCON_CLDAT;
			PG4IOCONbits.FLTDAT = PWM_USER_PG4IOCON_FLTDAT;
			PG4IOCONbits.OSYNC = PWM_USER_PG4IOCON_OSYNC;
			PG4IOCONbits.OVRDAT = PWM_USER_PG4IOCON_OVRDAT;
			PG4IOCONbits.OVRENL = PWM_USER_PG4IOCON_OVRENL;
			PG4IOCONbits.OVRENH = PWM_USER_PG4IOCON_OVRENH;
			PG4IOCONbits.SWAP = PWM_USER_PG4IOCON_SWAP;
			PG4IOCONbits.CLMOD = PWM_USER_PG4IOCON_CLMOD;
			PG4IOCONbits.POLL = PWM_USER_PG4IOCON_POLL;
			PG4IOCONbits.POLH = PWM_USER_PG4IOCON_POLH;
			PG4IOCONbits.PENL = PWM_USER_PG4IOCON_PENL;
			PG4IOCONbits.PENH = PWM_USER_PG4IOCON_PENH;
			PG4IOCONbits.PMOD = PWM_USER_PG4IOCON_PMOD;
			PG4IOCONbits.DTCMPSEL = PWM_USER_PG4IOCON_DTCMPSEL;
			PG4IOCONbits.PPSEN = PWM_USER_PG4IOCON_PPSEN;
			PG4IOCONbits.CAPSRC = PWM_USER_PG4IOCON_CAPSRC;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* PG4EVTレジスタ */
	/*-----------------------------------------------------------------------*/
		PG4EVT = ( PWM_USER_PG4EVT_PGTRGSEL << 0u) |
			( PWM_USER_PG4EVT_UPDTRG << 3u) |
			( PWM_USER_PG4EVT_PWMPCI << 5u) |
			( PWM_USER_PG4EVT_ADTR1EN1 << 8u) |
			( PWM_USER_PG4EVT_ADTR1EN2 << 9u) |
			( PWM_USER_PG4EVT_ADTR1EN3 << 10u) |
			( PWM_USER_PG4EVT_ADTR1PS << 11u) |
			( PWM_USER_PG4EVT_ADTR1OFS << 16u) |
			( PWM_USER_PG4EVT_ADTR2EN1 << 21u) |
			( PWM_USER_PG4EVT_ADTR2EN2 << 22u) |
			( PWM_USER_PG4EVT_ADTR2EN3 << 23u) |
			( PWM_USER_PG4EVT_IEVTSEL << 24u) |
			( PWM_USER_PG4EVT_SIEN << 28u) |
			( PWM_USER_PG4EVT_FFIEN << 29u) |
			( PWM_USER_PG4EVT_CLIEN << 30u) |
			( PWM_USER_PG4EVT_FLTIEN << 31u)  ;
		#ifdef DEF_BITNAME
			PG4EVTbits.PGTRGSEL = PWM_USER_PG4EVT_PGTRGSEL;
			PG4EVTbits.UPDTRG = PWM_USER_PG4EVT_UPDTRG;
			PG4EVTbits.PWMPCI = PWM_USER_PG4EVT_PWMPCI;
			PG4EVTbits.ADTR1EN1 = PWM_USER_PG4EVT_ADTR1EN1;
			PG4EVTbits.ADTR1EN2 = PWM_USER_PG4EVT_ADTR1EN2;
			PG4EVTbits.ADTR1EN3 = PWM_USER_PG4EVT_ADTR1EN3;
			PG4EVTbits.ADTR1PS = PWM_USER_PG4EVT_ADTR1PS;
			PG4EVTbits.ADTR1OFS = PWM_USER_PG4EVT_ADTR1OFS;
			PG4EVTbits.ADTR2EN1 = PWM_USER_PG4EVT_ADTR2EN1;
			PG4EVTbits.ADTR2EN2 = PWM_USER_PG4EVT_ADTR2EN2;
			PG4EVTbits.ADTR2EN3 = PWM_USER_PG4EVT_ADTR2EN3;
			PG4EVTbits.IEVTSEL = PWM_USER_PG4EVT_IEVTSEL;
			PG4EVTbits.SIEN = PWM_USER_PG4EVT_SIEN;
			PG4EVTbits.FFIEN = PWM_USER_PG4EVT_FFIEN;
			PG4EVTbits.CLIEN = PWM_USER_PG4EVT_CLIEN;
			PG4EVTbits.FLTIEN = PWM_USER_PG4EVT_FLTIEN;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* PG4FPCIレジスタ */
	/*-----------------------------------------------------------------------*/
		PG4FPCI = ( PWM_USER_PG4FPCI_PSS << 0u) |
			( PWM_USER_PG4FPCI_PPS << 5u) |
			( PWM_USER_PG4FPCI_PSYNC << 6u) |
			( PWM_USER_PG4FPCI_SWTERM << 7u) |
			( PWM_USER_PG4FPCI_AQSS << 8u) |
			( PWM_USER_PG4FPCI_AQPS << 11u) |
			( PWM_USER_PG4FPCI_TERM << 12u) |
			( PWM_USER_PG4FPCI_TSYNCDIS << 15u) |
			( PWM_USER_PG4FPCI_TQSS << 16u) |
			( PWM_USER_PG4FPCI_TQPS << 19u) |
			( PWM_USER_PG4FPCI_LATMOD << 20u) |
			( PWM_USER_PG4FPCI_SWPCIM << 21u) |
			( PWM_USER_PG4FPCI_SWPCI << 23u) |
			( PWM_USER_PG4FPCI_ACP << 24u) |
			( PWM_USER_PG4FPCI_TERMPS << 27u) |
			( PWM_USER_PG4FPCI_BPSEL << 28u) |
			( PWM_USER_PG4FPCI_BPEN << 31u)  ;
		#ifdef DEF_BITNAME
			PG4FPCIbits.PSS = PWM_USER_PG4FPCI_PSS;
			PG4FPCIbits.PPS = PWM_USER_PG4FPCI_PPS;
			PG4FPCIbits.PSYNC = PWM_USER_PG4FPCI_PSYNC;
			PG4FPCIbits.SWTERM = PWM_USER_PG4FPCI_SWTERM;
			PG4FPCIbits.AQSS = PWM_USER_PG4FPCI_AQSS;
			PG4FPCIbits.AQPS = PWM_USER_PG4FPCI_AQPS;
			PG4FPCIbits.TERM = PWM_USER_PG4FPCI_TERM;
			PG4FPCIbits.TSYNCDIS = PWM_USER_PG4FPCI_TSYNCDIS;
			PG4FPCIbits.TQSS = PWM_USER_PG4FPCI_TQSS;
			PG4FPCIbits.TQPS = PWM_USER_PG4FPCI_TQPS;
			PG4FPCIbits.LATMOD = PWM_USER_PG4FPCI_LATMOD;
			PG4FPCIbits.SWPCIM = PWM_USER_PG4FPCI_SWPCIM;
			PG4FPCIbits.SWPCI = PWM_USER_PG4FPCI_SWPCI;
			PG4FPCIbits.ACP = PWM_USER_PG4FPCI_ACP;
			PG4FPCIbits.TERMPS = PWM_USER_PG4FPCI_TERMPS;
			PG4FPCIbits.BPSEL = PWM_USER_PG4FPCI_BPSEL;
			PG4FPCIbits.BPEN = PWM_USER_PG4FPCI_BPEN;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* PG4CLPCIレジスタ */
	/*-----------------------------------------------------------------------*/
		PG4CLPCI = ( PWM_USER_PG4CLPCI_PSS << 0u) |
			( PWM_USER_PG4CLPCI_PPS << 5u) |
			( PWM_USER_PG4CLPCI_PSYNC << 6u) |
			( PWM_USER_PG4CLPCI_SWTERM << 7u) |
			( PWM_USER_PG4CLPCI_AQSS << 8u) |
			( PWM_USER_PG4CLPCI_AQPS << 11u) |
			( PWM_USER_PG4CLPCI_TERM << 12u) |
			( PWM_USER_PG4CLPCI_TSYNCDIS << 15u) |
			( PWM_USER_PG4CLPCI_TQSS << 16u) |
			( PWM_USER_PG4CLPCI_TQPS << 19u) |
			( PWM_USER_PG4CLPCI_LATMOD << 20u) |
			( PWM_USER_PG4CLPCI_SWPCIM << 21u) |
			( PWM_USER_PG4CLPCI_SWPCI << 23u) |
			( PWM_USER_PG4CLPCI_ACP << 24u) |
			( PWM_USER_PG4CLPCI_TERMPS << 27u) |
			( PWM_USER_PG4CLPCI_BPSEL << 28u) |
			( PWM_USER_PG4CLPCI_BPEN << 31u)  ;
		#ifdef DEF_BITNAME
			PG4CLPCIbits.PSS = PWM_USER_PG4CLPCI_PSS;
			PG4CLPCIbits.PPS = PWM_USER_PG4CLPCI_PPS;
			PG4CLPCIbits.PSYNC = PWM_USER_PG4CLPCI_PSYNC;
			PG4CLPCIbits.SWTERM = PWM_USER_PG4CLPCI_SWTERM;
			PG4CLPCIbits.AQSS = PWM_USER_PG4CLPCI_AQSS;
			PG4CLPCIbits.AQPS = PWM_USER_PG4CLPCI_AQPS;
			PG4CLPCIbits.TERM = PWM_USER_PG4CLPCI_TERM;
			PG4CLPCIbits.TSYNCDIS = PWM_USER_PG4CLPCI_TSYNCDIS;
			PG4CLPCIbits.TQSS = PWM_USER_PG4CLPCI_TQSS;
			PG4CLPCIbits.TQPS = PWM_USER_PG4CLPCI_TQPS;
			PG4CLPCIbits.LATMOD = PWM_USER_PG4CLPCI_LATMOD;
			PG4CLPCIbits.SWPCIM = PWM_USER_PG4CLPCI_SWPCIM;
			PG4CLPCIbits.SWPCI = PWM_USER_PG4CLPCI_SWPCI;
			PG4CLPCIbits.ACP = PWM_USER_PG4CLPCI_ACP;
			PG4CLPCIbits.TERMPS = PWM_USER_PG4CLPCI_TERMPS;
			PG4CLPCIbits.BPSEL = PWM_USER_PG4CLPCI_BPSEL;
			PG4CLPCIbits.BPEN = PWM_USER_PG4CLPCI_BPEN;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* PG4FFPCIレジスタ */
	/*-----------------------------------------------------------------------*/
		PG4FFPCI = ( PWM_USER_PG4FFPCI_PSS << 0u) |
			( PWM_USER_PG4FFPCI_PPS << 5u) |
			( PWM_USER_PG4FFPCI_PSYNC << 6u) |
			( PWM_USER_PG4FFPCI_SWTERM << 7u) |
			( PWM_USER_PG4FFPCI_AQSS << 8u) |
			( PWM_USER_PG4FFPCI_AQPS << 11u) |
			( PWM_USER_PG4FFPCI_TERM << 12u) |
			( PWM_USER_PG4FFPCI_TSYNCDIS << 15u) |
			( PWM_USER_PG4FFPCI_TQSS << 16u) |
			( PWM_USER_PG4FFPCI_TQPS << 19u) |
			( PWM_USER_PG4FFPCI_LATMOD << 20u) |
			( PWM_USER_PG4FFPCI_SWPCIM << 21u) |
			( PWM_USER_PG4FFPCI_SWPCI << 23u) |
			( PWM_USER_PG4FFPCI_ACP << 24u) |
			( PWM_USER_PG4FFPCI_TERMPS << 27u) |
			( PWM_USER_PG4FFPCI_BPSEL << 28u) |
			( PWM_USER_PG4FFPCI_BPEN << 31u)  ;
		#ifdef DEF_BITNAME
			PG4FFPCIbits.PSS = PWM_USER_PG4FFPCI_PSS;
			PG4FFPCIbits.PPS = PWM_USER_PG4FFPCI_PPS;
			PG4FFPCIbits.PSYNC = PWM_USER_PG4FFPCI_PSYNC;
			PG4FFPCIbits.SWTERM = PWM_USER_PG4FFPCI_SWTERM;
			PG4FFPCIbits.AQSS = PWM_USER_PG4FFPCI_AQSS;
			PG4FFPCIbits.AQPS = PWM_USER_PG4FFPCI_AQPS;
			PG4FFPCIbits.TERM = PWM_USER_PG4FFPCI_TERM;
			PG4FFPCIbits.TSYNCDIS = PWM_USER_PG4FFPCI_TSYNCDIS;
			PG4FFPCIbits.TQSS = PWM_USER_PG4FFPCI_TQSS;
			PG4FFPCIbits.TQPS = PWM_USER_PG4FFPCI_TQPS;
			PG4FFPCIbits.LATMOD = PWM_USER_PG4FFPCI_LATMOD;
			PG4FFPCIbits.SWPCIM = PWM_USER_PG4FFPCI_SWPCIM;
			PG4FFPCIbits.SWPCI = PWM_USER_PG4FFPCI_SWPCI;
			PG4FFPCIbits.ACP = PWM_USER_PG4FFPCI_ACP;
			PG4FFPCIbits.TERMPS = PWM_USER_PG4FFPCI_TERMPS;
			PG4FFPCIbits.BPSEL = PWM_USER_PG4FFPCI_BPSEL;
			PG4FFPCIbits.BPEN = PWM_USER_PG4FFPCI_BPEN;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* PG4SPCIレジスタ */
	/*-----------------------------------------------------------------------*/
		PG4SPCI = ( PWM_USER_PG4SPCI_PSS << 0u) |
			( PWM_USER_PG4SPCI_PPS << 5u) |
			( PWM_USER_PG4SPCI_PSYNC << 6u) |
			( PWM_USER_PG4SPCI_SWTERM << 7u) |
			( PWM_USER_PG4SPCI_AQSS << 8u) |
			( PWM_USER_PG4SPCI_AQPS << 11u) |
			( PWM_USER_PG4SPCI_TERM << 12u) |
			( PWM_USER_PG4SPCI_TSYNCDIS << 15u) |
			( PWM_USER_PG4SPCI_TQSS << 16u) |
			( PWM_USER_PG4SPCI_TQPS << 19u) |
			( PWM_USER_PG4SPCI_LATMOD << 20u) |
			( PWM_USER_PG4SPCI_SWPCIM << 21u) |
			( PWM_USER_PG4SPCI_SWPCI << 23u) |
			( PWM_USER_PG4SPCI_ACP << 24u) |
			( PWM_USER_PG4SPCI_TERMPS << 27u) |
			( PWM_USER_PG4SPCI_BPSEL << 28u) |
			( PWM_USER_PG4SPCI_BPEN << 31u)  ;
		#ifdef DEF_BITNAME
			PG4SPCIbits.PSS = PWM_USER_PG4SPCI_PSS;
			PG4SPCIbits.PPS = PWM_USER_PG4SPCI_PPS;
			PG4SPCIbits.PSYNC = PWM_USER_PG4SPCI_PSYNC;
			PG4SPCIbits.SWTERM = PWM_USER_PG4SPCI_SWTERM;
			PG4SPCIbits.AQSS = PWM_USER_PG4SPCI_AQSS;
			PG4SPCIbits.AQPS = PWM_USER_PG4SPCI_AQPS;
			PG4SPCIbits.TERM = PWM_USER_PG4SPCI_TERM;
			PG4SPCIbits.TSYNCDIS = PWM_USER_PG4SPCI_TSYNCDIS;
			PG4SPCIbits.TQSS = PWM_USER_PG4SPCI_TQSS;
			PG4SPCIbits.TQPS = PWM_USER_PG4SPCI_TQPS;
			PG4SPCIbits.LATMOD = PWM_USER_PG4SPCI_LATMOD;
			PG4SPCIbits.SWPCIM = PWM_USER_PG4SPCI_SWPCIM;
			PG4SPCIbits.SWPCI = PWM_USER_PG4SPCI_SWPCI;
			PG4SPCIbits.ACP = PWM_USER_PG4SPCI_ACP;
			PG4SPCIbits.TERMPS = PWM_USER_PG4SPCI_TERMPS;
			PG4SPCIbits.BPSEL = PWM_USER_PG4SPCI_BPSEL;
			PG4SPCIbits.BPEN = PWM_USER_PG4SPCI_BPEN;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* PG4LEBレジスタ */
	/*-----------------------------------------------------------------------*/
		PG4LEB = ( PWM_USER_PG4LEB_LEB << 0u) |
			( PWM_USER_PG4LEB_PLF << 16u) |
			( PWM_USER_PG4LEB_PLR << 17u) |
			( PWM_USER_PG4LEB_PHF << 18u) |
			( PWM_USER_PG4LEB_PHR << 19u) ;
		#ifdef DEF_BITNAME
			PG4LEBbits.LEB = PWM_USER_PG4LEB_LEB;
			PG4LEBbits.PLF = PWM_USER_PG4LEB_PLF;
			PG4LEBbits.PLR = PWM_USER_PG4LEB_PLR;
			PG4LEBbits.PHF = PWM_USER_PG4LEB_PHF;
			PG4LEBbits.PHR = PWM_USER_PG4LEB_PHR;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* PG4PHASEレジスタ */
	/*-----------------------------------------------------------------------*/
		PG4PHASE = PWM_USER_PG4PHASE;
	/*-----------------------------------------------------------------------*/
	/* PG4DCレジスタ */
	/*-----------------------------------------------------------------------*/
		PG4DC = PWM_USER_PG4DC; 
	/*-----------------------------------------------------------------------*/
	/* PG4DCAレジスタ */
	/*-----------------------------------------------------------------------*/
		PG4DCA = PWM_USER_PG4DCA;
	/*-----------------------------------------------------------------------*/
	/* PG4PERレジスタ */
	/*-----------------------------------------------------------------------*/
		PG4PER = PWM_USER_PG4PER;
	/*-----------------------------------------------------------------------*/
	/* PG4TRIGAレジスタ */
	/*-----------------------------------------------------------------------*/
		PG4TRIGA = ( PWM_USER_PG4TRIGA_TRIGA << 0u) |
			( PWM_USER_PG4TRIGA_CAHALF << 31u) ;
		#ifdef DEF_BITNAME
			PG4TRIGAbits.TRIGA = PWM_USER_PG4TRIGA_TRIGA;
			PG4TRIGAbits.CAHALF = PWM_USER_PG4TRIGA_CAHALF;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* PG4TRIGBレジスタ */
	/*-----------------------------------------------------------------------*/
		PG4TRIGB = ( PWM_USER_PG4TRIGB_TRIGB << 0u) |
			( PWM_USER_PG4TRIGB_CAHALF << 31u) ;
		#ifdef DEF_BITNAME
			PG4TRIGAbits.TRIGA = PWM_USER_PG4TRIGB_TRIGB;
			PG4TRIGAbits.CAHALF = PWM_USER_PG4TRIGB_CAHALF;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* PG4TRIGCレジスタ */
	/*-----------------------------------------------------------------------*/
		PG4TRIGC = ( PWM_USER_PG4TRIGC_TRIGC << 0u) |
			( PWM_USER_PG4TRIGC_CAHALF << 31u) ;
		#ifdef DEF_BITNAME
			PG4TRIGAbits.TRIGA = PWM_USER_PG4TRIGC_TRIGC;
			PG4TRIGAbits.CAHALF = PWM_USER_PG4TRIGC_CAHALF;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* PG4DTレジスタ */
	/*-----------------------------------------------------------------------*/
		PG4DT = ( PWM_USER_PG4DC_DTL << 0u) |
			( PWM_USER_PG4DC_DTH << 16u) ;
		#ifdef DEF_BITNAME
			PG4DTbits.DTL = PWM_USER_PG4DC_DTL;
			PG4DTbits.DTH = PWM_USER_PG4DC_DTH;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* PG4CAPレジスタ */
	/*-----------------------------------------------------------------------*/
		PG4CAP = 0x00000000u;
#endif
}
/*----------------------------------------------------------------------------*/
/*
* @fn        vdg_PWM5_Set_Register(void) 
* @brief        PG5レジスタを初期化します 
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void vdg_PWM5_Set_Register(void)
{
#if (( PMD_PWMMD == PMD_MODULE_ENABLE ) && ( PMD_PWM5MD == PMD_MODULE_ENABLE ))
    	/*-----------------------------------------------------------------------*/
	/* PG5CONレジスタ */
	/*-----------------------------------------------------------------------*/
		PG5CON = ( PWM_USER_PG5CON_MODSEL << 0u) |
			( PWM_USER_PG5CON_CLKSEL << 3u) |
			( PWM_USER_PG5CON_TRGCNT << 8u) |
			( PWM_USER_PG5CON_ON << 15u) |
			( PWM_USER_PG5CON_SOCS << 16u) |
			( PWM_USER_PG5CON_TRGMOD << 22u) |
			( PWM_USER_PG5CON_UPDMOD << 24u) |
			( PWM_USER_PG5CON_MSTEN << 27u) |
			( PWM_USER_PG5CON_MPHSEL << 29u) |
			( PWM_USER_PG5CON_MPERSEL << 30u) |
			( PWM_USER_PG5CON_MDCSEL << 31u)  ;
		
		#ifdef DEF_BITNAME
			PG5CONbits.MODSEL = PWM_USER_PG5CON_MODSEL;
			PG5CONbits.CLKSEL = PWM_USER_PG5CON_CLKSEL;
			PG5CONbits.TRGCNT = PWM_USER_PG5CON_TRGCNT;
			PG5CONbits.ON = PWM_USER_PG5CON_ON;
			PG5CONbits.SOCS = PWM_USER_PG5CON_SOCS;
			PG5CONbits.TRGMOD = PWM_USER_PG5CON_TRGMOD;
			PG5CONbits.UPDMOD = PWM_USER_PG5CON_UPDMOD;
			PG5CONbits.MSTEN = PWM_USER_PG5CON_MSTEN;
			PG5CONbits.MPHSEL = PWM_USER_PG5CON_MPHSEL;
			PG5CONbits.MPERSEL = PWM_USER_PG5CON_MPERSEL;
			PG5CONbits.MDCSEL = PWM_USER_PG5CON_MDCSEL;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* PG5STATレジスタ */
	/*-----------------------------------------------------------------------*/
		PG5STAT = 0x00000000u;
		#ifdef DEF_BITNAME
			PG5STATbits.TRIG = 0u;
			PG5STATbits.CAHALF = 0u;
			PG5STATbits.STEER = 0u;
			PG5STATbits.UPDREQ = 0u;
			PG5STATbits.UPDATE = 0u;
			PG5STATbits.CAP = 0u;
			PG5STATbits.TRCLR = 0u;
			PG5STATbits.TRSET = 0u;
			PG5STATbits.FFACT = 0u;
			PG5STATbits.CLACT = 0u;
			PG5STATbits.FLTACT = 0u;
			PG5STATbits.SACT = 0u;
			PG5STATbits.FFEVT = 0u;
			PG5STATbits.CLEVT = 0u;
			PG5STATbits.FLTEVT = 0u;
			PG5STATbits.SEVT = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* PG5IOCONレジスタ */
	/*-----------------------------------------------------------------------*/
		PG5IOCON = ( PWM_USER_PG5IOCON_DBDAT << 0u) |
			( PWM_USER_PG5IOCON_FFDAT << 2u) |
			( PWM_USER_PG5IOCON_CLDAT << 4u) |
			( PWM_USER_PG5IOCON_FLTDAT << 6u) |
			( PWM_USER_PG5IOCON_OSYNC << 8u) |
			( PWM_USER_PG5IOCON_OVRDAT << 10u) |
			( PWM_USER_PG5IOCON_OVRENL << 12u) |
			( PWM_USER_PG5IOCON_OVRENH << 13u) |
			( PWM_USER_PG5IOCON_SWAP << 14u) |
			( PWM_USER_PG5IOCON_CLMOD << 15u) |
			( PWM_USER_PG5IOCON_POLL << 16u) |
			( PWM_USER_PG5IOCON_POLH << 17u) |
			( PWM_USER_PG5IOCON_PENL << 18u) |
			( PWM_USER_PG5IOCON_PENH << 19u) |
			( PWM_USER_PG5IOCON_PMOD << 20u) |
			( PWM_USER_PG5IOCON_DTCMPSEL << 24u) |
			( PWM_USER_PG5IOCON_PPSEN << 25u) |
			( PWM_USER_PG5IOCON_CAPSRC << 28u)  ;
		#ifdef DEF_BITNAME
			PG5IOCONbits.DBDAT = PWM_USER_PG5IOCON_DBDAT;
			PG5IOCONbits.FFDAT = PWM_USER_PG5IOCON_FFDAT;
			PG5IOCONbits.CLDAT = PWM_USER_PG5IOCON_CLDAT;
			PG5IOCONbits.FLTDAT = PWM_USER_PG5IOCON_FLTDAT;
			PG5IOCONbits.OSYNC = PWM_USER_PG5IOCON_OSYNC;
			PG5IOCONbits.OVRDAT = PWM_USER_PG5IOCON_OVRDAT;
			PG5IOCONbits.OVRENL = PWM_USER_PG5IOCON_OVRENL;
			PG5IOCONbits.OVRENH = PWM_USER_PG5IOCON_OVRENH;
			PG5IOCONbits.SWAP = PWM_USER_PG5IOCON_SWAP;
			PG5IOCONbits.CLMOD = PWM_USER_PG5IOCON_CLMOD;
			PG5IOCONbits.POLL = PWM_USER_PG5IOCON_POLL;
			PG5IOCONbits.POLH = PWM_USER_PG5IOCON_POLH;
			PG5IOCONbits.PENL = PWM_USER_PG5IOCON_PENL;
			PG5IOCONbits.PENH = PWM_USER_PG5IOCON_PENH;
			PG5IOCONbits.PMOD = PWM_USER_PG5IOCON_PMOD;
			PG5IOCONbits.DTCMPSEL = PWM_USER_PG5IOCON_DTCMPSEL;
			PG5IOCONbits.PPSEN = PWM_USER_PG5IOCON_PPSEN;
			PG5IOCONbits.CAPSRC = PWM_USER_PG5IOCON_CAPSRC;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* PG5EVTレジスタ */
	/*-----------------------------------------------------------------------*/
		PG5EVT = ( PWM_USER_PG5EVT_PGTRGSEL << 0u) |
			( PWM_USER_PG5EVT_UPDTRG << 3u) |
			( PWM_USER_PG5EVT_PWMPCI << 5u) |
			( PWM_USER_PG5EVT_ADTR1EN1 << 8u) |
			( PWM_USER_PG5EVT_ADTR1EN2 << 9u) |
			( PWM_USER_PG5EVT_ADTR1EN3 << 10u) |
			( PWM_USER_PG5EVT_ADTR1PS << 11u) |
			( PWM_USER_PG5EVT_ADTR1OFS << 16u) |
			( PWM_USER_PG5EVT_ADTR2EN1 << 21u) |
			( PWM_USER_PG5EVT_ADTR2EN2 << 22u) |
			( PWM_USER_PG5EVT_ADTR2EN3 << 23u) |
			( PWM_USER_PG5EVT_IEVTSEL << 24u) |
			( PWM_USER_PG5EVT_SIEN << 28u) |
			( PWM_USER_PG5EVT_FFIEN << 29u) |
			( PWM_USER_PG5EVT_CLIEN << 30u) |
			( PWM_USER_PG5EVT_FLTIEN << 31u)  ;
		#ifdef DEF_BITNAME
			PG5EVTbits.PGTRGSEL = PWM_USER_PG5EVT_PGTRGSEL;
			PG5EVTbits.UPDTRG = PWM_USER_PG5EVT_UPDTRG;
			PG5EVTbits.PWMPCI = PWM_USER_PG5EVT_PWMPCI;
			PG5EVTbits.ADTR1EN1 = PWM_USER_PG5EVT_ADTR1EN1;
			PG5EVTbits.ADTR1EN2 = PWM_USER_PG5EVT_ADTR1EN2;
			PG5EVTbits.ADTR1EN3 = PWM_USER_PG5EVT_ADTR1EN3;
			PG5EVTbits.ADTR1PS = PWM_USER_PG5EVT_ADTR1PS;
			PG5EVTbits.ADTR1OFS = PWM_USER_PG5EVT_ADTR1OFS;
			PG5EVTbits.ADTR2EN1 = PWM_USER_PG5EVT_ADTR2EN1;
			PG5EVTbits.ADTR2EN2 = PWM_USER_PG5EVT_ADTR2EN2;
			PG5EVTbits.ADTR2EN3 = PWM_USER_PG5EVT_ADTR2EN3;
			PG5EVTbits.IEVTSEL = PWM_USER_PG5EVT_IEVTSEL;
			PG5EVTbits.SIEN = PWM_USER_PG5EVT_SIEN;
			PG5EVTbits.FFIEN = PWM_USER_PG5EVT_FFIEN;
			PG5EVTbits.CLIEN = PWM_USER_PG5EVT_CLIEN;
			PG5EVTbits.FLTIEN = PWM_USER_PG5EVT_FLTIEN;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* PG5FPCIレジスタ */
	/*-----------------------------------------------------------------------*/
		PG5FPCI = ( PWM_USER_PG5FPCI_PSS << 0u) |
			( PWM_USER_PG5FPCI_PPS << 5u) |
			( PWM_USER_PG5FPCI_PSYNC << 6u) |
			( PWM_USER_PG5FPCI_SWTERM << 7u) |
			( PWM_USER_PG5FPCI_AQSS << 8u) |
			( PWM_USER_PG5FPCI_AQPS << 11u) |
			( PWM_USER_PG5FPCI_TERM << 12u) |
			( PWM_USER_PG5FPCI_TSYNCDIS << 15u) |
			( PWM_USER_PG5FPCI_TQSS << 16u) |
			( PWM_USER_PG5FPCI_TQPS << 19u) |
			( PWM_USER_PG5FPCI_LATMOD << 20u) |
			( PWM_USER_PG5FPCI_SWPCIM << 21u) |
			( PWM_USER_PG5FPCI_SWPCI << 23u) |
			( PWM_USER_PG5FPCI_ACP << 24u) |
			( PWM_USER_PG5FPCI_TERMPS << 27u) |
			( PWM_USER_PG5FPCI_BPSEL << 28u) |
			( PWM_USER_PG5FPCI_BPEN << 31u)  ;
		#ifdef DEF_BITNAME
			PG5FPCIbits.PSS = PWM_USER_PG5FPCI_PSS;
			PG5FPCIbits.PPS = PWM_USER_PG5FPCI_PPS;
			PG5FPCIbits.PSYNC = PWM_USER_PG5FPCI_PSYNC;
			PG5FPCIbits.SWTERM = PWM_USER_PG5FPCI_SWTERM;
			PG5FPCIbits.AQSS = PWM_USER_PG5FPCI_AQSS;
			PG5FPCIbits.AQPS = PWM_USER_PG5FPCI_AQPS;
			PG5FPCIbits.TERM = PWM_USER_PG5FPCI_TERM;
			PG5FPCIbits.TSYNCDIS = PWM_USER_PG5FPCI_TSYNCDIS;
			PG5FPCIbits.TQSS = PWM_USER_PG5FPCI_TQSS;
			PG5FPCIbits.TQPS = PWM_USER_PG5FPCI_TQPS;
			PG5FPCIbits.LATMOD = PWM_USER_PG5FPCI_LATMOD;
			PG5FPCIbits.SWPCIM = PWM_USER_PG5FPCI_SWPCIM;
			PG5FPCIbits.SWPCI = PWM_USER_PG5FPCI_SWPCI;
			PG5FPCIbits.ACP = PWM_USER_PG5FPCI_ACP;
			PG5FPCIbits.TERMPS = PWM_USER_PG5FPCI_TERMPS;
			PG5FPCIbits.BPSEL = PWM_USER_PG5FPCI_BPSEL;
			PG5FPCIbits.BPEN = PWM_USER_PG5FPCI_BPEN;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* PG5CLPCIレジスタ */
	/*-----------------------------------------------------------------------*/
		PG5CLPCI = ( PWM_USER_PG5CLPCI_PSS << 0u) |
			( PWM_USER_PG5CLPCI_PPS << 5u) |
			( PWM_USER_PG5CLPCI_PSYNC << 6u) |
			( PWM_USER_PG5CLPCI_SWTERM << 7u) |
			( PWM_USER_PG5CLPCI_AQSS << 8u) |
			( PWM_USER_PG5CLPCI_AQPS << 11u) |
			( PWM_USER_PG5CLPCI_TERM << 12u) |
			( PWM_USER_PG5CLPCI_TSYNCDIS << 15u) |
			( PWM_USER_PG5CLPCI_TQSS << 16u) |
			( PWM_USER_PG5CLPCI_TQPS << 19u) |
			( PWM_USER_PG5CLPCI_LATMOD << 20u) |
			( PWM_USER_PG5CLPCI_SWPCIM << 21u) |
			( PWM_USER_PG5CLPCI_SWPCI << 23u) |
			( PWM_USER_PG5CLPCI_ACP << 24u) |
			( PWM_USER_PG5CLPCI_TERMPS << 27u) |
			( PWM_USER_PG5CLPCI_BPSEL << 28u) |
			( PWM_USER_PG5CLPCI_BPEN << 31u)  ;
		#ifdef DEF_BITNAME
			PG5CLPCIbits.PSS = PWM_USER_PG5CLPCI_PSS;
			PG5CLPCIbits.PPS = PWM_USER_PG5CLPCI_PPS;
			PG5CLPCIbits.PSYNC = PWM_USER_PG5CLPCI_PSYNC;
			PG5CLPCIbits.SWTERM = PWM_USER_PG5CLPCI_SWTERM;
			PG5CLPCIbits.AQSS = PWM_USER_PG5CLPCI_AQSS;
			PG5CLPCIbits.AQPS = PWM_USER_PG5CLPCI_AQPS;
			PG5CLPCIbits.TERM = PWM_USER_PG5CLPCI_TERM;
			PG5CLPCIbits.TSYNCDIS = PWM_USER_PG5CLPCI_TSYNCDIS;
			PG5CLPCIbits.TQSS = PWM_USER_PG5CLPCI_TQSS;
			PG5CLPCIbits.TQPS = PWM_USER_PG5CLPCI_TQPS;
			PG5CLPCIbits.LATMOD = PWM_USER_PG5CLPCI_LATMOD;
			PG5CLPCIbits.SWPCIM = PWM_USER_PG5CLPCI_SWPCIM;
			PG5CLPCIbits.SWPCI = PWM_USER_PG5CLPCI_SWPCI;
			PG5CLPCIbits.ACP = PWM_USER_PG5CLPCI_ACP;
			PG5CLPCIbits.TERMPS = PWM_USER_PG5CLPCI_TERMPS;
			PG5CLPCIbits.BPSEL = PWM_USER_PG5CLPCI_BPSEL;
			PG5CLPCIbits.BPEN = PWM_USER_PG5CLPCI_BPEN;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* PG5FFPCIレジスタ */
	/*-----------------------------------------------------------------------*/
		PG5FFPCI = ( PWM_USER_PG5FFPCI_PSS << 0u) |
			( PWM_USER_PG5FFPCI_PPS << 5u) |
			( PWM_USER_PG5FFPCI_PSYNC << 6u) |
			( PWM_USER_PG5FFPCI_SWTERM << 7u) |
			( PWM_USER_PG5FFPCI_AQSS << 8u) |
			( PWM_USER_PG5FFPCI_AQPS << 11u) |
			( PWM_USER_PG5FFPCI_TERM << 12u) |
			( PWM_USER_PG5FFPCI_TSYNCDIS << 15u) |
			( PWM_USER_PG5FFPCI_TQSS << 16u) |
			( PWM_USER_PG5FFPCI_TQPS << 19u) |
			( PWM_USER_PG5FFPCI_LATMOD << 20u) |
			( PWM_USER_PG5FFPCI_SWPCIM << 21u) |
			( PWM_USER_PG5FFPCI_SWPCI << 23u) |
			( PWM_USER_PG5FFPCI_ACP << 24u) |
			( PWM_USER_PG5FFPCI_TERMPS << 27u) |
			( PWM_USER_PG5FFPCI_BPSEL << 28u) |
			( PWM_USER_PG5FFPCI_BPEN << 31u)  ;
		#ifdef DEF_BITNAME
			PG5FFPCIbits.PSS = PWM_USER_PG5FFPCI_PSS;
			PG5FFPCIbits.PPS = PWM_USER_PG5FFPCI_PPS;
			PG5FFPCIbits.PSYNC = PWM_USER_PG5FFPCI_PSYNC;
			PG5FFPCIbits.SWTERM = PWM_USER_PG5FFPCI_SWTERM;
			PG5FFPCIbits.AQSS = PWM_USER_PG5FFPCI_AQSS;
			PG5FFPCIbits.AQPS = PWM_USER_PG5FFPCI_AQPS;
			PG5FFPCIbits.TERM = PWM_USER_PG5FFPCI_TERM;
			PG5FFPCIbits.TSYNCDIS = PWM_USER_PG5FFPCI_TSYNCDIS;
			PG5FFPCIbits.TQSS = PWM_USER_PG5FFPCI_TQSS;
			PG5FFPCIbits.TQPS = PWM_USER_PG5FFPCI_TQPS;
			PG5FFPCIbits.LATMOD = PWM_USER_PG5FFPCI_LATMOD;
			PG5FFPCIbits.SWPCIM = PWM_USER_PG5FFPCI_SWPCIM;
			PG5FFPCIbits.SWPCI = PWM_USER_PG5FFPCI_SWPCI;
			PG5FFPCIbits.ACP = PWM_USER_PG5FFPCI_ACP;
			PG5FFPCIbits.TERMPS = PWM_USER_PG5FFPCI_TERMPS;
			PG5FFPCIbits.BPSEL = PWM_USER_PG5FFPCI_BPSEL;
			PG5FFPCIbits.BPEN = PWM_USER_PG5FFPCI_BPEN;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* PG5SPCIレジスタ */
	/*-----------------------------------------------------------------------*/
		PG5SPCI = ( PWM_USER_PG5SPCI_PSS << 0u) |
			( PWM_USER_PG5SPCI_PPS << 5u) |
			( PWM_USER_PG5SPCI_PSYNC << 6u) |
			( PWM_USER_PG5SPCI_SWTERM << 7u) |
			( PWM_USER_PG5SPCI_AQSS << 8u) |
			( PWM_USER_PG5SPCI_AQPS << 11u) |
			( PWM_USER_PG5SPCI_TERM << 12u) |
			( PWM_USER_PG5SPCI_TSYNCDIS << 15u) |
			( PWM_USER_PG5SPCI_TQSS << 16u) |
			( PWM_USER_PG5SPCI_TQPS << 19u) |
			( PWM_USER_PG5SPCI_LATMOD << 20u) |
			( PWM_USER_PG5SPCI_SWPCIM << 21u) |
			( PWM_USER_PG5SPCI_SWPCI << 23u) |
			( PWM_USER_PG5SPCI_ACP << 24u) |
			( PWM_USER_PG5SPCI_TERMPS << 27u) |
			( PWM_USER_PG5SPCI_BPSEL << 28u) |
			( PWM_USER_PG5SPCI_BPEN << 31u)  ;
		#ifdef DEF_BITNAME
			PG5SPCIbits.PSS = PWM_USER_PG5SPCI_PSS;
			PG5SPCIbits.PPS = PWM_USER_PG5SPCI_PPS;
			PG5SPCIbits.PSYNC = PWM_USER_PG5SPCI_PSYNC;
			PG5SPCIbits.SWTERM = PWM_USER_PG5SPCI_SWTERM;
			PG5SPCIbits.AQSS = PWM_USER_PG5SPCI_AQSS;
			PG5SPCIbits.AQPS = PWM_USER_PG5SPCI_AQPS;
			PG5SPCIbits.TERM = PWM_USER_PG5SPCI_TERM;
			PG5SPCIbits.TSYNCDIS = PWM_USER_PG5SPCI_TSYNCDIS;
			PG5SPCIbits.TQSS = PWM_USER_PG5SPCI_TQSS;
			PG5SPCIbits.TQPS = PWM_USER_PG5SPCI_TQPS;
			PG5SPCIbits.LATMOD = PWM_USER_PG5SPCI_LATMOD;
			PG5SPCIbits.SWPCIM = PWM_USER_PG5SPCI_SWPCIM;
			PG5SPCIbits.SWPCI = PWM_USER_PG5SPCI_SWPCI;
			PG5SPCIbits.ACP = PWM_USER_PG5SPCI_ACP;
			PG5SPCIbits.TERMPS = PWM_USER_PG5SPCI_TERMPS;
			PG5SPCIbits.BPSEL = PWM_USER_PG5SPCI_BPSEL;
			PG5SPCIbits.BPEN = PWM_USER_PG5SPCI_BPEN;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* PG5LEBレジスタ */
	/*-----------------------------------------------------------------------*/
		PG5LEB = ( PWM_USER_PG5LEB_LEB << 0u) |
			( PWM_USER_PG5LEB_PLF << 16u) |
			( PWM_USER_PG5LEB_PLR << 17u) |
			( PWM_USER_PG5LEB_PHF << 18u) |
			( PWM_USER_PG5LEB_PHR << 19u) ;
		#ifdef DEF_BITNAME
			PG5LEBbits.LEB = PWM_USER_PG5LEB_LEB;
			PG5LEBbits.PLF = PWM_USER_PG5LEB_PLF;
			PG5LEBbits.PLR = PWM_USER_PG5LEB_PLR;
			PG5LEBbits.PHF = PWM_USER_PG5LEB_PHF;
			PG5LEBbits.PHR = PWM_USER_PG5LEB_PHR;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* PG5PHASEレジスタ */
	/*-----------------------------------------------------------------------*/
		PG5PHASE = PWM_USER_PG5PHASE;
	/*-----------------------------------------------------------------------*/
	/* PG5DCレジスタ */
	/*-----------------------------------------------------------------------*/
		PG5DC = PWM_USER_PG5DC; 
	/*-----------------------------------------------------------------------*/
	/* PG5DCAレジスタ */
	/*-----------------------------------------------------------------------*/
		PG5DCA = PWM_USER_PG5DCA;
	/*-----------------------------------------------------------------------*/
	/* PG5PERレジスタ */
	/*-----------------------------------------------------------------------*/
		PG5PER = PWM_USER_PG5PER;
	/*-----------------------------------------------------------------------*/
	/* PG5TRIGAレジスタ */
	/*-----------------------------------------------------------------------*/
		PG5TRIGA = ( PWM_USER_PG5TRIGA_TRIGA << 0u) |
			( PWM_USER_PG5TRIGA_CAHALF << 31u) ;
		#ifdef DEF_BITNAME
			PG5TRIGAbits.TRIGA = PWM_USER_PG5TRIGA_TRIGA;
			PG5TRIGAbits.CAHALF = PWM_USER_PG5TRIGA_CAHALF;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* PG5TRIGBレジスタ */
	/*-----------------------------------------------------------------------*/
		PG5TRIGB = ( PWM_USER_PG5TRIGB_TRIGB << 0u) |
			( PWM_USER_PG5TRIGB_CAHALF << 31u) ;
		#ifdef DEF_BITNAME
			PG5TRIGAbits.TRIGA = PWM_USER_PG5TRIGB_TRIGB;
			PG5TRIGAbits.CAHALF = PWM_USER_PG5TRIGB_CAHALF;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* PG5TRIGCレジスタ */
	/*-----------------------------------------------------------------------*/
		PG5TRIGC = ( PWM_USER_PG5TRIGC_TRIGC << 0u) |
			( PWM_USER_PG5TRIGC_CAHALF << 31u) ;
		#ifdef DEF_BITNAME
			PG5TRIGAbits.TRIGA = PWM_USER_PG5TRIGC_TRIGC;
			PG5TRIGAbits.CAHALF = PWM_USER_PG5TRIGC_CAHALF;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* PG5DTレジスタ */
	/*-----------------------------------------------------------------------*/
		PG5DT = ( PWM_USER_PG5DC_DTL << 0u) |
			( PWM_USER_PG5DC_DTH << 16u) ;
		#ifdef DEF_BITNAME
			PG5DTbits.DTL = PWM_USER_PG5DC_DTL;
			PG5DTbits.DTH = PWM_USER_PG5DC_DTH;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* PG5CAPレジスタ */
	/*-----------------------------------------------------------------------*/
		PG5CAP = 0x00000000u;
#endif
}
/*----------------------------------------------------------------------------*/
/*
* @fn        vdg_PWM6_Set_Register(void) 
* @brief        PG6レジスタを初期化します 
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void vdg_PWM6_Set_Register(void)
{
#if (( PMD_PWMMD == PMD_MODULE_ENABLE ) && ( PMD_PWM6MD == PMD_MODULE_ENABLE ))
   	/*-----------------------------------------------------------------------*/
	/* PG6CONレジスタ */
	/*-----------------------------------------------------------------------*/
		PG6CON = ( PWM_USER_PG6CON_MODSEL << 0u) |
			( PWM_USER_PG6CON_CLKSEL << 3u) |
			( PWM_USER_PG6CON_TRGCNT << 8u) |
			( PWM_USER_PG6CON_ON << 15u) |
			( PWM_USER_PG6CON_SOCS << 16u) |
			( PWM_USER_PG6CON_TRGMOD << 22u) |
			( PWM_USER_PG6CON_UPDMOD << 24u) |
			( PWM_USER_PG6CON_MSTEN << 27u) |
			( PWM_USER_PG6CON_MPHSEL << 29u) |
			( PWM_USER_PG6CON_MPERSEL << 30u) |
			( PWM_USER_PG6CON_MDCSEL << 31u)  ;
		
		#ifdef DEF_BITNAME
			PG6CONbits.MODSEL = PWM_USER_PG6CON_MODSEL;
			PG6CONbits.CLKSEL = PWM_USER_PG6CON_CLKSEL;
			PG6CONbits.TRGCNT = PWM_USER_PG6CON_TRGCNT;
			PG6CONbits.ON = PWM_USER_PG6CON_ON;
			PG6CONbits.SOCS = PWM_USER_PG6CON_SOCS;
			PG6CONbits.TRGMOD = PWM_USER_PG6CON_TRGMOD;
			PG6CONbits.UPDMOD = PWM_USER_PG6CON_UPDMOD;
			PG6CONbits.MSTEN = PWM_USER_PG6CON_MSTEN;
			PG6CONbits.MPHSEL = PWM_USER_PG6CON_MPHSEL;
			PG6CONbits.MPERSEL = PWM_USER_PG6CON_MPERSEL;
			PG6CONbits.MDCSEL = PWM_USER_PG6CON_MDCSEL;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* PG6STATレジスタ */
	/*-----------------------------------------------------------------------*/
		PG6STAT = 0x00000000u;
		#ifdef DEF_BITNAME
			PG6STATbits.TRIG = 0u;
			PG6STATbits.CAHALF = 0u;
			PG6STATbits.STEER = 0u;
			PG6STATbits.UPDREQ = 0u;
			PG6STATbits.UPDATE = 0u;
			PG6STATbits.CAP = 0u;
			PG6STATbits.TRCLR = 0u;
			PG6STATbits.TRSET = 0u;
			PG6STATbits.FFACT = 0u;
			PG6STATbits.CLACT = 0u;
			PG6STATbits.FLTACT = 0u;
			PG6STATbits.SACT = 0u;
			PG6STATbits.FFEVT = 0u;
			PG6STATbits.CLEVT = 0u;
			PG6STATbits.FLTEVT = 0u;
			PG6STATbits.SEVT = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* PG6IOCONレジスタ */
	/*-----------------------------------------------------------------------*/
		PG6IOCON = ( PWM_USER_PG6IOCON_DBDAT << 0u) |
			( PWM_USER_PG6IOCON_FFDAT << 2u) |
			( PWM_USER_PG6IOCON_CLDAT << 4u) |
			( PWM_USER_PG6IOCON_FLTDAT << 6u) |
			( PWM_USER_PG6IOCON_OSYNC << 8u) |
			( PWM_USER_PG6IOCON_OVRDAT << 10u) |
			( PWM_USER_PG6IOCON_OVRENL << 12u) |
			( PWM_USER_PG6IOCON_OVRENH << 13u) |
			( PWM_USER_PG6IOCON_SWAP << 14u) |
			( PWM_USER_PG6IOCON_CLMOD << 15u) |
			( PWM_USER_PG6IOCON_POLL << 16u) |
			( PWM_USER_PG6IOCON_POLH << 17u) |
			( PWM_USER_PG6IOCON_PENL << 18u) |
			( PWM_USER_PG6IOCON_PENH << 19u) |
			( PWM_USER_PG6IOCON_PMOD << 20u) |
			( PWM_USER_PG6IOCON_DTCMPSEL << 24u) |
			( PWM_USER_PG6IOCON_PPSEN << 25u) |
			( PWM_USER_PG6IOCON_CAPSRC << 28u)  ;
		#ifdef DEF_BITNAME
			PG6IOCONbits.DBDAT = PWM_USER_PG6IOCON_DBDAT;
			PG6IOCONbits.FFDAT = PWM_USER_PG6IOCON_FFDAT;
			PG6IOCONbits.CLDAT = PWM_USER_PG6IOCON_CLDAT;
			PG6IOCONbits.FLTDAT = PWM_USER_PG6IOCON_FLTDAT;
			PG6IOCONbits.OSYNC = PWM_USER_PG6IOCON_OSYNC;
			PG6IOCONbits.OVRDAT = PWM_USER_PG6IOCON_OVRDAT;
			PG6IOCONbits.OVRENL = PWM_USER_PG6IOCON_OVRENL;
			PG6IOCONbits.OVRENH = PWM_USER_PG6IOCON_OVRENH;
			PG6IOCONbits.SWAP = PWM_USER_PG6IOCON_SWAP;
			PG6IOCONbits.CLMOD = PWM_USER_PG6IOCON_CLMOD;
			PG6IOCONbits.POLL = PWM_USER_PG6IOCON_POLL;
			PG6IOCONbits.POLH = PWM_USER_PG6IOCON_POLH;
			PG6IOCONbits.PENL = PWM_USER_PG6IOCON_PENL;
			PG6IOCONbits.PENH = PWM_USER_PG6IOCON_PENH;
			PG6IOCONbits.PMOD = PWM_USER_PG6IOCON_PMOD;
			PG6IOCONbits.DTCMPSEL = PWM_USER_PG6IOCON_DTCMPSEL;
			PG6IOCONbits.PPSEN = PWM_USER_PG6IOCON_PPSEN;
			PG6IOCONbits.CAPSRC = PWM_USER_PG6IOCON_CAPSRC;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* PG6EVTレジスタ */
	/*-----------------------------------------------------------------------*/
		PG6EVT = ( PWM_USER_PG6EVT_PGTRGSEL << 0u) |
			( PWM_USER_PG6EVT_UPDTRG << 3u) |
			( PWM_USER_PG6EVT_PWMPCI << 5u) |
			( PWM_USER_PG6EVT_ADTR1EN1 << 8u) |
			( PWM_USER_PG6EVT_ADTR1EN2 << 9u) |
			( PWM_USER_PG6EVT_ADTR1EN3 << 10u) |
			( PWM_USER_PG6EVT_ADTR1PS << 11u) |
			( PWM_USER_PG6EVT_ADTR1OFS << 16u) |
			( PWM_USER_PG6EVT_ADTR2EN1 << 21u) |
			( PWM_USER_PG6EVT_ADTR2EN2 << 22u) |
			( PWM_USER_PG6EVT_ADTR2EN3 << 23u) |
			( PWM_USER_PG6EVT_IEVTSEL << 24u) |
			( PWM_USER_PG6EVT_SIEN << 28u) |
			( PWM_USER_PG6EVT_FFIEN << 29u) |
			( PWM_USER_PG6EVT_CLIEN << 30u) |
			( PWM_USER_PG6EVT_FLTIEN << 31u)  ;
		#ifdef DEF_BITNAME
			PG6EVTbits.PGTRGSEL = PWM_USER_PG6EVT_PGTRGSEL;
			PG6EVTbits.UPDTRG = PWM_USER_PG6EVT_UPDTRG;
			PG6EVTbits.PWMPCI = PWM_USER_PG6EVT_PWMPCI;
			PG6EVTbits.ADTR1EN1 = PWM_USER_PG6EVT_ADTR1EN1;
			PG6EVTbits.ADTR1EN2 = PWM_USER_PG6EVT_ADTR1EN2;
			PG6EVTbits.ADTR1EN3 = PWM_USER_PG6EVT_ADTR1EN3;
			PG6EVTbits.ADTR1PS = PWM_USER_PG6EVT_ADTR1PS;
			PG6EVTbits.ADTR1OFS = PWM_USER_PG6EVT_ADTR1OFS;
			PG6EVTbits.ADTR2EN1 = PWM_USER_PG6EVT_ADTR2EN1;
			PG6EVTbits.ADTR2EN2 = PWM_USER_PG6EVT_ADTR2EN2;
			PG6EVTbits.ADTR2EN3 = PWM_USER_PG6EVT_ADTR2EN3;
			PG6EVTbits.IEVTSEL = PWM_USER_PG6EVT_IEVTSEL;
			PG6EVTbits.SIEN = PWM_USER_PG6EVT_SIEN;
			PG6EVTbits.FFIEN = PWM_USER_PG6EVT_FFIEN;
			PG6EVTbits.CLIEN = PWM_USER_PG6EVT_CLIEN;
			PG6EVTbits.FLTIEN = PWM_USER_PG6EVT_FLTIEN;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* PG6FPCIレジスタ */
	/*-----------------------------------------------------------------------*/
		PG6FPCI = ( PWM_USER_PG6FPCI_PSS << 0u) |
			( PWM_USER_PG6FPCI_PPS << 5u) |
			( PWM_USER_PG6FPCI_PSYNC << 6u) |
			( PWM_USER_PG6FPCI_SWTERM << 7u) |
			( PWM_USER_PG6FPCI_AQSS << 8u) |
			( PWM_USER_PG6FPCI_AQPS << 11u) |
			( PWM_USER_PG6FPCI_TERM << 12u) |
			( PWM_USER_PG6FPCI_TSYNCDIS << 15u) |
			( PWM_USER_PG6FPCI_TQSS << 16u) |
			( PWM_USER_PG6FPCI_TQPS << 19u) |
			( PWM_USER_PG6FPCI_LATMOD << 20u) |
			( PWM_USER_PG6FPCI_SWPCIM << 21u) |
			( PWM_USER_PG6FPCI_SWPCI << 23u) |
			( PWM_USER_PG6FPCI_ACP << 24u) |
			( PWM_USER_PG6FPCI_TERMPS << 27u) |
			( PWM_USER_PG6FPCI_BPSEL << 28u) |
			( PWM_USER_PG6FPCI_BPEN << 31u)  ;
		#ifdef DEF_BITNAME
			PG6FPCIbits.PSS = PWM_USER_PG6FPCI_PSS;
			PG6FPCIbits.PPS = PWM_USER_PG6FPCI_PPS;
			PG6FPCIbits.PSYNC = PWM_USER_PG6FPCI_PSYNC;
			PG6FPCIbits.SWTERM = PWM_USER_PG6FPCI_SWTERM;
			PG6FPCIbits.AQSS = PWM_USER_PG6FPCI_AQSS;
			PG6FPCIbits.AQPS = PWM_USER_PG6FPCI_AQPS;
			PG6FPCIbits.TERM = PWM_USER_PG6FPCI_TERM;
			PG6FPCIbits.TSYNCDIS = PWM_USER_PG6FPCI_TSYNCDIS;
			PG6FPCIbits.TQSS = PWM_USER_PG6FPCI_TQSS;
			PG6FPCIbits.TQPS = PWM_USER_PG6FPCI_TQPS;
			PG6FPCIbits.LATMOD = PWM_USER_PG6FPCI_LATMOD;
			PG6FPCIbits.SWPCIM = PWM_USER_PG6FPCI_SWPCIM;
			PG6FPCIbits.SWPCI = PWM_USER_PG6FPCI_SWPCI;
			PG6FPCIbits.ACP = PWM_USER_PG6FPCI_ACP;
			PG6FPCIbits.TERMPS = PWM_USER_PG6FPCI_TERMPS;
			PG6FPCIbits.BPSEL = PWM_USER_PG6FPCI_BPSEL;
			PG6FPCIbits.BPEN = PWM_USER_PG6FPCI_BPEN;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* PG6CLPCIレジスタ */
	/*-----------------------------------------------------------------------*/
		PG6CLPCI = ( PWM_USER_PG6CLPCI_PSS << 0u) |
			( PWM_USER_PG6CLPCI_PPS << 5u) |
			( PWM_USER_PG6CLPCI_PSYNC << 6u) |
			( PWM_USER_PG6CLPCI_SWTERM << 7u) |
			( PWM_USER_PG6CLPCI_AQSS << 8u) |
			( PWM_USER_PG6CLPCI_AQPS << 11u) |
			( PWM_USER_PG6CLPCI_TERM << 12u) |
			( PWM_USER_PG6CLPCI_TSYNCDIS << 15u) |
			( PWM_USER_PG6CLPCI_TQSS << 16u) |
			( PWM_USER_PG6CLPCI_TQPS << 19u) |
			( PWM_USER_PG6CLPCI_LATMOD << 20u) |
			( PWM_USER_PG6CLPCI_SWPCIM << 21u) |
			( PWM_USER_PG6CLPCI_SWPCI << 23u) |
			( PWM_USER_PG6CLPCI_ACP << 24u) |
			( PWM_USER_PG6CLPCI_TERMPS << 27u) |
			( PWM_USER_PG6CLPCI_BPSEL << 28u) |
			( PWM_USER_PG6CLPCI_BPEN << 31u)  ;
		#ifdef DEF_BITNAME
			PG6CLPCIbits.PSS = PWM_USER_PG6CLPCI_PSS;
			PG6CLPCIbits.PPS = PWM_USER_PG6CLPCI_PPS;
			PG6CLPCIbits.PSYNC = PWM_USER_PG6CLPCI_PSYNC;
			PG6CLPCIbits.SWTERM = PWM_USER_PG6CLPCI_SWTERM;
			PG6CLPCIbits.AQSS = PWM_USER_PG6CLPCI_AQSS;
			PG6CLPCIbits.AQPS = PWM_USER_PG6CLPCI_AQPS;
			PG6CLPCIbits.TERM = PWM_USER_PG6CLPCI_TERM;
			PG6CLPCIbits.TSYNCDIS = PWM_USER_PG6CLPCI_TSYNCDIS;
			PG6CLPCIbits.TQSS = PWM_USER_PG6CLPCI_TQSS;
			PG6CLPCIbits.TQPS = PWM_USER_PG6CLPCI_TQPS;
			PG6CLPCIbits.LATMOD = PWM_USER_PG6CLPCI_LATMOD;
			PG6CLPCIbits.SWPCIM = PWM_USER_PG6CLPCI_SWPCIM;
			PG6CLPCIbits.SWPCI = PWM_USER_PG6CLPCI_SWPCI;
			PG6CLPCIbits.ACP = PWM_USER_PG6CLPCI_ACP;
			PG6CLPCIbits.TERMPS = PWM_USER_PG6CLPCI_TERMPS;
			PG6CLPCIbits.BPSEL = PWM_USER_PG6CLPCI_BPSEL;
			PG6CLPCIbits.BPEN = PWM_USER_PG6CLPCI_BPEN;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* PG6FFPCIレジスタ */
	/*-----------------------------------------------------------------------*/
		PG6FFPCI = ( PWM_USER_PG6FFPCI_PSS << 0u) |
			( PWM_USER_PG6FFPCI_PPS << 5u) |
			( PWM_USER_PG6FFPCI_PSYNC << 6u) |
			( PWM_USER_PG6FFPCI_SWTERM << 7u) |
			( PWM_USER_PG6FFPCI_AQSS << 8u) |
			( PWM_USER_PG6FFPCI_AQPS << 11u) |
			( PWM_USER_PG6FFPCI_TERM << 12u) |
			( PWM_USER_PG6FFPCI_TSYNCDIS << 15u) |
			( PWM_USER_PG6FFPCI_TQSS << 16u) |
			( PWM_USER_PG6FFPCI_TQPS << 19u) |
			( PWM_USER_PG6FFPCI_LATMOD << 20u) |
			( PWM_USER_PG6FFPCI_SWPCIM << 21u) |
			( PWM_USER_PG6FFPCI_SWPCI << 23u) |
			( PWM_USER_PG6FFPCI_ACP << 24u) |
			( PWM_USER_PG6FFPCI_TERMPS << 27u) |
			( PWM_USER_PG6FFPCI_BPSEL << 28u) |
			( PWM_USER_PG6FFPCI_BPEN << 31u)  ;
		#ifdef DEF_BITNAME
			PG6FFPCIbits.PSS = PWM_USER_PG6FFPCI_PSS;
			PG6FFPCIbits.PPS = PWM_USER_PG6FFPCI_PPS;
			PG6FFPCIbits.PSYNC = PWM_USER_PG6FFPCI_PSYNC;
			PG6FFPCIbits.SWTERM = PWM_USER_PG6FFPCI_SWTERM;
			PG6FFPCIbits.AQSS = PWM_USER_PG6FFPCI_AQSS;
			PG6FFPCIbits.AQPS = PWM_USER_PG6FFPCI_AQPS;
			PG6FFPCIbits.TERM = PWM_USER_PG6FFPCI_TERM;
			PG6FFPCIbits.TSYNCDIS = PWM_USER_PG6FFPCI_TSYNCDIS;
			PG6FFPCIbits.TQSS = PWM_USER_PG6FFPCI_TQSS;
			PG6FFPCIbits.TQPS = PWM_USER_PG6FFPCI_TQPS;
			PG6FFPCIbits.LATMOD = PWM_USER_PG6FFPCI_LATMOD;
			PG6FFPCIbits.SWPCIM = PWM_USER_PG6FFPCI_SWPCIM;
			PG6FFPCIbits.SWPCI = PWM_USER_PG6FFPCI_SWPCI;
			PG6FFPCIbits.ACP = PWM_USER_PG6FFPCI_ACP;
			PG6FFPCIbits.TERMPS = PWM_USER_PG6FFPCI_TERMPS;
			PG6FFPCIbits.BPSEL = PWM_USER_PG6FFPCI_BPSEL;
			PG6FFPCIbits.BPEN = PWM_USER_PG6FFPCI_BPEN;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* PG6SPCIレジスタ */
	/*-----------------------------------------------------------------------*/
		PG6SPCI = ( PWM_USER_PG6SPCI_PSS << 0u) |
			( PWM_USER_PG6SPCI_PPS << 5u) |
			( PWM_USER_PG6SPCI_PSYNC << 6u) |
			( PWM_USER_PG6SPCI_SWTERM << 7u) |
			( PWM_USER_PG6SPCI_AQSS << 8u) |
			( PWM_USER_PG6SPCI_AQPS << 11u) |
			( PWM_USER_PG6SPCI_TERM << 12u) |
			( PWM_USER_PG6SPCI_TSYNCDIS << 15u) |
			( PWM_USER_PG6SPCI_TQSS << 16u) |
			( PWM_USER_PG6SPCI_TQPS << 19u) |
			( PWM_USER_PG6SPCI_LATMOD << 20u) |
			( PWM_USER_PG6SPCI_SWPCIM << 21u) |
			( PWM_USER_PG6SPCI_SWPCI << 23u) |
			( PWM_USER_PG6SPCI_ACP << 24u) |
			( PWM_USER_PG6SPCI_TERMPS << 27u) |
			( PWM_USER_PG6SPCI_BPSEL << 28u) |
			( PWM_USER_PG6SPCI_BPEN << 31u)  ;
		#ifdef DEF_BITNAME
			PG6SPCIbits.PSS = PWM_USER_PG6SPCI_PSS;
			PG6SPCIbits.PPS = PWM_USER_PG6SPCI_PPS;
			PG6SPCIbits.PSYNC = PWM_USER_PG6SPCI_PSYNC;
			PG6SPCIbits.SWTERM = PWM_USER_PG6SPCI_SWTERM;
			PG6SPCIbits.AQSS = PWM_USER_PG6SPCI_AQSS;
			PG6SPCIbits.AQPS = PWM_USER_PG6SPCI_AQPS;
			PG6SPCIbits.TERM = PWM_USER_PG6SPCI_TERM;
			PG6SPCIbits.TSYNCDIS = PWM_USER_PG6SPCI_TSYNCDIS;
			PG6SPCIbits.TQSS = PWM_USER_PG6SPCI_TQSS;
			PG6SPCIbits.TQPS = PWM_USER_PG6SPCI_TQPS;
			PG6SPCIbits.LATMOD = PWM_USER_PG6SPCI_LATMOD;
			PG6SPCIbits.SWPCIM = PWM_USER_PG6SPCI_SWPCIM;
			PG6SPCIbits.SWPCI = PWM_USER_PG6SPCI_SWPCI;
			PG6SPCIbits.ACP = PWM_USER_PG6SPCI_ACP;
			PG6SPCIbits.TERMPS = PWM_USER_PG6SPCI_TERMPS;
			PG6SPCIbits.BPSEL = PWM_USER_PG6SPCI_BPSEL;
			PG6SPCIbits.BPEN = PWM_USER_PG6SPCI_BPEN;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* PG6LEBレジスタ */
	/*-----------------------------------------------------------------------*/
		PG6LEB = ( PWM_USER_PG6LEB_LEB << 0u) |
			( PWM_USER_PG6LEB_PLF << 16u) |
			( PWM_USER_PG6LEB_PLR << 17u) |
			( PWM_USER_PG6LEB_PHF << 18u) |
			( PWM_USER_PG6LEB_PHR << 19u) ;
		#ifdef DEF_BITNAME
			PG6LEBbits.LEB = PWM_USER_PG6LEB_LEB;
			PG6LEBbits.PLF = PWM_USER_PG6LEB_PLF;
			PG6LEBbits.PLR = PWM_USER_PG6LEB_PLR;
			PG6LEBbits.PHF = PWM_USER_PG6LEB_PHF;
			PG6LEBbits.PHR = PWM_USER_PG6LEB_PHR;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* PG6PHASEレジスタ */
	/*-----------------------------------------------------------------------*/
		PG6PHASE = PWM_USER_PG6PHASE;
	/*-----------------------------------------------------------------------*/
	/* PG6DCレジスタ */
	/*-----------------------------------------------------------------------*/
		PG6DC = PWM_USER_PG6DC; 
	/*-----------------------------------------------------------------------*/
	/* PG6DCAレジスタ */
	/*-----------------------------------------------------------------------*/
		PG6DCA = PWM_USER_PG6DCA;
	/*-----------------------------------------------------------------------*/
	/* PG6PERレジスタ */
	/*-----------------------------------------------------------------------*/
		PG6PER = PWM_USER_PG6PER;
	/*-----------------------------------------------------------------------*/
	/* PG6TRIGAレジスタ */
	/*-----------------------------------------------------------------------*/
		PG6TRIGA = ( PWM_USER_PG6TRIGA_TRIGA << 0u) |
			( PWM_USER_PG6TRIGA_CAHALF << 31u) ;
		#ifdef DEF_BITNAME
			PG6TRIGAbits.TRIGA = PWM_USER_PG6TRIGA_TRIGA;
			PG6TRIGAbits.CAHALF = PWM_USER_PG6TRIGA_CAHALF;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* PG6TRIGBレジスタ */
	/*-----------------------------------------------------------------------*/
		PG6TRIGB = ( PWM_USER_PG6TRIGB_TRIGB << 0u) |
			( PWM_USER_PG6TRIGB_CAHALF << 31u) ;
		#ifdef DEF_BITNAME
			PG6TRIGAbits.TRIGA = PWM_USER_PG6TRIGB_TRIGB;
			PG6TRIGAbits.CAHALF = PWM_USER_PG6TRIGB_CAHALF;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* PG6TRIGCレジスタ */
	/*-----------------------------------------------------------------------*/
		PG6TRIGC = ( PWM_USER_PG6TRIGC_TRIGC << 0u) |
			( PWM_USER_PG6TRIGC_CAHALF << 31u) ;
		#ifdef DEF_BITNAME
			PG6TRIGAbits.TRIGA = PWM_USER_PG6TRIGC_TRIGC;
			PG6TRIGAbits.CAHALF = PWM_USER_PG6TRIGC_CAHALF;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* PG6DTレジスタ */
	/*-----------------------------------------------------------------------*/
		PG6DT = ( PWM_USER_PG6DC_DTL << 0u) |
			( PWM_USER_PG6DC_DTH << 16u) ;
		#ifdef DEF_BITNAME
			PG6DTbits.DTL = PWM_USER_PG6DC_DTL;
			PG6DTbits.DTH = PWM_USER_PG6DC_DTH;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* PG6CAPレジスタ */
	/*-----------------------------------------------------------------------*/
		PG6CAP = 0x00000000u;
#endif
}
/*----------------------------------------------------------------------------*/
/*
* @fn        vdg_PWM7_Set_Register(void) 
* @brief        PG7レジスタを初期化します 
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void vdg_PWM7_Set_Register(void)
{
#if (( PMD_PWMMD == PMD_MODULE_ENABLE ) && ( PMD_PWM7MD == PMD_MODULE_ENABLE ))
    	/*-----------------------------------------------------------------------*/
	/* PG7CONレジスタ */
	/*-----------------------------------------------------------------------*/
		PG7CON = ( PWM_USER_PG7CON_MODSEL << 0u) |
			( PWM_USER_PG7CON_CLKSEL << 3u) |
			( PWM_USER_PG7CON_TRGCNT << 8u) |
			( PWM_USER_PG7CON_ON << 15u) |
			( PWM_USER_PG7CON_SOCS << 16u) |
			( PWM_USER_PG7CON_TRGMOD << 22u) |
			( PWM_USER_PG7CON_UPDMOD << 24u) |
			( PWM_USER_PG7CON_MSTEN << 27u) |
			( PWM_USER_PG7CON_MPHSEL << 29u) |
			( PWM_USER_PG7CON_MPERSEL << 30u) |
			( PWM_USER_PG7CON_MDCSEL << 31u)  ;
		
		#ifdef DEF_BITNAME
			PG7CONbits.MODSEL = PWM_USER_PG7CON_MODSEL;
			PG7CONbits.CLKSEL = PWM_USER_PG7CON_CLKSEL;
			PG7CONbits.TRGCNT = PWM_USER_PG7CON_TRGCNT;
			PG7CONbits.ON = PWM_USER_PG7CON_ON;
			PG7CONbits.SOCS = PWM_USER_PG7CON_SOCS;
			PG7CONbits.TRGMOD = PWM_USER_PG7CON_TRGMOD;
			PG7CONbits.UPDMOD = PWM_USER_PG7CON_UPDMOD;
			PG7CONbits.MSTEN = PWM_USER_PG7CON_MSTEN;
			PG7CONbits.MPHSEL = PWM_USER_PG7CON_MPHSEL;
			PG7CONbits.MPERSEL = PWM_USER_PG7CON_MPERSEL;
			PG7CONbits.MDCSEL = PWM_USER_PG7CON_MDCSEL;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* PG7STATレジスタ */
	/*-----------------------------------------------------------------------*/
		PG7STAT = 0x00000000u;
		#ifdef DEF_BITNAME
			PG7STATbits.TRIG = 0u;
			PG7STATbits.CAHALF = 0u;
			PG7STATbits.STEER = 0u;
			PG7STATbits.UPDREQ = 0u;
			PG7STATbits.UPDATE = 0u;
			PG7STATbits.CAP = 0u;
			PG7STATbits.TRCLR = 0u;
			PG7STATbits.TRSET = 0u;
			PG7STATbits.FFACT = 0u;
			PG7STATbits.CLACT = 0u;
			PG7STATbits.FLTACT = 0u;
			PG7STATbits.SACT = 0u;
			PG7STATbits.FFEVT = 0u;
			PG7STATbits.CLEVT = 0u;
			PG7STATbits.FLTEVT = 0u;
			PG7STATbits.SEVT = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* PG7IOCONレジスタ */
	/*-----------------------------------------------------------------------*/
		PG7IOCON = ( PWM_USER_PG7IOCON_DBDAT << 0u) |
			( PWM_USER_PG7IOCON_FFDAT << 2u) |
			( PWM_USER_PG7IOCON_CLDAT << 4u) |
			( PWM_USER_PG7IOCON_FLTDAT << 6u) |
			( PWM_USER_PG7IOCON_OSYNC << 8u) |
			( PWM_USER_PG7IOCON_OVRDAT << 10u) |
			( PWM_USER_PG7IOCON_OVRENL << 12u) |
			( PWM_USER_PG7IOCON_OVRENH << 13u) |
			( PWM_USER_PG7IOCON_SWAP << 14u) |
			( PWM_USER_PG7IOCON_CLMOD << 15u) |
			( PWM_USER_PG7IOCON_POLL << 16u) |
			( PWM_USER_PG7IOCON_POLH << 17u) |
			( PWM_USER_PG7IOCON_PENL << 18u) |
			( PWM_USER_PG7IOCON_PENH << 19u) |
			( PWM_USER_PG7IOCON_PMOD << 20u) |
			( PWM_USER_PG7IOCON_DTCMPSEL << 24u) |
			( PWM_USER_PG7IOCON_PPSEN << 25u) |
			( PWM_USER_PG7IOCON_CAPSRC << 28u)  ;
		#ifdef DEF_BITNAME
			PG7IOCONbits.DBDAT = PWM_USER_PG7IOCON_DBDAT;
			PG7IOCONbits.FFDAT = PWM_USER_PG7IOCON_FFDAT;
			PG7IOCONbits.CLDAT = PWM_USER_PG7IOCON_CLDAT;
			PG7IOCONbits.FLTDAT = PWM_USER_PG7IOCON_FLTDAT;
			PG7IOCONbits.OSYNC = PWM_USER_PG7IOCON_OSYNC;
			PG7IOCONbits.OVRDAT = PWM_USER_PG7IOCON_OVRDAT;
			PG7IOCONbits.OVRENL = PWM_USER_PG7IOCON_OVRENL;
			PG7IOCONbits.OVRENH = PWM_USER_PG7IOCON_OVRENH;
			PG7IOCONbits.SWAP = PWM_USER_PG7IOCON_SWAP;
			PG7IOCONbits.CLMOD = PWM_USER_PG7IOCON_CLMOD;
			PG7IOCONbits.POLL = PWM_USER_PG7IOCON_POLL;
			PG7IOCONbits.POLH = PWM_USER_PG7IOCON_POLH;
			PG7IOCONbits.PENL = PWM_USER_PG7IOCON_PENL;
			PG7IOCONbits.PENH = PWM_USER_PG7IOCON_PENH;
			PG7IOCONbits.PMOD = PWM_USER_PG7IOCON_PMOD;
			PG7IOCONbits.DTCMPSEL = PWM_USER_PG7IOCON_DTCMPSEL;
			PG7IOCONbits.PPSEN = PWM_USER_PG7IOCON_PPSEN;
			PG7IOCONbits.CAPSRC = PWM_USER_PG7IOCON_CAPSRC;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* PG7EVTレジスタ */
	/*-----------------------------------------------------------------------*/
		PG7EVT = ( PWM_USER_PG7EVT_PGTRGSEL << 0u) |
			( PWM_USER_PG7EVT_UPDTRG << 3u) |
			( PWM_USER_PG7EVT_PWMPCI << 5u) |
			( PWM_USER_PG7EVT_ADTR1EN1 << 8u) |
			( PWM_USER_PG7EVT_ADTR1EN2 << 9u) |
			( PWM_USER_PG7EVT_ADTR1EN3 << 10u) |
			( PWM_USER_PG7EVT_ADTR1PS << 11u) |
			( PWM_USER_PG7EVT_ADTR1OFS << 16u) |
			( PWM_USER_PG7EVT_ADTR2EN1 << 21u) |
			( PWM_USER_PG7EVT_ADTR2EN2 << 22u) |
			( PWM_USER_PG7EVT_ADTR2EN3 << 23u) |
			( PWM_USER_PG7EVT_IEVTSEL << 24u) |
			( PWM_USER_PG7EVT_SIEN << 28u) |
			( PWM_USER_PG7EVT_FFIEN << 29u) |
			( PWM_USER_PG7EVT_CLIEN << 30u) |
			( PWM_USER_PG7EVT_FLTIEN << 31u)  ;
		#ifdef DEF_BITNAME
			PG7EVTbits.PGTRGSEL = PWM_USER_PG7EVT_PGTRGSEL;
			PG7EVTbits.UPDTRG = PWM_USER_PG7EVT_UPDTRG;
			PG7EVTbits.PWMPCI = PWM_USER_PG7EVT_PWMPCI;
			PG7EVTbits.ADTR1EN1 = PWM_USER_PG7EVT_ADTR1EN1;
			PG7EVTbits.ADTR1EN2 = PWM_USER_PG7EVT_ADTR1EN2;
			PG7EVTbits.ADTR1EN3 = PWM_USER_PG7EVT_ADTR1EN3;
			PG7EVTbits.ADTR1PS = PWM_USER_PG7EVT_ADTR1PS;
			PG7EVTbits.ADTR1OFS = PWM_USER_PG7EVT_ADTR1OFS;
			PG7EVTbits.ADTR2EN1 = PWM_USER_PG7EVT_ADTR2EN1;
			PG7EVTbits.ADTR2EN2 = PWM_USER_PG7EVT_ADTR2EN2;
			PG7EVTbits.ADTR2EN3 = PWM_USER_PG7EVT_ADTR2EN3;
			PG7EVTbits.IEVTSEL = PWM_USER_PG7EVT_IEVTSEL;
			PG7EVTbits.SIEN = PWM_USER_PG7EVT_SIEN;
			PG7EVTbits.FFIEN = PWM_USER_PG7EVT_FFIEN;
			PG7EVTbits.CLIEN = PWM_USER_PG7EVT_CLIEN;
			PG7EVTbits.FLTIEN = PWM_USER_PG7EVT_FLTIEN;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* PG7FPCIレジスタ */
	/*-----------------------------------------------------------------------*/
		PG7FPCI = ( PWM_USER_PG7FPCI_PSS << 0u) |
			( PWM_USER_PG7FPCI_PPS << 5u) |
			( PWM_USER_PG7FPCI_PSYNC << 6u) |
			( PWM_USER_PG7FPCI_SWTERM << 7u) |
			( PWM_USER_PG7FPCI_AQSS << 8u) |
			( PWM_USER_PG7FPCI_AQPS << 11u) |
			( PWM_USER_PG7FPCI_TERM << 12u) |
			( PWM_USER_PG7FPCI_TSYNCDIS << 15u) |
			( PWM_USER_PG7FPCI_TQSS << 16u) |
			( PWM_USER_PG7FPCI_TQPS << 19u) |
			( PWM_USER_PG7FPCI_LATMOD << 20u) |
			( PWM_USER_PG7FPCI_SWPCIM << 21u) |
			( PWM_USER_PG7FPCI_SWPCI << 23u) |
			( PWM_USER_PG7FPCI_ACP << 24u) |
			( PWM_USER_PG7FPCI_TERMPS << 27u) |
			( PWM_USER_PG7FPCI_BPSEL << 28u) |
			( PWM_USER_PG7FPCI_BPEN << 31u)  ;
		#ifdef DEF_BITNAME
			PG7FPCIbits.PSS = PWM_USER_PG7FPCI_PSS;
			PG7FPCIbits.PPS = PWM_USER_PG7FPCI_PPS;
			PG7FPCIbits.PSYNC = PWM_USER_PG7FPCI_PSYNC;
			PG7FPCIbits.SWTERM = PWM_USER_PG7FPCI_SWTERM;
			PG7FPCIbits.AQSS = PWM_USER_PG7FPCI_AQSS;
			PG7FPCIbits.AQPS = PWM_USER_PG7FPCI_AQPS;
			PG7FPCIbits.TERM = PWM_USER_PG7FPCI_TERM;
			PG7FPCIbits.TSYNCDIS = PWM_USER_PG7FPCI_TSYNCDIS;
			PG7FPCIbits.TQSS = PWM_USER_PG7FPCI_TQSS;
			PG7FPCIbits.TQPS = PWM_USER_PG7FPCI_TQPS;
			PG7FPCIbits.LATMOD = PWM_USER_PG7FPCI_LATMOD;
			PG7FPCIbits.SWPCIM = PWM_USER_PG7FPCI_SWPCIM;
			PG7FPCIbits.SWPCI = PWM_USER_PG7FPCI_SWPCI;
			PG7FPCIbits.ACP = PWM_USER_PG7FPCI_ACP;
			PG7FPCIbits.TERMPS = PWM_USER_PG7FPCI_TERMPS;
			PG7FPCIbits.BPSEL = PWM_USER_PG7FPCI_BPSEL;
			PG7FPCIbits.BPEN = PWM_USER_PG7FPCI_BPEN;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* PG7CLPCIレジスタ */
	/*-----------------------------------------------------------------------*/
		PG7CLPCI = ( PWM_USER_PG7CLPCI_PSS << 0u) |
			( PWM_USER_PG7CLPCI_PPS << 5u) |
			( PWM_USER_PG7CLPCI_PSYNC << 6u) |
			( PWM_USER_PG7CLPCI_SWTERM << 7u) |
			( PWM_USER_PG7CLPCI_AQSS << 8u) |
			( PWM_USER_PG7CLPCI_AQPS << 11u) |
			( PWM_USER_PG7CLPCI_TERM << 12u) |
			( PWM_USER_PG7CLPCI_TSYNCDIS << 15u) |
			( PWM_USER_PG7CLPCI_TQSS << 16u) |
			( PWM_USER_PG7CLPCI_TQPS << 19u) |
			( PWM_USER_PG7CLPCI_LATMOD << 20u) |
			( PWM_USER_PG7CLPCI_SWPCIM << 21u) |
			( PWM_USER_PG7CLPCI_SWPCI << 23u) |
			( PWM_USER_PG7CLPCI_ACP << 24u) |
			( PWM_USER_PG7CLPCI_TERMPS << 27u) |
			( PWM_USER_PG7CLPCI_BPSEL << 28u) |
			( PWM_USER_PG7CLPCI_BPEN << 31u)  ;
		#ifdef DEF_BITNAME
			PG7CLPCIbits.PSS = PWM_USER_PG7CLPCI_PSS;
			PG7CLPCIbits.PPS = PWM_USER_PG7CLPCI_PPS;
			PG7CLPCIbits.PSYNC = PWM_USER_PG7CLPCI_PSYNC;
			PG7CLPCIbits.SWTERM = PWM_USER_PG7CLPCI_SWTERM;
			PG7CLPCIbits.AQSS = PWM_USER_PG7CLPCI_AQSS;
			PG7CLPCIbits.AQPS = PWM_USER_PG7CLPCI_AQPS;
			PG7CLPCIbits.TERM = PWM_USER_PG7CLPCI_TERM;
			PG7CLPCIbits.TSYNCDIS = PWM_USER_PG7CLPCI_TSYNCDIS;
			PG7CLPCIbits.TQSS = PWM_USER_PG7CLPCI_TQSS;
			PG7CLPCIbits.TQPS = PWM_USER_PG7CLPCI_TQPS;
			PG7CLPCIbits.LATMOD = PWM_USER_PG7CLPCI_LATMOD;
			PG7CLPCIbits.SWPCIM = PWM_USER_PG7CLPCI_SWPCIM;
			PG7CLPCIbits.SWPCI = PWM_USER_PG7CLPCI_SWPCI;
			PG7CLPCIbits.ACP = PWM_USER_PG7CLPCI_ACP;
			PG7CLPCIbits.TERMPS = PWM_USER_PG7CLPCI_TERMPS;
			PG7CLPCIbits.BPSEL = PWM_USER_PG7CLPCI_BPSEL;
			PG7CLPCIbits.BPEN = PWM_USER_PG7CLPCI_BPEN;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* PG7FFPCIレジスタ */
	/*-----------------------------------------------------------------------*/
		PG7FFPCI = ( PWM_USER_PG7FFPCI_PSS << 0u) |
			( PWM_USER_PG7FFPCI_PPS << 5u) |
			( PWM_USER_PG7FFPCI_PSYNC << 6u) |
			( PWM_USER_PG7FFPCI_SWTERM << 7u) |
			( PWM_USER_PG7FFPCI_AQSS << 8u) |
			( PWM_USER_PG7FFPCI_AQPS << 11u) |
			( PWM_USER_PG7FFPCI_TERM << 12u) |
			( PWM_USER_PG7FFPCI_TSYNCDIS << 15u) |
			( PWM_USER_PG7FFPCI_TQSS << 16u) |
			( PWM_USER_PG7FFPCI_TQPS << 19u) |
			( PWM_USER_PG7FFPCI_LATMOD << 20u) |
			( PWM_USER_PG7FFPCI_SWPCIM << 21u) |
			( PWM_USER_PG7FFPCI_SWPCI << 23u) |
			( PWM_USER_PG7FFPCI_ACP << 24u) |
			( PWM_USER_PG7FFPCI_TERMPS << 27u) |
			( PWM_USER_PG7FFPCI_BPSEL << 28u) |
			( PWM_USER_PG7FFPCI_BPEN << 31u)  ;
		#ifdef DEF_BITNAME
			PG7FFPCIbits.PSS = PWM_USER_PG7FFPCI_PSS;
			PG7FFPCIbits.PPS = PWM_USER_PG7FFPCI_PPS;
			PG7FFPCIbits.PSYNC = PWM_USER_PG7FFPCI_PSYNC;
			PG7FFPCIbits.SWTERM = PWM_USER_PG7FFPCI_SWTERM;
			PG7FFPCIbits.AQSS = PWM_USER_PG7FFPCI_AQSS;
			PG7FFPCIbits.AQPS = PWM_USER_PG7FFPCI_AQPS;
			PG7FFPCIbits.TERM = PWM_USER_PG7FFPCI_TERM;
			PG7FFPCIbits.TSYNCDIS = PWM_USER_PG7FFPCI_TSYNCDIS;
			PG7FFPCIbits.TQSS = PWM_USER_PG7FFPCI_TQSS;
			PG7FFPCIbits.TQPS = PWM_USER_PG7FFPCI_TQPS;
			PG7FFPCIbits.LATMOD = PWM_USER_PG7FFPCI_LATMOD;
			PG7FFPCIbits.SWPCIM = PWM_USER_PG7FFPCI_SWPCIM;
			PG7FFPCIbits.SWPCI = PWM_USER_PG7FFPCI_SWPCI;
			PG7FFPCIbits.ACP = PWM_USER_PG7FFPCI_ACP;
			PG7FFPCIbits.TERMPS = PWM_USER_PG7FFPCI_TERMPS;
			PG7FFPCIbits.BPSEL = PWM_USER_PG7FFPCI_BPSEL;
			PG7FFPCIbits.BPEN = PWM_USER_PG7FFPCI_BPEN;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* PG7SPCIレジスタ */
	/*-----------------------------------------------------------------------*/
		PG7SPCI = ( PWM_USER_PG7SPCI_PSS << 0u) |
			( PWM_USER_PG7SPCI_PPS << 5u) |
			( PWM_USER_PG7SPCI_PSYNC << 6u) |
			( PWM_USER_PG7SPCI_SWTERM << 7u) |
			( PWM_USER_PG7SPCI_AQSS << 8u) |
			( PWM_USER_PG7SPCI_AQPS << 11u) |
			( PWM_USER_PG7SPCI_TERM << 12u) |
			( PWM_USER_PG7SPCI_TSYNCDIS << 15u) |
			( PWM_USER_PG7SPCI_TQSS << 16u) |
			( PWM_USER_PG7SPCI_TQPS << 19u) |
			( PWM_USER_PG7SPCI_LATMOD << 20u) |
			( PWM_USER_PG7SPCI_SWPCIM << 21u) |
			( PWM_USER_PG7SPCI_SWPCI << 23u) |
			( PWM_USER_PG7SPCI_ACP << 24u) |
			( PWM_USER_PG7SPCI_TERMPS << 27u) |
			( PWM_USER_PG7SPCI_BPSEL << 28u) |
			( PWM_USER_PG7SPCI_BPEN << 31u)  ;
		#ifdef DEF_BITNAME
			PG7SPCIbits.PSS = PWM_USER_PG7SPCI_PSS;
			PG7SPCIbits.PPS = PWM_USER_PG7SPCI_PPS;
			PG7SPCIbits.PSYNC = PWM_USER_PG7SPCI_PSYNC;
			PG7SPCIbits.SWTERM = PWM_USER_PG7SPCI_SWTERM;
			PG7SPCIbits.AQSS = PWM_USER_PG7SPCI_AQSS;
			PG7SPCIbits.AQPS = PWM_USER_PG7SPCI_AQPS;
			PG7SPCIbits.TERM = PWM_USER_PG7SPCI_TERM;
			PG7SPCIbits.TSYNCDIS = PWM_USER_PG7SPCI_TSYNCDIS;
			PG7SPCIbits.TQSS = PWM_USER_PG7SPCI_TQSS;
			PG7SPCIbits.TQPS = PWM_USER_PG7SPCI_TQPS;
			PG7SPCIbits.LATMOD = PWM_USER_PG7SPCI_LATMOD;
			PG7SPCIbits.SWPCIM = PWM_USER_PG7SPCI_SWPCIM;
			PG7SPCIbits.SWPCI = PWM_USER_PG7SPCI_SWPCI;
			PG7SPCIbits.ACP = PWM_USER_PG7SPCI_ACP;
			PG7SPCIbits.TERMPS = PWM_USER_PG7SPCI_TERMPS;
			PG7SPCIbits.BPSEL = PWM_USER_PG7SPCI_BPSEL;
			PG7SPCIbits.BPEN = PWM_USER_PG7SPCI_BPEN;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* PG7LEBレジスタ */
	/*-----------------------------------------------------------------------*/
		PG7LEB = ( PWM_USER_PG7LEB_LEB << 0u) |
			( PWM_USER_PG7LEB_PLF << 16u) |
			( PWM_USER_PG7LEB_PLR << 17u) |
			( PWM_USER_PG7LEB_PHF << 18u) |
			( PWM_USER_PG7LEB_PHR << 19u) ;
		#ifdef DEF_BITNAME
			PG7LEBbits.LEB = PWM_USER_PG7LEB_LEB;
			PG7LEBbits.PLF = PWM_USER_PG7LEB_PLF;
			PG7LEBbits.PLR = PWM_USER_PG7LEB_PLR;
			PG7LEBbits.PHF = PWM_USER_PG7LEB_PHF;
			PG7LEBbits.PHR = PWM_USER_PG7LEB_PHR;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* PG7PHASEレジスタ */
	/*-----------------------------------------------------------------------*/
		PG7PHASE = PWM_USER_PG7PHASE;
	/*-----------------------------------------------------------------------*/
	/* PG7DCレジスタ */
	/*-----------------------------------------------------------------------*/
		PG7DC = PWM_USER_PG7DC; 
	/*-----------------------------------------------------------------------*/
	/* PG7DCAレジスタ */
	/*-----------------------------------------------------------------------*/
		PG7DCA = PWM_USER_PG7DCA;
	/*-----------------------------------------------------------------------*/
	/* PG7PERレジスタ */
	/*-----------------------------------------------------------------------*/
		PG7PER = PWM_USER_PG7PER;
	/*-----------------------------------------------------------------------*/
	/* PG7TRIGAレジスタ */
	/*-----------------------------------------------------------------------*/
		PG7TRIGA = ( PWM_USER_PG7TRIGA_TRIGA << 0u) |
			( PWM_USER_PG7TRIGA_CAHALF << 31u) ;
		#ifdef DEF_BITNAME
			PG7TRIGAbits.TRIGA = PWM_USER_PG7TRIGA_TRIGA;
			PG7TRIGAbits.CAHALF = PWM_USER_PG7TRIGA_CAHALF;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* PG7TRIGBレジスタ */
	/*-----------------------------------------------------------------------*/
		PG7TRIGB = ( PWM_USER_PG7TRIGB_TRIGB << 0u) |
			( PWM_USER_PG7TRIGB_CAHALF << 31u) ;
		#ifdef DEF_BITNAME
			PG7TRIGAbits.TRIGA = PWM_USER_PG7TRIGB_TRIGB;
			PG7TRIGAbits.CAHALF = PWM_USER_PG7TRIGB_CAHALF;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* PG7TRIGCレジスタ */
	/*-----------------------------------------------------------------------*/
		PG7TRIGC = ( PWM_USER_PG7TRIGC_TRIGC << 0u) |
			( PWM_USER_PG7TRIGC_CAHALF << 31u) ;
		#ifdef DEF_BITNAME
			PG7TRIGAbits.TRIGA = PWM_USER_PG7TRIGC_TRIGC;
			PG7TRIGAbits.CAHALF = PWM_USER_PG7TRIGC_CAHALF;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* PG7DTレジスタ */
	/*-----------------------------------------------------------------------*/
		PG7DT = ( PWM_USER_PG7DC_DTL << 0u) |
			( PWM_USER_PG7DC_DTH << 16u) ;
		#ifdef DEF_BITNAME
			PG7DTbits.DTL = PWM_USER_PG7DC_DTL;
			PG7DTbits.DTH = PWM_USER_PG7DC_DTH;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* PG7CAPレジスタ */
	/*-----------------------------------------------------------------------*/
		PG7CAP = 0x00000000u;
#endif
}
/*----------------------------------------------------------------------------*/
/*
* @fn        vdg_PWM8_Set_Register(void) 
* @brief        PG8レジスタを初期化します 
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void vdg_PWM8_Set_Register(void)
{
#if (( PMD_PWMMD == PMD_MODULE_ENABLE ) && ( PMD_PWM8MD == PMD_MODULE_ENABLE ))
   	/*-----------------------------------------------------------------------*/
	/* PG8CONレジスタ */
	/*-----------------------------------------------------------------------*/
		PG8CON = ( PWM_USER_PG8CON_MODSEL << 0u) |
			( PWM_USER_PG8CON_CLKSEL << 3u) |
			( PWM_USER_PG8CON_TRGCNT << 8u) |
			( PWM_USER_PG8CON_ON << 15u) |
			( PWM_USER_PG8CON_SOCS << 16u) |
			( PWM_USER_PG8CON_TRGMOD << 22u) |
			( PWM_USER_PG8CON_UPDMOD << 24u) |
			( PWM_USER_PG8CON_MSTEN << 27u) |
			( PWM_USER_PG8CON_MPHSEL << 29u) |
			( PWM_USER_PG8CON_MPERSEL << 30u) |
			( PWM_USER_PG8CON_MDCSEL << 31u)  ;
		
		#ifdef DEF_BITNAME
			PG8CONbits.MODSEL = PWM_USER_PG8CON_MODSEL;
			PG8CONbits.CLKSEL = PWM_USER_PG8CON_CLKSEL;
			PG8CONbits.TRGCNT = PWM_USER_PG8CON_TRGCNT;
			PG8CONbits.ON = PWM_USER_PG8CON_ON;
			PG8CONbits.SOCS = PWM_USER_PG8CON_SOCS;
			PG8CONbits.TRGMOD = PWM_USER_PG8CON_TRGMOD;
			PG8CONbits.UPDMOD = PWM_USER_PG8CON_UPDMOD;
			PG8CONbits.MSTEN = PWM_USER_PG8CON_MSTEN;
			PG8CONbits.MPHSEL = PWM_USER_PG8CON_MPHSEL;
			PG8CONbits.MPERSEL = PWM_USER_PG8CON_MPERSEL;
			PG8CONbits.MDCSEL = PWM_USER_PG8CON_MDCSEL;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* PG8STATレジスタ */
	/*-----------------------------------------------------------------------*/
		PG8STAT = 0x00000000u;
		#ifdef DEF_BITNAME
			PG8STATbits.TRIG = 0u;
			PG8STATbits.CAHALF = 0u;
			PG8STATbits.STEER = 0u;
			PG8STATbits.UPDREQ = 0u;
			PG8STATbits.UPDATE = 0u;
			PG8STATbits.CAP = 0u;
			PG8STATbits.TRCLR = 0u;
			PG8STATbits.TRSET = 0u;
			PG8STATbits.FFACT = 0u;
			PG8STATbits.CLACT = 0u;
			PG8STATbits.FLTACT = 0u;
			PG8STATbits.SACT = 0u;
			PG8STATbits.FFEVT = 0u;
			PG8STATbits.CLEVT = 0u;
			PG8STATbits.FLTEVT = 0u;
			PG8STATbits.SEVT = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* PG8IOCONレジスタ */
	/*-----------------------------------------------------------------------*/
		PG8IOCON = ( PWM_USER_PG8IOCON_DBDAT << 0u) |
			( PWM_USER_PG8IOCON_FFDAT << 2u) |
			( PWM_USER_PG8IOCON_CLDAT << 4u) |
			( PWM_USER_PG8IOCON_FLTDAT << 6u) |
			( PWM_USER_PG8IOCON_OSYNC << 8u) |
			( PWM_USER_PG8IOCON_OVRDAT << 10u) |
			( PWM_USER_PG8IOCON_OVRENL << 12u) |
			( PWM_USER_PG8IOCON_OVRENH << 13u) |
			( PWM_USER_PG8IOCON_SWAP << 14u) |
			( PWM_USER_PG8IOCON_CLMOD << 15u) |
			( PWM_USER_PG8IOCON_POLL << 16u) |
			( PWM_USER_PG8IOCON_POLH << 17u) |
			( PWM_USER_PG8IOCON_PENL << 18u) |
			( PWM_USER_PG8IOCON_PENH << 19u) |
			( PWM_USER_PG8IOCON_PMOD << 20u) |
			( PWM_USER_PG8IOCON_DTCMPSEL << 24u) |
			( PWM_USER_PG8IOCON_PPSEN << 25u) |
			( PWM_USER_PG8IOCON_CAPSRC << 28u)  ;
		#ifdef DEF_BITNAME
			PG8IOCONbits.DBDAT = PWM_USER_PG8IOCON_DBDAT;
			PG8IOCONbits.FFDAT = PWM_USER_PG8IOCON_FFDAT;
			PG8IOCONbits.CLDAT = PWM_USER_PG8IOCON_CLDAT;
			PG8IOCONbits.FLTDAT = PWM_USER_PG8IOCON_FLTDAT;
			PG8IOCONbits.OSYNC = PWM_USER_PG8IOCON_OSYNC;
			PG8IOCONbits.OVRDAT = PWM_USER_PG8IOCON_OVRDAT;
			PG8IOCONbits.OVRENL = PWM_USER_PG8IOCON_OVRENL;
			PG8IOCONbits.OVRENH = PWM_USER_PG8IOCON_OVRENH;
			PG8IOCONbits.SWAP = PWM_USER_PG8IOCON_SWAP;
			PG8IOCONbits.CLMOD = PWM_USER_PG8IOCON_CLMOD;
			PG8IOCONbits.POLL = PWM_USER_PG8IOCON_POLL;
			PG8IOCONbits.POLH = PWM_USER_PG8IOCON_POLH;
			PG8IOCONbits.PENL = PWM_USER_PG8IOCON_PENL;
			PG8IOCONbits.PENH = PWM_USER_PG8IOCON_PENH;
			PG8IOCONbits.PMOD = PWM_USER_PG8IOCON_PMOD;
			PG8IOCONbits.DTCMPSEL = PWM_USER_PG8IOCON_DTCMPSEL;
			PG8IOCONbits.PPSEN = PWM_USER_PG8IOCON_PPSEN;
			PG8IOCONbits.CAPSRC = PWM_USER_PG8IOCON_CAPSRC;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* PG8EVTレジスタ */
	/*-----------------------------------------------------------------------*/
		PG8EVT = ( PWM_USER_PG8EVT_PGTRGSEL << 0u) |
			( PWM_USER_PG8EVT_UPDTRG << 3u) |
			( PWM_USER_PG8EVT_PWMPCI << 5u) |
			( PWM_USER_PG8EVT_ADTR1EN1 << 8u) |
			( PWM_USER_PG8EVT_ADTR1EN2 << 9u) |
			( PWM_USER_PG8EVT_ADTR1EN3 << 10u) |
			( PWM_USER_PG8EVT_ADTR1PS << 11u) |
			( PWM_USER_PG8EVT_ADTR1OFS << 16u) |
			( PWM_USER_PG8EVT_ADTR2EN1 << 21u) |
			( PWM_USER_PG8EVT_ADTR2EN2 << 22u) |
			( PWM_USER_PG8EVT_ADTR2EN3 << 23u) |
			( PWM_USER_PG8EVT_IEVTSEL << 24u) |
			( PWM_USER_PG8EVT_SIEN << 28u) |
			( PWM_USER_PG8EVT_FFIEN << 29u) |
			( PWM_USER_PG8EVT_CLIEN << 30u) |
			( PWM_USER_PG8EVT_FLTIEN << 31u)  ;
		#ifdef DEF_BITNAME
			PG8EVTbits.PGTRGSEL = PWM_USER_PG8EVT_PGTRGSEL;
			PG8EVTbits.UPDTRG = PWM_USER_PG8EVT_UPDTRG;
			PG8EVTbits.PWMPCI = PWM_USER_PG8EVT_PWMPCI;
			PG8EVTbits.ADTR1EN1 = PWM_USER_PG8EVT_ADTR1EN1;
			PG8EVTbits.ADTR1EN2 = PWM_USER_PG8EVT_ADTR1EN2;
			PG8EVTbits.ADTR1EN3 = PWM_USER_PG8EVT_ADTR1EN3;
			PG8EVTbits.ADTR1PS = PWM_USER_PG8EVT_ADTR1PS;
			PG8EVTbits.ADTR1OFS = PWM_USER_PG8EVT_ADTR1OFS;
			PG8EVTbits.ADTR2EN1 = PWM_USER_PG8EVT_ADTR2EN1;
			PG8EVTbits.ADTR2EN2 = PWM_USER_PG8EVT_ADTR2EN2;
			PG8EVTbits.ADTR2EN3 = PWM_USER_PG8EVT_ADTR2EN3;
			PG8EVTbits.IEVTSEL = PWM_USER_PG8EVT_IEVTSEL;
			PG8EVTbits.SIEN = PWM_USER_PG8EVT_SIEN;
			PG8EVTbits.FFIEN = PWM_USER_PG8EVT_FFIEN;
			PG8EVTbits.CLIEN = PWM_USER_PG8EVT_CLIEN;
			PG8EVTbits.FLTIEN = PWM_USER_PG8EVT_FLTIEN;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* PG8FPCIレジスタ */
	/*-----------------------------------------------------------------------*/
		PG8FPCI = ( PWM_USER_PG8FPCI_PSS << 0u) |
			( PWM_USER_PG8FPCI_PPS << 5u) |
			( PWM_USER_PG8FPCI_PSYNC << 6u) |
			( PWM_USER_PG8FPCI_SWTERM << 7u) |
			( PWM_USER_PG8FPCI_AQSS << 8u) |
			( PWM_USER_PG8FPCI_AQPS << 11u) |
			( PWM_USER_PG8FPCI_TERM << 12u) |
			( PWM_USER_PG8FPCI_TSYNCDIS << 15u) |
			( PWM_USER_PG8FPCI_TQSS << 16u) |
			( PWM_USER_PG8FPCI_TQPS << 19u) |
			( PWM_USER_PG8FPCI_LATMOD << 20u) |
			( PWM_USER_PG8FPCI_SWPCIM << 21u) |
			( PWM_USER_PG8FPCI_SWPCI << 23u) |
			( PWM_USER_PG8FPCI_ACP << 24u) |
			( PWM_USER_PG8FPCI_TERMPS << 27u) |
			( PWM_USER_PG8FPCI_BPSEL << 28u) |
			( PWM_USER_PG8FPCI_BPEN << 31u)  ;
		#ifdef DEF_BITNAME
			PG8FPCIbits.PSS = PWM_USER_PG8FPCI_PSS;
			PG8FPCIbits.PPS = PWM_USER_PG8FPCI_PPS;
			PG8FPCIbits.PSYNC = PWM_USER_PG8FPCI_PSYNC;
			PG8FPCIbits.SWTERM = PWM_USER_PG8FPCI_SWTERM;
			PG8FPCIbits.AQSS = PWM_USER_PG8FPCI_AQSS;
			PG8FPCIbits.AQPS = PWM_USER_PG8FPCI_AQPS;
			PG8FPCIbits.TERM = PWM_USER_PG8FPCI_TERM;
			PG8FPCIbits.TSYNCDIS = PWM_USER_PG8FPCI_TSYNCDIS;
			PG8FPCIbits.TQSS = PWM_USER_PG8FPCI_TQSS;
			PG8FPCIbits.TQPS = PWM_USER_PG8FPCI_TQPS;
			PG8FPCIbits.LATMOD = PWM_USER_PG8FPCI_LATMOD;
			PG8FPCIbits.SWPCIM = PWM_USER_PG8FPCI_SWPCIM;
			PG8FPCIbits.SWPCI = PWM_USER_PG8FPCI_SWPCI;
			PG8FPCIbits.ACP = PWM_USER_PG8FPCI_ACP;
			PG8FPCIbits.TERMPS = PWM_USER_PG8FPCI_TERMPS;
			PG8FPCIbits.BPSEL = PWM_USER_PG8FPCI_BPSEL;
			PG8FPCIbits.BPEN = PWM_USER_PG8FPCI_BPEN;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* PG8CLPCIレジスタ */
	/*-----------------------------------------------------------------------*/
		PG8CLPCI = ( PWM_USER_PG8CLPCI_PSS << 0u) |
			( PWM_USER_PG8CLPCI_PPS << 5u) |
			( PWM_USER_PG8CLPCI_PSYNC << 6u) |
			( PWM_USER_PG8CLPCI_SWTERM << 7u) |
			( PWM_USER_PG8CLPCI_AQSS << 8u) |
			( PWM_USER_PG8CLPCI_AQPS << 11u) |
			( PWM_USER_PG8CLPCI_TERM << 12u) |
			( PWM_USER_PG8CLPCI_TSYNCDIS << 15u) |
			( PWM_USER_PG8CLPCI_TQSS << 16u) |
			( PWM_USER_PG8CLPCI_TQPS << 19u) |
			( PWM_USER_PG8CLPCI_LATMOD << 20u) |
			( PWM_USER_PG8CLPCI_SWPCIM << 21u) |
			( PWM_USER_PG8CLPCI_SWPCI << 23u) |
			( PWM_USER_PG8CLPCI_ACP << 24u) |
			( PWM_USER_PG8CLPCI_TERMPS << 27u) |
			( PWM_USER_PG8CLPCI_BPSEL << 28u) |
			( PWM_USER_PG8CLPCI_BPEN << 31u)  ;
		#ifdef DEF_BITNAME
			PG8CLPCIbits.PSS = PWM_USER_PG8CLPCI_PSS;
			PG8CLPCIbits.PPS = PWM_USER_PG8CLPCI_PPS;
			PG8CLPCIbits.PSYNC = PWM_USER_PG8CLPCI_PSYNC;
			PG8CLPCIbits.SWTERM = PWM_USER_PG8CLPCI_SWTERM;
			PG8CLPCIbits.AQSS = PWM_USER_PG8CLPCI_AQSS;
			PG8CLPCIbits.AQPS = PWM_USER_PG8CLPCI_AQPS;
			PG8CLPCIbits.TERM = PWM_USER_PG8CLPCI_TERM;
			PG8CLPCIbits.TSYNCDIS = PWM_USER_PG8CLPCI_TSYNCDIS;
			PG8CLPCIbits.TQSS = PWM_USER_PG8CLPCI_TQSS;
			PG8CLPCIbits.TQPS = PWM_USER_PG8CLPCI_TQPS;
			PG8CLPCIbits.LATMOD = PWM_USER_PG8CLPCI_LATMOD;
			PG8CLPCIbits.SWPCIM = PWM_USER_PG8CLPCI_SWPCIM;
			PG8CLPCIbits.SWPCI = PWM_USER_PG8CLPCI_SWPCI;
			PG8CLPCIbits.ACP = PWM_USER_PG8CLPCI_ACP;
			PG8CLPCIbits.TERMPS = PWM_USER_PG8CLPCI_TERMPS;
			PG8CLPCIbits.BPSEL = PWM_USER_PG8CLPCI_BPSEL;
			PG8CLPCIbits.BPEN = PWM_USER_PG8CLPCI_BPEN;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* PG8FFPCIレジスタ */
	/*-----------------------------------------------------------------------*/
		PG8FFPCI = ( PWM_USER_PG8FFPCI_PSS << 0u) |
			( PWM_USER_PG8FFPCI_PPS << 5u) |
			( PWM_USER_PG8FFPCI_PSYNC << 6u) |
			( PWM_USER_PG8FFPCI_SWTERM << 7u) |
			( PWM_USER_PG8FFPCI_AQSS << 8u) |
			( PWM_USER_PG8FFPCI_AQPS << 11u) |
			( PWM_USER_PG8FFPCI_TERM << 12u) |
			( PWM_USER_PG8FFPCI_TSYNCDIS << 15u) |
			( PWM_USER_PG8FFPCI_TQSS << 16u) |
			( PWM_USER_PG8FFPCI_TQPS << 19u) |
			( PWM_USER_PG8FFPCI_LATMOD << 20u) |
			( PWM_USER_PG8FFPCI_SWPCIM << 21u) |
			( PWM_USER_PG8FFPCI_SWPCI << 23u) |
			( PWM_USER_PG8FFPCI_ACP << 24u) |
			( PWM_USER_PG8FFPCI_TERMPS << 27u) |
			( PWM_USER_PG8FFPCI_BPSEL << 28u) |
			( PWM_USER_PG8FFPCI_BPEN << 31u)  ;
		#ifdef DEF_BITNAME
			PG8FFPCIbits.PSS = PWM_USER_PG8FFPCI_PSS;
			PG8FFPCIbits.PPS = PWM_USER_PG8FFPCI_PPS;
			PG8FFPCIbits.PSYNC = PWM_USER_PG8FFPCI_PSYNC;
			PG8FFPCIbits.SWTERM = PWM_USER_PG8FFPCI_SWTERM;
			PG8FFPCIbits.AQSS = PWM_USER_PG8FFPCI_AQSS;
			PG8FFPCIbits.AQPS = PWM_USER_PG8FFPCI_AQPS;
			PG8FFPCIbits.TERM = PWM_USER_PG8FFPCI_TERM;
			PG8FFPCIbits.TSYNCDIS = PWM_USER_PG8FFPCI_TSYNCDIS;
			PG8FFPCIbits.TQSS = PWM_USER_PG8FFPCI_TQSS;
			PG8FFPCIbits.TQPS = PWM_USER_PG8FFPCI_TQPS;
			PG8FFPCIbits.LATMOD = PWM_USER_PG8FFPCI_LATMOD;
			PG8FFPCIbits.SWPCIM = PWM_USER_PG8FFPCI_SWPCIM;
			PG8FFPCIbits.SWPCI = PWM_USER_PG8FFPCI_SWPCI;
			PG8FFPCIbits.ACP = PWM_USER_PG8FFPCI_ACP;
			PG8FFPCIbits.TERMPS = PWM_USER_PG8FFPCI_TERMPS;
			PG8FFPCIbits.BPSEL = PWM_USER_PG8FFPCI_BPSEL;
			PG8FFPCIbits.BPEN = PWM_USER_PG8FFPCI_BPEN;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* PG8SPCIレジスタ */
	/*-----------------------------------------------------------------------*/
		PG8SPCI = ( PWM_USER_PG8SPCI_PSS << 0u) |
			( PWM_USER_PG8SPCI_PPS << 5u) |
			( PWM_USER_PG8SPCI_PSYNC << 6u) |
			( PWM_USER_PG8SPCI_SWTERM << 7u) |
			( PWM_USER_PG8SPCI_AQSS << 8u) |
			( PWM_USER_PG8SPCI_AQPS << 11u) |
			( PWM_USER_PG8SPCI_TERM << 12u) |
			( PWM_USER_PG8SPCI_TSYNCDIS << 15u) |
			( PWM_USER_PG8SPCI_TQSS << 16u) |
			( PWM_USER_PG8SPCI_TQPS << 19u) |
			( PWM_USER_PG8SPCI_LATMOD << 20u) |
			( PWM_USER_PG8SPCI_SWPCIM << 21u) |
			( PWM_USER_PG8SPCI_SWPCI << 23u) |
			( PWM_USER_PG8SPCI_ACP << 24u) |
			( PWM_USER_PG8SPCI_TERMPS << 27u) |
			( PWM_USER_PG8SPCI_BPSEL << 28u) |
			( PWM_USER_PG8SPCI_BPEN << 31u)  ;
		#ifdef DEF_BITNAME
			PG8SPCIbits.PSS = PWM_USER_PG8SPCI_PSS;
			PG8SPCIbits.PPS = PWM_USER_PG8SPCI_PPS;
			PG8SPCIbits.PSYNC = PWM_USER_PG8SPCI_PSYNC;
			PG8SPCIbits.SWTERM = PWM_USER_PG8SPCI_SWTERM;
			PG8SPCIbits.AQSS = PWM_USER_PG8SPCI_AQSS;
			PG8SPCIbits.AQPS = PWM_USER_PG8SPCI_AQPS;
			PG8SPCIbits.TERM = PWM_USER_PG8SPCI_TERM;
			PG8SPCIbits.TSYNCDIS = PWM_USER_PG8SPCI_TSYNCDIS;
			PG8SPCIbits.TQSS = PWM_USER_PG8SPCI_TQSS;
			PG8SPCIbits.TQPS = PWM_USER_PG8SPCI_TQPS;
			PG8SPCIbits.LATMOD = PWM_USER_PG8SPCI_LATMOD;
			PG8SPCIbits.SWPCIM = PWM_USER_PG8SPCI_SWPCIM;
			PG8SPCIbits.SWPCI = PWM_USER_PG8SPCI_SWPCI;
			PG8SPCIbits.ACP = PWM_USER_PG8SPCI_ACP;
			PG8SPCIbits.TERMPS = PWM_USER_PG8SPCI_TERMPS;
			PG8SPCIbits.BPSEL = PWM_USER_PG8SPCI_BPSEL;
			PG8SPCIbits.BPEN = PWM_USER_PG8SPCI_BPEN;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* PG8LEBレジスタ */
	/*-----------------------------------------------------------------------*/
		PG8LEB = ( PWM_USER_PG8LEB_LEB << 0u) |
			( PWM_USER_PG8LEB_PLF << 16u) |
			( PWM_USER_PG8LEB_PLR << 17u) |
			( PWM_USER_PG8LEB_PHF << 18u) |
			( PWM_USER_PG8LEB_PHR << 19u) ;
		#ifdef DEF_BITNAME
			PG8LEBbits.LEB = PWM_USER_PG8LEB_LEB;
			PG8LEBbits.PLF = PWM_USER_PG8LEB_PLF;
			PG8LEBbits.PLR = PWM_USER_PG8LEB_PLR;
			PG8LEBbits.PHF = PWM_USER_PG8LEB_PHF;
			PG8LEBbits.PHR = PWM_USER_PG8LEB_PHR;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* PG8PHASEレジスタ */
	/*-----------------------------------------------------------------------*/
		PG8PHASE = PWM_USER_PG8PHASE;
	/*-----------------------------------------------------------------------*/
	/* PG8DCレジスタ */
	/*-----------------------------------------------------------------------*/
		PG8DC = PWM_USER_PG8DC; 
	/*-----------------------------------------------------------------------*/
	/* PG8DCAレジスタ */
	/*-----------------------------------------------------------------------*/
		PG8DCA = PWM_USER_PG8DCA;
	/*-----------------------------------------------------------------------*/
	/* PG8PERレジスタ */
	/*-----------------------------------------------------------------------*/
		PG8PER = PWM_USER_PG8PER;
	/*-----------------------------------------------------------------------*/
	/* PG8TRIGAレジスタ */
	/*-----------------------------------------------------------------------*/
		PG8TRIGA = ( PWM_USER_PG8TRIGA_TRIGA << 0u) |
			( PWM_USER_PG8TRIGA_CAHALF << 31u) ;
		#ifdef DEF_BITNAME
			PG8TRIGAbits.TRIGA = PWM_USER_PG8TRIGA_TRIGA;
			PG8TRIGAbits.CAHALF = PWM_USER_PG8TRIGA_CAHALF;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* PG8TRIGBレジスタ */
	/*-----------------------------------------------------------------------*/
		PG8TRIGB = ( PWM_USER_PG8TRIGB_TRIGB << 0u) |
			( PWM_USER_PG8TRIGB_CAHALF << 31u) ;
		#ifdef DEF_BITNAME
			PG8TRIGAbits.TRIGA = PWM_USER_PG8TRIGB_TRIGB;
			PG8TRIGAbits.CAHALF = PWM_USER_PG8TRIGB_CAHALF;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* PG8TRIGCレジスタ */
	/*-----------------------------------------------------------------------*/
		PG8TRIGC = ( PWM_USER_PG8TRIGC_TRIGC << 0u) |
			( PWM_USER_PG8TRIGC_CAHALF << 31u) ;
		#ifdef DEF_BITNAME
			PG8TRIGAbits.TRIGA = PWM_USER_PG8TRIGC_TRIGC;
			PG8TRIGAbits.CAHALF = PWM_USER_PG8TRIGC_CAHALF;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* PG8DTレジスタ */
	/*-----------------------------------------------------------------------*/
		PG8DT = ( PWM_USER_PG8DC_DTL << 0u) |
			( PWM_USER_PG8DC_DTH << 16u) ;
		#ifdef DEF_BITNAME
			PG8DTbits.DTL = PWM_USER_PG8DC_DTL;
			PG8DTbits.DTH = PWM_USER_PG8DC_DTH;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* PG8CAPレジスタ */
	/*-----------------------------------------------------------------------*/
		PG8CAP = 0x00000000u;
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn        vdg_PWM_Set_Register(void)
* @brief     PWMレジスタを初期化します 
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void vdg_PWM_Set_Register(void)
{
#if ( PMD_PWMMD == PMD_MODULE_ENABLE )
    vdg_PWMCommon_Set_Register();
#if ( PMD_PWM1MD == PMD_MODULE_ENABLE )
    vdg_PWM1_Set_Register();
#endif
#if ( PMD_PWM2MD == PMD_MODULE_ENABLE )
    vdg_PWM2_Set_Register();
#endif
#if ( PMD_PWM3MD == PMD_MODULE_ENABLE )
    vdg_PWM3_Set_Register();
#endif
#if ( PMD_PWM4MD == PMD_MODULE_ENABLE )
    vdg_PWM4_Set_Register();
#endif
#if ( PMD_PWM5MD == PMD_MODULE_ENABLE )
    vdg_PWM5_Set_Register();
#endif
#if ( PMD_PWM6MD == PMD_MODULE_ENABLE )
    vdg_PWM6_Set_Register();
#endif
#if ( PMD_PWM7MD == PMD_MODULE_ENABLE )
    vdg_PWM7_Set_Register();
#endif
#if ( PMD_PWM8MD == PMD_MODULE_ENABLE )
    vdg_PWM8_Set_Register();
#endif
#endif
}

