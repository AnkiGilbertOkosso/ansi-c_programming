#include <stdio.h>

/**
 * main - copies input to output
 *
 * Return: always successful
 */
int main(void)
{
	int c;

	c = getchar ();
	while (c != EOF)
	{
		putchar (c);
		c = getchar ();
	}
	return (0);
}
