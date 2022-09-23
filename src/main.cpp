#include <Arduino.h> 
 
void setup() { 
  // configure the USB serial monitor 
  Serial.begin(115200); 
} 
 
void loop() { 
  int iVal; 
 
  // read digitized value from the D1 Mini's A/D convertor 
  iVal = analogRead(A0); 
 
  // print value to the USB port 
  Serial.println("Digitized Value = " + String(iVal)); 
 
  // wait 0.5 seconds (500 ms) 
  delay(500); 
}