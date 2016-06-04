#include <stdio.h>
#include <stdlib.h>
 
int main()
{
	int a,b,x;
	printf("Vvedite a:");
	scanf ("%d",&a);
	printf ("Vvedite b:");
	scanf ("%d", &b);
	x=-(b/a);
	printf ("%d",x);
	return 0;
}
