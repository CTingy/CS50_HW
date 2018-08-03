#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, i;
    int* score;
    float sum=0;
    printf("please enter the number of students:\n");
    scanf("%d", &n);
    score=(int*)malloc(sizeof(int)*n);
    for(i=0; i<n; i++){
        printf("第%d位學生成績:\n", i+1);
        scanf("%d", &score[i]);
        sum += score[i];
    }
    printf("Class average: %.2f\n", sum/n);
    free(score);
    return 0;
}