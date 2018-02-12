#include <stdio.h>

// Mogelijk of niet?

int main()
{
	int x; 			// ja
	int *p = NULL; 	// ja

	p 	= &x; 	// ja
	x 	= null; // nee
	p 	= x;	// nee
	x 	= *p;	// ja
	*p 	= x;	// ja
	*p 	= &x;	// ja maar we gaan een adress in de waarde op pointer p steken
				// wat niet echt logisch is.
	x 	= p;	// nee
	&x 	= p;	// nee

	
	return 0;
}