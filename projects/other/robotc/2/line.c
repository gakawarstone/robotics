
task main()
{
int grey=45;
while (true)
{ if (SensorValue[S1]>grey) {
	motor [motorB]=100;
	motor [motorC]=0;
}
else{
	motor [motorB]=0;
	motor [motorC]=100;
}
wait1Msec(1);
}

}
