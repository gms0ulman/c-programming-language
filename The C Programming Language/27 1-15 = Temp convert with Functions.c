# include <stdio.h>

// Page 27

// Rewrite the temperature conversion program of Section 1.2 to use a function for conversion.

main()
{
	// declarations: consisting of type name and the variable
	float fahr, celsius; //v2: float allows us to deal with decimals
	int lower, upper, step;

	// assignment: sets variables to initial state
	lower = 0;		// lower limit of temperature
	upper = 300;	// upper limit
	step = 20;		// step size

	fahr = lower;	// start at lower limit

	printf("Fahrenheit |   Celsius\n------------------------\n");

	// loop executs while fahrenheit is less than or equal to the upper limit
	while (fahr <= upper) {

		// calculate celsius
		celsius = f2c(fahr);

		// print fahrenheit and celsius values
		printf("%8.0f   | %8.1f\n", fahr, celsius); //v2: the numbers specify field size. Here: 3 digits wide and no decimals, then 6 digits wide and 1 decimal (with blanks for extra digits)

													// increment fahrenheit to next value
		fahr = fahr + step;
	}
}

float f2c(float f) {
	float c;
	c = (5.0 / 9.0) * (f - 32.0);
	return c;

}

float c2f(float c) {
	float f;
	f = ((9.0 * c) / 5.0) + 32.0;
	return f;
}