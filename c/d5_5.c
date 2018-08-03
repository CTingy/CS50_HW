#include <stdio.h>
#include <string.h>
#include <cs50.h>

int main()
{
    int i;
    char s[20];
    scanf("%s", s);
    for(i=0; i<20; i++){
        if(s[i] >='a' && s[i] <='z'){
        s[i]-=32;
        }
    }
    printf("%s\n", s);
}