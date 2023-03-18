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
if (ch == 'e' || ch == 'q')
{
ch++;
}
putchar(ch);
}
putchar('\n');
return (0);
}

