#pragma config(Sensor, S1,     C1,             sensorNone)
#pragma config(Sensor, S2,     C2,             sensorNone)
#pragma config(Motor,  motorB,          mB,            tmotorEV3_Large, PIDControl, encoder)
#pragma config(Motor,  motorC,          mC,            tmotorEV3_Large, PIDControl, encoder)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{
int x=0;

while(x<3)
{
if(SensorValue[C1]>28){
	if(SensorValue[C2]>40){
		motor[motorB]=30;
		motor[motorC]=30;
	}
	else{
		motor[motorB]=30;
		motor[motorC]=0;
	}
	}
	else{
	if(SensorValue[C2]>40){
	motor[motorB]=0;
		motor[motorC]=30;
	}
	else{
	motor[motorB]=30;
		motor[motorC]=30;
		x=x+1;
		wait1Msec(200);
	}
}
wait1Msec(1);
	nMotorEncoder[motorB]=0;
while(nMotorEncoder[mB]<500){
motor[motorB]=30;
		motor[motorC]=-30;}


}
}