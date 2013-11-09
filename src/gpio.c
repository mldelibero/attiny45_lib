#include "gpio.h"
#include <avr/io.h>

// Use group PIN_SOURCE_x 
void port_setDir(uint8_t pins) {
	DDRB = pins;
}

// Use group PIN_SOURCE_x 
void setPins(uint8_t pins) {
	PORTB |= pins;
}

// Use group PIN_SOURCE_x 
void clearPins(uint8_t pins) {
	PORTB &= ~pins;
}

uint8_t getPortVal(void) {
	return PINB;
}

// Use group PIN_SOURCE_x 
uint8_t getPinVal(uint8_t pin) {
	return PINB & pin;
}

// Use PBx from iotnx5.h
void togglePin(uint8_t pin) {
	PORTB ^= pin;
}

