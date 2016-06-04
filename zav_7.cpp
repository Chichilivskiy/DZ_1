#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {

	int a = 1,b = 2,c;
	printf("A = %d\nY = %d", a, b);
	c = a;
	a = b;
	b = c;
	printf("\nPominani miscami:");
	printf("\nA = %d\nY = %d", a, b);
	
	return 0;
}
	
