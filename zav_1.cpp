#include <iostream>
#include <stdio.h>

int main ()
{
	int x,y;
	printf ("Vvedite x:");
	scanf ("%d",&x);
	y=x*x;
	printf ("x=%d, y=%d\n",x,y);
	printf ("Vvedite x:");
	scanf ("%d",&x);
	y=x*x;
	printf ("x=%d, y=%d\n",x,y);
	return 0;
}
