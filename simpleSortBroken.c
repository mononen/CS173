#include <stdio.h>
#include <stdlib.h>
#include "testHeader.h"

void genArr();
void sort();
void printArrFunc();

int *array;
int len;

int main()
{
	// printf("thisis another test");
	printf("enter the length of the array that you want to be generated: ");
	int input;
	scanf("%d", &input);
	printf("your input was %d\n", input);
	len = input;
	array = (int*)malloc(100*sizeof(input));
	printf("malloc complete\n");
	genArr();
	//printf("array gen complete\n");
	//printf("thisis a test");
	printArrFunc();
	sort();
	printArrFunc();
	return 0;
}

void genArr()
{
	printf("genarr");
	int i, n;
	printf("len is: %d ", len);
	for (i = 0; i < len; i++)
	{
		n = rand() % 100 + 1;
		array[i] = n;
		printf(", %d", n);
	}
	printf("iz done");
}

void sort()
{
	//sorting algorithm goes here
	int i, n;
	for (i = 0; i < len - 1; i++)
	{
		for (n = 0; n < len - i - 1; n++)
		{
			if(array[n] > array[n + 1])
			{
				swap(&n, &n + 1);
			}
		}
	}
	printf("sorted\n");
}

void printArrFunc()
{
	printf("print arr func");
	int i;
	for (i = 0; i < len; i++)
	{
		printf("%d, ", array[i]);
	}
	printf("bottom of func");
}
