#include <stdio.h>

int main ()

{
	float a;
	printf("Vvedite a\n");
	scanf("%f", &a);
	printf("%.1f\n", a);
	printf("%.3f\n", a);
	printf("%.7f\n", a);
	printf("%e\n", a);	
	
	return 0;
}
