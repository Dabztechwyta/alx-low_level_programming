#include <stdio.h>

/**
 * main - prints the the alphabet in lowercase,
 * followed by a new line
 * Return: int 0 (Success)
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}