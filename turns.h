//#include "turns.h"
//void gyroturn(int Turndegs, int Motorspeed)
//{
//	SensorValue[gyroscope] = 0;
//	wait1Msec(1);
//	while(SensorValue[gyroscope] < Turndegs*10)
//	{
//		motor[motorD] =-(Motorspeed*sgn(Turndegs));
//		motor[motorE] = (Motorspeed*sgn(Turndegs));
//	}
//	motor[motorD] = 0;
//	motor[motorE] = 0;
//}
void right45enc()//turn left 90 degrees
{
nMotorEncoder[motorD]=0;
nMotorEncoder[motorE]=0;
	wait1Msec(1);
		while(nMotorEncoder[motorD]<1200)
	{
	motor[motorD] = 50;
  motor[motorE] = -50;
	}
  motor[motorD] = 0;// stops motor
  motor[motorE] = 0;// stops motor
  return;

}
void left45enc()//turn right 90 degrees
{
nMotorEncoder[motorD]=0;
nMotorEncoder[motorE]=0;
	wait1Msec(1);
	while(nMotorEncoder[motorE]<1200)
	{
	motor[motorD] = -50;
  motor[motorE] = 50;
	}
  motor[motorD] = 0;// stops motor
  motor[motorE] = 0;// stops motor
  return;
}
void right90enc()
{
nMotorEncoder[motorD]=0;
nMotorEncoder[motorE]=0;
	wait1Msec(1);
	while(nMotorEncoder[motorD]<2400)
	{
	motor[motorD] = 50;
  motor[motorE] = -50;
	}
  motor[motorD] = 0;// stops motor
  motor[motorE] = 0;// stops motor
  return;
}
void left90enc()
{
nMotorEncoder[motorD]=0;
nMotorEncoder[motorE]=0;
	wait1Msec(1);
	while(nMotorEncoder[motorE]<2400)
	{
	motor[motorD] = -50;
  motor[motorE] = 50;
	}
  motor[motorD] = 0;// stops motor
  motor[motorE] = 0;// stops motor
  return;
}


//left90enc();//	tested	*works
//right90enc();//	tested	*works
//left45enc();//	tested	*works
//right45enc();//	tested	*works
//left_swing_45();//
//right_swing_45();//
//left_swing_90();//
//right_swing_90();//
//gyroturn(mtrspeed,int degrees per second.)
