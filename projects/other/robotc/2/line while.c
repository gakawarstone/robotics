#pragma config(Sensor, S3,     L,              sensorEV3_Color)
#pragma config(Motor,  motorB,          mB,            tmotorEV3_Large, PIDControl, encoder)
#pragma config(Motor,  motorC,          mC,            tmotorEV3_Large, PIDControl, encoder)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{
while (true)//povtor bescon
{ motor [motorB]=50;
  motor [motorC]=0;
  while (SensorValue[S3]>33)wait1Msec(1); //jdi temnee
	motor [motorB]=0;
	motor [motorC]=50;
while (SensorValue[S3]<33)wait1Msec(1);// jdi svetlee
}
}
