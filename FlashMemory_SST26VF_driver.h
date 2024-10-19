/* 
 * File:   FlashMemory_SST26VF.h
 * Author: curry
 *
 * Created on September 2, 2024, 12:12 AM
 */

#ifndef FLASHMEMORY_SST26VF_DRIVER_H
#define	FLASHMEMORY_SST26VF_DRIVER_H

#ifdef	__cplusplus
extern "C" {
#endif

/* Configuration */
#define    SST26VF_CMD_NOP       0x00    //No Operation
#define    SST26VF_CMD_RSTEN     0x66    //Reset Enable
#define    SST26VF_CMD_RST       0x99    //Reset Memory
#define    SST26VF_CMD_EQIO      0x38    //Enable Quad I/O
#define    SST26VF_CMD_RSTQIO    0xFF    //Reset Quad I/O
#define    SST26VF_CMD_RDSR      0x05    //Read Status Register
#define    SST26VF_CMD_WRSR      0x01    //Write Status Register
#define    SST26VF_CMD_RDCR      0x35    //Read Configuration Register

/* READ  */
#define    SST26VF_CMD_READ      0x03    //Read Memory (40MHz)
#define    SST26VF_CMD_HSREAD    0x0B    //Read Memory at Higher Speed(104 MHz/80 MHz)
#define    SST26VF_CMD_SDOR      0x3B    //SPI Dual Output Read(104 MHz/80 MHz)
#define    SST26VF_CMD_SDIOR     0xBB    //SPI Dual I/O Read (80 MHz)
#define    SST26VF_CMD_SQOR      0x6B    //SPI Quad Output Read(104 MHz/80 MHz)
#define    SST26VF_CMD_SQIOR     0xEB    //SPI Quad I/O Read (104 MHz/80 MHz)
#define    SST26VF_CMD_SB        0xC0    //Set Burst Length(104 MHz/80 MHz)
#define    SST26VF_CMD_RBSQI     0x0C    //SQI nB Burst with Wrap(104 MHz/80 MHz)
#define    SST26VF_CMD_RBSPI     0xEC    //SPI nB Burst with Wrap(104 MHz/80 MHz)
	
/*Identification */
#define    SST26VF_CMD_JID      0x9F    //JEDEC® ID Read
#define    SST26VF_CMD_QJID     0xAF    //Quad I/O J-ID Read 
#define    SST26VF_CMD_SFDP     0x5A    //Serial Flash Discoverable Parameters
	
/*Write */
#define    SST26VF_CMD_WREN     0x06    //Write Enable
#define    SST26VF_CMD_WRDI     0x04    //Write Disable
#define    SST26VF_CMD_SE       0x20    //Erase 4 Kbyte of Memory Array
#define    SST26VF_CMD_BE32K    0x52    //Erase 32 Kbyte of Block Memory Array
#define    SST26VF_CMD_BE64K    0xD8    //Erase 64 Kbyte of Block Memory Array
#define    SST26VF_CMD_CE       0x60    //Erase Full Memory Array
#define    SST26VF_CMD_PP       0x02    //To Program 1 to 256 Data Bytes
#define    SST26VF_CMD_APIQ_PP  0x32    //SPI Quad Page Program
#define    SST26VF_CMD_WRSU     0xB0    //Suspends Program/Erase
#define    SST26VF_CMD_WRRE     0x30    //Resume Program/Erase
	
	
/*Protection */
#define    SST26VF_CMD_LDPS     0x8D    //Lock-Down Protection Settings
#define    SST26VF_CMD_RSID     0x88    //Read Security ID
#define    SST26VF_CMD_PSID     0xA5    //Program User Security ID Area
#define    SST26VF_CMD_LSID     0x85    //Lockout Security ID Programming 

/*Power-Saving */
#define    SST26VF_CMD_DPD      0x8D    //Deep Power-Down Mode
#define    SST26VF_CMD_RDPD     0x88    //Release from Deep Power-Down and Read ID
	
void SST26VF_SPI_Transmit(uint8_t *txData,uint32_t Length);
void SST26VF_SPI_Receive(uint8_t *rxData,uint32_t Length);
void SST26VF_SPI_CS(uint8_t cs);
void SST26VF_Reset(void);
void SST26VF_Read_Data(uint8_t *rxData,uint32_t ReadAdrs,uint32_t Length);
void SST26VF_HiSpeed_Read_Data(uint8_t *rxData,uint32_t ReadAdrs,uint32_t Length);
uint32_t SST26VF_Read_ID(void);
uint32_t SST26VF_Read_Status(void);
uint32_t SST26VF_Read_Config(void);
void SST26VF_Write_Enable(void);
void SST26VF_Write_Page(uint8_t *txBuf,uint32_t WriteAdrs,uint32_t Length);
void SST26VF_Wait_WriteDone(void);
void SST26VF_Write_StatusAndConfig(uint8_t Status,uint8_t Config);
uint32_t SST26VF_Erase_Sector(uint32_t SectorAdrs);
uint32_t SST26VF_Erase_32KByte_Block(uint32_t BlockAdrs);
uint32_t SST26VF_Erase_64KByte_Block(uint32_t BlockAdrs);
uint32_t SST26VF_Erase_Chip(void);
	
#ifdef	__cplusplus
}
#endif

#endif	/* FLASHMEMORY_SST26VF_H */

