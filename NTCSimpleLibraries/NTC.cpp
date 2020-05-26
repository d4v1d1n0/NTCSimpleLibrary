//Bragatto Davide, 25/05/2020 20:03, libreriaNTC

#include "Arduino.h"
#include "NTC.h"

void NTC::initialize(int a)
{
  pinNtc=a;
}

float NTC::tempCelsius(int b)
{
  tempReading=analogRead(pinNtc);
  tempK = log(10000.0 * ((1023.0 / tempReading - 1)));
  tempK = 1 / (0.001129148 + (0.000234125 + (0.0000000876741 * tempK * tempK )) * tempK );
  tempC = tempK - 273.15;
  delay(b);
  return tempC;
}

float NTC::tempFahrenheit(int c)
{
  tempReading=analogRead(pinNtc);
  tempK = log(10000.0 * ((1023.0 / tempReading - 1)));
  tempK = 1 / (0.001129148 + (0.000234125 + (0.0000000876741 * tempK * tempK )) * tempK );
  tempC = tempK - 273.15;
  tempF = (tempC * 9.0)/ 5.0 + 32.0;
  delay(c);
  return tempF;
}

float NTC::tempKelvin(int d)
{
  tempReading=analogRead(pinNtc);
  tempK = log(10000.0 * ((1023.0 / tempReading - 1)));
  tempK = 1 / (0.001129148 + (0.000234125 + (0.0000000876741 * tempK * tempK )) * tempK );
  delay(d);
  return tempK;
}

float NTC::valueVolts(int e)
{
  tempReading = analogRead(pinNtc);
  tempVolts = tempReading * 5.0 / 1023.0;
  delay(e);
  return tempVolts;
}

