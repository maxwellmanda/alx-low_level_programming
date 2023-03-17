#include <stdio.h>

/**
 * main - print base 10 numbers with new line
 *
 *Return: Alway 0 (Succedd)
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
