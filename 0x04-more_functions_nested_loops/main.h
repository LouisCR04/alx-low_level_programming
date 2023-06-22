#ifndef CMMAIN
#define CMMAIN

/**
 *_putchar - Prints characters to the console
 *@c: A single character
 *
 *Return: A single byte (Probable)
 */
int _putchar(char c);

/**
 *_isupper - Checks for Uppercase letters
 *@c: An integer value
 *
 *Return: 1 if uppercase else 0
 */
int _isupper(int c);

/**
 *_isdigit - Checks for numbers 0-9
 *@c: An integer value
 *
 *Return: 1 if true else 0
 */
int _isdigit(int c);

/**
 *mul - Multiplies two integer values
 *@a: An integer value
 *@b: An integer value
 *
 *Return: 1 if true else 0
 */
int mul(int a, int b);

/**
 *print_numbers - Prints 0 to 9
 *
 *Return: void
 */
void print_numbers(void);

/**
 *print_most_numbers - Prints 0 to 9
 *
 *Return: void
 */
void print_most_numbers(void);

/**
 *more_numbers - Prints 0 to 14 ten times
 *
 *Return: void
 */
void more_numbers(void);

/**
 *print_line - Prints a line of length n bytes
 *@n: An integer value
 *
 *Return: void
 */
void print_line(int n);

/**
 *print_diagonal - Prints a diagonal line
 *@n: An integer value
 *
 *Return: void
 */
void print_diagonal(int n);

/**
 *print_square- Prints a square using #
 *@size: An integer value the size of the square
 *
 *Return: void
 */
void print_square(int size);

/**
 *print_triangle - Prints a triangle using #
 *@size: An integer value the size of the square
 *
 *Return: void
 */
void print_triangle(int size);

#endif
