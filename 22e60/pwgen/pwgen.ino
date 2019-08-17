#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
int leds[] = {10, 9, 8, 7};
int buttons[] = {A2, A3, A4, A5};
int buttonStates[] = {0, 0, 0, 0};
int n = (sizeof(buttonStates) / sizeof(buttonStates[0]));
void setup() {
  // put your setup code here, to run once:
  //lcd.begin(16, 2);
  for(int i = 0; i < n; i++) {
    pinMode(leds[i], OUTPUT);
    pinMode(buttons[i], INPUT);
  }
}

void loop() {
  for(int i = 0; i < n; i++) {
    buttonStates[i] = digitalRead(buttons[i]);

    if(buttonStates[i] == HIGH or buttonStates[i]) {
      digitalWrite(leds[i], HIGH);
      buttonStates[i] = 1;
    } else {
      digitalWrite(leds[i], LOW);
      buttonStates[i] = 0;
    }
  }
  
  //lcd.print("");
  /*
  delay(500);
  lcd.clear();
  delay(500);
  */
}
