#include<stdio.h>
#include<cs50.h>
#include<string.h>
#include<ctype.h>

int main()
{
    char *s = get_string("s: "); //s is a string, and *s is an address poiting a string (points the 1st character)
    // to ensure the input is the thing that OS can handle. !s -> s != NULL
    if (!s)
    {
        return 1;
    }

    // allocate the memory for anotheer string
    char *t = malloc((strlen(s)+1) * sizeof(char));
    if (!t)
    {
        return 1;
    }

    //copy string into memory
    for (int i = 0, n = strlen(s); i <= n; i++)
    {
        t[i] = s[i];
    }

    //capitalize first letter in copy
    if (strlen(t) > 0)
    {
        t[0] = toupper(t[0]);
    }

    //print strings
    printf("s: %s\n", s);
    printf("t: %s\n", t);

    //free memory
    free(t);
    return 0;
}