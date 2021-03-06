#pragma config(Sensor, S1,     sr,             sensorSONAR)
#pragma config(Sensor, S2,     sf,             sensorSONAR)
#pragma config(Sensor, S3,     sl,             sensorSONAR)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

#include <motors.h>

int sonar = 20;
int distanse = 1075;
int v = 70;
int deg_90 = 567;
int deg_180 = 567;

task main()
{
	while(true)
	{
		if(SensorValue[sf] >= sonar && sensorvalue[sr] <= sonar && SensorValue[sl] <= sonar)
		{
			turn_forward(v,distanse);
		}
		else
		{
			motor[motorB] = 0;
			motor[motorC] = 0;
			wait1Msec(1);
		}

		if(SensorValue[sf] <= sonar && sensorvalue[sr] >= sonar && SensorValue[sl] <= sonar)
		{
			turn_right(v,deg_90);
			turn_forward(v,distanse);
		}
		else
		{
			motor[motorB] = 0;
			motor[motorC] = 0;
			wait1Msec(1);
		}

		if(SensorValue[sf] <= sonar && sensorvalue[sr] <= sonar && SensorValue[sl] >= sonar)
		{
			turn_left(v,deg_90);
			turn_forward(v,distanse);
		}
		else
		{
			motor[motorB] = 0;
			motor[motorC] = 0;
			wait1Msec(1);
		}

		if(SensorValue[sf] <= sonar && sensorvalue[sr] >= sonar && SensorValue[sl] >= sonar)
		{
			turn_right(v,deg_90);
			turn_forward(v,distanse);
		}
		else
		{
			motor[motorB] = 0;
			motor[motorC] = 0;
			wait1Msec(1);
		}

		if(SensorValue[sf] >= sonar && sensorvalue[sr] >= sonar && SensorValue[sl] >= sonar)
		{
			turn_right(v,deg_90);
			turn_forward(v,distanse);
		}
		else
		{
			motor[motorB] = 0;
			motor[motorC] = 0;
			wait1Msec(1);
		}

		if(SensorValue[sf] >= sonar && sensorvalue[sr] <= sonar && SensorValue[sl] >= sonar)
		{
			turn_forward(v,distanse);
		}
		else
		{
			motor[motorB] = 0;
			motor[motorC] = 0;
			wait1Msec(1);
		}

		if(SensorValue[sf] <= sonar && sensorvalue[sr] <= sonar && SensorValue[sl] <= sonar)
		{
			turn_right(v,deg_180);
		}
		else
		{
			motor[motorB] = 0;
			motor[motorC] = 0;
			wait1Msec(1);
		}

		if(SensorValue[sf] >= sonar && sensorvalue[sr] >= sonar && SensorValue[sl] <= sonar)
		{
			turn_right(v,deg_90);
			turn_forward(v,distanse);
		}
		else
		{
			motor[motorB] = 0;
			motor[motorC] = 0;
			wait1Msec(1);
		}
	}
}
