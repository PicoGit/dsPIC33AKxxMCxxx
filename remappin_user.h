
#ifndef REMAPPIN_USER_H
#define	REMAPPIN_USER_H

/*----------------------------------------------------------------------------*/
/*インクルードファイル*/
/*----------------------------------------------------------------------------*/
#include "remappin_driver.h"
/*----------------------------------------------------------------------------*/
/*定数定義*/
/*----------------------------------------------------------------------------*/
#define RPI_USER_INT1       RPI_NO_USE	/* INT1入力ピン選択ビット */
#define RPI_USER_INT2       RPI_NO_USE	/* INT2入力ピン選択ビット */
#define RPI_USER_INT3       RPI_NO_USE	/* INT3入力ピン選択ビット */
#define RPI_USER_INT4       RPI_NO_USE	/* INT4入力ピン選択ビット */
#define RPI_USER_T1CK       RPI_NO_USE	/* T1CK入力ピン選択ビット */
#define RPI_USER_TCKI1      RPI_NO_USE	/* TCKI1入力ピン選択ビット */
#define RPI_USER_ICM1       RPI_NO_USE	/* ICM1入力ピン選択ビット */
#define RPI_USER_TCKI2      RPI_NO_USE	/* TCKI2入力ピン選択ビット */
#define RPI_USER_ICM2       RPI_NO_USE	/* ICM2入力ピン選択ビット */
#define RPI_USER_TCKI3      RPI_NO_USE	/* TCKI3入力ピン選択ビット */
#define RPI_USER_ICM3       RPI_NO_USE	/* ICM3入力ピン選択ビット */
#define RPI_USER_TCKI4      RPI_NO_USE	/* TCKI4入力ピン選択ビット */
#define RPI_USER_ICM4       RPI_NO_USE	/* ICM4入力ピン選択ビット */
#define RPI_USER_TCKI5      RPI_NO_USE	/* TCKI5入力ピン選択ビット */
#define RPI_USER_ICM5       RPI_NO_USE	/* ICM5入力ピン選択ビット */
#define RPI_USER_TCKI6      RPI_NO_USE	/* TCKI6入力ピン選択ビット */
#define RPI_USER_ICM6       RPI_NO_USE	/* ICM6入力ピン選択ビット */
#define RPI_USER_TCKI7      RPI_NO_USE	/* TCKI7入力ピン選択ビット */
#define RPI_USER_ICM7       RPI_NO_USE	/* ICM7入力ピン選択ビット */
#define RPI_USER_TCKI8      RPI_NO_USE	/* TCKI8入力ピン選択ビット */
#define RPI_USER_ICM8       RPI_NO_USE	/* ICM8入力ピン選択ビット */
#define RPI_USER_OCFA       RPI_NO_USE	/* OCFA入力ピン選択ビット */
#define RPI_USER_OCFB       RPI_NO_USE	/* OCFB入力ピン選択ビット */
#define RPI_USER_OCFC       RPI_NO_USE	/* OCFC入力ピン選択ビット */
#define RPI_USER_OCFD       RPI_NO_USE	/* OCFD入力ピン選択ビット */
#define RPI_USER_PCI8       RPI_NO_USE	/* PCI8入力ピン選択ビット */
#define RPI_USER_PCI9       RPI_NO_USE	/* PCI9入力ピン選択ビット */
#define RPI_USER_PCI10      RPI_NO_USE	/* PCI10入力ピン選択ビット */
#define RPI_USER_PCI11      RPI_NO_USE	/* PCI11入力ピン選択ビット */
#define RPI_USER_QEIA1      RPI_NO_USE	/* QEIA1入力ピン選択ビット */
#define RPI_USER_QEIB1      RPI_NO_USE	/* QEIB1入力ピン選択ビット */
#define RPI_USER_QEIINDX1	RPI_NO_USE	/* QEIINDX1入力ピン選択ビット */
#define RPI_USER_QEIHOME1	RPI_NO_USE	/* QEIHOME1入力ピン選択ビット */
#define RPI_USER_QEIA2      RPI_NO_USE	/* QEIA2入力ピン選択ビット */
#define RPI_USER_QEIB2      RPI_NO_USE	/* QEIB2入力ピン選択ビット */
#define RPI_USER_QEIINDX2	RPI_NO_USE	/* QEIINDX12入力ピン選択ビット */
#define RPI_USER_QEIHOME2	RPI_NO_USE	/* QEIHOME2入力ピン選択ビット */
#define RPI_USER_QEIA3      RPI_NO_USE	/* QEIA3入力ピン選択ビット */
#define RPI_USER_QEIB3      RPI_NO_USE	/* QEIB3入力ピン選択ビット */
#define RPI_USER_QEIINDX3	RPI_NO_USE	/* QEIINDX3入力ピン選択ビット */
#define RPI_USER_QEIHOME3	RPI_NO_USE	/* QEIHOME3入力ピン選択ビット */
#define RPI_USER_QEIA4      RPI_NO_USE	/* QEIA4入力ピン選択ビット */
#define RPI_USER_QEIB4      RPI_NO_USE	/* QEIB4入力ピン選択ビット */
#define RPI_USER_QEIINDX4	RPI_NO_USE	/* QEIINDX4入力ピン選択ビット */
#define RPI_USER_QEIHOME4	RPI_NO_USE	/* QEIHOME4入力ピン選択ビット */
#define RPI_USER_REFI1		RPI_NO_USE	/* REFI1入力ピン選択ビット */
#define RPI_USER_REFI2		RPI_NO_USE	/* REFI1入力ピン選択ビット */
#define RPI_USER_U1RX       RPI_NO_USE	/* U1RX入力ピン選択ビット */
#define RPI_USER_U1DSR      RPI_NO_USE	/* U1DSR入力ピン選択ビット */
#define RPI_USER_U2RX       RPI_NO_USE	/* U2RX入力ピン選択ビット */
#define RPI_USER_U2DSR      RPI_NO_USE	/* U2DSR入力ピン選択ビット */
#define RPI_USER_U3RX       RPI_NO_USE	/* U3RX入力ピン選択ビット */
#define RPI_USER_U3DSR      RPI_NO_USE	/* U3DSR入力ピン選択ビット */
#define RPI_USER_SDI1       RPI_NO_USE	/* SDI1入力ピン選択ビット */
#define RPI_USER_SCK1       RPI_NO_USE	/* SCK1入力ピン選択ビット */
#define RPI_USER_SS1        RPI_NO_USE	/* SS1入力ピン選択ビット */
#define RPI_USER_REFOI      RPI_NO_USE	/* REFOI入力ピン選択ビット */
#define RPI_USER_SDI2       RPI_NO_USE	/* SDI2入力ピン選択ビット */
#define RPI_USER_SCK2       RPI_NO_USE	/* SCK2入力ピン選択ビット */
#define RPI_USER_SS2        RPI_NO_USE	/* SS2入力ピン選択ビット */
#define RPI_USER_SDI3       RPI_NO_USE	/* SDI3入力ピン選択ビット */
#define RPI_USER_SCK3       RPI_NO_USE	/* SCK3入力ピン選択ビット */
#define RPI_USER_SS3        RPI_NO_USE	/* SS3入力ピン選択ビット */
#define RPI_USER_U1CTS      RPI_NO_USE	/* U1CTS入力ピン選択ビット */
#define RPI_USER_U2CTS      RPI_NO_USE	/* U2CTS入力ピン選択ビット */
#define RPI_USER_U3CTS      RPI_NO_USE	/* U3CTS入力ピン選択ビット */
#define RPI_USER_CAN1RX     RPI_NO_USE	/* CAN1RX入力ピン選択ビット */
#define RPI_USER_CAN2RX     RPI_NO_USE	/* CAN2RX入力ピン選択ビット */
#define RPI_USER_PCI17      RPI_NO_USE	/* PCI17入力ピン選択ビット */
#define RPI_USER_PCI18      RPI_NO_USE	/* PCI18入力ピン選択ビット */
#define RPI_USER_PCI12      RPI_NO_USE	/* PCI12入力ピン選択ビット */
#define RPI_USER_PCI13      RPI_NO_USE	/* PCI13入力ピン選択ビット */
#define RPI_USER_PCI14      RPI_NO_USE	/* PCI14入力ピン選択ビット */
#define RPI_USER_PCI15      RPI_NO_USE	/* PCI15入力ピン選択ビット */
#define RPI_USER_PCI16      RPI_NO_USE	/* PCI16入力ピン選択ビット */
#define RPI_USER_SENT1      RPI_NO_USE	/* SENT1入力ピン選択ビット */
#define RPI_USER_SENT2      RPI_NO_USE	/* SENT2入力ピン選択ビット */
#define RPI_USER_CLCINA     RPI_NO_USE	/* CLCINA入力ピン選択ビット */
#define RPI_USER_CLCINB     RPI_NO_USE	/* CLCINB入力ピン選択ビット */
#define RPI_USER_CLCINC     RPI_NO_USE	/* CLCINC入力ピン選択ビット */
#define RPI_USER_CLCIND     RPI_NO_USE	/* CLCIND入力ピン選択ビット */
#define RPI_USER_ADTRIG31   RPI_NO_USE	/* ADTRG31入力ピン選択ビット */    
#define RPI_USER_BISS1SL    RPI_NO_USE	/* BISS1SL入力ピン選択ビット */
#define RPI_USER_BISS1GS    RPI_NO_USE	/* BISS1GS入力ピン選択ビット */

#define RPO_USER_RP1R       RPO_DEFAULT_PORT     /* RP1ピン出力機能選択ビット */
#define RPO_USER_RP2R	    RPO_DEFAULT_PORT     /* RP2ピン出力機能選択ビット */
#define RPO_USER_RP3R       RPO_DEFAULT_PORT     /* RP3ピン出力機能選択ビット */
#define RPO_USER_RP4R	    RPO_DEFAULT_PORT     /* RP4ピン出力機能選択ビット */
#define RPO_USER_RP5R	    RPO_DEFAULT_PORT     /* RP5ピン出力機能選択ビット */
#define RPO_USER_RP6R	    RPO_DEFAULT_PORT     /* RP6ピン出力機能選択ビット */
#define RPO_USER_RP7R	    RPO_DEFAULT_PORT     /* RP7ピン出力機能選択ビット */
#define RPO_USER_RP8R	    RPO_DEFAULT_PORT     /* RP8ピン出力機能選択ビット */
#define RPO_USER_RP9R	    RPO_DEFAULT_PORT     /* RP9ピン出力機能選択ビット */
#define RPO_USER_RP10R	    RPO_DEFAULT_PORT     /* RP10ピン出力機能選択ビット */
#define RPO_USER_RP11R	    RPO_DEFAULT_PORT     /* RP11ピン出力機能選択ビット */
#define RPO_USER_RP12R	    RPO_DEFAULT_PORT     /* RP12ピン出力機能選択ビット */
#define RPO_USER_RP13R	    RPO_DEFAULT_PORT     /* RP13ピン出力機能選択ビット */
#define RPO_USER_RP14R	    RPO_DEFAULT_PORT     /* RP14ピン出力機能選択ビット */	
#define RPO_USER_RP15R	    RPO_DEFAULT_PORT     /* RP15ピン出力機能選択ビット */	
#define RPO_USER_RP16R	    RPO_DEFAULT_PORT     /* RP16ピン出力機能選択ビット */
#define RPO_USER_RP17R	    RPO_DEFAULT_PORT     /* RP17ピン出力機能選択ビット */	
#define RPO_USER_RP18R	    RPO_DEFAULT_PORT     /* RP18ピン出力機能選択ビット */
#define RPO_USER_RP19R	    RPO_DEFAULT_PORT     /* RP19ピン出力機能選択ビット */
#define RPO_USER_RP20R	    RPO_DEFAULT_PORT     /* RP20ピン出力機能選択ビット */
#define RPO_USER_RP21R	    RPO_DEFAULT_PORT     /* RP21ピン出力機能選択ビット */
#define RPO_USER_RP22R	    RPO_DEFAULT_PORT     /* RP22ピン出力機能選択ビット */
#define RPO_USER_RP23R	    RPO_DEFAULT_PORT     /* RP23ピン出力機能選択ビット */
#define RPO_USER_RP24R	    RPO_DEFAULT_PORT     /* RP24ピン出力機能選択ビット */	
#define RPO_USER_RP25R	    RPO_DEFAULT_PORT     /* RP25ピン出力機能選択ビット */	
#define RPO_USER_RP26R	    RPO_DEFAULT_PORT     /* RP26ピン出力機能選択ビット */
#define RPO_USER_RP27R	    RPO_DEFAULT_PORT     /* RP27ピン出力機能選択ビット */	
#define RPO_USER_RP28R	    RPO_DEFAULT_PORT     /* RP28ピン出力機能選択ビット */
#define RPO_USER_RP32R      RPO_DEFAULT_PORT     /* RP32ピン出力機能選択ビット */
#define RPO_USER_RP33R	    RPO_DEFAULT_PORT     /* RP33ピン出力機能選択ビット */
#define RPO_USER_RP34R      RPO_DEFAULT_PORT     /* RP34ピン出力機能選択ビット */
#define RPO_USER_RP35R	    RPO_DEFAULT_PORT     /* RP35ピン出力機能選択ビット */
#define RPO_USER_RP36R	    RPO_DEFAULT_PORT     /* RP36ピン出力機能選択ビット */
#define RPO_USER_RP37R	    RPO_DEFAULT_PORT     /* RP37ピン出力機能選択ビット */
#define RPO_USER_RP38R	    RPO_DEFAULT_PORT     /* RP38ピン出力機能選択ビット */
#define RPO_USER_RP39R	    RPO_DEFAULT_PORT     /* RP39ピン出力機能選択ビット */
#define RPO_USER_RP40R	    RPO_DEFAULT_PORT     /* RP40ピン出力機能選択ビット */
#define RPO_USER_RP41R	    RPO_DEFAULT_PORT     /* RP41ピン出力機能選択ビット */
#define RPO_USER_RP42R	    RPO_DEFAULT_PORT     /* RP42ピン出力機能選択ビット */
#define RPO_USER_RP43R	    RPO_DEFAULT_PORT     /* RP43ピン出力機能選択ビット */
#define RPO_USER_RP44R	    RPO_DEFAULT_PORT     /* RP44ピン出力機能選択ビット */
#define RPO_USER_RP45R	    RPO_DEFAULT_PORT     /* RP45ピン出力機能選択ビット */	
#define RPO_USER_RP46R	    RPO_DEFAULT_PORT     /* RP46ピン出力機能選択ビット */
#define RPO_USER_RP47R	    RPO_DEFAULT_PORT     /* RP47ピン出力機能選択ビット */	
#define RPO_USER_RP48R	    RPO_DEFAULT_PORT     /* RP48ピン出力機能選択ビット */
#define RPO_USER_RP49R	    RPO_DEFAULT_PORT     /* RP49ピン出力機能選択ビット */
#define RPO_USER_RP50R	    RPO_DEFAULT_PORT     /* RP50ピン出力機能選択ビット */
#define RPO_USER_RP51R	    RPO_DEFAULT_PORT     /* RP51ピン出力機能選択ビット */
#define RPO_USER_RP52R	    RPO_DEFAULT_PORT     /* RP52ピン出力機能選択ビット */
#define RPO_USER_RP53R	    RPO_DEFAULT_PORT     /* RP53ピン出力機能選択ビット */
#define RPO_USER_RP54R	    RPO_DEFAULT_PORT     /* RP54ピン出力機能選択ビット */
#define RPO_USER_RP55R	    RPO_DEFAULT_PORT     /* RP55ピン出力機能選択ビット */	
#define RPO_USER_RP56R	    RPO_DEFAULT_PORT     /* RP56ピン出力機能選択ビット */
#define RPO_USER_RP57R	    RPO_DEFAULT_PORT     /* RP57ピン出力機能選択ビット */
#define RPO_USER_RP58R	    RPO_DEFAULT_PORT     /* RP58ピン出力機能選択ビット */
#define RPO_USER_RP59R	    RPO_DEFAULT_PORT     /* RP59ピン出力機能選択ビット */
#define RPO_USER_RP60R	    RPO_DEFAULT_PORT     /* RP60ピン出力機能選択ビット */
#define RPO_USER_RP61R	    RPO_DEFAULT_PORT     /* RP61ピン出力機能選択ビット */
#define RPO_USER_RP62R	    RPO_DEFAULT_PORT     /* RP62ピン出力機能選択ビット */
#define RPO_USER_RP63R	    RPO_DEFAULT_PORT     /* RP63ピン出力機能選択ビット */
#define RPO_USER_RP64R	    RPO_DEFAULT_PORT     /* RP64ピン出力機能選択ビット */
#define RPO_USER_RP65R	    RPO_DEFAULT_PORT     /* RP65ピン出力機能選択ビット */
#define RPO_USER_RP66R	    RPO_DEFAULT_PORT     /* RP66ピン出力機能選択ビット */
#define RPO_USER_RP67R	    RPO_DEFAULT_PORT     /* RP67ピン出力機能選択ビット */
#define RPO_USER_RP68R	    RPO_DEFAULT_PORT     /* RP68ピン出力機能選択ビット */
#define RPO_USER_RP69R	    RPO_DEFAULT_PORT     /* RP69ピン出力機能選択ビット */
#define RPO_USER_RP70R	    RPO_DEFAULT_PORT     /* RP70ピン出力機能選択ビット */
#define RPO_USER_RP71R	    RPO_DEFAULT_PORT     /* RP71ピン出力機能選択ビット */	
#define RPO_USER_RP72R	    RPO_DEFAULT_PORT     /* RP72ピン出力機能選択ビット */
#define RPO_USER_RP73R	    RPO_DEFAULT_PORT     /* RP73ピン出力機能選択ビット */
#define RPO_USER_RP74R	    RPO_DEFAULT_PORT     /* RP74ピン出力機能選択ビット */
#define RPO_USER_RP75R	    RPO_DEFAULT_PORT     /* RP75ピン出力機能選択ビット */
#define RPO_USER_RP76R	    RPO_DEFAULT_PORT     /* RP76ピン出力機能選択ビット */
#define RPO_USER_RP77R	    RPO_DEFAULT_PORT     /* RP77ピン出力機能選択ビット */	
#define RPO_USER_RP78R	    RPO_DEFAULT_PORT     /* RP78ピン出力機能選択ビット */
#define RPO_USER_RP79R	    RPO_DEFAULT_PORT     /* RP79ピン出力機能選択ビット */
#define RPO_USER_RP80R	    RPO_DEFAULT_PORT     /* RP80ピン出力機能選択ビット */	
#define RPO_USER_RP176R	    RPO_DEFAULT_PORT     /* RP176ピン出力機能選択ビット */
#define RPO_USER_RP177R	    RPO_DEFAULT_PORT     /* RP177ピン出力機能選択ビット */
#define RPO_USER_RP178R	    RPO_DEFAULT_PORT     /* RP178ピン出力機能選択ビット */
#define RPO_USER_RP179R	    RPO_DEFAULT_PORT     /* RP179ピン出力機能選択ビット */
#define RPO_USER_RP180R	    RPO_DEFAULT_PORT     /* RP180ピン出力機能選択ビット */
#define RPO_USER_RP181R	    RPO_DEFAULT_PORT     /* RP181ピン出力機能選択ビット */

/*----------------------------------------------------------------------------*/
/*変数定義*/
/*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*/
/*プロトタイプ宣言*/
/*----------------------------------------------------------------------------*/
#endif	/* REMAPPIN_USER_H */

