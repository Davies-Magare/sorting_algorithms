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
				print_arr(array, size);
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
/**
 * print_array - prints an array recursively
 * @array: The array
 * @size: The size of the array
 *
 * Return: Nothing
 */
void print_arr(int *array, int size)
{
	if (size == 1)
	{
		print_int(array[0]);
		_putchar('\n');
		return;
	}
	print_int(array[0]);
	_putchar(',');
	_putchar(' ');
	print_arr(&array[1], size - 1);
}
