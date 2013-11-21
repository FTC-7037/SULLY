// forwardforinches.h
int a=1440;//enc count
float b=8.5;//inch
int c=a/b;//  (en/in)
float Derived_Enc;
void forward_for_inches(int distance_wanted)
{
	nMotorEncoder[RightMotor]=0;
	nMotorEncoder[LeftMotor]=0;
	Derived_Enc=(distance_wanted*c);
	while(nMotorEncoder[RightMotor]<Derived_Enc)
	{
		motor[RightMotor]=50;//	go forward
		motor[LeftMotor] =50;//	go forward
		clearDebugStream();
		writeDebugStreamLine("derived enc = %f", Derived_Enc);
		writeDebugStream("encoder count = %d", 	nMotorEncoder[RightMotor]);
	}
	motor[RightMotor]=0;//	stop.
	motor[LeftMotor] =0;//	stop.
}
//	forward_for_inches(1);
