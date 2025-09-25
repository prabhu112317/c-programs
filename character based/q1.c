#include <stdio.h>
int main()
{
    char a;
    printf ("ENTER THE CHARACTER:");
	scanf ("%c", &a);
	if (a=='a'||a=='e'||a=='i'||a=='o'||a=='u'||a=='A'||a=='E'||a=='I'||a=='O'||a=='U')
	printf ("The Given Character is VOWEL");
	else
	printf ("The Given Character is CONSTANT");
	return 0;
}