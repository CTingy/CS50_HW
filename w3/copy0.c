#include<stdio.h>
#include<cs50.h>
#include<string.h>
#include<ctype.h>

int main()
{
    string s = get_string("s: ");
    string t = s;
    if(strlen(t)>0)
    {
        t[0] = toupper(t[0]);
    }
    printf("s: %s\n", s);
    printf("t: %s\n", t);
}