#include "sort.h"

<<<<<<< HEAD
/**
 * bubble_sort - sorts an array of integers
 *
 * @array: array of integers
 * @size: size of the array
 *
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	size_t tmp = 0;

	if (size > 0 && array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size - i - 1; j++)
			{
				if (array[j] > array[j + 1])
				{
					tmp = array[j];
					array[j] = array[j + 1];
					array[j + 1] = tmp;
					print_array(array, size);
				}
=======

/**
 * bubble_sort - implementation bubble sort algorithm
 *
 * @array: input array
 * @size: size of the array
 *
 * Return: FUNCTION DO NOT RETURN
 */
void bubble_sort(int *array, size_t size)
{
	size_t o_itr, i_itr;
	int tmp;

	for (o_itr = 0; o_itr < size; o_itr++)
	{
		for (i_itr = 0; i_itr < size - 1; i_itr++)
		{
			if (array[i_itr] > array[i_itr + 1])
			{
				tmp = array[i_itr];
				array[i_itr] = array[i_itr + 1];
				array[i_itr + 1] = tmp;
				print_array(array, size);
>>>>>>> parent of f0dfb48 (UPdate)
			}
		}
	}

}
