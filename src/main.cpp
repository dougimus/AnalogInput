#include <Arduino.h> 

// I, Douglas Ward, 000333587, certify that all code submitted is my own work; 
// that I have not copied it from any other source. I also certify that I have not allowed my work to be copied by others.

void setup() { 
  // configure the USB serial monitor 
  Serial.begin(115200); 
} 
 
void loop() { 
  int iVal; 
 
  // read digitized value from the D1 Mini's A/D convertor 
  iVal = analogRead(A0);

  //do conversion to temperature float
  float temperature = iVal * (50 / 1023.0);
  String judgement = "";
  if(temperature < 10) {
    judgement = "Cold!";
  }
  else if (temperature >= 10 && temperature < 15)
  {
    judgement = "Cool";
  }
  else if (temperature >= 15 && temperature < 25)
  {
    judgement = "Perfect";
  }
  else if (temperature >= 25 && temperature < 30)
  {
    judgement = "Warm";
  }
  else if (temperature >= 30 && temperature < 35)
  {
    judgement = "Hot";
  }
  else if (temperature > 35)
  {
    judgement = "Too Hot!";
  }
  
  // print value to the USB port 
  Serial.println("Digitized Value of " + String(iVal) + " is equivalent to a temperature input of " + String(temperature) + " Deg. C, which is " + judgement); 
 
  // wait 2 seconds (2000 ms) 
  delay(2000); 
}
