#pragma config(Sensor, S1,     Us,             sensorEV3_Ultrasonic)
#pragma config(Motor,  motorB,          mB,            tmotorEV3_Large, PIDControl, encoder)
#pragma config(Motor,  motorC,          mC,            tmotorEV3_Large, PIDControl, encoder)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{
	float L, Sold,Snew, u, v=50, d=8;
	Sold=L=SensorValue[S1];
	while (true)
	{
	Snew=SensorValue[S1];
	if (Snew>L*2)
{
	u=v*d/L;
	Sold=2*L;
	}
	else
	{
		u=3*(Snew-L)+9*(Snew-Sold);
		Sold=Snew;
	}
	motor[motorB]=v+u;
	motor[motorC]=v-u;
	wait1Msec(1);
}
}
