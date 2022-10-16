#include "function_pointers.h"

/**
* print_name - function that prints a name
* @name: name to be printed by function
* @f: pointer to function to print name.
* Return: Always(0) Success
*/
void print_name(char *name, void (*f)(char *)){
    if(name == NULL){
        return (-1);
    }
    f(name);
}