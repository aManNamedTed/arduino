const int trigPin = 2;
const int echoPin = 3;
int ledPinArr[5];
int startPin = 9;
int numLeds = 5;
int triggerDistance = 25;

long duration;
int distance;

void setup() {
  for(int i = 0; i < numLeds; i++) { ledPinArr[i] = i + startPin;   }
  for(int i = 0; i < numLeds; i++) { pinMode(ledPinArr[i], OUTPUT); }
  
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  Serial.begin(9600);
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
    for(int i = 0; i < numLeds; i++) { digitalWrite(ledPinArr[i], HIGH); }                    
  }
  else
  {
    for(int i = 0; i < numLeds; i++) { digitalWrite(ledPinArr[i], LOW); }                    
  }
}
