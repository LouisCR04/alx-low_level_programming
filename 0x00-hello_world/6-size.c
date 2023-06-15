#include <stdio.h>
/**
  *Main - Entry point
  *Prints the size of various data types
  *
  *Return: always 0
  */
int main(void)
{
	/*Prints the memory sizes of the data types*/
	printf("Size of a char: %d byte(s)\n", sizeof(char));
	printf("Size of an int: %d byte(s)\n", sizeof(int));
	printf("Size of a long int: %d byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %d byte(s)\n", sizeof(long long int));
	printf("Size of a float: %d byte(s)\n", sizeof(float));
	return (0);
}
