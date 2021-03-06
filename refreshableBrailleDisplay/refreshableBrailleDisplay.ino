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
  void BrailleLetter::writeAsterisk();
  void BrailleLetter::writeBracket_();
  void BrailleLetter::write_Bracket();
  void BrailleLetter::writeBritishPound();
  void BrailleLetter::writeDash();
  void BrailleLetter::writeDecimalPoint();
  void BrailleLetter::writeDollar();
  void BrailleLetter::writeEllipsis();
  void BrailleLetter::writeEuro();
  void BrailleLetter::writeYen();

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
  void BrailleLetter::writeCan();
  void BrailleLetter::writeCannot();
  void BrailleLetter::write_CC_();
  void BrailleLetter::writeCh();
  void BrailleLetter::writeCharacter();
  void BrailleLetter::writeChild();
  void BrailleLetter::writeChildren();
  void BrailleLetter::writeCon_();
  void BrailleLetter::writeConceive();
  void BrailleLetter::writeConceiving();
  void BrailleLetter::writeCould();

  // Contractions beginning with 'D'
  void BrailleLetter::writeDay();
  void BrailleLetter::writeDeceive();
  void BrailleLetter::writeDeceiving();
  void BrailleLetter::writeDeclare();
  void BrailleLetter::writeDeclaring();
  void BrailleLetter::writeDis_();
  void BrailleLetter::writeDo();

  // Contractions beginning with 'E'
  void BrailleLetter::write_EA_();
  void BrailleLetter::writeEd();
  void BrailleLetter::writeEither();
  void BrailleLetter::writeEn();
  void BrailleLetter::write_Ence();
  void BrailleLetter::writeEnough();
  void BrailleLetter::writeEr();
  void BrailleLetter::writeEver();
  void BrailleLetter::writeEvery();

  // Contractions beginning with 'F'
  void BrailleLetter::writeFather();
  void BrailleLetter::write_FF_();
  void BrailleLetter::writeFirst();
  void BrailleLetter::writeFor();
  void BrailleLetter::writeFriend();
  void BrailleLetter::writeFrom();
  void BrailleLetter::write_Ful();

  // Contractions beginning with 'G'
  void BrailleLetter::write_GG_();
  void BrailleLetter::writeGh();
  void BrailleLetter::writeGo();
  void BrailleLetter::writeGood();
  void BrailleLetter::writeGreat();

  // Contractions beginning with 'H'
  void BrailleLetter::writeHad();
  void BrailleLetter::writeHave();
  void BrailleLetter::writeHere();
  void BrailleLetter::writeHerself();
  void BrailleLetter::writeHim();
  void BrailleLetter::writeHimself();
  void BrailleLetter::writeHis();

  // Contractions beginning with 'I'
  void BrailleLetter::writeImmediate();
  void BrailleLetter::writeIn();
  void BrailleLetter::writeIng();
  void BrailleLetter::writeIt();
  void BrailleLetter::writeIts();
  void BrailleLetter::writeItself();
  void BrailleLetter::write_Ity();

  // Contractions beginning with 'J'
  void BrailleLetter::writeJust();

  // Contractions beginning with 'K'
  void BrailleLetter::writeKnow();
  void BrailleLetter::writeKnowledge();

  // Contractions beginning with 'L'
  void BrailleLetter::write_Less();
  void BrailleLetter::writeLetter();
  void BrailleLetter::writeLike();
  void BrailleLetter::writeLittle();
  void BrailleLetter::writeLord();

  // Contractions beginning with 'M'
  void BrailleLetter::writeMany();
  void BrailleLetter::write_Ment();
  void BrailleLetter::writeMore();
  void BrailleLetter::writeMother();
  void BrailleLetter::writeMuch();
  void BrailleLetter::writeMust();
  void BrailleLetter::writeMyself();

  // Contractions beginning with 'N'
  void BrailleLetter::writeName();
  void BrailleLetter::writeNecessary();
  void BrailleLetter::writeNeither();
  void BrailleLetter::write_Ness();
  void BrailleLetter::writeNot();

  // Contractions beginning with 'O'
  void BrailleLetter::writeOf();
  void BrailleLetter::writeOne();
  void BrailleLetter::writeOneself();
  void BrailleLetter::write_Ong();
  void BrailleLetter::writeOu();
  void BrailleLetter::writeOught();
  void BrailleLetter::write_Ound();
  void BrailleLetter::write_Ount();
  void BrailleLetter::writeOurselves();
  void BrailleLetter::writeOut();
  void BrailleLetter::writeOw();

  // Contractions beginning with 'P'
  void BrailleLetter::writePaid();
  void BrailleLetter::writePart();
  void BrailleLetter::writePeople();
  void BrailleLetter::writePerceive();
  void BrailleLetter::writePerceiving();
  void BrailleLetter::writePerhaps();

  // Contractions beginning with 'Q'
  void BrailleLetter::writeQuestion();
  void BrailleLetter::writeQuick();
  void BrailleLetter::writeQuite();

  // Contractions beginning with 'R'
  void BrailleLetter::writeRather();
  void BrailleLetter::writeReceive();
  void BrailleLetter::writeReceiving();
  void BrailleLetter::writeRejoice();
  void BrailleLetter::writeRejoicing();
  void BrailleLetter::writeRight();

  // Contractions beginning with 'S'
  void BrailleLetter::writeSaid();
  void BrailleLetter::writeSh();
  void BrailleLetter::writeShall();
  void BrailleLetter::writeShould();
  void BrailleLetter::write_Sion();
  void BrailleLetter::writeSo();
  void BrailleLetter::writeSome();
  void BrailleLetter::writeSpirit();
  void BrailleLetter::writeSt();
  void BrailleLetter::writeStill();
  void BrailleLetter::writeSuch();

  // Contractions beginning with 'T'
  void BrailleLetter::writeTh();
  void BrailleLetter::writeThat();
  void BrailleLetter::writeThe();
  void BrailleLetter::writeTheir();
  void BrailleLetter::writeThemselves();
  void BrailleLetter::writeThere();
  void BrailleLetter::writeThese();
  void BrailleLetter::writeThis();
  void BrailleLetter::writeThose();
  void BrailleLetter::writeThrough();
  void BrailleLetter::writeThyself();
  void BrailleLetter::writeTime();
  void BrailleLetter::write_Tion();
  void BrailleLetter::writeToday();
  void BrailleLetter::writeTogether();
  void BrailleLetter::writeTomorrow();
  void BrailleLetter::writeTonight();

  // Contractions beginning with 'U'
  void BrailleLetter::writeUnder();
  void BrailleLetter::writeUpon();
  void BrailleLetter::writeUs();

  // Contractions beginning with 'V'
  void BrailleLetter::writeVery();

  // Contractions beginning with 'W'
  void BrailleLetter::writeWas();
  void BrailleLetter::writeWere();
  void BrailleLetter::writeWh();
  void BrailleLetter::writeWhere();
  void BrailleLetter::writeWhich();
  void BrailleLetter::writeWhose();
  void BrailleLetter::writeWith();
  void BrailleLetter::writeWill();
  void BrailleLetter::writeWord();
  void BrailleLetter::writeWork();
  void BrailleLetter::writeWorld();
  void BrailleLetter::writeWould();

  // Contractions beginning with 'Y'
  void BrailleLetter::writeYou();
  void BrailleLetter::writeYoung();
  void BrailleLetter::writeYour();
  void BrailleLetter::writeYourself();
  void BrailleLetter::writeYourselves();

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

void BrailleLetter::writeAsterisk() {
  nub5.write(RIGHT_NUB);
  this->clearNubs();
  nub3.write(LEFT_NUB);
  nub5.write(RIGHT_NUB);
}

void BrailleLetter::writeBracket_() {
  nub4.write(RIGHT_NUB);
  nub6.write(RIGHT_NUB);
  this->clearNubs();
  nub1.write(LEFT_NUB);
  nub2.write(LEFT_NUB);
  nub6.write(RIGHT_NUB);
}

void BrailleLetter::write_Bracket() {
  nub4.write(RIGHT_NUB);
  nub6.write(RIGHT_NUB);
  this->clearNubs();
  nub3.write(LEFT_NUB);
  nub4.write(RIGHT_NUB);
  nub5.write(RIGHT_NUB);
}

void BrailleLetter::writeBritishPound() {
  nub4.write(RIGHT_NUB);
  this->clearNubs();
  nub1.write(LEFT_NUB);
  nub2.write(LEFT_NUB);
  nub3.write(LEFT_NUB);
}

void BrailleLetter::writeDash() {
  nub6.write(RIGHT_NUB);
  this->clearNubs();
  nub3.write(LEFT_NUB);
  nub6.write(RIGHT_NUB);
}

void BrailleLetter::write_DecimalPoint_() {
  this->writePeriod();
}

void BrailleLetter::writeDollar() {
  nub4.write(RIGHT_NUB);
  this->clearNubs();
  nub2.write(LEFT_NUB);
  nub3.write(LEFT_NUB);
  nub4.write(RIGHT_NUB);
}

void BrailleLetter::writeEllipsis() {
  this->writePeriod();
  this->clearNubs();
  this->writePeriod();
  this->clearNubs();
  this->writePeriod();
}

void BrailleLetter::writeEuro() {
  nub4.write(RIGHT_NUB);
  this->clearNubs();
  nub1.write(LEFT_NUB);
  nub5.write(RIGHT_NUB);
}

void BrailleLetter::writeYen() {
  nub4.write(RIGHT_NUB);
  this->clearNubs();
  nub1.write(LEFT_NUB);
  nub3.write(LEFT_NUB);
  nub4.write(RIGHT_NUB);
  nub5.write(RIGHT_NUB);
  nub6.write(RIGHT_NUB);
}

// Begin UEB Braille Chart from Duxbury Systems
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

// Begin contractions starting with C
void BrailleLetter::writeCan() {
  this->writeC();
}

void BrailleLetter::writeCannot() {
  nub4.write(RIGHT_NUB);
  nub5.write(RIGHT_NUB);
  nub6.write(RIGHT_NUB);
  this->clearNubs();
  this->writeC();
}

void BrailleLetter::write_CC_() {
  nub2.write(LEFT_NUB);
  nub5.write(RIGHT_NUB);
}

void BrailleLetter::writeCh() {
  nub1.write(LEFT_NUB);
  nub6.write(RIGHT_NUB);
}

void BrailleLetter::writeCharacter() {
  nub5.write(RIGHT_NUB);
  this->clearNubs();
  nub1.write(LEFT_NUB);
  nub6.write(RIGHT_NUB);
}

void BrailleLetter::writeChild() {
  nub1.write(LEFT_NUB);
  nub6.write(RIGHT_NUB);
}

void BrailleLetter::writeChildren(){ 
  nub1.write(LEFT_NUB);
  nub6.write(RIGHT_NUB);
  this->clearNubs();
  this->writeN();
}

void BrailleLetter::writeCon_() {
  nub2.write(LEFT_NUB);
  nub5.write(RIGHT_NUB);
}

void BrailleLetter::writeConceive() {
  nub2.write(LEFT_NUB);
  nub5.write(RIGHT_NUB);
  this->clearNubs();
  this->writeC();
  this->clearNubs();
  this->writeV();
}

void BrailleLetter::writeConceiving() {
  this->writeConceive();
  this->clear_nubs();
  this->writeG();
}

void BrailleLetter::writeCould() {
  this->writeC();
  this->clearNubs();
  this->writeD();
}

void BrailleLetter::writeCustom(String str) {
  for(char &ch : str)
  {
    this->writeChar(ch);
  }
}

// Begin contractions starting with D
void BrailleLetter::writeDay() {
  nub5.write(RIGHT_NUB);
  this->clearNubs();
  this->writeD();
}

void BrailleLetter::writeDeceive() {
  this->writeD();
  this->clearNubs();
  this->writeC();
  this->clearNubs();
  this->writeV();
}

void BrailleLetter::writeDeceiving() {
  this->writeDeceive();
  this->clearNubs();
  this->writeG();
}

void BrailleLetter::writeDeclare() {
  this->writeD();
  this->clearNubs();
  this->writeC();
  this->clearNubs();
  this->writeL();
}

void BrailleLetter::writeDeclaring() {
  this->writeDeclare();
  this->clearNubs();
  this->writeG();
}

void BrailleLetter::writeDis_() {
  nub2.write(LEFT_NUB);
  nub5.write(RIGHT_NUB);
  nub6.write(RIGHT_NUB);
}

void BrailleLetter::writeDo() {
  this->writeD();
}

// Begin contractions starting with E
void BrailleLetter::write_EA_() {
  nub2.write(LEFT_NUB);
}

void BrailleLetter::writeEd() {
  nub1.write(LEFT_NUB);
  nub2.write(LEFT_NUB);
  nub4.write(RIGHT_NUB);
  nub6.write(RIGHT_NUB);
}

void BrailleLetter::writeEither() {
  this->writeE();
  this->clearNubs();
  this->writeI();
}

void BrailleLetter::writeEn() {
  nub2.write(LEFT_NUB);
  nub6.write(RIGHT_NUB);
}

void BrailleLetter::write_Ence() {
  nub5.write(RIGHT_NUB);
  nub6.write(RIGHT_NUB);
  this->clearNubs();
  this->writeE();
}

void BrailleLetter::writeEnough() {
  nub2.write(LEFT_NUB);
  nub6.write(RIGHT_NUB);
}

void BrailleLetter::writeEr() {
  nub1.write(LEFT_NUB);
  nub2.write(LEFT_NUB);
  nub4.write(RIGHT_NUB);
  nub5.write(RIGHT_NUB);
  nub6.write(RIGHT_NUB);
}

void BrailleLetter::writeEver() {
  nub5.write(RIGHT_NUB);
  this->clearNubs();
  this->writeE();
}

void BrailleLetter::writeEvery() {
  this->writeE();
}

// Begin contractions starting with F
void BrailleLetter::writeFather() {
  nub5.write(RIGHT_NUB);
  this->clearNubs();
  this->writeF();
}

void BrailleLetter::write_FF_() {
  nub2.write(LEFT_NUB);
  nub3.write(LEFT_NUB);
  nub5.write(RIGHT_NUB);
}

void BrailleLetter::writeFirst() {
  this->writeF();
  this->clearNubs();
  nub3.write(LEFT_NUB);
  nub4.write(RIGHT_NUB);
}

void BrailleLetter::writeFor() {
  nub1.write(LEFT_NUB);
  nub2.write(LEFT_NUB);
  nub3.write(LEFT_NUB);
  nub4.write(RIGHT_NUB);
  nub5.write(RIGHT_NUB);
  nub6.write(RIGHT_NUB);
}

void BrailleLetter::writeFriend() {
  this->writeF();
  this->clearNubs();
  this->writeR();
}

void BrailleLetter::writeFrom() {
  this->writeF();
}

void BrailleLetter::write_Ful() {
  nub5.write(RIGHT_NUB);
  nub6.write(RIGHT_NUB);
  this->clearNubs();
  this->writeL();
}

// Begin contractions starting with G
void BrailleLetter::write_GG_() {
  nub2.write(LEFT_NUB);
  nub3.write(LEFT_NUB);
  nub5.write(RIGHT_NUB);
  nub6.write(RIGHT_NUB);
}

void BrailleLetter::writeGh() {
  nub1.write(LEFT_NUB);
  nub2.write(LEFT_NUB);
  nub6.write(RIGHT_NUB);
}

void BrailleLetter::writeGo() {
  this->writeG();
}

void BrailleLetter::writeGood() {
  this->writeG();
  this->clearNubs();
  this->writeD();
}

void BrailleLetter::writeGreat() {
  this->writeG();
  this->clearNubs();
  this->writeR();
  this->clearNubs();
  this->writeT();
}

// Begin contractions starting with H
void BrailleLetter::writeHad() {
  nub4.write(RIGHT_NUB);
  nub5.write(RIGHT_NUB);
  nub6.write(RIGHT_NUB);
  this->clearNubs();
  this->writeH();
}

void BrailleLetter::writeHave() {
  this->writeH();
}

void BrailleLetter::writeHere() {
  nub5.write(RIGHT_NUB);
  this->clearNubs();
  this->writeH();
}

void BrailleLetter::writeHerself() {
  this->writeH();
  this->clearNubs();
  nub1.write(LEFT_NUB);
  nub2.write(LEFT_NUB);
  nub4.write(RIGHT_NUB);
  nub5.write(RIGHT_NUB);
  nub6.write(RIGHT_NUB);
  this->clearNubs();
  this->writeF();
}

void BrailleLetter::writeHim() {
  this->writeH();
  this->clearNubs();
  this->writeM();
}

void BrailleLetter::writeHimself() {
  this->writeHim();
  this->clearNubs();
  this->writeF();
}

void BrailleLetter::writeHis() {
  nub2.write(LEFT_NUB);
  nub3.write(LEFT_NUB);
  nub6.write(RIGHT_NUB);
}

// Begin contractions starting with I
void BrailleLetter::writeImmediate() {
  this->writeI();
  this->clearNubs();
  this->writeM();
  this->clearNubs();
  this->writeM();
}

void BrailleLetter::writeIn() {
  nub3.write(LEFT_NUB);
  nub5.write(RIGHT_NUB);
}

void BrailleLetter::writeIng() {
  nub3.write(LEFT_NUB);
  nub4.write(RIGHT_NUB);
  nub6.write(RIGHT_NUB);
}

void BrailleLetter::writeIt() {
  this->writeX();
}

void BrailleLetter::writeIts() {
  this->writeX();
  this->clearNubs();
  this->writeS();
}

void BrailleLetter::writeItself() {
  this->writeX();
  this->clearNubs();
  this->writeF();
}

void BrailleLetter::write_Ity() {
  nub5.write(RIGHT_NUB);
  nub6.write(RIGHT_NUB);
  this->clearNubs();
  this->writeY();
}

// Begin contractions starting with J
void BrailleLetter::writeJust() {
  this->writeJ();
}

// Begin contractions starting with K
void BrailleLetter::writeKnow() {
  nub5.write(RIGHT_NUB);
  this->clearNubs();
  this->writeK();
}

void BrailleLetter::writeKnowledge() {
  this->writeK();
}

// Begin contractions starting with L
void BrailleLetter::write_Less() {
  nub4.write(RIGHT_NUB);
  nub6.write(RIGHT_NUB);
  this->clearNubs();
  this->writeS();
}

void BrailleLetter::writeLetter() {
  this->writeL();
  this->clearNubs();
  this->writeR();
}

void BrailleLetter::writeLike() {
  this->writeL();
}

void BrailleLetter::writeLittle() {
  this->writeL();
  this->clearNubs();
  this->writeL();
}

void BrailleLetter::writeLord() {
  nub5.write(RIGHT_NUB);
  this->clearNubs();
  this->writeL();
}

// Begin contractions starting with M
void BrailleLetter::writeMany() {
  nub4.write(RIGHT_NUB);
  nub5.write(RIGHT_NUB);
  nub6.write(RIGHT_NUB);
  this->clearNubs();
  this->writeM();
}

void BrailleLetter::write_Ment() {
  nub5.write(RIGHT_NUB);
  nub6.write(RIGHT_NUB);
  this->clearNub();
  this->writeT();
}

void BrailleLetter::writeMore() {
  this->writeM();
}

void BrailleLetter::writeMother() {
  nub5.write(RIGHT_NUB);
  this->clearNubs();
  this->writeM();
}

void BrailleLetter::writeMuch() {
  this->writeM();
  this->clearNubs();
  nub1.write(LEFT_NUB);
  nub6.write(RIGHT_NUB);
}

void BrailleLetter::writeMust() {
  this->writeM();
  this->clearNubs();
  nub3.write(LEFT_NUB);
  nub4.write(RIGHT_NUB);
}

void BrailleLetter::writeMyself() {
  this->writeM();
  this->clearNubs();
  this->writeY();
  this->clearNubs();
  this->writeF();
}

// Begin contractions starting with N
void BrailleLetter::writeName() {
  nub5.write(RIGHT_NUB);
  this->clearNubs();
  this->writeN();
}

void BrailleLetter::writeNecessary() {
  this->writeN();
  this->clearNubs();
  this->writeE();
  this->clearNubs();
  this->writeC();
}

void BrailleLetter::writeNeither() {
  this->writeN();
  this->clearNubs();
  this->writeE();
  this->clearNubs();
  this->writeI();
}

void BrailleLetter::write_Ness() {
  nub5.write(RIGHT_NUB);
  nub6.write(RIGHT_NUB);
  this->clearNubs();
  this->writeS();
}

void BrailleLetter::writeNot() {
  this->writeNot();
}

// Begin contractions starting with O
void BrailleLetter::writeOf() {
  nub1.write(LEFT_NUB);
  nub2.write(LEFT_NUB);
  nub3.write(LEFT_NUB);
  nub5.write(RIGHT_NUB);
  nub6.write(RIGHT_NUB);
}

void BrailleLetter::writeOne() {
  nub5.write(RIGHT_NUB);
  this->clearNubs();
  this->writeO();
}

void BrailleLetter::writeOneself() {
  nub5.write(RIGHT_NUB);
  this->clearNubs();
  this->writeO();
  this->clearNubs();
  this->writeF();
}

void BrailleLetter::write_Ong() {
  nub5.write(RIGHT_NUB);
  nub6.write(RIGHT_NUB);
  this->clearNubs();
  this->writeG();
}

void BrailleLetter::writeOu() {
  nub1.write(LEFT_NUB);
  nub2.write(LEFT_NUB);
  nub5.write(RIGHT_NUB);
  nub6.write(RIGHT_NUB);
}

void BrailleLetter::writeOught() {
  nub5.write(RIGHT_NUB);
  this->clearNubs();
  this->writeOu();
}

void BrailleLetter::write_Ound() {
  nub4.write(RIGHT_NUB);
  nub6.write(RIGHT_NUB);
  this->clearNubs();
  this->writeD();
}

void BrailleLetter::write_Ount() {
  nub4.write(RIGHT_NUB);
  nub6.write(RIGHT_NUB);
  this->clearNubs();
  this->writeT();
}

void BrailleLetter::writeOurselves() {
  nub1.write(LEFT_NUB);
  nub2.write(LEFT_NUB);
  nub5.write(RIGHT_NUB);
  nub6.write(RIGHT_NUB);
  this->clearNubs();
  this->writeR();
  this->clearNubs();
  this->writeV();
  this->clearNubs();
  this->writeS();
}

void BrailleLetter::writeOut() {
  nub1.write(LEFT_NUB);
  nub2.write(LEFT_NUB);
  nub5.write(RIGHT_NUB);
  nub6.write(RIGHT_NUB);
}

void BrailleLetter::writeOw() {
  nub2.write(LEFT_NUB);
  nub4.write(RIGHT_NUB);
  nub6.write(RIGHT_NUB);
}

// Begin contractions starting with P
void BrailleLetter::writePaid() {
  this->writeP();
  this->clearNubs();
  this->writeD();
}

void BrailleLetter::writePart() {
  nub5.write(RIGHT_NUB);
  this->clearNubs();
  this->writeP();
}

void BrailleLetter::writePeople() {
  this->writeP();
}

void BrailleLetter::writePerceive() {
  this->writeP();
  this->clearNubs();
  nub1.write(LEFT_NUB);
  nub2.write(LEFT_NUB);
  nub4.write(RIGHT_NUB);
  nub5.write(RIGHT_NUB);
  nub6.write(RIGHT_NUB);
  this->clearNubs();
  this->writeC();
  this->clearNubs();
  this->writeV();
}

void BrailleLetter::writePerceiving() {
  this->writePerceive();
  this->clearNubs();
  this->writeG();
}

void BrailleLetter::writePerhaps() {
  this->writeP();
  this->clearNubs();
  nub1.write(LEFT_NUB);
  nub2.write(LEFT_NUB);
  nub4.write(RIGHT_NUB);
  nub5.write(RIGHT_NUB);
  nub6.write(RIGHT_NUB);
  this->clearNubs();
  this->writeH();
}

// Begin contractions starting with Q
void BrailleLetter::writeQuestion() {
  nub5.write(RIGHT_NUB);
  this->clearNubs();
  this->writeQ();
}

void BrailleLetter::writeQuick() {
  this->writeQ();
  this->clearNubs();
  this->writeK();
}

void BrailleLetter::writeQuite() {
  this->writeQ();
}

// Begin contractions starting with R
void BrailleLetter::writeRather() {
  this->writeR();
}

void BrailleLetter::writeReceive() {
  this->writeR();
  this->clearNubs();
  this->writeC();
  this->clearNubs();
  this->writeV();
}

void BrailleLetter::writeReceiving() {
  this->writeReceive();
  this->clearNubs();
  this->writeG();
}

void BrailleLetter::writeRejoice() {
  this->writeR();
  this->clearNubs();
  this->writeJ();
  this->clearNubs();
  this->writeC();
}

void BrailleLetter::writeRejoicing() {
  this->writeRejoice();
  this->clearNubs();
  this->writeG();
}

void BrailleLetter::writeRight() {
  nub5.write(RIGHT_NUB);
  this->clearNubs();
  this->writeR();
}

// Begin contractions starting with S
void BrailleLetter::writeSaid() {
  this->writeS();
  this->clearNubs();
  this->writeD();
}

void BrailleLetter::writeSh() {
  nub1.write(LEFT_NUB);
  nub4.write(RIGHT_NUB);
  nub6.write(RIGHT_NUB);
}

void BrailleLetter::writeShall() {
  this->writeSh();
}

void BrailleLetter::writeShould() {
  this->writeSh();
  this->clearNubs();
  this->writeD();
}

void BrailleLetter::write_Sion() {
  nub4.write(RIGHT_NUB);
  nub6.write(RIGHT_NUB);
  this->clearNubs();
  this->writeN();
}

void BrailleLetter::writeSo() {
  this->writeS();
}

void BrailleLetter::writeSome() {
  nub5.write(RIGHT_NUB);
  this->clearNubs();
  this->writeS();
}

void BrailleLetter::writeSpirit() {
  nub4.write(RIGHT_NUB);
  nub5.write(RIGHT_NUB);
  nub6.write(RIGHT_NUB);
  this->clearNubs();
  this->writeS();
}

void BrailleLetter::writeSt() {
  nub3.write(LEFT_NUB);
  nub4.write(RIGHT_NUB);
}

void BrailleLetter::writeStill() {
  this->writeSt();
}

void BrailleLetter::writeSuch() {
  this->writeS();
  this->clearNubs();
  nub1.write(LEFT_NUB);
  nub6.write(RIGHT_NUB);
}

// Begin contractions starting with T
void BrailleLetter::writeTh() {
  nub1.write(LEFT_NUB);
  nub4.write(RIGHT_NUB);
  nub5.write(RIGHT_NUB);
  nub6.write(RIGHT_NUB);
} 

void BrailleLetter::writeThat() {
  this->writeT();
}

void BrailleLetter::writeThe() {
  nub2.write(LEFT_NUB);
  nub3.write(LEFT_NUB);
  nub4.write(RIGHT_NUB);
  nub6.write(RIGHT_NUB);
}

void BrailleLetter::writeTheir() {
  nub4.write(RIGHT_NUB);
  nub5.write(RIGHT_NUB);
  nub6.write(RIGHT_NUB);
  this->clearNubs();
  this->writeThe();
}

void BrailleLetter::writeThemselves() {
  this->writeThe();
  this->clearNubs();
  this->writeM();
  this->clearNubs();
  this->writeV();
  this->clearNubs();
  this->writeS();
}

void BrailleLetter::writeThere() {
  nub5.write(RIGHT_NUB);
  this->clearNubs();
  this->writeThe();
}

void BrailleLetter::writeThese() {
  nub4.write(RIGHT_NUB);
  nub5.write(RIGHT_NUB);
  this->clearNubs();
  this->writeThe();
}

void BrailleLetter::writeThis() {
  nub1.write(LEFT_NUB);
  nub4.write(RIGHT_NUB);
  nub5.write(RIGHT_NUB);
  nub6.write(RIGHT_NUB);
}

void BrailleLetter::writeThose() {
  nub4.write(RIGHT_NUB);
  nub5.write(RIGHT_NUB);
  this->clearNubs();
  this->writeThis();
}

void BrailleLetter::writeThrough() {
  nub5.write(RIGHT_NUB);
  this->clearNubs();
  this->writeThis();
}

void BrailleLetter::writeThyself() {
  this->writeThis();
  this->clearNubs();
  this->writeY();
  this->clearNubs();
  this->writeF();
}

void BrailleLetter::writeTime() {
  nub5.write(RIGHT_NUB);
  this->clearNubs();
  this->writeT();
}

void BrailleLetter::write_Tion() {
  nub5.write(RIGHT_NUB);
  nub6.write(RIGHT_NUB);
  this->clearNubs();
  this->writeN();
}

void BrailleLetter::writeToday() {
  this->writeT();
  this->clearNubs();
  this->writeD();
}

void BrailleLetter::writeTogether() {
  this->writeT();
  this->clearNubs();
  this->writeG();
  this->clearNubs();
  this->writeR();
}

void BrailleLetter::writeTomorrow() {
  this->writeT();
  this->clearNubs();
  this->writeM();
}

void BrailleLetter::writeTonight() {
  this->writeT();
  this->clearNubs();
  this->writeN();
}

// Begin contractions starting with U
void BrailleLetter::writeUnder() {
  nub5.write(RIGHT_NUB);
  this->clearNubs();
  this->writeU();
}

void BrailleLetter::writeUpon() {
  nub4.write(RIGHT_NUB);
  nub5.write(RIGHT_NUB);
  this->clearNubs();
  this->writeU();
}

void BrailleLetter::writeUs() {
  this->writeU();
}

// Begin contractions starting with V
void BrailleLetter::writeVery() {
  this->writeV();
}

// Begin contractions starting with W
void BrailleLetter::writeWas() {
  nub3.write(LEFT_NUB);
  nub5.write(RIGHT_NUB);
  nub6.write(RIGHT_NUB);
}

void BrailleLetter::writeWere() {
  nub2.write(LEFT_NUB):
  nub3.write(LEFT_NUB);
  nub5.write(RIGHT_NUB);
  nub6.write(RIGHT_NUB);
}

void BrailleLetter::writeWh() {
  nub1.write(LEFT_NUB);
  nub5.write(RIGHT_NUB);
  nub6.write(RIGHT_NUB);
}

void BrailleLetter::writeWhere() {
  nub5.write(RIGHT_NUB);
  this->clearNubs();
  this->writeWh();
}

void BrailleLetter::writeWhich() {
  this->writeWh();
}

void BrailleLetter::writeWhose() {
  nub4.write(RIGHT_NUB);
  nub5.write(RIGHT_NUB);
  this->clearNubs();
  this->writeWh();
}

void BrailleLetter::writeWill() {
  this->writeW();
}

void BrailleLetter::writeWith() {
  nub2.write(LEFT_NUB);
  nub3.write(LEFT_NUB);
  nub4.write(RIGHT_NUB);
  nub5.write(RIGHT_NUB);
  nub6.write(RIGHT_NUB);
}

void BrailleLetter::writeWord() {
  nub4.write(RIGHT_NUB);
  nub5.write(RIGHT_NUB);
  this->clearNubs();
  this->writeW();
}

void BrailleLetter::writeWork() {
  nub5.write(RIGHT_NUB);
  this->clearNubs();
  this->writeW();
}

void BrailleLetter::writeWorld() {
  nub4.write(RIGHT_NUB);
  nub5.write(RIGHT_NUB);
  nub6.write(RIGHT_NUB);
  this->clearNubs();
  this->writeW();
}

void BrailleLetter::writeWould() {
  this->writeW();
  this->clearNubs();
  this->writeD();
}

// Begin contractions starting with Y
void BrailleLetter::writeYou() {
  this->writeY();
}

void BrailleLetter::writeYoung() {
  nub5.write(RIGHT_NUB);
  this->clearNubs();
  this->writeY();
}

void BrailleLetter::writeYour() {
  this->writeY();
  this->clearNubs();
  this->writeR();
}

void BrailleLetter::writeYourself() {
  this->writeY();
  this->clearNubs();
  this->writeR();
  this->clearNubs();
  this->writeF();
}

void BrailleLetter::writeYourselves() {
  this->writeY();
  this->clearNubs();
  this->writeR();
  this->clearNubs();
  this->writeV();
}
void BrailleLetter::writeWere();
void BrailleLetter::writeWh();
void BrailleLetter::writeWhere();
void BrailleLetter::writeWhich();
void BrailleLetter::writeWhose();
void BrailleLetter::writeWith();
void BrailleLetter::writeWill();
void BrailleLetter::writeWord();
void BrailleLetter::writeWork();
void BrailleLetter::writeWorld();
void BrailleLetter::writeWould();

// Begin contractions starting with Y
void BrailleLetter::writeYou() {
  this->writeY();
}

void BrailleLetter::writeYoung() {
  nub5.write(RIGHT_NUB);
  this->clearNubs();
  this->writeY();
}

void BrailleLetter::writeYour() {
  this->writeY();
  this->clearNubs();
  this->writeR();
}

void BrailleLetter::writeYourself() {
  this->writeY();
  this->clearNubs();
  this->writeR();
  this->clearNubs();
  this->writeF();
}

void BrailleLetter::writeYourselves() {
  this->writeY();
  this->clearNubs();
  this->writeR();
  this->clearNubs();
  this->writeV();
  this->clearNubs();
  this->writeS();
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
  this->clearNubs();
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
