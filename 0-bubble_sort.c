#include "sort.h"

/**
 * bubble_sort - sorts bubbly
 * @array: array to sort
 * @size: size
 *
 */
void bubble_sort(int *array, size_t size)
{
	size_t i = 0;
	int valOfInd, isChenged = 1;

	if (array == NULL || size < 2)
		return;

	while (isChenged)
	{
		isChenged = 0;
		for (i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				isChenged = 1;
				valOfInd = array[i];
				array[i] = array[i + 1];
				array[i + 1] = valOfInd;
				print_array(array, size);
			}
		}
	}

}
