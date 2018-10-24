// Buzzer music note library using Arduino's Tone() function

// Octave-specific note declarations to be defined later (for readability)
const unsigned int BN0; // Note: B-natural 0 is the lowest perceptible note 
const unsigned int CN1, CS1, DN1, DS1, EN1, FN1, FS1, GN1, GS1, AN1, AS1, BN1;
const unsigned int CN2, CS2, DN2, DS2, EN2, FN2, FS2, GN2, GS2, AN2, AS2, BN2;
const unsigned int CN3, CS3, DN3, DS3, EN3, FN3, FS3, GN3, GS3, AN3, AS3, BN3;
const unsigned int CN4, CS4, DN4, DS4, EN4, FN4, FS4, GN4, GS4, AN4, AS4, BN4;
const unsigned int CN5, CS5, DN5, DS5, EN5, FN5, FS5, GN5, GS5, AN5, AS5, BN5;
const unsigned int CN6, CS6, DN6, DS6, EN6, FN6, FS6, GN6, GS6, AN6, AS6, BN6;
const unsigned int CN7, CS7, DN7, DS7, EN7, FN7, FS7, GN7, GS7, AN7, AS7, BN7;
const unsigned int CN8, CS8, DN8, DS8;
const unsigned int ONE_SECOND = 1000;
const unsigned int PAUSE = 50;
const unsigned int W =  1; // Whole note
const unsigned int H =  2; // Half note
const unsigned int Q =  4; // Quarter note
const unsigned int E =  8; // Eighth note
const unsigned int S = 16; // Sixteenth note

int buzzerPin = 40;

void play(const unsigned int note, unsigned int noteDuration);
void setup()
{
  pinMode(buzzerPin, OUTPUT);
}

void loop()
{
  play(DN3, E); play(DN3, E); play(DN3, E); 
  play(GN3, W);
  play(DN4, W); 
  play(CN4, E); play(BN3, E); play(AN3, E);
  play(GN4, H); play(DN4, Q);
  play(CN4, E); play(BN3, E); play(AN3, E);
  play(GN4, H); play(DN4, Q);
  play(CN4, E); play(BN3, E); play(CN3, E);
  play(AN3, H);

  play(DN3, E); play(DN3, E);
  play(GN3, H); 
  play(DN4, H);
  play(CN4, E); play(BN3, E); play(AN3, E);
  play(GN4, H); play(DN4, Q);
  play(CN4, E); play(BN3, E); play(AN3, E);
  play(GN4, H); play(DN4, Q);
  play(CN4, E); play(BN3, E); play(CN3, E);
  play(AN3, H);
}

void play(const unsigned int note, unsigned int noteDuration)
{
  //e.g. quarter note = 1000 / 4, eighth note = 1000/8, etc.
  noteDuration = SECOND / noteDuration;
  tone(buzzerPin, note, noteDuration);
  delay(PAUSE);
  noTone(buzzerPin);
}

// 0th octave note frequenc(ies)
BN0 = 31;    

// 1st octave note frequencies
CN1 = 33; CS1 = 35; DN1 = 37; DS1 = 39; EN1 = 41; FN1 = 44; 
FS1 = 46; GN1 = 49; GS1 = 52; AN1 = 55; AS1 = 58; BN1 = 62;

// 2nd octave note frequencies
CN2 = 65; CS2 = 69; DN2 = 73;  DS2 = 78;  EN2 = 82;  FN2 = 87;
FS2 = 93; GN2 = 98; GS2 = 104; AN2 = 110; AS2 = 117; BN2 = 123;

// 3rd octave note frequencies
CN3 = 131; CS3 = 139; DN3 = 147; DS3 = 156; EN3 = 165; FN3 = 175;
FS3 = 185; GN3 = 196; GS3 = 208; AN3 = 220; AS3 = 233; BN3 = 247;

// 4th octave note frequencies
CN4 = 262; CS4 = 277; DN4 = 294; DS4 = 311; EN4 = 330; FN4 = 349;
FS4 = 370; GN4 = 392; GS4 = 415; AN4 = 440; AS4 = 466; BN4 = 494;

// 5th octave note frequencies
CN5 = 523; CS5 = 554; DN5 = 587; DS5 = 622; EN5 = 659; FN5 = 698;
FS5 = 740; GN5 = 784; GS5 = 831; AN5 = 880; AS5 = 932; BN5 = 988;

// 6th octave note frequencies
CN6 = 1047; CS6 = 1109; DN6 = 1175; DS6 = 1245; EN6 = 1319; FN6 = 1397;
FS6 = 1480; GN6 = 1568; GS6 = 1661; AN6 = 1760; AS6 = 1865; BN6 = 1976;

// 7th octave note frequencies
CN7 = 2093; CS7 = 2217; DN7 = 2349; DS7 = 2489; EN7 = 2637; FN7 = 2794;
FS7 = 2960; GN7 = 3136; GS7 = 3322; AN7 = 3520; AS7 = 3729; BN7 = 3951;

// 8th octave note frequencies
CN8 = 4186; CS8 = 4435; DN8 = 4699; DS8 = 4978;
