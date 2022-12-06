#include <Wire.h>

char incoming_value = 0;

void setup() {
  Wire.begin();
  Serial.begin(9600);

  Wire.requestFrom(5,10);

  while(Wire.available())
  {
    char c = Wire.read();
    Serial.print(c);  
  }
}

void loop() {
  if(Serial.available() > 0)
  {
    incoming_value = Serial.read();
    Serial.print(incoming_value); 
    Serial.print("\n");

  }

  

}
