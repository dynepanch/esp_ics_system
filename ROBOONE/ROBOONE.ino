#include <IcsHardSerialClass.h> // 近藤サーボ用のヘッダーファイル
#include <Ps3Controller.h>      // コントローラ用ヘッダー
#include "comand.h"      // コントローラ用ヘッダー
#include "define.h"

hw_timer_t* typerion = NULL;
unsigned int servo_timer=0;
unsigned int flag_timer=0;

void IRAM_ATTR onTimer() {
  cnt_time+=1;
  ltimer+=1;
  servo_timer++;
}

void setup() {
  static int i=0;
  Serial1.begin(115200, SERIAL_8N1, 26, 27);
  Serial2.begin(115200);
  Serial.begin(115200);
  krs.begin();
  krs1.begin();
  krs2.begin();
  toruqe_off();
  delay(1000);
  start();

  delay(1000);
  servo_move();
  Ps3.attachOnConnect(onConnect);
  Ps3.begin("3c:e9:0e:8c:45:26");
  
  pinMode(LED_PIN1, OUTPUT);  // LEDの出力設定
  pinMode(LED_PIN2, OUTPUT);
  
  delay(500);
   // タイマーの設定
  typerion = timerBegin(0,getApbFrequency() / 1000000, true);  // 80はAPBクロックの分周比を指定
  timerAttachInterrupt(typerion, &onTimer, true);
  timerAlarmWrite(typerion, 400, true);
  timerAlarmEnable(typerion);
}

void loop() {
  int i,j;
  if (Ps3.isConnected()){  
        CNTR_PUTS();
    }else{
      start();
    }
  servo_move();    
  
  
  //Ps3.setPlayer(player);
  //LEDOUT(0x01);
  //Serial.println(Ps3.data.analog.button.l2);
}
