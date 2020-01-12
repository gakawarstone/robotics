#include <motors.h>

void sumo(int grey)
{
	while(SensorValue[S1] >= grey)
	{
		motor[motorA] = 100;
		motor[motorB] = -100;
		motor[motorC] = -100;
		wait1Msec(1);
	}
}


void search_l(int distanse, int speed)
{
	nMotorEncoder[motorC] = 0;

	while(SensorValue[S4] >= distanse)
	{
		motor[motorB] = -speed;
		motor[motorC] = speed;
	}

	/*while(nMotorEncoder[motorB] >= -10)
	{
		motor[motorB] = -30;
		motor[motorC] = 30;
	}

	while(nMotorEncoder[motorB] <= 23)
	{
		motor[motorB] = 30;
		motor[motorC] = -30;
	}*/
	nMotorEncoder[motorC] = 0;
}

void search_r(int distanse, int speed)
{
	nMotorEncoder[motorC] = 0;

	while(SensorValue[S4] >= distanse)
	{
		motor[motorB] = speed;
		motor[motorC] = -speed;
	}

	/*while(nMotorEncoder[motorB] >= -10)
	{
		motor[motorB] = -30;
		motor[motorC] = 30;
	}

	while(nMotorEncoder[motorB] <= 23)
	{
		motor[motorB] = 30;
		motor[motorC] = -30;
	}*/
	nMotorEncoder[motorB] = 0;
}

void search(int distanse, int speed)
{
	nMotorEncoder[motorB] = 0;

	while(SensorValue[S4] >= distanse)
	{
		motor[motorB] = speed;
		motor[motorC] = -speed;
	}

	/*while(nMotorEncoder[motorB] >= -10)
	{
		motor[motorB] = -30;
		motor[motorC] = 30;
	}

	while(nMotorEncoder[motorB] <= 23)
	{
		motor[motorB] = 30;
		motor[motorC] = -30;
	}*/
	nMotorEncoder[motorB] = 0;
}

void sumo_walking(int greay)
{
	int n = 0;
	int k = 0;
	while(SensorValue[S1] >= greay)
	{
		if(SensorValue[S1] <= greay) n = 1;
		if(SensorValue[S2] <= greay) k = 1;
		motor[motorB] = 100;
		motor[motorC] = 100;

		wait1Msec(1);
	}

 	motor[motorB] = 0;
 	motor[motorC] = 0;
 	playSound(soundBeepBeep);
}
