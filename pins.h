
#ifndef PINS_H
#define	PINS_H

#include <xc.h>
 
#define SCL_TRIS        TRISC0
#define SDA_TRIS        TRISC1
#define JAM_TRIS        TRISC2
#define CELL_CLK_TRIS   TRISC3
#define CELL_DATA_TRIS  TRISC4
#define RUN_OUT_TRIS    TRISC5
#define DAISY_IN_TRIS   TRISA5
#define DAISY_OUT_TRIS  TRISA2

#define SCL_LAT         LATC0
#define SDA_LAT         LATC1
#define JAM_LAT         LATC2
#define CELL_CLK_LAT    LATC3
#define CELL_DATA_LAT   LATC4
#define RUN_OUT_LAT     LATC5
#define DAISY_IN_LAT    LATA5
#define DAISY_OUT_LAT   LATA2

#define JAM_PIN         RC2
#define CELL_DATA_PIN   RC4
#define RUN_OUT_PIN     RC5
#define DAISY_IN_PIN    RA5


#endif	/* PINS_H */
