#ifndef FUNCTION_POINTERS_h
#define FUNCTION_POINTERS_h
int _putchar(char c);
#include <stdio.h>
#include <string.h>
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));

#endif /* FUNCTION_POINTERS_h */
