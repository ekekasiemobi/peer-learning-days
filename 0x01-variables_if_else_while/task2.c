#include <stdio.h>

/**
 * main - prints alphabet in lowercases
 * Return: always 0 (success)
 */

int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet < 'z'; alphabet++)
	{
		putchar(alphabet);
	}
		putchar('\n');
	return (0);
}
