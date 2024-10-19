/* 
 * File:   FlashMemory_SST26VF_User.h
 * Author: curry
 *
 * Created on September 2, 2024, 12:12 AM
 */

#ifndef FLASHMEMORY_SST26VF_USER_H
#define	FLASHMEMORY_SST26VF_USER_H

#ifdef	__cplusplus
extern "C" {
#endif

#define SPIXBUF SPI1BUF
#define SPIXTBF SPI1STATbits.SPITBF
#define SPIXRBE SPI1STATbits.SPIRBE
#define SPIXRBF SPI1STATbits.SPIRBF
#define SPIXCS LATDbits.LATD4
	
#ifdef	__cplusplus
}
#endif

#endif	/* FLASHMEMORY_SST26VF_H */

