#include<stdio.h>
int main()
{
	int a;
	scanf ("%d", &a);
	if (a>0)
	printf ("%d is positive");
	else if(a<0)
	printf ("%d is negative");
	else 
	printf ("%d is zero");
	return 0;
}