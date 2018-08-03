#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    do
    {
        printf("Please enter an positive integer less than 23\nHeight:");
        n = get_int();
    }
    while(n > 23 || n < 0);
    
    for (int i = 0 ; i < n ; i++)
    {
        for (int j = 0 ; j < n-i-1 ; j++)
        {
            printf(" ");
        }
        for (int k = 0 ; k < i+1 ; k++)
        {
            printf("#");
        }
        printf("  ");
        for (int k = 0 ; k < i+1 ; k++)
        {
            printf("#");
        }
    printf("\n");
    }
}