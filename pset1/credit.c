#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    long long num;
    do
    {
        printf("Please enter a credit card number\n");
        num = get_long_long();
    }
    while((10E14 <= num && num < 10E15) || num > 10E17 || num < 10E13);
    //while( num < 0 || num > 10E17);
    
    printf("%s\n", s);
    
    for(i=0; i++)
    
}
