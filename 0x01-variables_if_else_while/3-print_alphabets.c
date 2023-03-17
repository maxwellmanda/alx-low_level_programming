#include <stdio.h>

/**
 * main - print alphabet in lower and uper case
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alp_u[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char alp_l[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0 ; i < 26; i++)
	{
		putchar(alp_l[i]);
	}

	for (i = 0; i < 26; i++)
	{
		putchar(alp_u[i]);
	}

	putchar('\n');
	return (0);
}
