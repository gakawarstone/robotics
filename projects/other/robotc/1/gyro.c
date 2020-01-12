
int standart_value = SensorRaw[S2];
int err, errold = 0;
float kp = 0.5;
float ki = 0.001;
float kd = 10;
float scale = 1;
float dt = 1;
float p, i = 0, d, u;
int time;


task main()
{
	//sensorReset(S4);
	//getGyroDegrees(S4);

	while(true)
	{
		//if(u == -1) u = 1;
    SensorValue[S2] = SensorValue[S2] + 5;
		err = standart_value -  SensorValue[S2];
		p = kp * err;
		i = i + ki * err * dt;
		d = kd * (err - errold);
		errold  = err;
		u  = (p + i + d)/scale;
		motor[motorB] =  50 - u;
		motor[motorC] =  50 + u;
		wait1Msec(1);
	}

}
