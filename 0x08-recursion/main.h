#ifndef CMMAIN
#define CMMAIN

/**
 *_putchar - Just outputs a single character to the console
 *@c: any single character
 *
 * Return:A single character
 */
int _putchar(char c);

/**
 *_puts_recursion - Uses recursion to print a string
 *@s: A pointer to set
 *
 * Return: void
 */
void _puts_recursion(char *s);

void _print_rev_recursion(char *s);

int _strlen_recursion(char *s);

int factorial(int n);

int _pow_recursion(int x, int y);

int _sqrt_recursion(int n);

int is_prime_number(int n);

int is_palindrome(char *s);

int wildcmp(char *s1, char *s2);

#endif
