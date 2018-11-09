const int BUTTON_PIN = 42;    
const int CANDLE_FLICKER = 55; // delay in milliseconds
const int START_PIN = 5; // left-most candle pin
const int END_PIN = 13;  // leader candle pin
const int LOWER_BOUND_FLICKER = 125;
const int UPPER_BOUND_FLICKER = 256;
const int LEDS = 9;
int led[LEDS];
int ledState[LEDS];
int candlesOn = 0;

void setup() {
  pinMode(BUTTON_PIN, INPUT);

  for(int i = 0; i < LEDS; i++)
  {
    led[i] = START_PIN + i;
    pinMode(led[i], OUTPUT);

    if(START_PIN + i == END_PIN) {
      ledState[i] = true; // turn leader candle on
    }
    else
    {
      ledState[i] = false;
    }
  }
}

void loop() {
  // flicker only the lights which state is true
  for(int i = 0; i < LEDS; i++)
  {
    if(ledState[i] == true)
    {
      analogWrite(led[i], random(LOWER_BOUND_FLICKER, UPPER_BOUND_FLICKER));
    }
  }
  delay(CANDLE_FLICKER);
  
  // check the state of the button
  bool buttonState = digitalRead(BUTTON_PIN);
  delay(111); // helps with keeping button presses to turning on only one light

  //check if button is pressed; if it is, turn the next candle on
  if(buttonState == HIGH && candlesOn == 0)
  {
    ledState[candlesOn] = true;
    candlesOn = 1;
  }
  else if(buttonState == HIGH && candlesOn == 1)
  {
    ledState[candlesOn] = true;
    candlesOn = 2;
  }
  else if(buttonState == HIGH && candlesOn == 2)
  {
    ledState[candlesOn] = true;
    candlesOn = 3;
  }
  else if(buttonState == HIGH && candlesOn == 3)
  {
    ledState[candlesOn] = true;
    candlesOn = 4;
  }
  else if(buttonState == HIGH && candlesOn == 4)
  {
    ledState[candlesOn] = true;
    candlesOn = 5;
  }
  else if(buttonState == HIGH && candlesOn == 5)
  {
    ledState[candlesOn] = true;
    candlesOn = 6;
  }
  else if(buttonState == HIGH && candlesOn == 6)
  {
    ledState[candlesOn] = true;
    candlesOn = 7;
  }
  else if(buttonState == HIGH && candlesOn == 7)
  {
    ledState[candlesOn] = true;
    candlesOn = 8;
  }
  else if(buttonState == HIGH && candlesOn == 8)
  {
    // 0 to (LEDS - 1) because we need to keep leader candle on,
    // but also leader candle needs to be included in the ledState array to flicker
    for(int i = 0; i < LEDS - 1; i++)
    {
      ledState[i] = false;    // update led state array
      analogWrite(led[i], 0); // turn off led[i]
    }
    candlesOn = 0; // update candlesOn (excluding leader candle)
  }
}
