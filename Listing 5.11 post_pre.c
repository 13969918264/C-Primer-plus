/*
	Name: 赵子豪(ZiHao Zhao)
	Date: 2017年9月21日
*/
/*	post_pre.c -- postfix vs prefix	*/
int main(void)
{
	int a = 1, b = 1;
	int a_post, pre_b;

	a_post = a++;			//	value of a++ during assignment phase
	pre_b = ++b;			//	value of ++b during assignment phase
	printf("a   a_post  b   pre_b \n");
	printf("%ld %5d %5d %5d\n", a, a_post, b, pre_b);

	return 0;
}
