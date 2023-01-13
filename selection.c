#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define MAX_RAND 1000

int *create(int size)
{
	return calloc(size, sizeof(int));
}

void randomizeList(int *list, int size)
{
	srand(time(NULL));

	for(int i = 0; i < size; i++)
	{
		list[i] = rand() % MAX_RAND;
	}
}

void exchange(int *list, int a, int b)
{
	int temp = list[b];

	list[b] = list[a];
	list[a] = temp;
}

void sort(int *list, int size)
{
	for(int smallerJ = 0; smallerJ < size; smallerJ++)
	{
		for(int k = smallerJ + 1; k < size; k++)
		{
			if(list[k] < list[smallerJ])
			{
				exchange(list, smallerJ, k);
			}
		}
	}
}