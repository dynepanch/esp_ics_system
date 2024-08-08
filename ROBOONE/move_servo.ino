#include <IcsHardSerialClass.h> // 近藤サーボ用のヘッダーファイル

void set_angle(int id, int angle_buff) {
    angle[id] = 7500 + angle_buff * (int)(11500 - 3500) / 270;
}
void set_strech_num(int id,int angle_buff) {
   if(angle_buff != buff[id][0]){
    stretch[id] = angle_buff;
    buff[id][0]=angle_buff;
    flag[id][0]=1;
   }
}
void set_speed_num(int id,int angle_buff) {
   if(angle_buff != buff[id][1]){
    stretch[id] = angle_buff;
    buff[id][1]=angle_buff;
    flag[id][1]=1;
   }
}
void servo_free(int id) {
  angle[id] = 0;
}

void servo_send(byte serial,byte id){
  static unsigned int counter[30];
  switch(serial){
    case 0:
      if(angle[id]==0){
        krs.setFree(id);
        break;
      }else if(flag[id][0]==1){
        krs.setStrc(id,stretch[id]);
        flag[id][0]=0;
        break;
      }else if(flag[id][1]==1){
        krs.setSpd(id,speed[id]);
        flag[id][1]=0;
        break;
      }else if((angle[id]>3500 || angle[id]<11500)){
        krs.setPos(id,angle[id]);
        flag[id][2]=0;
        break;
      }
    
    break;

    case 1:
      if(angle[id]==0){
        krs1.setFree(id);
        break;
      }else if(flag[id][0]==1){
        krs1.setStrc(id,stretch[id]);
        flag[id][0]=0;
        break;
      }else if(flag[id][1]==1){
        krs1.setSpd(id,speed[id]);
        flag[id][1]=0;
        break;
      }else if((angle[id]>3500 || angle[id]<11500)){
        krs1.setPos(id,angle[id]);
        flag[id][2]=0;
        break;
      }
    
    break;

    case 2:
      if(angle[id]==0){
        krs2.setFree(id);
        break;
      }else if(flag[id][0]==1){
        krs2.setStrc(id,stretch[id]);
        flag[id][0]=0;
        break;
      }else if(flag[id][1]==1){
        krs2.setSpd(id,speed[id]);
        flag[id][1]=0;
        break;
      }else if((angle[id]>3500 || angle[id]<11500)){
        krs2.setPos(id,angle[id]);
        flag[id][2]=0;
        break;
      }
    break;

  }
  
}

void servo_move(void) {
  if(servo_timer>80){
    servo_timer=0;
  }else if(servo_timer>70){
    servo_send(1,12);
  }else if(servo_timer>60){
    servo_send(1,11);
    servo_send(2,8);
  }else if(servo_timer>50){
    servo_send(2,7);
    servo_send(1,10);
  }else if(servo_timer>40){
    servo_send(0,16);
    servo_send(1,18);
    servo_send(2,6);
  }else if(servo_timer>30){
    servo_send(0,15);
    servo_send(1,17);
    servo_send(2,13);
  }else if(servo_timer>20){
    servo_send(0,2);
    servo_send(1,5);
  }else if(servo_timer>10){
    servo_send(0,1);
    servo_send(1,4);
    servo_send(2,14);
  }else{
    servo_send(0,0);
    servo_send(1,3);
    servo_send(2,9);
  }
    
}