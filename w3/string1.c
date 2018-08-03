#include<stdio.h>
#include<cs50.h>
#include<string.h>

int main()
{
    //get the string
    char *s = get_string("string: ");
    if (!s)
    {
        return 1;
    }

    //print string, one character per line
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        printf("%c\n", *(s + i)); //printf("%c\n", s[i]);
    }
}