#include "sort.h"

/**
 * selection_sort - sorts an array of integers using
 * the Selection sort algorithm
 *
 * @array: An array
 * @size: The size of the array
 *
 * Return: Nothing
 */
void selection_sort(int *array, size_t size)
{
	unsigned int i, smallest_index;
	int temp;

	for (i = 0; i < size - 1; i++)
	{
		smallest_index = find_smallest(array, size, i);
		if (smallest_index != i)
		{
			temp = array[i];
			array[i] = array[smallest_index];
			array[smallest_index] = temp;
			print_array(array, size);
		}

	}
}

/**
 * find_smallest - finds the index of the smallest element
 * of the array
 *
 * @array: The array to search
 * @size: The size of the array
 * @smallest: The initial smallest index
 *
 * Return: The index of the smallest element
 */
size_t find_smallest(int *array, size_t size, size_t smallest)
{
	size_t i;

	for (i = smallest + 1; i < size; i++)
	{
		if (array[i] < array[smallest])
			smallest = i;

	}
	return (smallest);
}
