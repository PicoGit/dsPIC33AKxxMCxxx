/*----------------------------------------------------------------------------*/
/*【FILE】ファイル概要*/
/*          メイン関数*/
/*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*/
/*インクルードファイル*/
/*----------------------------------------------------------------------------*/
#include <stdio.h>
#include <stdlib.h>
#include <dsp.h>
#include <xc.h>
#include "peripheral_init.h"
#include "BoardSupportPackage.h"
#include "adc_driver.h"
#include "adc_user.h"
#include "clock_driver.h"
#include <builtins.h>

//GPIO
#define PROJECT_1_1_1_CPU_TEST1		  ( 0x111u )
#define PROJECT_1_1_2_CPU_TEST2		  ( 0x112u )
#define PROJECT_1_1_3_CPU_TEST3		  ( 0x113u )
#define PROJECT_1_1_4_CPU_TEST4		  ( 0x114u )
#define PROJECT_1_2_1_FPU_TEST1		  ( 0x121u )
#define PROJECT_1_3_1_DSP_FIR		  ( 0x131u )
#define PROJECT_1_3_2_DSP_FFT		  ( 0x132u )
#define PROJECT_1_3_3_DSP_ACR		  ( 0x133u )
#define PROJECT_1_3_4_DSP_LMS		  ( 0x134u )

#define PROJECT_2_1_1_GPIO_LED_SW     ( 0x211u )    /** GPIO Output/Input */
#define PROJECT_2_1_2_GPIO_RGBLED     ( 0x212u )    /** GPIO Full Color LED */

#define PROJECT_2_2_1_IRPT_TIMER1     ( 0x221u )    /** Irpt Timer1 */

//SCCP
#define PROJECT_2_3_1_SCCP_TIMER	  ( 0x231u )    /** SCCP  */
#define PROJECT_2_3_2_SCCP_OC         ( 0x232u )
#define PROJECT_2_3_3_SCCP_IC         ( 0x233u )

// ADConverter
#define PROJECT_2_4_1_AD_SINGLE			( 0x241u )
#define PROJECT_2_4_3_AD_INTEG			( 0x243u )
#define PROJECT_2_4_4_AD_OVSAMP			( 0x244u )

// Compalator & DAC
#define PROJECT_2_5_1_CMPDAC_POTANTION  ( 0x251u )
#define PROJECT_2_5_2_DAC_TRI           ( 0x252u )
#define PROJECT_2_5_3_DAC_DMA           ( 0x253u )
#define PROJECT_2_5_4_DAC_DMA_AD        ( 0x254u ) 
#define PROJECT_2_5_5_DAC_DMA_PTG_AD    ( 0x255u ) 

// Other Analog
#define PROJECT_2_6_1_OPEAMP_OFFSET     ( 0x261u ) 
#define PROJECT_2_6_2_OPEAMP            ( 0x262u ) 
#define PROJECT_2_6_3_CBG               ( 0x263u ) 

// CLC
#define PROJECT_2_7_1_CLC_BASIC         ( 0x271u )
#define PROJECT_2_7_2_CLC_QEI           ( 0x272u )
#define PROJECT_2_7_3_CLC_DEBOUNCE      ( 0x273u )
#define PROJECT_2_7_4_CLC_MANCHESTER    ( 0x274u )

// QEI
#define PROJECT_2_8_1_QEI               ( 0x281u )
#define PROJECT_2_8_2_BISS              ( 0x282u )

// DMA
#define PROJECT_2_9_1_DMA_BASIC			( 0x291u )
#define PROJECT_2_9_2_DMA_PINGPONG      ( 0x292u )

// Comunication
#define PROJECT_3_1_1_UART_PC           ( 0x311u )
#define PROJECT_3_1_2_UART_DATA_VIS     ( 0x312u )
#define PROJECT_3_1_3_I2C               ( 0x313u )
#define PROJECT_3_1_4_SPI               ( 0x314u )
#define PROJECT_3_1_5_SPI_DMA           ( 0x315u )
#define PROJECT_3_1_6_SPI_FLASH         ( 0x316u )
#define PROJECT_3_1_7_CAN               ( 0x317u )
#define PROJECT_3_1_8_SENT              ( 0x318u )

// HRPWM
#define PROJECT_3_2_1_PWM_COMB          ( 0x321u )
#define PROJECT_3_2_2_HRPWM_PS          ( 0x322u )  


#define PROJECT_4_1_1_PMU				( 0x411u )  
#define PROJECT_4_1_2_WDT				( 0x412u )  
#define PROJECT_4_1_3_DMT				( 0x413u ) 
#define PROJECT_4_1_4_IOIM				( 0x414u ) 

#define PROJECT_TYPE  PROJECT_3_1_8_SENT


#if (PROJECT_TYPE == PROJECT_2_1_1_GPIO_LED_SW)
int main(int argc, char** argv) 
{
    /*----------------------------------------------------------------------------*/
    /*【****】初期化*/
    /*----------------------------------------------------------------------------*/
        vdg_Clock_Set_Register();
		TRISBbits.TRISB10 = 1u;
		TRISDbits.TRISD10 = 0u;
    /*----------------------------------------------------------------------------*/
    /*【****】メインルーチン*/
    /*----------------------------------------------------------------------------*/
        while(1)
        {
			LATDbits.LATD10 = PORTBbits.RB10;
        }
        return (EXIT_SUCCESS);
}

#elif (PROJECT_TYPE == PROJECT_1_1_1_CPU_TEST1)

#define LOOP_COUNT 1000000
int main(int argc, char** argv) 
{
	int i;
    /*----------------------------------------------------------------------------*/
    /* 初期化*/
    /*----------------------------------------------------------------------------*/
        vdg_Clock_Set_Register();
		TRISBbits.TRISB10 = 1u;
		TRISDbits.TRISD9 = 0u;
		TRISDbits.TRISD10 = 0u;
    /*----------------------------------------------------------------------------*/
    /* メインルーチン*/
    /*----------------------------------------------------------------------------*/
        while(1)
        {
			LATDbits.LATD9 ++;
			for (i = 0; i < LOOP_COUNT; i++) 
			{
			
				if ((i % 3)== 0)
				{
					LATDbits.LATD10 = 1;
				}
				else
				{
					LATDbits.LATD10 = 0;
				}
				
			}
			//Nop();
        }
        return (EXIT_SUCCESS);
}
#elif (PROJECT_TYPE == PROJECT_1_1_2_CPU_TEST2)

#define LOOP_COUNT 1000000
#define ARRAY_SIZE 100


uint8_t array[ARRAY_SIZE];
uint8_t secret = 42;


void initialize_array() 
{
    for (int i = 0; i < ARRAY_SIZE; i++) {
        array[i] = 0;
    }
}

uint8_t access_array(uint8_t index) {
    if (index < ARRAY_SIZE) {
        return array[index];
    }
    return 0;
}

int main(int argc, char** argv) 
{
	int i;
    /*----------------------------------------------------------------------------*/
    /*初期化*/
    /*----------------------------------------------------------------------------*/
        vdg_Clock_Set_Register();
		//TRISBbits.TRISB10 = 1u;
		TRISDbits.TRISD9 = 0u;
		//TRISDbits.TRISD10 = 0u;
		initialize_array();
    /*----------------------------------------------------------------------------*/
    /*メインルーチン*/
    /*----------------------------------------------------------------------------*/
        while(1)
        {
			LATDbits.LATD9 ++;
			for (int i = 0; i < LOOP_COUNT; i++) 
			{
				uint8_t index = (i & 1) ? secret : i % ARRAY_SIZE;
				access_array(index);
			}
			//Nop();
        }
        return (EXIT_SUCCESS);
}
#elif (PROJECT_TYPE == PROJECT_1_1_3_CPU_TEST3)
#define ARRAY_SIZE 1024 * 2  //
#define ITERATIONS 1000000

int array[ARRAY_SIZE];

// 連続アクセス
void sequential_access() 
{
    for (int i = 0; i < ITERATIONS; i++) 
	{
        array[i % ARRAY_SIZE]++;
    }
}

// ランダムアクセス
void random_access() 
{
    for (int i = 0; i < ITERATIONS; i++) 
	{
        array[rand() % ARRAY_SIZE]++;
    }
}

int main() 
{
    /*----------------------------------------------------------------------------*/
    /*初期化*/
    /*----------------------------------------------------------------------------*/
        vdg_Clock_Set_Register();
		//TRISBbits.TRISB10 = 1u;
		TRISDbits.TRISD9 = 0u;
		TRISDbits.TRISD10 = 0u;

    /*----------------------------------------------------------------------------*/
    /*メインルーチン*/
    /*----------------------------------------------------------------------------*/
        while(1)
        {

			// 配列の初期化
			for (int i = 0; i < ARRAY_SIZE; i++) 
			{
				array[i] = 0;
			}

			// 連続アクセスの計測
			LATDbits.LATD9 = 1u;
			sequential_access();
			LATDbits.LATD9 = 0u;

			LATDbits.LATD10 = 1u;
			random_access();
			LATDbits.LATD10 = 0u;
        }
        return (EXIT_SUCCESS);
}
#elif (PROJECT_TYPE == PROJECT_1_1_4_CPU_TEST4	)
#define ARRAY_SIZE 1024 * 2  // 1MBの配列
#define ITERATIONS 1000000

uint8_t array8[ARRAY_SIZE];
uint16_t array16[ARRAY_SIZE / 2];
uint32_t array32[ARRAY_SIZE / 4];

void access_8bit() {
    for (int i = 0; i < ITERATIONS; i++) {
        array8[i % ARRAY_SIZE]++;
    }
}

void access_16bit() {
    for (int i = 0; i < ITERATIONS; i++) {
        array16[i % (ARRAY_SIZE / 2)]++;
    }
}

void access_32bit() {
    for (int i = 0; i < ITERATIONS; i++) {
        array32[i % (ARRAY_SIZE / 4)]++;
    }
}

int main() {
    /*-----------------------------------------------------------------------*/
    /*初期化*/
    /*-----------------------------------------------------------------------*/
        vdg_Clock_Set_Register();
		//TRISBbits.TRISB10 = 1u;
		TRISDbits.TRISD9 = 0u;
		TRISDbits.TRISD10 = 0u;
		TRISCbits.TRISC9 = 0u;
    // 配列の初期化
    for (int i = 0; i < ARRAY_SIZE; i++) {
        array8[i] = 0;
        if (i < ARRAY_SIZE / 2) array16[i] = 0;
        if (i < ARRAY_SIZE / 4) array32[i] = 0;
    }
    /*-----------------------------------------------------------------------*/
    /*メインルーチン*/
    /*-----------------------------------------------------------------------*/
        while(1)
        {
    // 8ビットアクセスの計測
    LATDbits.LATD9 = 1u;
    access_8bit();
    LATDbits.LATD9 = 0u;


    // 16ビットアクセスの計測
    LATDbits.LATD10 = 1u;
    access_16bit();
    LATDbits.LATD10 = 0u;


    // 32ビットアクセスの計測
    LATCbits.LATC9 = 1u;
    access_32bit();
    LATCbits.LATC9 = 0u;

		}
    return 0;
}

#elif (PROJECT_TYPE == PROJECT_1_2_1_FPU_TEST1)
#define ITERATIONS 1000000

void float_operations() 
{
	float a = 1.23f;
	float b = 4.56f;
	float c = 0.0f;

	for (int i = 0; i < ITERATIONS; i++) {
		c += a * b;
		a += 0.01f;
		b -= 0.01f;
	}
	// ループの最適化を防ぐためのダミー出力
	DAC1DAT = (a + b + c ) /15;
}

void double_operations() 
{
	double a = 1.23;
	double b = 4.56;
	double c = 0.0;

	for (int i = 0; i < ITERATIONS; i++) {
		c += a * b;
		a += 0.01;
		b -= 0.01;
	}
	// ループの最適化を防ぐためのダミー出力
	DAC1DAT = (a + b + c ) / 15;
}

int main() 
{
/*----------------------------------------------------------------------------*/
/*初期化*/
/*----------------------------------------------------------------------------*/
	vdg_Clock_Set_Register();
	TRISDbits.TRISD9 = 0u;
	TRISDbits.TRISD10 = 0u;
	TRISCbits.TRISC9 = 0u;
/*----------------------------------------------------------------------------*/
/*メインルーチン*/
/*----------------------------------------------------------------------------*/
	while(1)
	{
		// 単精度浮動小数点演算のベンチマーク
		LATDbits.LATD9 = 1u;
		float_operations();
		LATDbits.LATD9 = 0u;

		// 倍精度浮動小数点演算のベンチマーク
		LATDbits.LATD10 = 1u;
		double_operations();
		LATDbits.LATD10 = 0u;
	}

	return 0;
}
#elif (PROJECT_TYPE == PROJECT_1_3_1_DSP_FIR)


#define FIR_TAP				100                //FIRタップ数
#define FIR_SFREQ			48000              //FIRサンプリング周波数
#define FIR_DUMMY_A_FREQ    2000.0
#define FIR_DUMMY_B_FREQ    8500.0
#define FIR_DUMMY_C_FREQ    12000.0
#define FIR_DUMMY_A_GAIN    0.9
#define FIR_DUMMY_B_GAIN    0.5
#define FIR_DUMMY_C_GAIN    0.2

#define FIR_SPL_NUM         256



//入力ダミーデータ
float fl_FIRDummyData[FIR_SPL_NUM];
fractional fir_FIRDummyData[FIR_SPL_NUM];
//ディレイバッファ
//fractional __attribute__ ((space(ymemory), aligned (256))) firDelay[127];
//fractional firDelay[127];

//フィルタ構造
FIRStruct firFilterLPF;
FIRStruct firFilterBPF;
FIRStruct firFilterHPF;
//フィルタ出力
fractional fir_OutputLPF[FIR_SPL_NUM];
fractional fir_OutputBPF[FIR_SPL_NUM];
fractional fir_OutputHPF[FIR_SPL_NUM];

int TapCnt;
/*
U_0
Remez Algorithm LPF
Sampling Frequency =    48000.0
cutoff1 = 5000.0000000
cutoff2 = 6000.0000000
Tap Count = 100
attenuate =   -40.00
ripple factor =    0.1000000
*/
fractional LPF_SF48k_CF5k_100T[FIR_TAP] __attribute__((space(xmemory), far))= 		
{
-11345875	,
-1348086	,
2101441	,
3038787	,
5320409	,
2845042	,
747979	,
-4361683	,
-5804455	,
-6403468	,
-1598913	,
2916012	,
8395421	,
8350743	,
5483385	,
-2429496	,
-8614922	,
-12542608	,
-8780894	,
-1148515	,
9536639	,
15288686	,
14825745	,
5135436	,
-7568629	,
-19050243	,
-20872508	,
-12669195	,
4491020	,
20858908	,
29241529	,
22277659	,
2901321	,
-21887197	,
-38217748	,
-37139217	,
-14921886	,
19215710	,
50152787	,
59427382	,
37944823	,
-10987720	,
-67344991	,
-103091528	,
-90561247	,
-16586082	,
111645541	,
265039300	,
402334708	,
483213741	,
483213741	,
402334708	,
265039300	,
111645541	,
-16586082	,
-90561247	,
-103091528	,
-67344991	,
-10987720	,
37944823	,
59427382	,
50152787	,
19215710	,
-14921886	,
-37139217	,
-38217748	,
-21887197	,
2901321	,
22277659	,
29241529	,
20858908	,
4491020	,
-12669195	,
-20872508	,
-19050243	,
-7568629	,
5135436	,
14825745	,
15288686	,
9536639	,
-1148515	,
-8780894	,
-12542608	,
-8614922	,
-2429496	,
5483385	,
8350743	,
8395421	,
2916012	,
-1598913	,
-6403468	,
-5804455	,
-4361683	,
747979	,
2845042	,
5320409	,
3038787	,
2101441	,
-1348086	,
-11345875	

};

/*
U_0
Remez Algorithm BPF
Sampling Frequency =    48000.0
cutoff1 = 7000.0000000
cutoff2 = 8000.0000000
cutoff3 = 9000.0000000
cutoff4 = 10000.0000000
Tap Count = 100
attenuate =  -100.00
ripple factor =    0.1000000
*/
fractional BPF_SF48k_CF7k10k__100T[FIR_TAP] __attribute__((space(xmemory), far))= 	
{
	-137284	,
383693	,
50904	,
55042	,
336813	,
429783	,
-265282	,
-1314330	,
-1083485	,
1197710	,
3332260	,
1767570	,
-3449184	,
-6574309	,
-1874078	,
7746838	,
10915680	,
459622	,
-14686346	,
-15734882	,
3640738	,
24458855	,
19853859	,
-11550546	,
-36596100	,
-21646933	,
23990460	,
49829102	,
19335100	,
-40914960	,
-62152223	,
-11427647	,
61265420	,
71118683	,
-2805381	,
-82951371	,
-74335670	,
22953832	,
103105517	,
70049274	,
-47328536	,
-118598930	,
-57653816	,
73130196	,
126696283	,
37981890	,
-96925144	,
-125687009	,
-13262466	,
115322660	,
115322660	,
-13262466	,
-125687009	,
-96925144	,
37981890	,
126696283	,
73130196	,
-57653816	,
-118598930	,
-47328536	,
70049274	,
103105517	,
22953832	,
-74335670	,
-82951371	,
-2805381	,
71118683	,
61265420	,
-11427647	,
-62152223	,
-40914960	,
19335100	,
49829102	,
23990460	,
-21646933	,
-36596100	,
-11550546	,
19853859	,
24458855	,
3640738	,
-15734882	,
-14686346	,
459622	,
10915680	,
7746838	,
-1874078	,
-6574309	,
-3449184	,
1767570	,
3332260	,
1197710	,
-1083485	,
-1314330	,
-265282	,
429783	,
336813	,
55042	,
50904	,
383693	,
-137284	
};
/*
U_0
Remez Algorithm HPF
Sampling Frequency =    48000.0
cutoff1 = 10000.0000000
cutoff2 = 11000.0000000
Tap Count = 100
attenuate =  -100.00
ripple factor =    0.1000000
Quantized by 32 [bits]
      631042
*/
fractional HPF_SF48k_CF10k_100T[FIR_TAP] __attribute__((space(xmemory), far))= 		
{
	631042	,
7886162	,
-36828284	,
66598643	,
-52523460	,
-3268292	,
32315499	,
-2502069	,
-23918555	,
794611	,
20056737	,
2622472	,
-17538827	,
-6674920	,
15044598	,
10841364	,
-11787302	,
-14803700	,
7493018	,
17986285	,
-1920700	,
-19990284	,
-4689383	,
20145758	,
12119433	,
-18091418	,
-19649860	,
13301775	,
26603126	,
-5607716	,
-32075079	,
-4838361	,
34793249	,
17998637	,
-33875157	,
-33081339	,
27957117	,
49302389	,
-15581318	,
-65755972	,
-5098258	,
81319072	,
37580014	,
-94803461	,
-90977124	,
105253372	,
199264175	,
-111926424	,
-673824800	,
1187934027	,
-673824800	,
-111926424	,
199264175	,
105253372	,
-90977124	,
-94803461	,
37580014	,
81319072	,
-5098258	,
-65755972	,
-15581318	,
49302389	,
27957117	,
-33081339	,
-33875157	,
17998637	,
34793249	,
-4838361	,
-32075079	,
-5607716	,
26603126	,
13301775	,
-19649860	,
-18091418	,
12119433	,
20145758	,
-4689383	,
-19990284	,
-1920700	,
17986285	,
7493018	,
-14803700	,
-11787302	,
10841364	,
15044598	,
-6674920	,
-17538827	,
2622472	,
20056737	,
794611	,
-23918555	,
-2502069	,
32315499	,
-3268292	,
-52523460	,
66598643	,
-36828284	,
7886162	,
631042	,
0	

};
fractional Delays[FIR_TAP] __attribute__((space(ymemory), far));

int32_t i4g_Time[16];

/*----------------------------------------------------------------------------*/
/**
* @fn          main(int argc, char** argv) 
* @brief       PROJECT_4_1_1_DSP_FIR
* @param[in]   argc argument count
* @param[in]   argv argument vector
* @retval      EXIT_SUCCESS 成功
* @retval      EXIT_FAILURE 失敗
* @detail      DSPによるFFT
* @note        
 */
/*----------------------------------------------------------------------------*/
int main(int argc, char** argv) 
{
    unsigned int u2l_Loop;
    unsigned int u2lCnt;
    float f4_Time;
    float f4_DummyA;
    float f4_DummyB;
    float f4_DummyC; 
	
		CORCON = 0x00;
	
    /*------------------------------------------------------------------------*/
    /*　クロック初期化*/
    /*------------------------------------------------------------------------*/
        vdg_Clock_Set_Register();    /* クロック初期化 */
  /*-----------------------------------------------------------------------*/
    /* ピン設定*/
    /*-----------------------------------------------------------------------*/
		RPOR12bits.RP50R = 9u;		//UART1出力 RP50
		RPINR9bits.U1RXR = 52u;		//UART1入力 RP52
    /*-----------------------------------------------------------------------*/
    /* UART初期化*/
    /*-----------------------------------------------------------------------*/

		U1CON = 0x00000000u;
		U1STAT = 0x00000000u;
		U1BRG = (uint32_t) (100000000 / 115200);
		U1RXB = 0x00000000u;
		U1TXB = 0x00000000u;
		U1PA = 0x00000000u;
		U1PB = 0x00000000u;
		U1CHK = 0x00000000u;
		U1SCCON = 0x00000000u;
		U1UIR = 0x00000000u;

		U1CONbits.CLKMOD = 1u;
		U1CONbits.RXEN = 1u;	//受信許可
		U1CONbits.TXEN = 1u;	//送信許可
		U1CONbits.ON = 1u;

	/*-----------------------------------------------------------------------*/
	/* U1UIRレジスタ */
	/*-----------------------------------------------------------------------*/
		PR1 = 1000000;
		T1CONbits.ON = 1;
		T1CONbits.TCKPS = 0;
		IFS1bits.T1IF = 0;
		IEC1bits.T1IE = 0;
		IPC6bits.T1IP = 3;
		
		INTCON1bits.GIE = 0;
		
    /*------------------------------------------------------------------------*/
    /* フィルタ係数初期化*/
    /*------------------------------------------------------------------------*/
        FIRStructInit( &firFilterLPF,          // フィルター構造体
                        FIR_TAP,            // フィルター係数タップ数
                        LPF_SF48k_CF5k_100T,				// フィルタ係数ポインタ
                        0,					// フィルタ係数PSVページ
                        Delays );           // ディレイバッファ
        FIRStructInit( &firFilterBPF,          // フィルター構造体
                        FIR_TAP,            // フィルター係数タップ数
                        BPF_SF48k_CF7k10k__100T,				// フィルタ係数ポインタ
                        0,					// フィルタ係数PSVページ
                        Delays );           // ディレイバッファ
        FIRStructInit( &firFilterHPF,          // フィルター構造体
                        FIR_TAP,            // フィルター係数タップ数
                        HPF_SF48k_CF10k_100T,				// フィルタ係数ポインタ
                        0,					// フィルタ係数PSVページ
                        Delays );           // ディレイバッファ
    /*------------------------------------------------------------------------*/
    /* ディレイバッファクリア*/
    /*------------------------------------------------------------------------*/
        FIRDelayInit( &firFilterLPF ); // フィルター構造体
        FIRDelayInit( &firFilterBPF ); // フィルター構造体
        FIRDelayInit( &firFilterHPF ); // フィルター構造体
    /*------------------------------------------------------------------------*/
    /* ダミーデータ生成*/
    /*------------------------------------------------------------------------*/

        for (u2l_Loop = 0;u2l_Loop < FIR_SPL_NUM ;u2l_Loop ++)
        {
            f4_Time = (float)u2l_Loop/(FIR_SFREQ);
            f4_DummyA = sin(f4_Time * FIR_DUMMY_A_FREQ * 2 * PI) * FIR_DUMMY_A_GAIN  ;
            f4_DummyB = sin(f4_Time * FIR_DUMMY_B_FREQ * 2 * PI) * FIR_DUMMY_B_GAIN  ;
			f4_DummyC = sin(f4_Time * FIR_DUMMY_C_FREQ * 2 * PI) * FIR_DUMMY_C_GAIN  ;
			fl_FIRDummyData[u2l_Loop] = (f4_DummyA + f4_DummyB + f4_DummyC);
            fir_FIRDummyData[u2l_Loop] = fl_FIRDummyData[u2l_Loop] * 1073741823;
        }
#if 0
    /*------------------------------------------------------------------------*/
    /* フィルタ演算*/
    /*------------------------------------------------------------------------*/
		i4g_Time[0] = TMR1;
        for (u2lCnt = 0;u2lCnt < FIR_SPL_NUM;u2lCnt ++)
        {
            FIR( 1,                                 // 入力信号個数
                &fir_OutputLPF[u2lCnt],                // 出力サンプル変数ポインタ
                &fir_FIRDummyData[u2lCnt],      // 入力サンプル変数ポインタ
                &firFilterLPF );                       // フィルター構造体
        }
		i4g_Time[1] = TMR1;
        for (u2lCnt = 0;u2lCnt < FIR_SPL_NUM;u2lCnt ++)
        {
            FIR( 1,                                 // 入力信号個数
                &fir_OutputBPF[u2lCnt],                // 出力サンプル変数ポインタ
                &fir_FIRDummyData[u2lCnt],      // 入力サンプル変数ポインタ
                &firFilterBPF );                       // フィルター構造体
        }
		i4g_Time[2] = TMR1;
        for (u2lCnt = 0;u2lCnt < FIR_SPL_NUM;u2lCnt ++)
        {
            FIR( 1,                                 // 入力信号個数
                &fir_OutputHPF[u2lCnt],                // 出力サンプル変数ポインタ
                &fir_FIRDummyData[u2lCnt],      // 入力サンプル変数ポインタ
                &firFilterHPF );                       // フィルター構造体
        }
		i4g_Time[3] = TMR1;
		while(1){;}
#endif
    /*-----------------------------------------------------------------------*/
    /* SCCP1設定 */
    /*-----------------------------------------------------------------------*/
		CCP1CON1 = 0x00000000u;
			CCP1CON1bits.T32 = 1u;
		CCP1CON2 = 0x00000000u;
		CCP1CON3 = 0x00000000u;
			
		CCP1PR = 2083;
		
		IPC6bits.CCT1IP = 5;
		IFS1bits.CCT1IF = 0;
		IEC1bits.CCT1IE = 1u;
		CCP1CON1bits.ON = 1u;
		
		INTCON1bits.GIE = 1;	
		
    /*------------------------------------------------------------------------*/
    /* メインループ*/
    /*------------------------------------------------------------------------*/
        while(1)
        {

        }    
    return EXIT_SUCCESS;
}
void __attribute__((interrupt, no_auto_psv)) _CCT1Interrupt(void)
{
	int32_t BTime,ATime;
	BTime = TMR1;

	FIR( 1,                                 // 入力信号個数
		&fir_OutputLPF[TapCnt],             // 出力サンプル変数ポインタ
		&fir_FIRDummyData[TapCnt],			// 入力サンプル変数ポインタ
		&firFilterLPF );                     // フィルター構造体

	i4g_Time[1] = TMR1 -  BTime;

	BTime = TMR1;
	FIR( 1,                                 // 入力信号個数
		&fir_OutputBPF[TapCnt],             // 出力サンプル変数ポインタ
		&fir_FIRDummyData[TapCnt],			// 入力サンプル変数ポインタ
		&firFilterBPF );                    // フィルター構造体

	i4g_Time[2] = TMR1 -  BTime;
	
	BTime = TMR1;
	FIR( 1,                                 // 入力信号個数
		&fir_OutputHPF[TapCnt],             // 出力サンプル変数ポインタ
		&fir_FIRDummyData[TapCnt],			// 入力サンプル変数ポインタ
		&firFilterHPF );                    // フィルター構造体

	i4g_Time[3] = TMR1 -  BTime;

   TapCnt ++;
   if (TapCnt >= FIR_SPL_NUM)
   {
	   TapCnt = 0;
   }
	IFS1bits.CCT1IF = 0u;
}


#elif (PROJECT_TYPE == PROJECT_1_3_2_DSP_FFT)


/*----------------------------------------------------------------------------*/
/* 定数定義*/
/*----------------------------------------------------------------------------*/
#define FFT_POWEROF2    7u
#define FFT_POINT       ( 1 << FFT_POWEROF2)
/*----------------------------------------------------------------------------*/
/*変数定義*/
/*----------------------------------------------------------------------------*/
//回転因子

#if 0  //コンパイラ　0　OK /　1　NG
fractcomplex twiddleFactors[FFT_POINT] __attribute__ ((section (".xbss, bss, xmemory"), aligned (FFT_POINT))); //OK
//fractcomplex twiddleFactors[FFT_POINT] __attribute__ ( (space(xmemory),far)); //NG
//fractcomplex twiddleFactors[FFT_POINT] __attribute__ ( (space(xmemory),near)); //NG

// スペクトル(複素数) 
//fractcomplex frc_FftData[ FFT_POINT ] __attribute__ ( (space(xmemory),far));
//fractcomplex frc_FftData1[ FFT_POINT ] __attribute__ ( (space(ymemory),far));

volatile fractcomplex frc_FftData[ FFT_POINT ];
#elif 0 //コンパイラ　0　△? /　1　NG
fractcomplex twiddleFactors[FFT_POINT];
fractcomplex frc_FftData[ FFT_POINT ];

#elif 0 //コンパイラ　0 ×
fractcomplex twiddleFactors[FFT_POINT] __attribute__ ((section (".xbss, bss, xmemory"), aligned (FFT_POINT)));
fractcomplex frc_FftData[ FFT_POINT ] __attribute__ ((section (".ybss, bss, ymemory"), aligned (FFT_POINT)));

#elif 1 //コンパイラ　0 OK /b コンパイラ　1 OK 
fractcomplex twiddleFactors[FFT_POINT] __attribute__ ((section (".ybss, bss, ymemory"), aligned (FFT_POINT)));
fractcomplex frc_FftData[ FFT_POINT ] __attribute__ ((section (".xbss, bss, xmemory"), aligned (FFT_POINT)));

#elif 0 //コンパイラ　0 OK /b コンパイラ　1 OK 
fractcomplex twiddleFactors[FFT_POINT] __attribute__ ( (space(ymemory),far));
fractcomplex frc_FftData[ FFT_POINT ] __attribute__ ( (space(xmemory),far));

#elif 0 //コンパイラ　0 OK /b コンパイラ　1 OK 
fractcomplex twiddleFactors[FFT_POINT] __attribute__ ( (space(ymemory),near));
fractcomplex frc_FftData[ FFT_POINT ] __attribute__ ( (space(xmemory),near));

#endif
//回転因子ポインタ
fractcomplex *tFactor = (fractcomplex * )&twiddleFactors;

// 入力バッファ　128サンプル 1000Hz/16kHz fs
fractional	fr_InputData[ FFT_POINT ] = 
{
0	,
410903206	,
759250124	,
992008093	,
1073741823	,
992008093	,
759250124	,
410903206	,
0	,
-410903207	,
-759250125	,
-992008094	,
-1073741824	,
-992008094	,
-759250125	,
-410903207	,
-1	,
410903206	,
759250124	,
992008093	,
1073741823	,
992008093	,
759250124	,
410903206	,
0	,
-410903207	,
-759250125	,
-992008094	,
-1073741824	,
-992008094	,
-759250125	,
-410903207	,
-1	,
410903206	,
759250124	,
992008093	,
1073741823	,
992008093	,
759250124	,
410903206	,
0	,
-410903207	,
-759250125	,
-992008094	,
-1073741824	,
-992008094	,
-759250125	,
-410903207	,
-1	,
410903206	,
759250124	,
992008093	,
1073741823	,
992008093	,
759250124	,
410903206	,
0	,
-410903207	,
-759250125	,
-992008094	,
-1073741824	,
-992008094	,
-759250125	,
-410903207	,
-1	,
410903206	,
759250124	,
992008093	,
1073741823	,
992008093	,
759250124	,
410903206	,
0	,
-410903207	,
-759250125	,
-992008094	,
-1073741824	,
-992008094	,
-759250125	,
-410903207	,
-1	,
410903206	,
759250124	,
992008093	,
1073741823	,
992008093	,
759250124	,
410903206	,
-1	,
-410903207	,
-759250125	,
-992008094	,
-1073741824	,
-992008094	,
-759250125	,
-410903207	,
-1	,
410903206	,
759250124	,
992008093	,
1073741823	,
992008093	,
759250124	,
410903206	,
-1	,
-410903207	,
-759250125	,
-992008094	,
-1073741824	,
-992008094	,
-759250125	,
-410903207	,
-1	,
410903206	,
759250124	,
992008093	,
1073741823	,
992008093	,
759250124	,
410903206	,
-1	,
-410903207	,
-759250125	,
-992008094	,
-1073741824	,
-992008094	,
-759250125	,
-410903207

};



// パワースペクトル（実数）
fractional	fr_PowerSpec[ FFT_POINT/2 ];	
fractional	fr_PowerSpec1[ FFT_POINT/2 ];
// 窓関数用
fractional fr_Window[ FFT_POINT ];
fractional fr_AfterWindow[ FFT_POINT ];


void Calc_FFT(void);
static void Uart_Send_Blocking_TX_Data(uint8_t *u1pa_Data);

int32_t i4g_Time[16];

/*----------------------------------------------------------------------------*/
/**
* @fn          main(int argc, char** argv) 
* @brief       PROJECT_4_1_1_DSP_FIR
* @param[in]   argc argument count
* @param[in]   argv argument vector
* @retval      EXIT_SUCCESS 成功
* @retval      EXIT_FAILURE 失敗
* @detail      DSPによるFFT
* @note        
 */
/*----------------------------------------------------------------------------*/
int main(int argc, char** argv) 
{
    uint8_t TxTemp[64];
    /*------------------------------------------------------------------------*/
    /*　クロック初期化*/
    /*------------------------------------------------------------------------*/
        vdg_Clock_Set_Register();    /* クロック初期化 */
  /*-----------------------------------------------------------------------*/
    /* ピン設定*/
    /*-----------------------------------------------------------------------*/
		RPOR12bits.RP50R = 9u;		//UART1出力 RP50
		RPINR9bits.U1RXR = 52u;		//UART1入力 RP52
    /*-----------------------------------------------------------------------*/
    /* UART初期化*/
    /*-----------------------------------------------------------------------*/

		U1CON = 0x00000000u;
		U1STAT = 0x00000000u;
		U1BRG = (uint32_t) (100000000 / 115200);
		U1RXB = 0x00000000u;
		U1TXB = 0x00000000u;
		U1PA = 0x00000000u;
		U1PB = 0x00000000u;
		U1CHK = 0x00000000u;
		U1SCCON = 0x00000000u;
		U1UIR = 0x00000000u;

		U1CONbits.CLKMOD = 1u;
		U1CONbits.RXEN = 1u;	//受信許可
		U1CONbits.TXEN = 1u;	//送信許可
		U1CONbits.ON = 1u;
		
		T1CONbits.ON = 1;
		
		
		TMR1 = 0;
		
		i4g_Time[0] = TMR1;
	/*------------------------------------------------------------------------*/
	//回転因子の初期化
	/*------------------------------------------------------------------------*/
		tFactor = TwidFactorInit(
				FFT_POWEROF2,
				(fractcomplex *)twiddleFactors,
				0);
		i4g_Time[1] = TMR1;
	/*------------------------------------------------------------------------*/
	//窓関数の初期化
	/*------------------------------------------------------------------------*/
		HanningInit(FFT_POINT,fr_Window);
		i4g_Time[2] = TMR1;
	/*------------------------------------------------------------------------*/
	//FFTの実行
	/*------------------------------------------------------------------------*/
		Calc_FFT();
		Nop();
		
	/*------------------------------------------------------------------------*/
	//結果の出力
	/*------------------------------------------------------------------------*/
		for (int i = 0;i< FFT_POINT;i ++)
		{
			sprintf(TxTemp,"%d,%d,%d,%d\r\n",i,fr_InputData[i],fr_Window[i],fr_AfterWindow[i]);
			Uart_Send_Blocking_TX_Data(TxTemp);
		}

		for (int i = 0;i< FFT_POINT / 2 ;i ++)
		{
			sprintf(TxTemp,"%d,%d,%d,%d,%d\r\n",i,frc_FftData[i].real,frc_FftData[i].imag,fr_PowerSpec[i],fr_PowerSpec1[i]);
			Uart_Send_Blocking_TX_Data(TxTemp);
		}

		
		while (1)
		{
         
		}
    return EXIT_SUCCESS;
}
static void Uart_Send_Blocking_TX_Data(uint8_t *u1pa_Data)
{
	while (*u1pa_Data != NULL)
	{
		while(U1STATbits.TXBF == 1u){;}
		U1TXB = *u1pa_Data ++;
	}	
}


/*----------------------------------------------------------------------------*/
/**
* @fn          Calc_FFT(void)
* @brief       FFTの実行
* @param	   なし
* @detail      FFT実行
* @note        
*/
/*----------------------------------------------------------------------------*/
void Calc_FFT(void)
{
    int i;
    
	/*------------------------------------------------------------------------*/
    //①窓関数の適用（DSP関数）
	/*------------------------------------------------------------------------*/
		VectorWindow(FFT_POINT,
				(fractional *)fr_AfterWindow,
				(fractional *)fr_InputData,
				(fractional *)fr_Window);
		i4g_Time[3] = TMR1;
	/*------------------------------------------------------------------------*/
    //②入力データを複素数の実数に代入
	/*------------------------------------------------------------------------*/
		for (i = 0; i < FFT_POINT;i++)
		{
			frc_FftData[i].real = fr_AfterWindow[i];
			frc_FftData[i].imag = 0;
		}

		i4g_Time[4] = TMR1;
	/*------------------------------------------------------------------------*/
    //③FFTの実行（DSP関数）
	/*------------------------------------------------------------------------*/
		FFTComplexIP( 
				FFT_POWEROF2, 
				(fractcomplex *)frc_FftData, 
				(fractcomplex *)twiddleFactors,
				0);

		i4g_Time[5] = TMR1;
	
	/*------------------------------------------------------------------------*/
    // ④ビット逆順ソート（DSP関数）
	/*------------------------------------------------------------------------*/
		BitReverseComplex( FFT_POWEROF2, frc_FftData ); 

		i4g_Time[6] = TMR1;
	/*------------------------------------------------------------------------*/
    // ⑤複素数の絶対値自乗を取る（DSP関数）
	/*------------------------------------------------------------------------*/
		SquareMagnitudeCplx( FFT_POINT >>1 , frc_FftData, fr_PowerSpec ); 
		i4g_Time[7] = TMR1;
	/*------------------------------------------------------------------------*/
    //⑥正規化する
	/*------------------------------------------------------------------------*/
		for (i =0 ; i < FFT_POINT >> 1; i++)
		{
			fr_PowerSpec1[i] = fr_PowerSpec[i] << 5;
		}
		i4g_Time[8] = TMR1;

}

/*----------------------------------------------------------------------------*/
/*
* @fn        _T1Interrupt(void)
* @brief        T1割り込み
* @param
* @return
* @detail 
 */
/*----------------------------------------------------------------------------*/
//void __attribute__((interrupt, no_auto_psv)) _T1Interrupt(void)
//{
//        __builtin_btg(&LATE,0u);
//        
//        Total += KA - KB;
//        
//        KA = rand(),KB = rand();
//    /*------------------------------------------------------------------------*/
//    /*　割り込みフラグクリア*/
//    /*------------------------------------------------------------------------*/
//        IFS0bits.T1IF = 0u;
//}

#elif (PROJECT_TYPE ==  PROJECT_1_3_3_DSP_ACR)

fractional fl_ACR[128];
fractional fl_Data[128];
	
#define FREQ_A    2000.0
#define FREQ_B    5000.0
#define FREQ_C    12000.0
#define GAIN_A    0.0625
#define GAIN_B    0.03125
#define GAIN_C    0.0
#define SFREQ		48000

static void Uart_Send_Blocking_TX_Data(uint8_t *u1pa_Data);
/*----------------------------------------------------------------------------*/
/**
* @fn          main(int argc, char** argv) 
* @brief       PROJECT_4_1_1_DSP_FIR
* @param[in]   argc argument count
* @param[in]   argv argument vector
* @retval      EXIT_SUCCESS 成功
* @retval      EXIT_FAILURE 失敗
* @detail      DSPによるFFT
* @note        
 */
/*----------------------------------------------------------------------------*/
int main(int argc, char** argv) 
{
    uint8_t TxTemp[64];

	float f4_Time,f4_DummyA,f4_DummyB,f4_DummyC;
    /*------------------------------------------------------------------------*/
    /*　クロック初期化*/
    /*------------------------------------------------------------------------*/
        vdg_Clock_Set_Register();    /* クロック初期化 */
  /*-----------------------------------------------------------------------*/
    /* ピン設定*/
    /*-----------------------------------------------------------------------*/
		RPOR12bits.RP50R = 9u;		//UART1出力 RP50
		RPINR9bits.U1RXR = 52u;		//UART1入力 RP52
    /*-----------------------------------------------------------------------*/
    /* UART初期化*/
    /*-----------------------------------------------------------------------*/

		U1CON = 0x00000000u;
		U1STAT = 0x00000000u;
		U1BRG = (uint32_t) (100000000 / 115200);
		U1RXB = 0x00000000u;
		U1TXB = 0x00000000u;
		U1PA = 0x00000000u;
		U1PB = 0x00000000u;
		U1CHK = 0x00000000u;
		U1SCCON = 0x00000000u;
		U1UIR = 0x00000000u;

		U1CONbits.CLKMOD = 1u;
		U1CONbits.RXEN = 1u;	//受信許可
		U1CONbits.TXEN = 1u;	//送信許可
		U1CONbits.ON = 1u;

		INTCON4bits.OVATE = 0;
		
		for (int u2l_Loop = 0;u2l_Loop < 128 ;u2l_Loop ++)
        {
            f4_Time = (float)u2l_Loop/(SFREQ);
            f4_DummyA = sin(f4_Time * FREQ_A * 2 * PI) * GAIN_A  ;
            f4_DummyB = sin(f4_Time * FREQ_B * 2 * PI) * GAIN_B  ; 
			f4_DummyC = sin(f4_Time * FREQ_C * 2 * PI) * GAIN_C  ;
			fl_Data[u2l_Loop] = Q31(f4_DummyA + f4_DummyB + f4_DummyC);

        }
		
	/*------------------------------------------------------------------------*/
	/* 自己相関を求める */
	/*------------------------------------------------------------------------*/

		for (int i = 0;i< 32;i ++)
		{
			fl_ACR[i] = VectorDotProduct(64,fl_Data,fl_Data + i);
			//u4_SR[i] = SR;
			Nop();
		}
	/*------------------------------------------------------------------------*/
	/* 結果の出力 */
	/*------------------------------------------------------------------------*/
		for (int i = 0;i< 128;i ++)
		{
			sprintf(TxTemp,"%d,%d,%d\r\n",i,fl_Data[i],fl_ACR[i]);
			Uart_Send_Blocking_TX_Data(TxTemp);
		}


		
		while (1)
		{
         
		}
    return EXIT_SUCCESS;
}
static void Uart_Send_Blocking_TX_Data(uint8_t *u1pa_Data)
{
	while (*u1pa_Data != NULL)
	{
		while(U1STATbits.TXBF == 1u){;}
		U1TXB = *u1pa_Data ++;
	}	
}
#elif (PROJECT_TYPE == PROJECT_1_3_4_DSP_LMS )
#define TXBUF_SIZE 256
#define FIR_TAP 100
#define FSAMP   1000	//サンプリング周波数
#define FSIGA    12		//信号周波数A
#define FSIGB    25		//信号周波数B

fractional fl_InDelay[8];
fractional srcSamps;
fractional dstSamps;
fractional refSamps;
fractional sinData[1024];
float sinPointer;
float addPointer;
int Freq_side_Cnt;

int8_t TxBuf[TXBUF_SIZE];


fractional firDelay[FIR_TAP] __attribute__ ((space(ymemory), near));
fractional firCoeff[FIR_TAP] __attribute__ ((space(xmemory), near));
FIRStruct firFilter;
//static void Uart_Send_Blocking_TX_Data(uint8_t *u1pa_Data);
void Uart_Enque_TX_Data(uint8_t *u1pa_Data);
void Uart_Deque_TX_Data(void);
/*----------------------------------------------------------------------------*/
/**
* @fn          main(int argc, char** argv) 
* @brief       PROJECT_4_1_1_DSP_FIR
* @param[in]   argc argument count
* @param[in]   argv argument vector
* @retval      EXIT_SUCCESS 成功
* @retval      EXIT_FAILURE 失敗
* @detail      DSPによるFFT
* @note        
 */
/*----------------------------------------------------------------------------*/
int main(int argc, char** argv) 
{

//	float f4_Time,f4_DummyA,f4_DummyB,f4_DummyC;
    /*------------------------------------------------------------------------*/
    /*　クロック初期化*/
    /*------------------------------------------------------------------------*/
        vdg_Clock_Set_Register();    /* クロック初期化 */
  /*-----------------------------------------------------------------------*/
    /* ピン設定*/
    /*-----------------------------------------------------------------------*/
		RPOR12bits.RP50R = 9u;		//UART1出力 RP50
		RPINR9bits.U1RXR = 52u;		//UART1入力 RP52
    /*-----------------------------------------------------------------------*/
    /* UART初期化*/
    /*-----------------------------------------------------------------------*/

		U1CON = 0x00000000u;
		U1STAT = 0x00000000u;
		U1BRG = (uint32_t) (100000000 / 460800);
		U1RXB = 0x00000000u;
		U1TXB = 0x00000000u;
		U1PA = 0x00000000u;
		U1PB = 0x00000000u;
		U1CHK = 0x00000000u;
		U1SCCON = 0x00000000u;
		U1UIR = 0x00000000u;

		U1CONbits.CLKMOD = 1u;
		U1CONbits.RXEN = 1u;	//受信許可
		U1CONbits.TXEN = 1u;	//送信許可
		U1CONbits.ON = 1u;

		INTCON4bits.OVATE = 0;
		
		for (int u2l_Loop = 0;u2l_Loop < 1024 ;u2l_Loop ++)
        {
			sinData[u2l_Loop ] = Q31(sin((float)u2l_Loop /1024 * 2 * PI)) >> 2;
        }
	/*-----------------------------------------------------------------------*/
    /* DMA設定 */
    /*-----------------------------------------------------------------------*/
		DMACONbits.ON = 1U;        //DMA有効
		DMACONbits.PRIORITY = 0U;  //Fixed
		DMACONbits.SIDL = 0UL;

		DMABUF = 0x00000000u;

		DMALOW = 0x4000U;
		DMAHIGH = 0x7FFFU;

		DMA0CH = 0x00000000U;
		DMA0CHbits.SIZE = 0U;	//8Bit
		DMA0CHbits.TRMODE = 0U; //ワンショット
		DMA0CHbits.DAMODE = 0U; //
		DMA0CHbits.SAMODE = 1U; //Increment

		DMA0SEL = 0x10U;
		DMA0STAT = 0x00000000U;
		DMA0SRC = (unsigned int)& TxBuf; //転送元
		DMA0DST = (unsigned int)& U1TXB; //転送先
		DMA0CNT = 8u;                           //転送回数
		DMA0CLR = 0x00000000U;
		DMA0SET = 0x00000000U;
		DMA0INV = 0x00000000U;
		DMA0MSK = 0x00000000U;
		DMA0PAT = 0x00000000U;

//		DMA0CHbits.CHEN = 1U;  //DMA0チャネル有効化
//
//		DMA0CHbits.CHREQ = 1U; //DMA0ソフトウェア転送開始
		while(DMA0CHbits.CHREQ){;} //DMA0ソフトウェア転送完了確認
	
	/*------------------------------------------------------------------------*/
	/* Filter初期化 */
	/*------------------------------------------------------------------------*/
        FIRStructInit( &firFilter,          // フィルター構造体
                        FIR_TAP,            // フィルター係数タップ数
                        firCoeff,				// フィルタ係数ポインタ
                        0,					// フィルタ係数PSVページ
                        firDelay);           // ディレイバッファ
		FIRDelayInit( &firFilter );
		
		for(int i = 0; i < 100; i++) {firCoeff[i] = 0;}
	/*-----------------------------------------------------------------------*/
    /* SCCP1設定 */
    /*-----------------------------------------------------------------------*/
		CCP1CON1 = 0x00000000u;
			CCP1CON1bits.T32 = 1u;
		CCP1CON2 = 0x00000000u;
		CCP1CON3 = 0x00000000u;
			
		CCP1PR = 100000000 / FSAMP;
		
		IPC6bits.CCT1IP = 5;
		IFS1bits.CCT1IF = 0;
		IEC1bits.CCT1IE = 1u;
		CCP1CON1bits.ON = 1u;
		
		INTCON1bits.GIE = 1;	
		
		addPointer = 1024/(FSAMP / FSIGA);
	/*------------------------------------------------------------------------*/
	/* 結果の出力 */
	/*------------------------------------------------------------------------*/

		while (1)
		{
			if (Freq_side_Cnt < 3)
			{
				addPointer = 1024/(FSAMP / FSIGA);
			}
			else
			{
				addPointer = 1024/(FSAMP / FSIGB);
			}
		}
    return EXIT_SUCCESS;
}


void __attribute__((interrupt, no_auto_psv)) _CCT1Interrupt(void)
{
    /*------------------------------------------------------------------------*/    
    /* 乱数生成 */
    /*------------------------------------------------------------------------*/
		volatile int32_t RNDA = (LFSR << 14);
		volatile int32_t RNDB = (LFSR << 14);
    /*------------------------------------------------------------------------*/
    /* 信号の遅延 */
    /*------------------------------------------------------------------------*/
		fl_InDelay[5] = fl_InDelay[4];
		fl_InDelay[4] = fl_InDelay[3];
		fl_InDelay[3] = fl_InDelay[2];
		fl_InDelay[2] = fl_InDelay[1];
		fl_InDelay[1] = fl_InDelay[0];
		fl_InDelay[0] = sinData[(uint16_t)sinPointer] + RNDA - RNDB;
		srcSamps = fl_InDelay[5];
		refSamps = fl_InDelay[0];
    /*------------------------------------------------------------------------*/
    /* 次回参照アドレスの算出と信号周波数の可変 */
    /*------------------------------------------------------------------------*/
		sinPointer += addPointer;
		if (sinPointer >= 1024)
		{
			sinPointer = 0;
			Freq_side_Cnt++;
			if (Freq_side_Cnt > 5)
			{
				Freq_side_Cnt = 0;
			}
		}
    /*------------------------------------------------------------------------*/
    /* 適応フィルタの実行 */
    /*------------------------------------------------------------------------*/
		FIRLMS ( 1,&dstSamps , &srcSamps,&firFilter , & refSamps ,Q31(0.1));
    /*------------------------------------------------------------------------*/
    /* DMA送信 */
    /*------------------------------------------------------------------------*/
		DMA0CNT = sprintf(TxBuf,"%d,%d\r\n",refSamps,dstSamps) ;
		DMA0SRC = (unsigned int)& TxBuf; //転送元
		DMA0CHbits.CHEN = 1U;  //DMA0チャネル有効化
		DMA0CHbits.CHREQ = 1U; //DMA0ソフトウェア転送開始
		

	IFS1bits.CCT1IF = 0;
}
#elif (PROJECT_TYPE == PROJECT_2_2_1_IRPT_TIMER1 )

#define PIN_LED3 LATDbits.LATD9
#define PIN_LED4 LATDbits.LATD10

int main() 
{
    /*-----------------------------------------------------------------------*/
    /*初期化*/
    /*-----------------------------------------------------------------------*/
        vdg_Clock_Set_Register();
		//TRISBbits.TRISB10 = 1u;
		TRISDbits.TRISD9 = 0u;
		TRISDbits.TRISD10 = 0u;
		
		PR1 = 100000;
		T1CONbits.ON = 1;
		T1CONbits.TCKPS = 0;
		IFS1bits.T1IF = 0;
		IEC1bits.T1IE = 1;
		IPC6bits.T1IP = 3;
		
		INTCON1bits.GIE = 1;
    /*-----------------------------------------------------------------------*/
    /*メインルーチン*/
    /*-----------------------------------------------------------------------*/
        while(1)
        {
		}
}
void __attribute__((interrupt, no_auto_psv)) _T1Interrupt(void)
{
#if 1
	if ( LATDbits.LATD9 == 1)
	{
		LATDbits.LATD9 = 0;
	}
	else
	{
		LATDbits.LATD9 = 1;
	}
	IFS1bits.T1IF = 0u;
#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_T1Interrupt);
#endif
}
#elif (PROJECT_TYPE == PROJECT_2_4_1_AD_SINGLE)

#define ADC_RESULT_NUM  16
#define ADC_CH			20

uint32_t u4g_ADC1CH0Data[ADC_RESULT_NUM];
uint32_t u4g_ADC1Head[ADC_CH];


int main() 
{
    /*-----------------------------------------------------------------------*/
    /*初期化*/
    /*-----------------------------------------------------------------------*/
        vdg_Clock_Set_Register();
		
		ANSELAbits.ANSELA7 = 1;
		//vdg_ADC_Set_Register();
		
		AD1CH0CONbits.TRG1SRC = 1u;
		AD1CH0CONbits.PINSEL = 6u;
		
		AD1CON = 0x00000000U;
		AD1CONbits.ON = 1U;   
		while(AD1CONbits.ADRDY == 0U)
		{
			;
		}
		AD1SWTRGbits.CH0TRG = 1U;
    /*-----------------------------------------------------------------------*/
    /*メインルーチン*/
    /*-----------------------------------------------------------------------*/
        while(1)
        {
			if (AD1STATbits.CH0RDY == 1U)
			{
				u4g_ADC1CH0Data[u4g_ADC1Head[0]] = AD1CH0DATA;
				u4g_ADC1Head[0] ++;
				if (u4g_ADC1Head[0] >= ADC_RESULT_NUM)
				{
					u4g_ADC1Head[0] = 0U;
				}
				AD1SWTRGbits.CH0TRG = 1U;
			}
		}
}
#elif (PROJECT_TYPE == PROJECT_2_4_3_AD_INTEG)

#define ADC_RESULT_NUM  16
#define ADC_CH			20

uint32_t u4g_ADC1CH0Data[ADC_RESULT_NUM];
uint32_t u4g_ADC1Head[ADC_CH];


int main() 
{
    /*-----------------------------------------------------------------------*/
    /*初期化*/
    /*-----------------------------------------------------------------------*/
        vdg_Clock_Set_Register();
		//vdg_ADC_Set_Register();
		
		ANSELAbits.ANSELA7 = 1U;
		AD1CH0CONbits.TRG1SRC = 1u;
		AD1CH0CONbits.TRG2SRC = 2u;
		AD1CH0CONbits.PINSEL = 6u;
		
		AD1CH0CONbits.MODE = ADC_MODE_INTEGRATION;
		AD1CH0CNT = 100;
		
		AD1CON = 0x00000000U;
		AD1CONbits.ON = 1U;   
		while(AD1CONbits.ADRDY == 0U)
		{
			;
		}
		
		AD1SWTRGbits.CH0TRG = 1U;
    /*-----------------------------------------------------------------------*/
    /*メインルーチン*/
    /*-----------------------------------------------------------------------*/
        while(1)
        {
			if (AD1STATbits.CH0RDY == 1U)
			{
				u4g_ADC1CH0Data[u4g_ADC1Head[0]] = AD1CH0DATA;
				u4g_ADC1Head[0] ++;
				if (u4g_ADC1Head[0] >= ADC_RESULT_NUM)
				{
					u4g_ADC1Head[0] = 0U;
				}
				AD1SWTRGbits.CH0TRG = 1U;
			}
		}
}
#elif (PROJECT_TYPE == PROJECT_2_4_4_AD_OVSAMP)

#define ADC_RESULT_NUM  16
#define ADC_CH			20

uint32_t u4g_ADC1CH0Data[ADC_RESULT_NUM];
uint32_t u4g_ADC1Head[ADC_CH];


int main() 
{
    /*-----------------------------------------------------------------------*/
    /*初期化*/
    /*-----------------------------------------------------------------------*/
        vdg_Clock_Set_Register();
		//vdg_ADC_Set_Register();
		
		ANSELAbits.ANSELA7 = 1U;						//PortA7をアナログ入力に設定
		AD1CH0CONbits.TRG1SRC = 1u;						//AD変換開始はソフトウェアによる
		AD1CH0CONbits.TRG2SRC = 2u;						//次回以降のAD変換は即時再トリガー
		AD1CH0CONbits.PINSEL = 6u;						//AD1CH0+入力はAD1AN6
		
		AD1CH0CONbits.MODE = ADC_MODE_OVERSAMPLING;		//変換モードは「オーバサンプリング」
		AD1CH0CONbits.ACCNUM = 3u;						//256×オーバーサンプリング
		
		AD1CON = 0x00000000U;
		AD1CONbits.ON = 1U;   
		while(AD1CONbits.ADRDY == 0U)
		{
			;
		}
		
		AD1SWTRGbits.CH0TRG = 1U;
    /*-----------------------------------------------------------------------*/
    /*メインルーチン*/
    /*-----------------------------------------------------------------------*/
        while(1)
        {
			if (AD1STATbits.CH0RDY == 1U)
			{
				u4g_ADC1CH0Data[u4g_ADC1Head[0]] = AD1CH0DATA;
				u4g_ADC1Head[0] ++;
				if (u4g_ADC1Head[0] >= ADC_RESULT_NUM)
				{
					u4g_ADC1Head[0] = 0U;
				}
				AD1SWTRGbits.CH0TRG = 1U;
			}
		}
}
#elif (PROJECT_TYPE == PROJECT_2_5_1_CMPDAC_POTANTION ) 

int main() 
{
    /*-----------------------------------------------------------------------*/
    /*初期化*/
    /*-----------------------------------------------------------------------*/
        vdg_Clock_Set_Register();
    /*-----------------------------------------------------------------------*/
    /*ピン設定*/
    /*-----------------------------------------------------------------------*/
		ANSELAbits.ANSELA4 = 1u;			//PortA4をアナログ入力に設定
		RPOR8bits.RP36R = 32;	//CMP1
		
	/*-----------------------------------------------------------------------*/
	/* DACCTRL1レジスタ */
	/*-----------------------------------------------------------------------*/
		DACCTRL1 = 0x00000000u;
			DACCTRL1bits.ON = 0u;
			DACCTRL1bits.FCLKDIV = 0u;
			DACCTRL1bits.DNLADJ = 0u;
			DACCTRL1bits.SIDL = 0u;
			DACCTRL1bits.NEGINLADJ = 0x7Fu;
			DACCTRL1bits.POSINLADJ = 0x3Fu;
			DACCTRL1bits.RREN = 0u;

	/*-----------------------------------------------------------------------*/
	/* DACCTRL2レジスタ */
	/*-----------------------------------------------------------------------*/
		DACCTRL2 = 0x00000000u;
			DACCTRL2bits.TMODTIME = 0x01u;
			DACCTRL2bits.SSTIME = 0x8Au;

	/*-----------------------------------------------------------------------*/
	/* DAC1CONレジスタ */
	/*-----------------------------------------------------------------------*/
		DAC1CON = 0x00000000u;

			DAC1CONbits.HYSSEL = 0u;
			DAC1CONbits.HYSPOL = 0u;
			DAC1CONbits.INSEL = 1u;
			DAC1CONbits.CMPPOL = 0u;
			DAC1CONbits.CMPSTAT = 0u;
			DAC1CONbits.FLTREN = 0u;
			DAC1CONbits.DACOEN = 0u;
			DAC1CONbits.CBE = 0u;
			DAC1CONbits.UPDTMDIS = 0u;
			DAC1CONbits.EXTUPD = 0u;
			DAC1CONbits.IRQM = 0u;
			DAC1CONbits.DACEN = 0u;
			DAC1CONbits.TMCB = 0u;

	/*-----------------------------------------------------------------------*/
	/* DAC1DATレジスタ */
	/*-----------------------------------------------------------------------*/
		DAC1DAT = 0x00000000u;

			DAC1DATbits.DACLOW = 0u;
			DAC1DATbits.DACDAT = 0x7FFu;

	/*-----------------------------------------------------------------------*/
	/* DAC1SLPCONレジスタ */
	/*-----------------------------------------------------------------------*/
		DAC1SLPCON = 0x00000000u;

			DAC1SLPCONbits.SLPSTRT = 0u;
			DAC1SLPCONbits.SLPSTOPB = 0u;
			DAC1SLPCONbits.SLPSTOPA = 0u;
			DAC1SLPCONbits.HCFSEL = 0u;
			DAC1SLPCONbits.FFSEN = 0u;
			DAC1SLPCONbits.PSE = 0u;
			DAC1SLPCONbits.TWME = 0u;
			DAC1SLPCONbits.HME = 0u;
			DAC1SLPCONbits.SLOPEN = 0u;


	/*-----------------------------------------------------------------------*/
	/* SLP1CONレジスタ */
	/*-----------------------------------------------------------------------*/
		SLP1CON = 0x00000000u;
		
			SLP1CONbits.SLPSTRT = 0u;
			SLP1CONbits.SLPSTOPB = 0u;
			SLP1CONbits.SLPSTOPA = 0u;
			SLP1CONbits.HCFSEL = 0u;
			SLP1CONbits.FFSEN = 0u;
			SLP1CONbits.PSE = 0u;
			SLP1CONbits.TWME = 0u;
			SLP1CONbits.HME = 0u;
			SLP1CONbits.SLOPEN = 0u;

	/*-----------------------------------------------------------------------*/
	/* DAC1SLPDATレジスタ */
	/*-----------------------------------------------------------------------*/
		DAC1SLPDAT = 0x00000000u;


	/*-----------------------------------------------------------------------*/
	/* SLP1DATレジスタ */
	/*-----------------------------------------------------------------------*/
		SLP1DAT = 0x00000000u;

		DAC1CONbits.DACEN = 1u;
		DACCTRL1bits.ON = 1u;
    /*-----------------------------------------------------------------------*/
    /*メインルーチン*/
    /*-----------------------------------------------------------------------*/
        while(1)
        {

		}
}
#elif (PROJECT_TYPE ==  PROJECT_2_5_3_DAC_DMA)

int main() 
{
    /*-----------------------------------------------------------------------*/
    /*初期化*/
    /*-----------------------------------------------------------------------*/
        vdg_Clock_Set_Register();
    /*-----------------------------------------------------------------------*/
    /*ピン設定*/
    /*-----------------------------------------------------------------------*/
		ANSELAbits.ANSELA4 = 1u;			//PortA4をアナログ入力に設定

		
	/*-----------------------------------------------------------------------*/
	/* DACCTRL1レジスタ */
	/*-----------------------------------------------------------------------*/
		DACCTRL1 = 0x00000000u;
			DACCTRL1bits.ON = 0u;
			DACCTRL1bits.FCLKDIV = 0u;
			DACCTRL1bits.DNLADJ = 0u;
			DACCTRL1bits.SIDL = 0u;
			DACCTRL1bits.NEGINLADJ = 0x7Fu;
			DACCTRL1bits.POSINLADJ = 0x3Fu;
			DACCTRL1bits.RREN = 0u;

	/*-----------------------------------------------------------------------*/
	/* DACCTRL2レジスタ */
	/*-----------------------------------------------------------------------*/
		DACCTRL2 = 0x00000000u;
			DACCTRL2bits.TMODTIME = 0x01u;
			DACCTRL2bits.SSTIME = 0x8Au;

	/*-----------------------------------------------------------------------*/
	/* DAC1CONレジスタ */
	/*-----------------------------------------------------------------------*/
		DAC1CON = 0x00000000u;

			DAC1CONbits.HYSSEL = 0u;
			DAC1CONbits.HYSPOL = 0u;
			DAC1CONbits.INSEL = 1u;
			DAC1CONbits.CMPPOL = 0u;
			DAC1CONbits.CMPSTAT = 0u;
			DAC1CONbits.FLTREN = 0u;
			DAC1CONbits.DACOEN = 0u;
			DAC1CONbits.CBE = 0u;
			DAC1CONbits.UPDTMDIS = 0u;
			DAC1CONbits.EXTUPD = 0u;
			DAC1CONbits.IRQM = 0u;
			DAC1CONbits.DACEN = 0u;
			DAC1CONbits.TMCB = 0u;

	/*-----------------------------------------------------------------------*/
	/* DAC1DATレジスタ */
	/*-----------------------------------------------------------------------*/
		DAC1DAT = 0x00000000u;

			DAC1DATbits.DACLOW = 0u;
			DAC1DATbits.DACDAT = 0x7FFu;

	/*-----------------------------------------------------------------------*/
	/* DAC1SLPCONレジスタ */
	/*-----------------------------------------------------------------------*/
		DAC1SLPCON = 0x00000000u;

			DAC1SLPCONbits.SLPSTRT = 0u;
			DAC1SLPCONbits.SLPSTOPB = 0u;
			DAC1SLPCONbits.SLPSTOPA = 0u;
			DAC1SLPCONbits.HCFSEL = 0u;
			DAC1SLPCONbits.FFSEN = 0u;
			DAC1SLPCONbits.PSE = 0u;
			DAC1SLPCONbits.TWME = 0u;
			DAC1SLPCONbits.HME = 0u;
			DAC1SLPCONbits.SLOPEN = 0u;


	/*-----------------------------------------------------------------------*/
	/* SLP1CONレジスタ */
	/*-----------------------------------------------------------------------*/
		SLP1CON = 0x00000000u;
		
			SLP1CONbits.SLPSTRT = 0u;
			SLP1CONbits.SLPSTOPB = 0u;
			SLP1CONbits.SLPSTOPA = 0u;
			SLP1CONbits.HCFSEL = 0u;
			SLP1CONbits.FFSEN = 0u;
			SLP1CONbits.PSE = 0u;
			SLP1CONbits.TWME = 0u;
			SLP1CONbits.HME = 0u;
			SLP1CONbits.SLOPEN = 0u;

	/*-----------------------------------------------------------------------*/
	/* DAC1SLPDATレジスタ */
	/*-----------------------------------------------------------------------*/
		DAC1SLPDAT = 0x00000000u;


	/*-----------------------------------------------------------------------*/
	/* SLP1DATレジスタ */
	/*-----------------------------------------------------------------------*/
		SLP1DAT = 0x00000000u;

		DAC1CONbits.DACEN = 1u;
		DACCTRL1bits.ON = 1u;
    /*-----------------------------------------------------------------------*/
    /*メインルーチン*/
    /*-----------------------------------------------------------------------*/
        while(1)
        {

		}
}


#elif (PROJECT_TYPE == PROJECT_2_6_3_CBG)

volatile uint32_t adVal;

#define DACH 0xF00
#define DACL 0x80
int main() 
{
    /*-----------------------------------------------------------------------*/
    /*初期化*/
    /*-----------------------------------------------------------------------*/
        vdg_Clock_Set_Register();
		
//		ANSELAbits.ANSELA2 = 1U;						//PortA2をアナログに設定
		ANSELAbits.ANSELA4 = 1U;						//PortA4をアナログに設定
		ANSELAbits.ANSELA8 = 1U;						//PortA8をアナログに設定

		RPOR9bits.RP40R = 32;	//CMP1
		TRISCbits.TRISC3 = 0u;
		
	/*-----------------------------------------------------------------------*/
	/* DACCTRL1レジスタ */
	/*-----------------------------------------------------------------------*/
		DACCTRL1 = 0x00000000u;
			DACCTRL1bits.ON = 0u;
			DACCTRL1bits.FCLKDIV = 0u;
			DACCTRL1bits.DNLADJ = 0u;
			DACCTRL1bits.SIDL = 0u;
			DACCTRL1bits.NEGINLADJ = 0x7Fu;
			DACCTRL1bits.POSINLADJ = 0x3Fu;
			DACCTRL1bits.RREN = 0u;

	/*-----------------------------------------------------------------------*/
	/* DACCTRL2レジスタ */
	/*-----------------------------------------------------------------------*/
		DACCTRL2 = 0x00000000u;
			DACCTRL2bits.TMODTIME = 0x01u;
			DACCTRL2bits.SSTIME = 0x8Au;

	/*-----------------------------------------------------------------------*/
	/* DAC1CONレジスタ */
	/*-----------------------------------------------------------------------*/
		DAC1CON = 0x00000000u;

			DAC1CONbits.HYSSEL = 0u;
			DAC1CONbits.HYSPOL = 0u;
			DAC1CONbits.INSEL = 1u;  //CMP1B
			DAC1CONbits.CMPPOL = 0u;
			DAC1CONbits.CMPSTAT = 0u;
			DAC1CONbits.FLTREN = 1u;  //デジタルフィルタの有効か
			DAC1CONbits.DACOEN = 0u;
			DAC1CONbits.CBE = 0u;
			DAC1CONbits.UPDTMDIS = 0u;
			DAC1CONbits.EXTUPD = 0u;
			DAC1CONbits.IRQM = 0u;
			DAC1CONbits.DACEN = 0u;
			DAC1CONbits.TMCB = 0u;

	/*-----------------------------------------------------------------------*/
	/* DAC1DATレジスタ */
	/*-----------------------------------------------------------------------*/
		DAC1DAT = 0x00000000u;

			DAC1DATbits.DACLOW = 0x100u;
			DAC1DATbits.DACDAT = DACH;

	/*-----------------------------------------------------------------------*/
	/* DAC1SLPCONレジスタ */
	/*-----------------------------------------------------------------------*/
		DAC1SLPCON = 0x00000000u;

			DAC1SLPCONbits.SLPSTRT = 0u;
			DAC1SLPCONbits.SLPSTOPB = 0u;
			DAC1SLPCONbits.SLPSTOPA = 0u;
			DAC1SLPCONbits.HCFSEL = 0u;
			DAC1SLPCONbits.FFSEN = 0u;
			DAC1SLPCONbits.PSE = 0u;
			DAC1SLPCONbits.TWME = 0u;
			DAC1SLPCONbits.HME = 0u;
			DAC1SLPCONbits.SLOPEN = 0u;


	/*-----------------------------------------------------------------------*/
	/* SLP1CONレジスタ */
	/*-----------------------------------------------------------------------*/
		SLP1CON = 0x00000000u;
			SLP1CONbits.SLPSTRT = 0u;
			SLP1CONbits.SLPSTOPB = 0u;
			SLP1CONbits.SLPSTOPA = 0u;
			SLP1CONbits.HCFSEL = 0u;
			SLP1CONbits.FFSEN = 0u;
			SLP1CONbits.PSE = 0u;
			SLP1CONbits.TWME = 0u;
			SLP1CONbits.HME = 0u;
			SLP1CONbits.SLOPEN = 0u;

	/*-----------------------------------------------------------------------*/
	/* SLP1DATレジスタ */
	/*-----------------------------------------------------------------------*/
		SLP1DAT = 0x00000000u;

		DAC1CONbits.DACEN = 1u;
		DACCTRL1bits.ON = 1u;
		
		IBIASCONbits.I10EN3 = 1u;
    /*-----------------------------------------------------------------------*/
    /*メインルーチン*/
    /*-----------------------------------------------------------------------*/
        while(1)
        {
			if ((DAC1DATbits.DACDAT == DACH) && (DAC1CONbits.CMPSTAT == 1))
			{
				DAC1DATbits.DACDAT = DACL;
				IBIASCONbits.I10EN3 = 0u;
				LATCbits.LATC3 = 0;
			}
			else if  ((DAC1DATbits.DACDAT == DACL) && (DAC1CONbits.CMPSTAT == 0))
			{
				DAC1DATbits.DACDAT = DACH;
				IBIASCONbits.I10EN3 = 1u;
				LATCbits.LATC3 = 1;
			}
			
//			if (AD2STATbits.CH0RDY == 1U)
//			{
//				adVal = AD2CH0DATA;
//			
//				if ((adVal > 18000) && (IBIASCONbits.I10EN3 == 1))
//				{
//			//		IBIASCONbits.I10EN3 = 0u;
//				}
//				else if ((adVal < 2000) && (IBIASCONbits.I10EN3 == 0))
//				{
//			//		IBIASCONbits.I10EN3 = 1u;
//				}
//				AD2SWTRGbits.CH0TRG = 1U;
//			}
		}
		
}
		
		



#elif (PROJECT_TYPE	== PROJECT_2_8_1_QEI)

#define SPEED_MAX 100000
#define ENC_PPR   1600
int32_t s4g_PotData;
int32_t s4g_MV_Speed;
int32_t s4g_Direction;
int32_t s4g_Pos_AB;
volatile int32_t s4g_Pos_Z;

//const uint32_t s4g_Lat[4] = {0x00,0x08,0x208,0x200};
const uint32_t s4g_Lat[4] = {0x00,0x0400,0x440,0x040};

int main() 
{
    /*-----------------------------------------------------------------------*/
    /*初期化*/
    /*-----------------------------------------------------------------------*/
        vdg_Clock_Set_Register();
		
		
		s4g_MV_Speed = 10000;
	    s4g_Direction = 1;
    /*-----------------------------------------------------------------------*/
    /* ピン設定 */
    /*-----------------------------------------------------------------------*/
		ANSELAbits.ANSELA7 = 1;
		ANSELB = 0x0000;

		TRISBbits.TRISB10 = 0;  //A相出力
		TRISBbits.TRISB6 = 0;	//B相出力
		TRISCbits.TRISC8 = 0;   //Z相出力

		RPOR9bits.RP40R = 45;	//QEI Cpmp
		
		
		RPINR7bits.QEIA1R = 27;		//A相入力
		RPINR7bits.QEIB1R = 23;		//B相入力
		RPINR7bits.QEIINDX1R = 41;	//Z相入力
		
    /*-----------------------------------------------------------------------*/
    /* ADC設定 */
    /*-----------------------------------------------------------------------*/
		AD1CH0CONbits.TRG1SRC = 1u;
		AD1CH0CONbits.TRG2SRC = 2u;				//次回以降のAD変換は即時再トリガー
		AD1CH0CONbits.PINSEL = 6u;
		AD1CH0CONbits.MODE = ADC_MODE_INTEGRATION;		//積算モード
		AD1CH0CNT = 2048;
		
		AD1CON = 0x00000000U;
		AD1CONbits.ON = 1U;   
		while(AD1CONbits.ADRDY == 0U)
		{
			;
		}
		AD1SWTRGbits.CH0TRG = 1U;
    /*-----------------------------------------------------------------------*/
    /* SCCP1設定 */
    /*-----------------------------------------------------------------------*/
		CCP1CON1 = 0x00000000u;
			CCP1CON1bits.T32 = 1u;
		CCP1CON2 = 0x00000000u;
		CCP1CON3 = 0x00000000u;
			
		CCP1PR = s4g_MV_Speed;
		
		IPC6bits.CCT1IP = 4;
		IFS1bits.CCT1IF = 0;
		IEC1bits.CCT1IE = 1u;
		CCP1CON1bits.ON = 1u;
		
    /*-----------------------------------------------------------------------*/
    /* QEI設定 */
    /*-----------------------------------------------------------------------*/
		QEI1CON = 0x00000000u;
			QEI1CONbits.CCM = 0u;
			QEI1CONbits.GATEN = 0u;
			QEI1CONbits.CNTPOL = 0u;
			QEI1CONbits.INTDIV = 0u;
			QEI1CONbits.IMV = 0u;
			QEI1CONbits.PIMOD = 1u;
			QEI1CONbits.QEISIDL = 0u;
			QEI1CONbits.QEIEN = 0u;
			QEI1CONbits.SIDL = 0u;

		QEI1IOC = 0x00000000u;

			QEI1IOCbits.QEA = 0u;
			QEI1IOCbits.QEB = 0u;
			QEI1IOCbits.INDEX = 0u;
			QEI1IOCbits.HOME = 0u;
			QEI1IOCbits.QEAPOL = 0u;
			QEI1IOCbits.QEBPOL = 0u;
			QEI1IOCbits.IDXPOL = 0u;
			QEI1IOCbits.HOMPOL = 0u;
			QEI1IOCbits.SWPAB = 0u;
			QEI1IOCbits.OUTFNC = 3u;
			QEI1IOCbits.QFDIV = 0u;
			QEI1IOCbits.FLTREN = 0u;
			QEI1IOCbits.QCAPEN = 1u;
			QEI1IOCbits.HCAPEN = 0u;

		QEI1LEC = 50;
		QEI1GEC = 1500;
			
		QEI1CONbits.ON = 1u;
		INTCON1bits.GIE = 1;
			
    /*-----------------------------------------------------------------------*/
    /* メインルーチン */
    /*-----------------------------------------------------------------------*/
		while(1)
		{
			QEI1GEC = 1500;	//QEI1GECがなぜかゼロクリアされるので、常に書込み
			
			/*****　ポテンションの値取得 ******/
			if (AD1STATbits.CH0RDY == 1U)
			{
				s4g_PotData = AD1CH0DATA;
				s4g_MV_Speed = 100000000/(0.04857 * (float)s4g_PotData -482)  ;
				AD1SWTRGbits.CH0TRG = 1U;
			}

		}
		
}
void __attribute__((interrupt, no_auto_psv)) _CCT1Interrupt(void)
{
    /*-----------------------------------------------------------------------*/
    /* ABパルス出力 */
    /*-----------------------------------------------------------------------*/
		s4g_Pos_AB +=  s4g_Direction;
		s4g_Pos_AB &= 3u;
		LATB = s4g_Lat[s4g_Pos_AB];

    /*-----------------------------------------------------------------------*/
    /* Zパルス出力 */
    /*-----------------------------------------------------------------------*/
		s4g_Pos_Z +=  s4g_Direction;

		if ((s4g_Pos_Z >= ENC_PPR ))
		{
			s4g_Pos_Z = 0u;
		}
		else if ((s4g_Pos_Z <= -ENC_PPR ))
		{
			s4g_Pos_Z = 0u;
		}

		if ((s4g_Pos_Z <= 4u ) && (s4g_Pos_Z >= 0))
		{
			LATCbits.LATC8 = 1u;
		}
		else
		{
			LATCbits.LATC8 = 0u;
		}
    /*-----------------------------------------------------------------------*/
    /* 割り込み間隔指定 */
    /*-----------------------------------------------------------------------*/
		CCP1PR = s4g_MV_Speed;

		IFS1bits.CCT1IF = 0u;
}
#elif (PROJECT_TYPE == PROJECT_2_9_1_DMA_BASIC)

uint32_t u4g_SrcData[8];
uint32_t u4g_DstData[8];

#define DMA_MODE_ONE_SHOT		0 
#define DMA_MODE_ONE_SHOT_REP	1 
#define DMA_MODE_CONTINUOUS		2
#define DMA_MODE_AD				3
#define DMA_BASIC_MODE			DMA_MODE_AD

#if ( DMA_BASIC_MODE == DMA_MODE_ONE_SHOT)
int main() 
{
    /*-----------------------------------------------------------------------*/
    /*初期化*/
    /*-----------------------------------------------------------------------*/
        vdg_Clock_Set_Register();
		
		for (int i=0 ; i< 8 ;i++)
		{
			u4g_SrcData[i] =i * 10 + 20;
			u4g_DstData[i] = 0x00000000U;
		}
		
		
	/*-----------------------------------------------------------------------*/
	/* DMACONレジスタ */
	/*-----------------------------------------------------------------------*/
		DMACONbits.ON = 1u;
		DMACONbits.PRIORITY = 0U;		//Fixed
		DMACONbits.SIDL = 0UL;

	/*-----------------------------------------------------------------------*/
	/* DMABUFレジスタ */
	/*-----------------------------------------------------------------------*/
		DMABUF = 0x00000000u;

	/*-----------------------------------------------------------------------*/
	/* DMALOWレジスタ */
	/*-----------------------------------------------------------------------*/
		DMALOW = 0x4000U;

	/*-----------------------------------------------------------------------*/
	/* DMAHIGHレジスタ */
	/*-----------------------------------------------------------------------*/
		DMAHIGH = 0x7FFFU;

	/*-----------------------------------------------------------------------*/
	/* DMA0CHレジスタ */
	/*-----------------------------------------------------------------------*/
		DMA0CH = 0x00000000U;
			DMA0CHbits.CHEN = 0U;
			DMA0CHbits.HALFEN = 0U;
			DMA0CHbits.MATEN = 0U;
			DMA0CHbits.INTOEN = 0U;
			DMA0CHbits.CHREQ = 0U;
			DMA0CHbits.SIZE = 2U;	//32Bit
			DMA0CHbits.FLWCON =  0U;
			DMA0CHbits.TRMODE = 0U; //One-Shot
			DMA0CHbits.DAMODE = 1U;
			DMA0CHbits.SAMODE = 1U;
			DMA0CHbits.RETEN = 0U;
			DMA0CHbits.RELOADS = 0U;
			DMA0CHbits.RELOADD = 0U;
			DMA0CHbits.RELOADC = 0U;
			DMA0CHbits.PCHAEN =0U;
			DMA0CHbits.PPEN = 0U;


	/*-----------------------------------------------------------------------*/
	/* DMA0SELレジスタ */
	/*-----------------------------------------------------------------------*/
		DMA0SEL = 0x00000000U;
		DMA0STAT = 0x00000000U;
		DMA0SRC = (unsigned int)& u4g_SrcData;
		DMA0DST = (unsigned int)& u4g_DstData;
		DMA0CNT = 8u;
		DMA0CLR = 0x00000000U;
		DMA0SET = 0x00000000U;
		DMA0INV = 0x00000000U;
		DMA0MSK = 0x00000000U;
		DMA0PAT = 0x00000000U;
		
		DMA0CHbits.CHEN = 1U;
		DMA0CHbits.CHREQ = 1U;
		
		while(DMA0CHbits.CHREQ){;}
		
		while(1)
		{
			
		}
}
#elif ( DMA_BASIC_MODE == DMA_MODE_ONE_SHOT_REP)
int main() 
{
    /*-----------------------------------------------------------------------*/
    /*初期化*/
    /*-----------------------------------------------------------------------*/
        vdg_Clock_Set_Register();
		
		for (int i=0 ; i< 8 ;i++)
		{
			u4g_SrcData[i] =i * 10 + 20;
			u4g_DstData[i] = 0x00000000U;
		}
		
		
	/*-----------------------------------------------------------------------*/
	/* DMACONレジスタ */
	/*-----------------------------------------------------------------------*/
		DMACONbits.ON = 1u;
		DMACONbits.PRIORITY = 0U;		//Fixed
		DMACONbits.SIDL = 0UL;

	/*-----------------------------------------------------------------------*/
	/* DMABUFレジスタ */
	/*-----------------------------------------------------------------------*/
		DMABUF = 0x00000000u;

	/*-----------------------------------------------------------------------*/
	/* DMALOWレジスタ */
	/*-----------------------------------------------------------------------*/
		DMALOW = 0x4000U;

	/*-----------------------------------------------------------------------*/
	/* DMAHIGHレジスタ */
	/*-----------------------------------------------------------------------*/
		DMAHIGH = 0x7FFFU;

	/*-----------------------------------------------------------------------*/
	/* DMA0CHレジスタ */
	/*-----------------------------------------------------------------------*/
		DMA0CH = 0x00000000U;
			DMA0CHbits.CHEN = 0U;
			DMA0CHbits.HALFEN = 0U;
			DMA0CHbits.MATEN = 0U;
			DMA0CHbits.INTOEN = 0U;
			DMA0CHbits.CHREQ = 0U;
			DMA0CHbits.SIZE = 2U;	//32Bit
			DMA0CHbits.FLWCON =  0U;
			DMA0CHbits.TRMODE = 1U; //One-Shot Repeat
			DMA0CHbits.DAMODE = 1U;
			DMA0CHbits.SAMODE = 1U;
			DMA0CHbits.RETEN = 0U;
			DMA0CHbits.RELOADS = 1U;
			DMA0CHbits.RELOADD = 1U;
			DMA0CHbits.RELOADC = 0U;
			DMA0CHbits.PCHAEN =0U;
			DMA0CHbits.PPEN = 0U;


	/*-----------------------------------------------------------------------*/
	/* DMA0SELレジスタ */
	/*-----------------------------------------------------------------------*/
		DMA0SEL = 0x00000000U;
		DMA0STAT = 0x00000000U;
		DMA0SRC = (unsigned int)& u4g_SrcData;
		DMA0DST = (unsigned int)& u4g_DstData;
		DMA0CNT = 8u;
		DMA0CLR = 0x00000000U;
		DMA0SET = 0x00000000U;
		DMA0INV = 0x00000000U;
		DMA0MSK = 0x00000000U;
		DMA0PAT = 0x00000000U;
		
		DMA0CHbits.CHEN = 1U;
		
		while(1)
		{
			DMA0CHbits.CHREQ = 1U;
			while(DMA0CHbits.CHREQ){;}
		}
}	

#elif ( DMA_BASIC_MODE == DMA_MODE_CONTINUOUS)
int main() 
{
    /*-----------------------------------------------------------------------*/
    /*初期化*/
    /*-----------------------------------------------------------------------*/
        vdg_Clock_Set_Register();
		
		for (int i=0 ; i< 8 ;i++)
		{
			u4g_SrcData[i] =i * 10 + 20;
			u4g_DstData[i] = 0x00000000U;
		}
		
		
	/*-----------------------------------------------------------------------*/
	/* DMACONレジスタ */
	/*-----------------------------------------------------------------------*/
		DMACONbits.ON = 1u;
		DMACONbits.PRIORITY = 0U;		//Fixed
		DMACONbits.SIDL = 0UL;

	/*-----------------------------------------------------------------------*/
	/* DMABUFレジスタ */
	/*-----------------------------------------------------------------------*/
		DMABUF = 0x00000000u;

	/*-----------------------------------------------------------------------*/
	/* DMALOWレジスタ */
	/*-----------------------------------------------------------------------*/
		DMALOW = 0x4000U;

	/*-----------------------------------------------------------------------*/
	/* DMAHIGHレジスタ */
	/*-----------------------------------------------------------------------*/
		DMAHIGH = 0x7FFFU;

	/*-----------------------------------------------------------------------*/
	/* DMA0CHレジスタ */
	/*-----------------------------------------------------------------------*/
		DMA0CH = 0x00000000U;
		DMA0CHbits.CHEN = 0U;
		DMA0CHbits.HALFEN = 0U;
		DMA0CHbits.MATEN = 0U;
		DMA0CHbits.INTOEN = 0U;
		DMA0CHbits.CHREQ = 0U;
		DMA0CHbits.SIZE = 2U;	//32Bit
		DMA0CHbits.FLWCON =  0U;
		DMA0CHbits.TRMODE = 2U; //Continue
		DMA0CHbits.DAMODE = 1U;
		DMA0CHbits.SAMODE = 1U;
		DMA0CHbits.RETEN = 0U;
		DMA0CHbits.RELOADS = 0U;
		DMA0CHbits.RELOADD = 0U;
		DMA0CHbits.RELOADC = 0U;
		DMA0CHbits.PCHAEN = 0U;
		DMA0CHbits.PPEN = 0U;

	/*-----------------------------------------------------------------------*/
	/* DMA0SELレジスタ */
	/*-----------------------------------------------------------------------*/
		DMA0SEL = 0x00000000U;
		DMA0STAT = 0x00000000U;
		DMA0SRC = (unsigned int)& u4g_SrcData;
		DMA0DST = (unsigned int)& u4g_DstData;
		DMA0CNT = 8u;
		DMA0CLR = 0x00000000U;
		DMA0SET = 0x00000000U;
		DMA0INV = 0x00000000U;
		DMA0MSK = 0x00000000U;
		DMA0PAT = 0x00000000U;
		
		DMA0CHbits.CHEN = 1U;
		DMA0CHbits.CHREQ = 1U;
		
		while(DMA0CHbits.CHREQ){;}
		
		while(1)
		{
			
		}
}
#elif ( DMA_BASIC_MODE == DMA_MODE_AD )
uint32_t u4g_AdcData[256];
int main() 
{
    /*-----------------------------------------------------------------------*/
    /*初期化*/
    /*-----------------------------------------------------------------------*/
        vdg_Clock_Set_Register();
		
	/*-----------------------------------------------------------------------*/
    /*ADC設定*/
    /*-----------------------------------------------------------------------*/
		ANSELAbits.ANSELA11 = 1u;			//PortA11をアナログ入力に設定
		
		AD1CH0CONbits.TRG1SRC = 0x0Cu;	//SCCP1 Trig
		AD1CH0CONbits.PINSEL = 10u;		//AD1CH0+入力はAD1AN10
		AD1CH0CONbits.MODE = 0u;		//シングル変換モード
		
		AD1CON = 0x00000000U;
		AD1CONbits.ON = 1U;   
		while(AD1CONbits.ADRDY == 0U)
		{
			;
		}

		
	/*-----------------------------------------------------------------------*/
	/* DMACONレジスタ */
	/*-----------------------------------------------------------------------*/
		DMACONbits.ON = 1u;
		DMACONbits.PRIORITY = 0U;		//Fixed
		DMACONbits.SIDL = 0UL;

	/*-----------------------------------------------------------------------*/
	/* DMABUFレジスタ */
	/*-----------------------------------------------------------------------*/
		DMABUF = 0x00000000u;

	/*-----------------------------------------------------------------------*/
	/* DMALOWレジスタ */
	/*-----------------------------------------------------------------------*/
		DMALOW = 0x4000U;

	/*-----------------------------------------------------------------------*/
	/* DMAHIGHレジスタ */
	/*-----------------------------------------------------------------------*/
		DMAHIGH = 0x7FFFU;

	/*-----------------------------------------------------------------------*/
	/* DMA0CHレジスタ */
	/*-----------------------------------------------------------------------*/
		DMA0CH = 0x00000000U;
			DMA0CHbits.CHEN = 0U;
			DMA0CHbits.HALFEN = 0U;
			DMA0CHbits.MATEN = 0U;
			DMA0CHbits.INTOEN = 0U;
			DMA0CHbits.CHREQ = 0U;
			DMA0CHbits.SIZE = 2U;		//32Bit
			DMA0CHbits.FLWCON =  0U;
			DMA0CHbits.TRMODE = 0U;		//One-Shot
			DMA0CHbits.DAMODE = 1U;		//インクリメント
			DMA0CHbits.SAMODE = 0U;		//変更無
			DMA0CHbits.RETEN = 0U;
			DMA0CHbits.RELOADS = 0U;
			DMA0CHbits.RELOADD = 0U;
			DMA0CHbits.RELOADC = 0U;
			DMA0CHbits.PCHAEN = 0U;
			DMA0CHbits.PPEN = 0U;

	/*-----------------------------------------------------------------------*/
	/* DMA0SELレジスタ */
	/*-----------------------------------------------------------------------*/
		DMA0SEL = 0x2Bu;
		
		DMA0STAT = 0x00000000U;
		DMA0SRC = (unsigned int)& AD1CH0DATA;
		DMA0DST = (unsigned int)& u4g_AdcData;
		DMA0CNT = 256u;
		DMA0CLR = 0x00000000U;
		DMA0SET = 0x00000000U;
		DMA0INV = 0x00000000U;
		DMA0MSK = 0x00000000U;
		DMA0PAT = 0x00000000U;
		
		DMA0CHbits.CHEN = 1U;
		
		
	/*-----------------------------------------------------------------------*/
    /*　CCP1CON1初期化*/
    /*-----------------------------------------------------------------------*/
		CCP1CON1 = 0x00000000u;
//		CCP1CON1bits.MOD = 0u;		//4 タイマーモード (=0)では動作しない)
//		CCP1CON1bits.CCSEL = 0u;
//		CCP1CON1bits.T32 = 0u;
//		CCP1CON1bits.TMRPS = 0u;
//		CCP1CON1bits.CLKSEL = 0u;	//Standard Clock 100MHz
//		CCP1CON1bits.TMRSYNC = 0u;
//		CCP1CON1bits.SLPEN = 0u;
//		CCP1CON1bits.SIDL = 0u;
//		CCP1CON1bits.ON = 0u;
//		CCP1CON1bits.SYNC = 0u;
//		CCP1CON1bits.ALTSYNC = 0u;
//		CCP1CON1bits.ONESHOT = 0u;
//		CCP1CON1bits.TRIGEN = 0u;	//トリガ有効化
//		CCP1CON1bits.OPS = 0u;
//		CCP1CON1bits.RTRGEN = 0u;
//		CCP1CON1bits.OPSSRC = 0u;
		
	/*-----------------------------------------------------------------------*/
    /*　CCP1CON2初期化*/
    /*-----------------------------------------------------------------------*/
		CCP1CON2 = 0x00000000u;
//		CCP1CON2bits.ASDG = 0u;
//		CCP1CON2bits.SSDG = 0u;
//		CCP1CON2bits.ASDGM = 0u;
//		CCP1CON2bits.PWMRSEN = 0u;
//		CCP1CON2bits.ICS = 0u;
//		CCP1CON2bits.AUXOUT = 0u;
//		CCP1CON2bits.ICGSM = 0u;
//		CCP1CON2bits.OCAEN = 0u;
//		CCP1CON2bits.OENSYNC = 0u;
		
	/*-----------------------------------------------------------------------*/
    /*　CCP1CON3初期化*/
    /*-----------------------------------------------------------------------*/
		CCP1CON3 = 0x00000000u;
//		CCP1CON3bits.PSSACE = 0u;
//		CCP1CON3bits.POLACE = 0u;
//		CCP1CON3bits.OSCNT = 0u;
//		CCP1CON3bits.OETRIG = 0u;

		CCP1STAT = 0x00000000u;
		CCP1TMR = 0x00000000u;
		CCP1PR = 2U;			 //100MHz / 5MHz -1 = 19
		CCP1RA = 0x00000000u;
		CCP1RB = 0x00000000u;   //1以上を設定
		CCP1BUF = 0x00000000u;
		
		
		CCP1CON1bits.ON = 1u;
		while(1)
		{

		}
}	

#endif
#elif (PROJECT_TYPE == PROJECT_2_9_2_DMA_PINGPONG)
uint32_t u4g_AdcDataA[256];
uint32_t u4g_AdcDataB[256];
int main() 
{
    /*-----------------------------------------------------------------------*/
    /*初期化*/
    /*-----------------------------------------------------------------------*/
        vdg_Clock_Set_Register();
		
	/*-----------------------------------------------------------------------*/
    /*ADC設定*/
    /*-----------------------------------------------------------------------*/
		ANSELAbits.ANSELA11 = 1u;			//PortA11をアナログ入力に設定
		
		AD1CH0CONbits.TRG1SRC = 0x0Cu;	//SCCP1 Trig
		AD1CH0CONbits.PINSEL = 10u;		//AD1CH0+入力はAD1AN10
		AD1CH0CONbits.MODE = 0u;		//シングル変換モード
		
		AD1CON = 0x00000000U;
		AD1CONbits.ON = 1U;   
		while(AD1CONbits.ADRDY == 0U)
		{
			;
		}

		
	/*-----------------------------------------------------------------------*/
	/* DMACONレジスタ */
	/*-----------------------------------------------------------------------*/
		DMACONbits.ON = 1u;
		DMACONbits.PRIORITY = 0U;		//Fixed
		DMACONbits.SIDL = 0UL;

	/*-----------------------------------------------------------------------*/
	/* DMABUFレジスタ */
	/*-----------------------------------------------------------------------*/
		DMABUF = 0x00000000u;

	/*-----------------------------------------------------------------------*/
	/* DMALOWレジスタ */
	/*-----------------------------------------------------------------------*/
		DMALOW = 0x4000U;

	/*-----------------------------------------------------------------------*/
	/* DMAHIGHレジスタ */
	/*-----------------------------------------------------------------------*/
		DMAHIGH = 0x7FFFU;

	/*-----------------------------------------------------------------------*/
	/* DMA0CHレジスタ */
	/*-----------------------------------------------------------------------*/
		DMA0CH = 0x00000000U;
			DMA0CHbits.CHEN = 0U;
			DMA0CHbits.HALFEN = 0U;
			DMA0CHbits.MATEN = 0U;
			DMA0CHbits.INTOEN = 1U;		//
			DMA0CHbits.CHREQ = 0U;
			DMA0CHbits.SIZE = 2U;		//32Bit
			DMA0CHbits.FLWCON =  0U;
			DMA0CHbits.TRMODE = 1U;		//One-Shot
			DMA0CHbits.DAMODE = 1U;		//インクリメント
			DMA0CHbits.SAMODE = 0U;		//変更無
			DMA0CHbits.RETEN = 0U;
			DMA0CHbits.RELOADS = 1U;
			DMA0CHbits.RELOADD = 1U;
			DMA0CHbits.RELOADC = 0U;
			DMA0CHbits.PCHAEN = 1U;
			DMA0CHbits.PPEN = 1U;		//Ping-Pong 有効化

	/*-----------------------------------------------------------------------*/
	/* DMA0SELレジスタ */
	/*-----------------------------------------------------------------------*/
		DMA0SEL = 0x2Bu;
		
		DMA0STAT = 0x00000000U;
		DMA0SRC = (unsigned int)& AD1CH0DATA;
		DMA0DST = (unsigned int)& u4g_AdcDataA;
		DMA0CNT = 256u;
		DMA0CLR = 0x00000000U;
		DMA0SET = 0x00000000U;
		DMA0INV = 0x00000000U;
		DMA0MSK = 0x00000000U;
		DMA0PAT = 0x00000000U;
		
		DMA0CHbits.CHEN = 1U;
		
	/*-----------------------------------------------------------------------*/
	/* DMA1CHレジスタ */
	/*-----------------------------------------------------------------------*/
		DMA1CH = 0x00000000U;
		DMA1CHbits.CHEN = 0U;
		DMA1CHbits.HALFEN = 0U;
		DMA1CHbits.MATEN = 0U;
		DMA1CHbits.INTOEN = 1U;
		DMA1CHbits.CHREQ = 0U;
		DMA1CHbits.SIZE = 2U;		//32Bit
		DMA1CHbits.FLWCON =  0U;
		DMA1CHbits.TRMODE = 1;		//One-Shot
		DMA1CHbits.DAMODE = 1U;		//インクリメント
		DMA1CHbits.SAMODE = 0U;		//変更無
		DMA1CHbits.RETEN = 0U;
		DMA1CHbits.RELOADS = 1U;
		DMA1CHbits.RELOADD = 1U;
		DMA1CHbits.RELOADC = 0U;
		DMA1CHbits.PCHAEN = 0U;
		DMA1CHbits.PPEN = 1U;		//Ping-Pong 有効化

	/*-----------------------------------------------------------------------*/
	/* DMA1SELレジスタ */
	/*-----------------------------------------------------------------------*/
		DMA1SEL = 0x2Bu;
		
		DMA1STAT = 0x00000000U;
		DMA1SRC = (unsigned int)& AD1CH0DATA;
		DMA1DST = (unsigned int)& u4g_AdcDataB;
		DMA1CNT = 256u;
		DMA1CLR = 0x00000000U;
		DMA1SET = 0x00000000U;
		DMA1INV = 0x00000000U;
		DMA1MSK = 0x00000000U;
		DMA1PAT = 0x00000000U;
		
		DMA1CHbits.CHEN = 1U;
	/*-----------------------------------------------------------------------*/
    /*　CCP1CON1初期化*/
    /*-----------------------------------------------------------------------*/
		CCP1CON1 = 0x00000000u;
//		CCP1CON1bits.MOD = 0u;		//4 タイマーモード (=0)では動作しない)
//		CCP1CON1bits.CCSEL = 0u;
//		CCP1CON1bits.T32 = 0u;
//		CCP1CON1bits.TMRPS = 0u;
//		CCP1CON1bits.CLKSEL = 0u;	//Standard Clock 100MHz
//		CCP1CON1bits.TMRSYNC = 0u;
//		CCP1CON1bits.SLPEN = 0u;
//		CCP1CON1bits.SIDL = 0u;
//		CCP1CON1bits.ON = 0u;
//		CCP1CON1bits.SYNC = 0u;
//		CCP1CON1bits.ALTSYNC = 0u;
//		CCP1CON1bits.ONESHOT = 0u;
//		CCP1CON1bits.TRIGEN = 0u;	//トリガ有効化
//		CCP1CON1bits.OPS = 0u;
//		CCP1CON1bits.RTRGEN = 0u;
//		CCP1CON1bits.OPSSRC = 0u;
		
	/*-----------------------------------------------------------------------*/
    /*　CCP1CON2初期化*/
    /*-----------------------------------------------------------------------*/
		CCP1CON2 = 0x00000000u;
//		CCP1CON2bits.ASDG = 0u;
//		CCP1CON2bits.SSDG = 0u;
//		CCP1CON2bits.ASDGM = 0u;
//		CCP1CON2bits.PWMRSEN = 0u;
//		CCP1CON2bits.ICS = 0u;
//		CCP1CON2bits.AUXOUT = 0u;
//		CCP1CON2bits.ICGSM = 0u;
//		CCP1CON2bits.OCAEN = 0u;
//		CCP1CON2bits.OENSYNC = 0u;
		
	/*-----------------------------------------------------------------------*/
    /*　CCP1CON3初期化*/
    /*-----------------------------------------------------------------------*/
		CCP1CON3 = 0x00000000u;
//		CCP1CON3bits.PSSACE = 0u;
//		CCP1CON3bits.POLACE = 0u;
//		CCP1CON3bits.OSCNT = 0u;
//		CCP1CON3bits.OETRIG = 0u;

		CCP1STAT = 0x00000000u;
		CCP1TMR = 0x00000000u;
		CCP1PR = 2U;			 //100MHz / 5MHz -1 = 19
		CCP1RA = 0x00000000u;
		CCP1RB = 0x00000000u;   //1以上を設定
		CCP1BUF = 0x00000000u;
		
		
		CCP1CON1bits.ON = 1u;
		while(1)
		{

		}
}	

#elif (PROJECT_TYPE == PROJECT_3_1_1_UART_PC )

#define TXBUF_SIZE 32

int8_t TxTemp[16];
int8_t TxBuf[TXBUF_SIZE];
int8_t TxHead;
int8_t TxTail;
int32_t CntData;
int main() 
{
    /*-----------------------------------------------------------------------*/
    /* 初期化*/
    /*-----------------------------------------------------------------------*/
        vdg_Clock_Set_Register();
    /*-----------------------------------------------------------------------*/
    /* ピン設定*/
    /*-----------------------------------------------------------------------*/
		RPOR12bits.RP50R = 9u;		//UART1出力 RP50
		RPINR9bits.U1RXR = 52u;		//UART1入力 RP52
    /*-----------------------------------------------------------------------*/
    /* UART初期化*/
    /*-----------------------------------------------------------------------*/
		
	/*-----------------------------------------------------------------------*/
	/* U1CONレジスタ */
	/*-----------------------------------------------------------------------*/
		U1CON = 0x00000000u;

	/*-----------------------------------------------------------------------*/
	/* U1STATレジスタ */
	/*-----------------------------------------------------------------------*/
		U1STAT = 0x00000000u;
	/*-----------------------------------------------------------------------*/
	/* U1BRGレジスタ */
	/*-----------------------------------------------------------------------*/
		U1BRG = (uint32_t) (100000000 / 115200);
	/*-----------------------------------------------------------------------*/
	/* U1RXBレジスタ */
	/*-----------------------------------------------------------------------*/
		U1RXB = 0x00000000u;
	/*-----------------------------------------------------------------------*/
	/* U1TXBレジスタ */
	/*-----------------------------------------------------------------------*/
		U1TXB = 0x00000000u;
	/*-----------------------------------------------------------------------*/
	/* U1PAレジスタ */
	/*-----------------------------------------------------------------------*/
		U1PA = 0x00000000u;
	/*-----------------------------------------------------------------------*/
	/* U1PBレジスタ */
	/*-----------------------------------------------------------------------*/
		U1PB = 0x00000000u;
	/*-----------------------------------------------------------------------*/
	/* U1CHKレジスタ */
	/*-----------------------------------------------------------------------*/
		U1CHK = 0x00000000u;
	/*-----------------------------------------------------------------------*/
	/* U1SCCONレジスタ */
	/*-----------------------------------------------------------------------*/
		U1SCCON = 0x00000000u;
	/*-----------------------------------------------------------------------*/
	/* U1UIRレジスタ */
	/*-----------------------------------------------------------------------*/
		U1UIR = 0x00000000u;

		U1CONbits.CLKMOD = 1u;
		U1CONbits.RXEN = 1u;	//受信許可
		U1CONbits.TXEN = 1u;	//送信許可
		U1CONbits.ON = 1u;

	/*-----------------------------------------------------------------------*/
	/* U1UIRレジスタ */
	/*-----------------------------------------------------------------------*/
		PR1 = 1000000;
		T1CONbits.ON = 1;
		T1CONbits.TCKPS = 0;
		IFS1bits.T1IF = 0;
		IEC1bits.T1IE = 0;
		IPC6bits.T1IP = 3;
		
		INTCON1bits.GIE = 0;
	/*-----------------------------------------------------------------------*/
    /* メインルーチン*/
    /*-----------------------------------------------------------------------*/
		while(1)
		{
			CntData ++;
			if (IFS1bits.T1IF == 1)
			{
				sprintf(TxTemp,"CNT =%d\r\n",CntData);
				Uart_Enque_TX_Data(TxTemp);
				IFS1bits.T1IF = 0;
			}
			
			
			Uart_Deque_TX_Data();
		}
}	





void Uart_Enque_TX_Data(uint8_t *u1pa_Data)
{
	while (*u1pa_Data != NULL)
	{
		TxBuf[TxHead++] = *u1pa_Data ++;
		if (TxHead >= TXBUF_SIZE)
		{
			TxHead = 0;
		}
	}	
}

void Uart_Deque_TX_Data(void)
{
	while (TxHead != TxTail)
	{
		if (U1STATbits.TXBF == 0u)
		{
			U1TXB = TxBuf[TxTail++];
			if (TxTail >= TXBUF_SIZE)
			{
				TxTail = 0;
			}
		}
		else
		{
			break;
		}
	}	
}

#elif ( PROJECT_TYPE == PROJECT_3_1_8_SENT)

#define NUM_NIBBLES 6

#define FCY			100000000					//100MHz
#define PRS			4							//1x1
#define FCLK		(FCY / PRS)
#define TTICK		( 0.000003 )				//3μsec
#define TICK_TIME	(FCLK *  TTICK ) - 1
#define TFRAME		( 0.001 )					//1msec
#define FRAME_TIME	(TFRAME / TICK_TIME)

uint8_t TXData[8];
uint8_t RXData[8];
uint32_t loop;
uint32_t SyncCnt = ( 8 * FCLK * TTICK );

uint8_t Calc_CRC(uint8_t *txdata)
{
	
	uint8_t crc_table[] = {0,13,7,10,14,3,9,4,1,12,6,11,15,2,8,5};
	uint8_t Checksum = 5;
	
// For each data nibble, bit-wise XOR with lookup value from table
	for(int i = 0; i<NUM_NIBBLES; i++)
	{
		Checksum = (*txdata++) ^ crc_table[Checksum];
	}
// Bit-wise XOR with additional 0 value
	Checksum = 0 ^ crc_table[Checksum];
	
	return ( Checksum);
}

int main() 
{
	
    /*-----------------------------------------------------------------------*/
    /*初期化*/
    /*-----------------------------------------------------------------------*/
        vdg_Clock_Set_Register();
		
//		CNPUCbits.CNPUC3 = 1u;
//		RPOR8bits.RP36R = 57u;
//		RPINR14bits.SENT2R = 36u;
		
//		CNPUBbits.CNPUB1 = 1u;
//		RPOR4bits.RP18R = 57u;
//		RPINR14bits.SENT2R = 18u;
		
//		CNPUCbits.CNPUC8 = 1u;
//		RPOR10bits.RP41R = 57u;
//		RPINR14bits.SENT2R = 41u;
		
		ANSELBbits.ANSELB3 = 0u;
	//	CNPUBbits.CNPUB3 = 1u;
		RPOR4bits.RP20R = 57u;
		RPINR14bits.SENT2R = 20u;
		
		for (int i = 0u ; i <6u ; i ++)
		{
			TXData[i] = 3u + i ; //Dummy
		}
		
		
    /*-----------------------------------------------------------------------*/
	/* SENT1CON1レジスタ */
	/*-----------------------------------------------------------------------*/
		SENT1CON1 = 0x00000000u;
			SENT1CON1bits.NIBCNT = NUM_NIBBLES;		//6Nible
			SENT1CON1bits.PS = 1u;			//Clock = TCY
			SENT1CON1bits.SPCEN = 0u;
			SENT1CON1bits.PPP = 1u;			//ポーズ有効
			SENT1CON1bits.CRCEN = 1u;		//CRC有効
			SENT1CON1bits.TXPOL = 0u;
			SENT1CON1bits.TXM = 1u;			//同期送信
			SENT1CON1bits.RCVEN = 0u;		//送信
			SENT1CON1bits.SNTSIDL = 0u;
			SENT1CON1bits.SNTEN = 0u;
			SENT1CON1bits.SIDL = 0u;
			SENT1CON1bits.ON = 0u;
	/*-----------------------------------------------------------------------*/
	/* SENT1CON2レジスタ */
	/*-----------------------------------------------------------------------*/
		SENT1CON2 = TICK_TIME;

	/*-----------------------------------------------------------------------*/
	/* SENT1CON3レジスタ */
	/*-----------------------------------------------------------------------*/
		SENT1CON3 = FRAME_TIME;
			
		
		SENT1DATbits.DATA1 = TXData[0];
		SENT1DATbits.DATA2 = TXData[1];
		SENT1DATbits.DATA3 = TXData[2];
		SENT1DATbits.DATA4 = TXData[3];
		SENT1DATbits.DATA5 = TXData[4];
		SENT1DATbits.DATA6 = TXData[5];
	//	SENT1DATbits.CRC = Calc_CRC(TXData);
		
    /*-----------------------------------------------------------------------*/
	/* SENT2CON1レジスタ */
	/*-----------------------------------------------------------------------*/
		SENT2CON1 = 0x00000000u;
			SENT2CON1bits.NIBCNT = NUM_NIBBLES;		//6Nible
			SENT2CON1bits.PS = 1u;			//Clock = TCY
			SENT2CON1bits.SPCEN = 0u;
			SENT2CON1bits.PPP = 1u;			//ポーズ有効
			SENT2CON1bits.CRCEN = 1u;		//CRC有効
			SENT2CON1bits.TXPOL = 0u;
			SENT2CON1bits.TXM = 0u;			//同期送信
			SENT2CON1bits.RCVEN = 1u;		//受信
			SENT2CON1bits.SNTSIDL = 0u;
			SENT2CON1bits.SNTEN = 0u;
			SENT2CON1bits.SIDL = 0u;
			SENT2CON1bits.ON = 0u;
	/*-----------------------------------------------------------------------*/
	/* SENT2CON2レジスタ */
	/*-----------------------------------------------------------------------*/
		SENT2CON2 =  (uint16_t)(SyncCnt * 1.2);

	/*-----------------------------------------------------------------------*/
	/* SENT2CON3レジスタ */
	/*-----------------------------------------------------------------------*/
		SENT2CON3 = (uint16_t)(SyncCnt * 0.8);
		
		
			SENT1CON1bits.ON = 1u;
			SENT2CON1bits.ON = 1u;
			
			
			SENT1STATbits.SYNCTXEN = 1u;
	
			
		while(1)
		{
			loop = 100000;
			while ( loop --){;}
			;
			SENT1STATbits.SYNCTXEN = 1u;
			
			while (SENT1STATbits.SYNCTXEN == 1){;}
		}
		
}
#elif ( PROJECT_TYPE == PROJECT_3_2_1_PWM_COMB)

int main() 
{
    /*-----------------------------------------------------------------------*/
    /*初期化*/
    /*-----------------------------------------------------------------------*/
        vdg_Clock_Set_Register();
		
	//	RPOR9bits.RP37R = 6u;		//PWM3L
	//	RPOR8bits.RP36R = 5u;		//PWM3H
		
		RPOR9bits.RP38R = 8u;		//PWM4L
		RPOR9bits.RP39R = 7u;		//PWM4H
		
	/*-----------------------------------------------------------------------*/
    /* PWM設定*/
    /*-----------------------------------------------------------------------*/
		PCLKCONbits.MCLKSEL = 0u;
		PCLKCONbits.DIVSEL = 0u;
		
		MPER = 1000;
		MDC = MPER / 2;
		
		PG3PHASE = 0u;
		
		PG3CONbits.MODSEL = 1u; //可変フェーズ
		PG3CONbits.CLKSEL = 1u; //MCLKSEL
		PG3CONbits.TRGCNT = 0u;
		PG3CONbits.SOCS = 0u;
		PG3CONbits.TRGMOD = 0u;
		PG3CONbits.UPDMOD = 0u;
		PG3CONbits.MSTEN = 0u;
		PG3CONbits.MPHSEL = 0u;
		PG3CONbits.MPERSEL = 1u; //MPER
		PG3CONbits.MDCSEL = 1u; //MDC

		PG3IOCONbits.DBDAT = 0u;
		PG3IOCONbits.FFDAT = 0u;
		PG3IOCONbits.CLDAT = 0u;
		PG3IOCONbits.FLTDAT = 0u;
		PG3IOCONbits.OSYNC = 0u;
		PG3IOCONbits.OVRDAT = 0u;
		PG3IOCONbits.OVRENL = 0u;
		PG3IOCONbits.OVRENH = 0u;
		PG3IOCONbits.SWAP = 0u;
		PG3IOCONbits.CLMOD = 0u;
		PG3IOCONbits.POLL = 0u;
		PG3IOCONbits.POLH = 0u;
		PG3IOCONbits.PENL = 1u;	//PWMxL Output
		PG3IOCONbits.PENH = 1u;	//PWMxH Output
		PG3IOCONbits.PMOD = 0u;
		PG3IOCONbits.DTCMPSEL = 0u;
		PG3IOCONbits.PPSEN = 0u;
		PG3IOCONbits.CAPSRC = 0u;
			
			
		PG4PHASE = 0;
		PG4CONbits.MODSEL = 1u; //可変フェーズ
		PG4CONbits.CLKSEL = 1u; //MCLKSEL
		PG4CONbits.TRGCNT = 0u;
		PG4CONbits.SOCS = 0u;
		PG4CONbits.TRGMOD = 0u;
		PG4CONbits.UPDMOD = 0u;
		PG4CONbits.MSTEN = 0u;
		PG4CONbits.MPHSEL = 0u;
		PG4CONbits.MPERSEL = 1u; //MPER
		PG4CONbits.MDCSEL = 1u; //MDC

		PG4IOCONbits.DBDAT = 0u;
		PG4IOCONbits.FFDAT = 0u;
		PG4IOCONbits.CLDAT = 0u;
		PG4IOCONbits.FLTDAT = 0u;
		PG4IOCONbits.OSYNC = 0u;
		PG4IOCONbits.OVRDAT = 0u;
		PG4IOCONbits.OVRENL = 0u;
		PG4IOCONbits.OVRENH = 0u;
		PG4IOCONbits.SWAP = 0u;
		PG4IOCONbits.CLMOD = 0u;
		PG4IOCONbits.POLL = 0u;
		PG4IOCONbits.POLH = 0u;
		PG4IOCONbits.PENL = 1u;	//PWMxL Output
		PG4IOCONbits.PENH = 1u;	//PWMxH Output
		PG4IOCONbits.PMOD = 0u;
		PG4IOCONbits.DTCMPSEL = 0u;
		PG4IOCONbits.PPSEN = 1u;//PPS
		PG4IOCONbits.CAPSRC = 0u;
			
		PG3CONbits.ON = 1u;
		PG4CONbits.ON = 1u;
	//	PG3CON = 0xC0008009;
	//	PG4CON = 0xC0008009;
	/*-----------------------------------------------------------------------*/
    /* ADC設定*/
    /*-----------------------------------------------------------------------*/
//		ANSELAbits.ANSELA7 = 1U;		//PortA7をアナログ入力に設定
//		
//		AD1CH0CONbits.TRG1SRC = 1u;						//AD変換開始はソフトウェアによる
//		AD1CH0CONbits.TRG2SRC = 2u;						//次回以降のAD変換は即時再トリガー
//		AD1CH0CONbits.PINSEL = 6u;						//AD1CH0+入力はAD1AN6
//		
//		AD1CH0CONbits.MODE = ADC_MODE_OVERSAMPLING;		//変換モードは「オーバサンプリング」
//		AD1CH0CONbits.ACCNUM = 3u;						//256×オーバーサンプリング
//		
//		AD1CON = 0x00000000U;
//		AD1CONbits.ON = 1U;   
//		while(AD1CONbits.ADRDY == 0U)
//		{
//			;
//		}
//		
//		AD1SWTRGbits.CH0TRG = 1U;
		
		while(1)
		{
			;
		}
}
		
#elif (PROJECT_TYPE == PROJECT_4_1_1_PMU )

#define ARRAY_SIZE 1024 * 2  //
#define ITERATIONS 1000000

int array[ARRAY_SIZE];
int cnt;

// 連続アクセス
void sequential_access() 
{
    for (int i = 0; i < ITERATIONS; i++) 
	{
        array[i % ARRAY_SIZE]++;
    }
}

// ランダムアクセス
void random_access() 
{
    for (int i = 0; i < ITERATIONS; i++) 
	{
        array[rand() % ARRAY_SIZE]++;
    }
}


int main() 
{
    /*-----------------------------------------------------------------------*/
    /*初期化*/
    /*-----------------------------------------------------------------------*/
        vdg_Clock_Set_Register();
		//TRISBbits.TRISB10 = 1u;
		TRISDbits.TRISD9 = 0u;
		TRISDbits.TRISD10 = 0u;
		
		PR1 = 1000;
		T1CONbits.ON = 1;
		T1CONbits.TCKPS = 0;
		IFS1bits.T1IF = 0;
		IEC1bits.T1IE = 1;
		IPC6bits.T1IP = 3;
		
		cnt = 0;
		INTCON1bits.GIE = 1;
		
		
		HPSEL0bits.SELECT0 = 1U;
		HPSEL0bits.SELECT1 = 2U;
		HPSEL0bits.SELECT2 = 3U;
		HPSEL0bits.SELECT3 = 4U;
		HPSEL1bits.SELECT4 = 5U;
		HPSEL1bits.SELECT5 = 6U;
		HPSEL1bits.SELECT6 = 7U;
		HPSEL1bits.SELECT7 = 8U;
		
		HPCCONbits.CLR = 1U;
		HPCCONbits.CLR = 0U;
		
		HPCCONbits.ON = 1u;
    /*-----------------------------------------------------------------------*/
    /*メインルーチン*/
    /*-----------------------------------------------------------------------*/
	while(1)
        {

			// 配列の初期化
			for (int i = 0; i < ARRAY_SIZE; i++) 
			{
				array[i] = 0;
			}

			// 連続アクセスの計測
			LATDbits.LATD9 = 1u;
			sequential_access();
			LATDbits.LATD9 = 0u;

			LATDbits.LATD10 = 1u;
			random_access();
			LATDbits.LATD10 = 0u;
        }
}

void __attribute__((interrupt, no_auto_psv)) _T1Interrupt(void)
{
	cnt ++;
	if (cnt > 100000 )
	{
		
		HPCCONbits.ON = 0u;
		Nop();
	}
	
#if 1
	if ( LATDbits.LATD9 == 1)
	{
		LATDbits.LATD9 = 0;
	}
	else
	{
		LATDbits.LATD9 = 1;
	}
	IFS1bits.T1IF = 0u;
#else
	vds_Isr_Unexpected_Interrupt(ISR_IRQ_T1Interrupt);
#endif
}
#elif (PROJECT_TYPE == PROJECT_2_6_1_OPEAMP_OFFSET  )

uint32_t u4g_ADC1CH0Data;
uint32_t u4g_ADC1CH1Data;
int32_t u4g_ADC1CH0_CH1_Delta;

int main() 
{
    /*-----------------------------------------------------------------------*/
    /*初期化*/
    /*-----------------------------------------------------------------------*/
        vdg_Clock_Set_Register();
		
		ANSELAbits.ANSELA2 = 1U;						//PortA2をアナログピンに設定
		ANSELAbits.ANSELA3 = 1U;						//PortA3をアナログピンに設定
		ANSELAbits.ANSELA4 = 1U;						//PortA4をアナログピンに設定
	/*-----------------------------------------------------------------------*/
	/* AMP1CON1レジスタ */
	/*-----------------------------------------------------------------------*/
		AMP1CON1 = 0x00000000u;

		AMP1CON1bits.OMONEN = 1u;	//オペアンプの出力をAD入力に接続
		AMP1CON1bits.IMONEN = 1u;	//オペアンプの入力をAD入力に接続
		AMP1CON1bits.DIFFCON = 2u;	//差動調整モード
		AMP1CON1bits.UGE = 1u;      //ユニティゲイン
		AMP1CON1bits.HPEN = 1u;     //ハイパワーモード
		AMP1CON1bits.AMPEN = 0u;
		
	/*-----------------------------------------------------------------------*/
	/* AMP1CON2レジスタ */
	/*-----------------------------------------------------------------------*/
		AMP1CON2 = 0x00000000u;

		AMP1CON2bits.NOFFSETLP = 0u;
		AMP1CON2bits.POFFSETLP = 0u;
		AMP1CON2bits.NOFFSETHP = 0x4u; //ハイパワー時のNMOSオフセット
		AMP1CON2bits.POFFSETHP = 0x2u; //ハイパワー時のPMOSオフセット

		AMP1CON1bits.AMPEN = 1u;
		
		
	/*-----------------------------------------------------------------------*/
	/* AD1CH0レジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH0CONbits.TRG1SRC = 1u;						//AD変換開始はソフトウェアによる
		AD1CH0CONbits.TRG2SRC = 2u;						//次回以降のAD変換は即時再トリガー
		AD1CH0CONbits.PINSEL = 0u;						//AD1CH0+入力はAD1AN6
		AD1CH0CONbits.SAMC = 3u;
		AD1CH0CONbits.MODE = ADC_MODE_OVERSAMPLING;		//変換モードは「オーバサンプリング」
		AD1CH0CONbits.ACCNUM = 3u;						//256×オーバーサンプリング
	/*-----------------------------------------------------------------------*/
	/* AD1CH1レジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH1CONbits.TRG1SRC = 1u;						//AD変換開始はソフトウェアによる
		AD1CH1CONbits.TRG2SRC = 2u;						//次回以降のAD変換は即時再トリガー
		AD1CH1CONbits.PINSEL = 1u;						//AD1CH0+入力はAD1AN6
		AD1CH0CONbits.SAMC = 3u;
		AD1CH1CONbits.MODE = ADC_MODE_OVERSAMPLING;		//変換モードは「オーバサンプリング」
		AD1CH1CONbits.ACCNUM = 3u;						//256×オーバーサンプリング
		
		AD1CON = 0x00000000U;
		AD1CONbits.ON = 1U;   
		while(AD1CONbits.ADRDY == 0U)
		{
			;
		}
		
		AD1SWTRGbits.CH0TRG = 1U;
		AD1SWTRGbits.CH1TRG = 1U;
    /*-----------------------------------------------------------------------*/
    /*メインルーチン*/
    /*-----------------------------------------------------------------------*/
        while(1)
        {
			if (AD1STATbits.CH0RDY == 1U)
			{
				u4g_ADC1CH0Data= AD1CH0DATA;
				AD1SWTRGbits.CH0TRG = 1U;
			}
			
			if (AD1STATbits.CH1RDY == 1U)
			{
				u4g_ADC1CH1Data= AD1CH1DATA;
				u4g_ADC1CH0_CH1_Delta = u4g_ADC1CH0Data - u4g_ADC1CH1Data;

				AD1SWTRGbits.CH1TRG = 1U;
			}
			
		}	
		
}
#elif (PROJECT_TYPE == PROJECT_2_6_2_OPEAMP  )

uint32_t u4g_ADC1CH0Data;
uint32_t u4g_ADC1CH1Data;
int32_t u4g_ADC1CH0_CH1_Delta;

int main() 
{
    /*-----------------------------------------------------------------------*/
    /*初期化*/
    /*-----------------------------------------------------------------------*/
        vdg_Clock_Set_Register();
		
		ANSELAbits.ANSELA2 = 1U;						//PortA2をアナログピンに設定
		ANSELAbits.ANSELA3 = 1U;						//PortA3をアナログピンに設定
		ANSELAbits.ANSELA4 = 1U;						//PortA4をアナログピンに設定
	/*-----------------------------------------------------------------------*/
	/* AMP1CON1レジスタ */
	/*-----------------------------------------------------------------------*/
		AMP1CON1 = 0x00000000u;

		AMP1CON1bits.OMONEN = 0u;	//オペアンプの出力をAD入力に接続
		AMP1CON1bits.IMONEN = 0u;	//オペアンプの入力をAD入力に接続
		AMP1CON1bits.DIFFCON = 0u;	//差動調整モード
		AMP1CON1bits.UGE = 0u;      //ユニティゲイン
		AMP1CON1bits.HPEN = 1u;     //ハイパワーモード
		AMP1CON1bits.AMPEN = 0u;
		
	/*-----------------------------------------------------------------------*/
	/* AMP1CON2レジスタ */
	/*-----------------------------------------------------------------------*/
		AMP1CON2 = 0x00000000u;

		AMP1CON2bits.NOFFSETLP = 0u;
		AMP1CON2bits.POFFSETLP = 0u;
		AMP1CON2bits.NOFFSETHP = 0x4u; //ハイパワー時のNMOSオフセット
		AMP1CON2bits.POFFSETHP = 0x2u; //ハイパワー時のPMOSオフセット

		AMP1CON1bits.AMPEN = 1u;
		
		
	
    /*-----------------------------------------------------------------------*/
    /*メインルーチン*/
    /*-----------------------------------------------------------------------*/
        while(1)
        {
			
		}	
}
#elif (PROJECT_TYPE == PROJECT_3_1_6_SPI_FLASH)
#if 1
#include "FlashMemory_SST26VF_user.h"
#include "FlashMemory_SST26VF_driver.h"

#define RX_BUFF_SIZE	128


uint32_t ID;
uint8_t FlashBuff[RX_BUFF_SIZE];

int main() 
{
	
    /*-----------------------------------------------------------------------*/
    /* クロック初期化*/
    /*-----------------------------------------------------------------------*/
        vdg_Clock_Set_Register();
    /*-----------------------------------------------------------------------*/
    /* 変数初期化*/
    /*-----------------------------------------------------------------------*/
		for (int i = 0 ;i<16;i++){FlashBuff[i] = i+2;}
		
	/*-----------------------------------------------------------------------*/
	/* ピン設定*/
	/*-----------------------------------------------------------------------*/
		RPOR12bits.RP50R = 9u;	//UART1出力 RP50
		RPINR9bits.U1RXR = 52u;	//UART1入力 RP52
		RPOR10bits.RP44R = 13u; //SDO1
		RPOR12bits.RP51R = 14u;	//SCK1
		RPINR10bits.SDI1R = 60u; //SDI1
		TRISDbits.TRISD4 = 0;    //SS
		//RPOR13bits.RP53R = 15u;	//SS1
		TRISCbits.TRISC3 = 0;    //LED1
		TRISCbits.TRISC4 = 0;    //LED1
		LATDbits.LATD4 = 0u;
    /*-----------------------------------------------------------------------*/
    /* SPI初期化*/
    /*-----------------------------------------------------------------------*/
		SPI1CON1 = 0x00000000u;
		SPI1CON1bits.ENHBUF = 0u;
		SPI1CON1bits.SPIFE = 0u;	
		SPI1CON1bits.MCLKEN = 0u;	//Standard Speed Peripheral Clock
		SPI1CON1bits.DISSCK = 0u;
		SPI1CON1bits.DISSDI = 0u;
		SPI1CON1bits.MSTEN = 1u;	//Host mode
		SPI1CON1bits.CKP = 0u;
		SPI1CON1bits.SSEN = 0u;
		SPI1CON1bits.CKE = 1u;
		SPI1CON1bits.SMP = 0u;
		SPI1CON1bits.MODE16 = 0u;
		SPI1CON1bits.MODE32 = 0u;
		SPI1CON1bits.DISSDO = 0u;
		SPI1CON1bits.SIDL = 0u;
		SPI1CON1bits.FRMCNT = 0u;
		SPI1CON1bits.FRMSYPW = 0u;
		SPI1CON1bits.MSSEN = 0u;
		SPI1CON1bits.FRMPOL = 0u;
		SPI1CON1bits.FRMSYNC = 0u;
		SPI1CON1bits.FRMEN = 0u;
		SPI1CON1bits.AUDMOD = 0u;
		SPI1CON1bits.URDTEN = 0u;
		SPI1CON1bits.AUDMONO = 0u;
		SPI1CON1bits.IGNTUR = 0u;
		SPI1CON1bits.IGNROV = 0u;
		SPI1CON1bits.SPISGNEXT = 0u;
		SPI1CON1bits.AUDEN = 0u;
		
		SPI1BRG = 0x00000003u;
		
		SPI1CON1bits.ON = 1u;

		
		// IDの読込
		ID = SST26VF_Read_ID();
		
		//ステータス・コンフィグレジスタへの書込み
		SST26VF_Write_StatusAndConfig(0,0);
		
		//チップの消去
		SST26VF_Erase_Chip();
		
		//ページライト
		SST26VF_Write_Page(FlashBuff,0,16);
	
		//バッファクリア
		for (int i = 0 ;i<16;i++){FlashBuff[i] = 0;}
		
		//データリード
		SST26VF_Read_Data(FlashBuff,0,16);
		
    /*-----------------------------------------------------------------------*/
    /*メインルーチン*/
    /*-----------------------------------------------------------------------*/
        while(1)
        {

		}
		
}




#else
#include "FlashMemory_SST26VF_user.h"
#include "FlashMemory_SST26VF_driver.h"

#define ESCAPE_BYTE  0x1B  // エスケープ文字（例: 0x1B）
#define CR           0x0D  // キャリッジリターン（CR）
#define LF           0x0A  // ラインフィード（LF）
#define RX_BUFF_SIZE	128



uint8_t TxBuf[128];
uint8_t RxBufA[RX_BUFF_SIZE];
uint8_t RxBufB[RX_BUFF_SIZE];
uint8_t AnlzBuf[RX_BUFF_SIZE];
uint8_t RxBufPtr;
uint8_t RxState;

uint8_t RxBufA_Length;
uint8_t RxBufB_Length;
uint32_t ID;

uint8_t FlashBuff[RX_BUFF_SIZE];

volatile uint8_t dummy;
int main() 
{
	
	uint32_t Tmr;
    /*-----------------------------------------------------------------------*/
    /* クロック初期化*/
    /*-----------------------------------------------------------------------*/
        vdg_Clock_Set_Register();
	/*-----------------------------------------------------------------------*/
	/* ピン設定*/
	/*-----------------------------------------------------------------------*/
		RPOR12bits.RP50R = 9u;	//UART1出力 RP50
		RPINR9bits.U1RXR = 52u;	//UART1入力 RP52
		RPOR10bits.RP44R = 13u; //SDO1
		RPOR12bits.RP51R = 14u;	//SCK1
		RPINR10bits.SDI1R = 60u; //SDI1
		//TRISDbits.TRISD4 = 0;    //SS
		RPOR13bits.RP53R = 15u;	//SS1
		TRISCbits.TRISC3 = 0;    //LED1
    /*-----------------------------------------------------------------------*/
    /* SPI初期化*/
    /*-----------------------------------------------------------------------*/
		SPI1CON1 = 0x00000000u;
		SPI1CON1bits.ENHBUF = 1u;
		SPI1CON1bits.SPIFE = 0u;	
		SPI1CON1bits.MCLKEN = 0u;	//Standard Speed Peripheral Clock
		SPI1CON1bits.DISSCK = 0u;
		SPI1CON1bits.DISSDI = 0u;
		SPI1CON1bits.MSTEN = 1u;	//Host mode
		SPI1CON1bits.CKP = 0u;
		SPI1CON1bits.SSEN = 0u;
		SPI1CON1bits.CKE = 1u;
		SPI1CON1bits.SMP = 0u;
		SPI1CON1bits.MODE16 = 0u;
		SPI1CON1bits.MODE32 = 0u;
		SPI1CON1bits.DISSDO = 0u;
		SPI1CON1bits.SIDL = 0u;
		SPI1CON1bits.FRMCNT = 0u;
		SPI1CON1bits.FRMSYPW = 0u;
		SPI1CON1bits.MSSEN = 1u;
		SPI1CON1bits.FRMPOL = 0u;
		SPI1CON1bits.FRMSYNC = 0u;
		SPI1CON1bits.FRMEN = 0u;
		SPI1CON1bits.AUDMOD = 0u;
		SPI1CON1bits.URDTEN = 0u;
		SPI1CON1bits.AUDMONO = 0u;
		SPI1CON1bits.IGNTUR = 0u;
		SPI1CON1bits.IGNROV = 0u;
		SPI1CON1bits.SPISGNEXT = 0u;
		SPI1CON1bits.AUDEN = 0u;
		
		SPI1BRG = 0x00000003u;
		
		SPI1CON1bits.ON = 1u;
    /*-----------------------------------------------------------------------*/
    /* UART初期化*/
    /*-----------------------------------------------------------------------*/
//		U1CON = 0x00000000u;
//		U1STAT = 0x00000000u;
//		U1BRG = (uint32_t) (100000000 / 460800);
//		U1RXB = 0x00000000u;
//		U1TXB = 0x00000000u;
//		U1PA = 0x00000000u;
//		U1PB = 0x00000000u;
//		U1CHK = 0x00000000u;
//		U1SCCON = 0x00000000u;
//		U1UIR = 0x00000000u;
//
//		U1CONbits.CLKMOD = 1u;
//		U1CONbits.RXEN = 1u;	//受信許可
//		U1CONbits.TXEN = 1u;	//送信許可
//		U1CONbits.ON = 1u;
		
    /*-----------------------------------------------------------------------*/
    /* DMA初期化（共通) */
    /*-----------------------------------------------------------------------*/
//		DMACONbits.ON = 1U;        //DMA有効
//		DMACONbits.PRIORITY = 0U;  //Fixed
//		DMACONbits.SIDL = 0UL;
//
//		DMABUF = 0x00000000u;
//		DMALOW = 0x4000U;
//		DMAHIGH = 0x7FFFU;
//
//    /*-----------------------------------------------------------------------*/
//    /* DMA0初期化（Uart受信,PingPong,パターンマッチ) */
//    /*-----------------------------------------------------------------------*/
//		DMA0CH = 0x00000000U;
//			DMA0CHbits.SIZE = 0U;		//8Bit
//			DMA0CHbits.TRMODE = 0U;		//ワンショットリピート
//			DMA0CHbits.DAMODE = 1U;		//Increment
//			DMA0CHbits.SAMODE = 0U;		//
//			DMA0CHbits.MATEN = 1U;		//パターンマッチ有効化
//			DMA0CHbits.INTOEN = 1U;
//			DMA0CHbits.RELOADD = 0U;    //リロード有効
//			DMA0CHbits.RELOADS = 0U;    //リロード有効
//			DMA0CHbits.PCHAEN = 0U;     //ピンポン開始
//			DMA0CHbits.PPEN = 0U;		//ピンポン有効化
//			
//		DMA0SEL = 0x0F;					//U1RX
//		DMA0STAT = 0x00000000U;
//		DMA0SRC = (unsigned int)& U1RXB;	//転送元
//		DMA0DST = (unsigned int)& RxBufA;	//転送先
//		DMA0CNT = RX_BUFF_SIZE;                     //最大転送回数
//		DMA0CLR = 0x00000000u;
//		DMA0SET = 0x00000000u;
//		DMA0INV = 0x00000000u;
//		DMA0MSK = 0x000000FFu;				//マスク
//		DMA0PAT = 0x0000000Au;				//パターンマッチデータ
//		DMA0CHbits.CHEN = 1U;
    /*-----------------------------------------------------------------------*/
    /* DMA1初期化（Uart受信,PingPong,パターンマッチ) */
    /*-----------------------------------------------------------------------*/
//		DMA1CH = 0x00000000U;
//			DMA1CHbits.SIZE = 0U;		//8Bit
//			DMA1CHbits.TRMODE = 0U;		//ワンショットリピート
//			DMA1CHbits.DAMODE = 1U;		//インクリメント
//			DMA1CHbits.SAMODE = 0U;		//
//			DMA1CHbits.MATEN = 0U;		//パターンマッチ有効化
//			DMA1CHbits.INTOEN = 1U;
//			DMA1CHbits.PPEN = 1U;		//ピンポン有効化
//			DMA1CHbits.RELOADD = 1U;    //リロード有効
//			DMA1CHbits.RELOADS = 1U;    //リロード有効
//			DMA1CHbits.PCHAEN = 0U;    //ピンポン待機
//			
//			
//		DMA1SEL = 0x0F;					//U1RX
//		DMA1STAT = 0x00000000U;
//		DMA1SRC = (unsigned int)& U1RXB;	//転送元
//		DMA1DST = (unsigned int)& RxBufB;	//転送先
//		DMA1CNT = 16u;                     //最大転送回数
//		DMA1CLR = 0x00000000u;
//		DMA1SET = 0x00000000u;
//		DMA1INV = 0x00000000u;
//		DMA1MSK = 0x000000FFu;				//マスク
//		DMA1PAT = 0x0000000Au;				//パターンマッチデータ
//		DMA1CHbits.CHEN = 1U;
    /*-----------------------------------------------------------------------*/
    /* DMA2初期化（Uart送信) */
    /*-----------------------------------------------------------------------*/
//		DMA2CH = 0x00000000U;
//			DMA2CHbits.SIZE = 0U;	//8Bit
//			DMA2CHbits.TRMODE = 0U; //ワンショット
//			DMA2CHbits.DAMODE = 0U; //
//			DMA2CHbits.SAMODE = 1U; //Increment
//		DMA2SEL = 0x10U;		//U1TX
//		DMA2STAT = 0x00000000U;
//		DMA2SRC = (unsigned int)& TxBuf;		//転送元
//		DMA2DST = (unsigned int)& U1TXB;		//転送先
//		DMA2CNT = 8u;                           //転送回数
//		DMA2CLR = 0x00000000u;
//		DMA2SET = 0x00000000u;
//		DMA2INV = 0x00000000u;
//		DMA2MSK = 0x00000000u;
//		DMA2PAT = 0x00000000u;
//		
//		
//		DMA2CNT = sprintf(TxBuf,"start\r\n") ;
//		DMA2SRC = (unsigned int)& TxBuf; //転送元
//		DMA2CHbits.CHEN = 1U;  //DMA0チャネル有効化
//		DMA2CHbits.CHREQ = 1U; //DMA0ソフトウェア転送開始
//		
//		
//		IFS2bits.DMA0IF = 0u;
//		IEC2bits.DMA0IE = 1u;
//		IPC9bits.DMA0IP = 4u;
//		INTCON1bits.GIE = 1u;
//		
		
		
	//	ID = SST26VF_Read_ID();
		
		
	//	SPI1BUF = 0x5A;
		
		
		ID = SST26VF_Read_ID();
	//	SST26VF_Erase_Chip();
		
		
    /*-----------------------------------------------------------------------*/
    /*メインルーチン*/
    /*-----------------------------------------------------------------------*/
        while(1)
        {
			//Tmr = 100000;
			//while (Tmr --){;}

	//		 SST26VF_Read_Data(FlashBuff,0x000000,16);
				//ID = SST26VF_Read_ID();
//			PC_Parse_Cmd();
		}
		
}

size_t escapeData(const unsigned char *input, size_t inputLen, unsigned char *output) {
    size_t outputLen = 0;
    for (size_t i = 0; i < inputLen; i++) {
        if (input[i] == ESCAPE_BYTE || input[i] == CR || input[i] == LF) {
            output[outputLen++] = ESCAPE_BYTE;
            output[outputLen++] = input[i] ^ 0xFF;  // データを反転
        } else {
            output[outputLen++] = input[i];
        }
    }
    return outputLen;
}

// デエスケープ処理
size_t unescapeData(const unsigned char *input, size_t inputLen, unsigned char *output) {
    size_t outputLen = 0;
    for (size_t i = 0; i < inputLen; i++) {
        if (input[i] == ESCAPE_BYTE) {
            if (i + 1 < inputLen) {
                output[outputLen++] = input[++i] ^ 0xFF;  // 反転を元に戻す
            }
        } else {
            output[outputLen++] = input[i];
        }
    }
    return outputLen;
}

uint32_t PC_Anlz_Adrs(uint8_t DelPos)
{
	if (AnlzBuf[DelPos] == 13)
	{
		return ((uint32_t)AnlzBuf[2] << 16) + ((uint32_t) AnlzBuf[3] << 8) + (uint32_t)AnlzBuf[4];
	}
	
	return 0xFFFFFFFF;
}

void PC_Anlz_Cmd(void)
{
	uint32_t adrs;
	uint8_t length;
	switch (AnlzBuf[0])
	{
		case 'E' :
			switch (AnlzBuf[1])
			{
				// 4KByte sector Erase
				case '4' :
					adrs = PC_Anlz_Adrs(5);
					if ( adrs < 0xFF000000)
					{
						SST26VF_Erase_Sector(adrs & 0xFFF000);
					}
					break;
				// 32KByte Block Erase
				case '3' :
					adrs = PC_Anlz_Adrs(5);
					if ( adrs < 0xFF000000)
					{
						SST26VF_Erase_32KByte_Block(adrs & 0xFF8000);
					}		
					break;	
				// 64KByte Block Erase
				case '6' :
					adrs = PC_Anlz_Adrs(5);
					if ( adrs < 0xFF000000)
					{
						SST26VF_Erase_32KByte_Block(adrs & 0xFF00000);
					}		

					break;	
				// Chip Erase
				case 'C' :
					SST26VF_Erase_Chip();
					break;
			}	
			break;
		case 'R' :
			switch (AnlzBuf[1])
			{
				case 'S' :
					SST26VF_Read_Status();

					break;
				case 'C' :
					SST26VF_Read_Config();

					break;	

				case 'D' :
					
					adrs = PC_Anlz_Adrs(6);
					if (AnlzBuf[6] == 13)
					{
						length = AnlzBuf[5];
						
						SST26VF_Read_Data(FlashBuff,adrs,length);
					}
					break;	
			}
			
			break;	
			
		case 'W' :
			
			
			break;	
	}
}
void PC_Parse_Cmd(void)
{
	switch (RxState)
	{
		case 0: break;
		
		case 1:
			if (RxBufPtr == 0) 
			{
				unescapeData(RxBufA,RxBufA_Length,AnlzBuf);
			}
			else
			{
				unescapeData(RxBufA,RxBufA_Length,AnlzBuf);
			}
			
			RxState = 2;
			break;
		case 2:
		    PC_Anlz_Cmd();
			RxState = 3;
			break;
		case 3:
			
			
			
			break;
		default :
			
			RxState = 0;
			break;
		
		
	}
	
}
/*----------------------------------------------------------------------------*/
/*
* @fn	_DMA0Interrupt(void)
* @brief
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void __attribute__((interrupt, no_auto_psv)) _DMA0Interrupt(void)
{
	if (RxBufPtr == 1)
	{
		RxBufB_Length = RX_BUFF_SIZE - DMA0CNT;
		DMA0SRC = (unsigned int)& U1RXB;	//転送元
		DMA0DST = (unsigned int)& RxBufA;	//転送先
		RxBufPtr = 0;
	}
	else
	{
		RxBufA_Length = RX_BUFF_SIZE - DMA0CNT;
		DMA0SRC = (unsigned int)& U1RXB;	//転送元
		DMA0DST = (unsigned int)& RxBufB;	//転送先
		RxBufPtr = 1u;
	}
	DMA0CNT = RX_BUFF_SIZE;                     //最大転送回数
	DMA0CHbits.CHEN = 1u;
	DMA0STATbits.DONE = 0u;
	IFS2bits.DMA0IF = 0u;
	RxState = 1u;
}

#endif



#elif (PROJECT_TYPE ==  PROJECT_3_2_1_PWM_PS)
#include "pwm_driver.h"


#define ADC_RESULT_NUM  16
#define ADC_CH			20

uint32_t u4g_ADC1CH0Data[ADC_RESULT_NUM];
uint32_t u4g_ADC1Head[ADC_CH];


int main() 
{
    /*-----------------------------------------------------------------------*/
    /* クロック初期化*/
    /*-----------------------------------------------------------------------*/
        vdg_Clock_Set_Register();
    /*-----------------------------------------------------------------------*/
    /* ADC初期化*/
    /*-----------------------------------------------------------------------*/
		ANSELAbits.ANSELA7 = 1U;
		AD1CH0CONbits.TRG1SRC = 1u;
		AD1CH0CONbits.TRG2SRC = 2u;
		AD1CH0CONbits.PINSEL = 6u;
		
		AD1CH0CONbits.MODE = ADC_MODE_INTEGRATION;
		AD1CH0CNT = 100;
		
		AD1CON = 0x00000000U;
		AD1CONbits.ON = 1U;   
		while(AD1CONbits.ADRDY == 0U)
		{
			;
		}
		
		AD1SWTRGbits.CH0TRG = 1U;
		
    /*-----------------------------------------------------------------------*/
    /* PWM初期化*/
    /*-----------------------------------------------------------------------*/
    /*-----------------------------------------------------------------------*/
	/* PCLKCONレジスタ */
	/*-----------------------------------------------------------------------*/
		PCLKCON = 0x00000000u;
		#ifdef DEF_BITNAME
			PCLKCONbits.MCLKSEL = 0u;
			PCLKCONbits.DIVSEL = 0u;
			PCLKCONbits.LOCK = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* FSCLレジスタ */
	/*-----------------------------------------------------------------------*/
		FSCL = 0x00000000u;
		FSMINPER = 0x00000000u;
		MPHASE = 0x00000000u;
		MDC = 0x00000000u;
		MPER = 0x00000000u;
		LFSR = 0x00000000u;

	/*-----------------------------------------------------------------------*/
	/* CMBTRIGレジスタ */
	/*-----------------------------------------------------------------------*/
		CMBTRIG = 0x00000000u;
		#ifdef DEF_BITNAME
			CMBTRIGbits.CTA1EN = 0u;
			CMBTRIGbits.CTA2EN = 0u;
			CMBTRIGbits.CTA3EN = 0u;
			CMBTRIGbits.CTA4EN = 0u;
			CMBTRIGbits.CTA5EN = 0u;
			CMBTRIGbits.CTA6EN = 0u;
			CMBTRIGbits.CTA7EN = 0u;
			CMBTRIGbits.CTA8EN = 0u;
			CMBTRIGbits.CTB1EN = 0u;
			CMBTRIGbits.CTB2EN = 0u;
			CMBTRIGbits.CTB3EN = 0u;
			CMBTRIGbits.CTB4EN = 0u;
			CMBTRIGbits.CTB5EN = 0u;
			CMBTRIGbits.CTB6EN = 0u;
			CMBTRIGbits.CTB7EN = 0u;
			CMBTRIGbits.CTB8EN = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* LOGCONAレジスタ */
	/*-----------------------------------------------------------------------*/
		LOGCONA = 0x00000000u;
			LOGCONAbits.PWMLFAD = PWM_DRV_LOGCON_DISTINATION_PWM2;
			LOGCONAbits.PWMLFA = PWM_DRV_LOGCON_FUNCTION_AND;
			LOGCONAbits.S2APOL = 0u;
			LOGCONAbits.S1APOL = 0u;
			LOGCONAbits.PWMS2A = PWM_DRV_LOGCON_SOURCE_PWM4H;
			LOGCONAbits.PWMS1A = PWM_DRV_LOGCON_SOURCE_PWM3H;
			
		LOGCONB = 0x00000000u;
			LOGCONBbits.PWMLFBD = PWM_DRV_LOGCON_DISTINATION_PWM2;
			LOGCONBbits.PWMLFB = PWM_DRV_LOGCON_FUNCTION_AND;
			LOGCONBbits.S2BPOL = 0u;
			LOGCONBbits.S1BPOL = 0u;
			LOGCONBbits.PWMS2B = PWM_DRV_LOGCON_SOURCE_PWM4L;
			LOGCONBbits.PWMS1B = PWM_DRV_LOGCON_SOURCE_PWM3L;

		LOGCONC = 0x00000000u;
		LOGCOND = 0x00000000u;
		LOGCONE = 0x00000000u;
		LOGCONF = 0x00000000u;

		PWMEVTA = 0x00000000u;
			PWMEVTAbits.EVTAPGS = PWM_DRV_PWMEVT_SOURCE_PWM3;
			PWMEVTAbits.EVTASEL = PWM_DRV_PWMEVT_SEL_PGTRGSEL;
			PWMEVTAbits.EVTASYNC = PWM_DRV_PWMEVT_OUTPUT_SYNC_OFF;
			PWMEVTAbits.EVTASTRD = PWM_DRV_PWMEVT_OUTPUT_STRETCH_8CLOCK;
			PWMEVTAbits.EVTAPOL = PWM_DRV_PWMEVT_OUTPUT_POL_ACTIVE_H;
			PWMEVTAbits.EVTAOEN = PWM_DRV_PWMEVT_OUTPUT_ENABLE;

		PWMEVTB = 0x00000000u;
			PWMEVTBbits.EVTBPGS = PWM_DRV_PWMEVT_SOURCE_PWM4;
			PWMEVTBbits.EVTBSEL = PWM_DRV_PWMEVT_SEL_PGTRGSEL;
			PWMEVTBbits.EVTBSYNC = PWM_DRV_PWMEVT_OUTPUT_SYNC_OFF;
			PWMEVTBbits.EVTBSTRD = PWM_DRV_PWMEVT_OUTPUT_STRETCH_8CLOCK;
			PWMEVTBbits.EVTBPOL = PWM_DRV_PWMEVT_OUTPUT_POL_ACTIVE_H;
			PWMEVTBbits.EVTBOEN = PWM_DRV_PWMEVT_OUTPUT_ENABLE;

		PWMEVTC = 0x00000000u;
		PWMEVTD = 0x00000000u;
		PWMEVTE = 0x00000000u;
		PWMEVTF = 0x00000000u;


  /*-----------------------------------------------------------------------*/
	/* PG3CONレジスタ */
	/*-----------------------------------------------------------------------*/
		PG3CON = 0x00000000u;
		#ifdef DEF_BITNAME
			PG3CONbits.MODSEL = 0u;
			PG3CONbits.CLKSEL = 0u;
			PG3CONbits.TRGCNT = 0u;
			PG3CONbits.ON = 0u;
			PG3CONbits.SOCS = 0u;
			PG3CONbits.TRGMOD = 0u;
			PG3CONbits.UPDMOD = 0u;
			PG3CONbits.MSTEN = 0u;
			PG3CONbits.MPHSEL = 0u;
			PG3CONbits.MPERSEL = 0u;
			PG3CONbits.MDCSEL = 0u;
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
		PG3IOCON = 0x00000000u;
		#ifdef DEF_BITNAME
			PG3IOCONbits.DBDAT = 0u;
			PG3IOCONbits.FFDAT = 0u;
			PG3IOCONbits.CLDAT = 0u;
			PG3IOCONbits.FLTDAT = 0u;
			PG3IOCONbits.OSYNC = 0u;
			PG3IOCONbits.OVRDAT = 0u;
			PG3IOCONbits.OVRENL = 0u;
			PG3IOCONbits.OVRENH = 0u;
			PG3IOCONbits.SWAP = 0u;
			PG3IOCONbits.CLMOD = 0u;
			PG3IOCONbits.POLL = 0u;
			PG3IOCONbits.POLH = 0u;
			PG3IOCONbits.PENL = 0u;
			PG3IOCONbits.PENH = 0u;
			PG3IOCONbits.PMOD = 0u;
			PG3IOCONbits.DTCMPSEL = 0u;
			PG3IOCONbits.PPSEN = 0u;
			PG3IOCONbits.CAPSRC = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* PG3EVTレジスタ */
	/*-----------------------------------------------------------------------*/
		PG3EVT = 0x00000000u;
		#ifdef DEF_BITNAME
			PG3EVTbits.PGTRGSEL = 0u;
			PG3EVTbits.UPDTRG = 0u;
			PG3EVTbits.PWMPCI = 0u;
			PG3EVTbits.ADTR1EN1 = 0u;
			PG3EVTbits.ADTR1EN2 = 0u;
			PG3EVTbits.ADTR1EN3 = 0u;
			PG3EVTbits.ADTR1PS = 0u;
			PG3EVTbits.ADTR1OFS = 0u;
			PG3EVTbits.ADTR2EN1 = 0u;
			PG3EVTbits.ADTR2EN2 = 0u;
			PG3EVTbits.ADTR2EN3 = 0u;
			PG3EVTbits.IEVTSEL = 0u;
			PG3EVTbits.SIEN = 0u;
			PG3EVTbits.FFIEN = 0u;
			PG3EVTbits.CLIEN = 0u;
			PG3EVTbits.FLTIEN = 0u;
		#endif 

		PG3FPCI = 0x00000000u;
		PG3CLPCI = 0x00000000u;
		PG3FFPCI = 0x00000000u;
		PG3SPCI = 0x00000000u;

	/*-----------------------------------------------------------------------*/
	/* PG3LEBレジスタ */
	/*-----------------------------------------------------------------------*/
		PG3LEB = 0x00000000u;
		#ifdef DEF_BITNAME
			PG3LEBbits.LEB = 0u;
			PG3LEBbits.PLF = 0u;
			PG3LEBbits.PLR = 0u;
			PG3LEBbits.PHF = 0u;
			PG3LEBbits.PHR = 0u;
		#endif 

		PG3PHASE = 0x00000000u;
		PG3DC = 0x00000000u;
		PG3DCA = 0x00000000u;
		PG3PER = 0x00000000u;

	/*-----------------------------------------------------------------------*/
	/* PG3TRIGAレジスタ */
	/*-----------------------------------------------------------------------*/
		PG3TRIGA = 0x00000000u;
		#ifdef DEF_BITNAME
			PG3TRIGAbits.TRIGA = 0u;
			PG3TRIGAbits.CAHALF = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* PG3TRIGBレジスタ */
	/*-----------------------------------------------------------------------*/
		PG3TRIGB = 0x00000000u;
		#ifdef DEF_BITNAME
			PG3TRIGBbits.TRIGB = 0u;
			PG3TRIGBbits.CAHALF = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* PG3TRIGCレジスタ */
	/*-----------------------------------------------------------------------*/
		PG3TRIGC = 0x00000000u;
		#ifdef DEF_BITNAME
			PG3TRIGCbits.TRIGC = 0u;
			PG3TRIGCbits.CAHALF = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* PG3DTレジスタ */
	/*-----------------------------------------------------------------------*/
		PG3DT = 0x00000000u;
		#ifdef DEF_BITNAME
			PG3DTbits.DTL = 0u;
			PG3DTbits.DTH = 0u;
		#endif 


		PG3CAP = 0x00000000u;


    /*-----------------------------------------------------------------------*/
	/* PG4CONレジスタ */
	/*-----------------------------------------------------------------------*/
		PG4CON = 0x00000000u;
		#ifdef DEF_BITNAME
			PG4CONbits.MODSEL = 0u;
			PG4CONbits.CLKSEL = 0u;
			PG4CONbits.TRGCNT = 0u;
			PG4CONbits.ON = 0u;
			PG4CONbits.SOCS = 0u;
			PG4CONbits.TRGMOD = 0u;
			PG4CONbits.UPDMOD = 0u;
			PG4CONbits.MSTEN = 0u;
			PG4CONbits.MPHSEL = 0u;
			PG4CONbits.MPERSEL = 0u;
			PG4CONbits.MDCSEL = 0u;
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
		PG4IOCON = 0x00000000u;
		#ifdef DEF_BITNAME
			PG4IOCONbits.DBDAT = 0u;
			PG4IOCONbits.FFDAT = 0u;
			PG4IOCONbits.CLDAT = 0u;
			PG4IOCONbits.FLTDAT = 0u;
			PG4IOCONbits.OSYNC = 0u;
			PG4IOCONbits.OVRDAT = 0u;
			PG4IOCONbits.OVRENL = 0u;
			PG4IOCONbits.OVRENH = 0u;
			PG4IOCONbits.SWAP = 0u;
			PG4IOCONbits.CLMOD = 0u;
			PG4IOCONbits.POLL = 0u;
			PG4IOCONbits.POLH = 0u;
			PG4IOCONbits.PENL = 0u;
			PG4IOCONbits.PENH = 0u;
			PG4IOCONbits.PMOD = 0u;
			PG4IOCONbits.DTCMPSEL = 0u;
			PG4IOCONbits.PPSEN = 0u;
			PG4IOCONbits.CAPSRC = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* PG4EVTレジスタ */
	/*-----------------------------------------------------------------------*/
		PG4EVT = 0x00000000u;
		#ifdef DEF_BITNAME
			PG4EVTbits.PGTRGSEL = 0u;
			PG4EVTbits.UPDTRG = 0u;
			PG4EVTbits.PWMPCI = 0u;
			PG4EVTbits.ADTR1EN1 = 0u;
			PG4EVTbits.ADTR1EN2 = 0u;
			PG4EVTbits.ADTR1EN3 = 0u;
			PG4EVTbits.ADTR1PS = 0u;
			PG4EVTbits.ADTR1OFS = 0u;
			PG4EVTbits.ADTR2EN1 = 0u;
			PG4EVTbits.ADTR2EN2 = 0u;
			PG4EVTbits.ADTR2EN3 = 0u;
			PG4EVTbits.IEVTSEL = 0u;
			PG4EVTbits.SIEN = 0u;
			PG4EVTbits.FFIEN = 0u;
			PG4EVTbits.CLIEN = 0u;
			PG4EVTbits.FLTIEN = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* PG4FPCIレジスタ */
	/*-----------------------------------------------------------------------*/
		PG4FPCI = 0x00000000u;
		PG4CLPCI = 0x00000000u;
		PG4FFPCI = 0x00000000u;
		PG4SPCI = 0x00000000u;


	/*-----------------------------------------------------------------------*/
	/* PG4LEBレジスタ */
	/*-----------------------------------------------------------------------*/
		PG4LEB = 0x00000000u;
		#ifdef DEF_BITNAME
			PG4LEBbits.LEB = 0u;
			PG4LEBbits.PLF = 0u;
			PG4LEBbits.PLR = 0u;
			PG4LEBbits.PHF = 0u;
			PG4LEBbits.PHR = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* PG4PHASEレジスタ */
	/*-----------------------------------------------------------------------*/
		PG4PHASE = 0x00000000u;
		PG4DC = 0x00000000u;
		PG4DCA = 0x00000000u;
		PG4PER = 0x00000000u;

	/*-----------------------------------------------------------------------*/
	/* PG4TRIGAレジスタ */
	/*-----------------------------------------------------------------------*/
		PG4TRIGA = 0x00000000u;
		#ifdef DEF_BITNAME
			PG4TRIGAbits.TRIGA = 0u;
			PG4TRIGAbits.CAHALF = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* PG4TRIGBレジスタ */
	/*-----------------------------------------------------------------------*/
		PG4TRIGB = 0x00000000u;
		#ifdef DEF_BITNAME
			PG4TRIGBbits.TRIGB = 0u;
			PG4TRIGBbits.CAHALF = 0u;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* PG4TRIGCレジスタ */
	/*-----------------------------------------------------------------------*/
		PG4TRIGC = 0x00000000u;
		#ifdef DEF_BITNAME
			PG4TRIGCbits.TRIGC = 0u;
			PG4TRIGCbits.CAHALF = 0u;
		#endif 

		PG4DT = 0x00000000u;
		PG4CAP = 0x00000000u;

    /*-----------------------------------------------------------------------*/
    /*メインルーチン*/
    /*-----------------------------------------------------------------------*/
        while(1)
        {
			if (AD1STATbits.CH0RDY == 1U)
			{
				u4g_ADC1CH0Data[u4g_ADC1Head[0]] = AD1CH0DATA;
				u4g_ADC1Head[0] ++;
				if (u4g_ADC1Head[0] >= ADC_RESULT_NUM)
				{
					u4g_ADC1Head[0] = 0U;
				}
				AD1SWTRGbits.CH0TRG = 1U;
			}
		}
}

#elif (PROJECT_TYPE == PROJECT_4_1_2_WDT )


uint32_t Timer;

int main() 
{
    /*-----------------------------------------------------------------------*/
    /*初期化*/
    /*-----------------------------------------------------------------------*/
        vdg_Clock_Set_Register();
		
		
		PR1 = 100000;
		T1CONbits.ON = 1;
		T1CONbits.TCKPS = 0;
		IFS1bits.T1IF = 0;
		IEC1bits.T1IE = 1;
		IPC6bits.T1IP = 3;
		
		
		WDTCONbits.RMCLK = 3u;	//LPRC
		WDTCONbits.RMPS = 10u;
		WDTCONbits.WINDIS = 0u;
		WDTCONbits.WINSIZE = 3u;
		
		WDTCONbits.ON = 1u;
		INTCON1bits.GIE = 1;
		Nop();

    /*-----------------------------------------------------------------------*/
    /*メインルーチン*/
    /*-----------------------------------------------------------------------*/
        while(1)
        {
			Timer = 500;
			while(Timer > 0) {;}
			ClrWdt();
			
			
		}	
}


void __attribute__((interrupt, no_auto_psv)) _T1Interrupt(void)
{

	if (Timer > 0 ){Timer --;}
	IFS1bits.T1IF = 0u;
}
#elif (PROJECT_TYPE == PROJECT_4_1_3_DMT )

uint32_t DMTStep;

int main() 
{
    /*-----------------------------------------------------------------------*/
    /*初期化*/
    /*-----------------------------------------------------------------------*/
        vdg_Clock_Set_Register();
		
		
		Nop();
		DMTStep = 0;
		
		DMTCONbits.ON = 0;
		PSCNT =  0x00FFFFFF;
		PSINTV = 0x007FFFFF;
		DMTCONbits.ON = 1;
    /*-----------------------------------------------------------------------*/
    /*メインルーチン*/
    /*-----------------------------------------------------------------------*/
        while(1)
        {

			if (DMTSTATbits.WINOPN == 0) 
			{
				if (DMTStep == 0)
				{
					DMTPRECLRbits.STEP1 = 0x40;
					DMTStep = 1;
				}
			}
			else //if (DMTSTATbits.WINOPN == 1)
			{
				DMTCLRbits.STEP2 = 0x08;
				DMTStep = 0;
			}
		}	
}

void __attribute__((interrupt, no_auto_psv)) _GeneralTrap(void)
{
	if ((DMTSTATbits.EVENT == 1)||(INTCON5bits.DMT == 1))
	{
		PPPCbits.NMISTEP1 = 0x40;
		PPCbits.NMISTEP2 = 0x88;
	}
	
}
#elif (PROJECT_TYPE == PROJECT_4_1_4_IOIM)

int main() 
{
    /*-----------------------------------------------------------------------*/
    /*初期化*/
    /*-----------------------------------------------------------------------*/
        vdg_Clock_Set_Register();
		
		TRISCbits.TRISC3 = 0u;
		LATCbits.LATC3 = 1u;
		
		IOIM1CONbits.ON = 0u;
		IOIM1CONbits.REFSEL = 0u;
		IOIM1CONbits.FBKSEL = 11u;
		IOIM1CONbits.EOVFVAL = 12u;
		IOIM1BCON = 50;
		IOIM1STAT = 0;
		Nop();
		IOIM1CONbits.ON = 1u;
		
    /*-----------------------------------------------------------------------*/
    /*　OK注入テスト */
    /*-----------------------------------------------------------------------*/
		IOIM1CONbits.TESTEN = 3u;
		IOIM1CONbits.OKINJ = 1u;
		
		while (IOIM1STATbits.OK == 0)
		{
			;
		}
		IOIM1CONbits.OKINJ = 0u;
		IOIM1STAT = 0x000u;
    /*-----------------------------------------------------------------------*/
    /*　フォルト注入テスト */
    /*-----------------------------------------------------------------------*/
		IOIM1CONbits.TESTEN = 2u;
		IOIM1CONbits.FLTINJ = 1u;
		
		while (IOIM1STATbits.ERR == 0)
		{
			
			
		}
		IOIM1CONbits.FLTINJ = 0u;
		IOIM1CONbits.TESTEN = 0u;
		IOIM1STAT = 0x000u;
    /*-----------------------------------------------------------------------*/
    /*　フォルト注入テスト */
    /*-----------------------------------------------------------------------*/
		IFS8bits.IOM1IF = 0u;
		IEC8bits.IOM1IE = 1u;
		IPC35bits.IOM1IP = 5u;
		
		INTCON1bits.GIE = 1u;


    /*-----------------------------------------------------------------------*/
    /*メインルーチン*/
    /*-----------------------------------------------------------------------*/
        while(1)
        {


		}	
}
void __attribute__((interrupt, no_auto_psv)) _IOIM1Interrupt(void)
{
	while(1)
	{
		Nop();
	}
	
}

#else
	#error "error"
#endif