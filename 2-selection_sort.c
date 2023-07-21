#include "sort.h"

/**
 * swap - Swap two integers in an array.
 * @a: The first integer to swap.
 * @b: The second integer to swap.
 */
void swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * selection_sort - sort the array using selection sort
 * @array: the array to be sorted
 * @size: size of array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j;
	int *tmp;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		tmp = array + i;
		for (j = i + 1; j < size; j++)
		{
			tmp = (array[j] < *tmp) ? (array + j) : tmp;

		}

		if ((array + i) != tmp)
		{
			swap(array + i, tmp);
			print_array(array, size);
		}
	}
}
