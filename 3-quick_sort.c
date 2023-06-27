#include "sort.h"
int partition(int arr[], int low, int high, size_t size);

/**
 * quick_sort - sorting algorithm
 * Return: nothing.
*/
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size <= 1)
		return;
	quick(array, 0, size - 1, size);
}
/**
 * quick -The main function that implements QuickSort
 * Return: nothing
*/
void quick(int *arr, int low, int high, size_t size)
{
	int pi;

	if (low < high)
	{
		pi = partition(arr, low, high, size);

		quick(arr, low, pi - 1, size);
		quick(arr, pi + 1, high, size);
	}

}

/**
 * partition
 * Return: index
*/
int partition(int *arr, int low, int high, size_t size)
{
	int i = low - 1;
	int j;

	for (j = low; j < high; j++)
	{
		if (arr[j] <= arr[high])
		{
			i++;
			if (i != j)
			{
				swap(&arr[i], &arr[j]);
				print_array(arr, size);
			}
		}
	}
	if (i + 1 != high)
	{
		swap(&arr[i + 1], &arr[high]);
		print_array(arr, size);
	}
	return (i + 1);
}
/**
 *swap - Exchange values
 * Return: nothing
*/
void swap(int *first, int *second)
{
	int sw = *first;
	*first = *second;
	*second = sw;
}
