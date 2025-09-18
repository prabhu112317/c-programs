#include<stdio.h>
int main()
{
	int a,b,diff;
	scanf("%d%d", &a, &b);
	diff=a-b;
	printf ("Difference= %d, diff");
	
		if (diff%2==0)
		printf ("Even= %d", diff);
		else
		printf("Odd= %d", diff);
		return 0;
}