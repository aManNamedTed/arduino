#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#define OLED_RESET 4
Adafruit_SSD1306 display(OLED_RESET);
#define XPOS 0
#define YPOS 1
#define LOGO16_GLCD_HEIGHT 16 
#define LOGO16_GLCD_WIDTH  16 

int score = 0;
int ledArray[7];
const int START_PIN = 7;
const int TOTAL_LEDS = 7;
const int BUTTON_PIN = A2;
const int WIN_LED = 3 + START_PIN;
const int WRONG_BLINK = 6;
const int RIGHT_BLINK = 4;

void setup() {
  for(int i = 0; i < TOTAL_LEDS; i++)
  {
    ledArray[i] = i + START_PIN;
    pinMode(ledArray[i], OUTPUT);
  }
  pinMode(BUTTON_PIN, INPUT);
  const int WIN_LED = 2 + START_PIN;
  gameIntro();
}

void loop() {
  int buttonState = 0;
  int i = 0;
  int score = 0;
  bool ascending = true;

  //displayScore(score);
  while(true)
  {
    buttonState = digitalRead(BUTTON_PIN);
    
    if(ascending)
    {
      if(buttonState == HIGH && ledArray[i] == WIN_LED)
      {
        rightScreen(score); 
        rightBlink(ledArray, i);
        displayScore(score);
      }
      else if(buttonState == HIGH && ledArray[i] != WIN_LED)
      {
        wrongScreen(score);
        wrongBlink(ledArray, i);
        displayScore(score);
      }
      nextLED(ledArray, i);
      ++i;
      checkAscending(i, ascending);
    }
    else if(!ascending)
    {
      if(buttonState == HIGH && ledArray[i] == WIN_LED)
      {
        rightScreen(score);
        rightBlink(ledArray, i);
        displayScore(score);
      }
      else if(buttonState == HIGH && ledArray[i] != WIN_LED)
      {
        wrongScreen(score);
        wrongBlink(ledArray, i);
        displayScore(score);
      }
      nextLED(ledArray, i);
      
      --i;
      checkAscending(i, ascending);
    }
  }
}

void checkAscending(int i, bool &asc)
{
  if(i == TOTAL_LEDS - 1)
  {
    asc = false;
  }
  else if(i == 0)
  {
    asc = true;
  }
}

void nextLED(int arr[], int index)
{
  digitalWrite(ledArray[index], HIGH);
  delay(100);
  digitalWrite(ledArray[index], LOW);
}

void rightBlink(int arr[], int index)
{
  for(int i = 0; i < RIGHT_BLINK; i++)
  {
    digitalWrite(arr[index], HIGH);
    delay(200);
    digitalWrite(arr[index], LOW);
    delay(200);
  }
}

void rightScreen(int &score)
{
  // right led message
  display.clearDisplay();
  display.setTextSize(3);
  display.setTextColor(WHITE);
  display.setCursor(0,0);
  display.print("NICE!!!");
  display.display();

  // increment score
  score += 15;
  display.clearDisplay();
}

void wrongBlink(int arr[], int index)
{
  for(int i = 0; i < WRONG_BLINK; i++)
  {
    digitalWrite(arr[index], HIGH);
    delay(100);
    digitalWrite(arr[index], LOW);
    delay(100);
  }
}

void wrongScreen(int &score)
{
  // wrong led message
  display.clearDisplay();
  display.setTextSize(3);
  display.setTextColor(WHITE);
  display.setCursor(0,0);
  display.print("BOO!!!");
  display.display();

  // decrement score
  score -= 5;
  display.clearDisplay();
}

void displayScore(int score)
{  
  display.setTextSize(2);
  display.setTextColor(WHITE);
  display.setCursor(0,0);
  display.print("Score: ");
  display.println(score);
  display.display();
  display.clearDisplay();
}

void gameIntro()
{
  display.begin(SSD1306_SWITCHCAPVCC, 0x3C);

  // start cyclone display
  display.clearDisplay();
  display.setTextSize(2);
  display.setTextColor(WHITE);
  display.setCursor(6,6);
  display.clearDisplay();
  display.println("CYCLONE");
  display.display();
  delay(1);
  display.startscrollright(0x00, 0x0F);
  delay(1350);
  display.stopscroll();
  display.startscrollleft(0x00, 0x0F);
  delay(1350);
  display.stopscroll();
  display.startscrollright(0x00, 0x0F);
  delay(675);
  display.stopscroll();
  display.clearDisplay();
}
