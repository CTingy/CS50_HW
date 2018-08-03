#include <stdio.h>
int main(){
    int a[5] = {1,2,3,4,5};
    int* ptr = a;
    int i;
    printf("address of a: %p\n", a);
    printf("address of ptr: %p\n", ptr);
    printf("value of ptr: %d\n", *ptr);
    printf("value of *a: %d\n", *a);
    for(i=0; i<5; ++i)
        printf("%d ", ptr[i]);
    printf("\n");
    return 0;
}