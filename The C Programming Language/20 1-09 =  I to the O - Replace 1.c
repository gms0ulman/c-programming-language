#include <stdio.h>

// Page 20

// Write a program to copy its input to its output, replacing each string of one or more blanks by a single blank.

#define MAXLENGTH 1000

int main(void) {

	char output[MAXLENGTH];
	char c, c_old;
	int i= 0, j;

	while ((c = getchar()) != EOF) {

		if ((c == ' ' && c_old != ' ') || c != ' ') {
			output[i] = c;
			++i;
		}
		
		c_old = c; // record the current value of c, so that duplicate spaces are picked up
	}

	// printf("%d", i); //DEBUG: Running in command line and cancelling via Ctrl C meant output was partially cut out. Checked value of i was as expected.
						//SOLUTION: Fed file using < filename.txt, which worked fine.

	for (j = 0; j < i; j++) {
		printf("%c", output[j]);
	}

}