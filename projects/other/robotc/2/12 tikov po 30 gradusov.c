#pragma config(Motor,  motorA,          mA,            tmotorEV3_Large, PIDControl, encoder)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{
nMotorEncoder[mA]=0;
clearTimer(T1);
while(true)
{
motor[motorA]=5*(50*time100[T1]/10-nMotorEncoder[motorA]);
wait1Msec(1);
}


}
