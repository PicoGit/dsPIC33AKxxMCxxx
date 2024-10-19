
#ifndef TIMER_DRIVER_H
#define	TIMER_DRIVER_H


/*----------------------------------------------------------------------------*/
/*インクルードファイル*/
/*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*/
/*定数定義*/
/*----------------------------------------------------------------------------*/
#define TIMER_POWER_DISABLE			( 0U )
#define TIMER_POWER_ENABLE			( 1U )

#define TIMER_SIDL_CONTINUES		( 0U )
#define TIMER_SIDL_DISCONTINUES		( 1U )

#define TIMER_TWDIS_BTOB			( 0U )
#define TIMER_TWDIS_IGNORED			( 1U )


#define TIMER_TECS_T1CK				( 0u )

#define TIMER_TGATE_DISABLE			( 0U )
#define TIMER_TGATE_ENABLE			( 1U )

#define TIMER_TCKPS_1X				( 0U )
#define TIMER_TCKPS_8X				( 1U )
#define TIMER_TCKPS_64X				( 2U )
#define TIMER_TCKPS_256X			( 3U )

#define TIMER_TSYNC_NOT_SYNC		( 0U )
#define TIMER_TSYNC_SYNC_EXCLK		( 1U )

#define TIMER_TCS_STD_SPEED_CLK		( 0U )
#define TIMER_TCS_EXT_CLK			( 1U )
/*----------------------------------------------------------------------------*/
/*変数定義*/
/*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*/
/*プロトタイプ宣言*/
/*----------------------------------------------------------------------------*/
void vdg_Timer1_Set_Register(void);
void vdg_Timer1_Set_Timer(uint32_t u4a_Timer);
void vdg_Timer1_Start_Timer(void);
void vdg_Timer1_Stop_Timer(void);
#endif	/* TIMER_DRIVER_H */

