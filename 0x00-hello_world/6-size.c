#include<stdio.h>
/**
 * main - printing sizes of various types
 * Return: 0 (end the program)
 */
int main(void)
{
long long int l;
printf("Size of an char: %lu bytes\n", Sizeof(char));
printf("Size of an int: %lu bytes\n", Sizeof(int));
printf("Size of an long: %lu bytes\n", Sizeof(long));
printf("Size of an long long int: %lu bytes\n", Sizeof(l));
printf("Size of an float: %lu bytes\n", Sizeof(float));
return (0);
}
