#include <stdio.h>

// Page 22

// Write a program that prints its input one word per line.

#define MAXLENGTH 1000

int main(void) {

	char output[MAXLENGTH];
	char c;
	int i = 0, j, c_old;

	while ((c = getchar()) != EOF) {

		if ((c == '\t' || c == ' ') && c_old == 1) {
			continue;
		}
		else if (c == '\t' || c == ' ') {
			output[i] = '\n';
			c_old = 1;
		}
		else {
			output[i] = c;
			c_old = 0;
		}
		++i;
	}

	//printf("%d", i);

	for (j = 0; j < i; j++) {
		printf("%c", output[j]);
	}

}