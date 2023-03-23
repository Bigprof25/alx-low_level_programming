#include"main.h"
/**
 * print_alphabet_x10 -  prints 10 times the alphabet, in lowercase
 * Return: end of program
 */
void print_alphabet_x10(void)
{
	int n;
	char l;
for (n = 0; n <= 9; n++)
{
for (l = 'a'; l <= 'z'; l++)
{
_putchar(l);
}
_putchar('\n');
}
}
