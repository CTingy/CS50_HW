#include <stdio.h>
#include <stdlib.h>

int main(){
    int people, subject, i, j;
    int** score;
    float sum = 0;
    printf("please enter number of people\n");
    scanf("%d", &people);
    printf("please enter number of subjects\n");
    scanf("%d", &subject);
    score = (int**)malloc(sizeof(int*)*people);
    for(i=0; i<people; i++){
        score[i]=(int*)malloc(sizeof(int)*subject);
        printf("請輸入%d號學生成績\n", i+1);
        sum = 0;
    
        for(j=0; j<subject; j++){
        printf("請輸入科目%d成績\n", j+1);
        scanf("%d", &score[i][j]);
        sum += score[i][j];
        }
        printf("%d號學生平均成績為%.2f\n", i + 1, sum / subject);
    }
    for(i=0; i<people; i++)
        free(score[i]);
    free(score);

    return 0;
}