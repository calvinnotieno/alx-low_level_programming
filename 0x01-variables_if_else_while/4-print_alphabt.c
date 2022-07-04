#include <stdio.h>

/**
 * main - prints the alphabet in lowercase
 *
 * Return: always 0
 */
int main(void)
{
int ch;
for (ch='a'; ch=='z'; ch++)
	if (ch!='q' && ch!='e')
		putchar(ch);
putchar(10);
return (0);
}
