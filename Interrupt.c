/*----------------------------------------------------------------------------*/
/**
* @file		Interrupt.c
* @brief	割り込みベクタ関数
* @date		24/07/16
* @details	
* @note		
*/
/*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*/
/*インクルードファイル*/
/*----------------------------------------------------------------------------*/
#include <stdio.h>
#include <stdlib.h>
#include <xc.h>
#include "typedef.h"
#include "BoardSupportPackage.h"
/*----------------------------------------------------------------------------*/
/*定数定義*/
/*----------------------------------------------------------------------------*/
typedef enum
{
	ISR_IRQ_ReservedTrap0 = 0,
	ISR_IRQ_BusErrorTrap,
	ISR_IRQ_IllegalInstructionTrap,
	ISR_IRQ_AddressErrorTrap,
	ISR_IRQ_StackErrorTrap,
	ISR_IRQ_MathErrorTrap,
	ISR_IRQ_GeneralTrap,
	ISR_IRQ_ReservedTrap7,
	ISR_IRQ_COMMONInterrupt,
	ISR_IRQ_CPUFPUInterrupt,
	ISR_IRQ_XRAMECCInterrupt,
	ISR_IRQ_YRAMECCInterrupt,
	ISR_IRQ_PBUEInterrupt,
	ISR_IRQ_NVMECCInterrupt,
	ISR_IRQ_NVMInterrupt,
	ISR_IRQ_NVMCRCInterrupt,
	ISR_IRQ_Interrupt8,
	ISR_IRQ_CLKFInterrupt,
	ISR_IRQ_CLKEInterrupt,
	ISR_IRQ_CLK1FInterrupt,
	ISR_IRQ_CLK1WInterrupt,
	ISR_IRQ_CLK1MInterrupt,
	ISR_IRQ_CLK1RInterrupt,
	ISR_IRQ_CLK2FInterrupt,
	ISR_IRQ_CLK2WInterrupt,
	ISR_IRQ_CLK2MInterrupt,
	ISR_IRQ_CLK2RInterrupt,
	ISR_IRQ_CLK3FInterrupt,
	ISR_IRQ_CLK3WInterrupt,
	ISR_IRQ_CLK3MInterrupt,
	ISR_IRQ_CLK3RInterrupt,
	ISR_IRQ_CLK4FInterrupt,
	ISR_IRQ_CLK4WInterrupt,
	ISR_IRQ_CLK4MInterrupt,
	ISR_IRQ_CLK4RInterrupt,
	ISR_IRQ_Interrupt27,
	ISR_IRQ_WDTInterrupt,
	ISR_IRQ_Interrupt29,
	ISR_IRQ_Interrupt30,
	ISR_IRQ_Interrupt31,
	ISR_IRQ_Interrupt32,
	ISR_IRQ_INT0Interrupt,
	ISR_IRQ_INT1Interrupt,
	ISR_IRQ_INT2Interrupt,
	ISR_IRQ_INT3Interrupt,
	ISR_IRQ_INT4Interrupt,
	ISR_IRQ_PEVTAInterrupt,
	ISR_IRQ_PEVTBInterrupt,
	ISR_IRQ_PEVTCInterrupt,
	ISR_IRQ_PEVTDInterrupt,
	ISR_IRQ_PEVTEInterrupt,
	ISR_IRQ_PEVTFInterrupt,
	ISR_IRQ_PWM1Interrupt,
	ISR_IRQ_PWM2Interrupt,
	ISR_IRQ_PWM3Interrupt,
	ISR_IRQ_PWM4Interrupt,
	ISR_IRQ_T1Interrupt,
	ISR_IRQ_CCT1Interrupt,
	ISR_IRQ_CCP1Interrupt,
	ISR_IRQ_CCT2Interrupt,
	ISR_IRQ_CCP2Interrupt,
	ISR_IRQ_CCT3Interrupt,
	ISR_IRQ_CCP3Interrupt,
	ISR_IRQ_CCT4Interrupt,
	ISR_IRQ_CCP4Interrupt,
	ISR_IRQ_Interrupt57,
	ISR_IRQ_Interrupt58,
	ISR_IRQ_Interrupt59,
	ISR_IRQ_Interrupt60,
	ISR_IRQ_Interrupt61,
	ISR_IRQ_Interrupt62,
	ISR_IRQ_SPI1RXInterrupt,
	ISR_IRQ_SPI1TXInterrupt,
	ISR_IRQ_SPI1EInterrupt,
	ISR_IRQ_SPI2RXInterrupt,
	ISR_IRQ_SPI2TXInterrupt,
	ISR_IRQ_SPI2EInterrupt,
	ISR_IRQ_SPI3RXInterrupt,
	ISR_IRQ_SPI3TXInterrupt,
	ISR_IRQ_SPI3EInterrupt,
	ISR_IRQ_DMA0Interrupt,
	ISR_IRQ_DMA1Interrupt,
	ISR_IRQ_DMA2Interrupt,
	ISR_IRQ_DMA3Interrupt,
	ISR_IRQ_CMP1Interrupt,
	ISR_IRQ_CMP2Interrupt,
	ISR_IRQ_CMP3Interrupt,
	ISR_IRQ_Interrupt79,
	ISR_IRQ_I2C1EInterrupt,
	ISR_IRQ_I2C1Interrupt,
	ISR_IRQ_I2C1RXInterrupt,
	ISR_IRQ_I2C1TXInterrupt,
	ISR_IRQ_I2C2EInterrupt,
	ISR_IRQ_I2C2Interrupt,
	ISR_IRQ_I2C2RXInterrupt,
	ISR_IRQ_I2C2TXInterrupt,
	ISR_IRQ_Interrupt88,
	ISR_IRQ_U1RXInterrupt,
	ISR_IRQ_U1TXInterrupt,
	ISR_IRQ_U1EInterrupt,
	ISR_IRQ_U1EVTInterrupt,
	ISR_IRQ_U2RXInterrupt,
	ISR_IRQ_U2TXInterrupt,
	ISR_IRQ_U2EInterrupt,
	ISR_IRQ_U2EVTInterrupt,
	ISR_IRQ_U3RXInterrupt,
	ISR_IRQ_U3TXInterrupt,
	ISR_IRQ_U3EInterrupt,
	ISR_IRQ_U3EVTInterrupt,
	ISR_IRQ_Interrupt101,
	ISR_IRQ_Interrupt102,
	ISR_IRQ_Interrupt103,
	ISR_IRQ_Interrupt104,
	ISR_IRQ_SENT1Interrupt,
	ISR_IRQ_SENT1EInterrupt,
	ISR_IRQ_SENT2Interrupt,
	ISR_IRQ_SENT2EInterrupt,
	ISR_IRQ_DMA4Interrupt,
	ISR_IRQ_DMA5Interrupt,
	ISR_IRQ_Interrupt111,
	ISR_IRQ_Interrupt112,
	ISR_IRQ_CNAInterrupt,
	ISR_IRQ_CNBInterrupt,
	ISR_IRQ_CNCInterrupt,
	ISR_IRQ_CNDInterrupt,
	ISR_IRQ_Interrupt117,
	ISR_IRQ_Interrupt118,
	ISR_IRQ_Interrupt119,
	ISR_IRQ_Interrupt120,
	ISR_IRQ_Interrupt121,
	ISR_IRQ_Interrupt122,
	ISR_IRQ_Interrupt123,
	ISR_IRQ_Interrupt124,
	ISR_IRQ_QEI1Interrupt,
	ISR_IRQ_Interrupt126,
	ISR_IRQ_Interrupt127,
	ISR_IRQ_Interrupt128,
	ISR_IRQ_BISS1EInterrupt,
	ISR_IRQ_BISS1Interrupt,
	ISR_IRQ_CRCInterrupt,
	ISR_IRQ_Interrupt132,
	ISR_IRQ_Interrupt133,
	ISR_IRQ_PTGSTEPInterrupt,
	ISR_IRQ_PTGWDTInterrupt,
	ISR_IRQ_PTG0Interrupt,
	ISR_IRQ_PTG1Interrupt,
	ISR_IRQ_PTG2Interrupt,
	ISR_IRQ_PTG3Interrupt,
	ISR_IRQ_Interrupt140,
	ISR_IRQ_Interrupt141,
	ISR_IRQ_Interrupt142,
	ISR_IRQ_Interrupt143,
	ISR_IRQ_Interrupt144,
	ISR_IRQ_Interrupt145,
	ISR_IRQ_AD1CH0Interrupt,
	ISR_IRQ_AD1CMP0Interrupt,
	ISR_IRQ_AD1CH1Interrupt,
	ISR_IRQ_AD1CMP1Interrupt,
	ISR_IRQ_AD1CH2Interrupt,
	ISR_IRQ_AD1CMP2Interrupt,
	ISR_IRQ_AD1CH3Interrupt,
	ISR_IRQ_AD1CMP3Interrupt,
	ISR_IRQ_AD1CH4Interrupt,
	ISR_IRQ_AD1CMP4Interrupt,
	ISR_IRQ_AD1CH5Interrupt,
	ISR_IRQ_AD1CMP5Interrupt,
	ISR_IRQ_AD1CH6Interrupt,
	ISR_IRQ_AD1CMP6Interrupt,
	ISR_IRQ_AD1CH7Interrupt,
	ISR_IRQ_AD1CMP7Interrupt,
	ISR_IRQ_AD1CH8Interrupt,
	ISR_IRQ_AD1CMP8Interrupt,
	ISR_IRQ_AD1CH9Interrupt,
	ISR_IRQ_AD1CMP9Interrupt,
	ISR_IRQ_AD1CH10Interrupt,
	ISR_IRQ_AD1CMP10Interrupt,
	ISR_IRQ_AD1CH11Interrupt,
	ISR_IRQ_AD1CMP11Interrupt,
	ISR_IRQ_AD1CH12Interrupt,
	ISR_IRQ_AD1CMP12Interrupt,
	ISR_IRQ_AD1CH13Interrupt,
	ISR_IRQ_AD1CMP13Interrupt,
	ISR_IRQ_AD1CH14Interrupt,
	ISR_IRQ_AD1CMP14Interrupt,
	ISR_IRQ_AD1CH15Interrupt,
	ISR_IRQ_AD1CMP15Interrupt,
	ISR_IRQ_AD1CH16Interrupt,
	ISR_IRQ_AD1CMP16Interrupt,
	ISR_IRQ_AD1CH17Interrupt,
	ISR_IRQ_AD1CMP17Interrupt,
	ISR_IRQ_AD1CH18Interrupt,
	ISR_IRQ_AD1CMP18Interrupt,
	ISR_IRQ_AD1CH19Interrupt,
	ISR_IRQ_AD1CMP19Interrupt,
	ISR_IRQ_Interrupt186,
	ISR_IRQ_Interrupt187,
	ISR_IRQ_AD2CH0Interrupt,
	ISR_IRQ_AD2CMP0Interrupt,
	ISR_IRQ_AD2CH1Interrupt,
	ISR_IRQ_AD2CMP1Interrupt,
	ISR_IRQ_AD2CH2Interrupt,
	ISR_IRQ_AD2CMP2Interrupt,
	ISR_IRQ_AD2CH3Interrupt,
	ISR_IRQ_AD2CMP3Interrupt,
	ISR_IRQ_AD2CH4Interrupt,
	ISR_IRQ_AD2CMP4Interrupt,
	ISR_IRQ_AD2CH5Interrupt,
	ISR_IRQ_AD2CMP5Interrupt,
	ISR_IRQ_AD2CH6Interrupt,
	ISR_IRQ_AD2CMP6Interrupt,
	ISR_IRQ_AD2CH7Interrupt,
	ISR_IRQ_AD2CMP7Interrupt,
	ISR_IRQ_AD2CH8Interrupt,
	ISR_IRQ_AD2CMP8Interrupt,
	ISR_IRQ_AD2CH9Interrupt,
	ISR_IRQ_AD2CMP9Interrupt,
	ISR_IRQ_AD2CH10Interrupt,
	ISR_IRQ_AD2CMP10Interrupt,
	ISR_IRQ_AD2CH11Interrupt,
	ISR_IRQ_AD2CMP11Interrupt,
	ISR_IRQ_AD2CH12Interrupt,
	ISR_IRQ_AD2CMP12Interrupt,
	ISR_IRQ_AD2CH13Interrupt,
	ISR_IRQ_AD2CMP13Interrupt,
	ISR_IRQ_AD2CH14Interrupt,
	ISR_IRQ_AD2CMP14Interrupt,
	ISR_IRQ_AD2CH15Interrupt,
	ISR_IRQ_AD2CMP15Interrupt,
	ISR_IRQ_AD2CH16Interrupt,
	ISR_IRQ_AD2CMP16Interrupt,
	ISR_IRQ_AD2CH17Interrupt,
	ISR_IRQ_AD2CMP17Interrupt,
	ISR_IRQ_AD2CH18Interrupt,
	ISR_IRQ_AD2CMP18Interrupt,
	ISR_IRQ_AD2CH19Interrupt,
	ISR_IRQ_AD2CMP19Interrupt,
	ISR_IRQ_Interrupt228,
	ISR_IRQ_Interrupt229,
	ISR_IRQ_Interrupt230,
	ISR_IRQ_Interrupt231,
	ISR_IRQ_CLC1PInterrupt,
	ISR_IRQ_CLC1NInterrupt,
	ISR_IRQ_CLC2PInterrupt,
	ISR_IRQ_CLC2NInterrupt,
	ISR_IRQ_CLC3PInterrupt,
	ISR_IRQ_CLC3NInterrupt,
	ISR_IRQ_CLC4PInterrupt,
	ISR_IRQ_CLC4NInterrupt,
	ISR_IRQ_Interrupt240,
	ISR_IRQ_Interrupt241,
	ISR_IRQ_Interrupt242,
	ISR_IRQ_Interrupt243,
	ISR_IRQ_Interrupt244,
	ISR_IRQ_Interrupt245,
	ISR_IRQ_Interrupt246,
	ISR_IRQ_Interrupt247,
	ISR_IRQ_Interrupt248,
	ISR_IRQ_Interrupt249,
	ISR_IRQ_Interrupt250,
	ISR_IRQ_Interrupt251,
	ISR_IRQ_Interrupt252,
	ISR_IRQ_Interrupt253,
	ISR_IRQ_Interrupt254,
	ISR_IRQ_Interrupt255,
	ISR_IRQ_Interrupt256,
	ISR_IRQ_Interrupt257,
	ISR_IRQ_Interrupt258,
	ISR_IRQ_Interrupt259,
	ISR_IRQ_Interrupt260,
	ISR_IRQ_Interrupt261,
	ISR_IRQ_Interrupt262,
	ISR_IRQ_Interrupt263,
	ISR_IRQ_Interrupt264,
	ISR_IRQ_Interrupt265,
	ISR_IRQ_Interrupt266,
	ISR_IRQ_Interrupt267,
	ISR_IRQ_Interrupt268,
	ISR_IRQ_Interrupt269,
	ISR_IRQ_Interrupt270,
	ISR_IRQ_Interrupt271,
	ISR_IRQ_Interrupt272,
	ISR_IRQ_Interrupt273,
	ISR_IRQ_Interrupt274,
	ISR_IRQ_IOIM1Interrupt,
	ISR_IRQ_IOIM2Interrupt,
	ISR_IRQ_IOIM3Interrupt,
	ISR_IRQ_IOIM4Interrupt
}ISR_IRQ;

/*----------------------------------------------------------------------------*/
/*変数定義*/
/*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*/
/*プロトタイプ宣言*/
/*----------------------------------------------------------------------------*/
static void vds_Isr_Unexpected_Interrupt(_u2 u2a_ISR_Vector_Number)
{
    
}
/*----------------------------------------------------------------------------*/
/*
* @fn	_ReservedTrap0(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _ReservedTrap0(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_ReservedTrap0);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn		_BusErrorTrap(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _BusErrorTrap(void)
{
#if 0
	Nop();
#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_BusErrorTrap);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_IllegalInstructionTrap(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _IllegalInstructionTrap(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_IllegalInstructionTrap);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_AddressErrorTrap(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _AddressErrorTrap(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_AddressErrorTrap);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_StackErrorTrap(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _StackErrorTrap(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_StackErrorTrap);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_MathErrorTrap(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _MathErrorTrap(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_MathErrorTrap);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_GeneralTrap(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
#if (PROJECT_TYPE != PROJECT_4_1_3_DMT )
void __attribute__((interrupt, no_auto_psv)) _GeneralTrap(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_GeneralTrap);
#endif
}
#endif
/*----------------------------------------------------------------------------*/
/*
* @fn	_ReservedTrap7(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _ReservedTrap7(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_ReservedTrap7);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_COMMONInterrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _COMMONInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_COMMONInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_CPUFPUInterrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _CPUFPUInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_CPUFPUInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_XRAMECCInterrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _XRAMECCInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_XRAMECCInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_YRAMECCInterrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _YRAMECCInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_YRAMECCInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_PBUEInterrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _PBUEInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_PBUEInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_NVMECCInterrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _NVMECCInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_NVMECCInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_NVMInterrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _NVMInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_NVMInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_NVMCRCInterrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _NVMCRCInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_NVMCRCInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_Interrupt8(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _Interrupt8(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_Interrupt8);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_CLKFInterrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _CLKFInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_CLKFInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_CLKEInterrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _CLKEInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_CLKEInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_CLK1FInterrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _CLK1FInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_CLK1FInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_CLK1WInterrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _CLK1WInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_CLK1WInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_CLK1MInterrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _CLK1MInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_CLK1MInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_CLK1RInterrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _CLK1RInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_CLK1RInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_CLK2FInterrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _CLK2FInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_CLK2FInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_CLK2WInterrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _CLK2WInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_CLK2WInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_CLK2MInterrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _CLK2MInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_CLK2MInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_CLK2RInterrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _CLK2RInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_CLK2RInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_CLK3FInterrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _CLK3FInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_CLK3FInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_CLK3WInterrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _CLK3WInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_CLK3WInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_CLK3MInterrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _CLK3MInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_CLK3MInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_CLK3RInterrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _CLK3RInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_CLK3RInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_CLK4FInterrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _CLK4FInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_CLK4FInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_CLK4WInterrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _CLK4WInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_CLK4WInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_CLK4MInterrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _CLK4MInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_CLK4MInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_CLK4RInterrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _CLK4RInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_CLK4RInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_Interrupt27(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _Interrupt27(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_Interrupt27);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_WDTInterrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _WDTInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_WDTInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_Interrupt29(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _Interrupt29(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_Interrupt29);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_Interrupt30(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _Interrupt30(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_Interrupt30);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_Interrupt31(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _Interrupt31(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_Interrupt31);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_Interrupt32(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _Interrupt32(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_Interrupt32);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_INT0Interrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _INT0Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_INT0Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_INT1Interrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _INT1Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_INT1Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_INT2Interrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _INT2Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_INT2Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_INT3Interrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _INT3Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_INT3Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_INT4Interrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _INT4Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_INT4Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_PEVTAInterrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _PEVTAInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_PEVTAInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_PEVTBInterrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _PEVTBInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_PEVTBInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_PEVTCInterrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _PEVTCInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_PEVTCInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_PEVTDInterrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _PEVTDInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_PEVTDInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_PEVTEInterrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _PEVTEInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_PEVTEInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_PEVTFInterrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _PEVTFInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_PEVTFInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_PWM1Interrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _PWM1Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_PWM1Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_PWM2Interrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _PWM2Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_PWM2Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_PWM3Interrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _PWM3Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_PWM3Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_PWM4Interrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _PWM4Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_PWM4Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_T1Interrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
//void __attribute__((interrupt, no_auto_psv)) _T1Interrupt(void)
//{
//#if 1
//	if ( LATDbits.LATD9 == 1)
//	{
//		LATDbits.LATD9 = 0;
//	}
//	else
//	{
//		LATDbits.LATD9 = 1;
//	}
//	IFS1bits.T1IF = 0u;
//#else
//	vds_Isr_Unexpected_Interrupt(ISR_IRQ_T1Interrupt);
//#endif
//}

/*----------------------------------------------------------------------------*/
/*
* @fn	_CCT1Interrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
#if (PROJECT_TYPE != PROJECT_2_8_1_QEI)
void __attribute__((interrupt, no_auto_psv)) _CCT1Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_CCT1Interrupt);
#endif
}
#endif
/*----------------------------------------------------------------------------*/
/*
* @fn	_CCP1Interrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _CCP1Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_CCP1Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_CCT2Interrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _CCT2Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_CCT2Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_CCP2Interrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _CCP2Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_CCP2Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_CCT3Interrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _CCT3Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_CCT3Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_CCP3Interrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _CCP3Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_CCP3Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_CCT4Interrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _CCT4Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_CCT4Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_CCP4Interrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _CCP4Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_CCP4Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_Interrupt57(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _Interrupt57(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_Interrupt57);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_Interrupt58(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _Interrupt58(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_Interrupt58);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_Interrupt59(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _Interrupt59(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_Interrupt59);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_Interrupt60(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _Interrupt60(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_Interrupt60);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_Interrupt61(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _Interrupt61(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_Interrupt61);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_Interrupt62(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _Interrupt62(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_Interrupt62);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_SPI1RXInterrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _SPI1RXInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_SPI1RXInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_SPI1TXInterrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _SPI1TXInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_SPI1TXInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_SPI1EInterrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _SPI1EInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_SPI1EInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_SPI2RXInterrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _SPI2RXInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_SPI2RXInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_SPI2TXInterrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _SPI2TXInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_SPI2TXInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_SPI2EInterrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _SPI2EInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_SPI2EInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_SPI3RXInterrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _SPI3RXInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_SPI3RXInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_SPI3TXInterrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _SPI3TXInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_SPI3TXInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_SPI3EInterrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _SPI3EInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_SPI3EInterrupt);
#endif
}

///*----------------------------------------------------------------------------*/
///*
//* @fn	_DMA0Interrupt(void)
//* @brief
//* @param
//* @return
//* @detail
//*/
///*----------------------------------------------------------------------------*/
//void __attribute__((interrupt, no_auto_psv)) _DMA0Interrupt(void)
//{
//#if 0
//
//#else
//	vds_Isr_Unexpected_Interrupt(ISR_IRQ_DMA0Interrupt);
//#endif
//}

/*----------------------------------------------------------------------------*/
/*
* @fn	_DMA1Interrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _DMA1Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_DMA1Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_DMA2Interrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _DMA2Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_DMA2Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_DMA3Interrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _DMA3Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_DMA3Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_CMP1Interrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _CMP1Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_CMP1Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_CMP2Interrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _CMP2Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_CMP2Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_CMP3Interrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _CMP3Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_CMP3Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_Interrupt79(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _Interrupt79(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_Interrupt79);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_I2C1EInterrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _I2C1EInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_I2C1EInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_I2C1Interrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _I2C1Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_I2C1Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_I2C1RXInterrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _I2C1RXInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_I2C1RXInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_I2C1TXInterrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _I2C1TXInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_I2C1TXInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_I2C2EInterrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _I2C2EInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_I2C2EInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_I2C2Interrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _I2C2Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_I2C2Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_I2C2RXInterrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _I2C2RXInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_I2C2RXInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_I2C2TXInterrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _I2C2TXInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_I2C2TXInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_Interrupt88(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _Interrupt88(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_Interrupt88);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_U1RXInterrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _U1RXInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_U1RXInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_U1TXInterrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _U1TXInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_U1TXInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_U1EInterrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _U1EInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_U1EInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_U1EVTInterrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _U1EVTInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_U1EVTInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_U2RXInterrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _U2RXInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_U2RXInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_U2TXInterrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _U2TXInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_U2TXInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_U2EInterrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _U2EInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_U2EInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_U2EVTInterrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _U2EVTInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_U2EVTInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_U3RXInterrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _U3RXInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_U3RXInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_U3TXInterrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _U3TXInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_U3TXInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_U3EInterrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _U3EInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_U3EInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_U3EVTInterrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _U3EVTInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_U3EVTInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_Interrupt101(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _Interrupt101(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_Interrupt101);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_Interrupt102(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _Interrupt102(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_Interrupt102);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_Interrupt103(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _Interrupt103(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_Interrupt103);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_Interrupt104(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _Interrupt104(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_Interrupt104);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_SENT1Interrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _SENT1Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_SENT1Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_SENT1EInterrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _SENT1EInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_SENT1EInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_SENT2Interrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _SENT2Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_SENT2Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_SENT2EInterrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _SENT2EInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_SENT2EInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_DMA4Interrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _DMA4Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_DMA4Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_DMA5Interrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _DMA5Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_DMA5Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_Interrupt111(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _Interrupt111(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_Interrupt111);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_Interrupt112(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _Interrupt112(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_Interrupt112);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_CNAInterrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _CNAInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_CNAInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_CNBInterrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _CNBInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_CNBInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_CNCInterrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _CNCInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_CNCInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_CNDInterrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _CNDInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_CNDInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_Interrupt117(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _Interrupt117(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_Interrupt117);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_Interrupt118(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _Interrupt118(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_Interrupt118);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_Interrupt119(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _Interrupt119(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_Interrupt119);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_Interrupt120(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _Interrupt120(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_Interrupt120);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_Interrupt121(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _Interrupt121(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_Interrupt121);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_Interrupt122(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _Interrupt122(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_Interrupt122);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_Interrupt123(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _Interrupt123(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_Interrupt123);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_Interrupt124(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _Interrupt124(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_Interrupt124);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_QEI1Interrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _QEI1Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_QEI1Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_Interrupt126(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _Interrupt126(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_Interrupt126);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_Interrupt127(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _Interrupt127(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_Interrupt127);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_Interrupt128(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _Interrupt128(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_Interrupt128);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_BISS1EInterrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _BISS1EInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_BISS1EInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_BISS1Interrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _BISS1Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_BISS1Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_CRCInterrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _CRCInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_CRCInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_Interrupt132(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _Interrupt132(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_Interrupt132);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_Interrupt133(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _Interrupt133(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_Interrupt133);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_PTGSTEPInterrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _PTGSTEPInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_PTGSTEPInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_PTGWDTInterrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _PTGWDTInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_PTGWDTInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_PTG0Interrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _PTG0Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_PTG0Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_PTG1Interrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _PTG1Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_PTG1Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_PTG2Interrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _PTG2Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_PTG2Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_PTG3Interrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _PTG3Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_PTG3Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_Interrupt140(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _Interrupt140(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_Interrupt140);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_Interrupt141(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _Interrupt141(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_Interrupt141);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_Interrupt142(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _Interrupt142(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_Interrupt142);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_Interrupt143(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _Interrupt143(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_Interrupt143);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_Interrupt144(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _Interrupt144(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_Interrupt144);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_Interrupt145(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _Interrupt145(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_Interrupt145);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_AD1CH0Interrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _AD1CH0Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_AD1CH0Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_AD1CMP0Interrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _AD1CMP0Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_AD1CMP0Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_AD1CH1Interrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _AD1CH1Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_AD1CH1Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_AD1CMP1Interrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _AD1CMP1Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_AD1CMP1Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_AD1CH2Interrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _AD1CH2Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_AD1CH2Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_AD1CMP2Interrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _AD1CMP2Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_AD1CMP2Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_AD1CH3Interrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _AD1CH3Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_AD1CH3Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_AD1CMP3Interrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _AD1CMP3Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_AD1CMP3Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_AD1CH4Interrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _AD1CH4Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_AD1CH4Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_AD1CMP4Interrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _AD1CMP4Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_AD1CMP4Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_AD1CH5Interrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _AD1CH5Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_AD1CH5Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_AD1CMP5Interrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _AD1CMP5Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_AD1CMP5Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_AD1CH6Interrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _AD1CH6Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_AD1CH6Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_AD1CMP6Interrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _AD1CMP6Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_AD1CMP6Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_AD1CH7Interrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _AD1CH7Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_AD1CH7Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_AD1CMP7Interrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _AD1CMP7Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_AD1CMP7Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_AD1CH8Interrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _AD1CH8Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_AD1CH8Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_AD1CMP8Interrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _AD1CMP8Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_AD1CMP8Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_AD1CH9Interrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _AD1CH9Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_AD1CH9Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_AD1CMP9Interrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _AD1CMP9Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_AD1CMP9Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_AD1CH10Interrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _AD1CH10Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_AD1CH10Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_AD1CMP10Interrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _AD1CMP10Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_AD1CMP10Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_AD1CH11Interrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _AD1CH11Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_AD1CH11Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_AD1CMP11Interrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _AD1CMP11Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_AD1CMP11Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_AD1CH12Interrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _AD1CH12Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_AD1CH12Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_AD1CMP12Interrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _AD1CMP12Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_AD1CMP12Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_AD1CH13Interrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _AD1CH13Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_AD1CH13Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_AD1CMP13Interrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _AD1CMP13Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_AD1CMP13Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_AD1CH14Interrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _AD1CH14Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_AD1CH14Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_AD1CMP14Interrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _AD1CMP14Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_AD1CMP14Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_AD1CH15Interrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _AD1CH15Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_AD1CH15Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_AD1CMP15Interrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _AD1CMP15Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_AD1CMP15Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_AD1CH16Interrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _AD1CH16Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_AD1CH16Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_AD1CMP16Interrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _AD1CMP16Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_AD1CMP16Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_AD1CH17Interrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _AD1CH17Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_AD1CH17Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_AD1CMP17Interrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _AD1CMP17Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_AD1CMP17Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_AD1CH18Interrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _AD1CH18Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_AD1CH18Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_AD1CMP18Interrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _AD1CMP18Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_AD1CMP18Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_AD1CH19Interrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _AD1CH19Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_AD1CH19Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_AD1CMP19Interrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _AD1CMP19Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_AD1CMP19Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_Interrupt186(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _Interrupt186(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_Interrupt186);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_Interrupt187(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _Interrupt187(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_Interrupt187);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_AD2CH0Interrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _AD2CH0Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_AD2CH0Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_AD2CMP0Interrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _AD2CMP0Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_AD2CMP0Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_AD2CH1Interrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _AD2CH1Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_AD2CH1Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_AD2CMP1Interrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _AD2CMP1Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_AD2CMP1Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_AD2CH2Interrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _AD2CH2Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_AD2CH2Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_AD2CMP2Interrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _AD2CMP2Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_AD2CMP2Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_AD2CH3Interrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _AD2CH3Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_AD2CH3Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_AD2CMP3Interrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _AD2CMP3Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_AD2CMP3Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_AD2CH4Interrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _AD2CH4Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_AD2CH4Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_AD2CMP4Interrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _AD2CMP4Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_AD2CMP4Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_AD2CH5Interrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _AD2CH5Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_AD2CH5Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_AD2CMP5Interrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _AD2CMP5Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_AD2CMP5Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_AD2CH6Interrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _AD2CH6Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_AD2CH6Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_AD2CMP6Interrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _AD2CMP6Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_AD2CMP6Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_AD2CH7Interrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _AD2CH7Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_AD2CH7Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_AD2CMP7Interrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _AD2CMP7Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_AD2CMP7Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_AD2CH8Interrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _AD2CH8Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_AD2CH8Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_AD2CMP8Interrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _AD2CMP8Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_AD2CMP8Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_AD2CH9Interrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _AD2CH9Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_AD2CH9Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_AD2CMP9Interrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _AD2CMP9Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_AD2CMP9Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_AD2CH10Interrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _AD2CH10Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_AD2CH10Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_AD2CMP10Interrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _AD2CMP10Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_AD2CMP10Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_AD2CH11Interrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _AD2CH11Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_AD2CH11Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_AD2CMP11Interrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _AD2CMP11Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_AD2CMP11Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_AD2CH12Interrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _AD2CH12Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_AD2CH12Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_AD2CMP12Interrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _AD2CMP12Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_AD2CMP12Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_AD2CH13Interrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _AD2CH13Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_AD2CH13Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_AD2CMP13Interrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _AD2CMP13Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_AD2CMP13Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_AD2CH14Interrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _AD2CH14Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_AD2CH14Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_AD2CMP14Interrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _AD2CMP14Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_AD2CMP14Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_AD2CH15Interrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _AD2CH15Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_AD2CH15Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_AD2CMP15Interrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _AD2CMP15Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_AD2CMP15Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_AD2CH16Interrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _AD2CH16Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_AD2CH16Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_AD2CMP16Interrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _AD2CMP16Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_AD2CMP16Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_AD2CH17Interrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _AD2CH17Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_AD2CH17Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_AD2CMP17Interrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _AD2CMP17Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_AD2CMP17Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_AD2CH18Interrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _AD2CH18Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_AD2CH18Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_AD2CMP18Interrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _AD2CMP18Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_AD2CMP18Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_AD2CH19Interrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _AD2CH19Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_AD2CH19Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_AD2CMP19Interrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _AD2CMP19Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_AD2CMP19Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_Interrupt228(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _Interrupt228(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_Interrupt228);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_Interrupt229(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _Interrupt229(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_Interrupt229);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_Interrupt230(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _Interrupt230(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_Interrupt230);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_Interrupt231(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _Interrupt231(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_Interrupt231);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_CLC1PInterrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _CLC1PInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_CLC1PInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_CLC1NInterrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _CLC1NInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_CLC1NInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_CLC2PInterrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _CLC2PInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_CLC2PInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_CLC2NInterrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _CLC2NInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_CLC2NInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_CLC3PInterrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _CLC3PInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_CLC3PInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_CLC3NInterrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _CLC3NInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_CLC3NInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_CLC4PInterrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _CLC4PInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_CLC4PInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_CLC4NInterrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _CLC4NInterrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_CLC4NInterrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_Interrupt240(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _Interrupt240(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_Interrupt240);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_Interrupt241(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _Interrupt241(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_Interrupt241);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_Interrupt242(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _Interrupt242(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_Interrupt242);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_Interrupt243(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _Interrupt243(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_Interrupt243);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_Interrupt244(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _Interrupt244(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_Interrupt244);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_Interrupt245(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _Interrupt245(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_Interrupt245);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_Interrupt246(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _Interrupt246(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_Interrupt246);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_Interrupt247(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _Interrupt247(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_Interrupt247);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_Interrupt248(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _Interrupt248(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_Interrupt248);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_Interrupt249(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _Interrupt249(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_Interrupt249);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_Interrupt250(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _Interrupt250(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_Interrupt250);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_Interrupt251(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _Interrupt251(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_Interrupt251);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_Interrupt252(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _Interrupt252(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_Interrupt252);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_Interrupt253(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _Interrupt253(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_Interrupt253);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_Interrupt254(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _Interrupt254(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_Interrupt254);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_Interrupt255(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _Interrupt255(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_Interrupt255);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_Interrupt256(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _Interrupt256(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_Interrupt256);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_Interrupt257(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _Interrupt257(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_Interrupt257);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_Interrupt258(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _Interrupt258(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_Interrupt258);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_Interrupt259(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _Interrupt259(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_Interrupt259);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_Interrupt260(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _Interrupt260(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_Interrupt260);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_Interrupt261(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _Interrupt261(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_Interrupt261);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_Interrupt262(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _Interrupt262(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_Interrupt262);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_Interrupt263(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _Interrupt263(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_Interrupt263);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_Interrupt264(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _Interrupt264(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_Interrupt264);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_Interrupt265(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _Interrupt265(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_Interrupt265);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_Interrupt266(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _Interrupt266(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_Interrupt266);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_Interrupt267(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _Interrupt267(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_Interrupt267);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_Interrupt268(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _Interrupt268(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_Interrupt268);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_Interrupt269(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _Interrupt269(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_Interrupt269);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_Interrupt270(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _Interrupt270(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_Interrupt270);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_Interrupt271(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _Interrupt271(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_Interrupt271);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_Interrupt272(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _Interrupt272(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_Interrupt272);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_Interrupt273(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _Interrupt273(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_Interrupt273);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_Interrupt274(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _Interrupt274(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_Interrupt274);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_IOIM1Interrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
#if (PROJECT_TYPE != PROJECT_4_1_4_IOIM)
void __attribute__((interrupt, no_auto_psv)) _IOIM1Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_IOIM1Interrupt);
#endif
}
#endif
/*----------------------------------------------------------------------------*/
/*
* @fn	_IOIM2Interrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _IOIM2Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_IOIM2Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_IOIM3Interrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _IOIM3Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_IOIM3Interrupt);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn	_IOIM4Interrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _IOIM4Interrupt(void)
{
#if 0

#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_IOIM4Interrupt);
#endif
}