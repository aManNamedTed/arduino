#include <dht.h>
#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
dht DHT;

int echoPin = A1;
int trigPin = A0;
int buttons[] = {A2, A3, A4, A5};
int buttonStates[] = {0, 0, 0, 0};
int leds[] = {10, 9, 8, 7};
int ledStates[] = {0, 0, 0, 0};
int humidityPin = 13;
int pwGenPin = 6;
int pwGenPinState = 0;
int n = (sizeof(buttonStates) / sizeof(buttonStates[0]));

void setup() {
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
  int check = DHT.read11(humidityPin);
  Serial.println(DHT.temperature);
  Serial.println(DHT.humidity);
  digitalWrite(trigPin, LOW);
  delay(10);
  digitalWrite(trigPin, HIGH);
  delay(10);
  digitalWrite(trigPin, LOW);

  long duration = pulseIn(echoPin, HIGH);
  int distance = duration * 0.034 / 2;
  Serial.print("Distance: ");
  Serial.println(distance);
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
    lcd.print("abz]q'w/e.>;<][dSe5%47&83#9$)*&");  
  }
}
