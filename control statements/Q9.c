#include<stdio.h>
int main()
{
	int a;
	scanf ("%d", &a);
	if (a&1)
	printf ("Odd= %d", a);
	else
	printf ("Even= %d", a);
	return 0;
}