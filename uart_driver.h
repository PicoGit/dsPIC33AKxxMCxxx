
#ifndef UART_DRIVER_H
#define	UART_DRIVER_H

/*----------------------------------------------------------------------------*/
/*インクルードファイル*/
/*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*/
/*定数定義*/
/*----------------------------------------------------------------------------*/
#define UART_DRV_UARTEN_DISABLE     ( 0u )  /* UARTモジュールを無効にする */
#define UART_DRV_UARTEN_ENABLE      ( 1u )  /* UARTモジュールを有効にする */

#define UART_DRV_SLEEP_OFF         ( 0u )  /* スロープモードでBRGクロックは停止しません */
#define UART_DRV_SLEEP_ON          ( 1u )  /* スロープモードでBRGクロックを停止 */

#define UART_DRV_USIDL_RUN          ( 0u )  /* アイドルモードでモジュール操作を続行します */
#define UART_DRV_USIDL_STOP         ( 1u )  /* アイドルモードに入るとモジュールの動作を停止します */

#define UART_DRV_WAKE_DISABLE       ( 0u )  /* UxRXピンは監視されず、立ち上がりエッジも検出されない */
#define UART_DRV_WAKE_ENABLE        ( 1u )  /* モジュールはUxRXピンのサンプリングを継続します */

#define UART_DRV_RXBIMD_LOW2HIGH    ( 0u )  /* ブレークが少なくとも23/11ビットの間ローであった後、ローからハイへの遷移を行うときのRXBKIFフラグ 期間 */
#define UART_DRV_RXBIMD_MIN         ( 1u )  /* 最低23（DMX）/ 11（非同期またはLIN/J2602）の下位ビット期間が検出された */

#define UART_DRV_BRKOVR_NOEFFECT    ( 0u )  /* TXラインはシフターによって駆動されます */
#define UART_DRV_BRKOVR_OVERRIDE    ( 1u )  /* TXラインをアクティブにします（UTXINV = 0の場合は出力0、UTXINV = 1の場合は出力 1 ） */

#define UART_DRV_BRGH_LOW_SPEED     ( 0u )  /* 低速：ボーレートはbaudclk / 16です */
#define UART_DRV_BRGH_HIGH_SPEED    ( 1u )  /* 高速：ボーレートはbaudclk / 4です */

#define UART_DRV_ABAUD_DISABLE      ( 0u )  /* ボーレート測定は無効か、完了しています */
#define UART_DRV_ABAUD_ENABLE       ( 1u )  /* 次の文字のボーレート測定を有効にします-同期フィールドの受信が必要です（55h） */

#define UART_DRV_UTXEN_DISABLE      ( 0u )  /* 送信は無効 */
#define UART_DRV_UTXEN_ENABLE       ( 1u )  /* 送信は有効 */

#define UART_DRV_URXEN_DISABLE      ( 0u )  /* 受信は無効 */
#define UART_DRV_URXEN_ENABLE       ( 1u )  /* 受信は有効 */

#define UART_DRV_MOD_ASYNC_8BIT    ( 0u )   /* 非同期8ビットUART */
#define UART_DRV_MOD_ASYNC_7BIT    ( 1u )   /* 非同期7ビットUART */
#define UART_DRV_MOD_ASYNC_8BIT_9OP    ( 2u )    /* アドレス検出なしの非同期8ビットUART、9番目のビットは奇数パリティビットとして使用 */
#define UART_DRV_MOD_ASYNC_8BIT_9EP    ( 3u )    /* アドレス検出なしの非同期8ビットUART、9番目のビットは偶数パリティビットとして使用 */
#define UART_DRV_MOD_ASYNC_9BIT_ADET   ( 4u )    /* アドレス検出機能を備えた非同期9ビットUART、9ビット目= 1はアドレスを通知 */
#define UART_DRV_MOD_DMX           ( 10u )  /* DMX */
#define UART_DRV_MOD_LIN_SLAVE     ( 11u )  /* LINスレーブのみ  */
#define UART_DRV_MOD_LIN_MASTER    ( 12u )  /* LINマスター/スレーブ */
#define UART_DRV_MOD_IRDA          ( 14u )  /* IrDA  */
#define UART_DRV_MOD_SMARTCARD     ( 15u )  /* スマートカード */


#define UART_DRV_SLPEN_CLOCK_OFF    ( 0u )  /* スリープ中にUART BRGクロックがオフになります */
#define UART_DRV_SLPEN_CLOCK_RUN    ( 1u )  /* スリープ中にUART BRGクロックが実行されます */

#define UART_DRV_CLKMOD_LAGACY     ( 0u )  /* ボークロック生成に従来のx分割カウンタを使用 */
#define UART_DRV_CLKMOD_FRACTIONAL ( 1u )  /* ボーレートの分数生成を使用 */

#define UART_DRV_CLKSEL_STANDARD_SPEED      ( 0u ) /* スタンダードスピード */
#define UART_DRV_CLKSEL_CLKGEN8				( 1u ) /* CLKGEN8 */

#define UART_DRV_HALFDPLX_FULL      ( 0u )  /* 全二重モード：UARTENとUTXENの両方が設定されている場合、UxTXは常にHighに駆動されます */
#define UART_DRV_HALFDPLX_HALF      ( 1u )  /* 半二重モード：UxTXは、送信時にハイに、UxTXがアイドル時にローに駆動されます。 */

#define UART_DRV_RUNOVF_LEGACY      ( 0u )  /* オーバーフローエラー（OERR）状態が検出されると、RXシフターは新しいデータの受け入れを停止します */
#define UART_DRV_RUNOVF_SYNC        ( 1u )  /* オーバーフローエラー（OERR）状態が検出された場合、RXシフターは、 着信RXデータとの同期を維持します */

#define UART_DRV_RXPOL_NORMAL      ( 0u )  /* 入力は反転されません。アイドル状態はHigh */
#define UART_DRV_RXPOL_INVERT      ( 1u )  /* RX極性を反転します。アイドル状態はLow */

#define UART_DRV_STP_1TX_1RX      ( 0u )  /* 1ストップビットを送信、受信時に1ビットチェックされます */
#define UART_DRV_STP_1P5TX_1P5RX  ( 1u )  /* 1.5ストップビットを送信、受信時に1.5ビットをチェック */
#define UART_DRV_STP_2TX_2RX      ( 2u )  /* 2ストップビットを送信、受信時に2ビットをチェック */
#define UART_DRV_STP_2TX_1RX      ( 3u )  /* 2ストップビットを送信、受信時に1ビットチェックされます */

#define UART_DRV_C0EN_MODE0         ( 0u )  /* LINモードのレガシーLINチェックサム。他のすべてのモードでは使用されません */
#define UART_DRV_C0EN_MODE1         ( 1u )  /* LINモードで強化されたLINチェックサム。他のすべてのモードですべてのTX / RXワードを追加 */

#define UART_DRV_TXPOL_NORMAL      ( 0u )  /* 出力は反転されません。アイドル状態はHigh */
#define UART_DRV_TXPOL_INVERT      ( 1u )  /* TX極性を反転します。アイドル状態はLow */

#define UART_DRV_FLO_OFF            ( 0u )  /* フロー制御オフ */
#define UART_DRV_FLO_XON_XOFF       ( 1u )  /* XON / XOFFソフトウェアフロー制御 */
#define UART_DRV_FLO_RTS_DSR_CTS_DTR ( 2u )  /* UxRTS-UxDSR（TXサイド用）/ UxCTS-UxDTR（RXサイド用）ハードウェアフロー制御 */

/*----------------------------------------------------------------------------------*/
/* 【U1STA】*/
/*----------------------------------------------------------------------------------*/
#define UART_DRV_TXMTIE_DISABLE    ( 0u ) /* 送信シフターエンプティ割り込み無効 */
#define UART_DRV_TXMTIE_ENABLE     ( 1u ) /* 送信シフターエンプティ割り込み有効 */

#define UART_DRV_PERIE_DISABLE     ( 0u ) /* パリティエラー割り込み無効 */
#define UART_DRV_PERIE_ENABLE      ( 1u ) /* パリティエラー割り込み有効 */

#define UART_DRV_ABDOVE_DISABLE    ( 0u ) /* 自動ボーレート取得割り込み無効 */
#define UART_DRV_ABDOVE_ENABLE     ( 1u ) /* 自動ボーレート取得割り込み有効 */

#define UART_DRV_CERIE_DISABLE     ( 0u ) /* チェックサムエラー割り込み無効 */
#define UART_DRV_CERIE_ENABLE      ( 1u ) /* チェックサムエラー割り込み有効 */

#define UART_DRV_FERIE_DISABLE     ( 0u ) /* フレーミングエラー割り込み無効 */
#define UART_DRV_FERIE_ENABLE      ( 1u ) /* フレーミングエラー割り込み有効 */

#define UART_DRV_RXBKIE_DISABLE    ( 0u ) /* 受信ブレーク割り込み無効 */
#define UART_DRV_RXBKIE_ENABLE     ( 1u ) /* 受信ブレーク割り込み有効 */

#define UART_DRV_OERIE_DISABLE     ( 0u ) /* 受信バッファオーバーフロー割り込み無効 */
#define UART_DRV_OERIE_ENABLE      ( 1u ) /* 受信バッファオーバーフロー割り込み有効 */

#define UART_DRV_TXCIE_DISABLE     ( 0u ) /* 衝突割り込み無効 */
#define UART_DRV_TXCIE_ENABLE      ( 1u ) /* 衝突割り込み有効 */

/*----------------------------------------------------------------------------------*/
/* 【U1STAH】*/
/*----------------------------------------------------------------------------------*/
#define UART_DRV_UTXISEL_8EMPTY     ( 0u ) /* バッファに空のスロットが8つ残っているときに送信割り込みを設定します */
#define UART_DRV_UTXISEL_7EMPTY     ( 1u ) /* バッファに空のスロットが7つ残っているときに送信割り込みを設定します */
#define UART_DRV_UTXISEL_6EMPTY     ( 2u ) /* バッファに空のスロットが6つ残っているときに送信割り込みを設定します */
#define UART_DRV_UTXISEL_5EMPTY     ( 3u ) /* バッファに空のスロットが5つ残っているときに送信割り込みを設定します */
#define UART_DRV_UTXISEL_4EMPTY     ( 4u ) /* バッファに空のスロットが4つ残っているときに送信割り込みを設定します */
#define UART_DRV_UTXISEL_3EMPTY     ( 5u ) /* バッファに空のスロットが3つ残っているときに送信割り込みを設定します */
#define UART_DRV_UTXISEL_2EMPTY     ( 6u ) /* バッファに空のスロットが2つ残っているときに送信割り込みを設定します */
#define UART_DRV_UTXISEL_1EMPTY     ( 7u ) /* バッファに空のスロットが1つ残っているときに送信割り込みを設定します */

#define UART_DRV_URXISEL_8WORD      ( 0u ) /* バッファに8ワードがあると、トリガーは割り込みを受信します */
#define UART_DRV_URXISEL_7WORD      ( 1u ) /* バッファに7ワードがあると、トリガーは割り込みを受信します */
#define UART_DRV_URXISEL_6WORD      ( 2u ) /* バッファに6ワードがあると、トリガーは割り込みを受信します */
#define UART_DRV_URXISEL_5WORD      ( 3u ) /* バッファに5ワードがあると、トリガーは割り込みを受信します */
#define UART_DRV_URXISEL_4WORD      ( 4u ) /* バッファに4ワードがあると、トリガーは割り込みを受信します */
#define UART_DRV_URXISEL_3WORD      ( 5u ) /* バッファに3ワードがあると、トリガーは割り込みを受信します */
#define UART_DRV_URXISEL_2WORD      ( 6u ) /* バッファに2ワードがあると、トリガーは割り込みを受信します */
#define UART_DRV_URXISEL_1WORD      ( 7u ) /* バッファに1ワードがあると、トリガーは割り込みを受信します */

#define UART_DRV_STPMD_FIRST_STOPBIT ( 0u ) /* 最初の（または、STSEL <1：0>設定に応じて2番目の）ストップビットの途中でRXIFをトリガーする */
#define UART_DRV_STPMD_LAST_STOPBIT  ( 1u ) /* 最後のストップビットの最後でRXIFをトリガーします */

/*----------------------------------------------------------------------------------*/
/* 【UxSCCON】*/
/*----------------------------------------------------------------------------------*/
#define UART_DRV_TXRPT_ONCE         ( 0u )  /* エラーバイトを1回再送信します  */
#define UART_DRV_TXRPT_TWICE        ( 1u )  /* エラーバイトを2回再送信します  */
#define UART_DRV_TXRPT_THREE        ( 2u )  /* エラーバイトを3回再送信します  */
#define UART_DRV_TXRPT_FOUR         ( 3u )  /* エラーバイトを4回再送信します  */

#define UART_DRV_CONV_DIRECT        ( 0u )
#define UART_DRV_CONV_INVERSE       ( 1u )

#define UART_DRV_T0PD_1ETU          ( 0u )
#define UART_DRV_T0PD_2ETUS         ( 1u )

#define UART_DRV_PRTCL_T0           ( 0u )
#define UART_DRV_PRTCL_T1           ( 1u )
/*----------------------------------------------------------------------------------*/
/* 【UxSCINT】*/
/*----------------------------------------------------------------------------------*/
#define UART_DRV_RXRPTIE_DISABLE    ( 0u )  /* 受信繰り返し割り込みが無効 */
#define UART_DRV_RXRPTIE_ENABLE     ( 1u )  /* 受信繰り返し割り込みが有効 */

#define UART_DRV_TXRPTIE_DISABLE    ( 0u )  /* 再送割り込みが無効 */
#define UART_DRV_TXRPTIE_ENABLE     ( 1u )  /* 再送割り込みが有効 */

#define UART_DRV_BTCIE_DISABLE      ( 0u )  /* ブロック時間カウンター割り込みが無効 */
#define UART_DRV_BTCIE_ENABLE       ( 1u )  /* ブロック時間カウンター割り込みが有効 */

#define UART_DRV_WTCIE_DISABLE      ( 0u )  /* 待機時間カウンター割り込みが無効 */
#define UART_DRV_WTCIE_ENABLE       ( 1u )  /* 待機時間カウンター割り込みが有効 */

#define UART_DRV_GTCIE_DISABLE      ( 0u )  /* ガードタイムカウンター割り込みが無効 */
#define UART_DRV_GTCIE_ENABLE       ( 1u )  /* ガードタイムカウンター割り込みが有効 */
/*----------------------------------------------------------------------------------*/
/* 【UxINT】*/
/*----------------------------------------------------------------------------------*/
#define UART_DRV_ABDIE_DISABLE      ( 0u )  /* 自動ボーレート完了割り込みが無効 */
#define UART_DRV_ABDIE_ENABLE       ( 1u )  /* 自動ボーレート完了割り込みが有効 */


/*----------------------------------------------------------------------------------*/
/*変数定義*/
/*----------------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------------*/
/*【PROTO】プロトタイプ宣言*/
/*----------------------------------------------------------------------------------*/
void vdg_UART_Set_All_Register(void);
void vdg_UART1_Set_All_Register(void);
void vdg_UART2_Set_All_Register(void);
/*----------------------------------------------------------------------------*/
/*プロトタイプ宣言*/
/*----------------------------------------------------------------------------*/
void vdg_UART_Set_Register(void);
void vdg_UART1_Set_Register(void);
void vdg_UART2_Set_Register(void);
#endif	/* UART_DRIVER_H */

