#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

//#define DEBUG

int som(short int *getalA, short int *getalB, short int *uitkomst);

int main(int argc, char *argv[])
{
#ifdef DEBUG
	printf("SHRT_MAX == %d\r\n", SHRT_MAX);
#endif
	
	if (argc != 3) {
		printf("Wrong input please use the program like this...\r\n");
		printf("./33 Number1 Number2\r\n");
		return 0;
	} 
	
	if (atoi(argv[1]) > SHRT_MAX || atoi(argv[2]) > SHRT_MAX) {
		printf("One or both of the numbers are too large...\r\n");
		printf("Max size is %i\r\n", SHRT_MAX);
		return 0;
	}
	
	short int getalA = (short int)atoi(argv[1]);
	short int getalB = (short int)atoi(argv[2]);
	short int uitkomst = 0;
	
	if (som(&getalA, &getalB, &uitkomst) == 1) {
		printf("EXIT_FAILURE\r\n");
		printf("som() returned a value of 1.\r\n");
		exit(EXIT_FAILURE);
	} else if (som(&getalA, &getalB, &uitkomst) == 0){
		printf("EXIT_SUCCESS\r\n");
		printf("sum of %hi and %hi = %hi\r\n", getalA, getalB, uitkomst);
		exit(EXIT_SUCCESS);
	}
	
	return 0;
}

int som(short int *getalA, short int *getalB, short int *uitkomst)
{
#ifdef DEBUG
	printf("%d, %d, %d\r\n", *getalA, *getalB, *uitkomst);
#endif
	
	if ((*getalA + *getalB) > SHRT_MAX) {
		return 1;
	} else {
		*uitkomst = *getalA + *getalB;
		return 0;
	}
	
	return 0;
}