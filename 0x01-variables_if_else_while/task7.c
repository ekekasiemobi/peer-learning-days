#include <stdio.h>
/**
 * main - print alphabet in reverse order
 * prints a new line
 * Return: always 0 (success)
 */

int main(void)
{
	char alphabet;

	for (alphabet = 'z'; alphabet >= 'a'; alphabet--)
	{
		putchar(alphabet);
	}
		putchar('\n');

	return (0);
}
