 
 gv uvoid setup() 
 {
 Serial.begin(19200);
pinMode(13,OUTPUT);
digitalWrite,(13,LOW);

}

void loop(){
if(Serial.available()>0){
Serial.print(Serial.read());

    char ch = Serial.read();
 Serial.print(ch);
 
  
    if (ch=='1'){
      digitalWrite(13,HIGH);
    }

    if(ch=='0'){
      digitalWrite(13,LOW);
      
    }
 
  }
}
