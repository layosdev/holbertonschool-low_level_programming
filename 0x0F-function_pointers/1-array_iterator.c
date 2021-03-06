#include <stdlib.h>
/**
* array_iterator - function
* @array: array
* @size: size of the array
* @action: param
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if ((size > 0) && array && action)
	{
		for (i = 0 ; i < size ; i++)
			(*action)(array[i]);
	}
}
