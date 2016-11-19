#include <stdio.h>

// Page 24

// Write a program to print a histogram of the lengths of words in its input. It is easy to draw the histogram with the bars horizontal; a vertical orientation is more challenging.

#define MAXLENGTH 1000

int main(void) {

	char output[MAXLENGTH];
	char c;
	int i = 0, j, c_old;

	while ((c = getchar()) != EOF) {

		if ((c == '\t' || c == ' ') && c_old == 1) {
			continue;
		}
		else if (c == '\t' || c == ' ' || c == '\n') {
			output[i] = '\n';
			c_old = 1;
		}
		else {
			output[i] = ']';
			c_old = 0;
		}
		++i;
	}

	//printf("%d", i);

	for (j = 0; j < i; j++) {
		printf("%c", output[j]);
	}

}