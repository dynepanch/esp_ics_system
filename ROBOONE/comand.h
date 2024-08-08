#ifndef __COMAND
#define __COMAND
  #define C_DEF	0xffff	//�����
  #define C_LEFT	0x7fff	//��
  #define C_DOWN	0xbfff	//��
  #define C_RIGHT	0xdfff	//��
  #define C_UP	0xefff	//��

  #define C_START	0xf7ff	//start0
  #define C_P_RIG	0xfbff	//�E��������
  #define C_P_LEF	0xfdff	//����������
  #define C_SEL	0xfeff	//select

  #define C_SQ	0xff7f	//��
  #define C_PEC	0xffbf	//�~
  #define C_CR	0xffdf	//�Z
  #define C_TR	0xffef	//��

  #define C_R1	0xfff7	//R1
  #define C_L1	0xfffb	//L1
  #define C_R2	0xfffd	//R2
  #define C_L2	0xfffe	//L2

  unsigned int ps3_cmmand_1(void);
  unsigned int ps3_cmmand_2(void);
  unsigned int CONTLLOR(void);
  
#endif