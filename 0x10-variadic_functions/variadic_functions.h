#ifndef VARIADIC_FUNCTIONS
#define VARIADIC_FUNCTIONS
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>


/**
 * struct print - print type with corresponding print function
 * @t: print type
 * @f: print function
 */
typedef struct print_all
{
	char all;
	void (*func)(va_list arguments);
} simbol_t;

int _putchar(char);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);



#endif /* _VARIADIC_FUNCTIONS_H_ */

