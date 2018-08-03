#include <stdio.h>
int main()
{
    int i;
    char c;
    float f;
    double d;
    long l;
    short s;

    printf("Size of int is %lu byte\n", sizeof(i));
    printf("Size of char is %lu byte\n", sizeof(c));
    printf("Size of float is %lu byte\n", sizeof(f));
    printf("Size of double is %lu byte\n", sizeof(d));
    printf("Size of long is %lu byte\n", sizeof(l));
    printf("Size of short is %lu byte\n", sizeof(s));

    return 0;
}