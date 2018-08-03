#include <stdio.h>

int max(int m, int n);
int min(int m, int n)
{
    if(m>n) return n;
    else    return m;
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d is smaller\n", min(a,b));
    printf("%d is bigger\n", max(a,b));
}

int max(int m, int n)
{
    if(m>n) return m;
    else return n;
}