#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c;
    printf("Please enter 3 numbers:\n");
    scanf("%d %d %d", &a, &b, &c);
    
    if (pow(a,2)+pow(b,2) == pow(c,2))
    {
        printf("is triangle\n");
    }

    else
    {
        printf("is not triangle\n");
    }
    return 0;
}