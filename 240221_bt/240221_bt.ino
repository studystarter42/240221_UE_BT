#include <SoftwareSerial.h> 
//RXD2, TXD3
SoftwareSerial BTSerial(1, 2);

//SoftwareSerial BTSerial(7, 8);             // HC-06모듈 7=TXD , 8=RXD 핀 선언 

void setup()
{
  BTSerial.begin(9600);
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
  delay(500); // 1초 딜레이
}