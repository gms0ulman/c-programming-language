# include <stdio.h>

// page 17: Verify that the expression getchar() != EOF is 0 or 1
// INCOMPLETE: no code to actually feed files.

int main(void)
{
	int c;

	while ((c = getchar()) != '0') {
		putchar(c);
	}

	if ((c != EOF) == 1) {
		printf("It's 1; c is not equal to End of File.");
	}
	else if ((c != EOF) == 0) {
		printf("It's 0; c is equal to End of File");
	}

}
