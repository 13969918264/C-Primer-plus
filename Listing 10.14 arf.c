/*
	Name: 赵子豪(ZiHao Zhao)
	Date: 2017年11月07日
*/
/*	arf.c -- array function	*/
#include <stdio.h>
#define SIZE 5
void show_array(const double ar[], int n);
void mult_array(double ar[], int n, double mult);
int main(void)
{
	double dip[SIZE] = {20.0, 17.66, 8.2, 15.3, 22.22};

	printf("The original dip array:\n");
	show_array(dip, SIZE);
	mult_array(dip, SIZE, 2.5);
	printf("The dip array after calling mult_array():\n");
	show_array(dip, SIZE);

	return 0;
}

/*	display array contents	*/
void show_array(const double ar[], int n)
{
	int i;

	for (i = 0; i < n; )
		printf("%8.3lf", ar[i++]);
	putchar('\n');
}

/*	multiplies each array member by the same multiplier	*/
void mult_array(double ar[], int n, double mult)
{
	int i;

	for (i = 0; i < n; )
		ar[i++] *= mult;
}
