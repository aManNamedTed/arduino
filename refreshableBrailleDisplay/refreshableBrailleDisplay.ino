#include <Servo.h>

// because servos are mirrored, special values per side are required
const int LEFT_SIDE_ORIGIN = 0;
const int LEFT_NUB = 45;

const int RIGHT_SIDE_ORIGIN = 180;
const int RIGHT_NUB = 135;

const int CLEAR_DELAY = 333;
const int CHAR_DELAY = 666;

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

  // Contractions beginning with 'A'
  void BrailleLetter::writeAbout();
  void BrailleLetter::writeAbove();
  void BrailleLetter::writeAccording();
  void BrailleLetter::writeAcross();
  void BrailleLetter::writeAfter();
  void BrailleLetter::writeAfternoon();
  void BrailleLetter::writeAfterward();
  void BrailleLetter::writeAgain();
  void BrailleLetter::writeAgainst();
  void BrailleLetter::writeAlmost();
  void BrailleLetter::writeAlready();
  void BrailleLetter::writeAlso();
  void BrailleLetter::writeAlthough();
  void BrailleLetter::writeAltogether();
  void BrailleLetter::writeAlways();
  void BrailleLetter::write_ance();
  void BrailleLetter::writeAnd();
  void BrailleLetter::writeAr();
  void BrailleLetter::writeAs();

  // Contractions beginning with 'B'
  void BrailleLetter::writeBModifier();
  void BrailleLetter::write_BB_();
  void BrailleLetter::writeBe_();
  void BrailleLetter::writeBecause();
  void BrailleLetter::writeBefore();
  void BrailleLetter::writeBehind();
  void BrailleLetter::writeBelow() ;
  void BrailleLetter::writeBeneath();
  void BrailleLetter::writeBeside();
  void BrailleLetter::writeBetween();
  void BrailleLetter::writeBeyond();
  void BrailleLetter::writeBlind();
  void BrailleLetter::writeBraille();
  void BrailleLetter::writeBut();

  // Contractions beginning with 'C'
  // Contractions beginning with 'D'
  // Contractions beginning with 'E'
  // Contractions beginning with 'F'
  // Contractions beginning with 'G'
  // Contractions beginning with 'H'
  // Contractions beginning with 'I'
  // Contractions beginning with 'J'
  // Contractions beginning with 'K'
  // Contractions beginning with 'L'
  // Contractions beginning with 'M'
  // Contractions beginning with 'N'
  // Contractions beginning with 'O'
  // Contractions beginning with 'P'
  // Contractions beginning with 'Q'
  // Contractions beginning with 'R'
  // Contractions beginning with 'S'
  // Contractions beginning with 'T'
  // Contractions beginning with 'U'
  // Contractions beginning with 'V'
  // Contractions beginning with 'W'
  // Contractions beginning with 'X'
  // Contractions beginning with 'Y'
  // Contractions beginning with 'Z'

  // Main driver function for converting string to Braille output
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


// Begin UEB Braille Chart from Duxbury Systems
/*
  Contractions to add
    B C D E F G H I J K L M N O P Q R S T U V W X Y Z

   New conventions for naming methods:
     use a _ in place of the triangles in the chart
     so __ or _
*/
// Begin contractions starting with A
void BrailleLetter::writeAbout() {
  this->writeA();
  this->clearNubs();
  this->writeB();
}

void BrailleLetter::writeAbove() {
  this->writeA();
  this->clearNubs();
  this->writeB();
  this->clearNubs();
  this->writeV();
}

void BrailleLetter::writeAccording() {
  this->writeA();
  this->clearNubs();
  this->writeC();
}

void BrailleLetter::writeAcross() {
  this->writeA();
  this->clearNubs();
  this->writeC();
  this->clearNubs();
  this->writeR();
}

void BrailleLetter::writeAfter() {
  this->writeA();
  this->clearNubs();
  this->writeF();
}

void BrailleLetter::writeAfternoon() {
  this->writeA();
  this->clearNubs();
  this->writeF();
  this->clearNubs();
  this->writeN();
}

void BrailleLetter::writeAfterward() {
  this->writeA();
  this->clearNubs();
  this->writeF();
  this->clearNubs();
  this->writeW();
}

void BrailleLetter::writeAgain() {
  this->writeA();
  this->clearNubs();
  this->writeG();
}

void BrailleLetter::writeAgainst() {
  this->writeA();
  this->clearNubs();
  this->writeG();
  this->clearNubs();
  nub3.write(LEFT_NUB);
  nub4.write(RIGHT_NUB);
}

void BrailleLetter::writeAlmost() {
  this->writeA();
  this->clearNubs();
  this->writeL();
  this->clearNubs();
  this->writeM();
}

void BrailleLetter::writeAlready() {
  this->writeA();
  this->clearNubs();
  this->writeL();
  this->clearNubs();
  this->writeR();
}

void BrailleLetter::writeAlso() {
  this->writeA();
  this->clearNubs();
  this->writeL();
}

void BrailleLetter::writeAlthough() {
  this->writeA();
  this->clearNubs();
  this->writeL();
  this->clearNubs();
  nub1.write(LEFT_NUB);
  nub4.write(RIGHT_NUB);
  nub5.write(RIGHT_NUB);
  nub6.write(RIGHT_NUB);
}

void BrailleLetter::writeAltogether() {
  this->writeA();
  this->clearNubs();
  this->writeL();
  this->clearNubs();
  this->writeT();
}

void BrailleLetter::writeAlways() {
  this->writeA();
  this->clearNubs();
  this->writeL();
  this->clearNubs();
  this->writeW();
}

// TODO: need to find out how to handle this event with wildcard
void BrailleLetter::write_ance() {
  /*
    if(char 1 - char 4 == 'ance')
    {
      use this
    }
  */
  nub4.write(RIGHT_NUB);
  nub6.write(RIGHT_NUB);
  this->clearNubs();
  this->writeE();
}

void BrailleLetter::writeAnd() {
  nub1.write(LEFT_NUB);
  nub2.write(LEFT_NUB);
  nub3.write(LEFT_NUB);
  nub4.write(RIGHT_NUB);
  nub6.write(RIGHT_NUB);
}

void BrailleLetter::writeAr() {
  nub3.write(LEFT_NUB);
  nub4.write(RIGHT_NUB);
  nub5.write(RIGHT_NUB);
}

// TODO: This cannot touch other letters
void BrailleLetter::writeAs() {
  this->writeZ();
}

// Start contractions starting with B
void BrailleLetter::writeBModifier() {
  nub2.write(LEFT_NUB);
  nub3.write(LEFT_NUB);
}

void BrailleLetter::write_BB_() {
  this->writeBModifier();
}

void BrailleLetter::writeBe_() {
  this->writeBModifier();
}

void BrailleLetter::writeBecause() {
  this->writeBModifier();
  this->clearNubs();
  this->writeC();
}

void BrailleLetter::writeBefore() {
  this->writeBModifier();
  this->clearNubs();
  this->writeF();
}

void BrailleLetter::writeBehind() {
  this->writeBModifier();
  this->clearNubs();
  this->writeH();
}

void BrailleLetter::writeBelow() {
  this->writeBModifier();
  this->clearNubs();
  this->writeL();
}

void BrailleLetter::writeBeneath() {
  this->writeBModifier();
  this->clearNubs();
  this->writeN();
}

void BrailleLetter::writeBeside() {
  this->writeBModifier();
  this->clearNubs();
  this->writeS();
}

void BrailleLetter::writeBetween() {
  this->writeBModifier();
  this->clearNubs();
  this->writeT();
}

void BrailleLetter::writeBeyond() {
  this->writeBModifier();
  this->clearNubs();
  this->writeY();
}

void BrailleLetter::writeBlind() {
  this->writeB();
  this->clearNubs();
  this->writeL();
}

void BrailleLetter::writeBraille() {
  this->writeB();
  this->clearNubs();
  this->writeR();
  this->clearNubs();
  this->writeL();
}

void BrailleLetter::writeBut() {
  this->writeB();
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
  else if(ch == 'd' || ch == 'D') {
    this->writeD();
  }
  else if(ch == 'e' || ch == 'E') {
    this->writeE();
  }
  else if(ch == 'f' || ch == 'F') {
    this->writeF();
  }
  else if(ch == 'g' || ch == 'G') {
    this->writeG();
  }
  else if(ch == 'h' || ch == 'H') {
    this->writeH();
  }
  else if(ch == 'i' || ch == 'I') {
    this->writeI();
  }
  else if(ch == 'j' || ch == 'J') {
    this->writeJ();
  }
  else if(ch == 'k' || ch == 'K') {
    this->writeK();
  }
  else if(ch == 'l' || ch == 'L') {
    this->writeL();
  }
  else if(ch == 'm' || ch == 'M') {
    this->writeM();
  }
  else if(ch == 'n' || ch == 'N') {
    this->writeN();
  }
  else if(ch == 'o' || ch == 'O') {
    this->writeO();
  }
  else if(ch == 'p' || ch == 'P') {
    this->writeP();
  }
  else if(ch == 'q' || ch == 'Q') {
    this->writeQ();
  }
  else if(ch == 'r' || ch == 'R') {
    this->writeR();
  }
  else if(ch == 's' || ch == 'S') {
    this->writeS();
  }
  else if(ch == 't' || ch == 'T') {
    this->writeT();
  }
  else if(ch == 'u' || ch == 'U') {
    this->writeU();
  }
  else if(ch == 'v' || ch == 'v') {
    this->writeV();
  }
  else if(ch == 'w' || ch == 'W') {
    this->writeW();
  }
  else if(ch == 'x' || ch == 'X') {
    this->writeX();
  }
  else if(ch == 'y' || ch == 'Y') {
    this->writeY();
  }
  else if(ch == 'z' || ch == 'Z') {
    this->writeZ();
  }
  else if(ch == '1') {
    this->write1();
  }
  else if(ch == '2') {
    this->write2();
  }
  else if(ch == '3') {
    this->write3();
  }
  else if(ch == '4') {
    this->write4();
  }
  else if(ch == '5') {
    this->write5();
  }
  else if(ch == '6') {
    this->write6();
  }
  else if(ch == '7') {
    this->write7();
  }
  else if(ch == '8') {
    this->write8();
  }
  else if(ch == '9') {
    this->write9();
  }
  else if(ch == '0') {
    this->write0();
  }
  else if(ch == ',') {
    this->writeComma();
  }
  else if(ch == ';') {
    this->writeSemicolon();
  }
  else if(ch == ':') {
    this->writeColon();
  }
  else if(ch == '.') {
    this->writePeriod();
  }
  else if(ch == '?') {
    this->writeQuestionMark();
  }
  else if(ch == '!') {
    this->writeExclamationMark();
  }
  else if(ch == '\'') {
    this->writeApostrophe();
  }
  else if(ch == '"') {
    this->writeLeftDoubleQuotes();
  }
  else if(ch == '"') {
    this->writeRightDoubleQuotes();
  }
  else if(ch == '\'') {
    this->writeLeftSingleQuote();
  }
  else if(ch == '\'') {
    this->writeRightSingleQuote();
  }
  else if(ch == '(') {
    this->writeLeftParenthesis();
  }
  else if(ch == ')') {
    this->writeRightParenthesis();
  }
  else if(ch == '/') {
    this->writeForwardSlash();
  }  
  else if(ch == '\\') {
    this->writeBackSlash();
  }  
  else if(ch == '-') {
    this->writeHyphen();
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
  letter.writeCustom("Hello World!");
}
