#include<stdio.h>
/**
 * main - printing sizes of various types
 * Return: 0 (end the program)
 */
int main(void)
{
long long int l;
printf("Size of a char: %lu byte(s)\n", sizeof(char));
printf("Size of an int: %lu byte(s)\n", sizeof(int));
printf("Size of a long: %lu byte(s)\n", sizeof(long));
printf("Size of a long long int: %lu byte(s)\n", sizeof(l));
printf("Size of a float: %lu byte(s)\n", sizeof(float));
return (0);
}
