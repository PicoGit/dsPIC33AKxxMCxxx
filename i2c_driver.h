
#ifndef I2C_DRIVER_H
#define	I2C_DRIVER_H

/*----------------------------------------------------------------------------*/
/*インクルードファイル*/
/*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*/
/*定数定義*/
/*----------------------------------------------------------------------------*/
typedef enum
{
    I2C_DRV_RET_NONE,
    I2C_DRV_RET_OK,
    I2C_DRV_RET_NG,
    I2C_DRV_RET_ACK,     
    I2C_DRV_RET_NACK,
    I2C_DRV_RET_INVARID_INPUT,
    I2C_DRV_RET_TIMEOUT,
    I2C_DRV_RET_MODULE_INVARID
} I2C_DRV_RET;
/*----------------------------------------------------------------------------*/
/*変数定義*/
/*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*/
/*プロトタイプ宣言*/
/*----------------------------------------------------------------------------*/
void vdg_I2C_Set_Register(void);
void vdg_I2C1_Set_Register(void);
void vdg_I2C2_Set_Register(void);

I2C_DRV_RET u2g_I2C1_Initiates_StartBit(void);
I2C_DRV_RET u2g_I2C1_Initiates_ReStartBit(void);
I2C_DRV_RET u2g_I2C1_Initiates_StopBit(void);
I2C_DRV_RET u2g_I2C1_Write_Byte(_u1 u1a_Data);
I2C_DRV_RET u2g_I2C1_Read_Byte(_u1 *u1pa_Data,_u1 u1a_ACK);

I2C_DRV_RET u2g_I2C2_Initiates_StartBit(void);
I2C_DRV_RET u2g_I2C2_Initiates_ReStartBit(void);
I2C_DRV_RET u2g_I2C2_Initiates_StopBit(void);
I2C_DRV_RET u2g_I2C2_Write_Byte(_u1 u1a_Data);
I2C_DRV_RET u2g_I2C2_Read_Byte(_u1 *u1pa_Data,_u1 u1a_ACK);

#endif	/* I2C_DRIVER_H */

