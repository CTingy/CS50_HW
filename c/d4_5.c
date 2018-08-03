//費式數列
#include <stdio.h>

int fi(int n);
int main(){
    int n = 8;
    printf("Fibonacci at %d = %d\n", n, fi(n));
    return 0;
}
int fi(int n){
    if(n == 0)
        return 0;
    else if(n == 1)
        return 1;
    else
        return fi(n-1) + fi(n-2);
}