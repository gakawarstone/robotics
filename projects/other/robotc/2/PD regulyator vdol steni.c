#pragma config(Sensor, S2,     Us,             sensorEV3_Ultrasonic)
#pragma config(Motor,  motorB,          mB,            tmotorEV3_Large, PIDControl, encoder)
#pragma config(Motor,  motorC,          mC,            tmotorEV3_Large, PIDControl, encoder)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{
int v=20;
int L=SensorValue[Us];
int Sold;
float u, up, ud;
float kp=2.5;
float kd=8.5;

while(true){

	up=kp*(SensorValue[S2]-L);
	ud=kd*(SensorValue[S2]-Sold);
	u=up+ud;
	motor[mB]=v+u;
	motor[mC]=v-u;
	Sold=SensorValue[S2];
	wait1Msec(1);
}


}