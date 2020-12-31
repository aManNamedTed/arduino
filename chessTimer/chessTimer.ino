#include <LiquidCrystal.h>

LiquidCrystal lcd(1, 2, 4, 5, 6, 7);

unsigned long startPress = 0;
unsigned long endPress = 0;
unsigned long holdTime = 0;

int resetButton = 12;
int resetButtonState = 0;

int whiteGamesWon = 0;
int whiteTime = 3000;     // time is 300.0s 
int whiteButton = 8;
int whiteButtonState = 0;

int blackGamesWon = 0;
int blackTime = 3000;     // time is 300.0s
int blackButton = 13;
int blackButtonState = 0;

String space = "      ";
String blackSpacer = "";

bool startup = true;

byte blackQueen[8] = {
  B01010,
  B00000,
  B10001,
  B11011,
  B11011,
  B11011,
  B10001,
  B00000,
};

byte blackKing[8] = {
  B11011,
  B11011,
  B00000,
  B11011,
  B11011,
  B10011,
  B10001,
  B00000,
};

byte blackBishop[8] = {
  B11111,
  B11011,
  B10001,
  B10001,
  B11011,
  B11011,
  B11011,
  B00000,
};

byte blackRook[8] = {
  B11111,
  B11111,
  B01010,
  B00000,
  B10001,
  B10001,
  B10001,
  B00000,
};

byte blackKnight[8] = {
  B11111,
  B11011,
  B10001,
  B10011,
  B10000,
  B00001,
  B11011,
  B00000,
};

byte blackPawn[8] = {
  B11111,
  B11111,
  B11111,
  B11011,
  B10001,
  B10001,
  B11011,
  B00000,
};

byte whiteQueen[8] = {
  B10101,
  B11111,
  B01110,
  B00100,
  B00100,
  B00100,
  B01110,
  B11111,
};

byte whiteKing[8] = {
  B00100,
  B00100,
  B11111,
  B00100,
  B00100,
  B00100,
  B01110,
  B11111,
};

byte whiteBishop[8] = {
  B00000,
  B00100,
  B01110,
  B01110,
  B00100,
  B00100,
  B00100,
  B11111,
};

byte whiteRook[8] = {
  B00000,
  B00000,
  B10101,
  B11111,
  B01110,
  B01110,
  B01110,
  B11111,
};

byte whiteKnight[8] = {
  B00000,
  B00100,
  B01110,
  B01100,
  B01111,
  B11110,
  B00100,
  B11111,
};

byte whitePawn[8] = {
  B00000,
  B00000,
  B00000,
  B00100,
  B01110,
  B01110,
  B00100,
  B11111,
};

void setup() {
  lcd.begin(16,2);
  pinMode(resetButton, INPUT);
  pinMode(whiteButton, INPUT);
  pinMode(blackButton, INPUT);
}

void loop() {
  if(startup) {
    welcomeScreen();
    startup = false;
  }

  while(whiteTime == 3000 && blackTime == 3000) {
    scoreScreen();
    while(whiteButtonState == LOW && blackButtonState == LOW) {
      // get buttonStates
      whiteButtonState = digitalRead(whiteButton);
      blackButtonState = digitalRead(blackButton);
    }
    break;
  }
  
  if(whiteButtonState == HIGH) {
    while(true) {
      printTime(blackSpacer, blackTime, space, whiteTime);

      // get buttonStates
      resetButtonState = digitalRead(resetButton);
      blackButtonState = digitalRead(blackButton);

      // handle reset
      if(resetButtonState == HIGH) {
        startPress = millis();
        while(resetButtonState == HIGH) {
          resetButtonState = digitalRead(resetButton);
        }
        endPress = millis();
        holdTime = endPress - startPress;
        handleLongPress(holdTime);
        resetGame();
        break;
      }

      // handle change time
      if(blackButtonState == HIGH) {
        break;
      } else {
        blackTime -= 1;
        delay(100);
      }
    }
  }
 
  if(blackButtonState == HIGH) {
    while(true) {
      printTime(blackSpacer, blackTime, space, whiteTime);

      // get buttonStates
      resetButtonState = digitalRead(resetButton);
      whiteButtonState = digitalRead(whiteButton);

      // handle reset
      if(resetButtonState == HIGH) {
        startPress = millis();
        while(resetButtonState == HIGH) {
          resetButtonState = digitalRead(resetButton);
        }
        endPress = millis();
        holdTime = endPress - startPress;
        handleLongPress(holdTime);
        resetGame();
        break;
      }

      // handle change time
      if(whiteButtonState == HIGH) {
        break;
      } else {
        whiteTime -= 1;
        delay(100);
      } 
    }
  }
}

void printTime(String blackSpacer, int blackTime, String space, int whiteTime) {
  lcd.clear();
  
  // check white spacing
  if(whiteTime >= 100 && whiteTime < 1000) {
    space = "       ";
  } else if (whiteTime < 100) {
    space = "        ";
  }

  // check black spacing
  if(blackTime < 100) {
    blackSpacer = "  ";
  } else if (blackTime < 1000) {
    blackSpacer = " ";
  }

  // check time running out
  if(blackTime <= 0) {
    whiteWins();
    resetGame();
  } else if(whiteTime <= 0) {
    blackWins();
    resetGame();
  }  

  // print time
  String blackTimeString;
  String whiteTimeString;
  if(blackTime % 10 == 0) {
    blackTimeString = blackSpacer + String(blackTime / 10) + ".0";
  } else {
    blackTimeString = blackSpacer + String(blackTime / 10) + '.' + String(blackTime % 10);
  }
  
  if(whiteTime % 10 == 0) {
    whiteTimeString = String(whiteTime / 10) + ".0";
  } else {
    whiteTimeString = String(whiteTime / 10) + '.' + String(whiteTime % 10);
  }
  String timeState = blackTimeString + space + whiteTimeString;
  
  lcd.print(timeState);
}

// pppp pppp <-wi nner
// rnbq kbnr <-wi nner
void blackWins() {
  lcd.createChar(7, blackQueen);
  lcd.createChar(6, blackKing);
  lcd.createChar(5, blackBishop);
  lcd.createChar(4, blackKnight);
  lcd.createChar(3, blackRook);
  lcd.createChar(2, blackPawn);

  // front line
  lcd.setCursor(0, 0);
  lcd.write(2);
  lcd.write(2);
  lcd.write(2);
  lcd.write(2);
  lcd.write(2);
  lcd.write(2);
  lcd.write(2);
  lcd.write(2);
  lcd.write("<-winner");
  
  // back line
  lcd.setCursor(0, 1);
  lcd.write(3);
  lcd.write(4);
  lcd.write(5);
  lcd.write(7);
  lcd.write(6);
  lcd.write(5);
  lcd.write(4);
  lcd.write(3);
  lcd.write("<-winner");
  delay(10000);
}

// winn er-> pppp pppp
// winn er-> rnbq kbnr
void whiteWins() {
  lcd.createChar(7, whiteQueen);
  lcd.createChar(6, whiteKing);
  lcd.createChar(5, whiteBishop);
  lcd.createChar(4, whiteKnight);
  lcd.createChar(3, whiteRook);
  lcd.createChar(2, whitePawn);

  // top line
  lcd.setCursor(0, 0);
  lcd.write("winner->");
  lcd.write(2);
  lcd.write(2);
  lcd.write(2);
  lcd.write(2);
  lcd.write(2);
  lcd.write(2);
  lcd.write(2);
  lcd.write(2);
  
  // bottom line
  lcd.setCursor(0, 1);
  lcd.write("winner->");
  lcd.write(3);
  lcd.write(4);
  lcd.write(5);
  lcd.write(7);
  lcd.write(6);
  lcd.write(5);
  lcd.write(4);
  lcd.write(3);
  delay(10000);
}

void resetGame() {
  whiteTime = 3000;
  blackTime = 3000;
  whiteButtonState = LOW;
  blackButtonState = LOW;
}

void scoreScreen() {
  String blackScore;
  String whiteScore;
  String spacer = "          ";
  if(blackGamesWon < 10) {
    blackScore = "  " + String(blackGamesWon);
  } else if (blackGamesWon > 9 && blackGamesWon < 100) {
    blackScore = " " + String(blackGamesWon);
  }

  if(whiteGamesWon < 10) {
    whiteScore = String(whiteGamesWon) + "  ";
  } else if (whiteGamesWon > 9 && whiteGamesWon < 100) {
    whiteScore = String(whiteGamesWon) + " ";
  }
  
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("black  --  white");

  lcd.setCursor(0, 1);
  lcd.print(String(blackScore) + spacer + String(whiteScore));
  delay(1000);
}

// pppp speed  pppp
// rnbq  chess kbnr
void welcomeScreen() {
  lcd.createChar(7, whiteQueen);
  lcd.createChar(6, whiteKing);
  lcd.createChar(5, whiteBishop);
  lcd.createChar(4, whiteKnight);
  lcd.createChar(3, whiteRook);
  lcd.createChar(2, whitePawn);

  // top welcome screen line
  lcd.setCursor(0, 0);
  lcd.write(2);
  lcd.write(2);
  lcd.write(2);
  lcd.write(2);
  
  lcd.setCursor(5, 0);
  lcd.print("speed");

  lcd.setCursor(12, 0);
  lcd.write(2);
  lcd.write(2);
  lcd.write(2);
  lcd.write(2);
  
  // bottom welcome screen line
  lcd.setCursor(0, 1);
  lcd.write(3);
  lcd.write(4);
  lcd.write(5);
  lcd.write(7);
  
  lcd.setCursor(6, 1);
  lcd.print("chess");
  
  lcd.setCursor(12, 1);
  lcd.write(6);
  lcd.write(5);
  lcd.write(4);
  lcd.write(3);
  
  delay(3000);
  resetGame();
}

void handleLongPress(unsigned long holdTime) {
  if (holdTime > 1500) {
    lcd.clear();
    lcd.print("    who won?   ");
    while(true) {
      blackButtonState = digitalRead(blackButton);
      whiteButtonState = digitalRead(whiteButton);
      if(blackButtonState == HIGH) {
        while(blackButtonState == HIGH) {
          blackButtonState = digitalRead(blackButton);
        }
        blackWins();
        blackGamesWon++;
        break;
      } else if (whiteButtonState == HIGH) {
        while(whiteButtonState == HIGH) {
          whiteButtonState = digitalRead(whiteButton);
        }
        whiteGamesWon++;
        whiteWins();
        break;
      }
    }
  }
}
