void leftarm(int hasami,int kubi,int hizi,int ude,int kata){
	
	if(kata<360){
		set_angle(1,kata);
	}else{
		servo_free(1);
	}
	if(ude<360){
		ude*=-1;
		set_angle(2,ude);
	}else{
		servo_free(2);
	}
	if(kubi<360){
		kubi*=-1;
		set_angle(0,kubi);
	}else{
		servo_free(0);
	}
	if(hizi<360){
		hizi-=5;
		hizi*=-1;
		set_angle(15,hizi);
	}else{
		servo_free(15);
	}
	if(hasami<360){
		set_angle(16,hasami);
	}else{
		servo_free(16);
	}
}
void leftarm_strech(int hasami,int kubi,int hizi,int ude,int kata){
	set_strech_num(2,kata);
	set_strech_num(1,ude);
	set_strech_num(0,kubi);
	set_strech_num(15,hizi);
	set_strech_num(16,hasami);
}
void leftarm_speed(int hasami,int kubi,int hizi,int ude,int kata){
	set_speed_num(2,kata);
	set_speed_num(1,ude);
	set_speed_num(0,kubi);
	set_speed_num(15,hizi);
	set_speed_num(16,hasami);
}
void rightarm(int hasami,int kubi,int hizi,int ude,int kata){
	if(kata<360){
		kata*=-1;
		set_angle(5,kata);
	}else{
		servo_free(5);
	}
	if(ude<360){
		ude*=-1;
		ude+=10;
		set_angle(4,ude);
	}else{
		servo_free(4);
	}
	if(kubi<360){
		kubi-=3;
		kubi*=-1;
		set_angle(3,kubi);
	}else{
		servo_free(3);
	}
	if(hizi<360){
		set_angle(17,hizi);
	}else{
		servo_free(17);
	}
	if(hasami<360){
		set_angle(18,hasami);
	}else{
		servo_free(18);
	}
	
}
void rightarm_strech(int hasami,int kubi,int hizi,int ude,int kata){
	set_strech_num(5,kata);
	set_strech_num(4,ude);
	set_strech_num(3,kubi);
	set_strech_num(17,hizi);
	set_strech_num(18,hasami);
}
void rightarm_speed(int hasami,int kubi,int hizi,int ude,int kata){
	set_speed_num(5,kata);
	set_speed_num(4,ude);
	set_speed_num(3,kubi);
	set_speed_num(17,hasami);
	set_speed_num(18,hizi);
}
void rightleg(int mata,int momo,int hiza,int kubi){
	
	if(mata<360){
		mata*=-2;
		mata+=20;
		set_angle(13,mata);
	}else{
		servo_free(13);
	}
	if(momo<360){
		momo*=-2;
		momo+=45;
		set_angle(12,momo);
	}else{
		servo_free(12);
	}
	if(hiza<360){
		hiza*=2;
		hiza+=50;
		set_angle(11,hiza);
	}else{
		servo_free(11);
	}
	if(kubi<360){
		kubi*=-2;
		//kubi+=10;
		set_angle(10,kubi);
	}else{
		servo_free(10);
	}
	
}
void rightleg_strech(int mata,int momo,int hiza,int kubi){
	set_strech_num(13,mata);
	set_strech_num(12,momo);
	set_strech_num(11,hiza);
	set_strech_num(10,kubi);	
}
void rightleg_speed(int mata,int momo,int hiza,int kubi){
	set_speed_num(13,mata);
	set_speed_num(12,momo);
	set_speed_num(11,hiza);
	set_speed_num(10,kubi);	
}
void leftleg(int mata,int momo,int hiza,int kubi){
	if(mata<360){
		mata+=5;
    mata*=2;
		set_angle(9,mata);
	}else{
		servo_free(9);
	}
	if(momo<360){
		momo*=-2;
		momo+=40;
		set_angle(8,momo);
	}else{
		servo_free(8);
	}
	if(hiza<360){
		hiza*=2;
		hiza+=40;
		set_angle(7,hiza);
	}else{
		servo_free(7);
	}
	if(kubi<360){
		kubi+=15;
		kubi*=2;
		set_angle(6,kubi);	
	}else{
		servo_free(6);
	}
}
void leftleg_strech(int mata,int momo,int hiza,int kubi){
	set_strech_num(9,mata);
	set_strech_num(8,momo);
	set_strech_num(7,hiza);
	set_strech_num(6,kubi);	
}
void leftleg_speed(int mata,int momo,int hiza,int kubi){
	set_speed_num(9,mata);
	set_speed_num(8,momo);
	set_speed_num(7,hiza);
	set_speed_num(6,kubi);	
}
void kosi(int kosi){
	if(kosi<360){
		kosi+=7;
		set_angle(14,kosi);
	}else{
		servo_free(14);
	}
}
void kosi_strech(int kosi){
	set_strech_num(14,kosi);
}
void kosi_speed(int kosi){
	set_speed_num(14,kosi);
}
void start(void){
  rightarm(0,0,0,0,0);
  leftarm(0,0,0,0,0);
  rightleg(0,0,0,0);
  leftleg(0,0,0,0);
  kosi(0);
  rightarm_speed(127,127,127,127,127);
  leftarm_speed(127,127,127,127,127);
  rightleg_speed(127,127,127,127);
  leftleg_speed(127,127,127,127);
}

void zerro_ALL(void){
	rightarm(0,0,0,0,0);
	leftarm(0,0,0,0,0);
	rightleg(0,0, 0, 0);
	leftleg(0,0, 0, 0);
	kosi(0);

	rightarm_strech(30,90,60,90,90);
	leftarm_strech(30,90,60,90,90);
	rightleg_strech(90,90,90,60);
	leftleg_strech(90,90,90,60);
	kosi_strech(60);

	rightarm_speed(127,127,127,127,127);
	leftarm_speed(127,127,127,127,127);
	rightleg_speed(127,127,127,127);
	leftleg_speed(127,127,127,127);
  kosi_speed(127);
}
void toruqe_off(void){
	rightarm(360,360,360,360,360);
	leftarm(360,360,360,360,360);
	rightleg(360,360, 360, 360);
	leftleg(360,360, 360, 360);
	kosi(360);
}
void bace(int mode){
	switch(mode){
		case 0:
			rightarm(0,0,90,360,0);
			leftarm(0,0,90,360,0);
		break;
	}
	rightleg(15,30, -50, -20);
	leftleg(15,30, -50, -20);
	kosi(0);

	rightarm_strech(10,90,60,90,90);
	leftarm_strech(10,90,60,90,90);
	rightleg_strech(100,90,100,90);
	leftleg_strech(100,90,100,90);
	kosi_strech(30);

	rightarm_speed(127,127,127,127,127);
	leftarm_speed(127,127,127,127,127);
	rightleg_speed(127,127,127,127);
	leftleg_speed(127,127,127,127);	
}
void syagami(int mode){
	switch(mode){
		case 0:
			rightarm(0,-40,90,50,0);
			leftarm(0,-40,90,50,0);
			kosi(0);
		break;
	}
	if(cnt_time>1000){
		rightleg(10,360, 360, -20);
		leftleg(10,360, 360, -20);
	}else if(cnt_time>500){
		rightleg(10,80, -80, -20);
		leftleg(10,80, -80, -20);
	}else{
		rightleg(10,60, -70, -20);
		leftleg(10,60, -70, -20);
	}
}
void stand_back(int mode){
	switch(mode){
		case 0:
		rightleg(20,80, -80, -20);
		leftleg(20,80, -80, -20);
		if(cnt_time>3700){	
			rightarm(0,0,90,60,0);
			leftarm(0,0,90,60,0);
			kosi(0);
		}else if(cnt_time>2700){
			rightarm(0,0,90,60,-70);
			leftarm(0,0,90,60,-70);
			kosi(0);
		}else if(cnt_time>1700){
			rightarm(0,0,90,60,-70);
			leftarm(0,0,90,60,-70);
			kosi(0);
		}else if(cnt_time>700){
			rightarm(0,-90,90,-60,-70);
			leftarm(0,-90,90,-60,-70);
			kosi(0);
		}else{
			rightarm(0,-90,90,-60,0);
			leftarm(0,-90,90,-60,0);
			kosi(0);
		}
		break;

    case 1:
    rightarm_strech(10,100,60,90,90);
    leftarm_strech(10,100,60,90,90);
    rightleg_strech(100,90,100,90);
    leftleg_strech(100,90,100,90);
    kosi_strech(100);
    kosi(0);
      if(cnt_time>5000){
        rightarm(0,0,90,50,-80);
        leftarm(0,0,90,50,-80);
        rightleg(20,80, -80, -20);
		    leftleg(20,80, -80, -20);
      }else if(cnt_time>3000){
        rightarm(0,0,90,-10,-80);
        leftarm(0,0,90,-10,-80);
        rightleg(20,80, -80, -20);
		    leftleg(20,80, -80, -20);
      }else if(cnt_time>2000){
        rightarm(0,90,90,-10,-80);
        leftarm(0,90,90,-10,-80);
        rightleg(20,30, -30, -20);
		    leftleg(20,30, -30, -20);
      }else if(cnt_time>1000){
        rightarm(0,90,90,50,-80);
        leftarm(0,90,90,50,-80);
        rightleg(20,30, -30, -20);
		    leftleg(20,30, -30, -20);
      }else{
        rightarm(0,40,90,50,0);
        leftarm(0,40,90,50,0);
        rightleg(20,40, -40, -20);
		    leftleg(20,40, -40, -20);
      }
    break;
	}
}
void stand_flont(int mode){
	switch(mode){
		case 0:
		rightleg(20,80, -80, -20);
		leftleg(20,80, -80, -20);
		if(cnt_time>4000){	
			rightarm(0,0,90,50,0);
			leftarm(0,0,90,50,0);
			kosi(0);
		}else if(cnt_time>3000){
			rightarm(0,0,90,50,70);
			leftarm(0,0,90,50,70);
			kosi(0);
		}else if(cnt_time>2000){
			rightarm(0,0,90,50,70);
			leftarm(0,0,90,50,70);
			kosi(0);
		}else if(cnt_time>1000){
			rightarm(0,-90,90,-60,70);
			leftarm(0,-90,90,-60,70);
			kosi(0);
		}else{
			rightarm(0,-90,90,-60,0);
			leftarm(0,-90,90,-60,0);
			kosi(0);
		}
    break;

    case 1:
    rightarm_strech(10,100,60,90,90);
    leftarm_strech(10,100,60,90,90);
    rightleg_strech(100,90,100,90);
    leftleg_strech(100,90,100,90);
    kosi_strech(100);
    kosi(0);
      if(cnt_time>5000){
        rightarm(0,0,90,50,80);
        leftarm(0,0,90,50,80);
        rightleg(20,80, -80, -20);
		    leftleg(20,80, -80, -20);
      }else if(cnt_time>3000){
        rightarm(0,0,90,-10,80);
        leftarm(0,0,90,-10,80);
        rightleg(20,80, -80, -20);
		    leftleg(20,80, -80, -20);
      }else if(cnt_time>2000){
        rightarm(0,90,90,-10,80);
        leftarm(0,90,90,-10,80);
        rightleg(20,30, -30, -20);
		    leftleg(20,30, -30, -20);
      }else if(cnt_time>1000){
        rightarm(0,90,90,50,80);
        leftarm(0,90,90,50,80);
        rightleg(20,30, -30, -20);
		    leftleg(20,30, -30, -20);
      }else{
        rightarm(0,40,90,50,0);
        leftarm(0,40,90,50,0);
        rightleg(20,40, -40, -20);
		    leftleg(20,40, -40, -20);
      }
    break;
	}
}
void stand_side_L(void){
	rightarm_strech(60,90,60,90,90);
	leftarm_strech(60,90,60,90,90);
  kosi_strech(127);
	if(cnt_time>10000){	
			rightleg(40,80, -80, -60);
			leftleg(40,80, -80, -60);
			rightarm(0,0,90,60,80);
			leftarm(0,0,90,60,-80);
			kosi(0);
	}else if(cnt_time>5000){
			rightleg(40,80, -80, -60);
			leftleg(40,80, -80, -60);
			rightarm(20,0,90,60,80);
			leftarm(20,0,90,60,-80);
			kosi(0);
	}else if(cnt_time>1000){
			rightleg(40,80, -80, -60);
			leftleg(40,80, -80, -60);
			rightarm(20,0,90,-90,80);
			leftarm(20,0,90,-90,-80);
			kosi(0);
	}else{
			rightleg(40,30, -30, -60);
			leftleg(40,30, -30, -60);
			rightarm(20,0,90,-90,80);
			leftarm(20,0,90,-90,-80);
			kosi(0);		
		}

}
void stand_side_R(void){
	rightarm_strech(60,90,60,90,90);
	leftarm_strech(60,90,60,90,90);
  kosi_strech(127);
	if(cnt_time>10000){	
			rightleg(40,80, -80, -60);
			leftleg(40,80, -80, -60);
			rightarm(0,0,90,60,-80);
			leftarm(0,0,90,60,80);
			kosi(0);
	}else if(cnt_time>5000){
			rightleg(40,80, -80, -60);
			leftleg(40,80, -80, -60);
			rightarm(50,0,90,60,-80);
			leftarm(50,0,90,60,80);
			kosi(0);
	}else if(cnt_time>1000){
			rightleg(40,80, -80, -60);
			leftleg(40,80, -80, -60);
			rightarm(50,0,90,-90,-80);
			leftarm(50,0,90,-90,80);
			kosi(0);
	}else{
			rightleg(40,30, -30, -60);
			leftleg(40,30, -30, -60);
			rightarm(50,0,90,-90,-80);
			leftarm(50,0,90,-90,80);
			kosi(0);		
		}

}
void side_L(int mode){
	switch(mode){
		case 0:
			rightarm(0,0,90,40,0);
			leftarm(-10,0,90,50,0);
			kosi(0);
		break;
	}
	if(cnt_time>1000){
		cnt_time=0;
	}else if(cnt_time>500){
		leftleg(8,40, -40, -10);
		rightleg(5,40, -40, -30);
	}else{
		leftleg(20,40, -40, -30);
		rightleg(20,20, -20, -10);
	}	
		
}

void side_work_L(int mode){
	switch(mode){
		case 0:
			leftarm(0,0,90,50,0);
			rightarm(0,0,90,40,0);
			kosi(0);
		break;
	}

	if(cnt_time>2800){
		cnt_time=0;
	}else if(cnt_time>2300){
		leftleg(15,40, -40, -20);
		rightleg(15,40, -40, -20);
  }else if(cnt_time>1800){
		leftleg(5,60, -60, -10);
		rightleg(5,30, -30, -10);
	}else if(cnt_time>1300){
		leftleg(5,30, -30, -10);
		rightleg(5,40, -40, -10);
	}else if(cnt_time>1000){
		leftleg(5,40, -40, -10);
		rightleg(5,40, -40, -10);
	}else if(cnt_time>500){
		leftleg(5,30, -30, -10);
		rightleg(5,60, -60, -10);
	}else{
		leftleg(15,40, -40, 0);
		rightleg(10,10, -10, -40);
	}	
}
void side_R(int mode){
	switch(mode){
		case 0:
			rightarm(0,0,90,50,0);
			leftarm(0,0,90,40,0);
			kosi(0);
		break;
	}

	if(cnt_time>1000){
		cnt_time=0;
	}else if(cnt_time>500){
		rightleg(5,40, -40, -10);
		leftleg(10,40, -40, -30);
	}else{
		rightleg(20,40, -40, -30);
		leftleg(20,20, -20, -10);
	}	
}

void side_work_R(int mode){
	switch(mode){
		case 0:
			rightarm(0,0,90,50,0);
			leftarm(0,0,90,40,0);
			kosi(0);
		break;
	}

	if(cnt_time>2800){
		cnt_time=0;
	}else if(cnt_time>2300){
		rightleg(15,40, -40, -20);
		leftleg(15,40, -40, -20);
  }else if(cnt_time>1800){
		rightleg(5,60, -60, -10);
		leftleg(5,30, -30, -10);
	}else if(cnt_time>1300){
		rightleg(5,30, -30, -10);
		leftleg(5,40, -40, -10);
	}else if(cnt_time>1000){
		rightleg(5,40, -40, -10);
		leftleg(5,40, -40, -10);
	}else if(cnt_time>500){
		rightleg(5,30, -30, -10);
		leftleg(5,60, -60, -10);
	}else{
		rightleg(15,40, -40, 0);
		leftleg(10,10, -10, -40);
	}	
}

void roll_L(int mode){
  kosi_strech(100);
	switch(mode){
		case 0:
			rightarm(0,40,90,50,0);
			leftarm(0,40,90,50,0);
			
		break;
	}
	if(cnt_time>1000){
		cnt_time=0;
	}else if(cnt_time>500){
		rightleg(15,0, -0, -30);
		leftleg(15,0, -0, -30);
		kosi(40);
	}else{
		rightleg(15,50, -30, -15);
		leftleg(15,30, -50, -15);
		kosi(0);
	}
}
void roll_R(int mode){
  kosi_strech(100);
	switch(mode){
		case 0:
			rightarm(0,40,90,50,0);
			leftarm(0,40,90,50,0);
			
		break;
	}
	if(cnt_time>1000){
		cnt_time=0;
	}else if(cnt_time>500){
		rightleg(15,0, -0, -30);
		leftleg(15,0, -0, -30);
		kosi(-40);
	}else{
		rightleg(15,30, -50, -15);
		leftleg(15,50, -30, -15);
		kosi(0);
	}
}
void suri_flont(int mode){
  kosi_strech(100);
	switch(mode){
		case 0:
			rightarm(0,40,90,50,0);
			leftarm(0,40,90,50,0);
			
		break;
	}
	if(cnt_time>1200){
		cnt_time=0;
	}else if(cnt_time>600){
		rightleg(15,0, -40, -20);
		leftleg(15,40, -40, -5);
		kosi(-10);
	}else{
		rightleg(15,40, -40, -5);
		leftleg(15,0, -40, -20);
		kosi(10);
	}
}

void wolk_flont(int mode){
	rightarm_strech(60,90,30,90,90);
	leftarm_strech(60,90,30,90,90);
  kosi_strech(100);
  rightarm(0,40,90,50,0); 
	leftarm(0,40,90,50,0);
	
  if(cnt_time>3300){
		cnt_time=500;
	}else if(cnt_time>2800){
		rightleg(10,60, -20, -20);
		leftleg(10,20, -60, -10);
  }else if(cnt_time>2300){
		rightleg(10,60, -60, -10);
		leftleg(10,30, -30, -10);
    kosi(20);
  }else if(cnt_time>1800){
		rightleg(10,30, -30, -10);
		leftleg(10,40, -40, -10);
	}else if(cnt_time>1500){
		rightleg(10,20, -60, -10);
		leftleg(10,60, -20, -10);
	}else if(cnt_time>1000){
		rightleg(10,30, -30, -10);
		leftleg(10,60, -60, -20);
    kosi(-20);
	}else if(cnt_time>500){
		rightleg(10,40, -40, 0);
		leftleg(10,30, -30, -10);
	}else{
    rightleg(15,40, -40, 0);
		leftleg(10,10, -10, -40);
    kosi(0);
  }
}

void wolk_back(int mode){
	rightarm_strech(60,90,30,90,90);
	leftarm_strech(60,90,30,90,90);
  kosi_strech(100);
  rightarm(0,40,90,50,0);
	leftarm(0,40,90,50,0);
	
  if(cnt_time>3300){
		cnt_time=500;
	}else if(cnt_time>2800){
		rightleg(10,20, -60, -20);
		leftleg(10,60, -20, -10);
  }else if(cnt_time>2300){
		rightleg(10,60, -60, -10);
		leftleg(10,30, -30, -10);
    kosi(-20);
  }else if(cnt_time>1800){
		rightleg(10,30, -30, -10);
		leftleg(10,40, -40, -10);
	}else if(cnt_time>1500){
		rightleg(10,60, -20, -10);
		leftleg(10,20, -60, -10);
	}else if(cnt_time>1000){
		rightleg(10,30, -30, -10);
		leftleg(10,60, -60, -20);
    kosi(20);
	}else if(cnt_time>500){
		rightleg(10,40, -40, 0);
		leftleg(10,30, -30, -10);
	}else{
    rightleg(15,40, -40, 0);
		leftleg(10,10, -10, -40);
    kosi(0);
  }
}

void suri_back(int mode){
  kosi_strech(100);
	switch(mode){
		case 0:
			rightarm(0,40,90,50,0);
			leftarm(0,40,90,50,0);
			
		break;
	}
	if(cnt_time>1200){
		cnt_time=0;
	}else if(cnt_time>600){
		rightleg(15,40, -40, -20);
		leftleg(15,40, -0, -5);
		kosi(-5);
	}else{
		rightleg(15,40, -0, -5);
		leftleg(15,40, -40, -20);
		kosi(5);
	}
}
void fuck_L_high(void){
  kosi_strech(100);
	rightleg(25,40, -40, -35);
	leftleg(25,40, -40, -35);
	if(cnt_time>1000){
		rightarm(0,40,0,50,20);
		leftarm(0,40,0,0,80);		
		kosi(80);
	}else if(cnt_time>500){
		rightarm(0,40,0,50,20);
		leftarm(0,40,0,0,0);		
		kosi(80);
	}else{
		rightarm(0,40,0,50,20);
		leftarm(0,0,0,0,0);		
		
		kosi(0);
	}
}
void fuck_R_high(void){
  kosi_strech(100);
	rightleg(25,40, -40, -35);
	leftleg(25,40, -40, -35);
	if(cnt_time>1000){
		leftarm(0,40,0,50,20);
		rightarm(0,40,0,0,80);		
		kosi(-80);
	}else if(cnt_time>500){
		leftarm(0,40,0,50,20);
		rightarm(0,40,0,0,0);		
		kosi(-80);
	}else{
		leftarm(0,40,0,50,20);
		rightarm(0,0,0,0,0);		
		kosi(0);
	}
}
void fuck_L_low(void){
  kosi_strech(100);
	rightleg(20,40, -40, -30);
	leftleg(20,40, -40, -30);
	if(cnt_time>1000){
		rightarm(0,40,0,50,20);
		leftarm(30,40,0,40,80);		
		kosi(80);
	}else if(cnt_time>500){
		rightarm(0,40,0,50,20);
		leftarm(30,40,0,40,0);		
		kosi(80);
	}else{
		rightarm(0,40,0,50,20);
		leftarm(30,0,0,40,0);		
		kosi(0);
	}
}
void fuck_R_low(void){
  kosi_strech(100);
	rightleg(20,40, -40, -30);
	leftleg(20,40, -40, -30);
	if(cnt_time>1000){
		leftarm(0,40,0,50,20);
		rightarm(0,40,0,40,80);		
		kosi(-80);
	}else if(cnt_time>500){
		leftarm(0,40,0,50,20);
		rightarm(0,40,0,40,0);		
		kosi(-80);
	}else{
		leftarm(0,40,0,50,20);
		rightarm(0,0,0,40,0);		
		kosi(0);
	}
}
void harai_L(void){
	kosi_strech(100);
	rightleg(10,45, -40, -30);
	leftleg(10,45, -40, -30);
	if(cnt_time>1000){
		leftarm(10,-50,90,-50,30);
		rightarm(0,40,90,50,0);		
		kosi(60);
	}else if(cnt_time>500){
		leftarm(10,90,90,-50,60);
		rightarm(0,40,90,50,0);		
		kosi(30);
	}else{
		leftarm(10,90,90,50,60);
		rightarm(0,40,0,50,0);		
		kosi(30);
	}	
}
void harai_R(void){
  kosi_strech(100);
	rightleg(15,45, -40, -30);
	leftleg(15,45, -40, -30);
	if(cnt_time>1000){
		rightarm(10,-50,90,-50,30);
		leftarm(0,40,90,50,0);		
		kosi(-60);
	}else if(cnt_time>500){
		rightarm(10,90,90,-50,60);
		leftarm(0,40,90,50,0);		
		kosi(-30);
	}else{
		rightarm(10,90,90,50,60);
		leftarm(0,40,0,50,0);		
		kosi(-30);
	}	
}
void under_R(void){
  kosi_strech(100);
	rightarm_strech(60,90,60,90,90);
	leftarm_strech(60,90,60,90,90);
	rightleg_strech(100,10,100,90);
	leftleg_strech(100,10,100,90);
	rightleg(15,35, -45, -20);
	leftleg(15,35, -45, -20);
	leftarm(0,40,90,60,0);
	if(cnt_time>3000){
		rightarm(40,-90,90,-60,20);
		kosi(-70);
	}else if(cnt_time>2000){
		rightarm(5,-90,90,-60,20);
		kosi(-70);
	}else if(cnt_time>1500){
		rightarm(40,0,90,60,20);
		kosi(-70);
	}else if(cnt_time>1000){
		rightarm(40,50,90,60,20);	
		kosi(-60);
	}else{
		rightarm(40,0,90,60,20);
		kosi(-60);
	}
}
void under_L(void){
  kosi_strech(100);
	rightarm_strech(60,90,60,90,90);
	leftarm_strech(60,90,60,90,90);
	rightleg_strech(100,10,100,90);
	leftleg_strech(100,10,100,90);
	rightleg(15,35, -45, -20);
	leftleg(15,35, -45, -20);
	rightarm(0,40,90,60,0);
	if(cnt_time>3000){
		leftarm(40,-90,90,-60,20);
		kosi(70);
	}else if(cnt_time>2000){
		leftarm(5,-90,90,-60,20);
		kosi(70);
	}else if(cnt_time>1500){
		leftarm(40,0,90,60,20);
		kosi(70);
	}else if(cnt_time>1000){
		leftarm(40,50,90,60,20);
		kosi(60);
	}else{
		leftarm(40,0,90,60,20);
		kosi(60);
	}
}
void gurd(int mode){
  kosi_strech(100);
	switch(mode){
		case 0:
			rightarm(0,0,90,50,-20);
			leftarm(0,0,90,50,-20);
		break;
	}
	rightleg(30,20, -45, -60);
	leftleg(30,20, -45, -60);
	kosi(0);
}
void humikomi_L(){
  kosi_strech(100);
rightarm_strech(60,90,30,90,90);
	leftarm_strech(60,90,30,90,90);
	
	if(cnt_time>4100){ 
		leftarm(50,-20,90,-60,20);
		rightarm(-10,0,90,60,0);
		rightleg(15,-10, -70, -15);
		leftleg(15,70, 10, -15);
		kosi(70);
	}else if(cnt_time>3500){
		leftarm(0,20,90,-60,20);
		rightarm(0,30,90,60,0);
		rightleg(15,-10, -70, -15);
		leftleg(15,70, 10, -15);
		kosi(70);
	}else if(cnt_time>2900){
		leftarm(0,-40,90,70,20);
		rightarm(0,30,90,60,0);
		rightleg(15,-10, -70, -15);
		leftleg(15,70, 10, -15);
		kosi(70);
	}else if(cnt_time>2500){
		leftarm(70,-40,90,50,20);
		rightarm(0,0,90,50,0);
		rightleg(15,-10, -70, -15);
		leftleg(15,70, 10, -15);
		kosi(70);
	}else if(cnt_time>800){
		leftarm(50,-40,90,50,20);
		rightarm(0,0,90,50,0);
		rightleg(15,-20, -40, -10);
		leftleg(15,40, 20, -40);
		kosi(70);
	}else{
		leftarm(50,-40,90,50,20);
		rightarm(0,0,90,50,0);
		rightleg(15,40, -40, -10);
		leftleg(10,10, -10, -40);
		kosi(70);
	}
}
void humikomi_R(){
  kosi_strech(100);
	rightarm_strech(60,90,30,90,90);
	leftarm_strech(60,90,30,90,90);
	
	if(cnt_time>4100){ 
		rightarm(50,-20,90,-60,20);
		leftarm(-10,0,90,60,-20);
		leftleg(15,-10, -70, -15);
		rightleg(15,70, 10, -15);
		kosi(-70);
	}else if(cnt_time>3500){
		rightarm(0,20,90,-60,20);
		leftarm(0,30,90,60,-20);
		leftleg(15,-10, -70, -15);
		rightleg(15,70, 10, -15);
		kosi(-70);
	}else if(cnt_time>2900){
		rightarm(0,-40,90,70,20);
		leftarm(0,30,90,60,-20);
		leftleg(15,-10, -70, -15);
		rightleg(15,70, 10, -15);
		kosi(-70);
	}else if(cnt_time>2500){
		rightarm(70,-40,90,50,20);
		leftarm(0,0,90,50,-20);
		leftleg(15,-10, -70, -15);
		rightleg(15,70, 10, -15);
		kosi(-70);
	}else if(cnt_time>800){
		rightarm(50,-40,90,50,20);
		leftarm(0,0,90,50,-20);
		leftleg(15,-20, -40, 0);
		rightleg(15,40, 20, -40);
		kosi(-70);
	}else{
		rightarm(50,-40,90,50,20);
		leftarm(0,0,90,50,-20);
		leftleg(15,40, -40, -10);
		rightleg(10,10, -10, -40);
		kosi(-70);
	}


}
void zenten(void){
	kosi_strech(100);
	if(cnt_time>3500){
		rightarm(0,10,90,-60,80);
		leftarm(0,10,90,-60,80);
		rightleg(10,0, 0, -20);
		leftleg(10,0, 0, -20);
		kosi(0);
	}else if(cnt_time>3000){
		rightarm(0,10,90,-60,80);
		leftarm(0,10,90,-60,80);
		rightleg(10,70, -70, -20);
		leftleg(10,70, -70, -20);
		kosi(0);
	}else if(cnt_time>2000){
		rightarm(0,10,90,50,80);
		leftarm(0,10,90,50,80);
		rightleg(10,70, -70, -20);
		leftleg(10,70, -70, -20);
		kosi(0);
	}else{
		rightarm(0,60,90,60,80);
		leftarm(0,60,90,60,80);
		rightleg(10,-10, -70, -20);
		leftleg(10,-10, -70, -20);
		kosi(0);
	}
	
}