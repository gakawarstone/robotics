#include<motors.h>
int greay_ev3 = 10;
int greay_nxt = 37;

bool crossroad()
{
	if(SensorValue[S3] <= greay_ev3 && SensorValue[S2] <= greay_nxt && SensorValue[S1] <= greay_nxt) return true;
	else return false;

}

void go_line(float k1,float k2,float kv,int vmax)
{
	////////////////////////////////
	/*float k1=1.5, //koeficent povorotlivosti
				k2=30,  // yskorenie
				kv=1;   //koeficent tormoghenia
	int 	vmax=70;*/
	////////////////////////////////
	int es=SensorValue[S1]-SensorValue[S2];
	int v , u ,err , errold=0, mB, mC;
	while(!crossroad())
	{
		err=SensorValue[S1]-SensorValue[S2]-es;
		u=k1*err+k2*(err-errold);
		errold=err;
		v=vmax-abs(u)*kv;
		mB=v+u;
		mC=v-u;
		if (abs(mB)>100) mB=sgn(mB)*100;
		if (abs(mC)>100) mB=sgn(mC)*100;
		motor[motorB]=mB;
		motor[motorC]=mC;
		wait1Msec(1);
	}
}
