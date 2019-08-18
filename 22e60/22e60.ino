#include <dht.h>
#include <LiquidCrystal.h>
#include <String.h>
#include <time.h>
#include <stdlib.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
dht DHT;

char alphabet[] = {
  ' ', '1', '!', '2', '@', '3', '#', '4', '$', '5', //  0- 9
  '%', '6', '^', '7', '&', '8', '*', '9', '(', '5', // 10-19
  ')', '-', '_', '=', '+', ']' ,'}', '\\', '|', '[',// 20-29
  '{', 'p', 'P', 'o', 'O', 'i' ,'I', 'u', 'U', 'y', // 30-39
  'Y', 't', 'T', 'r', 'R', 'e' ,'E', 'w', 'W', 'q', // 40-49
  'Q', 'a', 'A', 's', 'S', 'd' ,'D', 'f', 'F', 'g', // 50-59
  'G', 'h', 'H', 'j', 'J', 'k' ,'K', 'l', 'L', ';', // 60-69
  ':', "'", '"', '/', '?', '.' ,'>', ',', '<', 'm', // 70-79
  'M', 'n', 'N', 'b', 'B', 'v' ,'V', 'c', 'C', 'x', // 80-89
  'X', 'z', 'Z'                                     // 90-93
};
int echoPin = A1;
int trigPin = A0;
int humidityPin = 13;
int pwGenPin = 6;
int pwGenPinState = 0;
int buttons[] = {A2, A3, A4, A5};
int buttonStates[] = {0, 0, 0, 0};
int leds[] = {10, 9, 8, 7};
int ledStates[] = {0, 0, 0, 0};
int n = (sizeof(buttonStates) / sizeof(buttonStates[0]));
const int TETRAD = 9999; // max value for a group of for digits

// guarantees a number between 1000 and 9999 (4 digits)
int expandSeedElement(int element, int i) {
  while(element <= TETRAD) {
    element += 1;
    element += i;
    element <<= 1;
  }
  while(element > TETRAD) {
    element >>= 1;
  }
  return element;
}

// convert the expanded seed element (1000 - 9999) into a base-93 tetrad
String getTetradFromSeedElement(int element) {
  int currNum = 0;
  int currRandCharIndex = 0;
  String tetrad = "";

  while(element > 0) {
    currNum = element % 10;
    element /= 10;  
    for(int i = 0; i < currNum; i++) {
      currRandCharIndex = random(93);  
    }
    tetrad += alphabet[currRandCharIndex];
  }
  return tetrad;
}

// given input from multiple source(s), create a 32 character string from a base-93 alphabet
String generatePW(int dist, int temp, int humi, int r, int g, int b, int y, int checkSum) {
  int seed[] = {dist, temp, humi, r, g, b, y, checkSum};
  String pw = "";
  for(int i = 0; i < (sizeof(seed) / sizeof(seed[0])); i++) {  
    seed[i] = expandSeedElement(seed[i], i);
    pw += getTetradFromSeedElement(seed[i]);
  }

  return pw;
}

void setup() {
  randomSeed(0);
  lcd.begin(16, 2);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  Serial.begin(9600);
  for(int i = 0; i < n; i++) {
    pinMode(leds[i], OUTPUT);
    pinMode(buttons[i], INPUT);
  }
}

void loop() {
  // ultrasonic setup
  digitalWrite(trigPin, LOW);
  delay(2);
  digitalWrite(trigPin, HIGH); 
  delay(10);
  digitalWrite(trigPin, LOW);

  long duration = pulseIn(echoPin, HIGH);
  int check = DHT.read11(humidityPin);
  int temp = DHT.temperature;
  int humi = DHT.humidity;
  int dist = duration * 0.034 / 2;
  int checkSum = 0;
  String pw = "";

  for(int i = 0; i < n; i++) {
    buttonStates[i] = digitalRead(buttons[i]);

    if(buttonStates[i] == HIGH) {
      if(ledStates[i] == false) {
        ledStates[i] = true;
        digitalWrite(leds[i], HIGH);
      } else {
        ledStates[i] = false;
        digitalWrite(leds[i], LOW);  
      }
      delay(111);
    }
  }

  pwGenPinState = digitalRead(pwGenPin);
  if(pwGenPinState == HIGH) {
    // checkSum is sum of all raw input values
    checkSum = dist + temp + humi + ledStates[3] + ledStates[2] + ledStates[1] + ledStates[0];
    pw = generatePW(dist, temp, humi, ledStates[3], ledStates[2], ledStates[1], ledStates[0], checkSum);

    for(int i = 0; i < pw.length(); i++) {
      lcd.print(pw[i]);
      if(i == 15) {
        // set cursor to next 16char line of lcd for full pw display
        lcd.setCursor(0, 1); 
      }
      // delay between char lcd prints to have a cascading visual
      delay(10); 
    }
    // reset cursor to (0,0) on LCD for next password generation
    lcd.setCursor(0,0);

    // set delay between button presses so there is only 1 pw generated per press
    delay(111);
  }
}
