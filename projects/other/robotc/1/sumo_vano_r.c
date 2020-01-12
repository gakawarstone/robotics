#pragma config(Sensor, S1,     ,               sensorLightActive)
#pragma config(Sensor, S2,     ,               sensorLightActive)
#pragma config(Sensor, S4,     ,               sensorSONAR)
#pragma config(Motor,  motorA,           ,             tmotorNXT, PIDControl, reversed, encoder)
#pragma config(Motor,  motorB,           ,             tmotorNXT, PIDControl, reversed, encoder)
#pragma config(Motor,  motorC,           ,             tmotorNXT, PIDControl, reversed, encoder)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

#include <motors.h>
task main()
{
	wait1Msec(4500);
	int sonar = 60;
	int grey = 50;
	//wait1Msec(5000);
	//turn_right(100,400);
	while(true)
	{
		if(SensorValue[S4] <= sonar) break;
		turn_right(100,1);
	}

	turn_left(100,25);


	while(true)
	{
		motor[motorA] = -100;
		motor[motorB] = 100;
		motor[motorC] = 100;
		if(SensorValue[S1] <= grey) break;
		wait1Msec(1);
	}

	while(true)
	{
		turn_back(100,200);
		while(true)
		{
			if(SensorValue[S4] <= sonar) break;
			turn_left(100,1);
		}

		while(true)
		{
		motor[motorA] = -100;
		motor[motorB] = 100;
		motor[motorC] = 100;
		if(SensorValue[S1] <= grey) break;
		wait1Msec(1);
		}
	}

}
