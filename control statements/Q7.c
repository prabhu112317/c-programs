#include<stdio.h>
int main()
{
	int a,b,c;
	scanf ("%d%d%d", &a, &b, &c);
	if(a<b&&a<c)
	printf ("smaller= %d", a);
	else if (b<c)
	printf ("smaller= %d", b);
	else 
	printf ("smaller= %d", c);
	return 0;
}