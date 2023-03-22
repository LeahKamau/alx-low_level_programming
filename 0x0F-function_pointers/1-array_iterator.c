#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter
 * @array: array
 * @size: size of the array
 * @action: function pointer to called function
 * Return: 0 success
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (size == 0 || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		if (array == NULL)
			return;

		action(array[i]);
	}
}
