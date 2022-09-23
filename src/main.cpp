#include <Arduino.h> 
 
void setup() { 
  // configure the USB serial monitor 
  Serial.begin(115200); 
} 
 
void loop() { 
  int iVal; 
 
  // read digitized value from the D1 Mini's A/D convertor 
  iVal = analogRead(A0);

  //do conversion to voltage float
  float voltage = iVal * (3.3 / 1023.0);
 
  // print value to the USB port 
  Serial.println("Digitized Value of " + String(iVal) + " is equivalent to an Analog Voltage = " + String(voltage) + "V"); 
 
  // wait 0.5 seconds (500 ms) 
  delay(500); 
}