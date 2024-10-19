
#ifndef INTERRUPT_DRIVER_H
#define	INTERRUPT_DRIVER_H

/*----------------------------------------------------------------------------*/
/*インクルードファイル*/
/*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*/
/*定数定義*/
/*----------------------------------------------------------------------------*/
#define IRPT_PRIORITY_0     0
#define IRPT_PRIORITY_1     1
#define IRPT_PRIORITY_2     2
#define IRPT_PRIORITY_3     3
#define IRPT_PRIORITY_4     4
#define IRPT_PRIORITY_5     5
#define IRPT_PRIORITY_6     6
#define IRPT_PRIORITY_7     7

#define IRPT_DISABLE		( 0U )
#define IRPT_ENABLE			( 1U )
/*----------------------------------------------------------------------------*/
/*変数定義*/
/*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*/
/*プロトタイプ宣言*/
/*----------------------------------------------------------------------------*/
void vdg_Interrupt_Set_Register(void);
void vdg_Interrupt_Set_IFS_Register(void);
void vdg_Interrupt_Set_IEC_Register(void);
void vdg_Interrupt_Set_IPC_Register(void);
void vdg_Interrupt_Set_CON_Register(void);

#endif	/* INTERRUPT_DRIVER_H */

