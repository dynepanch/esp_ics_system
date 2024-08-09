/*
   -- controler --
   
   This source code of graphical user interface 
   has been generated automatically by RemoteXY editor.
   To compile this code using RemoteXY library 3.1.13 or later version 
   download by link http://remotexy.com/en/library/
   To connect using RemoteXY mobile app by link http://remotexy.com/en/download/                   
     - for ANDROID 4.13.13 or later version;
     - for iOS 1.10.3 or later version;
    
   This source code is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.    
*/

//////////////////////////////////////////////
//        RemoteXY include library          //
//////////////////////////////////////////////

// you can enable debug logging to Serial at 115200
//#define REMOTEXY__DEBUGLOG    

// RemoteXY select connection mode and include library 
#define REMOTEXY_MODE__ESP32CORE_BLUETOOTH

#include <BluetoothSerial.h>

// RemoteXY connection settings 
#define REMOTEXY_BLUETOOTH_NAME "step_clim"
#define REMOTEXY_ACCESS_PASSWORD "pass"


#include <RemoteXY.h>

// RemoteXY GUI configuration  
#pragma pack(push, 1)  
uint8_t RemoteXY_CONF[] =   // 77 bytes
  { 255,5,0,0,0,70,0,17,0,0,0,8,2,106,200,200,84,1,1,4,
  0,5,201,12,143,143,2,4,73,73,32,16,8,31,3,34,17,39,105,69,
  3,64,14,133,2,26,1,55,83,57,57,129,12,61,61,0,164,31,229,174,
  159,232,161,140,0,3,30,69,39,105,80,63,46,17,131,5,26 };
  
// this structure defines all the variables and events of your control interface 
struct {

    // input variables
  int8_t joystick_01_x; // from -100 to 100
  int8_t joystick_01_y; // from -100 to 100
  uint8_t select_01; // from 0 to 5
  uint8_t button_01; // =1 if button pressed, else =0
  uint8_t select_02; // from 0 to 3

    // other variable
  uint8_t connect_flag;  // =1 if wire connected, else =0

} RemoteXY;   
#pragma pack(pop)
 
/////////////////////////////////////////////
//           END RemoteXY include          //
/////////////////////////////////////////////


#include <IcsHardSerialClass.h>


const long BAUDRATE = 115200;
const int TIMEOUT = 1000;		//通信できてないか確認用にわざと遅めに設定
const byte EN_PIN = 2;
IcsHardSerialClass krs(&Serial,EN_PIN,BAUDRATE,TIMEOUT);  //インスタンス＋ENピン(2番ピン)およびUARTの指定

const byte EN_PIN1 = 15;
IcsHardSerialClass krs1(&Serial1,EN_PIN1,BAUDRATE,TIMEOUT);  //インスタンス＋ENピン(2番ピン)およびUARTの指定

const byte EN_PIN2 = 13;
IcsHardSerialClass krs2(&Serial2,EN_PIN2,BAUDRATE,TIMEOUT);  //インスタンス＋ENピン(2番ピン)およびUARTの指定
int angle[10];

void set_angle(int id , int angle_buff){
  angle[id]=7500+angle_buff*(int)(11500-3500)/270;
}

#define pomp_PIN1 23
#define pomp_PIN2 22
void pomp(int mode)
{
  switch(mode){
    case 0:
     digitalWrite(pomp_PIN1, LOW);
     digitalWrite(pomp_PIN2, LOW);
    break;

    case 1:
     digitalWrite(pomp_PIN1, HIGH);
     digitalWrite(pomp_PIN2, LOW);
    break;

    case 2:
     digitalWrite(pomp_PIN1, LOW);
     digitalWrite(pomp_PIN2, HIGH);
    break;  

    default:
     digitalWrite(pomp_PIN1, LOW);
     digitalWrite(pomp_PIN2, LOW);
    break;
  }
}
void setup() 
{
  RemoteXY_Init (); 
  pinMode(pomp_PIN1, OUTPUT);
  pinMode(pomp_PIN2, OUTPUT);
  krs.begin();  //サーボモータの通信初期設定
  krs1.begin();  //サーボモータの通信初期設定
  krs2.begin();  //サーボモータの通信初期設定
  // TODO you setup code
  
}
void move_servo(void){
  static int time;
  time++;
 if(time>30){
  time=0;
 }else if(time>20){  
    krs.setPos(2,angle[2]);
    krs2.setPos(4,angle[4]);
    krs1.setPos(9,angle[9]);
  }else if(time>10){
    krs.setPos(0,angle[0]);
    krs2.setPos(5,angle[5]);
  }else{
    krs1.setPos(7,angle[7]);
    krs.setPos(1,angle[1]);
  }
}
void motor_1(int left,int right){
  left*=-1;
  set_angle(4,right);
  set_angle(5,left);
}
void motor_2(int left,int right){
  //left*=-1;
  set_angle(9,right);
  set_angle(7,left);
}
void free(int id){
  angle[id]=0;
}
void unit_1_move(){
  if(RemoteXY.joystick_01_y>10){
    motor_1(10,10);
  }else if(RemoteXY.joystick_01_y<-10){
    motor_1(-10,-10);
  }else if(RemoteXY.joystick_01_x>10){
    motor_1(10,-10);
  }else if(RemoteXY.joystick_01_x<-10){
    motor_1(-10,10);
  }else{
    motor_1(0,0);
  }

}
void home_potision(){
  set_angle(0,135);
  set_angle(1,-135);
  set_angle(2,135);
}
void loop() 
{ 
  static unsigned int i=0,time=0;
  RemoteXY_Handler ();
  move_servo();
  
  unit_1_move();
  if(RemoteXY.select_02==1){
    pomp(1);
  }else if(RemoteXY.select_02==2){
    pomp(2);
  }else{
    pomp(0);
  }
  switch(RemoteXY.select_01){
    case 0:
      if(i==2){
        set_angle(0,100);
        set_angle(2,100);
        set_angle(1,60);
        move_servo();
        time++;
        if(time>1000){
         i=3;
         time=0;
        }
      }else if(RemoteXY.button_01==1){
        set_angle(0,100);
        set_angle(2,100);
        move_servo();
        time++;
        if(time>1000){
         i=2;
         time=0;
        }
      }else if(i==0){
        home_potision();
        i=1;
      }else{
        time=0;
      }
    break;
  }
  // TODO you loop code
  // use the RemoteXY structure for data transfer
  // do not call delay(), use instead RemoteXY_delay() 


}