#pragma config(Sensor, S1,     ,               sensorSONAR)
#pragma config(Sensor, S2,     ,               sensorLightActive)
#pragma config(Sensor, S3,     ,               sensorLightActive)
#pragma config(Sensor, S4,     ,               sensorTouch)
#pragma config(Motor,  motorA,           ,             tmotorNXT, PIDControl, reversed, encoder)
#pragma config(Motor,  motorB,           ,             tmotorNXT, PIDControl, reversed, encoder)
#pragma config(Motor,  motorC,           ,             tmotorNXT, PIDControl, reversed, encoder)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{
	#include <monstr.h>
	while(SensorValue[S4] == 0) wait1Msec(1);
	wait1Msec(5000);


	while(true)
	{
		motor[motorA] = 100;
		motor[motorB] = 100;
		motor[motorC] = 100;
		if(SensorValue[S2] <= greay || SensorValue[S3] <= greay) break;
		//if(SensorValue[S2] > 0) break;
		//nxtDisplayString(5,"%s", name);

		wait1Msec(1);
	}

		while(nMotorEncoder[motorC] >= -300)
	{
		motor[motorA] = -100;
		motor[motorB] = -100;
		motor[motorC] = -100;
	}


}
