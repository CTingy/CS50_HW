#include <stdio.h>

int main() {
	
	float a, b, c;
	int d;
	printf("Please enter 2 numbers:\n");
	scanf("%f %f", &a, &b);
	
	c = a/b;
	d = c + 0.5;

	printf("the answer is %d\n", d);
}
	
/*	float c;
	int a, b, d;
	printf("Please enter 2 numbers:\n");
	scanf("%d %d", &a, &b);
	
	c = (float)a/b;
	d = c + 0.5;

	printf("the answer is %d\n", d);
}
*/