#ifndef __DEFINE
#define __DEFINE
int player = 1;
const long BAUDRATE = 115200;
const int TIMEOUT = 1000;
const byte EN_PIN = 2;
IcsHardSerialClass krs(&Serial, EN_PIN, BAUDRATE, TIMEOUT);
const byte EN_PIN1 = 15;
IcsHardSerialClass krs1(&Serial1, EN_PIN1, BAUDRATE, TIMEOUT);
const byte EN_PIN2 = 13;
IcsHardSerialClass krs2(&Serial2, EN_PIN2, BAUDRATE, TIMEOUT);

unsigned  int angle[30], stretch[30], speed[30];
unsigned int buff[30][3];
int cnt_time = 0;
int flag[30][3];

#define LED_PIN1 4
#define LED_PIN2 5

int ltimer;

#endif