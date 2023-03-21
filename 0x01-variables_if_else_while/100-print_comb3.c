#include<stdio.h>
#include<time.h>
#include<stdlib.h>
/**
 * main - printing two digit numbers
 * Return: 0 (end of program)
 */
int main(void)
{
int fd;
int ld;
for (fd = '0'; fd < '9'; fd++)
{
for (ld = fd + 1; ld <= '9'; ld++)
{
if (fd != ld)
{
putchar(fd);
putchar(ld);
if (fd == '8' && ld == '9')
continue
putchar(',');
putchar(' ');
}
}

}
putchar('\n');
return (0);
}
