#include <stdio.h>

int main() {
	
	int begin = 2, end = 20, d = 2, sum = 0;
	do
	{
		printf("%d", begin);
		if(begin != end)
		printf("+");
		sum = sum + begin;
		begin = begin + d;
		
	}while(begin <= end);

	printf("=%d\n", sum);
    return 0;
}