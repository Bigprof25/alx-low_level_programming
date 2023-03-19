#include<stdio.h>
/**
 * main - printing sizes of various types
 * Return: 0 (end the program)
 */
int main(void)
{
long long int l;
printf("Size of an char: %lu bytes\n", sizeof(char));
printf("Size of an int: %lu bytes\n", sizeof(int));
printf("Size of an long: %lu bytes\n", sizeof(long));
printf("Size of an long long int: %lu bytes\n", sizeof(l));
printf("Size of an float: %lu bytes\n", sizeof(float));
return (0);
}
