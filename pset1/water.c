#include <cs50.h>
#include <stdio.h>

int main(void)
{
    printf("Please enter how long your shower was in minutes\n");
    int n;
    do
    {
        printf("Please enter an positive integer\n");
        n = get_int();
    }
    while(n < 0);
    
    printf("you took %i minutes\n", n);
    printf("it equals %i bottles\n", n*12);
}