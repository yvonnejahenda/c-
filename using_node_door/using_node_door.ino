
#include<Servo.h>
Servo myservo;



void setup() {
  Serial.begin(19200);
  myservo.attach(13);

}

void loop() {
  if (Serial.available()){
    char ch=Serial.read();
    Serial.write(ch);
    if (ch=='1'){
      myservo.write(180);
    }
    if(ch == '0'){
      myservo.write(0);
    }
  }
  

}
