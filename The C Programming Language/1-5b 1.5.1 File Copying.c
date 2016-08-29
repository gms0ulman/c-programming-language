#include <stdio.h>

// page 16: introducing getchar and putchar

/* copy input to output: 1st version */

/*
int main(void) {

	int c;

	c = getchar();
	while (c != EOF) {
		putchar(c);
		c = getchar(c);
	}
}
*/


/* copy input to output: 2nd version */

int main(void) {

	int c;

	while ((c = getchar()) != EOF) // brackets are required as != have higher precedence than =
		putchar(c);
}