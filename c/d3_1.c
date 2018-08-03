#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c, d;
    printf("Please enter 3 numbers:\n");
    scanf("%d %d %d", &a, &b, &c);
        d = pow(b,2)- 4*a*c;

    if (d > 0)
    {
        printf("2 different solutions\n");
    }
    else if (d < 0)
    {
        printf("no solution\n");
    }
    else
    {
        printf("bouble same solutions\n");
    }
    printf("%d\n",(int)pow(b,2));
    return 0;
}