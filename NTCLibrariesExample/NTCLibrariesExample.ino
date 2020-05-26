#include <NTC.h>
NTC ntc;

void setup() {
  Serial.begin(9600);

}

void loop() {
  ntc.initialize(A3);
  Serial.print(ntc.tempCelsius(0));
  Serial.print(" C - ");
  Serial.print(ntc.tempFahrenheit(0));
  Serial.print(" F - ");
  Serial.print(ntc.tempKelvin(0));
  Serial.print(" K - ");
  Serial.print(ntc.valueVolts(0));
  Serial.println(" V");
  delay(1000);

}
