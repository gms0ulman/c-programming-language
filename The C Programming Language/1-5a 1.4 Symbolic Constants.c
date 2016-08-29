#include <stdio.h>

//page 15: a version of the temperature table with constants and using the for loop.

#define LOWER 0		// lower limit of table
#define UPPER 300	// upper limit
#define STEP  20	// step size

int main(void) {
	
	int fahr;

	for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
		printf("%3d %6.1f\n", fahr, (5.0 / 9.0)*(fahr - 32));	// single limit statements don't require braces
																// string substitution can be variable or expression

}