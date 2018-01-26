/*
 *
 * Author: Andrew Doble
 * Creation date: 21.01.2018
 */

#ifndef _ExpandedPin_H
#define _ExpandedPin_H

#include <Arduino.h>

class ExpandedPin
{
private:
uint8_t _nPins;
uint8_t * _controllerPins;
uint8_t * _patternValues;


void construct(uint8_t nPins, uint8_t controllerPins[], uint8_t patternValues[]);


public:

/**
 * Class constructor
 *
 * param chipSelectPin The digital pin used a SPI slave select
 */
ExpandedPin(uint8_t controllerPinA, uint8_t controllerPinB, uint8_t patternValue1, uint8_t patternValue2);

ExpandedPin(uint8_t nPins, uint8_t controllerPins[], uint8_t patternValues[]);

void write(uint8_t value);

};

#endif
