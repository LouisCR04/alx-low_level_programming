#ifndef __MAINHH__
#define __MAINHH__

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

/**
 *_putchar - Prints a single charcter to the std output
 *@c: any single character
 *
 * Return:1 if successful
 */
int _putchar(char c);

ssize_t read_textfile(const char *filename, size_t letters);

int create_file(const char *filename, char *text_content);

int append_text_to_file(const char *filename, char *text_content);

#endif /*__MAINHH__*/
