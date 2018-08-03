#include <stdio.h>
int main() {
int n, sum = 0;
for (; ; ) {
	scanf("%d", &n);
	if (n == -1) break;
		sum += n;
	}
	printf("sum = %d\n", sum);
	return 0;
}
