#include <stdio.h>
int main()
{
    int i;
    float f;    
    
    scanf("%i", &i);
    f = 1.8*i + 32;
    printf("攝氏%i度=華式%8.2f度\n", i, f); 

    return 0;
}