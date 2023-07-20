/**
 *_putchar - Writes a single character to the std output
 *@c: single character
 *
 * Return: A single character
 */
int _putchar(char c)
{
	return(write(1,&c,1));
}
