#include "comand.h"      // コントローラ用ヘッダー
#include <Ps3Controller.h>      // コントローラ用ヘッダー

unsigned int ps3_cmmand_1() {
  static unsigned int ps3_cmd = 0xff;
  if (Ps3.event.button_down.left) ps3_cmd &= 0x7f;
  if (Ps3.event.button_up.left) ps3_cmd |= 0x80;
  if (Ps3.event.button_down.down) ps3_cmd &= 0xbf;
  if (Ps3.event.button_up.down) ps3_cmd |= 0x40;
  if (Ps3.event.button_down.right) ps3_cmd &= 0xdf;
  if (Ps3.event.button_up.right) ps3_cmd |= 0x20;
  if (Ps3.event.button_down.up) ps3_cmd &= 0xef;
  if (Ps3.event.button_up.up) ps3_cmd |= 0x10;
  if (Ps3.event.button_down.start) ps3_cmd &= 0xf7;
  if (Ps3.event.button_up.start) ps3_cmd |= 0x08;
  if (Ps3.event.button_down.r3) ps3_cmd &= 0xfb;
  if (Ps3.event.button_up.r3) ps3_cmd |= 0x04;
  if (Ps3.event.button_down.l3) ps3_cmd &= 0xfd;
  if (Ps3.event.button_up.l3) ps3_cmd |= 0x02;
  if (Ps3.event.button_down.select) ps3_cmd &= 0xfe;
  if (Ps3.event.button_up.select) ps3_cmd |= 0x01;
  return ps3_cmd;
}
unsigned int ps3_cmmand_2() {
  static unsigned int ps3_cmd = 0xff;
  if (Ps3.event.button_down.square) ps3_cmd &= 0x7f;
  if (Ps3.event.button_up.square) ps3_cmd |= 0x80;
  if (Ps3.event.button_down.cross) ps3_cmd &= 0xbf;
  if (Ps3.event.button_up.cross) ps3_cmd |= 0x40;
  if (Ps3.event.button_down.circle) ps3_cmd &= 0xdf;
  if (Ps3.event.button_up.circle) ps3_cmd |= 0x20;
  if (Ps3.event.button_down.triangle) ps3_cmd &= 0xef;
  if (Ps3.event.button_up.triangle) ps3_cmd |= 0x10;
  if (Ps3.event.button_down.r1) ps3_cmd &= 0xf7;
  if (Ps3.event.button_up.r1) ps3_cmd |= 0x08;
  if (Ps3.event.button_down.l1) ps3_cmd &= 0xfb;
  if (Ps3.event.button_up.l1) ps3_cmd |= 0x04;
  if (Ps3.data.analog.button.r2>40) ps3_cmd &= 0xfd;
  if (Ps3.data.analog.button.r2<40) ps3_cmd |= 0x02;
  if (Ps3.data.analog.button.l2>40) ps3_cmd &= 0xfe;
  if (Ps3.data.analog.button.l2<40) ps3_cmd |= 0x01;
  return ps3_cmd;
}
unsigned int CONTLLOR(void){
  static int cont_1= ps3_cmmand_2();
  static int cont_2= ps3_cmmand_1();
  cont_1= ps3_cmmand_2();
  cont_2= ps3_cmmand_1();
  
  
  return cont_1 | cont_2*0x100;
}