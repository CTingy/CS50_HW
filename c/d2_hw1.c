#include <stdio.h>
int main() {
	
	float a, b, c, d;
	printf("請輸入上底、下底、高：\n ");
	scanf("%f %f %f", &a, &b, &c);
	
	d = (a+b)*c/2;
	printf("the answer is %.2f\n", d);
}
