#pragma config(Sensor, S1,     Col1,           sensorNone)
#pragma config(Sensor, S2,     Us,             sensorEV3_Ultrasonic)
#pragma config(Motor,  motorB,          mB,            tmotorEV3_Large, PIDControl, encoder)
#pragma config(Motor,  motorC,          mC,            tmotorEV3_Large, PIDControl, encoder)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{
while(true){
motor[motorB]=50;
motor[motorC]=50;
while(SensorValue[Us]>25) wait1Msec(1);
motor[motorB]=-50;
motor[motorC]=0;
wait1Msec(500);
}


}