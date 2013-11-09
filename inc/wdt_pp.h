#ifndef __WDT_PP_H
#define __WDT_PP_H
#include <avr/io.h>
#include "attiny45.h"

void init_wdt(wdt_initStruct_t);

typedef struct {
	uint8_t tmr_presc;
	uint8_t tmr_config;
} wdt_initStruct_t; 

#define WDT_OSC_CYC_2K		(0<<WDP3) | (0<<WDP2) | (0<<WDP3) | (0<<WDP4)
#define WDT_OSC_CYC_4K		(0<<WDP3) | (0<<WDP2) | (0<<WDP3) | (1<<WDP4)
#define WDT_OSC_CYC_8K		(0<<WDP3) | (0<<WDP2) | (1<<WDP3) | (0<<WDP4)
#define WDT_OSC_CYC_16K		(0<<WDP3) | (0<<WDP2) | (1<<WDP3) | (1<<WDP4)
#define WDT_OSC_CYC_32K		(0<<WDP3) | (1<<WDP2) | (0<<WDP3) | (0<<WDP4)
#define WDT_OSC_CYC_64K		(0<<WDP3) | (1<<WDP2) | (0<<WDP3) | (1<<WDP4)
#define WDT_OSC_CYC_128K        (0<<WDP3) | (1<<WDP2) | (1<<WDP3) | (0<<WDP4)
#define WDT_OSC_CYC_256K        (0<<WDP3) | (1<<WDP2) | (1<<WDP3) | (1<<WDP4)
#define WDT_OSC_CYC_512K        (1<<WDP3) | (0<<WDP2) | (0<<WDP3) | (0<<WDP4)
#define WDT_OSC_CYC_1024K	(1<<WDP3) | (0<<WDP2) | (0<<WDP3) | (1<<WDP4)

#define WDT_TO_16MS       	(0<<WDP3) | (0<<WDP2) | (0<<WDP3) | (0<<WDP4)
#define WDT_TO_32MS		(0<<WDP3) | (0<<WDP2) | (0<<WDP3) | (1<<WDP4)
#define WDT_TO_64MS             (0<<WDP3) | (0<<WDP2) | (1<<WDP3) | (0<<WDP4)
#define WDT_TO_125MS            (0<<WDP3) | (0<<WDP2) | (1<<WDP3) | (1<<WDP4)
#define WDT_TO_250MS            (0<<WDP3) | (1<<WDP2) | (0<<WDP3) | (0<<WDP4)
#define WDT_TO_500MS            (0<<WDP3) | (1<<WDP2) | (0<<WDP3) | (1<<WDP4)
#define WDT_TO_1.0S             (0<<WDP3) | (1<<WDP2) | (1<<WDP3) | (0<<WDP4)
#define WDT_TO_2.0S             (0<<WDP3) | (1<<WDP2) | (1<<WDP3) | (1<<WDP4)
#define WDT_TO_4.0S             (1<<WDP3) | (0<<WDP2) | (0<<WDP3) | (0<<WDP4)
#define WDT_TO_8.0S             (1<<WDP3) | (0<<WDP2) | (0<<WDP3) | (1<<WDP4)

#define WDT_STOPPED		(1<<WDCE) | (0<<WDE) | (0<<WDIE)
#define WDT_RUN_INT		(1<<WDCE) | (0<<WDE) | (1<<WDIE)
#define WDT_RUN_RES		(0<<WDCE) | (1<<WDE) | (0<<WDIE)
#define WDT_RUN_INT_RES		(0<<WDCE) | (1<<WDE) | (1<<WDIE)

#endif // __WDT_PP_H
