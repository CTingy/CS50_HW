//Fails to swap two integers

#include <stdio.h>
#include <cs50.h>

void swap(int *a, int *b); //  a is an address, *a is to get the value of address a, so *a is an integer

int main(void)
{
    int x = 1;
    int y = 2;

    printf("x is %i, y is %i\n", x, y);
    swap(&x, &y); //Find the address of x and the address of y. (Not go to)
    printf("x is %i, y is %i\n", x, y);
}
void swap(int *a, int *b)
{
    int tmp = 0;
    tmp = *a; //*a: go to the address and get the value of this address
    *a = *b;
    *b = tmp;
}