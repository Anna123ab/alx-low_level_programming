#include <stdio.h>
/**
*main - entry point
*Return: 0 for success
*/
int main(void)
{
	printf("Size of char: %lu byte(s)\n", (unsigned long)sizeof(char));
	printf("Size of int: %lu byte(s)\n", (unsigned long)sizeof(int));
	printf("Size of long int: %lu byte(s)\n", (unsigned long)sizeof(long int));
	printf("Size of long long int: %lu byte(s)\n", sizeof(long long int));
	printf("Size of float: %lu byte(s)\n", (unsigned long)sizeof(float));
	return (0);
}
