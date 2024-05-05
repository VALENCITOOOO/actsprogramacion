#include "stdio.h"
int main()
{
    int terminos;
	printf ("cuantos terminos desea: ");
	scanf ("%d", &terminos);

    int i;
	for (i = 5; i  <= terminos; i += 5) {
	printf ("%d\n ", i );
	}
	
	return 0;
}
