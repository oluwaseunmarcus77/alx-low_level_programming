#include <stdio.h>

/**
 * main - print alpha in lower case
 * Return: Always 0
 */
int main(void)
{
	char lc;

	for (lc = 'a'; lc <= 'z'; lc++)
	{
		putcha(lc);
	}
	putchar('\n');
	return (0);
}
