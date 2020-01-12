task main()
{
	while(true)
	{
		if(motor[motorB] > 0)
		{
			while(motor[motorB] > 0)
			{
				motor[motorB] = -100;
				motor[motorC] = -100;
			}

			motor[motorB] = 0;
			motor[motorC] = 0;
		}

		if(Motor[motorB] < 0)
		{
			while(motor[motorB] < 0)
			{
				motor[motorB] = 100;
				motor[motorC] = 100;
			}

			motor[motorB] = 0;
			motor[motorC] = 0;
		}

		if(Motor[motorB] = 0)
		{
			motor[motorB] = 0;
			motor[motorC] = 0;
		}
	}
}
