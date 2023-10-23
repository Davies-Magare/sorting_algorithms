#include "sort.h"

/**
 * bubble_sort - sorts an array of integers using
 * the bubble sort algorithm
 * @array: An array of integers
 * @size: The size of the array
 *
 * Return: Nothing
 */
void bubble_sort(int *array, size_t size)
{
	unsigned int sorted, i, j, temp;

	sorted = 0;
	while (!sorted && size > 1)
	{
		i = 0;
		while (i < size - 1)
		{
			if (array[i + 1] < array[i])
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				print_array(array, size);
			}
			i++;
		}
		j = 0;
		while (j < size)
		{
			if (array[j + 1] < array[j])
				break;
			else if (j == size - 2)
			{
				sorted = 1;
				break;
			}
			j++;
		}
	}
}
