#ifndef __GPIO_H
#define __GPIO_H
#include <avr/io.h>
#include "attiny45.h"

void port_setDir(uint8_t pins);
void setPins(uint8_t pins);
void clearPins(uint8_t pins);
uint8_t getPortVal(void);
uint8_t getPinVal(uint8_t);
void togglePin(uint8_t pin);

#endif // __GPIO_H
