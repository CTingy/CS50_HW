#include <stdio.h>
#include <math.h>

int main() {
	
	int a, b, c;
	printf("Please input 3 numbers:\n");
	scanf("%d %d %d", &a, &b, &c);
	
	if(pow(a,3) + pow(b,3) + pow(c,3) == 100*a + 10*b + c)
	{
		printf("It's an Armstrong number\n");
	}
	else 
		printf("It's not an Armstrong number\n");

    return 0;
}