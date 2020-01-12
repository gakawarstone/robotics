#include<motors.h>

bool wall(int sonar)
{
	if(SensorValue[S4] <= sonar) return true;
	else return false;
}

void labirint_1(int sonar)
{
	while(!wall(sonar))
	{
		turn_forward(100,1);
	}
}
void shot()
{
	motor[motorB] = 0;
	motor[motorC] = 0;
	wait1Msec(1000);
	nMotorEncoder[motorA]  = 0;
	while(nMotorEncoder[motorA] <= 300)
	{
		motor[motorA] = 100;
		wait1Msec(1);
	}
	motor[motorA] = 0;
}
