#include "sort.h"

/**
 * bubble_sort - sorts an array
 * of integers. However, as it swaps
 * an element, it also prints a
 * representation of the array's current
 * state.
 * @array: array of integers to be sorted
 * @size: size of the array
 * Return: Always void
 */
void bubble_sort(int *array, size_t size)
{
	unsigned int i, temp, flag = 1;

	if (!array)
		return;

	while (flag == 1 && i != size)
		for (i = 0, flag = 0; i < size - 1; i++)
		{
			/* Create a window comparing two ints */
			if (array[i] > array[i + 1])
			{
				/* If the current index > next index, swap the elements */
				temp = array[i + 1], array[i + 1] = array[i], array[i] = temp;
				print_array(array, size), flag = 1;	/* Print the updated array */
			}
		}
}
