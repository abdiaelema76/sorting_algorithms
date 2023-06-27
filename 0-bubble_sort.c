#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending order
 * @array: the array to be sorted
 * @size: size of the array
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, k;
	int temp;
	int swapped;

	if (array == NULL || size < 2)
	for (i = 0; i < size - 1; i++)
	{
		swapped = 0;
		/* check if any swaps occurred in this pass*/

		/*Compare and swap adjacent elements*/
		for (k = 0; k < size - i - 1; k++)
		{
			if (array[k] > array[k + 1])
			{
				/*Swap the elements*/
				temp = array[k];
				array[k] = array[k + 1];
				array[k + 1] = temp;
				swapped = 1;
				print_array(array, size);
			}
		}

		/*If no swaps occurred, the array is already sorted*/
		if (swapped == 0)
		{
			return;
		}
	}
}
