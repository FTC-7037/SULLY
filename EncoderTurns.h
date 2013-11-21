#include "MyrobotLIB.h"

void encoder_turn(int TurnDegs, int TurnDIR)
{
	if(TurnDIR==1)//left
	{
		if(TurnDegs==3)//45 degrees
		{
			left45enc();
		}
		if(TurnDegs==4)//90 degrees
		{
			left90enc();
		}
	}
		if(TurnDIR==2)//right
		{
			if(TurnDegs==3)//45 degrees
			{
			right45enc();
			}
			if(TurnDegs==4)//90 degrees
			{
			right90enc();
			}
		}
}
/*

this file allows you to use the following function "encoder_turn(degrees,R/L);"

the example syntax is as follows
"
encoder_turn(turn90,left)
encoder_turn(turn45,right)
"
*/
