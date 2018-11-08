




#include <LiquidCrystal.h>
#include <Wire.h>
#include <DS3231.h>

DS3231 rtc(SDA, SCL);
LiquidCrystal lcd (1,2,4,5,6,7);


void setup() {
  // put your setup code here, to run once:
  rtc.begin();
  lcd.begin(16,2);
  Serial.begin(19200);
  

}

void loop() {
  // put your main code here, to run repeatedly:
  lcd.setCursor(0,0);
  lcd.print("Time: ");
//  lcd.print(rtc.getTimeStr());
  Serial.println(rtc.getTimeStr());

  lcd.setCursor(0,1);
  lcd.print("Date: ");
//  lcd.print(rtc.getDateStr());
  Serial.println(rtc.getDateStr());
  Serial.println();
  delay(1000);

}

