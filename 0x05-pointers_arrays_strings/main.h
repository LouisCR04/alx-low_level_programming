#ifndef _MMAIN_
#define _MMAIN_

/**
 *_putchar - Prints a character to the std output
 *@c: A character value
 *
 *Return: 1 if no error, -1 if error
 */
int _putchar(char c);

/**
 *reset_to_98 - Resets the value pointed by n to 98
 *@n: A pointer to an integer value
 *
 *Return: Void
 */
void reset_to_98(int *n);

/**
 *swap_int - Swaps the argument values
 *@a: A pointer to an integer value
 *@b: A pointer to an integer value
 *
 *Return: Void
 */
void swap_int(int *a, int *b);

#endif
