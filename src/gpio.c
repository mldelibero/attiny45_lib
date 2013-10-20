#include "gpio.h"
#include <avr/io.h>

void port_setDir(uint8_t pins) {
	DDRB = pins;
}

void setPins(uint8_t pins) {
	PORTB |= pins;
}

void clearPins(uint8_t pins) {
	PORTB |= !pins;
}

uint8_t getPortVal(void) {
	return PINB;
}

uint8_t getPinVal(uint8_t pin) {
	return PINB & pin;
}
