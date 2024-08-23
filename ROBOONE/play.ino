#include "comand.h"
#include <Ps3Controller.h>

void CNTR_PUTS(void){
  static int syaga=0,motion_mode=0,first=0,mode=0,LED_mode=0x01,flont=0,gur=0;
	switch (CONTLLOR()*motion_mode){
        case 0:
            
            if(CONTLLOR()==C_P_LEF){
                LED_mode=0x02;
                player=2;
                Ps3.setPlayer(player);
            }
            if(CONTLLOR()==C_P_RIG){
                LED_mode=0x01;
                player=1;
                Ps3.setPlayer(player);
            }
            if(CONTLLOR()==C_START){
                motion_mode=1;
            }
            if(CONTLLOR()==C_L2){
                player=3;
                Ps3.setPlayer(player);
                zerro_ALL();
            }else{
                toruqe_off();
            }
            LEDOUT(LED_mode);
        break;

        case C_START:
            switch(mode){
              case 0:
                rightarm(0,40,90,50,0);
                leftarm(0,40,90,50,0);
              break;
            }
                rightleg(15,30, -50, -20);
	              leftleg(15,30, -50, -20);
	              kosi(0);

                rightarm_strech(30,90,60,90,90);
                leftarm_strech(30,90,60,90,90);
                rightleg_strech(100,90,100,90);
                leftleg_strech(100,90,100,90);
                kosi_strech(60);

                rightarm_speed(127,127,127,127,127);
                leftarm_speed(127,127,127,127,127);
                rightleg_speed(127,127,127,127);
                leftleg_speed(127,127,127,127);
                kosi_speed(127);
        break;
        
        case C_START & C_RIGHT:
            if(first==0){
                first=1;
                cnt_time=0;
            }
            side_work_R(mode);
        break;

        case C_START & C_LEFT:
            if(first==0){
                first=1;
                cnt_time=0;
            }
            side_work_L(mode);
        break;

        case C_UP:
            if(first==0){
                first=1;
                cnt_time=0;
            }
            suri_flont(mode);
            flont=1;
        break;
        
        case C_UP & C_START:
            if(first==0){
                first=1;
                cnt_time=0;
            }
            wolk_flont(mode);
            flont=1;
        break;

        case C_DOWN & C_START:
            if(first==0){
                first=1;
                cnt_time=0;
            }
            wolk_back(mode);
            flont=1;
        break;

        case C_DOWN:
            if(first==0){
                first=1;
                cnt_time=0;
            }
            suri_back(mode);
        break;
        
        case C_RIGHT:
            if(first==0){
                first=1;
                cnt_time=0;
            }
            side_R(mode);
        break;
        
        case C_LEFT:
            if(first==0){
                first=1;
                cnt_time=0;
            }
            side_L(mode);
        break;
        
        case C_CR:
            if(first==0){
                first=1;
                cnt_time=0;
            }
           harai_R();
        break;

        case C_CR & C_UP:
            if(first==0){
                first=1;
                cnt_time=0;
            }
           under_R();
        break;

        case C_SQ & C_UP:
            if(first==0){
                first=1;
                cnt_time=0;
            }
           under_L();
        break;
        
        case C_TR:
            if(first==0){
                first=1;
                cnt_time=0;
            }
            gur=1;
            gurd(mode);
        break;
        
        case C_SQ:
            if(first==0){
                first=1;
                cnt_time=0;
            }
            harai_L();
        break;
        
        case C_PEC:
            if(first==0){
                first=1;
                cnt_time=0;
            }
            syagami(mode);
            syaga=1;
        break;

        case C_PEC & C_DOWN:
            if(first==0 || syaga==1){
                first=1;
                cnt_time=0;
                syaga=0;
            }
            stand_back(0);
        break;
        
        case C_TR & C_DOWN:
            if(first==0 || gur==1){
                first=1;
                cnt_time=0;
                gur=0;
            }
            stand_back(1);
        break;

        case C_PEC & C_RIGHT:
            if(first==0 || syaga==1){
                first=1;
                cnt_time=0;
                syaga=0;
            }
            stand_side_R();
        break;

        case C_PEC & C_LEFT:
            if(first==0 || syaga==1){
                first=1;
                cnt_time=0;
                syaga=0;
            }
            stand_side_L();
        break;

        case C_PEC & C_UP:
            if(first==0 || syaga==1){
                first=1;
                cnt_time=0;
                syaga=0;
            }
            stand_flont(0);
        break;
        
        case C_TR & C_UP:
            if(first==0 || gur==1){
                first=1;
                cnt_time=0;
                gur=0;
            }
            stand_flont(1);
        break;

        case C_L1:
            if(first==0){
                first=1;
                cnt_time=0;
            }
            roll_L(mode);
        break;

        case C_R1:
            if(first==0){
                first=1;
                cnt_time=0;
            }
            roll_R(mode);
        break;

        case C_R1 & C_L1:
            if(first==0){
                first=1;
                cnt_time=0;
            }
            zenten();
        break;

        case C_R2:
            if(first==0){
                first=1;
                cnt_time=0;
            }
            if(Ps3.data.analog.button.r2>200){
              fuck_R_high();
            }else{
              fuck_R_low();
            }
              
        break;

        case C_L2:
            if(first==0){
                first=1;
                cnt_time=0;
            }
            if(Ps3.data.analog.button.l2>200){
              fuck_L_high();
            }else{
              fuck_L_low();
            }
        break;
        
        case C_L2 & C_UP:
            if(first==0){
                first=1;
                cnt_time=0;
            }
            humikomi_L();
        break;

        case C_R2 & C_UP:
            if(first==0){
                first=1;
                cnt_time=0;
            }
            humikomi_R();
        break;

        case C_R2 & C_DOWN:
            if(first==0){
                first=1;
                cnt_time=0;
            }
            fuck_R_low();
        break;

        case C_L2 & C_DOWN:
            if(first==0){
                first=1;
                cnt_time=0;
            }
            fuck_L_low();
        break;

        case C_P_LEF:
            if(first==0){
                first=1;
                cnt_time=0;
            }
        break;

        case C_P_RIG:
            if(first==0){
                first=1;
                cnt_time=0;
            }
        break;
        
        
        case C_SEL:
            motion_mode=0;
        break;

        case C_DEF:
            if(first>0){
                cnt_time=0;
                first=0;
                kosi(0);
            }
            if(flont==1){
              rightarm(0,0,90,50,0);
			        leftarm(-10,0,90,50,0);
              rightleg(10,30, -30, -30);
	            leftleg(10,40, -40, -30);
	            kosi(0);
                if(cnt_time>1000){
                    flont=0;
                }
			    }else if(gur==1){
                rightleg(15,35, -45, -60);
	            leftleg(15,35, -45, -60);
	            kosi(0);
                if(cnt_time>1000){
                    gur=0;
                }      
            }else{
                LEDOUT(LED_mode);
                bace(mode);
            }
        break;
    }	
}