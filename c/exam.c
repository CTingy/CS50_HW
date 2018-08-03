#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int* a;
    int i, j, k;
    a = (int*)malloc(sizeof(int)*5);
    
    for(j=0; j<6; j++){
        for(i=0; i<5; i++){
            scanf("%d",&a[i+5*j]);
        }
        for(k=0; k<(i+5*j); k++){
            printf("%d ",a[k]);
        }
        a = (int*)malloc(sizeof(int)*(5+5*j));
    }
    free(a);
    return 0;
}

