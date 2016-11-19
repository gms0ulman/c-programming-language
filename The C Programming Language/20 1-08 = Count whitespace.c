#include <stdio.h>

// Page 20

// Write a program to count blanks, tabs, and newlines.

int main(void) {

	// variable definitions
	int blnk, tabs, nl;
	char c;

	// variable declaration (?)
	blnk = tabs = nl = 0;

	// increment variables with characters as they are found.
	while ((c = getchar()) != EOF) {

		if (c == ' ')
			++blnk;
		if (c == '\t')
			++tabs;
		if (c == '\n')
			++nl;
	}

	printf("Blanks: %d\tTabs: %d\tNew Lines: %d\n", blnk, tabs, nl);


}