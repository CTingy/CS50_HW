#include <stdio.h>
#include <conio.h>

int main()
{
    char a, b;
    do{
        a = getche();
        printf("\n");
        if (a>='A' && a<='Z'){
            b=a+32;
            printf("Lower of %c is %c\n", a, b);
        }
        
        else if (a>='a' && a<='z'){
            printf("Already lower\n");    
        }
     
        else if (a>='0' && a<="9"){
            printf("Bye\n");
        }
            
        else{ 
            printf("enter\n");
        }
        while(!(a>='0' && a<="9"))
    }
}