#pragma config(Motor,  port2,           rightMotor,    tmotorVex269, openLoop, reversed)
#pragma config(Motor,  port3,          leftMotor,     tmotorVex269, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

/*----------------------------------------------------------------------------------------------------*\
|*                                         - Moving Forward -                                         *|
|*                                      ROBOTC on VEX 2.0 CORTEX                                      *|
|*                                                                                                    *|
|*  This program instructs your robot to move forward and backward until it reaches 2.5m
\*-----------------------------------------------------------------------------------------------4246-*/
#define BASETIME 1250;// tala sem gefur okkur 0.5m

void driveForward(int timi) {
		motor[rightMotor] = 127;
	motor[leftMotor]  = 127;		  //127 er max speed
	wait1Msec(timi);
}
void driveBackward(int timi) {
		motor[rightMotor] = -127;
	motor[leftMotor]  = -127;		  //127 er max speed
	wait1Msec(timi);
}
//+++++++++++++++++++++++++++++++++++++++++++++| MAIN |+++++++++++++++++++++++++++++++++++++++++++++++
task main()
{
	wait1Msec(2000);
	driveForward(1250);
	driveBackward(1250);
	driveForward(2500);
	driveBackward(2500);
	driveForward(3750);
	driveBackward(3750);
	driveForward(5000);
	driveBackward(5000);
	driveForward(6250);
	driveBackward(6250);


}
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
