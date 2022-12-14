#include "function_pointers.h"

/**
 * int_index - Function that searches for an integer
 * @array: Array to search for int.
 * @size: size of array
 * @cmp: pointer function with int parameter
 * Return: returns index of first element for
 *  which the cmp function does not return 0 else (-1)
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i; /*Will be used in for loop to iterate array*/
if (array == NULL || cmp == NULL)
return (-1);
if (size <= 0)
{
return (-1);
}
for (i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)
return (i);
}
return (-1);
}
