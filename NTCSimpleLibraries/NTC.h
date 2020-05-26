//Bragatto Davide, 25/05/2020 20:03, libreriaNTC

#ifndef NTC_h
#define NTC_h
#include "Arduino.h"

class NTC
{
  private:
    int pinNtc;
    int tempReading;
    float tempK;
    float tempC;
    float tempF;
    float tempVolts;
  public:
    void initialize(int a);
    float tempCelsius(int b);
    float tempFahrenheit(int c);
    float tempKelvin(int d);
    float valueVolts(int e);
};

#endif

