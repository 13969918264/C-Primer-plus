/*
	Name: 赵子豪(ZiHao Zhao)
	Date: 2017年11月27日
*/
/*	fetch_n.c	*/
#include <stdio.h>
#include <string.h>

char * fetch_n(char * st, int n)
{
/*
	char * ret_val;
	char * first;

	ret_val = fgets(st, n, stdin);
	if (first = strchr(st, '\n'))
		*first = '\0';
*/
	char * ret_val;
	int i = 0;

	ret_val = st;
	while (i < n && (*st = getchar()) != EOF)
	{
		st++;
		i++;
	}
	*st = '\0';

	return ret_val;
}
