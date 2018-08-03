#include <stdio.h>
#include <stdlib.h>

int main(){
    int m, n, i, j;
	int** element;
	printf("請輸入列數:"); scanf("%d", &m);
	printf("請輸入行數:"); scanf("%d", &n);
    element=(int**)malloc(sizeof(int*)*m);
    for(i=0; i<m; i++){
        element[i]=(int*)malloc(sizeof(int)*n);
        for(j=0; j<n; j++){
        scanf("%d", &element[i][j]);
        }
    }

    for(j=0; j<n; j++){
        for(i=0; i<m; i++){
            printf("%d ", element[i][j]);
        }
        printf("\n");
    }
	for (i = 0; i < n; ++i)
		free(element[i]);
	free(element);
	return 0;
}
