#include <stdio.h>

// page 18

/* count characters as input; 1st version*/

/*
int main(void)
{
	long nc;                         //long integer. at least 32 bits.

	nc = 0;
	while (getchar() != EOF)
		++nc;                        //increment nc by 1, prefix form
	printf("%ld\n", nc);             //%ld specifies argument is long integer
}
*/

/* count characters as input; 2nd version*/

int main(void)
{
	double nc;

	for (nc = 0; getchar() != EOF; ++nc)
		;
	printf("%.0f\n", nc);
}