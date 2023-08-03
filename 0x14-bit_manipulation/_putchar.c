#include <unistd.h> 

/**
 *_putchar - Prints a single charcter to the std output
 *@c: any single character
 *
 * Return:1 if successful
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
