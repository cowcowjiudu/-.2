/*Morse.h - Library for flashing Morse code. Created by Damo wang, November 20, 2015. Released into the public domain. */
#ifndef Morse_h 
#define Morse_h 
#include "Arduino.h" 
class Morse
 { public: Morse(int pin);
  void dot(); 
  void dash(); 
  private:
   int _pin; 
   };
#endif
