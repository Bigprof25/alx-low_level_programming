#include"main.h"
/**
 * _isupper - checks for uppercase character
 * @c: parameter
 * Return: 1 or 0
 */
int _isupper(int c);
{
if ((c >= 65) && (c <= 90))
{
_putchar(c);
c++;
}
_putchar('\n');
}
