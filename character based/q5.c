#include<stdio.h>
int main()
{
	char a,b;
	printf ("Enter two Characters: ");
	scanf("%c %c",&a,&b );
	if(a==b)
	printf("The given Characters is EQUAL");
	else
	printf("The given Characters is NOT EQUAL");
	return 0;
}