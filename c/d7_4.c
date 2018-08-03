#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct CONTACTS {
    char name[20];
    char phone[20];
};
typedef struct CONTACTS cont;

int main(){
    int i, num = 0;
    int a = 0;
    cont cts[10];
    do{
        printf("請輸入姓名:");	scanf("%s", cts[num].name);
		printf("請輸入電話:");	scanf("%s", cts[num].phone);
		printf("是否要繼續輸入?");
		scanf("%i", &a); printf("\n");
		num++;
    }while(a == 1);
    for(i=0; i<num; i++)
        printf("%s:%s\n", cts[i].name, cts[i].phone);
    return 0;
}
