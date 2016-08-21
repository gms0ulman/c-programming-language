# include <stdio.h>

// Page 12

/* print Fahrenheit-Celsius table
for fahr = 0, 20, ..., 300 */
main()
{
	// declarations: consisting of type name and the variable
	float fahr, celsius; //v2: float allows us to deal with decimals
	int lower, upper, step;

	// assignment: sets variables to initial state
	lower = 0;		// lower limit of temperature
	upper = 300;	// upper limit
	step = 20;		// step size

	fahr = lower;
	while (fahr <= upper) {
		celsius = (5.0/9.0) * (fahr-32.0);
		printf("%3.0f %6.1f\n", fahr, celsius); //v2: the numbers specify field size. Here: 3 digits wide and no decmials, then 6 digits wide and 1 decimal (with blanks for extra digits)
		fahr = fahr + step;
	}
}