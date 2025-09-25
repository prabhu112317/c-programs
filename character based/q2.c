#include <stdio.h>
int main()
{
	char ch;
	printf ("Enter the Character:");
	scanf ("%c", &ch);
	  if ('A'<=ch && 'Z'>=ch)
          printf("The given character is UPPERCASE");
	  else if('a'<=ch && 'z'>=ch)
	       printf("The given Character is LOWERCASE");
	  else if('0'<=ch && '9' >=ch)
	    printf("The given Character is DIGIT");
	  else
	    printf("The given Character is  SPECIAL SYMBOL");
	return 0;
}