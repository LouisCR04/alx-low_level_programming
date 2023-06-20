#ifndef CMAINH
#define CMAINH

/**
 * _putchar - writes the character c to std
 *@c: An Ascii character
 *
 * Return: A character
 */
char _putchar(char c);

/**
 * print_alphabet - prints alphabets
 *
 *Return: Void
 */
void print_alphabet(void);

/**
 * print_alphabet - prints the alphabets 10 times
 *
 *Return: Void
 */
void print_alphabet_x10(void);

/**
 *_islower - Checks if c is a lower alphabet
 *@c: An integer value
 *Return: 1 or 0
 */
int _islower(int c);

/**
 *_isalpha - Checks if c is a letter
 *@c: An integer value
 *
 *Return: 1 or 0
 */
int _isalpha(int c);

/**
 *print_sign - Checks if c is -ve or +ve, prints the sign
 *and returns 1 if > 0, 0 if == 0 or -1 if <0
 *@n: An integer value
 *
 *Return: 1, 0 or -1
 */
int print_sign(int n);

/**
 *_abs - Computes the absolute value of input integer
 *and returns 1 if > 0, 0 if == 0 or -1 if <0
 *@int: An integer value
 *
 *Return: Absolute value of input integer
 */
int _abs(int);

/**
 *print_last_digit - Prints the last digit of a number
 *@int: An integer value
 *
 *Return: Last digit of a number
 */
int print_last_digit(int);

/**
 *jack_bauer - prints every mins from 00:00 to 23:59
 *
 *Return: Void
 */
void jack_bauer(void);

/**
 *times_table - Prints the 9 by 9 times table
 *
 *Return: Void
 */
void times_table(void);

/**
 *add - Adds two integers
 *@int: An integer value
 *
 *Return: Absolute value of input integer
 */

int add(int, int);

/**
 *print_to_98 - Prints natural numbers
 *@n: An integer value
 *
 *Return: Void
 */
void print_to_98(int n);

#endif
