#include "stdafx.h"
#include "functions.h"

int * getRandom()
{
	static int  r[10];
	int i;

	/* set the seed */
	srand((unsigned)time(NULL));
	for (i = 0; i < 10; ++i)
	{
		r[i] = rand();
		printf("r[%d] = %d\n", i, r[i]);

	}

	return r;
}

/*Arrange the N elements of ARRAY in random order.
Only effective if N is much smaller than RAND_MAX;
if this may not be the case, use a better random
number generator.*/
int * shuffle(int *array, size_t t)
{
	if (t > 1)
	{
		size_t i;
		for (i = 0; i < t - 1; i++)
		{
			size_t j = i + rand() / (RAND_MAX / (t - i) + 1);
			int t = array[j];
			array[j] = array[i];
			array[i] = t;
		}
	}
	return(array);
}