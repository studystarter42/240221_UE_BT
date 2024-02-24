#include <SoftwareSerial.h>

SoftwareSerial BTSerial(4, 3); 

void setup() {
  Serial.begin(9600);
  BTSerial.begin(9600);
  Serial.println("ATcommand");  //ATcommand Start
}

void loop() {
  if (BTSerial.available())
    Serial.write(BTSerial.read());
  if (Serial.available())
    BTSerial.write(Serial.read());
}