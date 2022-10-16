#include "3-main.h"

/**
 * get_op_func - function pointer that selects correct function to perform.
 * @s: operator passed as argument
 * 
 */
int (*get_op_func(char *s))(int, int)
{
    /* Struct ops accepts 1. operand 
                          2. Pointer func
    */
        op_t ops[] = {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
    };
    int i;

    while()

}
