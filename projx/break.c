#include <stdio.h>
#include <unistd.h>

void mbreak()
{
	printf("Time is passing. Next month will begin soon. Be patient.");
	sleep(6);
	printf("\x1b[2J");
}
