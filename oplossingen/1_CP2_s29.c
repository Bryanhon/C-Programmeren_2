#include <stdio.h>

// vervolg: Mogelijk of niet?

int main()
{
	int i, j;	// ja
	int *p, *q; // ja

	p = &i; 	// ja
	p = &*&i;	// zelfde als het adres van i te nemen dus ja
	i = (int) p;// nee: we nemen gewoon het adres van p en typecasten dit naar een int
	q = &p;		// nee: warning: incompatible pointer types assigning to 'int *' from 'int **'; remove &
	*q = &j;	// nee: warning: incompatible pointer to integer conversion assigning to 'int' from 'int *'; remove &
	//i = (*&)j;	// nee: error: expected expression (typecast to pointer gaat niet)
	i = *&*&j;	// why?
	i = *p++ + *q; // ja we nemen de waarde op p tellen er 1 bij op en tellen
					// dat weer samen op met de waarde op q en steken dat in i
	
	return 0;
}