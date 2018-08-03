#include <stdio.h>
#include <stdlib.h>

int main(){
    int m, n, i, j;
	int** element1;
	int** element2;
	printf("請輸入列數:"); scanf("%d", &m);
	printf("請輸入行數:"); scanf("%d", &n);
	printf("請輸入第一個矩陣元素:\n");
    element1=(int**)malloc(sizeof(int*)*m);
    for(i=0; i<m; i++){
        element1[i]=(int*)malloc(sizeof(int)*n);
        for(j=0; j<n; j++){
        scanf("%d", &element1[i][j]);
        }
    }
    printf("請輸入第二個矩陣元素:\n");
    element2=(int**)malloc(sizeof(int*)*m);
    for(i=0; i<m; i++){
        element2[i]=(int*)malloc(sizeof(int)*n);
        for(j=0; j<n; j++){
        scanf("%d", &element2[i][j]);
        }
    }
    printf("阿達馬乘積結果為:\n");
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            printf("%3d ", element1[i][j]*element2[i][j]);
        }
        printf("\n");
    }
	for (i = 0; i < m; ++i){
		free(element1[i]);
		free(element2[i]);	    
	}
	free(element1);
	free(element2);
	return 0;
}
