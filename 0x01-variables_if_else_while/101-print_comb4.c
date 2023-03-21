#include<stdio.h>
#include<time.h>
#include<stdlib.h>
/**
 * main - printing three digit numbers
 * Return: 0 (end of program)
 */
int main(void)
{
int fd;
int md;
int ld;
for (fd = '0'; fd < '8'; fd++)
{
for (md = fd + 1; md < '9'; md++)
{
for (ld = md + 1; ld <= 9; ld++)
{
if ((fd != md) != ld)
{
putchar(fd);
putchar(md);
putchar(ld);
if (fd == '7' && md == '8' && ld == '9')
continue;
putchar(',');
putchar(' ');
}
}
}
}
}

}
putchar('\n');
return (0);
}
