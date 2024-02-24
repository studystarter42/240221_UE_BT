#include <SoftwareSerial.h> 
//RXD3, TXD4
SoftwareSerial BTSerial(4, 3);


void setup()
{
  BTSerial.begin(115200);
}

char ch = 'a';

void loop()
{
  if (BTSerial.available())
  {
    BTSerial.write(ch); // HC-06 모듈로 "A"를 송신
    if (ch == 'z')
      ch = 'a';
    else
      ch++;
  }
  delay(500);
}