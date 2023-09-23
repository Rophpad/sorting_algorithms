#include "sort.h"

/**
 * bubble_sort - Sorts an array of integers in ascending
 *               order using Bubble sort algorithm
 * @array: The arraay to be sorted
 * @size: The number of elements in the array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, cell;
	int the_max;

	if (array == NULL || size < 2)
		return;
	for (i = 0; i < size - 1; i++)
	{
		for (cell = 0; cell < size - 1; cell++)
		{
			if (array[cell] > array[cell + 1])
			{
				the_max = array[cell];
				array[cell] = array[cell + 1];
				array[cell + 1] = the_max;
				print_array(array, size);
			}
		}
	}
}
