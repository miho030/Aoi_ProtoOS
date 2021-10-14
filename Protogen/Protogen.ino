/*
 Name:    Protogen.ino
 Created: 2020-11-11 오전 5:57:03
 Author:  jaehyun
*/


#define DEBUG
//#define OLED

#include "src/expression.h"
#include "src/MaxMatrix.h"

#ifdef OLED
#include <MsTimer2.h>
#include <U8glib.h>
#include "src/screen.h"
#endif // OLED

#ifdef DEBUG
#include <SoftwareSerial.h>
#endif // DEBUG

//입출력 지정
#define SRX 2  //PD2
#define STX 3
#define CS 4    // CS pin of MAX7219 module 파
#define DIN 5   // DIN pin of MAX7219 module 초
#define CLK 6   // CLK pin of MAX7219 module 빨
#define maxInUse 14 //연결된 도트 매트릭스 갯수
#define I2C_SDA A4
#define I2C_SCL A5
#define AUX1 7  //PD7
#define AUX2 8  //PB0
#define AUX3 9
#define AUX4 10 //PB2

volatile long debounceTime = 0;
volatile long currentTime = 0;
volatile long debounceTime2 = 0;
volatile long currentTime2 = 0;
byte counter = 0;
byte counter2 = 0;
int column1L = 104;
int column2L = 112;
int column3L = 95;
int column4L = 103;
int column1 = 8;
int column2 = 16;
int column3 = -1;
int column4 = 7;
unsigned int Eyestate = 6; //처음 전원 넣었을 때 나오는 화면을 설정함(case문에서 case 구문 번호로 하면 됨)
unsigned int mouthstate = 0;
unsigned int state2 = 1;
unsigned int temp = 0;

#ifdef OLED
U8GLIB_SSD1306_128X32 u8g(U8G_I2C_OPT_NONE);
#endif // OLED

#ifdef DEBUG
SoftwareSerial DEBUGSerial(SRX, STX);
#endif // DEBUG

MaxMatrix m(DIN, CS, CLK, maxInUse);

#ifdef OLED
void display_refresh() {
  draw();
}
#endif // OLED

// the setup function runs once when you press reset or power the board
void setup() {
  Serial.begin(9600);
#ifdef DEBUG
  DEBUGSerial.begin(9600);
#endif // DEBUG
  m.init();
  m.setIntensity(0);   // 도트 매트릭스 밝기 0~15
  m.clear();
#ifdef OLED
  MsTimer2::set(1000, display_refresh); //OLED refresh time setting
  MsTimer2::start;
#endif // OLED
}
// the loop function runs over and over again until power down or reset
void loop() { //This is where the program loop starts.
  if (state2 == 1) {
#ifdef DEBUG
    if (DEBUGSerial.available() > 0) {
      temp = int(DEBUGSerial.parseInt());
      if (temp != 0) {
        Eyestate = temp - 1;
      DEBUGSerial.print("S_Eyestate: ");
      DEBUGSerial.println(Eyestate);
      }
    }
#endif // DEBUG
    if (Serial.available() > 0) {//시리얼로 리모컨 값 받아서 파싱후 int형 변환
      temp = int(Serial.parseInt());
      if (temp != 0){
        Eyestate = temp - 1;
      
#ifdef DEBUG
      DEBUGSerial.print("S_Eyestate: ");
      DEBUGSerial.println(Eyestate);
#endif // DEBUG
      }
    }
    if (counter2 > 17) {                    //눈 깜박이는 애니메이션 루프
      for (int i = 0; i < 5; i++) {
        column1L = column1L - 1;
        column2L = column2L - 1;
        column1 = column1 - 1;
        column2 = column2 - 1;
        column3L = column3L + 1;
        column4L = column4L + 1;
        column3 = column3 + 1;
        column4 = column4 + 1;
        m.setColumn(column1L, 0x00);
        m.setColumn(column2L, 0x00);
        m.setColumn(column3L, 0x00);
        m.setColumn(column4L, 0x00);
        m.setColumn(column1, 0x00);
        m.setColumn(column2, 0x00);
        m.setColumn(column3, 0x00);
        m.setColumn(column4, 0x00);
        delay(15);
        counter2++;
      }
      column1L = 104;
      column2L = 112;
      column3L = 95;
      column4L = 103;
      column1 = 8;
      column2 = 16;
      column3 = -1;
      column4 = 7;
      counter2 = 0;
    }
    counter2++;
    Change_expression(Eyestate); //Change_expression
  }
  else {
    m.clear();
  }
}

#ifdef OLED
void draw() {
  switch (Eyestate) {
  case 1:

    break;
  default:
    break;
  }
}
#endif // OLED


void Change_expression(int num) {
  switch (num) {                      //First button press: Happy expression
  case 0:
    m.writeSprite(104, 0, Default_eye_01_L1);
    m.writeSprite(96, 0, Default_eye_01_L2);
    m.writeSprite(8, 0, Default_eye_01_R1);
    m.writeSprite(0, 0, Default_eye_01_R2);
    Change_expression_mouth(0);
    break;

  case 1:                             //Second button press: Surprised
    m.writeSprite(104, 0, Default_eye_02_L1);
    m.writeSprite(96, 0, Default_eye_02_L2);
    m.writeSprite(8, 0, Default_eye_02_R1);
    m.writeSprite(0, 0, Default_eye_02_R2);
    Change_expression_mouth(0);
    break;

  case 2:                             //Third button press: Angry expression
    m.writeSprite(104, 0, circle_eye_L1);
    m.writeSprite(96, 0, circle_eye_L2);
    m.writeSprite(8, 0, circle_eye_R1);
    m.writeSprite(0, 0, circle_eye_R2);
    Change_expression_mouth(0);
/*
    counter++;
    if (counter == 16) {
      m.writeSprite(64, 0, Glitch044L);
      m.writeSprite(72, 0, Glitch033L);
      m.writeSprite(80, 0, Glitch022L);
      m.writeSprite(88, 0, Glitch011L);
      m.writeSprite(16, 0, Glitch011);
      m.writeSprite(24, 0, Glitch022);
      m.writeSprite(32, 0, Glitch033);
      m.writeSprite(40, 0, Glitch044);
      delay(75);
      counter++;
    }
    if ((counter >= 17) && (counter < 18)) {
      m.writeSprite(88, 0, icon01L);
      m.writeSprite(80, 0, icon02L);
      m.writeSprite(72, 0, icon03L);
      m.writeSprite(64, 0, icon04L);
      m.writeSprite(40, 0, icon04);
      m.writeSprite(32, 0, icon03);
      m.writeSprite(24, 0, icon02);
      m.writeSprite(16, 0, icon01);
      delay(200);
      counter++;
    }
    if (counter >= 18) {
      m.writeSprite(64, 0, Glitch04L);
      m.writeSprite(72, 0, Glitch03L);
      m.writeSprite(80, 0, Glitch02L);
      m.writeSprite(88, 0, Glitch01L);
      m.writeSprite(16, 0, Glitch01);
      m.writeSprite(24, 0, Glitch02);
      m.writeSprite(32, 0, Glitch03);
      m.writeSprite(40, 0, Glitch04);
      delay(75);
      counter = 0;
    }
    */
    break;
    
  case 3:                             //fourth button press: Cute emotion(arrow eyes)
    m.writeSprite(104, 0, cute_eye_L1);
    m.writeSprite(96, 0, cute_eye_L2);
    m.writeSprite(8, 0, cute_eye_R1);
    m.writeSprite(0, 0, cute_eye_R2);
    Change_expression_mouth(0);
    break;
    
  case 4:                             //fifth button press: boring emotion(half oval eyes)
    m.writeSprite(104, 0, boring_eyes_L1);
    m.writeSprite(96, 0, boring_eyes_L2);
    m.writeSprite(8, 0, boring_eye_R1);
    m.writeSprite(0, 0, boring_eye_R2);
    Change_expression_mouth(0);
    break;

  case 5:                             //seventh button press: dying emotion(X eyes)
    // 오른쪽, 왼쪽 눈 구현
    m.writeSprite(104, 0, dying_eye_L1);
    m.writeSprite(96, 0, dying_eye_L2);
    m.writeSprite(8, 0, dying_eye_R1);
    m.writeSprite(0, 0, dying_eye_R2);
    Change_expression_mouth(1);
    break;
  case 6:                             //eighth button press: dying emotion(dizzy eyes)
    m.writeSprite(104, 0, dizzy_eye_L1);
    m.writeSprite(96, 0, dizzy_eye_L2);
    m.writeSprite(8, 0, dizzy_eye_R1);
    m.writeSprite(0, 0, dizzy_eye_R2);
    Change_expression_mouth(2);
    break;
  case 7:
    break;
  case 8:
    break;
  case 9:
    break;
  case 10:
    break;
  case 11:
    break;
  case 12:
    break;
  case 13:
    break;
  case 14:
    break;
  case 15:
    break;
  default:
    break;
  }
}

void Change_expression_mouth(int num) {
  switch (num) {
  case 0: //기본 코,입
    m.writeSprite(56, 0, noseLeft);
    m.writeSprite(48, 0, noseRight);

    m.writeSprite(88, 0, icon01L);
    m.writeSprite(80, 0, icon02L);
    m.writeSprite(72, 0, icon03L);
    m.writeSprite(64, 0, icon04L);

    m.writeSprite(40, 0, icon04);
    m.writeSprite(32, 0, icon03);
    m.writeSprite(24, 0, icon02);
    m.writeSprite(16, 0, icon01);
    break;
  case 1: //seventh button press: dying emotion(X eyes)
    /*
    case 5번 실행 시, 동시 실행됨.
    */
    m.writeSprite(56, 0, noseLeft);
    m.writeSprite(48, 0, noseRight);

    // 오른쪽 입 구현
    m.writeSprite(88, 0, dying_mouth_R1);
    m.writeSprite(80, 0, dying_mouth_R2);
    m.writeSprite(72, 0, dying_mouth_R3);
    m.writeSprite(64, 0, dying_mouth_R4);

    // 왼쪽 입 구현
    m.writeSprite(40, 0, dying_mouth_L1);
    m.writeSprite(32, 0, dying_mouth_L2);
    m.writeSprite(24, 0, dying_mouth_L3);
    m.writeSprite(16, 0, dying_mouth_L4);
    break;

  case 2: //eighth button press: dying emotion(dizzy eyes)
    /*
    case 6번 실행 시, 동시 실행됨.
    */
    m.writeSprite(56, 0, noseLeft);
    m.writeSprite(48, 0, noseRight);

    // 오른쪽 입 구현
    m.writeSprite(88, 0, dizzy_mouth_R1);
    m.writeSprite(80, 0, dizzy_mouth_R2);
    m.writeSprite(72, 0, dizzy_mouth_R3);
    m.writeSprite(64, 0, dizzy_mouth_R4);

    // 왼쪽 입 구현
    m.writeSprite(40, 0, dizzy_mouth_L1);
    m.writeSprite(32, 0, dizzy_mouth_L2);
    m.writeSprite(24, 0, dizzy_mouth_L3);
    m.writeSprite(16, 0, dizzy_mouth_L4);
    break;
  default:
    break;
  }
}
