#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Printing alphabets
 * Return: 0 (to end the program)
 */

int main(void)
{
char ch;
for (ch = 'a' ; ch <= 'z' ; ch++)
{
putchar(ch);
}
putchar('\n');
return (0);
}
