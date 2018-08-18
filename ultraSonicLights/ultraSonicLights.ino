const int trigPin = 2;
const int echoPin = 3;
int ledPinArr[5];
int startPin = 9;
int numLeds = 5;
long duration;
int distance;
int triggerDistance = 250; // 250 centimeters == ~10 inches

void setup() {
  for(int i = 0; i < numLeds; i++) { 
    ledPinArr[i] = i + startPin;
  } // init led pin array
  
  for(int i = 0; i < numLeds; i++) { 
    pinMode(ledPinArr[i], OUTPUT); 
  } // set pin mode of led array
  
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}

void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);
  distance = duration * 0.034 / 2;

  if(distance < triggerDistance)
  {
    for(int i = 0; i < numLeds; i++) { 
      digitalWrite(ledPinArr[i], HIGH); 
    }  
    delay(5000); // remain on for at least 5 seconds after stimulus ends
  }
  else
  {
    for(int i = 0; i < numLeds; i++) { 
      digitalWrite(ledPinArr[i], LOW); 
    }                   
  }
}
