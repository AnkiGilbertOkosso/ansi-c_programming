#include <stdio.h>

/**
 * main - prints Celsius-Fahrenheit table
 *
 * Return: always successful
 */
int main(void)
{
	int celsius, fahr, lower, upper, step;

	lower = -17;
	upper = 300;
	step = 11;

	celsius = lower;
	while (celsius <= upper)
	{
		fahr = (9 / 5) * celsius + 32;
		printf("%d \t %d\n", celsius, fahr);
		celsius = celsius + step;
	}
	return (0);
}
