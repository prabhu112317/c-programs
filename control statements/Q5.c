#include<stdio.h>
int main()
{
	int a;
	scanf ("%d", &a);
	if(99<a&&a<1000)
	printf ("The given number is Three digit number %d", a);
	else
	printf ("not a three digit number %d", a);
	return 0;	
}