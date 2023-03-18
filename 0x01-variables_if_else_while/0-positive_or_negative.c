#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Printing random nubers
 * Return: 0 (to end the program)
 */

int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%d is positive\n", n);
}
else if (n == 0)
{
printf("%d is zero\n", n);
}
else (n > 0)
{
printf("%d is negative\n", n);
}
return (0);
}
