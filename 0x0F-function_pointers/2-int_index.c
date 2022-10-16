#include "function_pointers.h"

/**
 * int_index - Function that searches for an integer
 * @array: Array to search for int.
 * @size: size of array
 * Return: returns index of first element for 
 *  which the cmp function does not return 0 else (-1)
 */
int int_index(int *array, int size, int (*cmp)(int)) /*Int param in cmp is what is being searched*/
{
int i; /*Will be used in for loop to iterate array*/
if (array == NULL || cmp == NULL)
return;
for (i = 0; i < size; i++) /*array[size] - i to iterate to max-size of array (size)*/
{
if (cmp(array[i]) != 0)
return (i);
}
return (-1);
}
