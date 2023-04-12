#include <stdio.h>

/**
 * main - temperature conversion table
 *
 * Return: successful
 */
int main(void)
{
	int fahr;

	for (fahr = 300; fahr >= 0; fahr = fahr - 20)
	{
		printf("%d \t %6.1f\n", fahr, ((5.0 / 9.0) * (fahr - 32)));
	}
	return (0);
}
