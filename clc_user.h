
#ifndef CLC_USER_H
#define	CLC_USER_H

/*----------------------------------------------------------------------------*/
/*インクルードファイル*/
/*----------------------------------------------------------------------------*/
#include "clc_driver.h"
/*----------------------------------------------------------------------------*/
/*定数定義*/
/*----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------*/
/* CLC1CON */
/*----------------------------------------------------------------------------*/
#define CLC1_USER_MODE		( CLC_MODE_AND_OR )
#define CLC1_USER_LCOE		( CLC_OUTPUT_DISABLE )
#define CLC1_USER_INTN		( CLC_NEG_IRPT_DISABLE )
#define CLC1_USER_INTP		( CLC_POS_IRPT_DISABLE )
#define CLC1_USER_ON		( CLC_POWER_DISABLE )
#define CLC1_USER_G1POL		( CLC_GXPOL_NOT_INVERT ) 
#define CLC1_USER_G2POL		( CLC_GXPOL_NOT_INVERT ) 
#define CLC1_USER_G3POL		( CLC_GXPOL_NOT_INVERT ) 
#define CLC1_USER_G4POL		( CLC_GXPOL_NOT_INVERT ) 
/*----------------------------------------------------------------------------*/
/* CLC1SEL */
/*----------------------------------------------------------------------------*/
#define CLC1_USER_SEL_DS1	( CLC_SEL_DS1_CLCINA )
#define CLC1_USER_SEL_DS2	( CLC_SEL_DS2_CLCINB )
#define CLC1_USER_SEL_DS3	( CLC_SEL_DS3_CLCINC )
#define CLC1_USER_SEL_DS4	( CLC_SEL_DS4_CLCIND )
/*----------------------------------------------------------------------------*/
/* CLC1GLS */
/*----------------------------------------------------------------------------*/
#define CLC1_USER_SEL_G1D1N	( CLC_GLS_DISABLE )
#define CLC1_USER_SEL_G1D1T	( CLC_GLS_DISABLE )
#define CLC1_USER_SEL_G1D2N	( CLC_GLS_DISABLE )
#define CLC1_USER_SEL_G1D2T	( CLC_GLS_DISABLE )
#define CLC1_USER_SEL_G1D3N	( CLC_GLS_DISABLE )
#define CLC1_USER_SEL_G1D3T	( CLC_GLS_DISABLE )
#define CLC1_USER_SEL_G1D4N	( CLC_GLS_DISABLE )
#define CLC1_USER_SEL_G1D4T	( CLC_GLS_DISABLE )
#define CLC1_USER_SEL_G2D1N	( CLC_GLS_DISABLE )
#define CLC1_USER_SEL_G2D1T	( CLC_GLS_DISABLE )
#define CLC1_USER_SEL_G2D2N	( CLC_GLS_DISABLE )
#define CLC1_USER_SEL_G2D2T	( CLC_GLS_DISABLE )
#define CLC1_USER_SEL_G2D3N	( CLC_GLS_DISABLE )
#define CLC1_USER_SEL_G2D3T	( CLC_GLS_DISABLE )
#define CLC1_USER_SEL_G2D4N	( CLC_GLS_DISABLE )
#define CLC1_USER_SEL_G2D4T	( CLC_GLS_DISABLE )
#define CLC1_USER_SEL_G3D1N	( CLC_GLS_DISABLE )
#define CLC1_USER_SEL_G3D1T	( CLC_GLS_DISABLE )
#define CLC1_USER_SEL_G3D2N	( CLC_GLS_DISABLE )
#define CLC1_USER_SEL_G3D2T	( CLC_GLS_DISABLE )
#define CLC1_USER_SEL_G3D3N	( CLC_GLS_DISABLE )
#define CLC1_USER_SEL_G3D3T	( CLC_GLS_DISABLE )
#define CLC1_USER_SEL_G3D4N	( CLC_GLS_DISABLE )
#define CLC1_USER_SEL_G3D4T	( CLC_GLS_DISABLE )
#define CLC1_USER_SEL_G4D1N	( CLC_GLS_DISABLE )
#define CLC1_USER_SEL_G4D1T	( CLC_GLS_DISABLE )
#define CLC1_USER_SEL_G4D2N	( CLC_GLS_DISABLE )
#define CLC1_USER_SEL_G4D2T	( CLC_GLS_DISABLE )
#define CLC1_USER_SEL_G4D3N	( CLC_GLS_DISABLE )
#define CLC1_USER_SEL_G4D3T	( CLC_GLS_DISABLE )
#define CLC1_USER_SEL_G4D4N	( CLC_GLS_DISABLE )
#define CLC1_USER_SEL_G4D4T	( CLC_GLS_DISABLE )

/*----------------------------------------------------------------------------*/
/* CLC2CON */
/*----------------------------------------------------------------------------*/
#define CLC2_USER_MODE		( CLC_MODE_AND_OR )
#define CLC2_USER_LCOE		( CLC_OUTPUT_DISABLE )
#define CLC2_USER_INTN		( CLC_NEG_IRPT_DISABLE )
#define CLC2_USER_INTP		( CLC_POS_IRPT_DISABLE )
#define CLC2_USER_ON		( CLC_POWER_DISABLE )
#define CLC2_USER_G1POL		( CLC_GXPOL_NOT_INVERT ) 
#define CLC2_USER_G2POL		( CLC_GXPOL_NOT_INVERT ) 
#define CLC2_USER_G3POL		( CLC_GXPOL_NOT_INVERT ) 
#define CLC2_USER_G4POL		( CLC_GXPOL_NOT_INVERT ) 
/*----------------------------------------------------------------------------*/
/* CLC2SEL */
/*----------------------------------------------------------------------------*/
#define CLC2_USER_SEL_DS1	( CLC_SEL_DS1_CLCINA )
#define CLC2_USER_SEL_DS2	( CLC_SEL_DS2_CLCINB )
#define CLC2_USER_SEL_DS3	( CLC_SEL_DS3_CLCINC )
#define CLC2_USER_SEL_DS4	( CLC_SEL_DS4_CLCIND )
/*----------------------------------------------------------------------------*/
/* CLC2GLS */
/*----------------------------------------------------------------------------*/
#define CLC2_USER_SEL_G1D1N	( CLC_GLS_DISABLE )
#define CLC2_USER_SEL_G1D1T	( CLC_GLS_DISABLE )
#define CLC2_USER_SEL_G1D2N	( CLC_GLS_DISABLE )
#define CLC2_USER_SEL_G1D2T	( CLC_GLS_DISABLE )
#define CLC2_USER_SEL_G1D3N	( CLC_GLS_DISABLE )
#define CLC2_USER_SEL_G1D3T	( CLC_GLS_DISABLE )
#define CLC2_USER_SEL_G1D4N	( CLC_GLS_DISABLE )
#define CLC2_USER_SEL_G1D4T	( CLC_GLS_DISABLE )
#define CLC2_USER_SEL_G2D1N	( CLC_GLS_DISABLE )
#define CLC2_USER_SEL_G2D1T	( CLC_GLS_DISABLE )
#define CLC2_USER_SEL_G2D2N	( CLC_GLS_DISABLE )
#define CLC2_USER_SEL_G2D2T	( CLC_GLS_DISABLE )
#define CLC2_USER_SEL_G2D3N	( CLC_GLS_DISABLE )
#define CLC2_USER_SEL_G2D3T	( CLC_GLS_DISABLE )
#define CLC2_USER_SEL_G2D4N	( CLC_GLS_DISABLE )
#define CLC2_USER_SEL_G2D4T	( CLC_GLS_DISABLE )
#define CLC2_USER_SEL_G3D1N	( CLC_GLS_DISABLE )
#define CLC2_USER_SEL_G3D1T	( CLC_GLS_DISABLE )
#define CLC2_USER_SEL_G3D2N	( CLC_GLS_DISABLE )
#define CLC2_USER_SEL_G3D2T	( CLC_GLS_DISABLE )
#define CLC2_USER_SEL_G3D3N	( CLC_GLS_DISABLE )
#define CLC2_USER_SEL_G3D3T	( CLC_GLS_DISABLE )
#define CLC2_USER_SEL_G3D4N	( CLC_GLS_DISABLE )
#define CLC2_USER_SEL_G3D4T	( CLC_GLS_DISABLE )
#define CLC2_USER_SEL_G4D1N	( CLC_GLS_DISABLE )
#define CLC2_USER_SEL_G4D1T	( CLC_GLS_DISABLE )
#define CLC2_USER_SEL_G4D2N	( CLC_GLS_DISABLE )
#define CLC2_USER_SEL_G4D2T	( CLC_GLS_DISABLE )
#define CLC2_USER_SEL_G4D3N	( CLC_GLS_DISABLE )
#define CLC2_USER_SEL_G4D3T	( CLC_GLS_DISABLE )
#define CLC2_USER_SEL_G4D4N	( CLC_GLS_DISABLE )
#define CLC2_USER_SEL_G4D4T	( CLC_GLS_DISABLE )

/*----------------------------------------------------------------------------*/
/* CLC3CON */
/*----------------------------------------------------------------------------*/
#define CLC3_USER_MODE		( CLC_MODE_AND_OR )
#define CLC3_USER_LCOE		( CLC_OUTPUT_DISABLE )
#define CLC3_USER_INTN		( CLC_NEG_IRPT_DISABLE )
#define CLC3_USER_INTP		( CLC_POS_IRPT_DISABLE )
#define CLC3_USER_ON		( CLC_POWER_DISABLE )
#define CLC3_USER_G1POL		( CLC_GXPOL_NOT_INVERT ) 
#define CLC3_USER_G2POL		( CLC_GXPOL_NOT_INVERT ) 
#define CLC3_USER_G3POL		( CLC_GXPOL_NOT_INVERT ) 
#define CLC3_USER_G4POL		( CLC_GXPOL_NOT_INVERT ) 
/*----------------------------------------------------------------------------*/
/* CLC3SEL */
/*----------------------------------------------------------------------------*/
#define CLC3_USER_SEL_DS1	( CLC_SEL_DS1_CLCINA )
#define CLC3_USER_SEL_DS2	( CLC_SEL_DS2_CLCINB )
#define CLC3_USER_SEL_DS3	( CLC_SEL_DS3_CLCINC )
#define CLC3_USER_SEL_DS4	( CLC_SEL_DS4_CLCIND )
/*----------------------------------------------------------------------------*/
/* CLC3GLS */
/*----------------------------------------------------------------------------*/
#define CLC3_USER_SEL_G1D1N	( CLC_GLS_DISABLE )
#define CLC3_USER_SEL_G1D1T	( CLC_GLS_DISABLE )
#define CLC3_USER_SEL_G1D2N	( CLC_GLS_DISABLE )
#define CLC3_USER_SEL_G1D2T	( CLC_GLS_DISABLE )
#define CLC3_USER_SEL_G1D3N	( CLC_GLS_DISABLE )
#define CLC3_USER_SEL_G1D3T	( CLC_GLS_DISABLE )
#define CLC3_USER_SEL_G1D4N	( CLC_GLS_DISABLE )
#define CLC3_USER_SEL_G1D4T	( CLC_GLS_DISABLE )
#define CLC3_USER_SEL_G2D1N	( CLC_GLS_DISABLE )
#define CLC3_USER_SEL_G2D1T	( CLC_GLS_DISABLE )
#define CLC3_USER_SEL_G2D2N	( CLC_GLS_DISABLE )
#define CLC3_USER_SEL_G2D2T	( CLC_GLS_DISABLE )
#define CLC3_USER_SEL_G2D3N	( CLC_GLS_DISABLE )
#define CLC3_USER_SEL_G2D3T	( CLC_GLS_DISABLE )
#define CLC3_USER_SEL_G2D4N	( CLC_GLS_DISABLE )
#define CLC3_USER_SEL_G2D4T	( CLC_GLS_DISABLE )
#define CLC3_USER_SEL_G3D1N	( CLC_GLS_DISABLE )
#define CLC3_USER_SEL_G3D1T	( CLC_GLS_DISABLE )
#define CLC3_USER_SEL_G3D2N	( CLC_GLS_DISABLE )
#define CLC3_USER_SEL_G3D2T	( CLC_GLS_DISABLE )
#define CLC3_USER_SEL_G3D3N	( CLC_GLS_DISABLE )
#define CLC3_USER_SEL_G3D3T	( CLC_GLS_DISABLE )
#define CLC3_USER_SEL_G3D4N	( CLC_GLS_DISABLE )
#define CLC3_USER_SEL_G3D4T	( CLC_GLS_DISABLE )
#define CLC3_USER_SEL_G4D1N	( CLC_GLS_DISABLE )
#define CLC3_USER_SEL_G4D1T	( CLC_GLS_DISABLE )
#define CLC3_USER_SEL_G4D2N	( CLC_GLS_DISABLE )
#define CLC3_USER_SEL_G4D2T	( CLC_GLS_DISABLE )
#define CLC3_USER_SEL_G4D3N	( CLC_GLS_DISABLE )
#define CLC3_USER_SEL_G4D3T	( CLC_GLS_DISABLE )
#define CLC3_USER_SEL_G4D4N	( CLC_GLS_DISABLE )
#define CLC3_USER_SEL_G4D4T	( CLC_GLS_DISABLE )

/*----------------------------------------------------------------------------*/
/* CLC4CON */
/*----------------------------------------------------------------------------*/
#define CLC4_USER_MODE		( CLC_MODE_AND_OR )
#define CLC4_USER_LCOE		( CLC_OUTPUT_DISABLE )
#define CLC4_USER_INTN		( CLC_NEG_IRPT_DISABLE )
#define CLC4_USER_INTP		( CLC_POS_IRPT_DISABLE )
#define CLC4_USER_ON		( CLC_POWER_DISABLE )
#define CLC4_USER_G1POL		( CLC_GXPOL_NOT_INVERT ) 
#define CLC4_USER_G2POL		( CLC_GXPOL_NOT_INVERT ) 
#define CLC4_USER_G3POL		( CLC_GXPOL_NOT_INVERT ) 
#define CLC4_USER_G4POL		( CLC_GXPOL_NOT_INVERT ) 
/*----------------------------------------------------------------------------*/
/* CLC4SEL */
/*----------------------------------------------------------------------------*/
#define CLC4_USER_SEL_DS1	( CLC_SEL_DS1_CLCINA )
#define CLC4_USER_SEL_DS2	( CLC_SEL_DS2_CLCINB )
#define CLC4_USER_SEL_DS3	( CLC_SEL_DS3_CLCINC )
#define CLC4_USER_SEL_DS4	( CLC_SEL_DS4_CLCIND )
/*----------------------------------------------------------------------------*/
/* CLC4GLS */
/*----------------------------------------------------------------------------*/
#define CLC4_USER_SEL_G1D1N	( CLC_GLS_DISABLE )
#define CLC4_USER_SEL_G1D1T	( CLC_GLS_DISABLE )
#define CLC4_USER_SEL_G1D2N	( CLC_GLS_DISABLE )
#define CLC4_USER_SEL_G1D2T	( CLC_GLS_DISABLE )
#define CLC4_USER_SEL_G1D3N	( CLC_GLS_DISABLE )
#define CLC4_USER_SEL_G1D3T	( CLC_GLS_DISABLE )
#define CLC4_USER_SEL_G1D4N	( CLC_GLS_DISABLE )
#define CLC4_USER_SEL_G1D4T	( CLC_GLS_DISABLE )
#define CLC4_USER_SEL_G2D1N	( CLC_GLS_DISABLE )
#define CLC4_USER_SEL_G2D1T	( CLC_GLS_DISABLE )
#define CLC4_USER_SEL_G2D2N	( CLC_GLS_DISABLE )
#define CLC4_USER_SEL_G2D2T	( CLC_GLS_DISABLE )
#define CLC4_USER_SEL_G2D3N	( CLC_GLS_DISABLE )
#define CLC4_USER_SEL_G2D3T	( CLC_GLS_DISABLE )
#define CLC4_USER_SEL_G2D4N	( CLC_GLS_DISABLE )
#define CLC4_USER_SEL_G2D4T	( CLC_GLS_DISABLE )
#define CLC4_USER_SEL_G3D1N	( CLC_GLS_DISABLE )
#define CLC4_USER_SEL_G3D1T	( CLC_GLS_DISABLE )
#define CLC4_USER_SEL_G3D2N	( CLC_GLS_DISABLE )
#define CLC4_USER_SEL_G3D2T	( CLC_GLS_DISABLE )
#define CLC4_USER_SEL_G3D3N	( CLC_GLS_DISABLE )
#define CLC4_USER_SEL_G3D3T	( CLC_GLS_DISABLE )
#define CLC4_USER_SEL_G3D4N	( CLC_GLS_DISABLE )
#define CLC4_USER_SEL_G3D4T	( CLC_GLS_DISABLE )
#define CLC4_USER_SEL_G4D1N	( CLC_GLS_DISABLE )
#define CLC4_USER_SEL_G4D1T	( CLC_GLS_DISABLE )
#define CLC4_USER_SEL_G4D2N	( CLC_GLS_DISABLE )
#define CLC4_USER_SEL_G4D2T	( CLC_GLS_DISABLE )
#define CLC4_USER_SEL_G4D3N	( CLC_GLS_DISABLE )
#define CLC4_USER_SEL_G4D3T	( CLC_GLS_DISABLE )
#define CLC4_USER_SEL_G4D4N	( CLC_GLS_DISABLE )
#define CLC4_USER_SEL_G4D4T	( CLC_GLS_DISABLE )

/*----------------------------------------------------------------------------*/
/*変数定義*/
/*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*/
/*プロトタイプ宣言*/
/*----------------------------------------------------------------------------*/

#endif	/* CLC_USER_H */

