#include <motors.h>
#include <sumo.h>

task main()
{
	wait1Msec(5000);
	turn_back(100,100);
	sumo(50);
}
