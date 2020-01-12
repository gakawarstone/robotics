void turn_forward(int speed,int encoder)
{
	int encoder_forward = nMotorEncoder[motorB];
	nMotorEncoder[motorB] = 0;
	while(encoder > nMotorEncoder[motorB])
	{
		motor[motorB] = speed;
		motor[motorC] = speed;
		wait1Msec(1);
	}
	nMotorEncoder[motorB] = encoder_forward;
}

void turn_back(int speed,int encoder)
{
	int encoder_back = nMotorEncoder[motorB];
	nMotorEncoder[motorB] = 0;
	while(encoder < nMotorEncoder[motorB])
	{
		motor[motorB] = -speed;
		motor[motorC] = -speed;
		wait1Msec(1);
	}
	nMotorEncoder[motorB] = encoder_back;
}

void turn_right(int speed,int encoder)
{
	int encoder_right = nMotorEncoder[motorB];
	nMotorEncoder[motorB] = 0;
	while(encoder > nMotorEncoder[motorB])
	{
		motor[motorB] = speed;
		motor[motorC] = -speed;
		wait1Msec(1);
	}
	nMotorEncoder[motorB] = encoder_right;
}

void turn_left(int speed,int encoder)
{
	int encoder_left = nMotorEncoder[motorC];
	nMotorEncoder[motorC] = 0;
	while(encoder > nMotorEncoder[motorC])
	{
		motor[motorB] = -speed;
		motor[motorC] = speed;
		wait1Msec(1);
	}
	nMotorEncoder[motorC] = encoder_left;
}
