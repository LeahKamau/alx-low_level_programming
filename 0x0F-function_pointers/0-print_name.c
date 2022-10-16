#include "function_pointers.h"

/**
 * print_name - Passes string name to func pointer f
 * @name: String to be passed to func pointer.
 */
void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
return;
f(name);
}
