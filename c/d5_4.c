#include <stdio.h>
#include <string.h>

int main()
{
    char a[15]="hello ";
    char b[] = "world";
    printf("length is %lu\n", strlen(a));
    strcat(a,b);
    printf("a+b = %s\n", a);
    strcpy(a,b);
    printf("after copy %s\n", a);
    printf("Compare a with b is %d\n", strcmp(a, b));

}