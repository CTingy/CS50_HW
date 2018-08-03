#include <stdio.h>
int main()
{
    printf("enter 10 scores\n");
    int i, j;
    int a[3][5];
    for (i=0; i<3; i++)
    {
        int tot=0;
        for (j=0; j<5; j++)
        {
           scanf("%d",&a[i][j]);
           tot =tot+a[i][j];
        }
    printf("%.2f\n", (float)tot/5);
    }
}