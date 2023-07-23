#include "sort.h"


/**
 * swap - Swaps two integers.
 *
 * @a: Pointer to the first integer.
 * @b: Pointer to the second integer.
 *
 */
void swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}


/**
 * partition - Partitions an array for the Quick Sort algorithm.
 *
 * @array: Pointer to the array to be partitioned.
 * @start: Starting index of the partition.
 * @end: Ending index of the partition.
 * @size: Number of elements in the array.
 *
 * Return: The index of the pivot after partitioning.
 */
int partition(int *array, int start, int end, size_t size)
{
	int j, i = start;
	int pivot = array[end];

	for (j = start; j < end; j++)
	{
		if (array[j] <= pivot)
		{
			if (i != j)
			{
				swap(&array[i], &array[j]);
				print_array(array, size);
			}
			i++;
		}
	}
	if (i != end)
	{
		swap(&array[i], &array[end]);
		print_array(array, size);
	}
	return (i);
}

/**
 * quickSort_reco - Implements the Quick Sort algorithm recursively.
 *
 * @array: Pointer to the array to be sorted.
 * @start: Starting index of the array.
 * @end: Ending index of the array.
 * @size: Number of elements in the array.
 *
 * Return: Nothing (void).
 */
void quickSort_reco(int *array, int start, int end, size_t size)
{
	int pivot_idx;

	if (start < end)
	{
		pivot_idx = partition(array, start, end, size);
		quickSort_reco(array, start, pivot_idx - 1, size);
		quickSort_reco(array, pivot_idx + 1, end, size);
	}
}

/**
 * quick_sort - Sorts an array of integers in ascending order using the
 *              Quick Sort algorithm.
 *
 * @array: Pointer to the array to be sorted.
 * @size: Number of elements in the array.
 *
 * Return: Nothing (void).
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;
	quickSort_reco(array, 0, size - 1, size);

}
