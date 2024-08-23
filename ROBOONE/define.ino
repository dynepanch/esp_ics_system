#include "define.h"


void LEDOUT(int mode) {
  if ((mode & 0x01)/0x01 == 1) {
    digitalWrite(LED_PIN1, LOW);
  } else {
    digitalWrite(LED_PIN1, HIGH);
  }
  if ((mode & 0x02)/0x02 == 1) {
    digitalWrite(LED_PIN2, LOW);
  } else {
    digitalWrite(LED_PIN2, HIGH);
  }
}
void onConnect() {
  // LEDOUT(0x00);
  Ps3.setRumble(100.0, 1000);
}
void ltica(void) {
  if (ltimer > 2000) {
    ltimer = 0;
  } else if (ltimer > 1000) {
    LEDOUT(0x03);
  } else {
    LEDOUT(0x00);
  }
}