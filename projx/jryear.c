#include <stdio.h>
#include "intro.h"
#include "september.h"
#include "october.h"
#include "november.h"
#include "december.h"
#include "january.h"
#include "february.h"
#include "march.h"
#include "april.h"
#include "may.h"
#include "june.h"
#include "break.h"
int main()
{
	printf("\x1b[2J");
	intro();
	mbreak();
	september();
	mbreak();
	october();
	mbreak();
	november();
	mbreak();
	december();
	mbreak();
	january();
	mbreak();
	february();
	mbreak();
	march();
	mbreak();
	april();
	mbreak();
	may();
	mbreak();
	june();

FILE *namef;
namef= fopen("name.txt", "wt");
fprintf(namef, "%s\n\n", name);
fclose(namef);

FILE *ecf;
ecf= fopen("ec.txt", "wt");
fprintf(ecf, "%s\n\n", ec);
fclose(ecf);

FILE *datef;
datef= fopen("date.txt", "wt");
fprintf(datef, "%s\n\n", date);
fclose(datef);

FILE *giftf;
giftf= fopen("gift.txt", "wt");
fprintf(giftf, "%s\n\n", gift);
fclose(giftf);

FILE *poemf;
poemf= fopen("poem.txt", "wt");
fprintf(poemf, "%s\n\n", poem);
fclose(poemf);

FILE *promposalf;
promposalf= fopen("promposal.txt", "wt");
fprintf(promposalf, "%s\n\n", promposal);
fclose(promposalf);

FILE *scoref;
scoref= fopen("score.txt", "wt");
fprintf(scoref, "%d\n\n", score);
fclose(scoref);

}
