#include <stdio.h>

void bubble_sort(int *array, size_t size) {
    int i, j;
    for (i = 0; i < size - 1; i++) {
        for (j = 0; j < size - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                /* Swap elements */
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;

                /* Print the array after each swap */
                printf("Array after swap: ");
                for (int k = 0; k < size; k++) {
                    printf("%d ", array[k]);
                }
                printf("\n");
            }
        }
    }
}

