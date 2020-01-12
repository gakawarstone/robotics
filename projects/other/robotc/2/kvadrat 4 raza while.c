
task main()
{

int x=0;
while (x<4){
	motor[motorB]=50;
motor[motorC]=50;
wait1Msec(1000);
motor[motorB]=50;
motor[motorC]=-50;
wait1Msec(500);
x++;
}
}
