#include<stdio.h>
int main()
{
	int a,b,sum;
	scanf ("%d%d", &a, &b);
	sum=a+b;
	printf ("sum= %d\n", sum);
	
	if (sum%2==0)
	printf ("Even= %d",sum);
	else
	printf ("Odd= %d", sum);
	return 0;
}