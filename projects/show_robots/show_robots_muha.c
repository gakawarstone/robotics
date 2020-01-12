#include <motors.h>

task main()
{
	wait1Msec(28000);
	turn_forward(50,2500);
	turn_right(50,1740);
	turn(50,26,6400);
	motor[motorB] = 0;
	motor[motorC] = 0;
	wait1Msec(23000);
	turn_right(50,1740);
	turn(50,26,6400);
}
