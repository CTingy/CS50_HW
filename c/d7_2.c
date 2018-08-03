#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct POINT{
    int x, y;
};
typedef struct POINT pnt;

int main(){
    float dis;
    pnt p1;
    pnt* p2;
    p1.x = 0; p1.y = 0;
    p2->x = 4; p2->y = 5;
    
    dis = pow(p2->x - p1.x, 2) + pow(p2->y - p1.y, 2)
    dis = sqrt(dis);
    printf("dis=%f\n", dis);
    printf("%p\n", p2);
    free(p2);
    return 0;
}
