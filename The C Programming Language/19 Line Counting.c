#include <stdio.h>

// page 19

/* count lines in input */

int main(void) {

	int c, nl;

	nl = 0;
	while ((c = getchar()) != EOF)
		if (c == '\n')                // a character written between single quotes represents an integer value equal to the numerical value of the character in the machine's character set.
			++nl;                     // it is a SINGLE character constant. Escape characters used in strings are also legal in character constants. In ASCII, the new line character '\n' is 10
	printf("%d\n", nl);

}