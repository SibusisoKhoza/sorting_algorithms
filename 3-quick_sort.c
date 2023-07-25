#include "sort.h"

/**
 * quick_sort - sorts an array of integers in asc order
 *
 * @array: array of integers
 * @size: size of the array
 */
void quick_sort(int *array, size_t size)
{
	if (array != NULL && size > 1)
		sort(array, 0, size - 1, size);
}

/**
 * sort - sort partitioned array
 *
 * @array: pointer to array to be sorted
 * @start: start of array (left side of array)
 * @end: end of array(right side of array)
 * @size: size of array
 */
void sort(int *array, size_t start, size_t end, size_t size)
{
	size_t pindex;

	if (end > 0 && end > start)
	{
		pindex = partition(array, start, end, size);
		if (pindex != 0 && pindex > start)
			sort(array, start, pindex - 1, size);
		if (pindex < size - 1)
			sort(array, pindex + 1, end, size);
	}
}

/**
 * partition - create a partition in an array for quick sort
 *
 * @array: pointer to array to be partitioned
 * @start: start of array to be partitioned
 * @end: end of the array to be partitioned, used as pivot
 * @size: size of array to be partitioned
 *
 * Return: partition array
 */
size_t partition(int *array, size_t start, size_t end, size_t size)
{
	size_t count;

	for (count = start; count < end; count++)
	{
		if (array[count] < array[end])
		{
			if (count != start)
			{
				swap(&array[start], &array[count]);
				print_array(array, size);
			}
			start++;
		}
	}
	if (array[start] > array[end])
	{
		swap(&array[start], &array[end]);
		end = start;
		print_array(array, size);
	}
	return (end);
}

/**
 * swap - swap values on arrays
 *
 * @a: pointer to array
 * @b: pointer to array
 */
void swap(int *a, int *b)
{
	int temp = 0;

	temp = *a;
	*a = *b;
	*b = temp;
}
