#include <stdio.h>
#include <stdlib.h>

#include "selection.h"

#define NUMBER_LENGTH_PRINTED 5

void print(int *list, int size)
{
	for(int i = 0; i < size; i++)
	{
		printf("[%*d]", NUMBER_LENGTH_PRINTED, list[i]);
	}

	puts("");
}

void test(int listSize)
{
	int *list = create(listSize);

	randomizeList(list, listSize);

	puts("Created list:");
	print(list, listSize);

	sort(list, listSize);

	puts("");

	puts("Sorted list:");
	print(list, listSize);

	free(list);
}