#include <stdio.h>

int main(){
    
    for(int i=0; i<5; i++){
        for(int j=0; j<i; j++){
            printf(" ");
        }
        for(int k=9-(2*i); k>0; k--){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}