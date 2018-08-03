#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, b, c, i, j, k;

    printf("請輸入第一個矩陣列數: "); scanf("%d", &a);
    printf("請輸入第一個矩陣行數: "); scanf("%d", &b);
    printf("第一個矩陣行數等於第二個矩陣列數\n");
    printf("請輸入第二個矩陣行數: "); scanf("%d", &c);

	int** element1;
	int** element2;
	printf("請輸入第一個矩陣中的元素:\n");
    element1=(int**)malloc(sizeof(int*)*a);
    for(i=0; i<a; i++){
        element1[i]=(int*)malloc(sizeof(int)*b);
        for(j=0; j<b; j++){
        scanf("%d", &element1[i][j]);
        }
    }
    printf("請輸入第二個矩陣中的元素:\n");
    element2=(int**)malloc(sizeof(int*)*b);
    for(i=0; i<b; i++){
        element2[i]=(int*)malloc(sizeof(int)*c);
        for(j=0; j<c; j++){
            scanf("%d", &element2[i][j]);
        }
    }
    //Ans=(int**)malloc(sizeof(int*)*b);
    int Ans[i][j];
    printf("矩陣乘積結果為:\n");
    for (i=0; i<a; i++){
        for (j=0; j<c; j++){
            Ans[i][j]=0; 
            for(k=0; k<b; k++){
                Ans[i][j] = Ans[i][j] + element1[i][k] * element2[k][j];
            }
            printf("%3d ", Ans[i][j]);
        }
        printf("\n");
    }

	for (i = 0; i < a; ++i){
		free(element1[i]);
	}
	free(element1);
	
	for (i = 0; i < b; ++i){
		free(element2[i]);
	}
	free(element2);
	
	return 0;
}
