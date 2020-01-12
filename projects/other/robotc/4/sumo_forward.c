task main()
{
 wait1Msec(5000);
 while(true)
 {
   motor[motorB] = 100;
   motor[motorC] = 100;
   wait1Msec(1);
 }
}
