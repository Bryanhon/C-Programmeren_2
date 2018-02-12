#include <stdio.h>

void swap(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
		
	return;
}

void bubbleSort(int *lijst, int lengte)
{
	if (lengte == 1)
		return;
	
	for (int i = 0; i < lengte-1; i++)
		if (lijst[i] > lijst[i+1])
			swap(&lijst[i], &lijst[i+1]);

	bubbleSort(lijst, lengte-1);
	
	return;
}

int main()
{
	int i = 1, j =2;
	int lijst[] = {17, 12, 13, 9, 5, 1, 0, 7, 8, 16, 19};
	int lengte = 11;
	
	printf("Lijst voor sortering:\r\n");
	for (int i = 0; i < 11; i++)
		printf("%d ", lijst[i]);
	
	bubbleSort(lijst, lengte);
	
	printf("\r\nLijst na sortering:\r\n");
	for (int i = 0; i < 11; i++)
		printf("%d ", lijst[i]);
	
	//swap(&i, &j);
	//printf( "i = %d, j = %d\n", i, j);
	
	return 0;
}

