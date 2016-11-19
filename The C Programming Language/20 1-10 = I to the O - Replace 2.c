#include <stdio.h>

// Page 20

// Write a program to copy its input to its output, replacing each tab by \t, each backspace by \b, and each backslash by \\. This makes tabs and backspaces visible in an unambiguous way.

#define MAXLENGTH 1000

int main(void) {

	char output[MAXLENGTH];
	char c;
	int i = 0, j;

	while ((c = getchar()) != EOF) {

		if (c == '\t'){
			output[i] = '\\' ;
			++i;
			output[i] = 't';
		}
		else if(c == '\b') {
			output[i] = '\\';
			++i;
			output[i] = 'b';
		}
		else if (c == '\\') {
			output[i] = '\\';
			++i;
			output[i] = '\\';
		}
		else {
			output[i] = c;
		}
		++i;
	}

	//printf("%d", i);

	for (j = 0; j < i; j++) {
		printf("%c", output[j]);
	}

}