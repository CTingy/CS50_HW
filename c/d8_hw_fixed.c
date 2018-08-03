#include <stdio.h> 
#include <stdlib.h> 
#include <math.h> 

struct PRODUCTS{ 
    char item[50]; 
    int number; 
    int price; 
}; 
typedef struct PRODUCTS pds; 

int main()
{ 
    int i, n, no = 0, sum1 = 0, sum2 = 0; 
    FILE *pf_out = fopen("out.txt", "w"); 
    
    if (!pf_out)
	{  
    	printf("新增檔案失敗\n");  
    	return 0;  
 	} 

    printf("請輸入品項數量(須低於10): "); 
    scanf("%d", &n); 
    
    //pds* pd = (pds*)malloc(sizeof(pd)*n); 
    pds pd[3];

    for(i=0; i<n; i++) 
    { 
        printf("請輸入品項: "); scanf("%s", &(pd+i)->item); 
		printf("請輸入數量: "); scanf("%d", &(pd+i)->number); 
        printf("請輸入單價: "); scanf("%d", &(pd+i)->price); 
    } 
     
    for(i=0; i<n; i++) 
    { 
    	sum1 = ((pd+i)->number)*((pd+i)->price); 
    	
        printf("品項：%s  ", (pd+i)->item); 
 		printf("小計：%d\n", sum1); 
 		
 		fprintf(pf_out, "品項：%s  ", (pd+i)->item); 
    	fprintf(pf_out, "小計：%d\n", sum1); 
 		
  		sum2 += sum1; 
    } 
    printf("總計：%d元\n", sum2); 
    fprintf(pf_out, "總計：%d元\n", sum2); 
     
    //free(pd); 
    fclose(pf_out);
    return 0; 
}
