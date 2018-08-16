#include <LiquidCrystal.h>

LiquidCrystal lcd(12,11,5,4,3,2);

String password = "12345";  // password of super secret hackz0r society 
String attempt = "";        
int attemptCounter = 1;
bool btnStateArr[5];
int btnPinArr[5];
int startPin = 6;
int numButts = 5;           // amount of buttons

void setup() {
  Serial.begin(9600);  // debugging
  lcd.begin(16,2);     // lcd screen
  pinMode(A0, OUTPUT); // red LED
  pinMode(A1, OUTPUT); // green LED

  // initialize pin and pinState arrays 
  for(int i = 0; i < numButts; i++) { btnPinArr[i] = i + startPin;         }
  for(int i = 0; i < numButts; i++) { btnStateArr[i] = false;              }
  for(int i = 0; i < numButts; i++) { pinMode(btnPinArr[i], INPUT_PULLUP); }
}

void loop() {
  for(int i = 0; i < numButts; i++) {    
    if(!btnStateArr[i]) {
      if(digitalRead(btnPinArr[i]) == LOW) {
        // keep screen *seemingly* static while there has been no input
        if(attempt.length() == 0) {
          lcd.clear();
          lcd.print("PW: ");
        }

        // because above is in own if statement
        // allows for repeated input of same button
        btnStateArr[i] = true;
      }
    }
    else {
      if(digitalRead(btnPinArr[i]) == HIGH) {
        attempt += String(i + 1);
        lcd.clear();
        lcd.print("PW: " + attempt);     
        btnStateArr[i] = false;
      }
    }
  }
  
  if(attempt.length() == password.length())
  {
    // set next print to be on next line
    lcd.setCursor(0,1);
     
    // open Serial Monitor to see attempts
    Serial.println("Attempt " + String(attemptCounter) + ": " + attempt);
    
    if(password == attempt) {
      lcd.print("Access Granted");
      digitalWrite(A1, HIGH); // green LED on
    }
    else {
      lcd.print("Try again");
      digitalWrite(A0, HIGH); // red LED on
    }

    attemptCounter += 1;
    clearAll();
  }
}

void clearAll() {
    delay(1500);
    digitalWrite(A1, LOW);
    digitalWrite(A0, LOW);
    attempt = "";
    lcd.clear();  
}

