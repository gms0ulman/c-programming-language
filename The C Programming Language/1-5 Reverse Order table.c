# include <stdio.h>

// Page 14 : Temperature table in reverse order (highest to lowest)

/* print Fahrenheit-Celsius table
for fahr = 300, 280, ..., 0
with header*/
main()
{
	// declarations: consisting of type name and the variable
	float fahr, celsius; //v2: float allows us to deal with decimals
	int lower, upper, step;

	// assignment: sets variables to initial state
	lower = 0;		// lower limit of temperature
	upper = 300;	// upper limit
	step = 20;		// step size

	fahr = upper;	// start at lower limit

	printf("Fahrenheit |   Celsius\n------------------------\n");

	// loop executs while fahrenheit is less than or equal to the upper limit
	while (fahr >= lower) {

		// calculate celsius
		celsius = (5.0 / 9.0) * (fahr - 32.0);

		// print fahrenheit and celsius values
		printf("%8.0f   | %8.1f\n", fahr, celsius); //v2: the numbers specify field size. Here: 3 digits wide and no decimals, then 6 digits wide and 1 decimal (with blanks for extra digits)

													// increment fahrenheit to next value
		fahr = fahr - step;
	}
}