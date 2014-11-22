#include <stdio.h>
void replace(int *x, int *y);
int main(int argc, char const *argv[])
{
	int x = 1, y = 10;
	replace(&x, &y);
	printf("%d , %d\n",x,y);
	return 0;
}


void replace(int *x, int *y)
{
	*y = *x ^ *y;
	*x = *x ^ *y;
	*y = *x ^ *y;
}