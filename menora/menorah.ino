const int BUTTON_PIN = 42;    
const int CANDLE_FLICKER = 55; // delay in milliseconds
const int START_PIN = 5; // left-most candle pin
const int END_PIN = 13;  // leader candle pin
const int LOWER_BOUND_FLICKER = 125;
const int UPPER_BOUND_FLICKER = 256;
const int LEDS = 9;
const int FLICKER_LED_LIMIT = 6; // 6 candles flicker per cycle; look best imo
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
  // keep the lights flickering in the meantime
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
  delay(111);
  //check if button is on; if it is, turn the next candle on
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
    // 0 to LEDS - 1 because need to keep leader candle on,
    // but needs to be included in the ledState array to flicker
    // maybe i should use 
    for(int i = 0; i < LEDS - 1; i++)
    {
      ledState[i] = false;
      analogWrite(led[i], 0);
    }
    candlesOn = 0;
  }
}
