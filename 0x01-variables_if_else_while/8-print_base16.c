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
for (ch = '0' ; ch <= '9' ; ch++)
{
putchar(ch);
}
for (ch = 'a' ; ch <= 'f' ; ch++)
{
putchar(ch);
}
putchar('\n');
return (0);
}
