#pragma config(Motor,  motorA,          mA,            tmotorEV3_Large, PIDControl, encoder)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//
int k=2;
task main()
{
nMotorEncoder[motorA]=0;
while(true)
{
if(nMotorEncoder[motorA]<45)
	motor[motorA]=20;
else
	motor[motorA]=-20;
wait1Msec(1);
}


}