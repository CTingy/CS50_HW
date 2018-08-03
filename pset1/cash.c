#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    float f ;
    do
    {
        printf("How much change is owed?\n");
        f = get_float();
    }
    while(f < 0.0);
    
    int n = round(f*100);   
    int i, j, k ,l;
    
    i = n/25;
    n = n%25;
    j = n/10;
    n = n%10;
    k = n/5;
    l = n%5;
    
    printf("%i\n", i + j + k + l);
}