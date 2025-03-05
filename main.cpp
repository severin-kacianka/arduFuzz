#include <Arduino.h>
#line 1 "/home/kacianka/Arduino/blink/sketch_mar5a/sketch_mar5a.ino"
#line 1 "/home/kacianka/Arduino/blink/sketch_mar5a/sketch_mar5a.ino"
void setup();
#line 6 "/home/kacianka/Arduino/blink/sketch_mar5a/sketch_mar5a.ino"
void loop();
#line 1 "/home/kacianka/Arduino/blink/sketch_mar5a/sketch_mar5a.ino"
void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED_BUILTIN, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(1000);                      // wait for a second
  digitalWrite(LED_BUILTIN, LOW);   // turn the LED off by making the voltage LOW
  delay(500);  
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000);
  digitalWrite(LED_BUILTIN, LOW);
  delay(500);  
  digitalWrite(LED_BUILTIN, HIGH);
  delay(500);
  digitalWrite(LED_BUILTIN, LOW);
  delay(500);  
  digitalWrite(LED_BUILTIN, HIGH);
  delay(500);
  digitalWrite(LED_BUILTIN, LOW);
  delay(500);  
  digitalWrite(LED_BUILTIN, HIGH);
  delay(500);
  digitalWrite(LED_BUILTIN, LOW);
}

