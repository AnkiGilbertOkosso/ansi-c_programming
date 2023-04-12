#include <stdio.h>

/**
 * main - print Fahrenheit-Celsius table with a heading
 *
 * Return: Always successful
 */
int main(void)
{
	int fahr, cel, lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	printf("Fahrenheit-Celsius table\n");

	fahr = lower;
	while (fahr <= upper)
	{
		cel = 5 * (fahr - 32) / 9;
		printf("%d \t %d\n", fahr, cel);
		fahr = fahr + step;
	}
	return (0);
}
