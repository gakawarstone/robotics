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
