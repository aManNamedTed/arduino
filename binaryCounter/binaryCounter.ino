int bit0 = 2;
int bit1 = 3;
int bit2 = 4;
int bit3 = 5;
int bit4 = 6;
int bit5 = 7;
int bit6 = 8;
int bit7 = 9;

void setup() {
  pinMode(bit0, OUTPUT);
  pinMode(bit1, OUTPUT);
  pinMode(bit2, OUTPUT);
  pinMode(bit3, OUTPUT);
  pinMode(bit4, OUTPUT);
  pinMode(bit5, OUTPUT);
  pinMode(bit6, OUTPUT);
  pinMode(bit7, OUTPUT);
}

void loop() {
  const int TWO7 = 128; const int TWO6 = 64; const int TWO5 = 32;
  const int TWO4 =  16; const int TWO3 =  8; const int TWO2 =  4;
  const int TWO1 =   2; const int TWO0 =  1; //TWO0 is actually the best name for this variable
  for(int i = 0; i < 255; i++)
  {
    int day = i;
    while(day > 0)
    {
      if(day - TWO7 > 0)
      {
        digitalWrite(bit7, HIGH);
        day -= TWO7;
      }
      
      if(day - TWO6 > 0)
      {
        digitalWrite(bit6, HIGH);
        day -= TWO6;
      }
      
      if(day - TWO5 > 0)
      {
        digitalWrite(bit5, HIGH);
        day -= TWO5;
      }
      
      if(day - TWO4 > 0)
      {
        digitalWrite(bit4, HIGH);
        day -= TWO4;
      }
      
      if(day - TWO3 > 0)
      {
        digitalWrite(bit3, HIGH);
        day -= TWO3;
      }
      
      if(day - TWO2 > 0)
      {
        digitalWrite(bit2, HIGH);
        day -= TWO2;
      }
      
      if(day - TWO1 > 0)
      {
        digitalWrite(bit1, HIGH);
        day -= TWO1;
      }
      
      if(day - TWO0 > 0)
      {
        digitalWrite(bit0, HIGH);
      }
      day = 0;
      
    }
    delay(500);
    bitReset();
  }
}

void bitReset()
{
  digitalWrite(bit0, LOW);
  digitalWrite(bit1, LOW);
  digitalWrite(bit2, LOW);
  digitalWrite(bit3, LOW);
  digitalWrite(bit4, LOW);
  digitalWrite(bit5, LOW);
  digitalWrite(bit6, LOW);
  digitalWrite(bit7, LOW);
}

