#ifndef I2C_H
#define	I2C_H

#include <xc.h>
#include "types.h"
#include "command.h"

#define I2C_BDCST_ADDR 0x12  // actual broadcast addr is 0x09

#define RECV_BUF_SIZE (NUM_OPT_BYTES_IO+2)
#define SEND_BUF_SIZE (NUM_OPT_BYTES_IO+1)

#define RdNotWrite SSP1STATbits.I2C_READ
#define I2C_SSPOV  SSP1CON1bits.SSPOV

extern volatile uint8 i2cRecvBytes[RECV_BUF_SIZE];
extern volatile uint8 i2cRecvBytesPtr;
extern volatile uint8 i2cSendBytes[SEND_BUF_SIZE];
extern volatile uint8 i2cSendBytesPtr;

void i2cInit(void);
void i2cInterrupt(void);
void resetI2cAddr(void);
void setI2cAddr(uint8 addr);

#endif	/* I2C_H */
