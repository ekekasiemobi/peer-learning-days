#include <stdio.h>
/**
 * main - print alphabet except e and q
 * prints new a line
 * Return:  always 0 (success)
 */

int main(void)
{
	char alphabet = 'a';

	while (alphabet < 'z')
	{
		if (alphabet != 'e' && alphabet != 'q')
		{
			putchar(alphabet);
		}
			alphabet++;
	}
		putchar('\n');

	return (0);
}
