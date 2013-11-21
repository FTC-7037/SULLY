//#include "movement.h"
void timed_forward(int speed, int time)
{
  motor[motorD] = speed;
  motor[motorE] = speed;
  wait1Msec(time);
  motor[motorD] = 0;// stops motor
  motor[motorE] = 0;// stops motor
  return;
}
void encoder_backward(int speed,int ENCcounts)
{
	nMotorEncoder[motorD]=0;
		nMotorEncoder[motorE]=0;
	wait1Msec(1);
	while(nMotorEncoder[motorD]<ENCcounts)
	{
	motor[motorD] = speed;
  motor[motorE] = speed;
	}
  motor[motorD] = 0;// stops motor
  motor[motorE] = 0;// stops motor
  return;
}
void encoder_forward(int speed,int ENCcounts)
{
	nMotorEncoder[motorD]=0;
	nMotorEncoder[motorE]=0;
	wait1Msec(1);
	while(nMotorEncoder[motorE]>-ENCcounts)
	{
	motor[motorD] = -speed;
  motor[motorE] = -speed;
	}
  motor[motorD] = 0;// stops motor
  motor[motorE] = 0;// stops motor
  return;
}
