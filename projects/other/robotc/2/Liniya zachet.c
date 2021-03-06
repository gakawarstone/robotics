#pragma config(Sensor, S1,     Us,             sensorEV3_Ultrasonic)
#pragma config(Sensor, S2,     L1,             sensorEV3_Color)
#pragma config(Sensor, S3,     L2,             sensorEV3_Color)
#pragma config(Motor,  motorB,          mB,            tmotorEV3_Large, PIDControl, reversed, encoder)
#pragma config(Motor,  motorC,          mC,            tmotorEV3_Large, PIDControl, reversed, encoder)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{
int v=20;
int gr1=SensorValue[L1];
int gr2=SensorValue[L2];
float err;
int Sold;
float u, up, ud;
float kp=1;
float kd=15;

while(true){
	err=(SensorValue[L1]-gr1)-(SensorValue[L2]-gr2);
	up=kp*err;
	ud=kd*(err-Sold);
	u=up+ud;
	motor[mB]=v+u;
	motor[mC]=v-u;
	Sold=err;
	wait1Msec(1);
}


}
