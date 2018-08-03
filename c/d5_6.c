#include <stdio.h>

int main(){
    int a = 10;
    int* pa;
    pa = &a;
    printf("a: %d, address of a: %p\n", a, pa);
    
    (*pa)++;
    printf("a: %d, address of a: %p\n", a, pa);
    
    return 0;
}
