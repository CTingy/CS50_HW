#include <stdlib.h>
#include <stdio.h>
int main() {
	int n, people, subject, i, j, k;
	int*** score;
	float sumOfClass, sumOfPeople;
	printf("請輸入班級數:");  scanf("%d", &n);
	printf("請輸入人數:"); scanf("%d", &people);
	printf("請輸入科目數:"); scanf("%d", &subject);
	score = (int***)malloc(sizeof(int**)*n);
	for (i = 0; i < n; ++i) {
		score[i] = (int**)malloc(sizeof(int*)*people);
		sumOfClass = 0;
		printf("請輸入%d班成績\n", i + 1);
		for (j = 0; j < people; ++j) {
			score[i][j] = (int*)malloc(sizeof(int)*subject);
			sumOfPeople = 0;
			printf("請輸入%d號學生成績\n", j + 1);
			for (k = 0; k < subject; ++k) {
				printf("請輸入科目%d成績:", k + 1);
				scanf("%d", &score[i][j][k]);
				sumOfPeople += score[i][j][k];
			}
			sumOfClass += sumOfPeople;
			printf("%d號學生平均成績%.2f\n", j+1, sumOfPeople/subject);
		}
		printf("%d班平均成績%.2f\n", i + 1, sumOfClass / people / subject);
			for (i = 0; i < n; ++i) {
		for (j = 0; j < people; ++j)
			free(score[i][j]);
		free(score[i]);
	}
	free(score);
	return 0;
}

	}
