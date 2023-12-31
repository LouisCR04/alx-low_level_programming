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

/**
 *_strlen - Prints length of string
 *@s: A pointer to a string
 *
 *Return: Void
 */
int _strlen(char *s);

/**
 *_puts - Prints a string to std output
 *@str: A pointer to a string
 *
 *Return: Void
 */
void _puts(char *str);

/**
 *print_rev - Prints the reverse of a string to the std output
 *@s: A pointer to a string
 *
 *Return: Void
 */
void print_rev(char *s);

/**
 *rev_string - Reverses a string
 *@s: A pointer to a string
 *
 *Return: Void
 */
void rev_string(char *s);

/**
 *puts2 -instr not clear but possibly corresp to even
 *@str: A pointer to a string
 *
 *Return: Void
 */
void puts2(char *str);

/**
 *puts_half - Prints the last half of strings
 *@str: A pointer to a string
 *
 *Return: Void
 */
void puts_half(char *str);

/**
 *print_array - Prints elements of an array
 *@a: A pointer to an integer value
 *@n: An integer value
 *
 *Return: Void
 */
void print_array(int *a, int n);

/**
 *_strcpy - Copies string
 *@dest: A pointer to a string
 *@src: A pointer to a string
 *
 *Return: Pointer to dest.
 */
char *_strcpy(char *dest, char *src);

/**
 * _atoi - converts string to integer
 * @s: A pointer to a string
 *
 * Return: Integer equivalent of the passed string
 */
int _atoi(char *s);

#endif
