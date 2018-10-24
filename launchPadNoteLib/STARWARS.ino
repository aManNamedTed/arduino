/*
  Grove - Music Note Library
    > Uses tone() function to simulate music note generation.

  Dec 2012: Created for Educational BoosterPack
    buzzer Pin = 19

  Dec 2013: Modified for Educational BoosterPack MK II
    buzzer Pin = 40

  Jun 2016: Modified for Grove Buzzer
    buzzer Pin = 40

  Oct 2018: Restructuring by David Amante; inspired by Dung Dang
*/

// 0th octave note frequency
// Note: frequencies below 31Hz are impossible to generate for this particular buzzer[2]
const unsigned int BN0;
BN0 = 31;

// 1st octave note frequencies
const unsigned int CN1, CS1, DN1, DS1, EN1, FN1, FS1, GN1, GS1, AN1, AS1, BN1;
CN1 = 33; CS1 = 35; DN1 = 37; DS1 = 39; EN1 = 41; FN1 = 44; 
FS1 = 46; GN1 = 49; GS1 = 52; AN1 = 55; AS1 = 58; BN1 = 62;

// 2nd octave note frequencies
const unsigned int CN2, CS2, DN1, DS1, EN1, FN1, FS1, GN1, GS1, AN1, AS1, BN1;
CN2 = 65; CS2 = 69; DN2 = 73;  DS2 = 78;  EN2 = 82;  FN2 = 87;
FS2 = 93; GN2 = 98; GS2 = 104; AN2 = 110; AS2 = 117; BN2 = 123;
const unsigned int CN3, CS3, DN1, DS1, EN1, FN1, FS1, GN1, GS1, AN1, AS1, BN1;
#define C3  131
#define CS3 139
#define D3  147
#define DS3 156
#define E3  165
#define F3  175
#define FS3 185
#define G3  196
#define GS3 208
#define A3  220
#define AS3 233
#define B3  247
const unsigned int CN4, CS4, DN1, DS1, EN1, FN1, FS1, GN1, GS1, AN1, AS1, BN1;
#define C4_1 260
#define C4  262
#define CS4 277
#define D4  294
#define DS4 311
#define E4  330
#define F4  349
#define FS4 370
#define G4  392
#define GS4 415
#define A4  440
#define AS4 466
#define B4  494
const unsigned int CN5, CS5, DN1, DS1, EN1, FN1, FS1, GN1, GS1, AN1, AS1, BN1;
#define C5  523
#define CS5 554
#define D5  587
#define DS5 622
#define E5  659
#define F5  698
#define FS5 740
#define G5  784
#define GS5 831
#define A5  880
#define AS5 932
#define B5  988
const unsigned int CN6, CS6, DN1, DS1, EN1, FN1, FS1, GN1, GS1, AN1, AS1, BN1;
#define C6  1047
#define CS6 1109
#define D6  1175
#define DS6 1245
#define E6  1319
#define F6  1397
#define FS6 1480
#define G6  1568
#define GS6 1661
#define A6  1760
#define AS6 1865
#define B6  1976
const unsigned int CN7, CS7, DN1, DS1, EN1, FN1, FS1, GN1, GS1, AN1, AS1, BN1;
#define C7  2093
#define CS7 2217
#define D7  2349
#define DS7 2489
#define E7  2637
#define F7  2794
#define FS7 2960
#define G7  3136
#define GS7 3322
#define A7  3520
#define AS7 3729
#define B7  3951
const unsigned int CN8, CS8, DN1, DS1, EN1, FN1, FS1, GN1, GS1, AN1, AS1, BN1;
#define C8  4186
#define CS8 4435
#define D8  4699
#define DS8 4978

int buzzerPin = 40;

// notes in the melody:
int melody[] = {
  NOTE_F3_4,NOTE_F4_4, NOTE_F4_4,
};

// note durations: 4 = quarter note, 8 = eighth note, etc.:
int noteDurations[] = {
  4, 4, 2, 2, 2, 1,
  4, 4, 2, 2, 2, 1,
  4, 4, 2, 2, 4, 4, 2, 1,
  4, 4, 2, 2, 2, 1
};

void setup()
{
  pinMode(buzzerPin,OUTPUT);
}

void loop()
{
 for (int thisNote = 0; thisNote < 26; thisNote++) {
   // to calculate the note duration, take one second
   // divided by the note type.
   //e.g. quarter note = 1000 / 4, eighth note = 1000/8, etc.
   int noteDuration = 1000/noteDurations[thisNote];
   tone(buzzerPin, melody[thisNote],noteDuration);
   int pauseBetweenNotes = noteDuration + 50;      //delay between pulse
   delay(pauseBetweenNotes);
   noTone(buzzerPin);                // stop the tone playing
 }
}
