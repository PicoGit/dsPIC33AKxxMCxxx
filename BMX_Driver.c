/*----------------------------------------------------------------------------*/
/**
* @file		BMX_Driver.c
* @brief	Bus Matrixモジュールに関するドライバ関数
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
#include "bmx_driver.h"
/*----------------------------------------------------------------------------*/
/*定数定義*/
/*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*/
/*変数定義*/
/*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*/
/*プロトタイプ宣言*/
/*----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------*/
/*
* @fn			vdg_BMX_Set_Register()
* @brief        クロックの設定をします
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void vdg_BMX_Set_Register(void)
{
	/*-----------------------------------------------------------------------*/
	/* BMXINITPRレジスタ */
	/*-----------------------------------------------------------------------*/
		BMXINITPR = 0x00000000u;
		#ifdef DEF_BITNAME
			BMXINITPRbits.DMAPR = 0u;
			BMXINITPRbits.XDATPR = 0u;
			BMXINITPRbits.YDATPR = 0u;
			BMXINITPRbits.CPUPR = 0u;
			BMXINITPRbits.NVMPR = 0u;
			BMXINITPRbits.ICDPR = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* BMXIRAMLレジスタ */
	/*-----------------------------------------------------------------------*/
		BMXIRAML = 0x00000000u;

	/*-----------------------------------------------------------------------*/
	/* BMXIRAMHレジスタ */
	/*-----------------------------------------------------------------------*/
		BMXIRAMH = 0x00000000u;

	/*-----------------------------------------------------------------------*/
	/* BMXXDATERRレジスタ */
	/*-----------------------------------------------------------------------*/
		BMXXDATERR = 0x00000000u;
		#ifdef DEF_BITNAME
			BMXXDATERRbits.BADTGTRERR = 0u;
			BMXXDATERRbits.ADDRERR = 0u;
			BMXXDATERRbits.IRAMRDERR = 0u;
			BMXXDATERRbits.PGSPCRERR = 0u;
			BMXXDATERRbits.SFRRERR = 0u;
			BMXXDATERRbits.XRAMRERR = 0u;
			BMXXDATERRbits.YRAMRERR = 0u;
			BMXXDATERRbits.DBGRERR = 0u;
			BMXXDATERRbits.BADTGTWERR = 0u;
			BMXXDATERRbits.ADDWERR = 0u;
			BMXXDATERRbits.IRAMWRERR = 0u;
			BMXXDATERRbits.PGSPCWERR = 0u;
			BMXXDATERRbits.SFRWERR = 0u;
			BMXXDATERRbits.XRAMWERR = 0u;
			BMXXDATERRbits.YRAMWERR = 0u;
			BMXXDATERRbits.DBGWERR = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* BMXYDATERRレジスタ */
	/*-----------------------------------------------------------------------*/
		BMXYDATERR = 0x00000000u;
		#ifdef DEF_BITNAME
			BMXYDATERRbits.BADTGTRERR = 0u;
			BMXYDATERRbits.ADDRERR = 0u;
			BMXYDATERRbits.IRAMRDERR = 0u;
			BMXYDATERRbits.PGSPCRERR = 0u;
			BMXYDATERRbits.SFRRERR = 0u;
			BMXYDATERRbits.XRAMRERR = 0u;
			BMXYDATERRbits.YRAMRERR = 0u;
			BMXYDATERRbits.CRYPTRERR = 0u;
			BMXYDATERRbits.DBGRERR = 0u;
			BMXYDATERRbits.BADTGTWERR = 0u;
			BMXYDATERRbits.ADDWERR = 0u;
			BMXYDATERRbits.IRAMWRERR = 0u;
			BMXYDATERRbits.PGSPCWERR = 0u;
			BMXYDATERRbits.SFRWERR = 0u;
			BMXYDATERRbits.XRAMWERR = 0u;
			BMXYDATERRbits.YRAMWERR = 0u;
			BMXYDATERRbits.CRYPTWERR = 0u;
			BMXYDATERRbits.DBGWERR = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* BMXDMAERRレジスタ */
	/*-----------------------------------------------------------------------*/
		BMXDMAERR = 0x00000000u;
		#ifdef DEF_BITNAME
			BMXDMAERRbits.BADTGTRERR = 0u;
			BMXDMAERRbits.ADDRERR = 0u;
			BMXDMAERRbits.IRAMRDERR = 0u;
			BMXDMAERRbits.PGSPCRERR = 0u;
			BMXDMAERRbits.SFRRERR = 0u;
			BMXDMAERRbits.XRAMRERR = 0u;
			BMXDMAERRbits.YRAMRERR = 0u;
			BMXDMAERRbits.CRYPTRERR = 0u;
			BMXDMAERRbits.DBGRERR = 0u;
			BMXDMAERRbits.BADTGTWERR = 0u;
			BMXDMAERRbits.ADDWERR = 0u;
			BMXDMAERRbits.IRAMWRERR = 0u;
			BMXDMAERRbits.PGSPCWERR = 0u;
			BMXDMAERRbits.SFRWERR = 0u;
			BMXDMAERRbits.XRAMWERR = 0u;
			BMXDMAERRbits.YRAMWERR = 0u;
			BMXDMAERRbits.CRYPTWERR = 0u;
			BMXDMAERRbits.DBGWERR = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* BMXCPUERRレジスタ */
	/*-----------------------------------------------------------------------*/
		BMXCPUERR = 0x00000000u;
		#ifdef DEF_BITNAME
			BMXCPUERRbits.BADTGTRERR = 0u;
			BMXCPUERRbits.ADDRERR = 0u;
			BMXCPUERRbits.IRAMRDERR = 0u;
			BMXCPUERRbits.PGSPCRERR = 0u;
			BMXCPUERRbits.SFRRERR = 0u;
			BMXCPUERRbits.XRAMRERR = 0u;
			BMXCPUERRbits.YRAMRERR = 0u;
			BMXCPUERRbits.CRYPTRERR = 0u;
			BMXCPUERRbits.DBGRERR = 0u;
			BMXCPUERRbits.BADTGTWERR = 0u;
			BMXCPUERRbits.ADDWERR = 0u;
			BMXCPUERRbits.IRAMWRERR = 0u;
			BMXCPUERRbits.PGSPCWERR = 0u;
			BMXCPUERRbits.SFRWERR = 0u;
			BMXCPUERRbits.XRAMWERR = 0u;
			BMXCPUERRbits.YRAMWERR = 0u;
			BMXCPUERRbits.CRYPTWERR = 0u;
			BMXCPUERRbits.DBGWERR = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* BMXNVMERRレジスタ */
	/*-----------------------------------------------------------------------*/
		BMXNVMERR = 0x00000000u;
		#ifdef DEF_BITNAME
			BMXNVMERRbits.BADTGTRERR = 0u;
			BMXNVMERRbits.ADDRERR = 0u;
			BMXNVMERRbits.IRAMRDERR = 0u;
			BMXNVMERRbits.PGSPCRERR = 0u;
			BMXNVMERRbits.SFRRERR = 0u;
			BMXNVMERRbits.XRAMRERR = 0u;
			BMXNVMERRbits.YRAMRERR = 0u;
			BMXNVMERRbits.CRYPTRERR = 0u;
			BMXNVMERRbits.DBGRERR = 0u;
			BMXNVMERRbits.BADTGTWERR = 0u;
			BMXNVMERRbits.ADDWERR = 0u;
			BMXNVMERRbits.IRAMWRERR = 0u;
			BMXNVMERRbits.PGSPCWERR = 0u;
			BMXNVMERRbits.SFRWERR = 0u;
			BMXNVMERRbits.XRAMWERR = 0u;
			BMXNVMERRbits.YRAMWERR = 0u;
			BMXNVMERRbits.CRYPTWERR = 0u;
			BMXNVMERRbits.DBGWERR = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* BMXICDERRレジスタ */
	/*-----------------------------------------------------------------------*/
		BMXICDERR = 0x00000000u;
		#ifdef DEF_BITNAME
			BMXICDERRbits.BADTGTRERR = 0u;
			BMXICDERRbits.ADDRERR = 0u;
			BMXICDERRbits.IRAMRDERR = 0u;
			BMXICDERRbits.PGSPCRERR = 0u;
			BMXICDERRbits.SFRRERR = 0u;
			BMXICDERRbits.XRAMRERR = 0u;
			BMXICDERRbits.YRAMRERR = 0u;
			BMXICDERRbits.CRYPTRERR = 0u;
			BMXICDERRbits.DBGRERR = 0u;
			BMXICDERRbits.BADTGTWERR = 0u;
			BMXICDERRbits.ADDWERR = 0u;
			BMXICDERRbits.IRAMWRERR = 0u;
			BMXICDERRbits.PGSPCWERR = 0u;
			BMXICDERRbits.SFRWERR = 0u;
			BMXICDERRbits.XRAMWERR = 0u;
			BMXICDERRbits.YRAMWERR = 0u;
			BMXICDERRbits.CRYPTWERR = 0u;
			BMXICDERRbits.DBGWERR = 0u;
		#endif 
	/*-----------------------------------------------------------------------*/
	/* BMXECCXCONレジスタ */
	/*-----------------------------------------------------------------------*/
		BMXECCXCON = 0x00000000u;
		#ifdef DEF_BITNAME
			BMXECCXCONbits.FLTINJ = 0u;
			BMXECCXCONbits.ON = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* BMXECCXSTATレジスタ */
	/*-----------------------------------------------------------------------*/
		BMXECCXSTAT = 0x00000000u;
		#ifdef DEF_BITNAME
			BMXECCXSTATbits.DED = 0u;
			BMXECCXSTATbits.DEDO = 0u;
			BMXECCXSTATbits.SEC = 0u;
			BMXECCXSTATbits.SECO = 0u;
			BMXECCXSTATbits.PWBNE = 0u;
			BMXECCXSTATbits.ESEL = 0u;
		#endif 
	/*-----------------------------------------------------------------------*/
	/* BMXECCXFPTRレジスタ */
	/*-----------------------------------------------------------------------*/
		BMXECCXFPTR = 0x00000000u;
		#ifdef DEF_BITNAME
			BMXECCXFPTRbits.FLT1LPTR = 0u;
			BMXECCXFPTRbits.FLT2LPTR = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* BMXECCXFADDRレジスタ */
	/*-----------------------------------------------------------------------*/
		BMXECCXFADDR = 0x00000000u;
	/*-----------------------------------------------------------------------*/
	/* BMXECCXEADDRレジスタ */
	/*-----------------------------------------------------------------------*/
		BMXECCXEADDR = 0x00000000u;
	/*-----------------------------------------------------------------------*/
	/* BMXECCXEDATAレジスタ */
	/*-----------------------------------------------------------------------*/
		BMXECCXEDATA = 0x00000000u;
	/*-----------------------------------------------------------------------*/
	/* BMXECCXVALレジスタ */
	/*-----------------------------------------------------------------------*/
		BMXECCXVAL = 0x00000000u;
		#ifdef DEF_BITNAME
			BMXECCXVALbits.ECCVAL = 0u;
		#endif 
	/*-----------------------------------------------------------------------*/
	/* BMXECCXSYNDレジスタ */
	/*-----------------------------------------------------------------------*/
		BMXECCXSYND = 0x00000000u;
		#ifdef DEF_BITNAME
			BMXECCXSYNDbits.ECCSYND = 0u;
		#endif 
	/*-----------------------------------------------------------------------*/
	/* BMXECCYCONレジスタ */
	/*-----------------------------------------------------------------------*/
		BMXECCYCON = 0x00000000u;
		#ifdef DEF_BITNAME
			BMXECCYCONbits.FLTINJ = 0u;
			BMXECCYCONbits.ON = 0u;
		#endif 
	/*-----------------------------------------------------------------------*/
	/* BMXECCYSTATレジスタ */
	/*-----------------------------------------------------------------------*/
		BMXECCYSTAT = 0x00000000u;
		#ifdef DEF_BITNAME
			BMXECCYSTATbits.DED = 0u;
			BMXECCYSTATbits.DEDO = 0u;
			BMXECCYSTATbits.SEC = 0u;
			BMXECCYSTATbits.SECO = 0u;
			BMXECCYSTATbits.PWBNE = 0u;
			BMXECCYSTATbits.ESEL = 0u;
		#endif 
	/*-----------------------------------------------------------------------*/
	/* BMXECCYFPTRレジスタ */
	/*-----------------------------------------------------------------------*/
		BMXECCYFPTR = 0x00000000u;
		#ifdef DEF_BITNAME
			BMXECCYFPTRbits.FLT1LPTR = 0u;
			BMXECCYFPTRbits.FLT2LPTR = 0u;
		#endif 
	/*-----------------------------------------------------------------------*/
	/* BMXECCYFADDRレジスタ */
	/*-----------------------------------------------------------------------*/
		BMXECCYFADDR = 0x00000000u;
	/*-----------------------------------------------------------------------*/
	/* BMXECCYEADDRレジスタ */
	/*-----------------------------------------------------------------------*/
		BMXECCYEADDR = 0x00000000u;
	/*-----------------------------------------------------------------------*/
	/* BMXECCYEDATAレジスタ */
	/*-----------------------------------------------------------------------*/
		BMXECCYEDATA = 0x00000000u;
	/*-----------------------------------------------------------------------*/
	/* BMXECCYVALレジスタ */
	/*-----------------------------------------------------------------------*/
		BMXECCYVAL = 0x00000000u;
		#ifdef DEF_BITNAME
			BMXECCYVALbits.ECCVAL = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* BMXECCYSYNDレジスタ */
	/*-----------------------------------------------------------------------*/
		BMXECCYSYND = 0x00000000u;
		#ifdef DEF_BITNAME
			BMXECCYSYNDbits.ECCSYND = 0u;
		#endif 	

}