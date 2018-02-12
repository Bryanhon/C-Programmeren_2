#include <stdio.h>

int main()
{
	int m = 10; 		// Value of m = 10;
	int n = 5;			// Value of n = 5;
	
	int *mp = NULL; 	// *mp points to NULL address	
	int *np = NULL; 	// *np points to NULL address
	
	mp = &m;			// Adress of integer m gets put into mp
	np = &n;			// Adress of integer n gets put into np
	
	*mp = *mp + *np;	// Value of adress mp is pointing at = value of pointer mp + value of pointer np
	*np = *mp - *np;	// Value of adress np is pointing at = value of pointer mp - value of pointer np

	printf("%d %d\n%d %d\n", m, *mp, n, *np); // will print 15 15 10 10

	return 0;
}