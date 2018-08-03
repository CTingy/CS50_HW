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
        string s1 = argv[1];
        int m = strlen(s1);
        int j = 0, k = 0;
        int n, a, b;
        printf("ciphertext:");
        for(j = 0, n = strlen(s0); j < n; j++)
        {
            if(s1[k%m] >= 65 && s1[k%m] <= 90)
            {
                b = s1[k%m] - 65;
            }
            else if(s1[k%m] >= 97 && s1[k%m] <= 122)
            {
                b = s1[k%m] - 97;
            }
           /* else
            {
                int i = atoi(&s1[k%m]);
                printf("%c", i);
            }*/

            if(s0[j] == ' ')
            {
                printf(" ");
                continue;
            }
            else if(s0[j] >= 65 && s0[j] <= 90)
            {
                a = s0[j] - 64;
            }
            else if(s0[j] >= 97 && s0[j] <= 122)
            {
                a = s0[j] - 96;
            }
            else
            {
                printf("%c", s0[j]);
                continue;
            }

            if((a + b)%26 != 0)
            {
                if(s0[j] >= 65 && s0[j] <= 90)
                {
                    printf("%c", (a + b)%26 + 64);
                }
                else if(s0[j] >= 97 && s0[j] <= 122)
                {
                    printf("%c", (a + b)%26 + 96);
                }
            }
            else
            {
                if(s0[j] >= 65 && s0[j] <= 90)
                {
                    printf("%c", 64 + 26);
                }
                else if(s0[j] >= 97 && s0[j] <= 122)
                {
                    printf("%c", 96 + 26);
                }
            }
            k = k + 1;
        }
        printf("\n");
        return 0;
    }
    else
    {
        return 1;
    }
}