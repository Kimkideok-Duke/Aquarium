#include <SoftwareSerial.h>


int rxPin = 2;    // rx 핀을2번으로 지정
int txPin = 3;    // tx 핀을3번으로 지정
SoftwareSerial BTSerial(rxPin,txPin);   //블루투스 시리얼 핀 설정

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);                    // 9600 속도로 시리얼 통신 시작
  BTSerial.begin(9600);         // 블루투스 통신 속도를 9600으로 설정
}

void loop() {
  // put your main code here, to run repeatedly:
  BTSerial.println("hi");
  delay(500);
}
