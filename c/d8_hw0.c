#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct PRODUCTS{
    char item[50];
    int number[50];
    int price[50];
};
typedef struct PRODUCTS pds;

int main(){
    int i, n, no = 0, sum1 = 0, sum2 = 0;

    printf("請輸入品項數量(須低於10): ");
    scanf("%d", &n);
    pds* pd = (pds*)malloc(sizeof(pd)*n);

    for(i=0; i<n; i++)
    {
        printf("請輸入品項: ");	scanf("%s", pd[no].item);
		printf("請輸入數量: ");	scanf("%d", pd[no].number);
        printf("請輸入單價: ");	scanf("%d", pd[no].price);
		no++;
    }
    
    FILE* pf_out;
	pf_out = fopen("./out.txt", "w");
	if (!pf_out){ 
	    printf("新增檔案失敗\n"); 
	    return 0; 
	}
    
    for(i=0; i<n; i++)
    {
        printf("品項：%s  ", pd[i].item);
        fprintf(pf_out, "品項：%4s  ", pd[i].item);
        sum1 = (*pd[i].number)*(*pd[i].price);
		printf("小計：%4d\n", (*pd[i].number)*(*pd[i].price));
		fprintf(pf_out, "小計：%4d\n", sum1);
		sum2 += sum1;
    }
    printf("總計：%d元\n", sum2);
    fprintf(pf_out, "總計：%d元\n", sum2);
    
    free(pd);
    return 0;
}