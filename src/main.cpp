// DEMO Program to start a soft Access Point Mode, returns true if successfull
#include <M5Stack.h>
#include <WiFi.h>

// 
void setup() {
  M5.begin();
  Serial.begin(115200);
  M5.Power.begin();
  M5.Lcd.setTextSize(2);
}

void loop() {
  if (WiFi.softAP("M5Stack_AP", "12345678", 1, 0, 4)) {
    M5.Lcd.println("WiFi AP is set up");
    M5.Lcd.println(WiFi.softAPIP());
  } else {
    M5.Lcd.println("WIFi AP is down");
  }
  delay(1000);
}