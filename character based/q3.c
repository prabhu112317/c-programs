#include<stdio.h>
int main()
{
	char ch;
	printf ("Enter the Character: ");
	scanf ("%c", &ch);
	    if('A'<=ch && 'Z'>=ch || 'a'<=ch && 'z'>=ch)
	       printf ("The given Character is ALPHABET");
	    else
	       printf ("The given Character is NOT ALPHABET");
	 return 0;
}