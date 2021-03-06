/*
  Morse.cpp - Library for flashing Morse code.
*/

#include "Arduino.h"
#include "Morse.h"

Morse::Morse(int pin)
{
  pinMode(pin, OUTPUT);
  _pin = pin;
}

void Morse::dot()
{
  digitalWrite(_pin, HIGH);
  delay(250);
    digitalWrite(_pin, LOW);
  delay(250);
}

void Morse::dash()
{
  digitalWrite(_pin, HIGH);
  delay(500);
    digitalWrite(_pin, LOW);
  delay(250);
}

void Morse::hold()
{
  delay(500);
}