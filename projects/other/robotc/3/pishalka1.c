#pragma config(Sensor, S1,     l1,             sensorLightActive)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()

{	while(true)
	{
	int n=SensorValue[S1];
	nxtDisplayTextLine(3, 'light');
	nxtDisplayCenteredTextLine(4,);

	}



}
