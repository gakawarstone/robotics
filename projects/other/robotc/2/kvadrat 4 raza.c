#pragma config(Motor,  motorB,          mB,            tmotorEV3_Large, PIDControl, encoder)
#pragma config(Motor,  motorC,          mC,            tmotorEV3_Large, PIDControl, encoder)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{
for (int x=0; x<4; x++)
{
motor[mB]=50;
motor[mC]=50;
wait1Msec(1000);
motor[mB]=50;
motor[mC]=-50;
wait1Msec(500);
}


}
