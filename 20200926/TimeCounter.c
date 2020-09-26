#include <stdio.h>
#include <stdlib.h>
/*
Quiz Code:18
Program:TimeCounter
Student Code:B10813180
Student Name:CSJ
*/
main()
{
	//input
	int CurrentTimeHour, CurrentTimeMinute, TargetTimeHour, TargetTimeMinute, ResultHour, ResultMinute;
	scanf("%d:%d", &CurrentTimeHour, &CurrentTimeMinute);
	scanf("%d:%d", &TargetTimeHour, &TargetTimeMinute);

	//counter
	ResultHour = TargetTimeHour - CurrentTimeHour;
	ResultMinute = TargetTimeMinute - CurrentTimeMinute;

	//judgment
	if (ResultHour < 0)
	{
		ResultHour = ResultHour + 24;
	}
	if (ResultMinute < 0)
	{
		ResultHour = ResultHour - 1;
		ResultMinute = ResultMinute + 60;
		if (ResultHour < 0)
		{
			ResultHour = ResultHour + 24;
		}
	}

	//Output
	if (ResultMinute == 0)
	{
		printf("%d", ResultHour);
	}
	else if (ResultHour == 0)
	{
		printf("%d", ResultMinute);
	}
	else
	{
		printf("%d %d", ResultHour, ResultMinute);
	}
}