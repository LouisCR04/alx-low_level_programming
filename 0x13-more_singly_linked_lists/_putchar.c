#include <unistd.h> 

/**
 *_putchar - Prints a single charcter
 *@c: any single character
 *
 * Return:1 if successful
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
