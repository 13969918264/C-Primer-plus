/*
	Name: 赵子豪
	Date: 2017年6月6号
*/



/*	stillbad.c -- a program with its syntax errors fixed	*/
#include <stdio.h>
int main(void)
{
	int n;
	int n2;
	int n3;

/*	this program has semanic error	*/
	n = 5;
	n2 = n * n;
	n3 = n2 * n;
	printf("n = %d, n squared = %d, n cubed = %d\n", n, n2, n3);

	return 0;
}
