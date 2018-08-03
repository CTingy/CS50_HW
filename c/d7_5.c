#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct CONTACTS {
    char name[20];
    char phone[20];
    char email[30];
};
typedef struct CONTACTS cont;

int main(){
    int i, people, num = 0;

    printf("請輸入人數:");
    scanf("%d", &people);
    cont* cts = (cont*)malloc(sizeof(cont)*people);

    for(i=0; i<people; i++)
    {
        printf("請輸入姓名:");	scanf("%s", cts[num].name);
		printf("請輸入電話:");	scanf("%s", cts[num].phone);
        printf("請輸入信箱:");	scanf("%s", cts[num].email);
		num++;
    }
    for(i=0; i<num; i++)
    {
        printf("姓名：%s\t", cts[i].name);
		printf("電話：%s\t", cts[i].phone);
        printf("信箱：%s\n", cts[i].email);
    }

    return 0;
}
