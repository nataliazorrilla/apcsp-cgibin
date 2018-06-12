#include <stdio.h>
#include <string.h>

char promposal[256];

void june()
{
	printf("JUNE\n\n");
	printf("''No price is set on the lavish summer; June may be had by the poorest comer.'' -James Russell Lowell\n\n");
	
	printf("You’re nearly done! You’ve made it! Now all that’s left is to go to your junior prom. Of course, you might want to ask someone. And to ask someone, you need a pretty good pun. The theme of the prom is A Night in Hollywood— come up with a winning promposal!\n\n");
	char input[256];
	fgets(input, 256, stdin);
	sscanf(input, "%s", promposal);

	if (strlen(input) < 20)
	{
		printf("The person you asked said they were already going with someone. That's fine. You'll just go with your friends.\n\n");
	}
	else
	{
		printf("Yay! You have a date to prom! Have a good night!\n\n");
	}

	printf("JUNE STATS\n");
	printf("2 sunburns gotten.  7 class projects completed. 4 cups of Panera’s Summer Corn Chowder eaten. 0 months left! Check out your yearbook at rpi16/cgi-bin/student4/projx/jryear.php.\n\n ---- \n\n");
}

