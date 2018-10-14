#include <Servo.h>

// because servos are mirrored, special values per side are required
const int LEFT_SIDE_ORIGIN = 0;
const int LEFT_NUB = 45;

const int RIGHT_SIDE_ORIGIN = 180;
const int RIGHT_NUB = 135;

const int CLEAR_DELAY = 333;
const int CHAR_DELAY = 2000;

// The BrailleLetter class, which contains 6 servos that push each nubbin along
// with the fundamental characters needed to create language with Braille
class BrailleLetter {
  public:
  Servo nub1; Servo nub4; // Nub 1 | Nub 4
  Servo nub2; Servo nub5; // Nub 2 | Nub 5
  Servo nub3; Servo nub6; // Nub 3 | Nub 6

  // letters (English Alphabet)
  void BrailleLetter::writeA(); void BrailleLetter::writeB();
  void BrailleLetter::writeC(); void BrailleLetter::writeD();
  void BrailleLetter::writeE(); void BrailleLetter::writeF();
  void BrailleLetter::writeG(); void BrailleLetter::writeH();
  void BrailleLetter::writeI(); void BrailleLetter::writeJ();
  void BrailleLetter::writeK(); void BrailleLetter::writeL();
  void BrailleLetter::writeM(); void BrailleLetter::writeN();
  void BrailleLetter::writeO(); void BrailleLetter::writeP();
  void BrailleLetter::writeQ(); void BrailleLetter::writeR();
  void BrailleLetter::writeS(); void BrailleLetter::writeT();
  void BrailleLetter::writeU(); void BrailleLetter::writeV();
  void BrailleLetter::writeW(); void BrailleLetter::writeX();
  void BrailleLetter::writeY(); void BrailleLetter::writeZ();

  // numbers (0-9 and the # symbol)
  void BrailleLetter::writeHash();
  void BrailleLetter::write1(); void BrailleLetter::write2();
  void BrailleLetter::write3(); void BrailleLetter::write4();
  void BrailleLetter::write5(); void BrailleLetter::write6();
  void BrailleLetter::write7(); void BrailleLetter::write8();
  void BrailleLetter::write9(); void BrailleLetter::write0();

  // punctuation [, ; : . ? ! ' " " ' ' ( ) / \ -]
  void BrailleLetter::writeComma();
  void BrailleLetter::writeSemicolon();
  void BrailleLetter::writeColon();
  void BrailleLetter::writePeriod();
  void BrailleLetter::writeQuestionMark();
  void BrailleLetter::writeExclamationMark();
  void BrailleLetter::writeApostrophe();
  void BrailleLetter::writeLeftDoubleQuotes();
  void BrailleLetter::writeRightDoubleQuotes();
  void BrailleLetter::writeLeftSingleQuote();
  void BrailleLetter::writeRightSingleQuote();
  void BrailleLetter::writeLeftParenthesis();
  void BrailleLetter::writeRightParenthesis();
  void BrailleLetter::writeForwardSlash();
  void BrailleLetter::writeBackSlash();
  void BrailleLetter::writeHyphen();

  // demo functions ("Hello World!", A-Z, 0-9, Custom String)
  void BrailleLetter::writeHelloWorld();
  void BrailleLetter::writeAlphabet();
  void BrailleLetter::writeNumeric();
  void BrailleLetter::writeCustom(String str);
  void BrailleLetter::writeChar(char ch);

  // helper functions (Clear nubbins for next letter)
  void BrailleLetter::clearNubs();
};

void BrailleLetter::writeA() {
  nub1.write(LEFT_NUB);
}

void BrailleLetter::writeB() {
  nub1.write(LEFT_NUB);
  nub2.write(LEFT_NUB);
}

void BrailleLetter::writeC() {
  nub1.write(LEFT_NUB);
  nub4.write(RIGHT_NUB);
}

void BrailleLetter::writeD() {
  nub1.write(LEFT_NUB);
  nub4.write(RIGHT_NUB);
  nub5.write(RIGHT_NUB);
}

void BrailleLetter::writeE() {
  nub1.write(LEFT_NUB);
  nub5.write(RIGHT_NUB);
}

void BrailleLetter::writeF() {
  nub1.write(LEFT_NUB);
  nub2.write(LEFT_NUB);
  nub4.write(RIGHT_NUB);
}

void BrailleLetter::writeG() {
  nub1.write(LEFT_NUB);
  nub2.write(LEFT_NUB);
  nub4.write(RIGHT_NUB);
  nub5.write(RIGHT_NUB);
}

void BrailleLetter::writeH() {
  nub1.write(LEFT_NUB);
  nub2.write(LEFT_NUB);
  nub5.write(RIGHT_NUB);
}

void BrailleLetter::writeI() {
  nub2.write(LEFT_NUB);
  nub4.write(RIGHT_NUB);  
}

void BrailleLetter::writeJ() {
  nub2.write(LEFT_NUB);
  nub4.write(RIGHT_NUB);
  nub5.write(RIGHT_NUB); 
}

void BrailleLetter::writeK() {
  nub1.write(LEFT_NUB);
  nub3.write(LEFT_NUB); 
}

void BrailleLetter::writeL() {
  nub1.write(LEFT_NUB);
  nub2.write(LEFT_NUB);
  nub3.write(LEFT_NUB);  
}

void BrailleLetter::writeM() {
  nub1.write(LEFT_NUB);
  nub3.write(LEFT_NUB);
  nub4.write(RIGHT_NUB);  
}

void BrailleLetter::writeN() {
  nub1.write(LEFT_NUB);
  nub3.write(LEFT_NUB);
  nub4.write(RIGHT_NUB);
  nub5.write(RIGHT_NUB);
}

void BrailleLetter::writeO() {
  nub1.write(LEFT_NUB);
  nub3.write(LEFT_NUB);
  nub5.write(RIGHT_NUB);
}

void BrailleLetter::writeP() {
  nub1.write(LEFT_NUB);
  nub2.write(LEFT_NUB);
  nub3.write(LEFT_NUB);
  nub4.write(RIGHT_NUB);
}

void BrailleLetter::writeQ() {
  nub1.write(LEFT_NUB);
  nub2.write(LEFT_NUB);
  nub3.write(LEFT_NUB);
  nub4.write(RIGHT_NUB);
  nub5.write(RIGHT_NUB);
}

void BrailleLetter::writeR() {
  nub1.write(LEFT_NUB);
  nub2.write(LEFT_NUB);
  nub3.write(LEFT_NUB);
  nub5.write(RIGHT_NUB);
}

void BrailleLetter::writeS() {
  nub2.write(LEFT_NUB);
  nub3.write(LEFT_NUB);
  nub4.write(RIGHT_NUB);
}

void BrailleLetter::writeT() {
  nub2.write(LEFT_NUB);
  nub3.write(LEFT_NUB);
  nub4.write(RIGHT_NUB);
  nub5.write(RIGHT_NUB);
}

void BrailleLetter::writeU() {
  nub1.write(LEFT_NUB);
  nub3.write(LEFT_NUB);
  nub6.write(RIGHT_NUB);
}

void BrailleLetter::writeV() {
  nub1.write(LEFT_NUB);
  nub2.write(LEFT_NUB);
  nub3.write(LEFT_NUB);
  nub6.write(RIGHT_NUB);
}

void BrailleLetter::writeW() {
  nub2.write(LEFT_NUB);
  nub4.write(RIGHT_NUB);
  nub5.write(RIGHT_NUB);
  nub6.write(RIGHT_NUB);
}

void BrailleLetter::writeX() {
  nub1.write(LEFT_NUB);
  nub3.write(LEFT_NUB);
  nub4.write(RIGHT_NUB);
  nub6.write(RIGHT_NUB);
}

void BrailleLetter::writeY() {
  nub1.write(LEFT_NUB);
  nub3.write(LEFT_NUB);
  nub4.write(RIGHT_NUB);
  nub5.write(RIGHT_NUB);
  nub6.write(RIGHT_NUB);
}

void BrailleLetter::writeZ() {
  nub1.write(LEFT_NUB);
  nub3.write(LEFT_NUB);
  nub5.write(RIGHT_NUB);
  nub6.write(RIGHT_NUB);
}

void BrailleLetter::writeHash() {
  nub3.write(LEFT_NUB);
  nub4.write(RIGHT_NUB);
  nub5.write(RIGHT_NUB);
  nub6.write(RIGHT_NUB);  
}

void BrailleLetter::write1() {
  this->writeHash();
  this->clearNubs();
  this->writeA(); // 'a' and '1' share the same figure, just 1 has the #(hash) prefix
}

void BrailleLetter::write2() {
  this->writeHash();
  this->clearNubs();
  this->writeB(); // #, b
}

void BrailleLetter::write3() {
  this->writeHash();
  this->clearNubs();
  this->writeC(); // #, c
}

void BrailleLetter::write4() {
  this->writeHash();
  this->clearNubs();
  this->writeD(); // #, d
}

void BrailleLetter::write5() {
  this->writeHash();
  this->clearNubs();
  this->writeE(); // #, e
}

void BrailleLetter::write6() {
  this->writeHash();
  this->clearNubs();
  this->writeF(); // #, f
}

void BrailleLetter::write7() {
  this->writeHash();
  this->clearNubs();
  this->writeG(); // #, g
}

void BrailleLetter::write8() {
  this->writeHash();
  this->clearNubs();
  this->writeH(); // #, h
}

void BrailleLetter::write9() {
  this->writeHash();
  this->clearNubs();
  this->writeI(); // #, i
}

void BrailleLetter::write0() {
  this->writeHash();
  this->clearNubs();
  this->writeJ(); // #, j
}

void BrailleLetter::writeComma() {
  nub2.write(LEFT_NUB);
}

void BrailleLetter::writeSemicolon() {
  nub2.write(LEFT_NUB);
  nub3.write(LEFT_NUB);
}

void BrailleLetter::writeColon() {
  nub2.write(LEFT_NUB);
  nub5.write(RIGHT_NUB);
}

void BrailleLetter::writePeriod() {
  nub2.write(LEFT_NUB);
  nub5.write(RIGHT_NUB);
  nub6.write(RIGHT_NUB);
}

void BrailleLetter::writeQuestionMark() {
  nub2.write(LEFT_NUB);
  nub3.write(LEFT_NUB);
  nub6.write(RIGHT_NUB);
}

void BrailleLetter::writeExclamationMark() {
  nub2.write(LEFT_NUB);
  nub3.write(LEFT_NUB);
  nub5.write(RIGHT_NUB);
}

void BrailleLetter::writeApostrophe() {
  nub3.write(LEFT_NUB);
}

void BrailleLetter::writeLeftDoubleQuotes() {
  nub4.write(RIGHT_NUB);
  nub5.write(RIGHT_NUB);
  this->clearNubs();
  nub2.write(LEFT_NUB);
  nub3.write(LEFT_NUB);
  nub6.write(RIGHT_NUB);
}

void BrailleLetter::writeRightDoubleQuotes() {
  nub4.write(RIGHT_NUB);
  nub5.write(RIGHT_NUB);
  this->clearNubs();
  nub3.write(LEFT_NUB);
  nub5.write(RIGHT_NUB);
  nub6.write(RIGHT_NUB);
}

void BrailleLetter::writeLeftSingleQuote() {
  nub3.write(LEFT_NUB);
  this->clearNubs();
  nub2.write(LEFT_NUB);
  nub3.write(LEFT_NUB);
  nub6.write(RIGHT_NUB);
}

void BrailleLetter::writeRightSingleQuote() { 
  nub3.write(LEFT_NUB);
  this->clearNubs();
  nub3.write(LEFT_NUB);
  nub5.write(RIGHT_NUB);
  nub6.write(RIGHT_NUB);
}

void BrailleLetter::writeLeftParenthesis() {
  nub5.write(RIGHT_NUB);
  this->clearNubs();
  nub1.write(LEFT_NUB);
  nub2.write(LEFT_NUB);
  nub6.write(RIGHT_NUB);
}

void BrailleLetter::writeRightParenthesis() {
  nub5.write(RIGHT_NUB);
  this->clearNubs();
  nub3.write(LEFT_NUB);
  nub4.write(RIGHT_NUB);
  nub5.write(RIGHT_NUB);
}

void BrailleLetter::writeForwardSlash() {
  nub4.write(RIGHT_NUB);
  nub5.write(RIGHT_NUB);
  nub6.write(RIGHT_NUB);
  this->clearNubs();
  nub3.write(LEFT_NUB);
  nub4.write(RIGHT_NUB);
}

void BrailleLetter::writeBackSlash() {
  nub4.write(RIGHT_NUB);
  nub5.write(RIGHT_NUB);
  nub6.write(RIGHT_NUB);
  this->clearNubs();
  nub1.write(LEFT_NUB);
  nub6.write(RIGHT_NUB);
}

void BrailleLetter::writeHyphen() {
  nub3.write(LEFT_NUB);
  nub6.write(RIGHT_NUB);
}

void BrailleLetter::writeHelloWorld() {
  this->writeH(); this->clearNubs();
  this->writeE(); this->clearNubs();
  this->writeL(); this->clearNubs();
  this->writeL(); this->clearNubs();
  this->writeO(); this->clearNubs();
  this->writeW(); this->clearNubs();
  this->writeO(); this->clearNubs();
  this->writeR(); this->clearNubs();
  this->writeL(); this->clearNubs();
  this->writeD(); this->clearNubs();
  this->writeExclamationMark(); this->clearNubs();
}

void BrailleLetter::writeAlphabet() {
  this->writeA(); this->clearNubs();
  this->writeB(); this->clearNubs();
  this->writeC(); this->clearNubs();
  this->writeD(); this->clearNubs();
  this->writeE(); this->clearNubs();
  this->writeF(); this->clearNubs();
  this->writeG(); this->clearNubs();
  this->writeH(); this->clearNubs();
  this->writeI(); this->clearNubs();
  this->writeJ(); this->clearNubs();
  this->writeK(); this->clearNubs();
  this->writeL(); this->clearNubs();
  this->writeM(); this->clearNubs();
  this->writeN(); this->clearNubs();
  this->writeO(); this->clearNubs();
  this->writeP(); this->clearNubs();
  this->writeQ(); this->clearNubs();
  this->writeR(); this->clearNubs();
  this->writeS(); this->clearNubs();
  this->writeT(); this->clearNubs();
  this->writeU(); this->clearNubs();
  this->writeV(); this->clearNubs();
  this->writeW(); this->clearNubs();
  this->writeX(); this->clearNubs();
  this->writeY(); this->clearNubs();
  this->writeZ(); this->clearNubs();
}

void BrailleLetter::writeNumeric() {
  this->write1(); this->clearNubs();
  this->write2(); this->clearNubs();
  this->write3(); this->clearNubs();
  this->write4(); this->clearNubs();
  this->write5(); this->clearNubs();
  this->write6(); this->clearNubs();
  this->write7(); this->clearNubs();
  this->write8(); this->clearNubs();
  this->write9(); this->clearNubs();
  this->write0(); this->clearNubs();
}

void BrailleLetter::writeCustom(String str) {
  for(char &ch : str)
  {
    this->writeChar(ch);
    this->clearNubs();
  }
}

void BrailleLetter::clearNubs() {
  delay(CHAR_DELAY);
  nub1.write(LEFT_SIDE_ORIGIN);
  nub2.write(LEFT_SIDE_ORIGIN);
  nub3.write(LEFT_SIDE_ORIGIN);
  nub4.write(RIGHT_SIDE_ORIGIN);
  nub5.write(RIGHT_SIDE_ORIGIN);
  nub6.write(RIGHT_SIDE_ORIGIN);
  delay(CLEAR_DELAY);
}

void BrailleLetter::writeChar(char ch)
{
  if(ch == 'a' || ch == 'A') {
    this->writeA();  
  }
  else if(ch == 'b' || ch == 'B') {
    this->writeB();
  }
  else if(ch == 'c' || ch == 'C') {
    this->writeC();
  }
}

BrailleLetter letter;

void setup() {
  // top left nub
  letter.nub1.attach(6);
  letter.nub1.write(LEFT_SIDE_ORIGIN);
  delay(100);

  // middle left nub
  letter.nub2.attach(7);
  letter.nub2.write(LEFT_SIDE_ORIGIN);
  delay(100);

  // bottom left nub
  letter.nub3.attach(8);
  letter.nub3.write(LEFT_SIDE_ORIGIN);
  delay(100);

  // top right nub
  letter.nub4.attach(9);
  letter.nub4.write(RIGHT_SIDE_ORIGIN);
  delay(100);

  // middle right nub
  letter.nub5.attach(10);
  letter.nub5.write(RIGHT_SIDE_ORIGIN);
  delay(100);

  // bottom right nub
  letter.nub6.attach(11);
  letter.nub6.write(RIGHT_SIDE_ORIGIN);
  delay(100);
}

void loop() {
  letter.writeHelloWorld();
  letter.clearNubs();
  //letter.writeCustom("ABC");
}
