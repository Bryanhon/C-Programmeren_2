#include <stdio.h>

int main()
{
	int m = 25, n = 77;
	char c = '*';
	int *itemp;
	//------------------------
	m = &n; // m is not a pointer so it is not logical it holds an address.
	itemp = m; // m = value of 25 so the itemp will point to address 0x25?
	*itemp = c; // itemp is a pointer to int values not char values
	*itemp = &c; // we are putting an address in the value of wherever itemp is pointing
				 // same problem as the first case.

	return 0;
}