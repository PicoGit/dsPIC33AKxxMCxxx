#ifndef BOARD_H
#define	BOARD_H
/*----------------------------------------------------------------------------*/
/*インクルードファイル*/
/*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*/
/*定数定義*/
/*----------------------------------------------------------------------------*/

#define BOARD_EV68M17A_EV74H48A		0
#define BOARD_TYPE					BOARD_EV68M17A_EV74H48A
/*----------------------------------------------------------------------------*/
/* クロック入力 */	
/*----------------------------------------------------------------------------*/
#define FIN             8000000L            /* 外部クロック入力設定 */
    
/*----------------------------------------------------------------------------*/
/*【****】PMDユーザ定義　ボード毎に下記を設定する*/
/*----------------------------------------------------------------------------*/
#define PMD_MODULE_ENABLE       0u
#define PMD_MODULE_DISABLE      1u
#define PMD_MODULE_NOTHING      2u
    

#define PMD_ADC1MD      PMD_MODULE_ENABLE	/* ADC1モジュール無効化ビット */
#define PMD_ADC2MD      PMD_MODULE_ENABLE	/* ADC2モジュール無効化ビット */
#define PMD_ADC3MD      PMD_MODULE_NOTHING	/* ADC3モジュール無効化ビット */
#define PMD_ADC4MD      PMD_MODULE_NOTHING	/* ADC4モジュール無効化ビット */
#define PMD_ADC5MD      PMD_MODULE_NOTHING	/* ADC5モジュール無効化ビット */
#define PMD_CAN1MD      PMD_MODULE_NOTHING	/* CANモジュール無効化ビット */
#define PMD_CAN2MD      PMD_MODULE_NOTHING	/* CANモジュール無効化ビット */
#define PMD_SPI1MD      PMD_MODULE_ENABLE	/* SPI1モジュール無効化ビット */
#define PMD_SPI2MD      PMD_MODULE_ENABLE	/* SPI2モジュール無効化ビット */
#define PMD_SPI3MD      PMD_MODULE_ENABLE	/* SPI3モジュール無効化ビット */
#define PMD_U1MD		PMD_MODULE_ENABLE	/* UART1モジュール無効化ビット */
#define PMD_U2MD		PMD_MODULE_ENABLE	/* UART2モジュール無効化ビット */
#define PMD_U3MD		PMD_MODULE_ENABLE	/* UART3モジュール無効化ビット */
#define PMD_I2C1MD      PMD_MODULE_ENABLE	/* I2C1モジュール無効化ビット */
#define PMD_I2C2MD      PMD_MODULE_ENABLE	/* I2C2モジュール無効化ビット */
#define PMD_I2C3MD      PMD_MODULE_NOTHING	/* I2C3モジュール無効化ビット */
#define PMD_PWMMD       PMD_MODULE_ENABLE	/* PWMモジュール無効化ビット */
#define PMD_PWM1MD      PMD_MODULE_ENABLE	/* PWM1モジュール無効化ビット */
#define PMD_PWM2MD      PMD_MODULE_ENABLE	/* PWM2モジュール無効化ビット */
#define PMD_PWM3MD      PMD_MODULE_ENABLE	/* PWM3モジュール無効化ビット */
#define PMD_PWM4MD      PMD_MODULE_ENABLE	/* PWM4モジュール無効化ビット */
#define PMD_PWM5MD      PMD_MODULE_NOTHING	/* PWM5モジュール無効化ビット */
#define PMD_PWM6MD      PMD_MODULE_NOTHING	/* PWM6モジュール無効化ビット */
#define PMD_PWM7MD      PMD_MODULE_NOTHING	/* PWM7モジュール無効化ビット */
#define PMD_PWM8MD      PMD_MODULE_NOTHING	/* PWM8モジュール無効化ビット */
#define PMD_QEI1MD      PMD_MODULE_ENABLE	/* QEI1モジュール無効化ビット */
#define PMD_QEI2MD      PMD_MODULE_NOTHING	/* QEI2モジュール無効化ビット */
#define PMD_QEI3MD      PMD_MODULE_NOTHING	/* QEI3モジュール無効化ビット */
#define PMD_QEI4MD      PMD_MODULE_NOTHING	/* QEI4モジュール無効化ビット */
#define PMD_BISS1MD		PMD_MODULE_ENABLE	/* BISS1モジュール無効化ビット */
#define PMD_T1MD		PMD_MODULE_ENABLE	/* Timer1モジュール無効化ビット */
#define PMD_CCP1MD      PMD_MODULE_ENABLE	/* CCP1モジュール無効化ビット */
#define PMD_CCP2MD      PMD_MODULE_ENABLE	/* CCP2モジュール無効化ビット */
#define PMD_CCP3MD      PMD_MODULE_ENABLE	/* CCP3モジュール無効化ビット */
#define PMD_CCP4MD      PMD_MODULE_ENABLE	/* CCP4モジュール無効化ビット */
#define PMD_CCP5MD      PMD_MODULE_NOTHING	/* CCP5モジュール無効化ビット */
#define PMD_CCP6MD      PMD_MODULE_NOTHING	/* CCP6モジュール無効化ビット */
#define PMD_CCP7MD      PMD_MODULE_NOTHING	/* CCP7モジュール無効化ビット */
#define PMD_CCP8MD      PMD_MODULE_NOTHING	/* CCP8モジュール無効化ビット */
#define PMD_CRCMD       PMD_MODULE_ENABLE	/* CRCモジュール無効化ビット */
#define PMD_REFOMD      PMD_MODULE_NOTHING	/* REFOモジュール無効化ビット */
#define PMD_DACMD       PMD_MODULE_ENABLE	/* DACモジュール無効化ビット */
#define PMD_DMAMD       PMD_MODULE_ENABLE	/* DMAモジュール無効化ビット */
#define PMD_DMA0MD      PMD_MODULE_ENABLE	/* DMA0モジュール無効化ビット */
#define PMD_DMA1MD      PMD_MODULE_ENABLE	/* DMA1モジュール無効化ビット */
#define PMD_DMA2MD      PMD_MODULE_ENABLE	/* DMA2モジュール無効化ビット */
#define PMD_DMA3MD      PMD_MODULE_ENABLE	/* DMA3モジュール無効化ビット */
#define PMD_DMA4MD      PMD_MODULE_ENABLE	/* DMA4モジュール無効化ビット */
#define PMD_DMA5MD      PMD_MODULE_ENABLE	/* DMA5モジュール無効化ビット */	  
#define PMD_PTGMD       PMD_MODULE_ENABLE	/* PTGモジュール無効化ビット */
#define PMD_CM1MD       PMD_MODULE_ENABLE	/* CMP1モジュール無効化ビット */
#define PMD_CM2MD       PMD_MODULE_ENABLE	/* CMP2モジュール無効化ビット */
#define PMD_CM3MD       PMD_MODULE_ENABLE	/* CMP3モジュール無効化ビット */
#define PMD_CM4MD       PMD_MODULE_ENABLE	/* CMP4モジュール無効化ビット */
#define PMD_BIASMD      PMD_MODULE_ENABLE	/* BIASモジュール無効化ビット */
#define PMD_CLC1MD      PMD_MODULE_ENABLE	/* CLC1モジュール無効化ビット */
#define PMD_CLC2MD      PMD_MODULE_ENABLE	/* CLC2モジュール無効化ビット */
#define PMD_CLC3MD      PMD_MODULE_ENABLE	/* CLC3モジュール無効化ビット */
#define PMD_CLC4MD      PMD_MODULE_ENABLE	/* CLC4モジュール無効化ビット */
#define PMD_IOIM1MD     PMD_MODULE_ENABLE	/* IOIM1モジュール無効化ビット */
#define PMD_IOIM2MD     PMD_MODULE_ENABLE	/* IOIM2モジュール無効化ビット */
#define PMD_IOIM3MD     PMD_MODULE_ENABLE	/* IOIM3モジュール無効化ビット */
#define PMD_IOIM4MD     PMD_MODULE_ENABLE	/* IOIM4モジュール無効化ビット */
#define PMD_OPAMPMD     PMD_MODULE_ENABLE	/* OPAMPモジュール無効化ビット */	 
#define PMD_PGA1MD      PMD_MODULE_NOTHING	/* PGA1モジュール無効化ビット */	  
#define PMD_PGA2MD      PMD_MODULE_NOTHING	/* PGA2モジュール無効化ビット*/
#define PMD_PGA3MD      PMD_MODULE_NOTHING	/* PGA3モジュール無効化ビット*/
#define PMD_DMTMD       PMD_MODULE_ENABLE	/* DMTモジュール無効化ビット */
#define PMD_SENT1MD     PMD_MODULE_ENABLE	/* SENT1モジュール無効化ビット */
#define PMD_SENT2MD     PMD_MODULE_ENABLE	/* SENT2モジュール無効化ビット */
#define PMD_ECCMD       PMD_MODULE_NOTHING	/* ECCモジュール無効化ビット */
#define PMD_JTAGMD      PMD_MODULE_NOTHING	/* JTAGモジュール無効化ビット */
#define PMD_VREGMD      PMD_MODULE_NOTHING	/* VREGモジュール無効化ビット */
#define PMD_WDTMD       PMD_MODULE_ENABLE	/* WDTモジュール無効化ビット */



#pragma config FCP_CP = OFF             // メモリ保護有効ビット (メモリ保護は無効)
#pragma config FCP_CRC = OFF            // CRC有効ビット (CRCは無効)
#pragma config FCP_WPUCA = OFF          // ユーザー設定領域書き込み保護有効ビット (保護は無効)

// FICD
#pragma config FICD_JTAGEN = OFF        // JTAG有効ビット (JTAGは無効)

// FDEVOPT
#pragma config FDEVOPT_ALTI2C1 = OFF    // 代替I2C1ピン選択ビット (プライマリI2C1ピンが使用される)
#pragma config FDEVOPT_ALTI2C2 = OFF    // 代替I2C2ピン選択ビット (プライマリI2C2ピンが使用される)
#pragma config FDEVOPT_BISTDIS = OFF    // ハードウェアRAMテスト無効ビット (リセット後のRAMテストは有効)
#pragma config FDEVOPT_SPI2PIN = OFF    // SPI2ペリフェラルピン選択無効ビット (SPI2ピンはペリフェラルピン選択機能によって選択される)

// FWDT
#pragma config FWDT_WINDIS = ON					// ウォッチドッグタイマーウィンドウ有効ビット (ウォッチドッグタイマーは非ウィンドウモードで動作)
#pragma config FWDT_SWDTMPS = PS2147483648		// スリープモードウォッチドッグタイマーポストスケーラ選択ビット (1:2147483648)
#pragma config FWDT_RCLKSEL = BPRC256			// ウォッチドッグタイマークロック選択ビット (WDTランモードはBFRC:256を使用)
#pragma config FWDT_RWDTPS = PS2147483648		// ランモードウォッチドッグタイマーポストスケーラ選択ビット (1:2147483648)
#pragma config FWDT_WDTWIN = WIN25				// ウォッチドッグタイマーウィンドウサイズ選択ビット (WDTウィンドウはWDT期間の25%)
#pragma config FWDT_WDTEN = SW					// ウォッチドッグタイマー有効ビット (WDTはハードウェアで有効)
#pragma config FWDT_WDTRSTEN = ON				// ウォッチドッグタイマーリセット有効ビット (WDTイベントはリセットを生成)

// FCPBKUP
#pragma config FCPBKUP_CP = OFF         // メモリ保護有効ビットバックアップ (メモリ保護は無効)
#pragma config FCPBKUP_CRC = OFF        // CRC有効ビットバックアップ (CRCは無効)
#pragma config FCPBKUP_WPUCA = OFF      // ユーザー設定領域書き込み保護有効ビットバックアップ (保護は無効)

// FICDBKUP
#pragma config FICDBKUP_JTAGEN = OFF    // JTAG有効ビットバックアップ (JTAGは無効)

// FDEVOPTBKUP
#pragma config FDEVOPTBKUP_ALTI2C1 = OFF// 代替I2C1ピン選択ビットバックアップ (プライマリI2C1ピンが使用される)
#pragma config FDEVOPTBKUP_ALTI2C2 = OFF// 代替I2C2ピン選択ビットバックアップ (プライマリI2C2ピンが使用される)
#pragma config FDEVOPTBKUP_BISTDIS = OFF// ハードウェアRAMテスト無効ビットバックアップ (リセット後のRAMテストは有効)
#pragma config FDEVOPTBKUP_SPI2PIN = OFF// SPI2ペリフェラルピン選択無効ビットバックアップ (SPI2ピンはペリフェラルピン選択機能によって選択される)

// FWDTBKUP
#pragma config FWDTBKUP_WINDIS = ON     // ウォッチドッグタイマーウィンドウ有効ビットバックアップ (ウォッチドッグタイマーは非ウィンドウモードで動作)
#pragma config FWDTBKUP_SWDTMPS = PS2147483648// スリープモードウォッチドッグタイマーポストスケーラ選択ビットバックアップ (1:2147483648)
#pragma config FWDTBKUP_RCLKSEL = BPRC256// ウォッチドッグタイマークロック選択ビットバックアップ (WDTランモードはBFRC:256を使用)
#pragma config FWDTBKUP_RWDTPS = PS2147483648// ランモードウォッチドッグタイマーポストスケーラ選択ビットバックアップ (1:2147483648)
#pragma config FWDTBKUP_WDTWIN = WIN25  // ウォッチドッグタイマーウィンドウサイズ選択ビットバックアップ (WDTウィンドウはWDT期間の25%)
#pragma config FWDTBKUP_WDTEN = HW      // ウォッチドッグタイマー有効ビットバックアップ (WDTはハードウェアで有効)
#pragma config FWDTBKUP_WDTRSTEN = ON   // ウォッチドッグタイマーリセット有効ビットバックアップ (WDTイベントはリセットを生成)

// FPR0CTRL
#pragma config FPR0CTRL_RDIS = ON       // リージョン保護無効ビット (保護は無効)
#pragma config FPR0CTRL_EX = ON         // 実行許可ビット (コード実行が有効)
#pragma config FPR0CTRL_RD = ON         // 読み取り許可ビット (読み取り操作が有効)
#pragma config FPR0CTRL_WR = ON         // 書き込み許可ビット (書き込みおよび消去操作が有効)
#pragma config FPR0CTRL_CRC = ON        // CRC有効ビット (NVMコントローラーのCRC計算が有効)
#pragma config FPR0CTRL_RTYPE = FIRMWARE// リージョンタイプ選択ビット (ファームウェア設定可能リージョン)

// FPR0ST
#pragma config FPR0ST_START = 0x0       // リージョン開始アドレスビット (16進数値を入力)

// FPR0END
#pragma config FPR0END_END = 0x0        // リージョン終了アドレスビット (16進数値を入力)

// FPR1CTRL
#pragma config FPR1CTRL_RDIS = ON       // リージョン保護無効ビット (保護は無効)
#pragma config FPR1CTRL_EX = ON         // 実行許可ビット (コード実行が有効)
#pragma config FPR1CTRL_RD = ON         // 読み取り許可ビット (読み取り操作が有効)
#pragma config FPR1CTRL_WR = ON         // 書き込み許可ビット (書き込みおよび消去操作が有効)
#pragma config FPR1CTRL_CRC = ON        // CRC有効ビット (NVMコントローラーのCRC計算が有効)
#pragma config FPR1CTRL_RTYPE = FIRMWARE// リージョンタイプ選択ビット (ファームウェア設定可能リージョン)

// FPR1ST
#pragma config FPR1ST_START = 0x0       // リージョン開始アドレスビット (16進数値を入力)

// FPR1END
#pragma config FPR1END_END = 0x0        // リージョン終了アドレスビット (16進数値を入力)

// FPR2CTRL
#pragma config FPR2CTRL_RDIS = ON       // リージョン保護無効ビット (保護は無効)
#pragma config FPR2CTRL_EX = ON         // 実行許可ビット (コード実行が有効)
#pragma config FPR2CTRL_RD = ON         // 読み取り許可ビット (読み取り操作が有効)
#pragma config FPR2CTRL_WR = ON         // 書き込み許可ビット (書き込みおよび消去操作が有効)
#pragma config FPR2CTRL_CRC = ON        // CRC有効ビット (NVMコントローラーのCRC計算が有効)
#pragma config FPR2CTRL_RTYPE = FIRMWARE// リージョンタイプ選択ビット (ファームウェア設定可能リージョン)

// FPR2ST
#pragma config FPR2ST_START = 0x0       // リージョン開始アドレスビット (16進数値を入力)

// FPR2END
#pragma config FPR2END_END = 0x0        // リージョン終了アドレスビット (16進数値を入力)

// FPR3CTRL
#pragma config FPR3CTRL_RDIS = ON       // リージョン保護無効ビット (保護は無効)
#pragma config FPR3CTRL_EX = ON         // 実行許可ビット (コード実行が有効)
#pragma config FPR3CTRL_RD = ON         // 読み取り許可ビット (読み取り操作が有効)
#pragma config FPR3CTRL_WR = ON         // 書き込み許可ビット (書き込みおよび消去操作が有効)
#pragma config FPR3CTRL_CRC = ON        // CRC有効ビット (NVMコントローラーのCRC計算が有効)
#pragma config FPR3CTRL_RTYPE = FIRMWARE// リージョンタイプ選択ビット (ファームウェア設定可能リージョン)

// FPR3ST
#pragma config FPR3ST_START = 0x0       // リージョン開始アドレスビット (16進数値を入力)

// FPR3END
#pragma config FPR3END_END = 0x0        // リージョン終了アドレスビット (16進数値を入力)

// FPR4CTRL
#pragma config FPR4CTRL_RDIS = ON       // リージョン保護無効ビット (保護は無効)
#pragma config FPR4CTRL_EX = ON         // 実行許可ビット (コード実行が有効)
#pragma config FPR4CTRL_RD = ON         // 読み取り許可ビット (読み取り操作が有効)
#pragma config FPR4CTRL_WR = ON         // 書き込み許可ビット (書き込みおよび消去操作が有効)
#pragma config FPR4CTRL_CRC = ON        // CRC有効ビット (NVMコントローラのCRC計算が有効)
#pragma config FPR4CTRL_RTYPE = FIRMWARE// リージョンタイプ選択ビット (ファームウェア構成可能リージョン)

// FPR4ST
#pragma config FPR4ST_START = 0x0       // リージョン開始アドレスビット (16進数値を入力)

// FPR4END
#pragma config FPR4END_END = 0x0        // リージョン終了アドレスビット (16進数値を入力)

// FPR5CTRL
#pragma config FPR5CTRL_RDIS = ON       // リージョン保護無効ビット (保護は無効)
#pragma config FPR5CTRL_EX = ON         // 実行許可ビット (コード実行が有効)
#pragma config FPR5CTRL_RD = ON         // 読み取り許可ビット (読み取り操作が有効)
#pragma config FPR5CTRL_WR = ON         // 書き込み許可ビット (書き込みおよび消去操作が有効)
#pragma config FPR5CTRL_CRC = ON        // CRC有効ビット (NVMコントローラのCRC計算が有効)
#pragma config FPR5CTRL_RTYPE = FIRMWARE// リージョンタイプ選択ビット (ファームウェア構成可能リージョン)

// FPR5ST
#pragma config FPR5ST_START = 0x0       // リージョン開始アドレスビット (16進数値を入力)

// FPR5END
#pragma config FPR5END_END = 0x0        // リージョン終了アドレスビット (16進数値を入力)

// FPR6CTRL
#pragma config FPR6CTRL_RDIS = ON       // リージョン保護無効ビット (保護は無効)
#pragma config FPR6CTRL_EX = ON         // 実行許可ビット (コード実行が有効)
#pragma config FPR6CTRL_RD = ON         // 読み取り許可ビット (読み取り操作が有効)
#pragma config FPR6CTRL_WR = ON         // 書き込み許可ビット (書き込みおよび消去操作が有効)
#pragma config FPR6CTRL_CRC = ON        // CRC有効ビット (NVMコントローラのCRC計算が有効)
#pragma config FPR6CTRL_RTYPE = FIRMWARE// リージョンタイプ選択ビット (ファームウェア構成可能リージョン)

// FPR6ST
#pragma config FPR6ST_START = 0x0       // リージョン開始アドレスビット (16進数値を入力)

// FPR6END
#pragma config FPR6END_END = 0x0        // リージョン終了アドレスビット (16進数値を入力)

// FPR7CTRL
#pragma config FPR7CTRL_RDIS = ON       // リージョン保護無効ビット (保護は無効)
#pragma config FPR7CTRL_EX = ON         // 実行許可ビット (コード実行が有効)
#pragma config FPR7CTRL_RD = ON         // 読み取り許可ビット (読み取り操作が有効)
#pragma config FPR7CTRL_WR = ON         // 書き込み許可ビット (書き込みおよび消去操作が有効)
#pragma config FPR7CTRL_CRC = ON        // CRC有効ビット (NVMコントローラのCRC計算が有効)
#pragma config FPR7CTRL_RTYPE = FIRMWARE// リージョンタイプ選択ビット (ファームウェア構成可能リージョン)

// FPR7ST
#pragma config FPR7ST_START = 0x0       // リージョン開始アドレスビット (16進数値を入力)

// FPR7END
#pragma config FPR7END_END = 0x0        // リージョン終了アドレスビット (16進数値を入力)

// FIRT
#pragma config FIRT_IRT = OFF           // 不変の信頼の根有効ビット (不変の信頼の根(IRT)リージョンは無効)

// FSECDBG
#pragma config FSECDBG_SECDBG = OFF     // セキュアデバッグ有効ビット (セキュアデバッグは無効)

// FPED
#pragma config FPED_ICSPPED = OFF       // ICSPプログラムおよび消去無効ビット (ICSPはプログラムおよび消去可能)

// FEPUCB
#pragma config FEPUCB_EPUCB = 0xFFFFFFFF// UCB消去保護ビット (16進数値を入力)

// FWPUCB
#pragma config FWPUCB_WPUCB = 0xFFFFFFFF// UCB書き込み保護ビット (16進数値を入力)


// FPR0CTRLBKUP
#pragma config FPR0CTRLBKUP_RDIS = ON   // リージョン保護無効ビットバックアップ (保護は無効)
#pragma config FPR0CTRLBKUP_EX = ON     // 実行許可ビットバックアップ (コード実行が有効)
#pragma config FPR0CTRLBKUP_RD = ON     // 読み取り許可ビットバックアップ (読み取り操作が有効)
#pragma config FPR0CTRLBKUP_WR = ON     // 書き込み許可ビットバックアップ (書き込みおよび消去操作が有効)
#pragma config FPR0CTRLBKUP_CRC = ON    // CRC有効ビットバックアップ (NVMコントローラのCRC計算が有効)
#pragma config FPR0CTRLBKUP_RTYPE = FIRMWARE// リージョンタイプ選択ビットバックアップ (ファームウェア構成可能リージョン)

// FPR0STBKUP
#pragma config FPR0STBKUP_START = 0x0   // リージョン開始アドレスビットバックアップ (16進数値を入力)

// FPR0ENDBKUP
#pragma config FPR0ENDBKUP_END = 0x0    // リージョン終了アドレスビットバックアップ (16進数値を入力)

// FPR1CTRLBKUP
#pragma config FPR1CTRLBKUP_RDIS = ON   // リージョン保護無効ビットバックアップ (保護は無効)
#pragma config FPR1CTRLBKUP_EX = ON     // 実行許可ビットバックアップ (コード実行が有効)
#pragma config FPR1CTRLBKUP_RD = ON     // 読み取り許可ビットバックアップ (読み取り操作が有効)
#pragma config FPR1CTRLBKUP_WR = ON     // 書き込み許可ビットバックアップ (書き込みおよび消去操作が有効)
#pragma config FPR1CTRLBKUP_CRC = ON    // CRC有効ビットバックアップ (NVMコントローラのCRC計算が有効)
#pragma config FPR1CTRLBKUP_RTYPE = FIRMWARE// リージョンタイプ選択ビットバックアップ (ファームウェア構成可能リージョン)

// FPR1STBKUP
#pragma config FPR1STBKUP_START = 0x0   // リージョン開始アドレスビットバックアップ (16進数値を入力)

// FPR1ENDBKUP
#pragma config FPR1ENDBKUP_END = 0x0    // リージョン終了アドレスビットバックアップ (16進数値を入力)

// FPR2CTRLBKUP
#pragma config FPR2CTRLBKUP_RDIS = ON   // リージョン保護無効ビットバックアップ (保護は無効)
#pragma config FPR2CTRLBKUP_EX = ON     // 実行許可ビットバックアップ (コード実行が有効)
#pragma config FPR2CTRLBKUP_RD = ON     // 読み取り許可ビットバックアップ (読み取り操作が有効)
#pragma config FPR2CTRLBKUP_WR = ON     // 書き込み許可ビットバックアップ (書き込みおよび消去操作が有効)
#pragma config FPR2CTRLBKUP_CRC = ON    // CRC有効ビットバックアップ (NVMコントローラのCRC計算が有効)
#pragma config FPR2CTRLBKUP_RTYPE = FIRMWARE// リージョンタイプ選択ビットバックアップ (ファームウェア構成可能リージョン)

// FPR2STBKUP
#pragma config FPR2STBKUP_START = 0x0   // リージョン開始アドレスビットバックアップ (16進数値を入力)

// FPR2ENDBKUP
#pragma config FPR2ENDBKUP_END = 0x0    // リージョン終了アドレスビットバックアップ (16進数値を入力)

// FPR3CTRLBKUP
#pragma config FPR3CTRLBKUP_RDIS = ON   // リージョン保護無効ビットバックアップ (保護は無効)
#pragma config FPR3CTRLBKUP_EX = ON     // 実行許可ビットバックアップ (コード実行が有効)
#pragma config FPR3CTRLBKUP_RD = ON     // 読み取り許可ビットバックアップ (読み取り操作が有効)
#pragma config FPR3CTRLBKUP_WR = ON     // 書き込み許可ビットバックアップ (書き込みおよび消去操作が有効)
#pragma config FPR3CTRLBKUP_CRC = ON    // CRC有効ビットバックアップ (NVMコントローラのCRC計算が有効)
#pragma config FPR3CTRLBKUP_RTYPE = FIRMWARE// リージョンタイプ選択ビットバックアップ (ファームウェア構成可能リージョン)

// FPR3STBKUP
#pragma config FPR3STBKUP_START = 0x0   // リージョン開始アドレスビットバックアップ (16進数値を入力)

// FPR3ENDBKUP
#pragma config FPR3ENDBKUP_END = 0x0    // リージョン終了アドレスビットバックアップ (16進数値を入力)

// FPR4CTRLBKUP
#pragma config FPR4CTRLBKUP_RDIS = ON   // リージョン保護無効ビットバックアップ (保護は無効)
#pragma config FPR4CTRLBKUP_EX = ON     // 実行許可ビットバックアップ (コード実行が有効)
#pragma config FPR4CTRLBKUP_RD = ON     // 読み取り許可ビットバックアップ (読み取り操作が有効)
#pragma config FPR4CTRLBKUP_WR = ON     // 書き込み許可ビットバックアップ (書き込みおよび消去操作が有効)
#pragma config FPR4CTRLBKUP_CRC = ON    // CRC有効ビットバックアップ (NVMコントローラのCRC計算が有効)
#pragma config FPR4CTRLBKUP_RTYPE = FIRMWARE// リージョンタイプ選択ビットバックアップ (ファームウェア構成可能リージョン)

// FPR4STBKUP
#pragma config FPR4STBKUP_START = 0x0   // リージョン開始アドレスビットバックアップ (16進数値を入力)

// FPR4ENDBKUP
#pragma config FPR4ENDBKUP_END = 0x0    // リージョン終了アドレスビットバックアップ (16進数値を入力)


// FPR5CTRLBKUP
#pragma config FPR5CTRLBKUP_RDIS = ON   // リージョン保護無効ビットバックアップ (保護は無効)
#pragma config FPR5CTRLBKUP_EX = ON     // 実行許可ビットバックアップ (コード実行が有効)
#pragma config FPR5CTRLBKUP_RD = ON     // 読み取り許可ビットバックアップ (読み取り操作が有効)
#pragma config FPR5CTRLBKUP_WR = ON     // 書き込み許可ビットバックアップ (書き込みおよび消去操作が有効)
#pragma config FPR5CTRLBKUP_CRC = ON    // CRC有効ビットバックアップ (NVMコントローラのCRC計算が有効)
#pragma config FPR5CTRLBKUP_RTYPE = FIRMWARE// リージョンタイプ選択ビットバックアップ (ファームウェア構成可能リージョン)

// FPR5STBKUP
#pragma config FPR5STBKUP_START = 0x0   // リージョン開始アドレスビットバックアップ (16進数値を入力)

// FPR5ENDBKUP
#pragma config FPR5ENDBKUP_END = 0x0    // リージョン終了アドレスビットバックアップ (16進数値を入力)

// FPR6CTRLBKUP
#pragma config FPR6CTRLBKUP_RDIS = ON   // リージョン保護無効ビットバックアップ (保護は無効)
#pragma config FPR6CTRLBKUP_EX = ON     // 実行許可ビットバックアップ (コード実行が有効)
#pragma config FPR6CTRLBKUP_RD = ON     // 読み取り許可ビットバックアップ (読み取り操作が有効)
#pragma config FPR6CTRLBKUP_WR = ON     // 書き込み許可ビットバックアップ (書き込みおよび消去操作が有効)
#pragma config FPR6CTRLBKUP_CRC = ON    // CRC有効ビットバックアップ (NVMコントローラのCRC計算が有効)
#pragma config FPR6CTRLBKUP_RTYPE = FIRMWARE// リージョンタイプ選択ビットバックアップ (ファームウェア構成可能リージョン)

// FPR6STBKUP
#pragma config FPR6STBKUP_START = 0x0   // リージョン開始アドレスビットバックアップ (16進数値を入力)

// FPR6ENDBKUP
#pragma config FPR6ENDBKUP_END = 0x0    // リージョン終了アドレスビットバックアップ (16進数値を入力)

// FPR7CTRLBKUP
#pragma config FPR7CTRLBKUP_RDIS = ON   // リージョン保護無効ビットバックアップ (保護は無効)
#pragma config FPR7CTRLBKUP_EX = ON     // 実行許可ビットバックアップ (コード実行が有効)
#pragma config FPR7CTRLBKUP_RD = ON     // 読み取り許可ビットバックアップ (読み取り操作が有効)
#pragma config FPR7CTRLBKUP_WR = ON     // 書き込み許可ビットバックアップ (書き込みおよび消去操作が有効)
#pragma config FPR7CTRLBKUP_CRC = ON    // CRC有効ビットバックアップ (NVMコントローラのCRC計算が有効)
#pragma config FPR7CTRLBKUP_RTYPE = FIRMWARE// リージョンタイプ選択ビットバックアップ (ファームウェア構成可能リージョン)

// FPR7STBKUP
#pragma config FPR7STBKUP_START = 0x0   // リージョン開始アドレスビットバックアップ (16進数値を入力)

// FPR7ENDBKUP
#pragma config FPR7ENDBKUP_END = 0x0    // リージョン終了アドレスビットバックアップ (16進数値を入力)

// FIRTBKUP
#pragma config FIRTBKUP_IRT = OFF       // 変更不可能な信頼の根有効ビットバックアップ (変更不可能な信頼の根 (IRT) リージョンは無効)

// FSECDBGBKUP
#pragma config FSECDBGBKUP_SECDBG = OFF // セキュアデバッグ有効ビットバックアップ (セキュアデバッグは無効)

// FPEDBKUP
#pragma config FPEDBKUP_ICSPPED = OFF   // ICSPプログラムおよび消去無効ビットバックアップ (ICSPはプログラムおよび消去可能)

// FEPUCBBKUP
#pragma config FEPUCBBKUP_EPUCB = 0xFFFFFFFF// UCB消去保護ビットバックアップ (16進数値を入力)

// FWPUCBBKUP
#pragma config FWPUCBBKUP_WPUCB = 0xFFFFFFFF// UCB書き込み保護ビットバックアップ (16進数値を入力)

// #pragma config文はプロジェクトファイルのインクルードより前に配置する必要があります。
// ONおよびOFFの代わりにプロジェクト列挙型を使用してください。


#endif	/* BOARD_H */

