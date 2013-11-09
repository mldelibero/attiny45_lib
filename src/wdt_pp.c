#include "wdt_pp.h"
#include <avr/io.h>

void init_wdt(wdt_initStruct_t wdt_initStruct) {
	WDTCR = wdt_initStruct.tmr_presc | wdt_initStruct.tmr_config;
} // end - void init_wdt(wdt_initStruct_t)

