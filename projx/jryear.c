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

FILE *file;
file= fopen("yearbook.txt", "wt");
fprintf(file, "Your Name: %s\n\n", name);
fprintf(file, "Your Main Extracurricular: %s\n\n", ec);
fprintf(file, "Your Date Location: %s\n\n", date);
fprintf(file, "Your Secret Santa Gift: %s\n\n", gift);
fprintf(file, "Your Poem: %s\n\n", poem);
fprintf(file, "Your AP Score: %d\n\n", score);
fprintf(file, "Your Promposal: %s\n\n", promposal);
fclose(file);
}
