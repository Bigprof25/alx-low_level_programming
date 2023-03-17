#include <stdio.h>
/**
* main - Third c program Printing sizes of various computer types 
* Return 0
*/

int main(void)
	char a;
	int b;
	long int c;l
	long long int d;
	float f;
printf("size of a char: %lu byte(s)\t", (unsigned long)sizeof(a));
printf("size of an int: %lu byte(s)\t", (unsigned long)sizeof(b));
printf("size of a long int: %lu byte(s)\t", (unsigned long)sizeof(c));
printf("size of a long long int: %lu byte(s)\t", (unsigned long)sizeof(d));
printf("size of a float: %lu byte(s)\t", (unsigned long)sizeof(f));
return (0);
}
