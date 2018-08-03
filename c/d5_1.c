#include <stdio.h>

int main()
{
    printf("enter 10 scores\n");
    
    int i;
    int total=0;
    int a[20];
    int b=10;
    
    for (i=0; i<10; i++)
    {
        scanf("%d",&a[i]);
        total += a[i];
    }
    printf("%d, %.1f\n", total, (float)total/b);
}