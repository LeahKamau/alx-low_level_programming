#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter
 * @array: existing array.
 * @size: size of array.
 * @action: pointer to the function to use
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
if (array == NULL || action == NULL)
return;
while (size-- != 0)
{
action(*array); /* function receiveing param func(array)*/
array++;
}
}
