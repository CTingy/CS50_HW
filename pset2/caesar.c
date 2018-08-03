#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(int argc, string argv[])
{
    if(argc == 2)
    {
        printf("please enter a string\n");
        string s0 = get_string();
        int i = atoi(argv[1]);
        printf("ciphertext:");
        for(int j = 0, n = strlen(s0); j < n; j++)
        {
            if(s0[j] >= 65 & s0[j] <= 90)
            {
                printf("%c", (s0[j]+i - 64)%26 + 64);
            }
            else if(s0[j] >= 97 & s0[j] <= 122)
            {
                printf("%c", (s0[j]+i - 96)%26 + 96);
            }
            else
            {
                printf("%c", s0[j]);
            }
        }
        printf("\n");
        return 0;
    }
    else
    {
        return 1;
    }
}