#include <motors.h>

volatile int encoder_b;
volatile int encoder_b_2;
volatile int greay = 40;
volatile int skittle_greay = 25;
volatile int skittle;


void search(int distanse, int speed)
{
	nMotorEncoder[motorB] = 0;
	color = 0;

	while(SensorValue[S3] >= distanse)
	{
		motor[motorB] = speed;
		motor[motorC] = -speed;
	}

	nMotorEncoder[motorB] = 0;

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
}

void begin()
{
	startTask(display);
	skittle = 0;
}

void end()
{
	motor[motorB] = 0;
	motor[motorC] = 0;
	wait1Msec(5000);
	stopTask(display);
}

void turn_to_skittle()
{

	/*while(SensorValue[S2] == 0)
	{
		motor[motorB] = 30;
		motor[motorC] = 30;
	}*/

	//encoder_b = nMotorEncoder[motorB];
	//nMotorEncoder[motorB] = 0;

	while(nMotorEncoder[motorB] <= 600)
	{
		motor[motorB] = 30;
		motor[motorC] = 30;
	}

	encoder_b = nMotorEncoder[motorB];
	nMotorEncoder[motorB] = 0;

	while(nMotorEncoder[motorB] >= -10)
	{
		motor[motorB] = -30;
		motor[motorC] = 30;
	}

	while(nMotorEncoder[motorB] <= 23)
	{
		motor[motorB] = 30;
		motor[motorC] = -30;
	}
}


void check_skittle()
{
	motor[motorB] = 0;
	motor[motorC] = 0;
	wait1Msec(500);

	while(true)
	{
		if(SensorValue[S2] >= greay) color = 6;
		else if(SensorValue[S2] <= greay) color = 1;
		if(color == 1) break;
		if(color == 6) break;
		/*{
			while(SensorValue[S3] > 40 && SensorValue[S4] < 40)
			{
				motor[motorB] = 30;
				motor[motorC] = 30;
			}
		}*/
	}
}

void black_skittle()
{
	while(nMotorEncoder[motorB] + encoder_b >= 0)
	{
		motor[motorB] = -30;
		motor[motorC] = -30;
	}

	while(skittle > 0 && nMotorEncoder[motorB] + encoder_b <= 23)
	{
		motor[motorB] = 30;
		motor[motorC] = -30;
	}

  turn_right(30,70);
	skittle++;
}

void white_skittle()
{
	while(SensorValue[S4] >= greay)
	{
		motor[motorB] = 30;
		motor[motorC] = 30;
	}

	encoder_b_2 = nMotorEncoder[motorB];

	while(nMotorEncoder[motorB] < encoder_b_2 + 30)
	{
		motor[motorB] = 100;
		motor[motorC] = 150;
	}

	while(nMotorEncoder[motorB] + encoder_b >= 0)
	{
		motor[motorB] = -30;
		motor[motorC] = -30;
	}

	skittle++;
}
