#pragma config(Sensor, S1,     Us,             sensorEV3_Ultrasonic)
#pragma config(Sensor, S3,     L,              sensorEV3_Color)
#pragma config(Motor,  motorB,          mB,            tmotorEV3_Large, PIDControl, encoder)
#pragma config(Motor,  motorC,          mC,            tmotorEV3_Large, PIDControl, encoder)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{
while (true)//povtor bescon
{
	nMotorEncoder[motorB]=0;
	motor [motorB]=50;
  motor [motorC]=50;
  while (SensorValue[L]>33)wait1Msec(1); //jdi temnee
  	wait1Msec(150);
	motor [motorB]=-50;
	motor [motorC]=-50;
	  while (nMotorEncoder[mB]>0)wait1Msec(1);
		motor [motorB]=0;
    motor [motorC]=0;
wait1Msec(500);
motor [motorB]=50;
	motor [motorC]=-50;
while (nMotorEncoder[mB]>95)wait1Msec(1);
motor [motorB]=0;
    motor [motorC]=0;
wait1Msec(500);
}
}