#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Printing alphabets
 * Return: 0 (to end the program)
 */

int main(void)
{
int a;
for (a = '0' ; a <= '9' ; a++)
{
putchar(a);
if (a <= '8')
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);

}
