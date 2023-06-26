#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 *main - Entry point
 * 
 * bubble_sort - Sorts an array of integers in ascending order
 * 
 * using the Bubble sort algorithm
 *
 * @array: Pointer to the first element of the array
 * 
 * @size: Number of elements in the array
 *
 * Return: Always 0
 */

void bubble_sort(int *array, size_t size)
{
    if (array == NULL || size < 2)
        return;

    int swapped = 0;
    size_t i, j;

    for (i = 0; i < size - 1; i++)
    {
        swapped = 0;

        for (j = 0; j < size - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
                swapped = 1;

                print_array(array, size);  // Prints the array after each swap
            }
        }

        if (!swapped)
            break;
    }
}

