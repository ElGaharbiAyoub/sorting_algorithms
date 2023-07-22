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
	int valOfInd, isChenged = 0;

	if (array == NULL || size < 2)
		return;

	while (i < size)
	{
		if (array[i] > array[i + 1])
		{
			isChenged = 1;
			valOfInd = array[i];
			array[i] = array[i + 1];
			array[i + 1] = valOfInd;
			print_array(array, size);
		}
		i++;
		if (i == size && isChenged == 1)
		{
			i = 0;
			isChenged = 0;
		}
	}
}
