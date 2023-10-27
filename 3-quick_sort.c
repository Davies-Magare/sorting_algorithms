#include "sort.h"
#include <stdio.h>

/**
 * quick_sort - Calls a quick_sort function
 * @array: The array to sort
 * @size: The size of the array
 *
 * Return: Nothing
 */

void quick_sort(int *array, size_t size)
{
	q_sort(array, 0, size - 1, size);
}

/**
 * q_sort - Sorts an array with the quick sort algorithm
 * @array: The array to be sorted
 * @low: The lower boundary of the array
 * @high: The higher boundary of the array
 * @size: The size of the array
 *
 * Return: Nothing
 */
void q_sort(int *array, int low, int high, unsigned int size)
{
	int p;

	if (low >= high)
		return;
	p = partition(array, low, high, size);
	q_sort(array, low, p - 1, size);
	q_sort(array, p + 1, high, size);
}
/**
 * partition - Partitions an array using Lomuto's algorithm
 * @array: The array to partition
 * @low: The lower boundary of the array
 * @high: The upper boundary of the array
 * @size: The size of the array
 *
 * Return: The position of the pivot
 */
int partition(int *array, int low, int high, unsigned int size)
{
	int i, j;

	i = low - 1;
	for (j = low; j < high; j++)
	{
		if (array[j] <= array[high])
		{
			i++;
			swap(array, i, j, size);
		}
	}
	i++;
	swap(array, i, high, size);
	return (i);
}

/**
 * swap - swaps two elements of an array
 * @array: The array to swap
 * @i: The index of the first element to swap
 * @j: The index of the second element to swap
 * @size: The size of the array
 *
 * Return: Nothing
 */
void swap(int *array, int i, int j, unsigned int size)
{
	int temp;

	if (i != j)
	{
		temp = array[i];
		array[i] = array[j];
		array[j] = temp;
		print_array(array, size);
	}
}
