#include <stdio.h>

int main(){
    
    int n = 100;
    int i, j;
    
    for(i = n; i > 1; i--)
    {
        for(j = i/2; j > 1; j--)
        {
            if(i%j == 0)
                break;
        }
        if(j==1)
            printf("%d ", i);
    }
}
    
    
    
    /*
        printf("please enter a number:\n");
    int a, n, i;
    scanf("%d", &n);
    
    do
    {
        for(i = (n/2); i > 0; --i)
        {
        a = (n%i);
        }
    }while(a != 0);
    
    printf("%d\n", i);
    
    if(i == 1){
        printf("質數\n");
    }
    return 0;
}
*/