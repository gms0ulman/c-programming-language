# include <stdio.h>

// page 13: programme to convert celsius to fahrenheit

// created by copying 1-3 file and making small adjustments

main()
{
	// declarations: consisting of type name and the variable
	float fahr, celsius; //v2: float allows us to deal with decimals
	int lower, upper, step;

	// assignment: sets variables to initial state
	lower = -20;	// lower limit of temperature
	upper = 160;	// upper limit
	step  = 20;		// step size

	celsius = lower;	// start at lower limit

	printf("Celsius    |  Fahrenheit\n------------------------\n");

	// loop executs while fahrenheit is less than or equal to the upper limit
	while (celsius <= upper) {

		// calculate fahrenheit
		//celsius = (5.0 / 9.0) * (fahr - 32.0);
		fahr = ((9.0 * celsius) / 5.0) + 32.0;

		// print fahrenheit and celsius values
		printf("%8.0f   | %8.1f\n", celsius, fahr); //v2: the numbers specify field size. Here: 3 digits wide and no decimals, then 6 digits wide and 1 decimal (with blanks for extra digits)
		
		// increment fahrenheit to next value
		celsius = celsius + step;
	}
}