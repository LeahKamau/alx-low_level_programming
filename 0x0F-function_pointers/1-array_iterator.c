#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter on each element of an array
 * @array: existing array.
 * @size: size of array.
 * @action: pointer to the function to use
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i = 0;
if (array == NULL || action == NULL)
return;
while (i != size)
{
action(*array); /* Action pointer to a function that receives a parameter i.e func(array)*/
array[i];
i++;
}
}
