#include <motors.h>
task main()
{
	nMotorEncoder[motorB] = 0;
	nMotorEncoder[motorC] = 0;
	turn_back(100,100);
	turn_forward(100,100);
	turn_left(100,100);
	motor[motorB] = 0;
	motor[motorC] = 0;
	wait1Msec(1000);
	turn_right(100,100);
}
