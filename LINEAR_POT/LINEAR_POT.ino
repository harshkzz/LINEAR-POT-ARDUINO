#define pot_pin A0
int p_val;
int new_val;
#include <Servo.h>
Servo s1;
#define ser_pin 5

void setup(){
  Serial.begin(9600);
  s1.attach(ser_pin);
  s1.write(180);
  delay(1000);
  s1.write(0);
}

void loop(){
  p_val = analogRead(pot_pin);
  new_val = map(p_val, 0, 1023, 0, 180);
  s1.write(new_val);
  delay(100);
}






//
//
//
//
// 
//
