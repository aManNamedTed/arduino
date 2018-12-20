#include <Servo.h>

Servo s1, s2, s3;

void setup() {
  s1.attach(13);
  s1.write(90);
  s2.attach(12);
  s2.write(90);
  s3.attach(11);
  s3.write(90);
  delay(1000);
}

void loop() {
  s1.write(110);
  s2.write(110);
  s3.write(110);
  delay(1000);
  s1.write(90);
  s2.write(90);
  s3.write(90);
  delay(1000);
}
