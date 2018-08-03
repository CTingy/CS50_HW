#include <stdio.h>

int main() {
	
	int begin = 2, end = 20, d = 2, sum = 0;

	for (int i = begin ; i <= end ; i = i + d)
	{
	    sum = sum + i;
	    printf("%i", i);
	    
	    if (i != end){
	    	printf("+");
	    }
	}
	printf("=%d\n", sum);
    return 0;
}