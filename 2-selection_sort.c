#include "sort.h"

/**
 * selection_sort - sorts an array of integers in ascending order using
 * the Selection sort algorithm
 * @array: array to sort
 * @size: size of array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, minValOfInd;
	int switcher;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1 ; i++)
	{
		minValOfInd = i;
		for (j = i + 1; j < size ; j++)
		{
			if (array[minValOfInd] > array[j])
				minValOfInd = j;
		}
		if (i != minValOfInd)
		{
			switcher = array[i];
			array[i] = array[minValOfInd];
			array[minValOfInd] = switcher;
			print_array(array, size);

		}

	}
}
