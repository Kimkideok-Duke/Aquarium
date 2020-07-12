#include <SoftwareSerial.h>

int bluetoothRx = 2;
int bluetoothTx = 3;

SoftwareSerial bluetooth(bluetoothRx, bluetoothTx);
int receiveData;
int LED_01 = 10;

void setup() {
  pinMode(LED_01, OUTPUT);
  digitalWrite(LED_01, LOW);

  Serial.begin(9600);
  bluetooth.begin(9600);
}

void loop() {
  if(bluetooth.available() > 0){
    
    receiveData = bluetooth.read();
    Serial.print("receive data: ");
    Serial.println(receiveData);
    
    switch(receiveData){
      
      case 1:
      digitalWrite(LED_01, HIGH);
      break;
      
      case 2:
      digitalWrite(LED_01, LOW);
      break;
      
      }
    }
}
