#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
int buttonPin = 46;
int ledPin = 13;

int buttonState = 0;
void setup() {
  // put your setup code here, to run once:
  lcd.begin(16, 2);
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);
}

void loop() {
  buttonState = digitalRead(buttonPin);

  if(buttonState == HIGH) {
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
    
  }
  
  lcd.print("");
  /*
  delay(500);
  lcd.clear();
  delay(500);
  */
}
