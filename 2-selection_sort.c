#include "sort.h"

/**
 * selection_sort - sort array of integer using selection
 *                  sorting algorithm
 * @array: A pointer to an array of integer
 * @size: The size of array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, minidx;

	if (!array || size < 2)
		return;
	for (i = 0; i < size - 1; i++)
	{
		minidx = i;
		for (j = i + 1; j < size; j++)
			if (array[j] < array[minidx])
				minidx = j;
		if (minidx != i)
		{
			swap(&array[i], &array[minidx]);
			print_array(array, size);
		}
	}
}

/**
 * swap - swap two values in array
 * @x: pointer to first element
 * @y: pointer to second element
 */
void swap(int *x, int *y)
{
	int tmp;

	tmp = *x;
	*x = *y;
	*y = tmp;
}
