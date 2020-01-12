#include <motors.h>

task main()
{
 while(true)
 {
   motor[motorB] = -50;
   motor[motorC] = -50;
   motor[motorA] = 50;
   wait1Msec(1);
 }
}
