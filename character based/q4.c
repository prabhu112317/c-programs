#include<stdio.h>
int main()
{
	char ch;
	printf("Enter the Character: ");
	scanf("%cd", &ch);
	  if ('0'<=ch && '9'>=ch)
         printf ("The given Character is EQUAL");
	  else
	     printf ("The given Character is NOT EQUAL");
	return 0;	
}