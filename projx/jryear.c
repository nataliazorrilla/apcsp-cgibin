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

int main()
{
	intro();
	september();
	october();
	november();
	december();
	january();
	february();
	march();
	april();
	may();
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

FILE *scoref;
scoref= fopen("score.txt", "wt");
fprintf(scoref, "%d\n\n", score);
fclose(scoref);

}
